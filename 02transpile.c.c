// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
extern void* gComeResultObject;
extern _Bool gComeGCLib;
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
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};
struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};
struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};
struct list_item$1short
{
    short short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};
struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};
struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};
struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};
struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};
struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};
struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
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
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
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
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
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
struct sNodeBase
{
    int sline;
    char* sname;
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
struct tuple1$1sTypeph
{
    struct sType* v1;
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
    struct list$1sTypeph* mMultipleTypes;
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
    _Bool mRecord;
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
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
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
    struct list$1charph* mMethodGenericsTypeNames;
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
    struct buffer* mHeader;
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
struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
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
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
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
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
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
    struct list$1charph* method_generics_type_names;
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
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
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
typedef long intptr_t;
typedef int pid_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
typedef int blksize_t;
typedef unsigned int nlink_t;
typedef long register_t;
typedef long time_t;
typedef long suseconds_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long int u_int64_t;
typedef unsigned int mode_t;
typedef unsigned long int ino_t;
typedef unsigned long int dev_t;
typedef long blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef void* timer_t;
typedef int clockid_t;
typedef long clock_t;
typedef unsigned int id_t;
typedef int key_t;
typedef struct __pthread* pthread_t;
typedef int pthread_once_t;
typedef unsigned int pthread_key_t;
typedef int pthread_spinlock_t;
struct anonymous_typeX4
{
    unsigned int __attr;
};
typedef struct anonymous_typeX4 pthread_mutexattr_t;
struct anonymous_typeX5
{
    unsigned int __attr;
};
typedef struct anonymous_typeX5 pthread_condattr_t;
struct anonymous_typeX6
{
    unsigned int __attr;
};
typedef struct anonymous_typeX6 pthread_barrierattr_t;
struct anonymous_typeX7
{
    unsigned int __attr[2];
};
typedef struct anonymous_typeX7 pthread_rwlockattr_t;
union anonymous_typeZ10
{
int __i[sizeof(long)==8?14:9];
int __vi[sizeof(long)==8?14:9];
unsigned long int __s[sizeof(long)==8?7:9];
};
struct anonymous_typeX8
{
    union anonymous_typeZ10 __u;
};
typedef struct anonymous_typeX8 pthread_attr_t;
union anonymous_typeZ13
{
int __i[sizeof(long)==8?10:6];
int __vi[sizeof(long)==8?10:6];
void* __p[sizeof(long)==8?5:6];
};
struct anonymous_typeX11
{
    union anonymous_typeZ13 __u;
};
typedef struct anonymous_typeX11 pthread_mutex_t;
union anonymous_typeZ16
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};
struct anonymous_typeX14
{
    union anonymous_typeZ16 __u;
};
typedef struct anonymous_typeX14 pthread_cond_t;
union anonymous_typeZ19
{
int __i[sizeof(long)==8?14:8];
int __vi[sizeof(long)==8?14:8];
void* __p[sizeof(long)==8?7:8];
};
struct anonymous_typeX17
{
    union anonymous_typeZ19 __u;
};
typedef struct anonymous_typeX17 pthread_rwlock_t;
union anonymous_typeZ22
{
int __i[sizeof(long)==8?8:5];
int __vi[sizeof(long)==8?8:5];
void* __p[sizeof(long)==8?4:5];
};
struct anonymous_typeX20
{
    union anonymous_typeZ22 __u;
};
typedef struct anonymous_typeX20 pthread_barrier_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef char* caddr_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned short int ushort;
typedef unsigned int u_int;
typedef unsigned int uint;
typedef unsigned long int u_long;
typedef unsigned long int ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};
struct __sigset_t
{
    unsigned long int __bits[128/sizeof(long)];
};
typedef struct __sigset_t sigset_t;
typedef unsigned long int fd_mask;
struct anonymous_typeX23
{
    unsigned long int fds_bits[1024/8/sizeof(long)];
};
typedef struct anonymous_typeX23 fd_set;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused[2];
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_52;
    char** msg2_50;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_361;
    struct buffer** clang_option_344;
    struct buffer** cpp_option_345;
    struct list$1charph** files_346;
    struct list$1charph** object_files_347;
    _Bool* output_object_file_348;
    _Bool* output_cpp_file_349;
    _Bool* output_source_file_flag_350;
    char** output_file_name_351;
    _Bool* verbose_352;
    _Bool* come_debug_353;
    _Bool* come_malloc_354;
    _Bool* come_str_355;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);

struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);

int fclose(struct _IO_FILE* anonymous_var_nameX6);

int remove(const char* anonymous_var_nameX7);

int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);

int feof(struct _IO_FILE* anonymous_var_nameX10);

int ferror(struct _IO_FILE* anonymous_var_nameX11);

int fflush(struct _IO_FILE* anonymous_var_nameX12);

void clearerr(struct _IO_FILE* anonymous_var_nameX13);

int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);

long ftell(struct _IO_FILE* anonymous_var_nameX17);

void rewind(struct _IO_FILE* anonymous_var_nameX18);

int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);

int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);

unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);

unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

int fgetc(struct _IO_FILE* anonymous_var_nameX31);

int getc(struct _IO_FILE* anonymous_var_nameX32);

int getchar();

int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);

int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int putchar(int anonymous_var_nameX39);

char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);

int puts(const char* anonymous_var_nameX45);

int printf(const char* anonymous_var_nameX46, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);

int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);

int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);

int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);

int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);

int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);

int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int scanf(const char* anonymous_var_nameX66, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);

int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);

int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);

int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);

int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);

void perror(const char* anonymous_var_nameX79);

int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);

void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);

char* tmpnam(char* anonymous_var_nameX86);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);

struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);

int pclose(struct _IO_FILE* anonymous_var_nameX96);

int fileno(struct _IO_FILE* anonymous_var_nameX97);

int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);

long ftello(struct _IO_FILE* anonymous_var_nameX101);

int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);

int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);

void flockfile(struct _IO_FILE* anonymous_var_nameX107);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);

void funlockfile(struct _IO_FILE* anonymous_var_nameX109);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);

int putchar_unlocked(int anonymous_var_nameX113);

long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);

long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);

int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);

char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);

char* cuserid(char* anonymous_var_nameX128);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);

void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);

int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);

unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);

int getw(struct _IO_FILE* anonymous_var_nameX149);

int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);

char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);

int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);

int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);

char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);

int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);

int atoi(const char* anonymous_var_nameX177);

long atol(const char* anonymous_var_nameX178);

long long atoll(const char* anonymous_var_nameX179);

double atof(const char* anonymous_var_nameX180);

float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);

double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);

long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);

long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);

unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);

long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);

unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);

int rand();

void srand(unsigned int anonymous_var_nameX199);

void* malloc(unsigned long int anonymous_var_nameX200);

void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);

void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);

void free(void* anonymous_var_nameX205);

void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX208);

void _Exit(int anonymous_var_nameX209);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX210);

char* getenv(const char* anonymous_var_nameX211);

int system(const char* anonymous_var_nameX212);

void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX224);

long labs(long anonymous_var_nameX225);

long long llabs(long long anonymous_var_nameX226);

struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);

int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);

int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);

int unsetenv(const char* anonymous_var_nameX252);

int mkstemp(char* anonymous_var_nameX253);

int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);

char* mkdtemp(char* anonymous_var_nameX256);

int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);

int rand_r(unsigned int* anonymous_var_nameX260);

char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);

long int random();

void srandom(unsigned int anonymous_var_nameX263);

char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);

char* setstate(char* anonymous_var_nameX267);

int putenv(char* anonymous_var_nameX268);

int posix_openpt(int anonymous_var_nameX269);

int grantpt(int anonymous_var_nameX270);

int unlockpt(int anonymous_var_nameX271);

char* ptsname(int anonymous_var_nameX272);

char* l64a(long anonymous_var_nameX273);

long a64l(const char* anonymous_var_nameX274);

void setkey(const char* anonymous_var_nameX275);

double drand48();

double erand48(unsigned short int anonymous_var_nameX276[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX277[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX278[3]);

void srand48(long anonymous_var_nameX279);

unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);

void lcong48(unsigned short int anonymous_var_nameX281[7]);

void* alloca(unsigned long int anonymous_var_nameX282);

char* mktemp(char* anonymous_var_nameX283);

int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);

int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);

void* valloc(unsigned long int anonymous_var_nameX289);

void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);

int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);

int clearenv();

void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);

void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);

int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);

char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);

char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);

char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);

char* secure_getenv(const char* anonymous_var_nameX318);

float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);

double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);

long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);

void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);

void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);

void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);

int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);

void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);

char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);

char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);

char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);

char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);

int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);

int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);

int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);

unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);

char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);

char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);

unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);

unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);

char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);

char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);

char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);

unsigned long int strlen(const char* anonymous_var_nameX377);

char* strerror(int anonymous_var_nameX378);

int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);

void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);

void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);

char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);

char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);

int ffs(int anonymous_var_nameX391);

int ffsl(long anonymous_var_nameX392);

int ffsll(long long anonymous_var_nameX393);

int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);

int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);

int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);

int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);

char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);

int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);

char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);

unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);

char* strdup(const char* anonymous_var_nameX419);

char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);

char* strsignal(int anonymous_var_nameX422);

char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);

int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);

unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);

void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);

char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);

unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);

unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);

void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);

int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);

char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);

void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);

void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);

char* basename();

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_dynamic_typeof(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list_item$1charp_finalize(struct list_item$1char* self);
static void list$1charp_finalize(struct list$1char* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static void list$1shortp_finalize(struct list$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list_item$1longp_finalize(struct list_item$1long* self);
static void list$1longp_finalize(struct list$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static void list$1floatp_finalize(struct list$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static void list$1doublep_finalize(struct list$1double* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool charp_equals(char* self, char* right);

_Bool string_equals(char* self, char* right);

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

unsigned long int size_t_clone(long self);

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

char* size_t_to_string(unsigned long int self);

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

int FILE_write(struct _IO_FILE* f, char* str);

char* FILE_read(struct _IO_FILE* f);

int FILE_fclose(struct _IO_FILE* f);

int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* charp_read(char* file_name);

char* string_read(char* file_name);

char* charp_puts(char* self);

char* string_puts(char* self);

int int_printf(int self, char* msg);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

char* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

int come_main_v1(int argc, char** argv);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

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

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

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

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

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

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

int pipe(int anonymous_var_nameX597[2]);

int pipe2(int anonymous_var_nameX598[2], int anonymous_var_nameX599);

int close(int anonymous_var_nameX600);

int posix_close(int anonymous_var_nameX601, int anonymous_var_nameX602);

int dup(int anonymous_var_nameX603);

int dup2(int anonymous_var_nameX604, int anonymous_var_nameX605);

int dup3(int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608);

long lseek(int anonymous_var_nameX609, long anonymous_var_nameX610, int anonymous_var_nameX611);

int fsync(int anonymous_var_nameX612);

int fdatasync(int anonymous_var_nameX613);

long read(int anonymous_var_nameX614, void* anonymous_var_nameX615, unsigned long int anonymous_var_nameX616);

long write(int anonymous_var_nameX617, const void* anonymous_var_nameX618, unsigned long int anonymous_var_nameX619);

long pread(int anonymous_var_nameX620, void* anonymous_var_nameX621, unsigned long int anonymous_var_nameX622, long anonymous_var_nameX623);

long pwrite(int anonymous_var_nameX624, const void* anonymous_var_nameX625, unsigned long int anonymous_var_nameX626, long anonymous_var_nameX627);

int chown(const char* anonymous_var_nameX628, unsigned int anonymous_var_nameX629, unsigned int anonymous_var_nameX630);

int fchown(int anonymous_var_nameX631, unsigned int anonymous_var_nameX632, unsigned int anonymous_var_nameX633);

int lchown(const char* anonymous_var_nameX634, unsigned int anonymous_var_nameX635, unsigned int anonymous_var_nameX636);

int fchownat(int anonymous_var_nameX637, const char* anonymous_var_nameX638, unsigned int anonymous_var_nameX639, unsigned int anonymous_var_nameX640, int anonymous_var_nameX641);

int link(const char* anonymous_var_nameX642, const char* anonymous_var_nameX643);

int linkat(int anonymous_var_nameX644, const char* anonymous_var_nameX645, int anonymous_var_nameX646, const char* anonymous_var_nameX647, int anonymous_var_nameX648);

int symlink(const char* anonymous_var_nameX649, const char* anonymous_var_nameX650);

int symlinkat(const char* anonymous_var_nameX651, int anonymous_var_nameX652, const char* anonymous_var_nameX653);

long readlink(const char* anonymous_var_nameX654, char* anonymous_var_nameX655, unsigned long int anonymous_var_nameX656);

long readlinkat(int anonymous_var_nameX657, const char* anonymous_var_nameX658, char* anonymous_var_nameX659, unsigned long int anonymous_var_nameX660);

int unlink(const char* anonymous_var_nameX661);

int unlinkat(int anonymous_var_nameX662, const char* anonymous_var_nameX663, int anonymous_var_nameX664);

int rmdir(const char* anonymous_var_nameX665);

int truncate(const char* anonymous_var_nameX666, long anonymous_var_nameX667);

int ftruncate(int anonymous_var_nameX668, long anonymous_var_nameX669);

int access(const char* anonymous_var_nameX670, int anonymous_var_nameX671);

int faccessat(int anonymous_var_nameX672, const char* anonymous_var_nameX673, int anonymous_var_nameX674, int anonymous_var_nameX675);

int chdir(const char* anonymous_var_nameX676);

int fchdir(int anonymous_var_nameX677);

char* getcwd(char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

unsigned int alarm(unsigned int anonymous_var_nameX680);

unsigned int sleep(unsigned int anonymous_var_nameX681);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX682, char** anonymous_var_nameX683, char** anonymous_var_nameX684);

int execv(const char* anonymous_var_nameX685, char** anonymous_var_nameX686);

int execle(const char* anonymous_var_nameX687, const char* anonymous_var_nameX688, ...);

int execl(const char* anonymous_var_nameX689, const char* anonymous_var_nameX690, ...);

int execvp(const char* anonymous_var_nameX691, char** anonymous_var_nameX692);

int execlp(const char* anonymous_var_nameX693, const char* anonymous_var_nameX694, ...);

int fexecve(int anonymous_var_nameX695, char** anonymous_var_nameX696, char** anonymous_var_nameX697);

void _exit(int anonymous_var_nameX698);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX699);

int setpgid(int anonymous_var_nameX700, int anonymous_var_nameX701);

int setsid();

int getsid(int anonymous_var_nameX702);

char* ttyname(int anonymous_var_nameX703);

int ttyname_r(int anonymous_var_nameX704, char* anonymous_var_nameX705, unsigned long int anonymous_var_nameX706);

int isatty(int anonymous_var_nameX707);

int tcgetpgrp(int anonymous_var_nameX708);

int tcsetpgrp(int anonymous_var_nameX709, int anonymous_var_nameX710);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX711, unsigned int* anonymous_var_nameX712);

int setuid(unsigned int anonymous_var_nameX713);

int seteuid(unsigned int anonymous_var_nameX714);

int setgid(unsigned int anonymous_var_nameX715);

int setegid(unsigned int anonymous_var_nameX716);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX717, unsigned long int anonymous_var_nameX718);

int gethostname(char* anonymous_var_nameX719, unsigned long int anonymous_var_nameX720);

char* ctermid(char* anonymous_var_nameX721);

int getopt(int anonymous_var_nameX722, char** anonymous_var_nameX723, const char* anonymous_var_nameX724);

long pathconf(const char* anonymous_var_nameX725, int anonymous_var_nameX726);

long fpathconf(int anonymous_var_nameX727, int anonymous_var_nameX728);

long sysconf(int anonymous_var_nameX729);

unsigned long int confstr(int anonymous_var_nameX730, char* anonymous_var_nameX731, unsigned long int anonymous_var_nameX732);

int setreuid(unsigned int anonymous_var_nameX733, unsigned int anonymous_var_nameX734);

int setregid(unsigned int anonymous_var_nameX735, unsigned int anonymous_var_nameX736);

int lockf(int anonymous_var_nameX737, int anonymous_var_nameX738, long anonymous_var_nameX739);

long gethostid();

int nice(int anonymous_var_nameX740);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX741, const char* anonymous_var_nameX742);

void encrypt(char* anonymous_var_nameX743, int anonymous_var_nameX744);

void swab(const void* anonymous_var_nameX745, void* anonymous_var_nameX746, long anonymous_var_nameX747);

int usleep(unsigned int anonymous_var_nameX748);

unsigned int ualarm(unsigned int anonymous_var_nameX749, unsigned int anonymous_var_nameX750);

int brk(void* anonymous_var_nameX751);

void* sbrk(long anonymous_var_nameX752);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX753);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX754, unsigned long int anonymous_var_nameX755);

int getdomainname(char* anonymous_var_nameX756, unsigned long int anonymous_var_nameX757);

int setdomainname(const char* anonymous_var_nameX758, unsigned long int anonymous_var_nameX759);

int setgroups(unsigned long int anonymous_var_nameX760, const unsigned int* anonymous_var_nameX761);

char* getpass(const char* anonymous_var_nameX762);

int daemon(int anonymous_var_nameX763, int anonymous_var_nameX764);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX765);

long syscall(long anonymous_var_nameX766, ...);

int execvpe(const char* anonymous_var_nameX767, char** anonymous_var_nameX768, char** anonymous_var_nameX769);

int issetugid();

int getentropy(void* anonymous_var_nameX770, unsigned long int anonymous_var_nameX771);

int setresuid(unsigned int anonymous_var_nameX772, unsigned int anonymous_var_nameX773, unsigned int anonymous_var_nameX774);

int setresgid(unsigned int anonymous_var_nameX775, unsigned int anonymous_var_nameX776, unsigned int anonymous_var_nameX777);

int getresuid(unsigned int* anonymous_var_nameX778, unsigned int* anonymous_var_nameX779, unsigned int* anonymous_var_nameX780);

int getresgid(unsigned int* anonymous_var_nameX781, unsigned int* anonymous_var_nameX782, unsigned int* anonymous_var_nameX783);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX784);

int euidaccess(const char* anonymous_var_nameX785, int anonymous_var_nameX786);

int eaccess(const char* anonymous_var_nameX787, int anonymous_var_nameX788);

long copy_file_range(int anonymous_var_nameX789, long* anonymous_var_nameX790, int anonymous_var_nameX791, long* anonymous_var_nameX792, unsigned long int anonymous_var_nameX793, unsigned int anonymous_var_nameX794);

int gettid();

int select(int anonymous_var_nameX795, struct anonymous_typeX23* anonymous_var_nameX796, struct anonymous_typeX23* anonymous_var_nameX797, struct anonymous_typeX23* anonymous_var_nameX798, struct timeval* anonymous_var_nameX799);

int pselect(int anonymous_var_nameX800, struct anonymous_typeX23* anonymous_var_nameX801, struct anonymous_typeX23* anonymous_var_nameX802, struct anonymous_typeX23* anonymous_var_nameX803, const struct timespec* anonymous_var_nameX804, const struct __sigset_t* anonymous_var_nameX805);

int stat(const char* anonymous_var_nameX806, struct stat* anonymous_var_nameX807);

int fstat(int anonymous_var_nameX808, struct stat* anonymous_var_nameX809);

int lstat(const char* anonymous_var_nameX810, struct stat* anonymous_var_nameX811);

int fstatat(int anonymous_var_nameX812, const char* anonymous_var_nameX813, struct stat* anonymous_var_nameX814, int anonymous_var_nameX815);

int chmod(const char* anonymous_var_nameX816, unsigned int anonymous_var_nameX817);

int fchmod(int anonymous_var_nameX818, unsigned int anonymous_var_nameX819);

int fchmodat(int anonymous_var_nameX820, const char* anonymous_var_nameX821, unsigned int anonymous_var_nameX822, int anonymous_var_nameX823);

unsigned int umask(unsigned int anonymous_var_nameX824);

int mkdir(const char* anonymous_var_nameX825, unsigned int anonymous_var_nameX826);

int mkfifo(const char* anonymous_var_nameX827, unsigned int anonymous_var_nameX828);

int mkdirat(int anonymous_var_nameX829, const char* anonymous_var_nameX830, unsigned int anonymous_var_nameX831);

int mkfifoat(int anonymous_var_nameX832, const char* anonymous_var_nameX833, unsigned int anonymous_var_nameX834);

int mknod(const char* anonymous_var_nameX835, unsigned int anonymous_var_nameX836, unsigned long int anonymous_var_nameX837);

int mknodat(int anonymous_var_nameX838, const char* anonymous_var_nameX839, unsigned int anonymous_var_nameX840, unsigned long int anonymous_var_nameX841);

int futimens(int anonymous_var_nameX842, const struct timespec anonymous_var_nameX843[2]);

int utimensat(int anonymous_var_nameX844, const char* anonymous_var_nameX845, const struct timespec anonymous_var_nameX846[2], int anonymous_var_nameX847);

int lchmod(const char* anonymous_var_nameX848, unsigned int anonymous_var_nameX849);

int* __errno_location();

void come_init_v2();

void come_final_v2();

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*));
static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item);
void* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1voidp_join(struct list$1voidp* self, char* sep);
static void* list$1voidp_begin(struct list$1voidp* self);
static _Bool list$1voidp_end(struct list$1voidp* self);
static void* list$1voidp_next(struct list$1voidp* self);
static int list$1voidp_length(struct list$1voidp* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static void clear_tmp_file(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, struct sInfo* info);

static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
void init_module(struct sInfo* info);

_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool make_header_project(int argc, char** argv);

_Bool compile_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

int come_main_v2(int argc, char** argv);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "./neo-c.h"
    perror(msg);
    # 51 "./neo-c.h"
    stackframe();
    # 52 "./neo-c.h"
    exit(4);
    # 54 "./neo-c.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    # 1943 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1943, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1944 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    # 1950 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1950, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    # 1957 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1957, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1958 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    # 1964 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1964, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1965 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    # 1971 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1971, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1972 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    # 1978 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1978, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1979 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    # 1993 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1995 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1996 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    # 2003 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2005 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2006 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    # 2013 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2015 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2016 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    # 2023 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2025 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2026 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    # 2033 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2035 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2036 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2204 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2204, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    # 2209 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2209, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    # 2214 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2214, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    # 2219 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2219, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    # 2224 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2224, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    # 2229 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2229, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    # 2234 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2234, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    # 2239 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2239, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    # 2244 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2244, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    # 2249 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2249, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    # 2254 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2254, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    # 2259 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2259, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2289 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2294 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2299 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2304 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2309 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2314 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2375 "./neo-c.h"
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    # 2380 "./neo-c.h"
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    # 2385 "./neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
unsigned short int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 21 "/usr/include/endian.h"
    __result52__ = __x<<8|__x>>8;
    return __result52__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
unsigned int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 26 "/usr/include/endian.h"
    __result53__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result53__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
unsigned long int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 31 "/usr/include/endian.h"
    __result54__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result54__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        # 2045 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 118 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 121 "./neo-c.h"
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional7;
void* right_value47;
struct list_item$1char* litem_12;
_Bool _if_conditional8;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 227 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_12->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_12;
                    # 234 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 237 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_13->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_13;
                        # 244 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 247, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_14->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 254 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result25__ = __result_obj__ = self;
                return __result25__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1char* self){
void* __result_obj__;
struct list_item$1char* it_15;
_Bool _while_condtional1;
struct list_item$1char* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            # 124 "./neo-c.h"
            it_15=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 126 "./neo-c.h"
                prev_it_16=it_15;
                # 127 "./neo-c.h"
                it_15=it_15->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 118 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 121 "./neo-c.h"
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value52;
struct list_item$1short* litem_18;
_Bool _if_conditional10;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 227 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_18->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_18;
                    # 234 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 237 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_19->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_19;
                        # 244 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 247, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_20->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 254 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result28__ = __result_obj__ = self;
                return __result28__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1shortp_finalize(struct list$1short* self){
void* __result_obj__;
struct list_item$1short* it_21;
_Bool _while_condtional2;
struct list_item$1short* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            # 124 "./neo-c.h"
            it_21=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 126 "./neo-c.h"
                prev_it_22=it_21;
                # 127 "./neo-c.h"
                it_21=it_21->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 118 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 121 "./neo-c.h"
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value57;
struct list_item$1int* litem_24;
_Bool _if_conditional12;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 227 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_24->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_24;
                    # 234 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 237 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_25->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_25;
                        # 244 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 247, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_26->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 254 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result31__ = __result_obj__ = self;
                return __result31__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1intp_finalize(struct list$1int* self){
void* __result_obj__;
struct list_item$1int* it_27;
_Bool _while_condtional3;
struct list_item$1int* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            # 124 "./neo-c.h"
            it_27=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 126 "./neo-c.h"
                prev_it_28=it_27;
                # 127 "./neo-c.h"
                it_27=it_27->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 118 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 121 "./neo-c.h"
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value62;
struct list_item$1long* litem_30;
_Bool _if_conditional14;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 227 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_30->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_30;
                    # 234 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 237 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_31->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_31;
                        # 244 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 247, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_32->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 254 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result34__ = __result_obj__ = self;
                return __result34__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1longp_finalize(struct list$1long* self){
void* __result_obj__;
struct list_item$1long* it_33;
_Bool _while_condtional4;
struct list_item$1long* prev_it_34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            # 124 "./neo-c.h"
            it_33=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 126 "./neo-c.h"
                prev_it_34=it_33;
                # 127 "./neo-c.h"
                it_33=it_33->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 118 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 121 "./neo-c.h"
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value67;
struct list_item$1float* litem_36;
_Bool _if_conditional16;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 227 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_36->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_36;
                    # 234 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 237 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_37->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_37;
                        # 244 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 247, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_38->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 254 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result37__ = __result_obj__ = self;
                return __result37__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1floatp_finalize(struct list$1float* self){
void* __result_obj__;
struct list_item$1float* it_39;
_Bool _while_condtional5;
struct list_item$1float* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            # 124 "./neo-c.h"
            it_39=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 126 "./neo-c.h"
                prev_it_40=it_39;
                # 127 "./neo-c.h"
                it_39=it_39->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 118 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 121 "./neo-c.h"
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value72;
struct list_item$1double* litem_42;
_Bool _if_conditional18;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 227 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_42->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_42;
                    # 234 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 237 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_43->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_43;
                        # 244 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 247, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_44->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 254 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result40__ = __result_obj__ = self;
                return __result40__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1doublep_finalize(struct list$1double* self){
void* __result_obj__;
struct list_item$1double* it_45;
_Bool _while_condtional6;
struct list_item$1double* prev_it_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            # 124 "./neo-c.h"
            it_45=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 126 "./neo-c.h"
                prev_it_46=it_45;
                # 127 "./neo-c.h"
                it_45=it_45->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}













void come_init_v2(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v2(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value79;
void* right_value80;
void* right_value81;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    # 35 "02transpile.c"
    # 29 "02transpile.c"
    if(gComeOriginalSourcePosition) {
        # 34 "02transpile.c"
        # 30 "02transpile.c"
        if(info->writing_source_file_position) {
            # 31 "02transpile.c"
            add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(info->sline))),((char*)(right_value80=string_to_string(info->sname)))))));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 32 "02transpile.c"
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* sname_47;
int sline_48;
void* right_value83;
void* right_value84;
char* __dec_obj12;
_Bool result_49;
void* right_value85;
char* __dec_obj13;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&sname_47, 0, sizeof(char*));
memset(&sline_48, 0, sizeof(int));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_49, 0, sizeof(_Bool));
right_value85 = (void*)0;
    # 39 "02transpile.c"
    sname_47=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 40 "02transpile.c"
    sline_48=info->sline;
    # 42 "02transpile.c"
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(((char*)(right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 43 "02transpile.c"
    info->sline=node->sline(node->_protocol_obj);
    # 45 "02transpile.c"
    write_source_file_position_to_source(info);
    # 47 "02transpile.c"
    result_49=node->compile(node->_protocol_obj,info);
    # 49 "02transpile.c"
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 50 "02transpile.c"
    info->sline=sline_48;
    # 52 "02transpile.c"
    __result55__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result55__;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional21;
char* msg2_50;
va_list args_51;
_Bool _if_conditional22;
int n_52;
void* right_value86;
void* right_value87;
void* right_value93;
struct __current_stack1__ __current_stack1__;
void* right_value100;
void* right_value104;
void* right_value105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
memset(&n_52, 0, sizeof(int));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value93 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value100 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
    # 76 "02transpile.c"
    # 57 "02transpile.c"
    if(_if_conditional21=!info->no_output_err,    _if_conditional21) {
        # 58 "02transpile.c"
        # 60 "02transpile.c"
        # 61 "02transpile.c"
        __builtin_va_start(args_51,msg);
        # 62 "02transpile.c"
        vasprintf(&msg2_50,msg,args_51);
        # 63 "02transpile.c"
        __builtin_va_end(args_51);
        # 65 "02transpile.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        # 66 "02transpile.c"
        info->err_num++;
        # 67 "02transpile.c"
        stackframe();
        # 74 "02transpile.c"
        # 69 "02transpile.c"
        if(info->come_fun) {
            # 70 "02transpile.c"
            n_52=info->sline-5;
            # 71 "02transpile.c"
            __current_stack1__.n_52 = &n_52;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value105=string_puts(((char*)(right_value104=list$1voidp_join(((struct list$1voidp*)(right_value100=list$1charph_map(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_52,n_52+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
                                    if(__current_stack1__.__method_block_result_kind__ == 4)
                        {
                            return;
                        }
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value100,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 74 "02transpile.c"
        free(msg2_50);
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1charph* result_55;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct list_item$1charph* it_56;
int i_57;
_Bool _while_condtional8;
_Bool _if_conditional28;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1charph*));
memset(&it_56, 0, sizeof(struct list_item$1charph*));
memset(&i_57, 0, sizeof(int));
                # 647 "./neo-c.h"
                result_55=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 647, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 653 "./neo-c.h"
                # 649 "./neo-c.h"
                if(_if_conditional24=begin<0,                _if_conditional24) {
                    # 650 "./neo-c.h"
                    begin+=self->len;
                }
                # 657 "./neo-c.h"
                # 653 "./neo-c.h"
                if(_if_conditional25=tail<0,                _if_conditional25) {
                    # 654 "./neo-c.h"
                    tail+=self->len+1;
                }
                # 661 "./neo-c.h"
                # 657 "./neo-c.h"
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    # 658 "./neo-c.h"
                    begin=0;
                }
                # 665 "./neo-c.h"
                # 661 "./neo-c.h"
                if(_if_conditional27=tail>=self->len,                _if_conditional27) {
                    # 662 "./neo-c.h"
                    tail=self->len;
                }
                # 665 "./neo-c.h"
                it_56=self->head;
                # 666 "./neo-c.h"
                i_57=0;
                # 673 "./neo-c.h"
                while(_while_condtional8=it_56!=((void*)0),                _while_condtional8) {
                    # 671 "./neo-c.h"
                    # 668 "./neo-c.h"
                    if(_if_conditional28=i_57>=begin&&i_57<tail,                    _if_conditional28) {
                        # 669 "./neo-c.h"
                        list$1charph_push_back(result_55,(char*)come_increment_ref_count(it_56->item));
                    }
                    # 671 "./neo-c.h"
                    it_56=it_56->next;
                    # 672 "./neo-c.h"
                    i_57++;
                }
                # 675 "./neo-c.h"
                __result58__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 105 "./neo-c.h"
                    self->head=((void*)0);
                    # 106 "./neo-c.h"
                    self->tail=((void*)0);
                    # 107 "./neo-c.h"
                    self->len=0;
                    # 109 "./neo-c.h"
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                        # 124 "./neo-c.h"
                        it_53=self->head;
                        # 130 "./neo-c.h"
                        while(_while_condtional7=it_53!=((void*)0),                        _while_condtional7) {
                            # 126 "./neo-c.h"
                            prev_it_54=it_53;
                            # 127 "./neo-c.h"
                            it_53=it_53->next;
                            # 128 "./neo-c.h"
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value90;
struct list_item$1charph* litem_58;
char* __dec_obj14;
_Bool _if_conditional30;
void* right_value91;
struct list_item$1charph* litem_59;
char* __dec_obj15;
void* right_value92;
struct list_item$1charph* litem_60;
char* __dec_obj16;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
                            # 257 "./neo-c.h"
                            # 226 "./neo-c.h"
                            if(_if_conditional29=self->len==0,                            _if_conditional29) {
                                # 227 "./neo-c.h"
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 229 "./neo-c.h"
                                litem_58->prev=((void*)0);
                                # 230 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 231 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 233 "./neo-c.h"
                                self->tail=litem_58;
                                # 234 "./neo-c.h"
                                self->head=litem_58;
                            }
                            else {
                                # 257 "./neo-c.h"
                                # 236 "./neo-c.h"
                                if(_if_conditional30=self->len==1,                                _if_conditional30) {
                                    # 237 "./neo-c.h"
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 239 "./neo-c.h"
                                    litem_59->prev=self->head;
                                    # 240 "./neo-c.h"
                                    litem_59->next=((void*)0);
                                    # 241 "./neo-c.h"
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 243 "./neo-c.h"
                                    self->tail=litem_59;
                                    # 244 "./neo-c.h"
                                    self->head->next=litem_59;
                                }
                                else {
                                    # 247 "./neo-c.h"
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 247, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 249 "./neo-c.h"
                                    litem_60->prev=self->tail;
                                    # 250 "./neo-c.h"
                                    litem_60->next=((void*)0);
                                    # 251 "./neo-c.h"
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 253 "./neo-c.h"
                                    self->tail->next=litem_60;
                                    # 254 "./neo-c.h"
                                    self->tail=litem_60;
                                }
                            }
                            # 257 "./neo-c.h"
                            self->len++;
                            # 259 "./neo-c.h"
                            __result57__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result57__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1voidp* result_63;
struct list_item$1charph* it_64;
_Bool _while_condtional10;
_Bool _if_conditional33;
struct list$1voidp* __result61__;
struct list$1voidp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1voidp*));
memset(&it_64, 0, sizeof(struct list_item$1charph*));
                # 928 "./neo-c.h"
                result_63=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value95=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value94=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./neo-c.h", 928, "list$1voidp"))))))));
                come_call_finalizer3(right_value94,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                # 930 "./neo-c.h"
                it_64=self->head;
                # 941 "./neo-c.h"
                while(_while_condtional10=it_64!=((void*)0),                _while_condtional10) {
                    # 932 "./neo-c.h"
                    list$1voidp_push_back(result_63,block(parent,it_64->item));
                    # 938 "./neo-c.h"
                    # 934 "./neo-c.h"
                    if(_if_conditional33=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                    _if_conditional33) {
                        # 935 "./neo-c.h"
                        __result61__ = __result_obj__ = result_63;
                        come_call_finalizer3(result_63,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                    }
                    # 938 "./neo-c.h"
                    it_64=it_64->next;
                }
                # 941 "./neo-c.h"
                __result62__ = __result_obj__ = result_63;
                come_call_finalizer3(result_63,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer3(result_63,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
struct list$1voidp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 105 "./neo-c.h"
                    self->head=((void*)0);
                    # 106 "./neo-c.h"
                    self->tail=((void*)0);
                    # 107 "./neo-c.h"
                    self->len=0;
                    # 109 "./neo-c.h"
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
struct list_item$1voidp* it_61;
_Bool _while_condtional9;
struct list_item$1voidp* prev_it_62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_62, 0, sizeof(struct list_item$1voidp*));
                        # 124 "./neo-c.h"
                        it_61=self->head;
                        # 130 "./neo-c.h"
                        while(_while_condtional9=it_61!=((void*)0),                        _while_condtional9) {
                            # 126 "./neo-c.h"
                            prev_it_62=it_61;
                            # 127 "./neo-c.h"
                            it_61=it_61->next;
                            # 128 "./neo-c.h"
                            come_call_finalizer3(prev_it_62,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value96;
struct list_item$1voidp* litem_65;
_Bool _if_conditional32;
void* right_value97;
struct list_item$1voidp* litem_66;
void* right_value98;
struct list_item$1voidp* litem_67;
struct list$1voidp* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1voidp*));
right_value97 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1voidp*));
right_value98 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1voidp*));
                        # 257 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            # 227 "./neo-c.h"
                            litem_65=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value96=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 227, "list_item$1voidp"))));
                            come_call_finalizer3(right_value96,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_65->prev=((void*)0);
                            # 230 "./neo-c.h"
                            litem_65->next=((void*)0);
                            # 231 "./neo-c.h"
                            litem_65->item=item;
                            # 233 "./neo-c.h"
                            self->tail=litem_65;
                            # 234 "./neo-c.h"
                            self->head=litem_65;
                        }
                        else {
                            # 257 "./neo-c.h"
                            # 236 "./neo-c.h"
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                # 237 "./neo-c.h"
                                litem_66=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value97=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 237, "list_item$1voidp"))));
                                come_call_finalizer3(right_value97,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 239 "./neo-c.h"
                                litem_66->prev=self->head;
                                # 240 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 241 "./neo-c.h"
                                litem_66->item=item;
                                # 243 "./neo-c.h"
                                self->tail=litem_66;
                                # 244 "./neo-c.h"
                                self->head->next=litem_66;
                            }
                            else {
                                # 247 "./neo-c.h"
                                litem_67=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value98=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 247, "list_item$1voidp"))));
                                come_call_finalizer3(right_value98,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 249 "./neo-c.h"
                                litem_67->prev=self->tail;
                                # 250 "./neo-c.h"
                                litem_67->next=((void*)0);
                                # 251 "./neo-c.h"
                                litem_67->item=item;
                                # 253 "./neo-c.h"
                                self->tail->next=litem_67;
                                # 254 "./neo-c.h"
                                self->tail=litem_67;
                            }
                        }
                        # 257 "./neo-c.h"
                        self->len++;
                        # 259 "./neo-c.h"
                        __result60__ = __result_obj__ = self;
                        return __result60__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value99;
void* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
                # 72 "02transpile.c"
                __result63__ = __result_obj__ = ((char*)(right_value99=xsprintf("%d %s",++(*(parent->n_52)),it)));
                right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result63__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
void* right_value101;
void* right_value102;
struct buffer* buf_68;
int n_69;
void* it_72;
_Bool _if_conditional39;
void* right_value103;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&buf_68, 0, sizeof(struct buffer*));
memset(&n_69, 0, sizeof(int));
memset(&it_72, 0, sizeof(void*));
right_value103 = (void*)0;
                # 1048 "./neo-c.h"
                buf_68=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1048, "buffer"))))))));
                come_call_finalizer3(right_value101,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value102,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 1050 "./neo-c.h"
                n_69=0;
                # 1061 "./neo-c.h"
                for(                it_72=list$1voidp_begin(self);                !list$1voidp_end(self);                it_72=list$1voidp_next(self)                ){
                    # 1052 "./neo-c.h"
                    buffer_append_str(buf_68,it_72);
                    # 1058 "./neo-c.h"
                    # 1054 "./neo-c.h"
                    if(_if_conditional39=n_69<list$1voidp_length(self)-1,                    _if_conditional39) {
                        # 1055 "./neo-c.h"
                        buffer_append_str(buf_68,sep);
                    }
                    # 1058 "./neo-c.h"
                    n_69++;
                }
                # 1061 "./neo-c.h"
                __result73__ = __result_obj__ = ((char*)(right_value103=buffer_to_string(buf_68)));
                come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result73__;
                come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional34;
void* result_70;
void* __result64__;
_Bool _if_conditional35;
void* __result65__;
void* result_71;
void* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(void*));
memset(&result_71, 0, sizeof(void*));
                    # 291 "./neo-c.h"
                    # 286 "./neo-c.h"
                    if(_if_conditional34=self==((void*)0),                    _if_conditional34) {
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_70,0,sizeof(void*));
                        # 289 "./neo-c.h"
                        __result64__ = __result_obj__ = result_70;
                        return __result64__;
                    }
                    # 291 "./neo-c.h"
                    self->it=self->head;
                    # 297 "./neo-c.h"
                    # 293 "./neo-c.h"
                    if(self->it) {
                        # 294 "./neo-c.h"
                        __result65__ = __result_obj__ = self->it->item;
                        return __result65__;
                    }
                    # 297 "./neo-c.h"
                    # 298 "./neo-c.h"
                    memset(&result_71,0,sizeof(void*));
                    # 299 "./neo-c.h"
                    __result66__ = __result_obj__ = result_71;
                    return __result66__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 321 "./neo-c.h"
                    __result67__ = self==((void*)0)||self->it==((void*)0);
                    return __result67__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional36;
void* result_73;
void* __result68__;
_Bool _if_conditional37;
void* __result69__;
void* result_74;
void* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(void*));
memset(&result_74, 0, sizeof(void*));
                    # 309 "./neo-c.h"
                    # 303 "./neo-c.h"
                    if(_if_conditional36=self==((void*)0)||self->it==((void*)0),                    _if_conditional36) {
                        # 304 "./neo-c.h"
                        # 305 "./neo-c.h"
                        memset(&result_73,0,sizeof(void*));
                        # 306 "./neo-c.h"
                        __result68__ = __result_obj__ = result_73;
                        return __result68__;
                    }
                    # 309 "./neo-c.h"
                    self->it=self->it->next;
                    # 315 "./neo-c.h"
                    # 311 "./neo-c.h"
                    if(self->it) {
                        # 312 "./neo-c.h"
                        __result69__ = __result_obj__ = self->it->item;
                        return __result69__;
                    }
                    # 315 "./neo-c.h"
                    # 316 "./neo-c.h"
                    memset(&result_74,0,sizeof(void*));
                    # 317 "./neo-c.h"
                    __result70__ = __result_obj__ = result_74;
                    return __result70__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional38;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 368 "./neo-c.h"
                        # 365 "./neo-c.h"
                        if(_if_conditional38=self==((void*)0),                        _if_conditional38) {
                            # 366 "./neo-c.h"
                            __result71__ = 0;
                            return __result71__;
                        }
                        # 368 "./neo-c.h"
                        __result72__ = self->len;
                        return __result72__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    # 80 "02transpile.c"
    __result74__ = 0;
    return __result74__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* output_file_name_75;
void* right_value107;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&output_file_name_75, 0, sizeof(char*));
right_value107 = (void*)0;
    # 85 "02transpile.c"
    output_file_name_75=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("%s.c",info->sname))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 89 "02transpile.c"
    string_write(((char*)(right_value107=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_75,(_Bool)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 91 "02transpile.c"
    __result75__ = (_Bool)1;
    output_file_name_75 = come_decrement_ref_count2(output_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    output_file_name_75 = come_decrement_ref_count2(output_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_76;
void* right_value108;
void* right_value109;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_76, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    # 96 "02transpile.c"
    input_file_name_76=(char*)come_increment_ref_count(info->sname);
    # 98 "02transpile.c"
    system(((char*)(right_value109=xsprintf("rm -f \%s.*",((char*)(right_value108=string_to_string(input_file_name_76)))))));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_76 = come_decrement_ref_count2(input_file_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_77;
char* output_file_name_78;
_Bool _if_conditional40;
void* right_value110;
char* __dec_obj17;
void* right_value111;
char* __dec_obj18;
void* right_value112;
char* cmd_79;
_Bool exist_common_h_80;
struct _IO_FILE* f_81;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
int rc_82;
_Bool _if_conditional45;
void* right_value113;
void* right_value114;
char* cmd2_83;
_Bool _if_conditional46;
int rc_84;
_Bool _if_conditional47;
void* right_value115;
char* command2_85;
_Bool _if_conditional48;
void* right_value116;
void* right_value117;
char* cmd3_86;
_Bool _if_conditional49;
int rc_87;
void* right_value118;
char* command2_88;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value119;
void* right_value120;
char* cmd4_89;
void* right_value121;
char* command_90;
_Bool _if_conditional52;
void* right_value122;
char* command2_91;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_77, 0, sizeof(char*));
memset(&output_file_name_78, 0, sizeof(char*));
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&cmd_79, 0, sizeof(char*));
memset(&exist_common_h_80, 0, sizeof(_Bool));
memset(&f_81, 0, sizeof(struct _IO_FILE*));
memset(&rc_82, 0, sizeof(int));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&cmd2_83, 0, sizeof(char*));
memset(&rc_84, 0, sizeof(int));
right_value115 = (void*)0;
memset(&command2_85, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&cmd3_86, 0, sizeof(char*));
memset(&rc_87, 0, sizeof(int));
right_value118 = (void*)0;
memset(&command2_88, 0, sizeof(char*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&cmd4_89, 0, sizeof(char*));
right_value121 = (void*)0;
memset(&command_90, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&command2_91, 0, sizeof(char*));
    # 103 "02transpile.c"
    input_file_name_77=(char*)come_increment_ref_count(info->sname);
    # 105 "02transpile.c"
    # 113 "02transpile.c"
    # 106 "02transpile.c"
    if(_if_conditional40=!info->output_header_file&&info->output_file_name,    _if_conditional40) {
        # 107 "02transpile.c"
        __dec_obj17=output_file_name_78;
        output_file_name_78=(char*)come_increment_ref_count(((char*)(right_value110=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 110 "02transpile.c"
        __dec_obj18=output_file_name_78;
        output_file_name_78=(char*)come_increment_ref_count(((char*)(right_value111=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 113 "02transpile.c"
    cmd_79=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 115 "02transpile.c"
    exist_common_h_80=(_Bool)0;
    # 129 "02transpile.c"
    {
        # 117 "02transpile.c"
        f_81=fopen("common.h","r");
        # 121 "02transpile.c"
        # 118 "02transpile.c"
        if(f_81) {
            # 119 "02transpile.c"
            exist_common_h_80=(_Bool)1;
        }
        # 124 "02transpile.c"
        # 121 "02transpile.c"
        if(_if_conditional42=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional42) {
            # 122 "02transpile.c"
            exist_common_h_80=(_Bool)0;
        }
        # 127 "02transpile.c"
        # 124 "02transpile.c"
        if(f_81) {
            # 125 "02transpile.c"
            fclose(f_81);
        }
    }
    # 134 "02transpile.c"
    # 129 "02transpile.c"
    if(_if_conditional44=!gCommonHeader,    _if_conditional44) {
        # 130 "02transpile.c"
        exist_common_h_80=(_Bool)0;
    }
    # 134 "02transpile.c"
    rc_82=system(cmd_79);
    # 183 "02transpile.c"
    # 135 "02transpile.c"
    if(_if_conditional45=rc_82==0,    _if_conditional45) {
        # 136 "02transpile.c"
        cmd2_83=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value113=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 138 "02transpile.c"
        # 138 "02transpile.c"
        if(info->verbose) {
            # 138 "02transpile.c"
            puts(cmd2_83);
        }
        # 140 "02transpile.c"
        rc_84=system(cmd2_83);
        # 147 "02transpile.c"
        # 142 "02transpile.c"
        if(_if_conditional47=rc_84!=0,        _if_conditional47) {
            # 143 "02transpile.c"
            printf("failed to cpp(2) (%s)\n",cmd2_83);
            # 144 "02transpile.c"
            exit(5);
        }
        # 147 "02transpile.c"
        command2_85=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 149 "02transpile.c"
        # 149 "02transpile.c"
        if(info->verbose) {
            # 149 "02transpile.c"
            puts(command2_85);
        }
        # 150 "02transpile.c"
        (void)system(command2_85);
        cmd2_83 = come_decrement_ref_count2(cmd2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_85 = come_decrement_ref_count2(command2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 154 "02transpile.c"
        cmd3_86=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value116=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 156 "02transpile.c"
        # 156 "02transpile.c"
        if(info->verbose) {
            # 156 "02transpile.c"
            puts(cmd3_86);
        }
        # 157 "02transpile.c"
        rc_87=system(cmd3_86);
        # 159 "02transpile.c"
        command2_88=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 161 "02transpile.c"
        # 161 "02transpile.c"
        if(info->verbose) {
            # 161 "02transpile.c"
            puts(command2_88);
        }
        # 162 "02transpile.c"
        (void)system(command2_88);
        # 181 "02transpile.c"
        # 164 "02transpile.c"
        if(_if_conditional51=rc_87!=0,        _if_conditional51) {
            # 165 "02transpile.c"
            cmd4_89=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value119=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 166 "02transpile.c"
            command_90=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_78,input_file_name_77,info->clang_option,input_file_name_77))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 168 "02transpile.c"
            # 168 "02transpile.c"
            if(info->verbose) {
                # 168 "02transpile.c"
                puts(cmd4_89);
            }
            # 169 "02transpile.c"
            rc_87=system(cmd4_89);
            # 171 "02transpile.c"
            command2_91=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 173 "02transpile.c"
            # 173 "02transpile.c"
            if(info->verbose) {
                # 173 "02transpile.c"
                puts(command2_91);
            }
            # 174 "02transpile.c"
            (void)system(command2_91);
            # 180 "02transpile.c"
            # 176 "02transpile.c"
            if(_if_conditional54=rc_87!=0,            _if_conditional54) {
                # 177 "02transpile.c"
                printf("failed to cpp(2) (%s)\n",cmd4_89);
                # 178 "02transpile.c"
                exit(5);
            }
            cmd4_89 = come_decrement_ref_count2(cmd4_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_90 = come_decrement_ref_count2(command_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_86 = come_decrement_ref_count2(cmd3_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_88 = come_decrement_ref_count2(command2_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 183 "02transpile.c"
    __result76__ = (_Bool)1;
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_78 = come_decrement_ref_count2(output_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_79 = come_decrement_ref_count2(cmd_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result76__;
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_78 = come_decrement_ref_count2(output_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_79 = come_decrement_ref_count2(cmd_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value123;
char* input_file_name_92;
char* output_file_name_93;
_Bool _if_conditional55;
void* right_value124;
char* __dec_obj19;
void* right_value125;
char* __dec_obj20;
void* right_value126;
char* command_94;
_Bool _if_conditional56;
int rc_95;
void* right_value127;
char* command2_96;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool __result77__;
_Bool _if_conditional59;
void* right_value128;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&input_file_name_92, 0, sizeof(char*));
memset(&output_file_name_93, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&command_94, 0, sizeof(char*));
memset(&rc_95, 0, sizeof(int));
right_value127 = (void*)0;
memset(&command2_96, 0, sizeof(char*));
right_value128 = (void*)0;
    # 188 "02transpile.c"
    input_file_name_92=(char*)come_increment_ref_count(((char*)(right_value123=string_operator_add(info->sname,".c"))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 190 "02transpile.c"
    output_file_name_93=((void*)0);
    # 198 "02transpile.c"
    # 191 "02transpile.c"
    if(_if_conditional55=info->output_file_name&&output_object_file,    _if_conditional55) {
        # 192 "02transpile.c"
        __dec_obj19=output_file_name_93;
        output_file_name_93=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 195 "02transpile.c"
        __dec_obj20=output_file_name_93;
        output_file_name_93=(char*)come_increment_ref_count(((char*)(right_value125=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 198 "02transpile.c"
    command_94=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_93,input_file_name_92,info->clang_option,input_file_name_92))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 200 "02transpile.c"
    # 200 "02transpile.c"
    if(info->verbose) {
        # 200 "02transpile.c"
        puts(command_94);
    }
    # 201 "02transpile.c"
    rc_95=system(command_94);
    # 203 "02transpile.c"
    command2_96=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("grep error\\: %s.out",input_file_name_92))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 205 "02transpile.c"
    # 205 "02transpile.c"
    if(info->verbose) {
        # 205 "02transpile.c"
        puts(command2_96);
    }
    # 206 "02transpile.c"
    (void)system(command2_96);
    # 213 "02transpile.c"
    # 208 "02transpile.c"
    if(_if_conditional58=rc_95!=0,    _if_conditional58) {
        # 209 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 210 "02transpile.c"
        __result77__ = (_Bool)0;
        input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result77__;
    }
    # 217 "02transpile.c"
    # 213 "02transpile.c"
    if(_if_conditional59=!output_object_file,    _if_conditional59) {
        # 214 "02transpile.c"
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(output_file_name_93)))));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 217 "02transpile.c"
    __result78__ = (_Bool)1;
    input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_97;
_Bool _if_conditional60;
void* right_value129;
char* __dec_obj21;
void* right_value130;
char* __dec_obj22;
void* right_value131;
void* right_value132;
struct buffer* command_98;
void* right_value133;
struct list$1charph* o2_saved_99;
char* it_102;
void* right_value134;
_Bool _if_conditional65;
void* right_value135;
char* cmd_105;
int rc_106;
_Bool _if_conditional66;
void* right_value136;
_Bool _if_conditional67;
void* right_value137;
_Bool _if_conditional68;
void* right_value138;
void* right_value139;
_Bool _if_conditional69;
_Bool __result86__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_97, 0, sizeof(char*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&command_98, 0, sizeof(struct buffer*));
right_value133 = (void*)0;
memset(&o2_saved_99, 0, sizeof(struct list$1charph*));
memset(&it_102, 0, sizeof(char*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&cmd_105, 0, sizeof(char*));
memset(&rc_106, 0, sizeof(int));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
    # 222 "02transpile.c"
    output_file_name_97=((void*)0);
    # 230 "02transpile.c"
    # 223 "02transpile.c"
    if(info->output_file_name) {
        # 224 "02transpile.c"
        __dec_obj21=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 227 "02transpile.c"
        __dec_obj22=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(((char*)(right_value130=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 230 "02transpile.c"
    command_98=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 230, "buffer"))))))));
    come_call_finalizer3(right_value131,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 232 "02transpile.c"
    buffer_append_str(command_98,((char*)(right_value133=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_97,getenv("HOME"),"/usr/local/"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 238 "02transpile.c"
    for(    o2_saved_99=(object_files),it_102=list$1charph_begin((o2_saved_99));    !list$1charph_end((o2_saved_99));    it_102=list$1charph_next((o2_saved_99))    ){
        # 235 "02transpile.c"
        buffer_append_str(command_98,((char*)(right_value134=xsprintf("%s ",it_102))));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 244 "02transpile.c"
    # 238 "02transpile.c"
    if(gComeGC) {
        # 239 "02transpile.c"
        buffer_append_str(command_98,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        # 242 "02transpile.c"
        buffer_append_str(command_98,"-L/usr/local/lib -lneo-c ");
    }
    # 244 "02transpile.c"
    cmd_105=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 246 "02transpile.c"
    rc_106=system(cmd_105);
    # 250 "02transpile.c"
    # 247 "02transpile.c"
    if(_if_conditional66=rc_106==0,    _if_conditional66) {
        # 248 "02transpile.c"
        buffer_append_str(command_98," -L/opt/homebrew/opt/pcre/lib ");
    }
    # 250 "02transpile.c"
    buffer_append_str(command_98,((char*)(right_value136=xsprintf(" %s ",info->clang_option))));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 256 "02transpile.c"
    # 252 "02transpile.c"
    if(gComeGC) {
        # 253 "02transpile.c"
        buffer_append_str(command_98,((char*)(right_value137=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 256 "02transpile.c"
    # 256 "02transpile.c"
    if(info->verbose) {
        # 256 "02transpile.c"
        puts(((char*)(right_value138=buffer_to_string(command_98))));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 257 "02transpile.c"
    rc_106=system(((char*)(right_value139=buffer_to_string(command_98))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 264 "02transpile.c"
    # 259 "02transpile.c"
    if(_if_conditional69=rc_106!=0,    _if_conditional69) {
        # 260 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 261 "02transpile.c"
        __result86__ = (_Bool)0;
        output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result86__;
    }
    # 264 "02transpile.c"
    __result87__ = (_Bool)1;
    output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
    output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional61;
char* result_100;
char* __result79__;
_Bool _if_conditional62;
char* __result80__;
char* result_101;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional61=self==((void*)0),        _if_conditional61) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_100,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result79__ = __result_obj__ = result_100;
            return __result79__;
        }
        # 291 "./neo-c.h"
        self->it=self->head;
        # 297 "./neo-c.h"
        # 293 "./neo-c.h"
        if(self->it) {
            # 294 "./neo-c.h"
            __result80__ = __result_obj__ = self->it->item;
            return __result80__;
        }
        # 297 "./neo-c.h"
        # 298 "./neo-c.h"
        memset(&result_101,0,sizeof(char*));
        # 299 "./neo-c.h"
        __result81__ = __result_obj__ = result_101;
        return __result81__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result82__ = self==((void*)0)||self->it==((void*)0);
        return __result82__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional63;
char* result_103;
char* __result83__;
_Bool _if_conditional64;
char* __result84__;
char* result_104;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional63=self==((void*)0)||self->it==((void*)0),        _if_conditional63) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_103,0,sizeof(char*));
            # 306 "./neo-c.h"
            __result83__ = __result_obj__ = result_103;
            return __result83__;
        }
        # 309 "./neo-c.h"
        self->it=self->it->next;
        # 315 "./neo-c.h"
        # 311 "./neo-c.h"
        if(self->it) {
            # 312 "./neo-c.h"
            __result84__ = __result_obj__ = self->it->item;
            return __result84__;
        }
        # 315 "./neo-c.h"
        # 316 "./neo-c.h"
        memset(&result_104,0,sizeof(char*));
        # 317 "./neo-c.h"
        __result85__ = __result_obj__ = result_104;
        return __result85__;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value140;
void* right_value141;
struct buffer* __dec_obj23;
void* right_value142;
void* right_value143;
struct buffer* __dec_obj24;
char* __dec_obj25;
char* __dec_obj26;
void* right_value144;
void* right_value145;
struct buffer* __dec_obj27;
struct sModule* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    # 269 "02transpile.c"
    __dec_obj23=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value141=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 269, "buffer"))))))));
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value141,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 270 "02transpile.c"
    __dec_obj24=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value142=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 270, "buffer"))))))));
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value142,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value143,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 271 "02transpile.c"
    __dec_obj25=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 272 "02transpile.c"
    __dec_obj26=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 273 "02transpile.c"
    __dec_obj27=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value145=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 273, "buffer"))))))));
    come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value144,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value145,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 275 "02transpile.c"
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sModule_finalize"
        # 0 "sModule_finalize"
        if(_if_conditional70=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional70) {
            # 0 "sModule_finalize"
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sModule_finalize"
        # 1 "sModule_finalize"
        if(_if_conditional71=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional71) {
            # 1 "sModule_finalize"
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sModule_finalize"
        # 2 "sModule_finalize"
        if(_if_conditional72=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional72) {
            # 2 "sModule_finalize"
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sModule_finalize"
        # 3 "sModule_finalize"
        if(_if_conditional73=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional73) {
            # 3 "sModule_finalize"
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sModule_finalize"
        # 4 "sModule_finalize"
        if(_if_conditional74=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional74) {
            # 4 "sModule_finalize"
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 6 "sModule_finalize"
        # 5 "sModule_finalize"
        if(_if_conditional75=self!=((void*)0)&&self->mHeader!=((void*)0),        _if_conditional75) {
            # 5 "sModule_finalize"
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value146;
void* right_value152;
struct map$2charphsVarph* __dec_obj29;
static int id_118=0;
struct sVarTable* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value152 = (void*)0;
    # 280 "02transpile.c"
    __dec_obj29=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value152=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value146=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 280, "map$2charphsVarph"))))))));
    come_call_finalizer3(__dec_obj29,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value152,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 281 "02transpile.c"
    self->mGlobal=global;
    # 282 "02transpile.c"
    self->mParent=parent;
    # 283 "02transpile.c"
    # 284 "02transpile.c"
    self->mID=++id_118;
    # 286 "02transpile.c"
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value147;
void* right_value148;
void* right_value149;
int i_111;
void* right_value150;
void* right_value151;
struct list$1charp* __dec_obj28;
struct map$2charphsVarph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&i_111, 0, sizeof(int));
right_value150 = (void*)0;
right_value151 = (void*)0;
        # 1088 "./neo-c.h"
        self->keys=(char**)come_increment_ref_count(((char**)(right_value147=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1089 "./neo-c.h"
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value148=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./neo-c.h", 1089, "sVar*%"))));
        come_call_finalizer3(right_value148,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        # 1090 "./neo-c.h"
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value149=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1097 "./neo-c.h"
        for(        i_111=0;        i_111<1024;        i_111++        ){
            # 1094 "./neo-c.h"
            self->item_existance[i_111]=(_Bool)0;
        }
        # 1097 "./neo-c.h"
        self->size=1024;
        # 1098 "./neo-c.h"
        self->len=0;
        # 1100 "./neo-c.h"
        __dec_obj28=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value151=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value150=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
        come_call_finalizer3(__dec_obj28,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value150,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value151,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1102 "./neo-c.h"
        self->it=0;
        # 1104 "./neo-c.h"
        __result90__ = __result_obj__ = self;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result90__;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sVar_finalize"
            # 0 "sVar_finalize"
            if(_if_conditional76=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional76) {
                # 0 "sVar_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sVar_finalize"
            # 1 "sVar_finalize"
            if(_if_conditional77=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional77) {
                # 1 "sVar_finalize"
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sVar_finalize"
            # 2 "sVar_finalize"
            if(_if_conditional78=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional78) {
                # 2 "sVar_finalize"
                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sVar_finalize"
            # 3 "sVar_finalize"
            if(_if_conditional95=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional95) {
                # 3 "sVar_finalize"
                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional79;
_Bool _if_conditional81;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional79=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional79) {
                        # 0 "sType_finalize"
                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional81=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional81) {
                        # 1 "sType_finalize"
                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional83=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional83) {
                        # 2 "sType_finalize"
                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional84=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional84) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional85=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional85) {
                        # 4 "sType_finalize"
                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional86=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional86) {
                        # 5 "sType_finalize"
                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional88=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional88) {
                        # 6 "sType_finalize"
                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional89=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional89) {
                        # 7 "sType_finalize"
                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional90=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional90) {
                        # 8 "sType_finalize"
                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional91=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional91) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional92=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional92) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional93=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional93) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional94) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_107;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_108, 0, sizeof(struct list_item$1sTypeph*));
                            # 124 "./neo-c.h"
                            it_107=self->head;
                            # 130 "./neo-c.h"
                            while(_while_condtional11=it_107!=((void*)0),                            _while_condtional11) {
                                # 126 "./neo-c.h"
                                prev_it_108=it_107;
                                # 127 "./neo-c.h"
                                it_107=it_107->next;
                                # 128 "./neo-c.h"
                                come_call_finalizer3(prev_it_108,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional80=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional80) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_109;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_110;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_109, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_110, 0, sizeof(struct list_item$1sNodeph*));
                            # 124 "./neo-c.h"
                            it_109=self->head;
                            # 130 "./neo-c.h"
                            while(_while_condtional12=it_109!=((void*)0),                            _while_condtional12) {
                                # 126 "./neo-c.h"
                                prev_it_110=it_109;
                                # 127 "./neo-c.h"
                                it_109=it_109->next;
                                # 128 "./neo-c.h"
                                come_call_finalizer3(prev_it_110,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional87=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional87) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result89__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
            return __result89__;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_112;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_113, 0, sizeof(struct list_item$1charp*));
                # 124 "./neo-c.h"
                it_112=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional13=it_112!=((void*)0),                _while_condtional13) {
                    # 126 "./neo-c.h"
                    prev_it_113=it_112;
                    # 127 "./neo-c.h"
                    it_112=it_112->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_113,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_114;
_Bool _if_conditional96;
_Bool _if_conditional97;
int i_115;
_Bool _if_conditional98;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_114, 0, sizeof(int));
memset(&i_115, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_114=0;            i_114<self->size;            i_114++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional96=self->item_existance[i_114],                _if_conditional96) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional97=1,                    _if_conditional97) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_114],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_115=0;            i_115<self->size;            i_115++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional98=self->item_existance[i_115],                _if_conditional98) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional99=1,                    _if_conditional99) {
                        # 1143 "./neo-c.h"
                        self->keys[i_115] = come_decrement_ref_count2(self->keys[i_115], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_116;
_Bool _if_conditional100;
_Bool _if_conditional101;
int i_117;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_116, 0, sizeof(int));
memset(&i_117, 0, sizeof(int));
        # 1138 "./neo-c.h"
        for(        i_116=0;        i_116<self->size;        i_116++        ){
            # 1137 "./neo-c.h"
            # 1132 "./neo-c.h"
            if(_if_conditional100=self->item_existance[i_116],            _if_conditional100) {
                # 1136 "./neo-c.h"
                # 1133 "./neo-c.h"
                if(_if_conditional101=1,                _if_conditional101) {
                    # 1134 "./neo-c.h"
                    come_call_finalizer3(self->items[i_116],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1138 "./neo-c.h"
        come_free((char*)self->items);
        # 1147 "./neo-c.h"
        for(        i_117=0;        i_117<self->size;        i_117++        ){
            # 1146 "./neo-c.h"
            # 1141 "./neo-c.h"
            if(_if_conditional102=self->item_existance[i_117],            _if_conditional102) {
                # 1145 "./neo-c.h"
                # 1142 "./neo-c.h"
                if(_if_conditional103=1,                _if_conditional103) {
                    # 1143 "./neo-c.h"
                    self->keys[i_117] = come_decrement_ref_count2(self->keys[i_117], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1147 "./neo-c.h"
        come_free((char*)self->keys);
        # 1149 "./neo-c.h"
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        # 1151 "./neo-c.h"
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 291 "02transpile.c"
    come_call_finalizer3(self->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_119;
char* p_120;
_Bool _while_condtional14;
_Bool _if_conditional104;
_Bool _while_condtional15;
void* right_value153;
void* right_value154;
char* name2_121;
struct sClass* klass_127;
struct sClass* generics_class_128;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value155;
struct sClass* klass2_129;
void* right_value156;
char* __dec_obj30;
void* right_value157;
char* __dec_obj31;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
struct tuple1$1sTypeph* __dec_obj33;
void* right_value168;
void* right_value169;
struct list$1sTypeph* __dec_obj34;
void* right_value170;
void* right_value171;
struct tuple1$1sTypeph* __dec_obj35;
void* right_value172;
void* right_value173;
struct list$1sTypeph* __dec_obj36;
void* right_value174;
void* right_value175;
struct list$1sNodeph* __dec_obj37;
void* right_value176;
void* right_value177;
struct list$1sTypeph* __dec_obj38;
void* right_value178;
void* right_value179;
struct list$1charph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj40;
struct sNode* __dec_obj41;
void* right_value180;
char* __dec_obj42;
struct sType* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_119, 0, sizeof(int));
memset(&p_120, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&name2_121, 0, sizeof(char*));
memset(&klass_127, 0, sizeof(struct sClass*));
memset(&generics_class_128, 0, sizeof(struct sClass*));
right_value155 = (void*)0;
memset(&klass2_129, 0, sizeof(struct sClass*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
    # 296 "02transpile.c"
    pointer_num_119=0;
    # 297 "02transpile.c"
    p_120=name;
    # 306 "02transpile.c"
    while(_while_condtional14=*p_120,    _while_condtional14) {
        # 305 "02transpile.c"
        # 299 "02transpile.c"
        if(_if_conditional104=xisalpha(*p_120),        _if_conditional104) {
            # 300 "02transpile.c"
            p_120++;
        }
        else {
            # 303 "02transpile.c"
            break;
        }
    }
    # 311 "02transpile.c"
    while(_while_condtional15=*p_120==42,    _while_condtional15) {
        # 307 "02transpile.c"
        pointer_num_119++;
        # 308 "02transpile.c"
        p_120++;
    }
    # 311 "02transpile.c"
    name2_121=(char*)come_increment_ref_count(((char*)(right_value154=string_substring(((char*)(right_value153=__builtin_string(name))),0,-pointer_num_119-1))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 313 "02transpile.c"
    klass_127=map$2charphsClassphp_operator_load_element(info->classes,name2_121);
    # 314 "02transpile.c"
    generics_class_128=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_121);
    # 320 "02transpile.c"
    # 316 "02transpile.c"
    if(_if_conditional116=klass_127==((void*)0)&&generics_class_128==((void*)0),    _if_conditional116) {
        # 317 "02transpile.c"
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_121);
    }
    # 333 "02transpile.c"
    # 320 "02transpile.c"
    if(klass_127) {
        # 321 "02transpile.c"
        self->mClass=klass_127;
    }
    else {
        # 324 "02transpile.c"
        klass2_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value155=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 324, "sClass"))));
        come_call_finalizer3(right_value155,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 325 "02transpile.c"
        __dec_obj30=klass2_129->mName;
        klass2_129->mName=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(name))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 326 "02transpile.c"
        __dec_obj31=klass2_129->mDeclareSName;
        klass2_129->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(info->sname))));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 328 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_129));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 330 "02transpile.c"
        self->mClass=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value165=__builtin_string(name))));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_129,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 333 "02transpile.c"
    __dec_obj33=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value167=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value166=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 333, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value166,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value167,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 334 "02transpile.c"
    __dec_obj34=self->mMultipleTypes;
    self->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value169=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value168=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 334, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj34,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value169,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 335 "02transpile.c"
    __dec_obj35=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value171=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value170=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 335, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value170,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value171,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 336 "02transpile.c"
    __dec_obj36=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value172=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 336, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value172,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 337 "02transpile.c"
    __dec_obj37=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value175=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value174=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 337, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj37,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value174,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value175,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 338 "02transpile.c"
    self->mOmitArrayNum=(_Bool)0;
    # 339 "02transpile.c"
    __dec_obj38=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value177=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 339, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value176,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value177,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 340 "02transpile.c"
    __dec_obj39=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 340, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 341 "02transpile.c"
    self->mVarArgs=(_Bool)0;
    # 342 "02transpile.c"
    __dec_obj40=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 343 "02transpile.c"
    self->mUnsigned=(_Bool)0;
    # 344 "02transpile.c"
    self->mConstant=(_Bool)0;
    # 345 "02transpile.c"
    self->mRegister=(_Bool)0;
    # 346 "02transpile.c"
    self->mVolatile=(_Bool)0;
    # 347 "02transpile.c"
    self->mStatic=(_Bool)0;
    # 348 "02transpile.c"
    self->mRestrict=(_Bool)0;
    # 349 "02transpile.c"
    self->mImmutable=(_Bool)0;
    # 350 "02transpile.c"
    self->mLongLong=(_Bool)0;
    # 351 "02transpile.c"
    self->mHeap=heap;
    # 352 "02transpile.c"
    self->mDummyHeap=(_Bool)0;
    # 353 "02transpile.c"
    self->mNoHeap=(_Bool)0;
    # 354 "02transpile.c"
    self->mRefference=(_Bool)0;
    # 356 "02transpile.c"
    self->mPointerNum=pointer_num_119;
    # 357 "02transpile.c"
    self->mNoArrayPointerNum=0;
    # 358 "02transpile.c"
    __dec_obj41=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    # 360 "02transpile.c"
    self->mDynamicArrayNum=0;
    # 361 "02transpile.c"
    self->mTypeOfExpression=0;
    # 363 "02transpile.c"
    __dec_obj42=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(""))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 364 "02transpile.c"
    self->mOriginalPointerNum=0;
    # 366 "02transpile.c"
    self->mFunctionParam=(_Bool)0;
    # 368 "02transpile.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_121 = come_decrement_ref_count2(name2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_121 = come_decrement_ref_count2(name2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_122;
unsigned int hash_123;
unsigned int it_124;
_Bool _while_condtional16;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct sClass* __result92__;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sClass* __result93__;
struct sClass* __result94__;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_122, 0, sizeof(struct sClass*));
memset(&hash_123, 0, sizeof(unsigned int));
memset(&it_124, 0, sizeof(unsigned int));
        # 1545 "./neo-c.h"
        # 1546 "./neo-c.h"
        memset(&default_value_122,0,sizeof(struct sClass*));
        # 1548 "./neo-c.h"
        hash_123=string_get_hash_key(((char*)key))%self->size;
        # 1549 "./neo-c.h"
        it_124=hash_123;
        # 1573 "./neo-c.h"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 1571 "./neo-c.h"
            # 1552 "./neo-c.h"
            if(_if_conditional105=self->item_existance[it_124],            _if_conditional105) {
                # 1559 "./neo-c.h"
                # 1554 "./neo-c.h"
                if(_if_conditional106=string_equals(self->keys[it_124],key),                _if_conditional106) {
                    # 1556 "./neo-c.h"
                    __result92__ = __result_obj__ = self->items[it_124];
                    come_call_finalizer3(default_value_122,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result92__;
                }
                # 1559 "./neo-c.h"
                it_124++;
                # 1567 "./neo-c.h"
                # 1561 "./neo-c.h"
                if(_if_conditional114=it_124>=self->size,                _if_conditional114) {
                    # 1562 "./neo-c.h"
                    it_124=0;
                }
                else {
                    # 1567 "./neo-c.h"
                    # 1564 "./neo-c.h"
                    if(_if_conditional115=it_124==hash_123,                    _if_conditional115) {
                        # 1565 "./neo-c.h"
                        __result93__ = __result_obj__ = default_value_122;
                        come_call_finalizer3(default_value_122,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                    }
                }
            }
            else {
                # 1569 "./neo-c.h"
                __result94__ = __result_obj__ = default_value_122;
                come_call_finalizer3(default_value_122,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result94__;
            }
        }
        # 1573 "./neo-c.h"
        __result95__ = __result_obj__ = default_value_122;
        come_call_finalizer3(default_value_122,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(default_value_122,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional112;
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional107=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional107) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional108=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional108) {
                            # 1 "sClass_finalize"
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional112=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional112) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional113=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional113) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_125;
_Bool _while_condtional17;
struct list_item$1tuple2$2charphsTypephph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_125, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 124 "./neo-c.h"
                                it_125=self->head;
                                # 130 "./neo-c.h"
                                while(_while_condtional17=it_125!=((void*)0),                                _while_condtional17) {
                                    # 126 "./neo-c.h"
                                    prev_it_126=it_125;
                                    # 127 "./neo-c.h"
                                    it_125=it_125->next;
                                    # 128 "./neo-c.h"
                                    come_call_finalizer3(prev_it_126,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional109=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional109) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional118;
unsigned int hash_147;
unsigned int it_148;
_Bool _while_condtional20;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool same_key_exist_165;
char* it2_168;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct map$2charphsClassph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_147, 0, sizeof(unsigned int));
memset(&it_148, 0, sizeof(unsigned int));
memset(&same_key_exist_165, 0, sizeof(_Bool));
memset(&it2_168, 0, sizeof(char*));
            # 1394 "./neo-c.h"
            # 1391 "./neo-c.h"
            if(_if_conditional118=self->len*10>=self->size,            _if_conditional118) {
                # 1392 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1394 "./neo-c.h"
            hash_147=string_get_hash_key(key)%self->size;
            # 1395 "./neo-c.h"
            it_148=hash_147;
            # 1453 "./neo-c.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1451 "./neo-c.h"
                # 1398 "./neo-c.h"
                if(_if_conditional130=self->item_existance[it_148],                _if_conditional130) {
                    # 1421 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional131=string_equals(self->keys[it_148],key),                    _if_conditional131) {
                        # 1411 "./neo-c.h"
                        # 1402 "./neo-c.h"
                        if(_if_conditional132=1,                        _if_conditional132) {
                            # 1403 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_148]);
                            # 1404 "./neo-c.h"
                            self->keys[it_148] = come_decrement_ref_count2(self->keys[it_148], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1405 "./neo-c.h"
                            self->keys[it_148]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1408 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_148]);
                            # 1409 "./neo-c.h"
                            self->keys[it_148]=key;
                        }
                        # 1418 "./neo-c.h"
                        # 1411 "./neo-c.h"
                        if(_if_conditional152=1,                        _if_conditional152) {
                            # 1412 "./neo-c.h"
                            come_call_finalizer3(self->items[it_148],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            # 1413 "./neo-c.h"
                            self->items[it_148]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1416 "./neo-c.h"
                            self->items[it_148]=item;
                        }
                        # 1418 "./neo-c.h"
                        break;
                    }
                    # 1421 "./neo-c.h"
                    it_148++;
                    # 1431 "./neo-c.h"
                    # 1423 "./neo-c.h"
                    if(_if_conditional153=it_148>=self->size,                    _if_conditional153) {
                        # 1424 "./neo-c.h"
                        it_148=0;
                    }
                    else {
                        # 1431 "./neo-c.h"
                        # 1426 "./neo-c.h"
                        if(_if_conditional154=it_148==hash_147,                        _if_conditional154) {
                            # 1427 "./neo-c.h"
                            printf("unexpected error in map.insert\n");
                            # 1428 "./neo-c.h"
                            stackframe();
                            # 1429 "./neo-c.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1433 "./neo-c.h"
                    self->item_existance[it_148]=(_Bool)1;
                    # 1440 "./neo-c.h"
                    # 1434 "./neo-c.h"
                    if(_if_conditional155=1,                    _if_conditional155) {
                        # 1435 "./neo-c.h"
                        self->keys[it_148]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1438 "./neo-c.h"
                        self->keys[it_148]=key;
                    }
                    # 1447 "./neo-c.h"
                    # 1440 "./neo-c.h"
                    if(_if_conditional156=1,                    _if_conditional156) {
                        # 1441 "./neo-c.h"
                        self->items[it_148]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1444 "./neo-c.h"
                        self->items[it_148]=item;
                    }
                    # 1447 "./neo-c.h"
                    self->len++;
                    # 1449 "./neo-c.h"
                    break;
                }
            }
            # 1453 "./neo-c.h"
            same_key_exist_165=(_Bool)0;
            # 1461 "./neo-c.h"
            for(            it2_168=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_168=list$1charp_next(self->key_list)            ){
                # 1459 "./neo-c.h"
                # 1456 "./neo-c.h"
                if(_if_conditional161=string_equals(it2_168,key),                _if_conditional161) {
                    # 1457 "./neo-c.h"
                    same_key_exist_165=(_Bool)1;
                }
            }
            # 1465 "./neo-c.h"
            # 1461 "./neo-c.h"
            if(_if_conditional162=!same_key_exist_165,            _if_conditional162) {
                # 1462 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./neo-c.h"
            __result119__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result119__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_130;
void* right_value158;
char** keys_131;
void* right_value159;
struct sClass** items_132;
void* right_value160;
_Bool* item_existance_133;
int len_134;
char* it_137;
struct sClass* default_value_140;
struct sClass* it2_143;
unsigned int hash_144;
int n_145;
_Bool _while_condtional19;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct sClass* default_value_146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_130, 0, sizeof(int));
right_value158 = (void*)0;
memset(&keys_131, 0, sizeof(char**));
right_value159 = (void*)0;
memset(&items_132, 0, sizeof(struct sClass**));
right_value160 = (void*)0;
memset(&item_existance_133, 0, sizeof(_Bool*));
memset(&len_134, 0, sizeof(int));
memset(&it_137, 0, sizeof(char*));
memset(&default_value_140, 0, sizeof(struct sClass*));
memset(&it2_143, 0, sizeof(struct sClass*));
memset(&hash_144, 0, sizeof(unsigned int));
memset(&n_145, 0, sizeof(int));
memset(&default_value_146, 0, sizeof(struct sClass*));
                    # 1338 "./neo-c.h"
                    size_130=self->size*10;
                    # 1339 "./neo-c.h"
                    keys_131=(char**)come_increment_ref_count(((char**)(right_value158=(char**)come_calloc(1, sizeof(char*)*(1*(size_130)), "./neo-c.h", 1339, "char*%"))));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    items_132=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value159=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_130)), "./neo-c.h", 1340, "sClass*%"))));
                    come_call_finalizer3(right_value159,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1341 "./neo-c.h"
                    item_existance_133=(_Bool*)come_increment_ref_count(((_Bool*)(right_value160=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_130)), "./neo-c.h", 1341, "bool"))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1343 "./neo-c.h"
                    len_134=0;
                    # 1378 "./neo-c.h"
                    for(                    it_137=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_137=map$2charphsClassph_next(self)                    ){
                        # 1346 "./neo-c.h"
                        # 1347 "./neo-c.h"
                        memset(&default_value_140,0,sizeof(struct sClass*));
                        # 1348 "./neo-c.h"
                        it2_143=map$2charphsClassph_at(self,it_137,default_value_140);
                        # 1349 "./neo-c.h"
                        hash_144=string_get_hash_key(it_137)%size_130;
                        # 1350 "./neo-c.h"
                        n_145=hash_144;
                        # 1376 "./neo-c.h"
                        while(_while_condtional19=(_Bool)1,                        _while_condtional19) {
                            # 1375 "./neo-c.h"
                            # 1353 "./neo-c.h"
                            if(_if_conditional127=item_existance_133[n_145],                            _if_conditional127) {
                                # 1355 "./neo-c.h"
                                n_145++;
                                # 1365 "./neo-c.h"
                                # 1357 "./neo-c.h"
                                if(_if_conditional128=n_145>=size_130,                                _if_conditional128) {
                                    # 1358 "./neo-c.h"
                                    n_145=0;
                                }
                                else {
                                    # 1365 "./neo-c.h"
                                    # 1360 "./neo-c.h"
                                    if(_if_conditional129=n_145==hash_144,                                    _if_conditional129) {
                                        # 1361 "./neo-c.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1362 "./neo-c.h"
                                        stackframe();
                                        # 1363 "./neo-c.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1367 "./neo-c.h"
                                item_existance_133[n_145]=(_Bool)1;
                                # 1368 "./neo-c.h"
                                keys_131[n_145]=it_137;
                                # 1369 "./neo-c.h"
                                # 1370 "./neo-c.h"
                                items_132[n_145]=map$2charphsClassph_at(self,it_137,default_value_146);
                                # 1372 "./neo-c.h"
                                len_134++;
                                # 1373 "./neo-c.h"
                                break;
                            }
                        }
                    }
                    # 1378 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1379 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1380 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1382 "./neo-c.h"
                    self->keys=keys_131;
                    # 1383 "./neo-c.h"
                    self->items=items_132;
                    # 1384 "./neo-c.h"
                    self->item_existance=item_existance_133;
                    # 1386 "./neo-c.h"
                    self->size=size_130;
                    # 1387 "./neo-c.h"
                    self->len=len_134;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional119;
char* result_135;
char* __result96__;
_Bool _if_conditional120;
char* __result97__;
char* result_136;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&result_136, 0, sizeof(char*));
                        # 1305 "./neo-c.h"
                        # 1300 "./neo-c.h"
                        if(_if_conditional119=self==((void*)0),                        _if_conditional119) {
                            # 1301 "./neo-c.h"
                            # 1302 "./neo-c.h"
                            memset(&result_135,0,sizeof(char*));
                            # 1303 "./neo-c.h"
                            __result96__ = __result_obj__ = result_135;
                            return __result96__;
                        }
                        # 1305 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1311 "./neo-c.h"
                        # 1307 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1308 "./neo-c.h"
                            __result97__ = __result_obj__ = self->key_list->it->item;
                            return __result97__;
                        }
                        # 1311 "./neo-c.h"
                        # 1312 "./neo-c.h"
                        memset(&result_136,0,sizeof(char*));
                        # 1313 "./neo-c.h"
                        __result98__ = __result_obj__ = result_136;
                        return __result98__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1334 "./neo-c.h"
                        __result99__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result99__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional121;
char* result_138;
char* __result100__;
_Bool _if_conditional122;
char* __result101__;
char* result_139;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_138, 0, sizeof(char*));
memset(&result_139, 0, sizeof(char*));
                        # 1322 "./neo-c.h"
                        # 1317 "./neo-c.h"
                        if(_if_conditional121=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional121) {
                            # 1318 "./neo-c.h"
                            # 1319 "./neo-c.h"
                            memset(&result_138,0,sizeof(char*));
                            # 1320 "./neo-c.h"
                            __result100__ = __result_obj__ = result_138;
                            return __result100__;
                        }
                        # 1322 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1328 "./neo-c.h"
                        # 1324 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1325 "./neo-c.h"
                            __result101__ = __result_obj__ = self->key_list->it->item;
                            return __result101__;
                        }
                        # 1328 "./neo-c.h"
                        # 1329 "./neo-c.h"
                        memset(&result_139,0,sizeof(char*));
                        # 1330 "./neo-c.h"
                        __result102__ = __result_obj__ = result_139;
                        return __result102__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_141;
unsigned int it_142;
_Bool _while_condtional18;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct sClass* __result103__;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct sClass* __result104__;
struct sClass* __result105__;
struct sClass* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_141, 0, sizeof(unsigned int));
memset(&it_142, 0, sizeof(unsigned int));
                            # 1227 "./neo-c.h"
                            hash_141=string_get_hash_key(((char*)key))%self->size;
                            # 1228 "./neo-c.h"
                            it_142=hash_141;
                            # 1252 "./neo-c.h"
                            while(_while_condtional18=(_Bool)1,                            _while_condtional18) {
                                # 1250 "./neo-c.h"
                                # 1231 "./neo-c.h"
                                if(_if_conditional123=self->item_existance[it_142],                                _if_conditional123) {
                                    # 1238 "./neo-c.h"
                                    # 1233 "./neo-c.h"
                                    if(_if_conditional124=string_equals(self->keys[it_142],key),                                    _if_conditional124) {
                                        # 1235 "./neo-c.h"
                                        __result103__ = __result_obj__ = self->items[it_142];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result103__;
                                    }
                                    # 1238 "./neo-c.h"
                                    it_142++;
                                    # 1246 "./neo-c.h"
                                    # 1240 "./neo-c.h"
                                    if(_if_conditional125=it_142>=self->size,                                    _if_conditional125) {
                                        # 1241 "./neo-c.h"
                                        it_142=0;
                                    }
                                    else {
                                        # 1246 "./neo-c.h"
                                        # 1243 "./neo-c.h"
                                        if(_if_conditional126=it_142==hash_141,                                        _if_conditional126) {
                                            # 1244 "./neo-c.h"
                                            __result104__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result104__;
                                        }
                                    }
                                }
                                else {
                                    # 1248 "./neo-c.h"
                                    __result105__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result105__;
                                }
                            }
                            # 1252 "./neo-c.h"
                            __result106__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result106__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_149;
struct list_item$1charp* it_150;
_Bool _while_condtional21;
_Bool _if_conditional133;
struct list$1charp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_149, 0, sizeof(int));
memset(&it_150, 0, sizeof(struct list_item$1charp*));
                                # 449 "./neo-c.h"
                                it2_149=0;
                                # 450 "./neo-c.h"
                                it_150=self->head;
                                # 461 "./neo-c.h"
                                while(_while_condtional21=it_150!=((void*)0),                                _while_condtional21) {
                                    # 456 "./neo-c.h"
                                    # 452 "./neo-c.h"
                                    if(_if_conditional133=string_equals(it_150->item,item),                                    _if_conditional133) {
                                        # 453 "./neo-c.h"
                                        list$1charp_delete(self,it2_149,it2_149+1);
                                        # 454 "./neo-c.h"
                                        break;
                                    }
                                    # 456 "./neo-c.h"
                                    it2_149++;
                                    # 458 "./neo-c.h"
                                    it_150=it_150->next;
                                }
                                # 461 "./neo-c.h"
                                __result110__ = __result_obj__ = self;
                                return __result110__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
int tmp_151;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct list$1charp* __result107__;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list_item$1charp* it_154;
int i_155;
_Bool _while_condtional23;
_Bool _if_conditional142;
struct list_item$1charp* prev_it_156;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct list_item$1charp* it_157;
int i_158;
_Bool _while_condtional24;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1charp* prev_it_159;
struct list_item$1charp* it_160;
struct list_item$1charp* head_prev_it_161;
struct list_item$1charp* tail_it_162;
int i_163;
_Bool _while_condtional25;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list_item$1charp* prev_it_164;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_151, 0, sizeof(int));
memset(&it_154, 0, sizeof(struct list_item$1charp*));
memset(&i_155, 0, sizeof(int));
memset(&prev_it_156, 0, sizeof(struct list_item$1charp*));
memset(&it_157, 0, sizeof(struct list_item$1charp*));
memset(&i_158, 0, sizeof(int));
memset(&prev_it_159, 0, sizeof(struct list_item$1charp*));
memset(&it_160, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_161, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_162, 0, sizeof(struct list_item$1charp*));
memset(&i_163, 0, sizeof(int));
memset(&prev_it_164, 0, sizeof(struct list_item$1charp*));
                                            # 468 "./neo-c.h"
                                            # 465 "./neo-c.h"
                                            if(_if_conditional134=head<0,                                            _if_conditional134) {
                                                # 466 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 472 "./neo-c.h"
                                            # 468 "./neo-c.h"
                                            if(_if_conditional135=tail<0,                                            _if_conditional135) {
                                                # 469 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 478 "./neo-c.h"
                                            # 472 "./neo-c.h"
                                            if(_if_conditional136=head>tail,                                            _if_conditional136) {
                                                # 473 "./neo-c.h"
                                                tmp_151=tail;
                                                # 474 "./neo-c.h"
                                                tail=head;
                                                # 475 "./neo-c.h"
                                                head=tmp_151;
                                            }
                                            # 482 "./neo-c.h"
                                            # 478 "./neo-c.h"
                                            if(_if_conditional137=head<0,                                            _if_conditional137) {
                                                # 479 "./neo-c.h"
                                                head=0;
                                            }
                                            # 486 "./neo-c.h"
                                            # 482 "./neo-c.h"
                                            if(_if_conditional138=tail>self->len,                                            _if_conditional138) {
                                                # 483 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 490 "./neo-c.h"
                                            # 486 "./neo-c.h"
                                            if(_if_conditional139=head==tail,                                            _if_conditional139) {
                                                # 487 "./neo-c.h"
                                                __result107__ = __result_obj__ = self;
                                                return __result107__;
                                            }
                                            # 585 "./neo-c.h"
                                            # 490 "./neo-c.h"
                                            if(_if_conditional140=head==0&&tail==self->len,                                            _if_conditional140) {
                                                # 492 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 585 "./neo-c.h"
                                                # 494 "./neo-c.h"
                                                if(_if_conditional141=head==0,                                                _if_conditional141) {
                                                    # 495 "./neo-c.h"
                                                    it_154=self->head;
                                                    # 496 "./neo-c.h"
                                                    i_155=0;
                                                    # 518 "./neo-c.h"
                                                    while(_while_condtional23=it_154!=((void*)0),                                                    _while_condtional23) {
                                                        # 517 "./neo-c.h"
                                                        # 498 "./neo-c.h"
                                                        if(_if_conditional142=i_155<tail,                                                        _if_conditional142) {
                                                            # 499 "./neo-c.h"
                                                            prev_it_156=it_154;
                                                            # 501 "./neo-c.h"
                                                            it_154=it_154->next;
                                                            # 502 "./neo-c.h"
                                                            i_155++;
                                                            # 504 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_156,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 506 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 517 "./neo-c.h"
                                                            # 508 "./neo-c.h"
                                                            if(_if_conditional143=i_155==tail,                                                            _if_conditional143) {
                                                                # 509 "./neo-c.h"
                                                                self->head=it_154;
                                                                # 510 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 511 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 514 "./neo-c.h"
                                                                it_154=it_154->next;
                                                                # 515 "./neo-c.h"
                                                                i_155++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 585 "./neo-c.h"
                                                    # 519 "./neo-c.h"
                                                    if(_if_conditional144=tail==self->len,                                                    _if_conditional144) {
                                                        # 520 "./neo-c.h"
                                                        it_157=self->head;
                                                        # 521 "./neo-c.h"
                                                        i_158=0;
                                                        # 543 "./neo-c.h"
                                                        while(_while_condtional24=it_157!=((void*)0),                                                        _while_condtional24) {
                                                            # 528 "./neo-c.h"
                                                            # 523 "./neo-c.h"
                                                            if(_if_conditional145=i_158==head,                                                            _if_conditional145) {
                                                                # 524 "./neo-c.h"
                                                                self->tail=it_157->prev;
                                                                # 525 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 542 "./neo-c.h"
                                                            # 528 "./neo-c.h"
                                                            if(_if_conditional146=i_158>=head,                                                            _if_conditional146) {
                                                                # 529 "./neo-c.h"
                                                                prev_it_159=it_157;
                                                                # 531 "./neo-c.h"
                                                                it_157=it_157->next;
                                                                # 532 "./neo-c.h"
                                                                i_158++;
                                                                # 534 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_159,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 536 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 539 "./neo-c.h"
                                                                it_157=it_157->next;
                                                                # 540 "./neo-c.h"
                                                                i_158++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 545 "./neo-c.h"
                                                        it_160=self->head;
                                                        # 547 "./neo-c.h"
                                                        head_prev_it_161=((void*)0);
                                                        # 548 "./neo-c.h"
                                                        tail_it_162=((void*)0);
                                                        # 551 "./neo-c.h"
                                                        i_163=0;
                                                        # 577 "./neo-c.h"
                                                        while(_while_condtional25=it_160!=((void*)0),                                                        _while_condtional25) {
                                                            # 556 "./neo-c.h"
                                                            # 553 "./neo-c.h"
                                                            if(_if_conditional147=i_163==head,                                                            _if_conditional147) {
                                                                # 554 "./neo-c.h"
                                                                head_prev_it_161=it_160->prev;
                                                            }
                                                            # 560 "./neo-c.h"
                                                            # 556 "./neo-c.h"
                                                            if(_if_conditional148=i_163==tail,                                                            _if_conditional148) {
                                                                # 557 "./neo-c.h"
                                                                tail_it_162=it_160;
                                                            }
                                                            # 575 "./neo-c.h"
                                                            # 560 "./neo-c.h"
                                                            if(_if_conditional149=i_163>=head&&i_163<tail,                                                            _if_conditional149) {
                                                                # 562 "./neo-c.h"
                                                                prev_it_164=it_160;
                                                                # 564 "./neo-c.h"
                                                                it_160=it_160->next;
                                                                # 565 "./neo-c.h"
                                                                i_163++;
                                                                # 567 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_164,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 569 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 572 "./neo-c.h"
                                                                it_160=it_160->next;
                                                                # 573 "./neo-c.h"
                                                                i_163++;
                                                            }
                                                        }
                                                        # 580 "./neo-c.h"
                                                        # 577 "./neo-c.h"
                                                        if(_if_conditional150=head_prev_it_161!=((void*)0),                                                        _if_conditional150) {
                                                            # 578 "./neo-c.h"
                                                            head_prev_it_161->next=tail_it_162;
                                                        }
                                                        # 583 "./neo-c.h"
                                                        # 580 "./neo-c.h"
                                                        if(_if_conditional151=tail_it_162!=((void*)0),                                                        _if_conditional151) {
                                                            # 581 "./neo-c.h"
                                                            tail_it_162->prev=head_prev_it_161;
                                                        }
                                                    }
                                                }
                                            }
                                            # 585 "./neo-c.h"
                                            __result109__ = __result_obj__ = self;
                                            return __result109__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_152;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_153;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_152, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_153, 0, sizeof(struct list_item$1charp*));
                                                    # 434 "./neo-c.h"
                                                    it_152=self->head;
                                                    # 441 "./neo-c.h"
                                                    while(_while_condtional22=it_152!=((void*)0),                                                    _while_condtional22) {
                                                        # 436 "./neo-c.h"
                                                        prev_it_153=it_152;
                                                        # 437 "./neo-c.h"
                                                        it_152=it_152->next;
                                                        # 438 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 441 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 442 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 444 "./neo-c.h"
                                                    self->len=0;
                                                    # 446 "./neo-c.h"
                                                    __result108__ = __result_obj__ = self;
                                                    return __result108__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional157;
char* result_166;
char* __result111__;
_Bool _if_conditional158;
char* __result112__;
char* result_167;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(char*));
memset(&result_167, 0, sizeof(char*));
                # 291 "./neo-c.h"
                # 286 "./neo-c.h"
                if(_if_conditional157=self==((void*)0),                _if_conditional157) {
                    # 287 "./neo-c.h"
                    # 288 "./neo-c.h"
                    memset(&result_166,0,sizeof(char*));
                    # 289 "./neo-c.h"
                    __result111__ = __result_obj__ = result_166;
                    return __result111__;
                }
                # 291 "./neo-c.h"
                self->it=self->head;
                # 297 "./neo-c.h"
                # 293 "./neo-c.h"
                if(self->it) {
                    # 294 "./neo-c.h"
                    __result112__ = __result_obj__ = self->it->item;
                    return __result112__;
                }
                # 297 "./neo-c.h"
                # 298 "./neo-c.h"
                memset(&result_167,0,sizeof(char*));
                # 299 "./neo-c.h"
                __result113__ = __result_obj__ = result_167;
                return __result113__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                # 321 "./neo-c.h"
                __result114__ = self==((void*)0)||self->it==((void*)0);
                return __result114__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional159;
char* result_169;
char* __result115__;
_Bool _if_conditional160;
char* __result116__;
char* result_170;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(char*));
memset(&result_170, 0, sizeof(char*));
                # 309 "./neo-c.h"
                # 303 "./neo-c.h"
                if(_if_conditional159=self==((void*)0)||self->it==((void*)0),                _if_conditional159) {
                    # 304 "./neo-c.h"
                    # 305 "./neo-c.h"
                    memset(&result_169,0,sizeof(char*));
                    # 306 "./neo-c.h"
                    __result115__ = __result_obj__ = result_169;
                    return __result115__;
                }
                # 309 "./neo-c.h"
                self->it=self->it->next;
                # 315 "./neo-c.h"
                # 311 "./neo-c.h"
                if(self->it) {
                    # 312 "./neo-c.h"
                    __result116__ = __result_obj__ = self->it->item;
                    return __result116__;
                }
                # 315 "./neo-c.h"
                # 316 "./neo-c.h"
                memset(&result_170,0,sizeof(char*));
                # 317 "./neo-c.h"
                __result117__ = __result_obj__ = result_170;
                return __result117__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value161;
struct list_item$1charp* litem_171;
_Bool _if_conditional164;
void* right_value162;
struct list_item$1charp* litem_172;
void* right_value163;
struct list_item$1charp* litem_173;
struct list$1charp* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_171, 0, sizeof(struct list_item$1charp*));
right_value162 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1charp*));
right_value163 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1charp*));
                    # 257 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional163=self->len==0,                    _if_conditional163) {
                        # 227 "./neo-c.h"
                        litem_171=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value161=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value161,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_171->prev=((void*)0);
                        # 230 "./neo-c.h"
                        litem_171->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_171->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_171;
                        # 234 "./neo-c.h"
                        self->head=litem_171;
                    }
                    else {
                        # 257 "./neo-c.h"
                        # 236 "./neo-c.h"
                        if(_if_conditional164=self->len==1,                        _if_conditional164) {
                            # 237 "./neo-c.h"
                            litem_172=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value162=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value162,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_172->prev=self->head;
                            # 240 "./neo-c.h"
                            litem_172->next=((void*)0);
                            # 241 "./neo-c.h"
                            litem_172->item=item;
                            # 243 "./neo-c.h"
                            self->tail=litem_172;
                            # 244 "./neo-c.h"
                            self->head->next=litem_172;
                        }
                        else {
                            # 247 "./neo-c.h"
                            litem_173=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value163=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 247, "list_item$1charp"))));
                            come_call_finalizer3(right_value163,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 249 "./neo-c.h"
                            litem_173->prev=self->tail;
                            # 250 "./neo-c.h"
                            litem_173->next=((void*)0);
                            # 251 "./neo-c.h"
                            litem_173->item=item;
                            # 253 "./neo-c.h"
                            self->tail->next=litem_173;
                            # 254 "./neo-c.h"
                            self->tail=litem_173;
                        }
                    }
                    # 257 "./neo-c.h"
                    self->len++;
                    # 259 "./neo-c.h"
                    __result118__ = __result_obj__ = self;
                    return __result118__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1736 "./neo-c.h"
        __dec_obj32=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1738 "./neo-c.h"
        __result120__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result120__;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result121__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result121__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_174;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_175, 0, sizeof(struct list_item$1sTypeph*));
        # 124 "./neo-c.h"
        it_174=self->head;
        # 130 "./neo-c.h"
        while(_while_condtional26=it_174!=((void*)0),        _while_condtional26) {
            # 126 "./neo-c.h"
            prev_it_175=it_174;
            # 127 "./neo-c.h"
            it_174=it_174->next;
            # 128 "./neo-c.h"
            come_call_finalizer3(prev_it_175,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result122__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_176;
_Bool _while_condtional27;
struct list_item$1sNodeph* prev_it_177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_176, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_177, 0, sizeof(struct list_item$1sNodeph*));
        # 124 "./neo-c.h"
        it_176=self->head;
        # 130 "./neo-c.h"
        while(_while_condtional27=it_176!=((void*)0),        _while_condtional27) {
            # 126 "./neo-c.h"
            prev_it_177=it_176;
            # 127 "./neo-c.h"
            it_176=it_176->next;
            # 128 "./neo-c.h"
            come_call_finalizer3(prev_it_177,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_178;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_179, 0, sizeof(struct list_item$1charph*));
        # 124 "./neo-c.h"
        it_178=self->head;
        # 130 "./neo-c.h"
        while(_while_condtional28=it_178!=((void*)0),        _while_condtional28) {
            # 126 "./neo-c.h"
            prev_it_179=it_178;
            # 127 "./neo-c.h"
            it_178=it_178->next;
            # 128 "./neo-c.h"
            come_call_finalizer3(prev_it_179,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple1$1sTypephp_finalize"
        # 0 "tuple1$1sTypephp_finalize"
        if(_if_conditional167=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional167) {
            # 0 "tuple1$1sTypephp_finalize"
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
void* right_value181;
char* __dec_obj43;
void* right_value182;
void* right_value183;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
void* right_value184;
char* __dec_obj45;
struct sClass* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
    # 373 "02transpile.c"
    self->mNumber=number;
    # 374 "02transpile.c"
    self->mStruct=struct_;
    # 375 "02transpile.c"
    self->mUnion=union_;
    # 376 "02transpile.c"
    self->mGenerics=generics;
    # 377 "02transpile.c"
    self->mMethodGenerics=method_generics;
    # 378 "02transpile.c"
    self->mEnum=(_Bool)0;
    # 379 "02transpile.c"
    self->mProtocol=protocol_;
    # 380 "02transpile.c"
    self->mFloat=float_;
    # 381 "02transpile.c"
    self->mEnum=enum_;
    # 383 "02transpile.c"
    __dec_obj43=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(name))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 385 "02transpile.c"
    self->mGenericsNum=generics_num;
    # 386 "02transpile.c"
    self->mMethodGenericsNum=method_generics_num;
    # 388 "02transpile.c"
    __dec_obj44=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value183=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value182=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 388, "list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer3(__dec_obj44,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value182,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value183,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 390 "02transpile.c"
    __dec_obj45=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 392 "02transpile.c"
    __result125__ = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result125__;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result124__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result124__;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_180;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsTypephph* prev_it_181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_180, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_181, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 124 "./neo-c.h"
        it_180=self->head;
        # 130 "./neo-c.h"
        while(_while_condtional29=it_180!=((void*)0),        _while_condtional29) {
            # 126 "./neo-c.h"
            prev_it_181=it_180;
            # 127 "./neo-c.h"
            it_180=it_180->next;
            # 128 "./neo-c.h"
            come_call_finalizer3(prev_it_181,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __dec_obj46;
void* right_value186;
char* __dec_obj47;
void* right_value187;
void* right_value188;
struct list$1charph* __dec_obj48;
struct sClassModule* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
    # 397 "02transpile.c"
    __dec_obj46=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value185=charp_clone(name))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 398 "02transpile.c"
    __dec_obj47=self->mText;
    self->mText=(char*)come_increment_ref_count(((char*)(right_value186=string_clone(text))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 399 "02transpile.c"
    __dec_obj48=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value188=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 399, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value187,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value188,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 401 "02transpile.c"
    __result126__ = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result126__;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClassModule_finalize"
        # 0 "sClassModule_finalize"
        if(_if_conditional168=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional168) {
            # 0 "sClassModule_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClassModule_finalize"
        # 1 "sClassModule_finalize"
        if(_if_conditional169=self!=((void*)0)&&self->mText!=((void*)0),        _if_conditional169) {
            # 1 "sClassModule_finalize"
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sClassModule_finalize"
        # 2 "sClassModule_finalize"
        if(_if_conditional170=self!=((void*)0)&&self->mParams!=((void*)0),        _if_conditional170) {
            # 2 "sClassModule_finalize"
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
void* right_value189;
void* right_value190;
struct sType* __dec_obj54;
struct list$1sTypeph* o2_saved_182;
struct sType* it_185;
void* right_value229;
struct list$1charph* o2_saved_209;
char* it_210;
void* right_value230;
void* right_value231;
void* right_value232;
struct tuple1$1sTypeph* __dec_obj81;
void* right_value233;
void* right_value234;
struct buffer* __dec_obj82;
void* right_value235;
void* right_value236;
struct buffer* __dec_obj83;
void* right_value237;
void* right_value238;
struct buffer* __dec_obj84;
void* right_value239;
void* right_value240;
struct buffer* __dec_obj85;
void* right_value253;
struct sBlock* __dec_obj90;
char* __dec_obj91;
void* right_value254;
char* __dec_obj92;
struct sFun* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&o2_saved_182, 0, sizeof(struct list$1sTypeph*));
memset(&it_185, 0, sizeof(struct sType*));
right_value229 = (void*)0;
memset(&o2_saved_209, 0, sizeof(struct list$1charph*));
memset(&it_210, 0, sizeof(char*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    # 406 "02transpile.c"
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 407 "02transpile.c"
    __dec_obj50=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 408 "02transpile.c"
    __dec_obj51=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 409 "02transpile.c"
    __dec_obj52=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 410 "02transpile.c"
    __dec_obj53=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 411 "02transpile.c"
    self->mExternal=external;
    # 412 "02transpile.c"
    self->mVarArgs=var_args;
    # 413 "02transpile.c"
    self->mStatic=static_;
    # 415 "02transpile.c"
    __dec_obj54=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value189=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 415, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 421 "02transpile.c"
    for(    o2_saved_182=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_185=list$1sTypeph_begin((o2_saved_182));    !list$1sTypeph_end((o2_saved_182));    it_185=list$1sTypeph_next((o2_saved_182))    ){
        # 418 "02transpile.c"
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(it_185)))));
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_182,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 425 "02transpile.c"
    for(    o2_saved_209=(struct list$1charph*)come_increment_ref_count((param_names)),it_210=list$1charph_begin((o2_saved_209));    !list$1charph_end((o2_saved_209));    it_210=list$1charph_next((o2_saved_209))    ){
        # 422 "02transpile.c"
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value230=string_clone(it_210)))));
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_209,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    # 425 "02transpile.c"
    __dec_obj81=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value232=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value231=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 425, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    come_call_finalizer3(__dec_obj81,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value231,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 426 "02transpile.c"
    self->mLambdaType->mVarArgs=var_args;
    # 428 "02transpile.c"
    __dec_obj82=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value233=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 428, "buffer"))))))));
    come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value233,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value234,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 429 "02transpile.c"
    __dec_obj83=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 429, "buffer"))))))));
    come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value235,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value236,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 430 "02transpile.c"
    __dec_obj84=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value238=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value237=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 430, "buffer"))))))));
    come_call_finalizer3(__dec_obj84,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value237,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value238,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 431 "02transpile.c"
    __dec_obj85=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value240=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value239=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 431, "buffer"))))))));
    come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value239,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value240,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 433 "02transpile.c"
    __dec_obj90=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value253=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj90,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value253,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 435 "02transpile.c"
    __dec_obj91=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 437 "02transpile.c"
    __dec_obj92=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(declare_sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 439 "02transpile.c"
    __result168__ = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result168__;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sType* result_183;
struct sType* __result127__;
_Bool _if_conditional172;
struct sType* __result128__;
struct sType* result_184;
struct sType* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(struct sType*));
memset(&result_184, 0, sizeof(struct sType*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional171=self==((void*)0),        _if_conditional171) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_183,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result127__ = __result_obj__ = result_183;
            return __result127__;
        }
        # 291 "./neo-c.h"
        self->it=self->head;
        # 297 "./neo-c.h"
        # 293 "./neo-c.h"
        if(self->it) {
            # 294 "./neo-c.h"
            __result128__ = __result_obj__ = self->it->item;
            return __result128__;
        }
        # 297 "./neo-c.h"
        # 298 "./neo-c.h"
        memset(&result_184,0,sizeof(struct sType*));
        # 299 "./neo-c.h"
        __result129__ = __result_obj__ = result_184;
        return __result129__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result130__ = self==((void*)0)||self->it==((void*)0);
        return __result130__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct sType* result_186;
struct sType* __result131__;
_Bool _if_conditional174;
struct sType* __result132__;
struct sType* result_187;
struct sType* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct sType*));
memset(&result_187, 0, sizeof(struct sType*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional173=self==((void*)0)||self->it==((void*)0),        _if_conditional173) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_186,0,sizeof(struct sType*));
            # 306 "./neo-c.h"
            __result131__ = __result_obj__ = result_186;
            return __result131__;
        }
        # 309 "./neo-c.h"
        self->it=self->it->next;
        # 315 "./neo-c.h"
        # 311 "./neo-c.h"
        if(self->it) {
            # 312 "./neo-c.h"
            __result132__ = __result_obj__ = self->it->item;
            return __result132__;
        }
        # 315 "./neo-c.h"
        # 316 "./neo-c.h"
        memset(&result_187,0,sizeof(struct sType*));
        # 317 "./neo-c.h"
        __result133__ = __result_obj__ = result_187;
        return __result133__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value191;
struct list_item$1sTypeph* litem_188;
struct sType* __dec_obj55;
_Bool _if_conditional176;
void* right_value192;
struct list_item$1sTypeph* litem_189;
struct sType* __dec_obj56;
void* right_value193;
struct list_item$1sTypeph* litem_190;
struct sType* __dec_obj57;
struct list$1sTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1sTypeph*));
right_value192 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1sTypeph*));
right_value193 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1sTypeph*));
            # 257 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional175=self->len==0,            _if_conditional175) {
                # 227 "./neo-c.h"
                litem_188=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value191=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value191,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_188->prev=((void*)0);
                # 230 "./neo-c.h"
                litem_188->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj55=litem_188->item;
                litem_188->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_188;
                # 234 "./neo-c.h"
                self->head=litem_188;
            }
            else {
                # 257 "./neo-c.h"
                # 236 "./neo-c.h"
                if(_if_conditional176=self->len==1,                _if_conditional176) {
                    # 237 "./neo-c.h"
                    litem_189=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value192=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value192,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_189->prev=self->head;
                    # 240 "./neo-c.h"
                    litem_189->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj56=litem_189->item;
                    litem_189->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail=litem_189;
                    # 244 "./neo-c.h"
                    self->head->next=litem_189;
                }
                else {
                    # 247 "./neo-c.h"
                    litem_190=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value193=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 247, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value193,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 249 "./neo-c.h"
                    litem_190->prev=self->tail;
                    # 250 "./neo-c.h"
                    litem_190->next=((void*)0);
                    # 251 "./neo-c.h"
                    __dec_obj57=litem_190->item;
                    litem_190->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 253 "./neo-c.h"
                    self->tail->next=litem_190;
                    # 254 "./neo-c.h"
                    self->tail=litem_190;
                }
            }
            # 257 "./neo-c.h"
            self->len++;
            # 259 "./neo-c.h"
            __result134__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional177;
struct sType* __result135__;
void* right_value194;
struct sType* result_191;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value201;
struct list$1sTypeph* __dec_obj61;
_Bool _if_conditional183;
void* right_value204;
struct tuple1$1sTypeph* __dec_obj63;
_Bool _if_conditional187;
void* right_value205;
struct tuple1$1sTypeph* __dec_obj64;
_Bool _if_conditional188;
void* right_value206;
char* __dec_obj65;
_Bool _if_conditional189;
void* right_value207;
struct list$1sTypeph* __dec_obj66;
_Bool _if_conditional190;
void* right_value215;
struct list$1sNodeph* __dec_obj70;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value216;
struct list$1sTypeph* __dec_obj71;
_Bool _if_conditional205;
void* right_value223;
struct list$1charph* __dec_obj75;
_Bool _if_conditional209;
void* right_value224;
struct tuple1$1sTypeph* __dec_obj76;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value225;
struct sNode* __dec_obj77;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value226;
struct sNode* __dec_obj78;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value227;
char* __dec_obj79;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value228;
char* __dec_obj80;
_Bool _if_conditional250;
struct sType* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
memset(&result_191, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional177=self==(void*)0,            _if_conditional177) {
                # 2 "sType_clone"
                __result135__ = __result_obj__ = (void*)0;
                return __result135__;
            }
            # 3 "sType_clone"
            result_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                # 4 "sType_clone"
                result_191->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional179=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional179) {
                # 5 "sType_clone"
                __dec_obj61=result_191->mMultipleTypes;
                result_191->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value201=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj61,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value201,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional183=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional183) {
                # 6 "sType_clone"
                __dec_obj63=result_191->mNoSolvedGenericsType;
                result_191->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value204=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value204,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional187=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional187) {
                # 7 "sType_clone"
                __dec_obj64=result_191->mOriginalLoadVarType;
                result_191->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value205=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value205,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional188=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional188) {
                # 8 "sType_clone"
                __dec_obj65=result_191->mGenericsName;
                result_191->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->mGenericsName))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional189=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional189) {
                # 9 "sType_clone"
                __dec_obj66=result_191->mGenericsTypes;
                result_191->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value207=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value207,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional190=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional190) {
                # 10 "sType_clone"
                __dec_obj70=result_191->mArrayNum;
                result_191->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value215=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value215,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                # 11 "sType_clone"
                result_191->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional204=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional204) {
                # 12 "sType_clone"
                __dec_obj71=result_191->mParamTypes;
                result_191->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value216=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value216,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional205=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional205) {
                # 13 "sType_clone"
                __dec_obj75=result_191->mParamNames;
                result_191->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value223=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value223,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional209=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional209) {
                # 14 "sType_clone"
                __dec_obj76=result_191->mResultType;
                result_191->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value224=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value224,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                # 15 "sType_clone"
                result_191->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional211=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional211) {
                # 16 "sType_clone"
                __dec_obj77=result_191->mAlignas;
                result_191->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(self->mAlignas))));
                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                # 17 "sType_clone"
                result_191->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                # 18 "sType_clone"
                result_191->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional214=self!=((void*)0),            _if_conditional214) {
                # 19 "sType_clone"
                result_191->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                # 20 "sType_clone"
                result_191->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional216=self!=((void*)0),            _if_conditional216) {
                # 21 "sType_clone"
                result_191->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                # 22 "sType_clone"
                result_191->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                # 23 "sType_clone"
                result_191->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional219=self!=((void*)0),            _if_conditional219) {
                # 24 "sType_clone"
                result_191->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional220=self!=((void*)0),            _if_conditional220) {
                # 25 "sType_clone"
                result_191->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional221=self!=((void*)0),            _if_conditional221) {
                # 26 "sType_clone"
                result_191->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional222=self!=((void*)0),            _if_conditional222) {
                # 27 "sType_clone"
                result_191->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional223=self!=((void*)0),            _if_conditional223) {
                # 28 "sType_clone"
                result_191->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional224=self!=((void*)0),            _if_conditional224) {
                # 29 "sType_clone"
                result_191->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional225=self!=((void*)0),            _if_conditional225) {
                # 30 "sType_clone"
                result_191->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional226=self!=((void*)0),            _if_conditional226) {
                # 31 "sType_clone"
                result_191->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional227=self!=((void*)0),            _if_conditional227) {
                # 32 "sType_clone"
                result_191->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional228=self!=((void*)0),            _if_conditional228) {
                # 33 "sType_clone"
                result_191->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional229=self!=((void*)0),            _if_conditional229) {
                # 34 "sType_clone"
                result_191->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional230=self!=((void*)0),            _if_conditional230) {
                # 35 "sType_clone"
                result_191->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional231=self!=((void*)0),            _if_conditional231) {
                # 36 "sType_clone"
                result_191->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                # 37 "sType_clone"
                result_191->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional233=self!=((void*)0),            _if_conditional233) {
                # 38 "sType_clone"
                result_191->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional234=self!=((void*)0),            _if_conditional234) {
                # 39 "sType_clone"
                result_191->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional235=self!=((void*)0),            _if_conditional235) {
                # 40 "sType_clone"
                result_191->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional236=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional236) {
                # 41 "sType_clone"
                __dec_obj78=result_191->mSizeNum;
                result_191->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(self->mSizeNum))));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional237=self!=((void*)0),            _if_conditional237) {
                # 42 "sType_clone"
                result_191->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional238=self!=((void*)0),            _if_conditional238) {
                # 43 "sType_clone"
                result_191->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional239=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional239) {
                # 44 "sType_clone"
                __dec_obj79=result_191->mOriginalTypeName;
                result_191->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value227=string_clone(self->mOriginalTypeName))));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional240=self!=((void*)0),            _if_conditional240) {
                # 45 "sType_clone"
                result_191->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional241=self!=((void*)0),            _if_conditional241) {
                # 46 "sType_clone"
                result_191->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional242=self!=((void*)0),            _if_conditional242) {
                # 47 "sType_clone"
                result_191->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional243=self!=((void*)0),            _if_conditional243) {
                # 48 "sType_clone"
                result_191->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional244=self!=((void*)0),            _if_conditional244) {
                # 49 "sType_clone"
                result_191->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional245=self!=((void*)0),            _if_conditional245) {
                # 50 "sType_clone"
                result_191->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional246=self!=((void*)0),            _if_conditional246) {
                # 51 "sType_clone"
                result_191->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional247=self!=((void*)0),            _if_conditional247) {
                # 52 "sType_clone"
                result_191->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional248=self!=((void*)0),            _if_conditional248) {
                # 53 "sType_clone"
                result_191->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional249=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional249) {
                # 54 "sType_clone"
                __dec_obj80=result_191->mAsmName;
                result_191->mAsmName=(char*)come_increment_ref_count(((char*)(right_value228=string_clone(self->mAsmName))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional250=self!=((void*)0),            _if_conditional250) {
                # 55 "sType_clone"
                result_191->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result149__ = __result_obj__ = result_191;
            come_call_finalizer3(result_191,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result149__;
            come_call_finalizer3(result_191,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional180;
struct list$1sTypeph* __result136__;
void* right_value195;
void* right_value196;
struct list$1sTypeph* result_192;
struct list_item$1sTypeph* it_193;
_Bool _while_condtional30;
void* right_value200;
struct list$1sTypeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&result_192, 0, sizeof(struct list$1sTypeph*));
memset(&it_193, 0, sizeof(struct list_item$1sTypeph*));
right_value200 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional180=self==((void*)0),                    _if_conditional180) {
                        # 141 "./neo-c.h"
                        __result136__ = __result_obj__ = ((void*)0);
                        return __result136__;
                    }
                    # 143 "./neo-c.h"
                    result_192=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value196=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value195=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 143, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value195,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value196,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_193=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional30=it_193!=((void*)0),                    _while_condtional30) {
                        # 147 "./neo-c.h"
                        list$1sTypeph_add(result_192,(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(it_193->item)))));
                        come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        it_193=it_193->next;
                    }
                    # 152 "./neo-c.h"
                    __result138__ = __result_obj__ = result_192;
                    come_call_finalizer3(result_192,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result138__;
                    come_call_finalizer3(result_192,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional181;
void* right_value197;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj58;
_Bool _if_conditional182;
void* right_value198;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj59;
void* right_value199;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj60;
struct list$1sTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
right_value198 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
right_value199 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional181=self->len==0,                            _if_conditional181) {
                                # 157 "./neo-c.h"
                                litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value197=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value197,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_194->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_194->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj58=litem_194->item;
                                litem_194->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_194;
                                # 164 "./neo-c.h"
                                self->head=litem_194;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional182=self->len==1,                                _if_conditional182) {
                                    # 167 "./neo-c.h"
                                    litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value198=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value198,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_195->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_195->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj59=litem_195->item;
                                    litem_195->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail=litem_195;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_195;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value199=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 177, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value199,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_196->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_196->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj60=litem_196->item;
                                    litem_196->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_196;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_196;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result137__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result137__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional184;
struct tuple1$1sTypeph* __result139__;
void* right_value202;
struct tuple1$1sTypeph* result_197;
_Bool _if_conditional186;
void* right_value203;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
memset(&result_197, 0, sizeof(struct tuple1$1sTypeph*));
right_value203 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional184=self==(void*)0,                    _if_conditional184) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result139__ = __result_obj__ = (void*)0;
                        return __result139__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_197=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value202=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value202,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional186=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional186) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj62=result_197->v1;
                        result_197->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result140__ = __result_obj__ = result_197;
                    come_call_finalizer3(result_197,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result140__;
                    come_call_finalizer3(result_197,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional185=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional185) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional191;
struct list$1sNodeph* __result141__;
void* right_value208;
void* right_value209;
struct list$1sNodeph* result_198;
struct list_item$1sNodeph* it_199;
_Bool _while_condtional31;
void* right_value214;
struct list$1sNodeph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_198, 0, sizeof(struct list$1sNodeph*));
memset(&it_199, 0, sizeof(struct list_item$1sNodeph*));
right_value214 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional191=self==((void*)0),                    _if_conditional191) {
                        # 141 "./neo-c.h"
                        __result141__ = __result_obj__ = ((void*)0);
                        return __result141__;
                    }
                    # 143 "./neo-c.h"
                    result_198=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value209=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value208=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 143, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value208,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value209,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_199=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional31=it_199!=((void*)0),                    _while_condtional31) {
                        # 147 "./neo-c.h"
                        list$1sNodeph_add(result_198,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(it_199->item)))));
                        if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 149 "./neo-c.h"
                        it_199=it_199->next;
                    }
                    # 152 "./neo-c.h"
                    __result145__ = __result_obj__ = result_198;
                    come_call_finalizer3(result_198,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                    come_call_finalizer3(result_198,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional192;
void* right_value210;
struct list_item$1sNodeph* litem_200;
struct sNode* __dec_obj67;
_Bool _if_conditional193;
void* right_value211;
struct list_item$1sNodeph* litem_201;
struct sNode* __dec_obj68;
void* right_value212;
struct list_item$1sNodeph* litem_202;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1sNodeph*));
right_value211 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1sNodeph*));
right_value212 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sNodeph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional192=self->len==0,                            _if_conditional192) {
                                # 157 "./neo-c.h"
                                litem_200=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value210=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value210,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_200->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_200->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj67=litem_200->item;
                                litem_200->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_200;
                                # 164 "./neo-c.h"
                                self->head=litem_200;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional193=self->len==1,                                _if_conditional193) {
                                    # 167 "./neo-c.h"
                                    litem_201=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value211=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value211,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_201->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_201->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj68=litem_201->item;
                                    litem_201->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "./neo-c.h"
                                    self->tail=litem_201;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_201;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_202=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value212=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 177, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value212,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_202->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_202->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj69=litem_202->item;
                                    litem_202->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_202;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_202;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result142__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result142__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional194;
struct sNode* __result143__;
void* right_value213;
struct sNode* result_203;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct sNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&result_203, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional194=self==(void*)0,                            _if_conditional194) {
                                # 2 "sNode_clone"
                                __result143__ = __result_obj__ = (void*)0;
                                return __result143__;
                            }
                            # 3 "sNode_clone"
                            result_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional195=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional195) {
                                # 4 "sNode_clone"
                                result_203->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional196=self!=((void*)0),                            _if_conditional196) {
                                # 5 "sNode_clone"
                                result_203->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional197=self!=((void*)0),                            _if_conditional197) {
                                # 6 "sNode_clone"
                                result_203->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional198=self!=((void*)0),                            _if_conditional198) {
                                # 7 "sNode_clone"
                                result_203->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional199=self!=((void*)0),                            _if_conditional199) {
                                # 8 "sNode_clone"
                                result_203->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional200=self!=((void*)0),                            _if_conditional200) {
                                # 9 "sNode_clone"
                                result_203->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional201=self!=((void*)0),                            _if_conditional201) {
                                # 10 "sNode_clone"
                                result_203->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional202=self!=((void*)0),                            _if_conditional202) {
                                # 11 "sNode_clone"
                                result_203->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result144__ = __result_obj__ = result_203;
                            if(result_203) { result_203 = come_decrement_ref_count2(result_203, ((struct sNode*)result_203)->finalize, ((struct sNode*)result_203)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result144__;
                            if(result_203) { result_203 = come_decrement_ref_count2(result_203, ((struct sNode*)result_203)->finalize, ((struct sNode*)result_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional206;
struct list$1charph* __result146__;
void* right_value217;
void* right_value218;
struct list$1charph* result_204;
struct list_item$1charph* it_205;
_Bool _while_condtional32;
void* right_value222;
struct list$1charph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&result_204, 0, sizeof(struct list$1charph*));
memset(&it_205, 0, sizeof(struct list_item$1charph*));
right_value222 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional206=self==((void*)0),                    _if_conditional206) {
                        # 141 "./neo-c.h"
                        __result146__ = __result_obj__ = ((void*)0);
                        return __result146__;
                    }
                    # 143 "./neo-c.h"
                    result_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 143, "list$1charph"))))))));
                    come_call_finalizer3(right_value217,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value218,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_205=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional32=it_205!=((void*)0),                    _while_condtional32) {
                        # 147 "./neo-c.h"
                        list$1charph_add(result_204,(char*)come_increment_ref_count(((char*)(right_value222=string_clone(it_205->item)))));
                        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        it_205=it_205->next;
                    }
                    # 152 "./neo-c.h"
                    __result148__ = __result_obj__ = result_204;
                    come_call_finalizer3(result_204,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result148__;
                    come_call_finalizer3(result_204,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value219;
struct list_item$1charph* litem_206;
char* __dec_obj72;
_Bool _if_conditional208;
void* right_value220;
struct list_item$1charph* litem_207;
char* __dec_obj73;
void* right_value221;
struct list_item$1charph* litem_208;
char* __dec_obj74;
struct list$1charph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
right_value220 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charph*));
right_value221 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1charph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional207=self->len==0,                            _if_conditional207) {
                                # 157 "./neo-c.h"
                                litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value219=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value219,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_206->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_206->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj72=litem_206->item;
                                litem_206->item=(char*)come_increment_ref_count(item);
                                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_206;
                                # 164 "./neo-c.h"
                                self->head=litem_206;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional208=self->len==1,                                _if_conditional208) {
                                    # 167 "./neo-c.h"
                                    litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value220=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value220,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_207->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_207->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj73=litem_207->item;
                                    litem_207->item=(char*)come_increment_ref_count(item);
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail=litem_207;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_207;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_208=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value221=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 177, "list_item$1charph"))));
                                    come_call_finalizer3(right_value221,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_208->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_208->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj74=litem_208->item;
                                    litem_208->item=(char*)come_increment_ref_count(item);
                                    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_208;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_208;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result147__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result147__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional251;
struct sBlock* __result150__;
void* right_value241;
struct sBlock* result_211;
_Bool _if_conditional254;
void* right_value242;
struct list$1sNodeph* __dec_obj86;
_Bool _if_conditional255;
void* right_value252;
struct sVarTable* __dec_obj89;
struct sBlock* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&result_211, 0, sizeof(struct sBlock*));
right_value242 = (void*)0;
right_value252 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional251=self==(void*)0,        _if_conditional251) {
            # 2 "sBlock_clone"
            __result150__ = __result_obj__ = (void*)0;
            return __result150__;
        }
        # 3 "sBlock_clone"
        result_211=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value241=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value241,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional254=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional254) {
            # 4 "sBlock_clone"
            __dec_obj86=result_211->mNodes;
            result_211->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value242=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj86,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value242,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional255=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional255) {
            # 5 "sBlock_clone"
            __dec_obj89=result_211->mVarTable;
            result_211->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value252=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value252,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result167__ = __result_obj__ = result_211;
        come_call_finalizer3(result_211,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result167__;
        come_call_finalizer3(result_211,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional252;
_Bool _if_conditional253;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional252=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional252) {
                # 0 "sBlock_finalize"
                come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional253=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional253) {
                # 1 "sBlock_finalize"
                come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional256;
struct sVarTable* __result151__;
void* right_value243;
struct sVarTable* result_212;
_Bool _if_conditional257;
void* right_value251;
struct map$2charphsVarph* __dec_obj88;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sVarTable* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
memset(&result_212, 0, sizeof(struct sVarTable*));
right_value251 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional256=self==(void*)0,                _if_conditional256) {
                    # 2 "sVarTable_clone"
                    __result151__ = __result_obj__ = (void*)0;
                    return __result151__;
                }
                # 3 "sVarTable_clone"
                result_212=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value243=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value243,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional257=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional257) {
                    # 4 "sVarTable_clone"
                    __dec_obj88=result_212->mVars;
                    result_212->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value251=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj88,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value251,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional281=self!=((void*)0),                _if_conditional281) {
                    # 5 "sVarTable_clone"
                    result_212->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional282=self!=((void*)0),                _if_conditional282) {
                    # 6 "sVarTable_clone"
                    result_212->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional283=self!=((void*)0),                _if_conditional283) {
                    # 7 "sVarTable_clone"
                    result_212->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result166__ = __result_obj__ = result_212;
                come_call_finalizer3(result_212,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result166__;
                come_call_finalizer3(result_212,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional258;
struct map$2charphsVarph* __result152__;
void* right_value244;
void* right_value245;
struct map$2charphsVarph* result_213;
void* right_value246;
void* right_value247;
struct list$1charp* __dec_obj87;
char* it_216;
struct sVar* default_value_219;
struct sVar* it2_222;
struct map$2charphsVarph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&result_213, 0, sizeof(struct map$2charphsVarph*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&it_216, 0, sizeof(char*));
memset(&default_value_219, 0, sizeof(struct sVar*));
memset(&it2_222, 0, sizeof(struct sVar*));
                        # 1182 "./neo-c.h"
                        # 1178 "./neo-c.h"
                        if(_if_conditional258=self==((void*)0),                        _if_conditional258) {
                            # 1179 "./neo-c.h"
                            __result152__ = __result_obj__ = ((void*)0);
                            return __result152__;
                        }
                        # 1182 "./neo-c.h"
                        result_213=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value245=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value244=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1182, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value244,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value245,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1184 "./neo-c.h"
                        __dec_obj87=result_213->key_list;
                        result_213->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value247=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value246=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1184, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj87,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value246,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value247,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1195 "./neo-c.h"
                        for(                        it_216=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_216=map$2charphsVarph_next(self)                        ){
                            # 1187 "./neo-c.h"
                            # 1188 "./neo-c.h"
                            memset(&default_value_219,0,sizeof(struct sVar*));
                            # 1190 "./neo-c.h"
                            it2_222=map$2charphsVarph_at(self,it_216,default_value_219);
                            # 1192 "./neo-c.h"
                            map$2charphsVarph_insert2(result_213,it_216,it2_222);
                        }
                        # 1195 "./neo-c.h"
                        __result165__ = __result_obj__ = result_213;
                        come_call_finalizer3(result_213,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                        come_call_finalizer3(result_213,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional259;
char* result_214;
char* __result153__;
_Bool _if_conditional260;
char* __result154__;
char* result_215;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_214, 0, sizeof(char*));
memset(&result_215, 0, sizeof(char*));
                            # 1305 "./neo-c.h"
                            # 1300 "./neo-c.h"
                            if(_if_conditional259=self==((void*)0),                            _if_conditional259) {
                                # 1301 "./neo-c.h"
                                # 1302 "./neo-c.h"
                                memset(&result_214,0,sizeof(char*));
                                # 1303 "./neo-c.h"
                                __result153__ = __result_obj__ = result_214;
                                return __result153__;
                            }
                            # 1305 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1311 "./neo-c.h"
                            # 1307 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1308 "./neo-c.h"
                                __result154__ = __result_obj__ = self->key_list->it->item;
                                return __result154__;
                            }
                            # 1311 "./neo-c.h"
                            # 1312 "./neo-c.h"
                            memset(&result_215,0,sizeof(char*));
                            # 1313 "./neo-c.h"
                            __result155__ = __result_obj__ = result_215;
                            return __result155__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1334 "./neo-c.h"
                            __result156__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result156__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional261;
char* result_217;
char* __result157__;
_Bool _if_conditional262;
char* __result158__;
char* result_218;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(char*));
memset(&result_218, 0, sizeof(char*));
                            # 1322 "./neo-c.h"
                            # 1317 "./neo-c.h"
                            if(_if_conditional261=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional261) {
                                # 1318 "./neo-c.h"
                                # 1319 "./neo-c.h"
                                memset(&result_217,0,sizeof(char*));
                                # 1320 "./neo-c.h"
                                __result157__ = __result_obj__ = result_217;
                                return __result157__;
                            }
                            # 1322 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1328 "./neo-c.h"
                            # 1324 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1325 "./neo-c.h"
                                __result158__ = __result_obj__ = self->key_list->it->item;
                                return __result158__;
                            }
                            # 1328 "./neo-c.h"
                            # 1329 "./neo-c.h"
                            memset(&result_218,0,sizeof(char*));
                            # 1330 "./neo-c.h"
                            __result159__ = __result_obj__ = result_218;
                            return __result159__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_220;
unsigned int it_221;
_Bool _while_condtional33;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct sVar* __result160__;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sVar* __result161__;
struct sVar* __result162__;
struct sVar* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_220, 0, sizeof(unsigned int));
memset(&it_221, 0, sizeof(unsigned int));
                                # 1227 "./neo-c.h"
                                hash_220=string_get_hash_key(((char*)key))%self->size;
                                # 1228 "./neo-c.h"
                                it_221=hash_220;
                                # 1252 "./neo-c.h"
                                while(_while_condtional33=(_Bool)1,                                _while_condtional33) {
                                    # 1250 "./neo-c.h"
                                    # 1231 "./neo-c.h"
                                    if(_if_conditional263=self->item_existance[it_221],                                    _if_conditional263) {
                                        # 1238 "./neo-c.h"
                                        # 1233 "./neo-c.h"
                                        if(_if_conditional264=string_equals(self->keys[it_221],key),                                        _if_conditional264) {
                                            # 1235 "./neo-c.h"
                                            __result160__ = __result_obj__ = self->items[it_221];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result160__;
                                        }
                                        # 1238 "./neo-c.h"
                                        it_221++;
                                        # 1246 "./neo-c.h"
                                        # 1240 "./neo-c.h"
                                        if(_if_conditional265=it_221>=self->size,                                        _if_conditional265) {
                                            # 1241 "./neo-c.h"
                                            it_221=0;
                                        }
                                        else {
                                            # 1246 "./neo-c.h"
                                            # 1243 "./neo-c.h"
                                            if(_if_conditional266=it_221==hash_220,                                            _if_conditional266) {
                                                # 1244 "./neo-c.h"
                                                __result161__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result161__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1248 "./neo-c.h"
                                        __result162__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result162__;
                                    }
                                }
                                # 1252 "./neo-c.h"
                                __result163__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result163__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional267;
unsigned int hash_234;
int it_235;
_Bool _while_condtional35;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool same_key_exist_236;
char* it2_237;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct map$2charphsVarph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&it_235, 0, sizeof(int));
memset(&same_key_exist_236, 0, sizeof(_Bool));
memset(&it2_237, 0, sizeof(char*));
                                # 1471 "./neo-c.h"
                                # 1468 "./neo-c.h"
                                if(_if_conditional267=self->len*2>=self->size,                                _if_conditional267) {
                                    # 1469 "./neo-c.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1471 "./neo-c.h"
                                hash_234=string_get_hash_key(key)%self->size;
                                # 1472 "./neo-c.h"
                                it_235=hash_234;
                                # 1530 "./neo-c.h"
                                while(_while_condtional35=(_Bool)1,                                _while_condtional35) {
                                    # 1528 "./neo-c.h"
                                    # 1475 "./neo-c.h"
                                    if(_if_conditional271=self->item_existance[it_235],                                    _if_conditional271) {
                                        # 1498 "./neo-c.h"
                                        # 1477 "./neo-c.h"
                                        if(_if_conditional272=string_equals(self->keys[it_235],key),                                        _if_conditional272) {
                                            # 1488 "./neo-c.h"
                                            # 1479 "./neo-c.h"
                                            if(_if_conditional273=1,                                            _if_conditional273) {
                                                # 1480 "./neo-c.h"
                                                self->keys[it_235] = come_decrement_ref_count2(self->keys[it_235], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1481 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_235]);
                                                # 1482 "./neo-c.h"
                                                self->keys[it_235]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1485 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_235]);
                                                # 1486 "./neo-c.h"
                                                self->keys[it_235]=key;
                                            }
                                            # 1495 "./neo-c.h"
                                            # 1488 "./neo-c.h"
                                            if(_if_conditional274=1,                                            _if_conditional274) {
                                                # 1489 "./neo-c.h"
                                                come_call_finalizer3(self->items[it_235],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                # 1490 "./neo-c.h"
                                                self->items[it_235]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1493 "./neo-c.h"
                                                self->items[it_235]=item;
                                            }
                                            # 1495 "./neo-c.h"
                                            break;
                                        }
                                        # 1498 "./neo-c.h"
                                        it_235++;
                                        # 1508 "./neo-c.h"
                                        # 1500 "./neo-c.h"
                                        if(_if_conditional275=it_235>=self->size,                                        _if_conditional275) {
                                            # 1501 "./neo-c.h"
                                            it_235=0;
                                        }
                                        else {
                                            # 1508 "./neo-c.h"
                                            # 1503 "./neo-c.h"
                                            if(_if_conditional276=it_235==hash_234,                                            _if_conditional276) {
                                                # 1504 "./neo-c.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1505 "./neo-c.h"
                                                stackframe();
                                                # 1506 "./neo-c.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1510 "./neo-c.h"
                                        self->item_existance[it_235]=(_Bool)1;
                                        # 1517 "./neo-c.h"
                                        # 1511 "./neo-c.h"
                                        if(_if_conditional277=1,                                        _if_conditional277) {
                                            # 1512 "./neo-c.h"
                                            self->keys[it_235]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1515 "./neo-c.h"
                                            self->keys[it_235]=key;
                                        }
                                        # 1524 "./neo-c.h"
                                        # 1517 "./neo-c.h"
                                        if(_if_conditional278=1,                                        _if_conditional278) {
                                            # 1518 "./neo-c.h"
                                            self->items[it_235]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1521 "./neo-c.h"
                                            self->items[it_235]=item;
                                        }
                                        # 1524 "./neo-c.h"
                                        self->len++;
                                        # 1526 "./neo-c.h"
                                        break;
                                    }
                                }
                                # 1530 "./neo-c.h"
                                same_key_exist_236=(_Bool)0;
                                # 1538 "./neo-c.h"
                                for(                                it2_237=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_237=list$1charp_next(self->key_list)                                ){
                                    # 1536 "./neo-c.h"
                                    # 1533 "./neo-c.h"
                                    if(_if_conditional279=string_equals(it2_237,key),                                    _if_conditional279) {
                                        # 1534 "./neo-c.h"
                                        same_key_exist_236=(_Bool)1;
                                    }
                                }
                                # 1542 "./neo-c.h"
                                # 1538 "./neo-c.h"
                                if(_if_conditional280=!same_key_exist_236,                                _if_conditional280) {
                                    # 1539 "./neo-c.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1542 "./neo-c.h"
                                __result164__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_223;
void* right_value248;
char** keys_224;
void* right_value249;
struct sVar** items_225;
void* right_value250;
_Bool* item_existance_226;
int len_227;
char* it_228;
struct sVar* default_value_229;
struct sVar* it2_230;
unsigned int hash_231;
int n_232;
_Bool _while_condtional34;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sVar* default_value_233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_223, 0, sizeof(int));
right_value248 = (void*)0;
memset(&keys_224, 0, sizeof(char**));
right_value249 = (void*)0;
memset(&items_225, 0, sizeof(struct sVar**));
right_value250 = (void*)0;
memset(&item_existance_226, 0, sizeof(_Bool*));
memset(&len_227, 0, sizeof(int));
memset(&it_228, 0, sizeof(char*));
memset(&default_value_229, 0, sizeof(struct sVar*));
memset(&it2_230, 0, sizeof(struct sVar*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&n_232, 0, sizeof(int));
memset(&default_value_233, 0, sizeof(struct sVar*));
                                        # 1338 "./neo-c.h"
                                        size_223=self->size*10;
                                        # 1339 "./neo-c.h"
                                        keys_224=(char**)come_increment_ref_count(((char**)(right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_223)), "./neo-c.h", 1339, "char*%"))));
                                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1340 "./neo-c.h"
                                        items_225=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value249=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_223)), "./neo-c.h", 1340, "sVar*%"))));
                                        come_call_finalizer3(right_value249,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1341 "./neo-c.h"
                                        item_existance_226=(_Bool*)come_increment_ref_count(((_Bool*)(right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_223)), "./neo-c.h", 1341, "bool"))));
                                        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1343 "./neo-c.h"
                                        len_227=0;
                                        # 1378 "./neo-c.h"
                                        for(                                        it_228=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_228=map$2charphsVarph_next(self)                                        ){
                                            # 1346 "./neo-c.h"
                                            # 1347 "./neo-c.h"
                                            memset(&default_value_229,0,sizeof(struct sVar*));
                                            # 1348 "./neo-c.h"
                                            it2_230=map$2charphsVarph_at(self,it_228,default_value_229);
                                            # 1349 "./neo-c.h"
                                            hash_231=string_get_hash_key(it_228)%size_223;
                                            # 1350 "./neo-c.h"
                                            n_232=hash_231;
                                            # 1376 "./neo-c.h"
                                            while(_while_condtional34=(_Bool)1,                                            _while_condtional34) {
                                                # 1375 "./neo-c.h"
                                                # 1353 "./neo-c.h"
                                                if(_if_conditional268=item_existance_226[n_232],                                                _if_conditional268) {
                                                    # 1355 "./neo-c.h"
                                                    n_232++;
                                                    # 1365 "./neo-c.h"
                                                    # 1357 "./neo-c.h"
                                                    if(_if_conditional269=n_232>=size_223,                                                    _if_conditional269) {
                                                        # 1358 "./neo-c.h"
                                                        n_232=0;
                                                    }
                                                    else {
                                                        # 1365 "./neo-c.h"
                                                        # 1360 "./neo-c.h"
                                                        if(_if_conditional270=n_232==hash_231,                                                        _if_conditional270) {
                                                            # 1361 "./neo-c.h"
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            # 1362 "./neo-c.h"
                                                            stackframe();
                                                            # 1363 "./neo-c.h"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1367 "./neo-c.h"
                                                    item_existance_226[n_232]=(_Bool)1;
                                                    # 1368 "./neo-c.h"
                                                    keys_224[n_232]=it_228;
                                                    # 1369 "./neo-c.h"
                                                    # 1370 "./neo-c.h"
                                                    items_225[n_232]=map$2charphsVarph_at(self,it_228,default_value_233);
                                                    # 1372 "./neo-c.h"
                                                    len_227++;
                                                    # 1373 "./neo-c.h"
                                                    break;
                                                }
                                            }
                                        }
                                        # 1378 "./neo-c.h"
                                        come_free((char*)self->items);
                                        # 1379 "./neo-c.h"
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        # 1380 "./neo-c.h"
                                        come_free((char*)self->keys);
                                        # 1382 "./neo-c.h"
                                        self->keys=keys_224;
                                        # 1383 "./neo-c.h"
                                        self->items=items_225;
                                        # 1384 "./neo-c.h"
                                        self->item_existance=item_existance_226;
                                        # 1386 "./neo-c.h"
                                        self->size=size_223;
                                        # 1387 "./neo-c.h"
                                        self->len=len_227;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional284=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional284) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional285=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional285) {
            # 1 "sFun_finalize"
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional286=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional286) {
            # 2 "sFun_finalize"
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional287=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional287) {
            # 3 "sFun_finalize"
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional288=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional288) {
            # 4 "sFun_finalize"
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional289=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional289) {
            # 5 "sFun_finalize"
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional290=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional290) {
            # 6 "sFun_finalize"
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional291=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional291) {
            # 7 "sFun_finalize"
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional292=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional292) {
            # 8 "sFun_finalize"
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional293=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional293) {
            # 9 "sFun_finalize"
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional294=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional294) {
            # 10 "sFun_finalize"
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional295=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional295) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional296=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional296) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
int i_238;
void* right_value288;
char* generics_type_239;
void* right_value289;
void* right_value290;
int i_240;
void* right_value291;
char* generics_type_241;
void* right_value292;
void* right_value293;
int rc_243;
_Bool _if_conditional297;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
char* type_name_244;
void* right_value298;
void* right_value299;
struct sType* type_245;
void* right_value300;
char* __dec_obj93;
void* right_value304;
void* right_value305;
void* right_value306;
struct sClass* klass_267;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
void* right_value323;
void* right_value324;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
void* right_value334;
void* right_value335;
void* right_value350;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&i_238, 0, sizeof(int));
right_value288 = (void*)0;
memset(&generics_type_239, 0, sizeof(char*));
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&i_240, 0, sizeof(int));
right_value291 = (void*)0;
memset(&generics_type_241, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&rc_243, 0, sizeof(int));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&type_name_244, 0, sizeof(char*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&type_245, 0, sizeof(struct sType*));
right_value300 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&klass_267, 0, sizeof(struct sClass*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value350 = (void*)0;
    # 444 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value257=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value256=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value256,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value257,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 445 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value260=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value259=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 445, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value259,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 446 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value263=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value262=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 446, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value262,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 447 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value266=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value265=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 447, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value266,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 448 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value269=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value268=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 448, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 449 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value272=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value271=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 449, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value272,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 450 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value275=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value274=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 450, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value274,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value275,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 451 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value278=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value277=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 451, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value278,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 452 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value281=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value280=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 452, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value280,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 453 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value284=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value283=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 453, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value284,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 454 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value287=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value286=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 454, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value286,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value287,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 459 "02transpile.c"
    for(    i_238=0;    i_238<12;    i_238++    ){
        # 456 "02transpile.c"
        generics_type_239=(char*)come_increment_ref_count(((char*)(right_value288=xsprintf("generics_type%d",i_238))));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 457 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_239),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value290=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value289=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 457, "sClass")))),generics_type_239,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_238,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value289,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_239 = come_decrement_ref_count2(generics_type_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 464 "02transpile.c"
    for(    i_240=0;    i_240<7;    i_240++    ){
        # 460 "02transpile.c"
        generics_type_241=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("mgenerics_type%d",i_240))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 461 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_241),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value293=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value292=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 461, "sClass")))),generics_type_241,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_240,(_Bool)0,info)))));
        come_call_finalizer3(right_value292,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value293,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_241 = come_decrement_ref_count2(generics_type_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 464 "02transpile.c"
    char cmd_242[1024];
    memset(&cmd_242, 0, sizeof(char)    *(1024)    );
    # 465 "02transpile.c"
    snprintf(cmd_242,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    # 467 "02transpile.c"
    rc_243=system(cmd_242);
    # 491 "02transpile.c"
    # 468 "02transpile.c"
    if(_if_conditional297=rc_243==0,    _if_conditional297) {
        # 469 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value296=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value295=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 469, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value295,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value296,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 471 "02transpile.c"
        type_name_244=(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string("__builtin_va_list"))));
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 473 "02transpile.c"
        type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 473, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value298,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 474 "02transpile.c"
        __dec_obj93=type_245->mOriginalTypeName;
        type_245->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string("__builtin_va_list"))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 476 "02transpile.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string(type_name_244)))),(struct sType*)come_increment_ref_count(type_245));
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_244 = come_decrement_ref_count2(type_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 481 "02transpile.c"
        klass_267=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value306=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value305=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 481, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value305,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value306,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 483 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value314=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value310=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 483, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 483, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value310,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value314,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 484 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value319=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value315=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 484, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 484, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value315,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value319,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 485 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value324=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value320=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 485, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 485, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value320,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 486 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value329=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value325=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 486, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value326=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 486, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value325,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value329,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 487 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value334=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value330=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 487, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 487, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value330,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value334,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 489 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value350=sClass_clone(klass_267)))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value350,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_267,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional298;
unsigned int hash_263;
unsigned int it_264;
_Bool _while_condtional38;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool same_key_exist_265;
char* it2_266;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct map$2charphsTypeph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&it_264, 0, sizeof(unsigned int));
memset(&same_key_exist_265, 0, sizeof(_Bool));
memset(&it2_266, 0, sizeof(char*));
            # 1394 "./neo-c.h"
            # 1391 "./neo-c.h"
            if(_if_conditional298=self->len*10>=self->size,            _if_conditional298) {
                # 1392 "./neo-c.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1394 "./neo-c.h"
            hash_263=string_get_hash_key(key)%self->size;
            # 1395 "./neo-c.h"
            it_264=hash_263;
            # 1453 "./neo-c.h"
            while(_while_condtional38=(_Bool)1,            _while_condtional38) {
                # 1451 "./neo-c.h"
                # 1398 "./neo-c.h"
                if(_if_conditional310=self->item_existance[it_264],                _if_conditional310) {
                    # 1421 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional311=string_equals(self->keys[it_264],key),                    _if_conditional311) {
                        # 1411 "./neo-c.h"
                        # 1402 "./neo-c.h"
                        if(_if_conditional312=1,                        _if_conditional312) {
                            # 1403 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_264]);
                            # 1404 "./neo-c.h"
                            self->keys[it_264] = come_decrement_ref_count2(self->keys[it_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1405 "./neo-c.h"
                            self->keys[it_264]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1408 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_264]);
                            # 1409 "./neo-c.h"
                            self->keys[it_264]=key;
                        }
                        # 1418 "./neo-c.h"
                        # 1411 "./neo-c.h"
                        if(_if_conditional313=1,                        _if_conditional313) {
                            # 1412 "./neo-c.h"
                            come_call_finalizer3(self->items[it_264],sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 1413 "./neo-c.h"
                            self->items[it_264]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1416 "./neo-c.h"
                            self->items[it_264]=item;
                        }
                        # 1418 "./neo-c.h"
                        break;
                    }
                    # 1421 "./neo-c.h"
                    it_264++;
                    # 1431 "./neo-c.h"
                    # 1423 "./neo-c.h"
                    if(_if_conditional314=it_264>=self->size,                    _if_conditional314) {
                        # 1424 "./neo-c.h"
                        it_264=0;
                    }
                    else {
                        # 1431 "./neo-c.h"
                        # 1426 "./neo-c.h"
                        if(_if_conditional315=it_264==hash_263,                        _if_conditional315) {
                            # 1427 "./neo-c.h"
                            printf("unexpected error in map.insert\n");
                            # 1428 "./neo-c.h"
                            stackframe();
                            # 1429 "./neo-c.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1433 "./neo-c.h"
                    self->item_existance[it_264]=(_Bool)1;
                    # 1440 "./neo-c.h"
                    # 1434 "./neo-c.h"
                    if(_if_conditional316=1,                    _if_conditional316) {
                        # 1435 "./neo-c.h"
                        self->keys[it_264]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1438 "./neo-c.h"
                        self->keys[it_264]=key;
                    }
                    # 1447 "./neo-c.h"
                    # 1440 "./neo-c.h"
                    if(_if_conditional317=1,                    _if_conditional317) {
                        # 1441 "./neo-c.h"
                        self->items[it_264]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1444 "./neo-c.h"
                        self->items[it_264]=item;
                    }
                    # 1447 "./neo-c.h"
                    self->len++;
                    # 1449 "./neo-c.h"
                    break;
                }
            }
            # 1453 "./neo-c.h"
            same_key_exist_265=(_Bool)0;
            # 1461 "./neo-c.h"
            for(            it2_266=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_266=list$1charp_next(self->key_list)            ){
                # 1459 "./neo-c.h"
                # 1456 "./neo-c.h"
                if(_if_conditional318=string_equals(it2_266,key),                _if_conditional318) {
                    # 1457 "./neo-c.h"
                    same_key_exist_265=(_Bool)1;
                }
            }
            # 1465 "./neo-c.h"
            # 1461 "./neo-c.h"
            if(_if_conditional319=!same_key_exist_265,            _if_conditional319) {
                # 1462 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./neo-c.h"
            __result180__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result180__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_246;
void* right_value301;
char** keys_247;
void* right_value302;
struct sType** items_248;
void* right_value303;
_Bool* item_existance_249;
int len_250;
char* it_253;
struct sType* default_value_256;
struct sType* it2_259;
unsigned int hash_260;
int n_261;
_Bool _while_condtional37;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct sType* default_value_262;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_246, 0, sizeof(int));
right_value301 = (void*)0;
memset(&keys_247, 0, sizeof(char**));
right_value302 = (void*)0;
memset(&items_248, 0, sizeof(struct sType**));
right_value303 = (void*)0;
memset(&item_existance_249, 0, sizeof(_Bool*));
memset(&len_250, 0, sizeof(int));
memset(&it_253, 0, sizeof(char*));
memset(&default_value_256, 0, sizeof(struct sType*));
memset(&it2_259, 0, sizeof(struct sType*));
memset(&hash_260, 0, sizeof(unsigned int));
memset(&n_261, 0, sizeof(int));
memset(&default_value_262, 0, sizeof(struct sType*));
                    # 1338 "./neo-c.h"
                    size_246=self->size*10;
                    # 1339 "./neo-c.h"
                    keys_247=(char**)come_increment_ref_count(((char**)(right_value301=(char**)come_calloc(1, sizeof(char*)*(1*(size_246)), "./neo-c.h", 1339, "char*%"))));
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    items_248=(struct sType**)come_increment_ref_count(((struct sType**)(right_value302=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_246)), "./neo-c.h", 1340, "sType*%"))));
                    come_call_finalizer3(right_value302,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1341 "./neo-c.h"
                    item_existance_249=(_Bool*)come_increment_ref_count(((_Bool*)(right_value303=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_246)), "./neo-c.h", 1341, "bool"))));
                    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1343 "./neo-c.h"
                    len_250=0;
                    # 1378 "./neo-c.h"
                    for(                    it_253=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_253=map$2charphsTypeph_next(self)                    ){
                        # 1346 "./neo-c.h"
                        # 1347 "./neo-c.h"
                        memset(&default_value_256,0,sizeof(struct sType*));
                        # 1348 "./neo-c.h"
                        it2_259=map$2charphsTypeph_at(self,it_253,default_value_256);
                        # 1349 "./neo-c.h"
                        hash_260=string_get_hash_key(it_253)%size_246;
                        # 1350 "./neo-c.h"
                        n_261=hash_260;
                        # 1376 "./neo-c.h"
                        while(_while_condtional37=(_Bool)1,                        _while_condtional37) {
                            # 1375 "./neo-c.h"
                            # 1353 "./neo-c.h"
                            if(_if_conditional307=item_existance_249[n_261],                            _if_conditional307) {
                                # 1355 "./neo-c.h"
                                n_261++;
                                # 1365 "./neo-c.h"
                                # 1357 "./neo-c.h"
                                if(_if_conditional308=n_261>=size_246,                                _if_conditional308) {
                                    # 1358 "./neo-c.h"
                                    n_261=0;
                                }
                                else {
                                    # 1365 "./neo-c.h"
                                    # 1360 "./neo-c.h"
                                    if(_if_conditional309=n_261==hash_260,                                    _if_conditional309) {
                                        # 1361 "./neo-c.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1362 "./neo-c.h"
                                        stackframe();
                                        # 1363 "./neo-c.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1367 "./neo-c.h"
                                item_existance_249[n_261]=(_Bool)1;
                                # 1368 "./neo-c.h"
                                keys_247[n_261]=it_253;
                                # 1369 "./neo-c.h"
                                # 1370 "./neo-c.h"
                                items_248[n_261]=map$2charphsTypeph_at(self,it_253,default_value_262);
                                # 1372 "./neo-c.h"
                                len_250++;
                                # 1373 "./neo-c.h"
                                break;
                            }
                        }
                    }
                    # 1378 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1379 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1380 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1382 "./neo-c.h"
                    self->keys=keys_247;
                    # 1383 "./neo-c.h"
                    self->items=items_248;
                    # 1384 "./neo-c.h"
                    self->item_existance=item_existance_249;
                    # 1386 "./neo-c.h"
                    self->size=size_246;
                    # 1387 "./neo-c.h"
                    self->len=len_250;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional299;
char* result_251;
char* __result169__;
_Bool _if_conditional300;
char* __result170__;
char* result_252;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_251, 0, sizeof(char*));
memset(&result_252, 0, sizeof(char*));
                        # 1305 "./neo-c.h"
                        # 1300 "./neo-c.h"
                        if(_if_conditional299=self==((void*)0),                        _if_conditional299) {
                            # 1301 "./neo-c.h"
                            # 1302 "./neo-c.h"
                            memset(&result_251,0,sizeof(char*));
                            # 1303 "./neo-c.h"
                            __result169__ = __result_obj__ = result_251;
                            return __result169__;
                        }
                        # 1305 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1311 "./neo-c.h"
                        # 1307 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1308 "./neo-c.h"
                            __result170__ = __result_obj__ = self->key_list->it->item;
                            return __result170__;
                        }
                        # 1311 "./neo-c.h"
                        # 1312 "./neo-c.h"
                        memset(&result_252,0,sizeof(char*));
                        # 1313 "./neo-c.h"
                        __result171__ = __result_obj__ = result_252;
                        return __result171__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1334 "./neo-c.h"
                        __result172__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result172__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional301;
char* result_254;
char* __result173__;
_Bool _if_conditional302;
char* __result174__;
char* result_255;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_254, 0, sizeof(char*));
memset(&result_255, 0, sizeof(char*));
                        # 1322 "./neo-c.h"
                        # 1317 "./neo-c.h"
                        if(_if_conditional301=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional301) {
                            # 1318 "./neo-c.h"
                            # 1319 "./neo-c.h"
                            memset(&result_254,0,sizeof(char*));
                            # 1320 "./neo-c.h"
                            __result173__ = __result_obj__ = result_254;
                            return __result173__;
                        }
                        # 1322 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1328 "./neo-c.h"
                        # 1324 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1325 "./neo-c.h"
                            __result174__ = __result_obj__ = self->key_list->it->item;
                            return __result174__;
                        }
                        # 1328 "./neo-c.h"
                        # 1329 "./neo-c.h"
                        memset(&result_255,0,sizeof(char*));
                        # 1330 "./neo-c.h"
                        __result175__ = __result_obj__ = result_255;
                        return __result175__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_257;
unsigned int it_258;
_Bool _while_condtional36;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct sType* __result176__;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct sType* __result177__;
struct sType* __result178__;
struct sType* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_257, 0, sizeof(unsigned int));
memset(&it_258, 0, sizeof(unsigned int));
                            # 1227 "./neo-c.h"
                            hash_257=string_get_hash_key(((char*)key))%self->size;
                            # 1228 "./neo-c.h"
                            it_258=hash_257;
                            # 1252 "./neo-c.h"
                            while(_while_condtional36=(_Bool)1,                            _while_condtional36) {
                                # 1250 "./neo-c.h"
                                # 1231 "./neo-c.h"
                                if(_if_conditional303=self->item_existance[it_258],                                _if_conditional303) {
                                    # 1238 "./neo-c.h"
                                    # 1233 "./neo-c.h"
                                    if(_if_conditional304=string_equals(self->keys[it_258],key),                                    _if_conditional304) {
                                        # 1235 "./neo-c.h"
                                        __result176__ = __result_obj__ = self->items[it_258];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result176__;
                                    }
                                    # 1238 "./neo-c.h"
                                    it_258++;
                                    # 1246 "./neo-c.h"
                                    # 1240 "./neo-c.h"
                                    if(_if_conditional305=it_258>=self->size,                                    _if_conditional305) {
                                        # 1241 "./neo-c.h"
                                        it_258=0;
                                    }
                                    else {
                                        # 1246 "./neo-c.h"
                                        # 1243 "./neo-c.h"
                                        if(_if_conditional306=it_258==hash_257,                                        _if_conditional306) {
                                            # 1244 "./neo-c.h"
                                            __result177__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result177__;
                                        }
                                    }
                                }
                                else {
                                    # 1248 "./neo-c.h"
                                    __result178__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result178__;
                                }
                            }
                            # 1252 "./neo-c.h"
                            __result179__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result179__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional320;
void* right_value307;
struct list_item$1tuple2$2charphsTypephph* litem_268;
struct tuple2$2charphsTypeph* __dec_obj94;
_Bool _if_conditional323;
void* right_value308;
struct list_item$1tuple2$2charphsTypephph* litem_269;
struct tuple2$2charphsTypeph* __dec_obj95;
void* right_value309;
struct list_item$1tuple2$2charphsTypephph* litem_270;
struct tuple2$2charphsTypeph* __dec_obj96;
struct list$1tuple2$2charphsTypephph* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
memset(&litem_268, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value308 = (void*)0;
memset(&litem_269, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value309 = (void*)0;
memset(&litem_270, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 257 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional320=self->len==0,            _if_conditional320) {
                # 227 "./neo-c.h"
                litem_268=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value307=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value307,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_268->prev=((void*)0);
                # 230 "./neo-c.h"
                litem_268->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj94=litem_268->item;
                litem_268->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj94,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_268;
                # 234 "./neo-c.h"
                self->head=litem_268;
            }
            else {
                # 257 "./neo-c.h"
                # 236 "./neo-c.h"
                if(_if_conditional323=self->len==1,                _if_conditional323) {
                    # 237 "./neo-c.h"
                    litem_269=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value308=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value308,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_269->prev=self->head;
                    # 240 "./neo-c.h"
                    litem_269->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj95=litem_269->item;
                    litem_269->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj95,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail=litem_269;
                    # 244 "./neo-c.h"
                    self->head->next=litem_269;
                }
                else {
                    # 247 "./neo-c.h"
                    litem_270=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value309=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 247, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value309,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 249 "./neo-c.h"
                    litem_270->prev=self->tail;
                    # 250 "./neo-c.h"
                    litem_270->next=((void*)0);
                    # 251 "./neo-c.h"
                    __dec_obj96=litem_270->item;
                    litem_270->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj96,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 253 "./neo-c.h"
                    self->tail->next=litem_270;
                    # 254 "./neo-c.h"
                    self->tail=litem_270;
                }
            }
            # 257 "./neo-c.h"
            self->len++;
            # 259 "./neo-c.h"
            __result181__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result181__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj97;
struct sType* __dec_obj98;
struct tuple2$2charphsTypeph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1768 "./neo-c.h"
            __dec_obj97=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1769 "./neo-c.h"
            __dec_obj98=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1771 "./neo-c.h"
            __result182__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result182__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional328;
struct sClass* __result183__;
void* right_value336;
struct sClass* result_271;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value337;
char* __dec_obj99;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value347;
struct list$1tuple2$2charphsTypephph* __dec_obj105;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value348;
char* __dec_obj106;
_Bool _if_conditional358;
_Bool _if_conditional359;
void* right_value349;
char* __dec_obj107;
struct sClass* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
memset(&result_271, 0, sizeof(struct sClass*));
right_value337 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional328=self==(void*)0,            _if_conditional328) {
                # 2 "sClass_clone"
                __result183__ = __result_obj__ = (void*)0;
                return __result183__;
            }
            # 3 "sClass_clone"
            result_271=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value336=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value336,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional329=self!=((void*)0),            _if_conditional329) {
                # 4 "sClass_clone"
                result_271->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional330=self!=((void*)0),            _if_conditional330) {
                # 5 "sClass_clone"
                result_271->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional331=self!=((void*)0),            _if_conditional331) {
                # 6 "sClass_clone"
                result_271->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional332=self!=((void*)0),            _if_conditional332) {
                # 7 "sClass_clone"
                result_271->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional333=self!=((void*)0),            _if_conditional333) {
                # 8 "sClass_clone"
                result_271->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional334=self!=((void*)0),            _if_conditional334) {
                # 9 "sClass_clone"
                result_271->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional335=self!=((void*)0),            _if_conditional335) {
                # 10 "sClass_clone"
                result_271->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional336=self!=((void*)0),            _if_conditional336) {
                # 11 "sClass_clone"
                result_271->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional337=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional337) {
                # 12 "sClass_clone"
                __dec_obj99=result_271->mName;
                result_271->mName=(char*)come_increment_ref_count(((char*)(right_value337=string_clone(self->mName))));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional338=self!=((void*)0),            _if_conditional338) {
                # 13 "sClass_clone"
                result_271->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional339=self!=((void*)0),            _if_conditional339) {
                # 14 "sClass_clone"
                result_271->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional340=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional340) {
                # 15 "sClass_clone"
                __dec_obj105=result_271->mFields;
                result_271->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value347=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj105,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value347,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional355=self!=((void*)0),            _if_conditional355) {
                # 16 "sClass_clone"
                result_271->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional356=self!=((void*)0),            _if_conditional356) {
                # 17 "sClass_clone"
                result_271->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional357=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional357) {
                # 18 "sClass_clone"
                __dec_obj106=result_271->mDeclareSName;
                result_271->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value348=string_clone(self->mDeclareSName))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional358=self!=((void*)0),            _if_conditional358) {
                # 19 "sClass_clone"
                result_271->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional359=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional359) {
                # 20 "sClass_clone"
                __dec_obj107=result_271->mParentClassName;
                result_271->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(self->mParentClassName))));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result189__ = __result_obj__ = result_271;
            come_call_finalizer3(result_271,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result189__;
            come_call_finalizer3(result_271,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional341;
struct list$1tuple2$2charphsTypephph* __result184__;
void* right_value338;
void* right_value339;
struct list$1tuple2$2charphsTypephph* result_272;
struct list_item$1tuple2$2charphsTypephph* it_273;
_Bool _while_condtional39;
void* right_value346;
struct list$1tuple2$2charphsTypephph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&result_272, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_273, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value346 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional341=self==((void*)0),                    _if_conditional341) {
                        # 141 "./neo-c.h"
                        __result184__ = __result_obj__ = ((void*)0);
                        return __result184__;
                    }
                    # 143 "./neo-c.h"
                    result_272=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value339=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value338=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 143, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value338,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value339,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_273=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional39=it_273!=((void*)0),                    _while_condtional39) {
                        # 147 "./neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_272,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value346=tuple2$2charphsTypephp_clone(it_273->item)))));
                        come_call_finalizer3(right_value346,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        it_273=it_273->next;
                    }
                    # 152 "./neo-c.h"
                    __result188__ = __result_obj__ = result_272;
                    come_call_finalizer3(result_272,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result188__;
                    come_call_finalizer3(result_272,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional342;
void* right_value340;
struct list_item$1tuple2$2charphsTypephph* litem_274;
struct tuple2$2charphsTypeph* __dec_obj100;
_Bool _if_conditional345;
void* right_value341;
struct list_item$1tuple2$2charphsTypephph* litem_275;
struct tuple2$2charphsTypeph* __dec_obj101;
void* right_value342;
struct list_item$1tuple2$2charphsTypephph* litem_276;
struct tuple2$2charphsTypeph* __dec_obj102;
struct list$1tuple2$2charphsTypephph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value340 = (void*)0;
memset(&litem_274, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value341 = (void*)0;
memset(&litem_275, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value342 = (void*)0;
memset(&litem_276, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional342=self->len==0,                            _if_conditional342) {
                                # 157 "./neo-c.h"
                                litem_274=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value340=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value340,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_274->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_274->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj100=litem_274->item;
                                litem_274->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj100,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_274;
                                # 164 "./neo-c.h"
                                self->head=litem_274;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional345=self->len==1,                                _if_conditional345) {
                                    # 167 "./neo-c.h"
                                    litem_275=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value341=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value341,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_275->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_275->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj101=litem_275->item;
                                    litem_275->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj101,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail=litem_275;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_275;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_276=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 177, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value342,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_276->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_276->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj102=litem_276->item;
                                    litem_276->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj102,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_276;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_276;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result185__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result185__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional348=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional348) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional349=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional349) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional350;
struct tuple2$2charphsTypeph* __result186__;
void* right_value343;
struct tuple2$2charphsTypeph* result_277;
_Bool _if_conditional353;
void* right_value344;
char* __dec_obj103;
_Bool _if_conditional354;
void* right_value345;
struct sType* __dec_obj104;
struct tuple2$2charphsTypeph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
memset(&result_277, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value344 = (void*)0;
right_value345 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional350=self==(void*)0,                            _if_conditional350) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result186__ = __result_obj__ = (void*)0;
                                return __result186__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_277=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value343=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value343,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional353=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional353) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj103=result_277->v1;
                                result_277->v1=(char*)come_increment_ref_count(((char*)(right_value344=string_clone(self->v1))));
                                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional354=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional354) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj104=result_277->v2;
                                result_277->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result187__ = __result_obj__ = result_277;
                            come_call_finalizer3(result_277,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result187__;
                            come_call_finalizer3(result_277,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional351=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional351) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional352=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional352) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

void init_module(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value351;
char* project_name_278;
void* right_value352;
void* right_value353;
void* right_value354;
char* project_name_debug_279;
void* right_value355;
char* cc_280;
void* right_value356;
char* install_281;
void* right_value357;
char* libs_282;
void* right_value358;
char* os_283;
void* right_value359;
char* prefix_284;
void* right_value360;
char* cflags_285;
void* right_value361;
char* cflags_debug_286;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* right_value362;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
void* right_value367;
void* right_value368;
void* right_value369;
void* right_value370;
void* right_value371;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
void* right_value376;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
memset(&project_name_278, 0, sizeof(char*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&project_name_debug_279, 0, sizeof(char*));
right_value355 = (void*)0;
memset(&cc_280, 0, sizeof(char*));
right_value356 = (void*)0;
memset(&install_281, 0, sizeof(char*));
right_value357 = (void*)0;
memset(&libs_282, 0, sizeof(char*));
right_value358 = (void*)0;
memset(&os_283, 0, sizeof(char*));
right_value359 = (void*)0;
memset(&prefix_284, 0, sizeof(char*));
right_value360 = (void*)0;
memset(&cflags_285, 0, sizeof(char*));
right_value361 = (void*)0;
memset(&cflags_debug_286, 0, sizeof(char*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
    # 499 "02transpile.c"
    project_name_278=(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(argv[2]))));
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 500 "02transpile.c"
    project_name_debug_279=(char*)come_increment_ref_count(((char*)(right_value354=string_operator_add(((char*)(right_value352=__builtin_string(argv[2]))),((char*)(right_value353=__builtin_string("-debug")))))));
    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 501 "02transpile.c"
    cc_280=(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string("neo-c"))));
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 502 "02transpile.c"
    install_281=(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string("install"))));
    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 503 "02transpile.c"
    libs_282=(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string("-lpcre"))));
    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 504 "02transpile.c"
    os_283=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string("linux"))));
    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 505 "02transpile.c"
    prefix_284=(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string("/usr/local/"))));
    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 506 "02transpile.c"
    cflags_285=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(" -common-header -O2 "))));
    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 507 "02transpile.c"
    cflags_debug_286=(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 509 "02transpile.c"
    if(_or_conditional1=mkdir(project_name_278,448|56|4|1),    _or_conditional1 != 0) {
        # 509 "02transpile.c"
        (come_push_stackframe("02transpile.c", 509, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    # 603 "02transpile.c"
    charp_write(((char*)(right_value388=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value362=string_to_string(prefix_284))),((char*)(right_value363=string_to_string(project_name_278))),((char*)(right_value364=string_to_string(project_name_278))),((char*)(right_value365=string_to_string(project_name_278))),((char*)(right_value366=string_to_string(project_name_278))),((char*)(right_value367=string_to_string(cc_280))),((char*)(right_value368=string_to_string(install_281))),((char*)(right_value369=string_to_string(cflags_285))),((char*)(right_value370=string_to_string(cflags_debug_286))),((char*)(right_value371=string_to_string(libs_282))),((char*)(right_value372=string_to_string(os_283))),((char*)(right_value373=string_to_string(prefix_284))),((char*)(right_value374=string_to_string(project_name_278))),((char*)(right_value375=string_to_string(project_name_debug_279))),((char*)(right_value376=string_to_string(project_name_278))),((char*)(right_value377=string_to_string(project_name_278))),((char*)(right_value378=string_to_string(project_name_278))),((char*)(right_value379=string_to_string(project_name_278))),((char*)(right_value380=string_to_string(project_name_debug_279))),((char*)(right_value381=string_to_string(project_name_278))),((char*)(right_value382=string_to_string(project_name_278))),((char*)(right_value383=string_to_string(project_name_278))),((char*)(right_value384=string_to_string(project_name_278))),((char*)(right_value385=string_to_string(project_name_278))),((char*)(right_value386=string_to_string(project_name_debug_279))),((char*)(right_value387=string_to_string(project_name_debug_279)))))),((char*)(right_value390=xsprintf("\%s/Makefile",((char*)(right_value389=string_to_string(project_name_278)))))),(_Bool)0);
    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 605 "02transpile.c"
    __result190__ = (_Bool)1;
    project_name_278 = come_decrement_ref_count2(project_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_279 = come_decrement_ref_count2(project_name_debug_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_280 = come_decrement_ref_count2(cc_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_281 = come_decrement_ref_count2(install_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_282 = come_decrement_ref_count2(libs_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_283 = come_decrement_ref_count2(os_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_284 = come_decrement_ref_count2(prefix_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_285 = come_decrement_ref_count2(cflags_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_286 = come_decrement_ref_count2(cflags_debug_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result190__;
    project_name_278 = come_decrement_ref_count2(project_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_279 = come_decrement_ref_count2(project_name_debug_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_280 = come_decrement_ref_count2(cc_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_281 = come_decrement_ref_count2(install_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_282 = come_decrement_ref_count2(libs_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_283 = come_decrement_ref_count2(os_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_284 = come_decrement_ref_count2(prefix_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_285 = come_decrement_ref_count2(cflags_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_286 = come_decrement_ref_count2(cflags_debug_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 610 "02transpile.c"
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        # 610 "02transpile.c"
        (come_push_stackframe("02transpile.c", 610, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    # 612 "02transpile.c"
    __result191__ = (_Bool)1;
    return __result191__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    # 617 "02transpile.c"
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        # 617 "02transpile.c"
        (come_push_stackframe("02transpile.c", 617, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    # 619 "02transpile.c"
    __result192__ = (_Bool)1;
    return __result192__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    # 624 "02transpile.c"
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        # 624 "02transpile.c"
        (come_push_stackframe("02transpile.c", 624, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    # 626 "02transpile.c"
    __result193__ = (_Bool)1;
    return __result193__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    # 631 "02transpile.c"
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        # 631 "02transpile.c"
        (come_push_stackframe("02transpile.c", 631, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    # 633 "02transpile.c"
    __result194__ = (_Bool)1;
    return __result194__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    # 638 "02transpile.c"
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        # 638 "02transpile.c"
        (come_push_stackframe("02transpile.c", 638, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    # 640 "02transpile.c"
    __result195__ = (_Bool)1;
    return __result195__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value391;
void* right_value392;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value391 = (void*)0;
right_value392 = (void*)0;
    # 645 "02transpile.c"
    if(_or_conditional7=system(((char*)(right_value392=xsprintf("make install DESTDIR=\%s",((char*)(right_value391=charp_to_string(prefix))))))),    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        # 645 "02transpile.c"
        (come_push_stackframe("02transpile.c", 645, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    # 647 "02transpile.c"
    __result196__ = (_Bool)1;
    return __result196__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional360;
void* right_value393;
void* right_value394;
struct buffer* clang_option_287;
void* right_value395;
void* right_value396;
struct buffer* cpp_option_288;
void* right_value397;
void* right_value398;
struct list$1charph* files_289;
void* right_value399;
void* right_value400;
struct list$1charph* object_files_290;
_Bool output_object_file_291;
_Bool output_cpp_file_292;
_Bool output_source_file_flag_293;
void* right_value401;
char* output_file_name_294;
_Bool verbose_295;
_Bool prohibit_common_header_296;
_Bool come_debug_297;
_Bool come_malloc_298;
_Bool come_str_299;
int i_300;
_Bool _if_conditional361;
void* right_value402;
char* __dec_obj108;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value403;
_Bool _if_conditional369;
void* right_value404;
void* right_value405;
void* right_value406;
_Bool _if_conditional370;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
_Bool _if_conditional371;
_Bool _if_conditional372;
void* right_value411;
void* right_value412;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value413;
_Bool _if_conditional378;
void* right_value414;
void* right_value415;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct _IO_FILE* f_301;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value416;
char* tmp_file_302;
void* right_value420;
void* right_value421;
void* right_value422;
void* right_value423;
struct sInfo info_306;
void* right_value424;
char* __dec_obj109;
void* right_value425;
char* __dec_obj110;
void* right_value426;
char* __dec_obj111;
void* right_value427;
char* __dec_obj112;
void* right_value428;
void* right_value434;
struct map$2charphsFunph* __dec_obj114;
void* right_value435;
void* right_value441;
struct map$2charphsGenericsFunph* __dec_obj116;
void* right_value442;
void* right_value448;
struct map$2charphsClassph* __dec_obj118;
void* right_value449;
void* right_value455;
struct map$2charphsClassModuleph* __dec_obj120;
void* right_value456;
void* right_value462;
struct map$2charphsTypeph* __dec_obj122;
void* right_value463;
void* right_value464;
struct sModule* __dec_obj123;
void* right_value465;
void* right_value466;
struct list$1sRightValueObjectph* __dec_obj124;
void* right_value467;
void* right_value468;
struct list$1CVALUEph* __dec_obj125;
void* right_value469;
void* right_value470;
struct sVarTable* __dec_obj126;
void* right_value471;
void* right_value472;
struct sVarTable* lv_table_340;
void* right_value473;
void* right_value474;
struct list$1charph* __dec_obj127;
void* right_value475;
void* right_value476;
struct list$1charph* __dec_obj128;
void* right_value477;
void* right_value478;
struct map$2charphsClassph* __dec_obj129;
static int n_341=0;
void* right_value479;
char* __dec_obj130;
_Bool _if_conditional440;
void* right_value480;
void* right_value481;
void* right_value482;
struct buffer* __dec_obj131;
void* right_value483;
void* right_value484;
void* right_value485;
struct buffer* __dec_obj132;
_Bool _if_conditional441;
_Bool _if_conditional442;
void* right_value486;
void* right_value487;
_Bool _if_conditional475;
_Bool _if_conditional476;
int __result207__;
_Bool _if_conditional477;
_Bool _if_conditional478;
int __result208__;
_Bool _if_conditional479;
_Bool _if_conditional480;
int __result209__;
_Bool _if_conditional481;
_Bool _if_conditional482;
int __result210__;
_Bool _if_conditional483;
_Bool _if_conditional484;
int __result211__;
_Bool _if_conditional485;
_Bool _if_conditional486;
int __result212__;
_Bool _if_conditional487;
_Bool _if_conditional488;
_Bool _if_conditional489;
int __result213__;
_Bool _if_conditional490;
_Bool _if_conditional491;
int __result214__;
void* right_value488;
void* right_value489;
struct buffer* clang_option_344;
void* right_value490;
void* right_value491;
struct buffer* cpp_option_345;
void* right_value492;
void* right_value493;
struct list$1charph* files_346;
void* right_value494;
void* right_value495;
struct list$1charph* object_files_347;
_Bool output_object_file_348;
_Bool output_cpp_file_349;
_Bool output_source_file_flag_350;
char* output_file_name_351;
_Bool verbose_352;
_Bool come_debug_353;
_Bool come_malloc_354;
_Bool come_str_355;
int i_356;
_Bool _if_conditional492;
void* right_value496;
char* __dec_obj133;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
void* right_value497;
_Bool _if_conditional499;
void* right_value498;
void* right_value499;
void* right_value500;
_Bool _if_conditional500;
void* right_value501;
void* right_value502;
void* right_value503;
void* right_value504;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
void* right_value505;
void* right_value506;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
void* right_value507;
_Bool _if_conditional509;
void* right_value508;
void* right_value509;
void* right_value510;
_Bool _if_conditional510;
_Bool _if_conditional511;
struct list$1charph* o2_saved_357;
char* it_358;
struct sInfo info_359;
void* right_value511;
char* __dec_obj134;
void* right_value512;
char* __dec_obj135;
void* right_value513;
char* __dec_obj136;
void* right_value514;
void* right_value515;
struct map$2charphsFunph* __dec_obj137;
void* right_value516;
void* right_value517;
struct map$2charphsGenericsFunph* __dec_obj138;
void* right_value518;
void* right_value519;
struct map$2charphsClassph* __dec_obj139;
void* right_value520;
void* right_value521;
struct map$2charphsClassModuleph* __dec_obj140;
void* right_value522;
void* right_value523;
struct map$2charphsTypeph* __dec_obj141;
void* right_value524;
void* right_value525;
struct sModule* __dec_obj142;
void* right_value526;
void* right_value527;
struct list$1sRightValueObjectph* __dec_obj143;
void* right_value528;
void* right_value529;
struct list$1CVALUEph* __dec_obj144;
void* right_value530;
void* right_value531;
struct sVarTable* __dec_obj145;
void* right_value532;
void* right_value533;
struct sVarTable* lv_table_360;
void* right_value534;
void* right_value535;
struct list$1charph* __dec_obj146;
void* right_value536;
void* right_value537;
struct list$1charph* __dec_obj147;
void* right_value538;
void* right_value539;
struct map$2charphsClassph* __dec_obj148;
_Bool _if_conditional512;
void* right_value540;
void* right_value541;
void* right_value542;
struct buffer* __dec_obj149;
void* right_value543;
void* right_value544;
void* right_value545;
struct buffer* __dec_obj150;
_Bool _if_conditional513;
void* right_value546;
char* __dec_obj151;
char* __dec_obj152;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
struct sInfo info_361;
void* right_value547;
char* __dec_obj153;
void* right_value548;
char* __dec_obj154;
_Bool _if_conditional521;
void* right_value549;
char* __dec_obj155;
char* __dec_obj156;
struct __current_stack2__ __current_stack2__;
int __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&clang_option_287, 0, sizeof(struct buffer*));
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&cpp_option_288, 0, sizeof(struct buffer*));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&files_289, 0, sizeof(struct list$1charph*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&object_files_290, 0, sizeof(struct list$1charph*));
memset(&output_object_file_291, 0, sizeof(_Bool));
memset(&output_cpp_file_292, 0, sizeof(_Bool));
memset(&output_source_file_flag_293, 0, sizeof(_Bool));
right_value401 = (void*)0;
memset(&output_file_name_294, 0, sizeof(char*));
memset(&verbose_295, 0, sizeof(_Bool));
memset(&prohibit_common_header_296, 0, sizeof(_Bool));
memset(&come_debug_297, 0, sizeof(_Bool));
memset(&come_malloc_298, 0, sizeof(_Bool));
memset(&come_str_299, 0, sizeof(_Bool));
memset(&i_300, 0, sizeof(int));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&f_301, 0, sizeof(struct _IO_FILE*));
right_value416 = (void*)0;
memset(&tmp_file_302, 0, sizeof(char*));
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&info_306, 0, sizeof(struct sInfo));
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
memset(&lv_table_340, 0, sizeof(struct sVarTable*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
memset(&clang_option_344, 0, sizeof(struct buffer*));
right_value490 = (void*)0;
right_value491 = (void*)0;
memset(&cpp_option_345, 0, sizeof(struct buffer*));
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&files_346, 0, sizeof(struct list$1charph*));
right_value494 = (void*)0;
right_value495 = (void*)0;
memset(&object_files_347, 0, sizeof(struct list$1charph*));
memset(&output_object_file_348, 0, sizeof(_Bool));
memset(&output_cpp_file_349, 0, sizeof(_Bool));
memset(&output_source_file_flag_350, 0, sizeof(_Bool));
memset(&output_file_name_351, 0, sizeof(char*));
memset(&verbose_352, 0, sizeof(_Bool));
memset(&come_debug_353, 0, sizeof(_Bool));
memset(&come_malloc_354, 0, sizeof(_Bool));
memset(&come_str_355, 0, sizeof(_Bool));
memset(&i_356, 0, sizeof(int));
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
memset(&o2_saved_357, 0, sizeof(struct list$1charph*));
memset(&it_358, 0, sizeof(char*));
memset(&info_359, 0, sizeof(struct sInfo));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
memset(&lv_table_360, 0, sizeof(struct sVarTable*));
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
memset(&info_361, 0, sizeof(struct sInfo));
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    # 1053 "02transpile.c"
    # 652 "02transpile.c"
    if(_if_conditional360=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional360) {
        # 653 "02transpile.c"
        gProgramName=argv[0];
        # 655 "02transpile.c"
        clang_option_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value394=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value393=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 655, "buffer"))))))));
        come_call_finalizer3(right_value393,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value394,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 656 "02transpile.c"
        cpp_option_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 656, "buffer"))))))));
        come_call_finalizer3(right_value395,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value396,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 657 "02transpile.c"
        files_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value398=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value397=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 657, "list$1charph"))))))));
        come_call_finalizer3(right_value397,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value398,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 658 "02transpile.c"
        object_files_290=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 658, "list$1charph"))))))));
        come_call_finalizer3(right_value399,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 659 "02transpile.c"
        output_object_file_291=(_Bool)0;
        # 660 "02transpile.c"
        output_cpp_file_292=(_Bool)0;
        # 661 "02transpile.c"
        output_source_file_flag_293=(_Bool)0;
        # 662 "02transpile.c"
        output_file_name_294=(char*)come_increment_ref_count(((char*)(right_value401=__builtin_string("common.h"))));
        right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 663 "02transpile.c"
        verbose_295=(_Bool)0;
        # 664 "02transpile.c"
        prohibit_common_header_296=(_Bool)0;
        # 665 "02transpile.c"
        come_debug_297=(_Bool)0;
        # 666 "02transpile.c"
        come_malloc_298=(_Bool)0;
        # 667 "02transpile.c"
        come_str_299=(_Bool)0;
        # 733 "02transpile.c"
        for(        i_300=2;        i_300<argc;        i_300++        ){
            # 731 "02transpile.c"
            # 669 "02transpile.c"
            if(_if_conditional361=charp_operator_equals(argv[i_300],"-o")&&i_300+1<argc,            _if_conditional361) {
                # 670 "02transpile.c"
                __dec_obj108=output_file_name_294;
                output_file_name_294=(char*)come_increment_ref_count(((char*)(right_value402=__builtin_string(argv[i_300+1]))));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 671 "02transpile.c"
                i_300++;
            }
            else {
                # 731 "02transpile.c"
                # 673 "02transpile.c"
                if(_if_conditional362=charp_operator_equals(argv[i_300],"-str"),                _if_conditional362) {
                    # 674 "02transpile.c"
                    come_str_299=(_Bool)1;
                }
                else {
                    # 731 "02transpile.c"
                    # 676 "02transpile.c"
                    if(_if_conditional363=charp_operator_equals(argv[i_300],"-leak"),                    _if_conditional363) {
                        # 677 "02transpile.c"
                        come_malloc_298=(_Bool)1;
                    }
                    else {
                        # 731 "02transpile.c"
                        # 679 "02transpile.c"
                        if(_if_conditional364=charp_operator_equals(argv[i_300],"-gc"),                        _if_conditional364) {
                            # 680 "02transpile.c"
                            gComeGC=(_Bool)1;
                        }
                        else {
                            # 731 "02transpile.c"
                            # 682 "02transpile.c"
                            if(_if_conditional365=charp_operator_equals(argv[i_300],"-g"),                            _if_conditional365) {
                                # 683 "02transpile.c"
                                buffer_append_str(clang_option_287,"-g ");
                            }
                            else {
                                # 731 "02transpile.c"
                                # 685 "02transpile.c"
                                if(_if_conditional366=charp_operator_equals(argv[i_300],"-cg"),                                _if_conditional366) {
                                    # 686 "02transpile.c"
                                    buffer_append_str(clang_option_287,"-g ");
                                    # 687 "02transpile.c"
                                    come_debug_297=(_Bool)1;
                                }
                                else {
                                    # 731 "02transpile.c"
                                    # 689 "02transpile.c"
                                    if(_if_conditional367=charp_operator_equals(argv[i_300],"-common-header"),                                    _if_conditional367) {
                                        # 690 "02transpile.c"
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        # 731 "02transpile.c"
                                        # 692 "02transpile.c"
                                        if(_if_conditional368=charp_operator_equals(argv[i_300],"-original-position"),                                        _if_conditional368) {
                                            # 693 "02transpile.c"
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            # 731 "02transpile.c"
                                            # 695 "02transpile.c"
                                            if(_if_conditional369=string_operator_equals(((char*)(right_value403=charp_operator_load_range_element(argv[i_300],0,2))),"-O"),                                            right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional369) {
                                                # 696 "02transpile.c"
                                                buffer_append_str(clang_option_287,((char*)(right_value405=xsprintf(" \%s ",((char*)(right_value404=charp_to_string(argv[i_300])))))));
                                                right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 697 "02transpile.c"
                                                come_debug_297=(_Bool)0;
                                            }
                                            else {
                                                # 731 "02transpile.c"
                                                # 699 "02transpile.c"
                                                if(_if_conditional370=string_operator_equals(((char*)(right_value406=charp_operator_load_range_element(argv[i_300],0,2))),"-D"),                                                right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional370) {
                                                    # 700 "02transpile.c"
                                                    buffer_append_str(cpp_option_288,((char*)(right_value408=xsprintf(" \%s ",((char*)(right_value407=charp_to_string(argv[i_300])))))));
                                                    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 701 "02transpile.c"
                                                    buffer_append_str(clang_option_287,((char*)(right_value410=xsprintf(" \%s ",((char*)(right_value409=charp_to_string(argv[i_300])))))));
                                                    right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 731 "02transpile.c"
                                                    # 703 "02transpile.c"
                                                    if(_if_conditional371=charp_operator_equals(argv[i_300],"-v"),                                                    _if_conditional371) {
                                                        # 704 "02transpile.c"
                                                        buffer_append_str(clang_option_287,"-v ");
                                                        # 705 "02transpile.c"
                                                        verbose_295=(_Bool)1;
                                                    }
                                                    else {
                                                        # 731 "02transpile.c"
                                                        # 707 "02transpile.c"
                                                        if(_if_conditional372=strlen(argv[i_300])>=2&&memcmp(argv[i_300],"-I",strlen("-I"))==0,                                                        _if_conditional372) {
                                                            # 708 "02transpile.c"
                                                            buffer_append_str(cpp_option_288,((char*)(right_value412=charp_operator_add(" ",((char*)(right_value411=charp_operator_add(argv[i_300]," ")))))));
                                                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 731 "02transpile.c"
                                                            # 710 "02transpile.c"
                                                            if(_if_conditional373=charp_operator_equals(argv[i_300],"-gdwarf-4"),                                                            _if_conditional373) {
                                                                # 711 "02transpile.c"
                                                                buffer_append_str(clang_option_287,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                # 731 "02transpile.c"
                                                                # 713 "02transpile.c"
                                                                if(_if_conditional374=charp_operator_equals(argv[i_300],"-s")||charp_operator_equals(argv[i_300],"-S"),                                                                _if_conditional374) {
                                                                    # 714 "02transpile.c"
                                                                    output_source_file_flag_293=(_Bool)1;
                                                                }
                                                                else {
                                                                    # 731 "02transpile.c"
                                                                    # 716 "02transpile.c"
                                                                    if(_if_conditional375=charp_operator_equals(argv[i_300],"-c"),                                                                    _if_conditional375) {
                                                                        # 717 "02transpile.c"
                                                                        output_object_file_291=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        # 731 "02transpile.c"
                                                                        # 719 "02transpile.c"
                                                                        if(_if_conditional376=charp_operator_equals(argv[i_300],"-E"),                                                                        _if_conditional376) {
                                                                            # 720 "02transpile.c"
                                                                            output_cpp_file_292=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 731 "02transpile.c"
                                                                            # 722 "02transpile.c"
                                                                            if(_if_conditional377=argv[i_300][0]==45,                                                                            _if_conditional377) {
                                                                                # 723 "02transpile.c"
                                                                                buffer_append_str(clang_option_287,((char*)(right_value413=charp_operator_add(argv[i_300]," "))));
                                                                                right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 731 "02transpile.c"
                                                                                # 725 "02transpile.c"
                                                                                if(_if_conditional378=strlen(argv[i_300])>2&&memcmp(argv[i_300]+strlen(argv[i_300])-2,".o",2)==0,                                                                                _if_conditional378) {
                                                                                    # 726 "02transpile.c"
                                                                                    list$1charph_push_back(object_files_290,(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(argv[i_300])))));
                                                                                    right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 729 "02transpile.c"
                                                                                    list$1charph_push_back(files_289,(char*)come_increment_ref_count(((char*)(right_value415=__builtin_string(argv[i_300])))));
                                                                                    right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        # 733 "02transpile.c"
        gComeDebug=come_debug_297;
        # 734 "02transpile.c"
        gComeMalloc=come_malloc_298;
        # 745 "02transpile.c"
        # 736 "02transpile.c"
        if(come_str_299) {
            # 743 "02transpile.c"
            # 737 "02transpile.c"
            if(gComeGC) {
                # 738 "02transpile.c"
                buffer_append_str(clang_option_287," -lneo-c-str-gc -lpcre ");
            }
            else {
                # 741 "02transpile.c"
                buffer_append_str(clang_option_287," -lneo-c-str -lpcre ");
            }
        }
        # 745 "02transpile.c"
        if(_and_conditional1=f_301=fopen(output_file_name_294,"w"),        _and_conditional1 == 0) {
            # 745 "02transpile.c"
            (come_push_stackframe("02transpile.c", 745, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        # 746 "02transpile.c"
        fclose(f_301);
        # 748 "02transpile.c"
        if(_or_conditional8=truncate(output_file_name_294,0),        _or_conditional8 != 0) {
            # 748 "02transpile.c"
            (come_push_stackframe("02transpile.c", 748, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        # 750 "02transpile.c"
        come_init_v5();
        # 752 "02transpile.c"
        tmp_file_302=(char*)come_increment_ref_count(((char*)(right_value416=__builtin_string("tmp-common-header"))));
        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 754 "02transpile.c"
        system(((char*)(right_value423=xsprintf("cat \%s > \%s",((char*)(right_value421=string_to_string(((char*)(right_value420=list$1charph_join(files_289," ")))))),((char*)(right_value422=string_to_string(tmp_file_302)))))));
        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 756 "02transpile.c"
        # 758 "02transpile.c"
        memset(&info_306,0,sizeof(struct sInfo));
        # 760 "02transpile.c"
        __dec_obj109=info_306.base_sname;
        info_306.base_sname=(char*)come_increment_ref_count(((char*)(right_value424=__builtin_string(tmp_file_302))));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 761 "02transpile.c"
        __dec_obj110=info_306.sname;
        info_306.sname=(char*)come_increment_ref_count(((char*)(right_value425=__builtin_string(tmp_file_302))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 762 "02transpile.c"
        info_306.sline=1;
        # 763 "02transpile.c"
        info_306.err_num=0;
        # 764 "02transpile.c"
        __dec_obj111=info_306.clang_option;
        info_306.clang_option=(char*)come_increment_ref_count(((char*)(right_value426=buffer_to_string(clang_option_287))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 765 "02transpile.c"
        __dec_obj112=info_306.cpp_option;
        info_306.cpp_option=(char*)come_increment_ref_count(((char*)(right_value427=buffer_to_string(cpp_option_288))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 766 "02transpile.c"
        info_306.no_output_err=(_Bool)0;
        # 767 "02transpile.c"
        __dec_obj114=info_306.funcs;
        info_306.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value434=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value428=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 767, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj114,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value428,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value434,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 768 "02transpile.c"
        __dec_obj116=info_306.generics_funcs;
        info_306.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value441=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value435=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 768, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj116,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value435,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value441,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 769 "02transpile.c"
        __dec_obj118=info_306.classes;
        info_306.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value448=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value442=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 769, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj118,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value442,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value448,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 770 "02transpile.c"
        __dec_obj120=info_306.modules;
        info_306.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value455=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value449=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 770, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj120,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value449,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value455,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 771 "02transpile.c"
        __dec_obj122=info_306.types;
        info_306.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value462=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value456=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 771, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj122,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value456,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value462,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 772 "02transpile.c"
        __dec_obj123=info_306.module;
        info_306.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value464=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value463=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 772, "sModule"))))))));
        come_call_finalizer3(__dec_obj123,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value463,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value464,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        # 773 "02transpile.c"
        __dec_obj124=info_306.right_value_objects;
        info_306.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value466=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value465=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 773, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj124,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value465,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value466,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 774 "02transpile.c"
        __dec_obj125=info_306.stack;
        info_306.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value468=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value467=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 774, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj125,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value467,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value468,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 775 "02transpile.c"
        __dec_obj126=info_306.gv_table;
        info_306.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value470=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value469=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 775, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj126,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value469,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value470,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 776 "02transpile.c"
        lv_table_340=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value472=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value471=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 776, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value471,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value472,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 777 "02transpile.c"
        info_306.lv_table=lv_table_340;
        # 778 "02transpile.c"
        __dec_obj127=info_306.generics_type_names;
        info_306.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value474=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value473=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 778, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value473,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value474,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 779 "02transpile.c"
        __dec_obj128=info_306.method_generics_type_names;
        info_306.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value476=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value475=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 779, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value475,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value476,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 780 "02transpile.c"
        __dec_obj129=info_306.generics_classes;
        info_306.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value478=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value477=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 780, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj129,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value477,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value478,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 781 "02transpile.c"
        info_306.verbose=verbose_295;
        # 782 "02transpile.c"
        info_306.output_header_file=(_Bool)1;
        # 784 "02transpile.c"
        # 785 "02transpile.c"
        info_306.num_source_files=n_341++;
        # 786 "02transpile.c"
        info_306.max_source_files=list$1charph_length(files_289);
        # 788 "02transpile.c"
        __dec_obj130=info_306.output_file_name;
        info_306.output_file_name=(char*)come_increment_ref_count(((char*)(right_value479=__builtin_string(output_file_name_294))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 790 "02transpile.c"
        init_classes(&info_306);
        # 791 "02transpile.c"
        init_module(&info_306);
        # 793 "02transpile.c"
        clear_tmp_file(&info_306);
        # 800 "02transpile.c"
        # 795 "02transpile.c"
        if(_if_conditional440=!cpp(&info_306),        _if_conditional440) {
            # 796 "02transpile.c"
            printf("%s %d: transpile failed\n",info_306.sname,info_306.sline);
            # 797 "02transpile.c"
            exit(2);
        }
        # 800 "02transpile.c"
        __dec_obj131=info_306.original_source;
        info_306.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value482=string_to_buffer(((char*)(right_value481=string_read(((char*)(right_value480=xsprintf("%s",tmp_file_302))))))))));
        come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value482,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 801 "02transpile.c"
        __dec_obj132=info_306.source;
        info_306.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value485=string_to_buffer(((char*)(right_value484=string_read(((char*)(right_value483=xsprintf("%s.i",tmp_file_302))))))))));
        come_call_finalizer3(__dec_obj132,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value485,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 802 "02transpile.c"
        info_306.p=info_306.source->buf;
        # 803 "02transpile.c"
        info_306.head=info_306.source->buf;
        # 814 "02transpile.c"
        # 805 "02transpile.c"
        if(_if_conditional441=!output_cpp_file_292,        _if_conditional441) {
            # 806 "02transpile.c"
            transpile_v5(&info_306);
            # 812 "02transpile.c"
            # 808 "02transpile.c"
            if(_if_conditional442=!output_header_file(&info_306),            _if_conditional442) {
                # 809 "02transpile.c"
                printf("%s %d: output source file faield\n",info_306.sname,info_306.sline);
                # 810 "02transpile.c"
                exit(2);
            }
        }
        # 814 "02transpile.c"
        system(((char*)(right_value487=xsprintf("rm -rf \%s*",((char*)(right_value486=string_to_string(tmp_file_302)))))));
        right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 816 "02transpile.c"
        come_final_v5();
        come_call_finalizer3(clang_option_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_290,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_294 = come_decrement_ref_count2(output_file_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_302 = come_decrement_ref_count2(tmp_file_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_306),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_340,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1053 "02transpile.c"
        # 818 "02transpile.c"
        if(_if_conditional475=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional475) {
            # 822 "02transpile.c"
            # 819 "02transpile.c"
            if(_if_conditional476=!new_project(argc,argv),            _if_conditional476) {
                # 820 "02transpile.c"
                __result207__ = (_Bool)0;
                return __result207__;
            }
        }
        else {
            # 1053 "02transpile.c"
            # 823 "02transpile.c"
            if(_if_conditional477=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional477) {
                # 827 "02transpile.c"
                # 824 "02transpile.c"
                if(_if_conditional478=!run_project(argc,argv),                _if_conditional478) {
                    # 825 "02transpile.c"
                    __result208__ = (_Bool)0;
                    return __result208__;
                }
            }
            else {
                # 1053 "02transpile.c"
                # 828 "02transpile.c"
                if(_if_conditional479=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional479) {
                    # 832 "02transpile.c"
                    # 829 "02transpile.c"
                    if(_if_conditional480=!make_header_project(argc,argv),                    _if_conditional480) {
                        # 830 "02transpile.c"
                        __result209__ = (_Bool)0;
                        return __result209__;
                    }
                }
                else {
                    # 1053 "02transpile.c"
                    # 833 "02transpile.c"
                    if(_if_conditional481=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional481) {
                        # 837 "02transpile.c"
                        # 834 "02transpile.c"
                        if(_if_conditional482=!compile_project(argc,argv),                        _if_conditional482) {
                            # 835 "02transpile.c"
                            __result210__ = (_Bool)0;
                            return __result210__;
                        }
                    }
                    else {
                        # 1053 "02transpile.c"
                        # 838 "02transpile.c"
                        if(_if_conditional483=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional483) {
                            # 842 "02transpile.c"
                            # 839 "02transpile.c"
                            if(_if_conditional484=!debug_run_project(argc,argv),                            _if_conditional484) {
                                # 840 "02transpile.c"
                                __result211__ = (_Bool)0;
                                return __result211__;
                            }
                        }
                        else {
                            # 1053 "02transpile.c"
                            # 843 "02transpile.c"
                            if(_if_conditional485=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional485) {
                                # 847 "02transpile.c"
                                # 844 "02transpile.c"
                                if(_if_conditional486=!clean_project(argc,argv),                                _if_conditional486) {
                                    # 845 "02transpile.c"
                                    __result212__ = (_Bool)0;
                                    return __result212__;
                                }
                            }
                            else {
                                # 1053 "02transpile.c"
                                # 848 "02transpile.c"
                                if(_if_conditional487=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional487) {
                                    # 859 "02transpile.c"
                                    # 849 "02transpile.c"
                                    if(_if_conditional488=argc==2,                                    _if_conditional488) {
                                        # 853 "02transpile.c"
                                        # 850 "02transpile.c"
                                        if(_if_conditional489=!install_project(argc,argv,"/usr/local"),                                        _if_conditional489) {
                                            # 851 "02transpile.c"
                                            __result213__ = (_Bool)0;
                                            return __result213__;
                                        }
                                    }
                                    else {
                                        # 859 "02transpile.c"
                                        # 854 "02transpile.c"
                                        if(_if_conditional490=argc>=3,                                        _if_conditional490) {
                                            # 858 "02transpile.c"
                                            # 855 "02transpile.c"
                                            if(_if_conditional491=!install_project(argc,argv,argv[2]),                                            _if_conditional491) {
                                                # 856 "02transpile.c"
                                                __result214__ = (_Bool)0;
                                                return __result214__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 861 "02transpile.c"
                                    gProgramName=argv[0];
                                    # 863 "02transpile.c"
                                    clang_option_344=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value489=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value488=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 863, "buffer"))))))));
                                    come_call_finalizer3(right_value488,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value489,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 864 "02transpile.c"
                                    cpp_option_345=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value491=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value490=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 864, "buffer"))))))));
                                    come_call_finalizer3(right_value490,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value491,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 865 "02transpile.c"
                                    files_346=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value493=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value492=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 865, "list$1charph"))))))));
                                    come_call_finalizer3(right_value492,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value493,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 866 "02transpile.c"
                                    object_files_347=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value494=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 866, "list$1charph"))))))));
                                    come_call_finalizer3(right_value494,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value495,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 867 "02transpile.c"
                                    output_object_file_348=(_Bool)0;
                                    # 868 "02transpile.c"
                                    output_cpp_file_349=(_Bool)0;
                                    # 869 "02transpile.c"
                                    output_source_file_flag_350=(_Bool)0;
                                    # 870 "02transpile.c"
                                    output_file_name_351=((void*)0);
                                    # 871 "02transpile.c"
                                    verbose_352=(_Bool)0;
                                    # 872 "02transpile.c"
                                    come_debug_353=(_Bool)0;
                                    # 873 "02transpile.c"
                                    come_malloc_354=(_Bool)0;
                                    # 874 "02transpile.c"
                                    come_str_355=(_Bool)0;
                                    # 940 "02transpile.c"
                                    for(                                    i_356=1;                                    i_356<argc;                                    i_356++                                    ){
                                        # 938 "02transpile.c"
                                        # 876 "02transpile.c"
                                        if(_if_conditional492=charp_operator_equals(argv[i_356],"-o")&&i_356+1<argc,                                        _if_conditional492) {
                                            # 877 "02transpile.c"
                                            __dec_obj133=output_file_name_351;
                                            output_file_name_351=(char*)come_increment_ref_count(((char*)(right_value496=__builtin_string(argv[i_356+1]))));
                                            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 878 "02transpile.c"
                                            i_356++;
                                        }
                                        else {
                                            # 938 "02transpile.c"
                                            # 880 "02transpile.c"
                                            if(_if_conditional493=charp_operator_equals(argv[i_356],"-str"),                                            _if_conditional493) {
                                                # 881 "02transpile.c"
                                                come_str_355=(_Bool)1;
                                            }
                                            else {
                                                # 938 "02transpile.c"
                                                # 883 "02transpile.c"
                                                if(_if_conditional494=charp_operator_equals(argv[i_356],"-leak"),                                                _if_conditional494) {
                                                    # 884 "02transpile.c"
                                                    come_malloc_354=(_Bool)1;
                                                }
                                                else {
                                                    # 938 "02transpile.c"
                                                    # 886 "02transpile.c"
                                                    if(_if_conditional495=charp_operator_equals(argv[i_356],"-gc"),                                                    _if_conditional495) {
                                                        # 887 "02transpile.c"
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        # 938 "02transpile.c"
                                                        # 889 "02transpile.c"
                                                        if(_if_conditional496=charp_operator_equals(argv[i_356],"-cg"),                                                        _if_conditional496) {
                                                            # 890 "02transpile.c"
                                                            come_debug_353=(_Bool)1;
                                                            # 891 "02transpile.c"
                                                            buffer_append_str(clang_option_344,"-g ");
                                                        }
                                                        else {
                                                            # 938 "02transpile.c"
                                                            # 893 "02transpile.c"
                                                            if(_if_conditional497=charp_operator_equals(argv[i_356],"-common-header"),                                                            _if_conditional497) {
                                                                # 894 "02transpile.c"
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                # 938 "02transpile.c"
                                                                # 896 "02transpile.c"
                                                                if(_if_conditional498=charp_operator_equals(argv[i_356],"-original-position"),                                                                _if_conditional498) {
                                                                    # 897 "02transpile.c"
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    # 938 "02transpile.c"
                                                                    # 899 "02transpile.c"
                                                                    if(_if_conditional499=string_operator_equals(((char*)(right_value497=charp_operator_load_range_element(argv[i_356],0,2))),"-O"),                                                                    right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                    _if_conditional499) {
                                                                        # 900 "02transpile.c"
                                                                        buffer_append_str(clang_option_344,((char*)(right_value499=xsprintf(" \%s ",((char*)(right_value498=charp_to_string(argv[i_356])))))));
                                                                        right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 901 "02transpile.c"
                                                                        come_debug_353=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        # 938 "02transpile.c"
                                                                        # 903 "02transpile.c"
                                                                        if(_if_conditional500=string_operator_equals(((char*)(right_value500=charp_operator_load_range_element(argv[i_356],0,2))),"-D"),                                                                        right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional500) {
                                                                            # 904 "02transpile.c"
                                                                            buffer_append_str(cpp_option_345,((char*)(right_value502=xsprintf(" \%s ",((char*)(right_value501=charp_to_string(argv[i_356])))))));
                                                                            right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value502 = come_decrement_ref_count2(right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 905 "02transpile.c"
                                                                            buffer_append_str(clang_option_344,((char*)(right_value504=xsprintf(" \%s ",((char*)(right_value503=charp_to_string(argv[i_356])))))));
                                                                            right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value504 = come_decrement_ref_count2(right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 938 "02transpile.c"
                                                                            # 907 "02transpile.c"
                                                                            if(_if_conditional501=charp_operator_equals(argv[i_356],"-g"),                                                                            _if_conditional501) {
                                                                                # 908 "02transpile.c"
                                                                                buffer_append_str(clang_option_344,"-g ");
                                                                            }
                                                                            else {
                                                                                # 938 "02transpile.c"
                                                                                # 910 "02transpile.c"
                                                                                if(_if_conditional502=charp_operator_equals(argv[i_356],"-v"),                                                                                _if_conditional502) {
                                                                                    # 911 "02transpile.c"
                                                                                    buffer_append_str(clang_option_344,"-v ");
                                                                                    # 912 "02transpile.c"
                                                                                    verbose_352=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 938 "02transpile.c"
                                                                                    # 914 "02transpile.c"
                                                                                    if(_if_conditional503=strlen(argv[i_356])>=2&&memcmp(argv[i_356],"-I",strlen("-I"))==0,                                                                                    _if_conditional503) {
                                                                                        # 915 "02transpile.c"
                                                                                        buffer_append_str(cpp_option_345,((char*)(right_value506=charp_operator_add(" ",((char*)(right_value505=charp_operator_add(argv[i_356]," ")))))));
                                                                                        right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        # 938 "02transpile.c"
                                                                                        # 917 "02transpile.c"
                                                                                        if(_if_conditional504=charp_operator_equals(argv[i_356],"-gdwarf-4"),                                                                                        _if_conditional504) {
                                                                                            # 918 "02transpile.c"
                                                                                            buffer_append_str(clang_option_344,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            # 938 "02transpile.c"
                                                                                            # 920 "02transpile.c"
                                                                                            if(_if_conditional505=charp_operator_equals(argv[i_356],"-s")||charp_operator_equals(argv[i_356],"-S"),                                                                                            _if_conditional505) {
                                                                                                # 921 "02transpile.c"
                                                                                                output_source_file_flag_350=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                # 938 "02transpile.c"
                                                                                                # 923 "02transpile.c"
                                                                                                if(_if_conditional506=charp_operator_equals(argv[i_356],"-c"),                                                                                                _if_conditional506) {
                                                                                                    # 924 "02transpile.c"
                                                                                                    output_object_file_348=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    # 938 "02transpile.c"
                                                                                                    # 926 "02transpile.c"
                                                                                                    if(_if_conditional507=charp_operator_equals(argv[i_356],"-E"),                                                                                                    _if_conditional507) {
                                                                                                        # 927 "02transpile.c"
                                                                                                        output_cpp_file_349=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 938 "02transpile.c"
                                                                                                        # 929 "02transpile.c"
                                                                                                        if(_if_conditional508=argv[i_356][0]==45,                                                                                                        _if_conditional508) {
                                                                                                            # 930 "02transpile.c"
                                                                                                            buffer_append_str(clang_option_344,((char*)(right_value507=charp_operator_add(argv[i_356]," "))));
                                                                                                            right_value507 = come_decrement_ref_count2(right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        else {
                                                                                                            # 938 "02transpile.c"
                                                                                                            # 932 "02transpile.c"
                                                                                                            if(_if_conditional509=strlen(argv[i_356])>2&&memcmp(argv[i_356]+strlen(argv[i_356])-2,".o",2)==0,                                                                                                            _if_conditional509) {
                                                                                                                # 933 "02transpile.c"
                                                                                                                list$1charph_push_back(object_files_347,(char*)come_increment_ref_count(((char*)(right_value508=__builtin_string(argv[i_356])))));
                                                                                                                right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                # 936 "02transpile.c"
                                                                                                                list$1charph_push_back(files_346,(char*)come_increment_ref_count(((char*)(right_value510=string_clone(((char*)(right_value509=__builtin_string(argv[i_356]))))))));
                                                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 940 "02transpile.c"
                                    gComeDebug=come_debug_353;
                                    # 941 "02transpile.c"
                                    gComeMalloc=come_malloc_354;
                                    # 952 "02transpile.c"
                                    # 943 "02transpile.c"
                                    if(come_str_355) {
                                        # 950 "02transpile.c"
                                        # 944 "02transpile.c"
                                        if(gComeGC) {
                                            # 945 "02transpile.c"
                                            buffer_append_str(clang_option_344," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            # 948 "02transpile.c"
                                            buffer_append_str(clang_option_344," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    # 952 "02transpile.c"
                                    come_init_v5();
                                    # 1027 "02transpile.c"
                                    for(                                    o2_saved_357=(struct list$1charph*)come_increment_ref_count((files_346)),it_358=list$1charph_begin((o2_saved_357));                                    !list$1charph_end((o2_saved_357));                                    it_358=list$1charph_next((o2_saved_357))                                    ){
                                        # 955 "02transpile.c"
                                        # 957 "02transpile.c"
                                        memset(&info_359,0,sizeof(struct sInfo));
                                        # 959 "02transpile.c"
                                        __dec_obj134=info_359.sname;
                                        info_359.sname=(char*)come_increment_ref_count(((char*)(right_value511=__builtin_string(it_358))));
                                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 960 "02transpile.c"
                                        info_359.sline=1;
                                        # 961 "02transpile.c"
                                        info_359.err_num=0;
                                        # 962 "02transpile.c"
                                        __dec_obj135=info_359.clang_option;
                                        info_359.clang_option=(char*)come_increment_ref_count(((char*)(right_value512=buffer_to_string(clang_option_344))));
                                        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 963 "02transpile.c"
                                        __dec_obj136=info_359.cpp_option;
                                        info_359.cpp_option=(char*)come_increment_ref_count(((char*)(right_value513=buffer_to_string(cpp_option_345))));
                                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value513 = come_decrement_ref_count2(right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 964 "02transpile.c"
                                        info_359.no_output_err=(_Bool)0;
                                        # 965 "02transpile.c"
                                        __dec_obj137=info_359.funcs;
                                        info_359.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value515=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value514=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 965, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj137,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value514,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value515,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 966 "02transpile.c"
                                        __dec_obj138=info_359.generics_funcs;
                                        info_359.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value517=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value516=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 966, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj138,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value516,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value517,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 967 "02transpile.c"
                                        __dec_obj139=info_359.classes;
                                        info_359.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value519=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value518=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 967, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj139,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value518,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value519,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 968 "02transpile.c"
                                        __dec_obj140=info_359.modules;
                                        info_359.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value521=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value520=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 968, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj140,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value520,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value521,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 969 "02transpile.c"
                                        __dec_obj141=info_359.types;
                                        info_359.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value523=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value522=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 969, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj141,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value522,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value523,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 970 "02transpile.c"
                                        __dec_obj142=info_359.module;
                                        info_359.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value525=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value524=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 970, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj142,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value524,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value525,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 971 "02transpile.c"
                                        __dec_obj143=info_359.right_value_objects;
                                        info_359.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value527=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value526=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 971, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj143,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value526,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value527,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 972 "02transpile.c"
                                        __dec_obj144=info_359.stack;
                                        info_359.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value529=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value528=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 972, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj144,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value528,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value529,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 973 "02transpile.c"
                                        __dec_obj145=info_359.gv_table;
                                        info_359.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value531=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value530=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 973, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj145,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value530,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value531,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 974 "02transpile.c"
                                        lv_table_360=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value533=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value532=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 974, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value532,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value533,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 975 "02transpile.c"
                                        info_359.lv_table=lv_table_360;
                                        # 976 "02transpile.c"
                                        __dec_obj146=info_359.generics_type_names;
                                        info_359.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value535=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value534=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 976, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj146,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value534,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value535,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 977 "02transpile.c"
                                        __dec_obj147=info_359.method_generics_type_names;
                                        info_359.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value537=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value536=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 977, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj147,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value536,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value537,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 978 "02transpile.c"
                                        __dec_obj148=info_359.generics_classes;
                                        info_359.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value539=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value538=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 978, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj148,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value538,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value539,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 979 "02transpile.c"
                                        info_359.verbose=verbose_352;
                                        # 981 "02transpile.c"
                                        init_classes(&info_359);
                                        # 982 "02transpile.c"
                                        init_module(&info_359);
                                        # 984 "02transpile.c"
                                        clear_tmp_file(&info_359);
                                        # 991 "02transpile.c"
                                        # 986 "02transpile.c"
                                        if(_if_conditional512=!cpp(&info_359),                                        _if_conditional512) {
                                            # 987 "02transpile.c"
                                            printf("%s %d: transpile failed\n",info_359.sname,info_359.sline);
                                            # 988 "02transpile.c"
                                            exit(2);
                                        }
                                        # 991 "02transpile.c"
                                        __dec_obj149=info_359.original_source;
                                        info_359.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value542=string_to_buffer(((char*)(right_value541=string_read(((char*)(right_value540=xsprintf("%s",it_358))))))))));
                                        come_call_finalizer3(__dec_obj149,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value542,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 992 "02transpile.c"
                                        __dec_obj150=info_359.source;
                                        info_359.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value545=string_to_buffer(((char*)(right_value544=string_read(((char*)(right_value543=xsprintf("%s.i",it_358))))))))));
                                        come_call_finalizer3(__dec_obj150,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value543 = come_decrement_ref_count2(right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value545,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 993 "02transpile.c"
                                        info_359.p=info_359.source->buf;
                                        # 994 "02transpile.c"
                                        info_359.head=info_359.source->buf;
                                        # 1003 "02transpile.c"
                                        # 996 "02transpile.c"
                                        if(output_file_name_351) {
                                            # 997 "02transpile.c"
                                            __dec_obj151=info_359.output_file_name;
                                            info_359.output_file_name=(char*)come_increment_ref_count(((char*)(right_value546=__builtin_string(output_file_name_351))));
                                            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1000 "02transpile.c"
                                            __dec_obj152=info_359.output_file_name;
                                            info_359.output_file_name=((void*)0);
                                            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 1025 "02transpile.c"
                                        # 1003 "02transpile.c"
                                        if(_if_conditional514=!output_cpp_file_349,                                        _if_conditional514) {
                                            # 1004 "02transpile.c"
                                            transpile_v5(&info_359);
                                            # 1011 "02transpile.c"
                                            # 1006 "02transpile.c"
                                            if(_if_conditional515=!output_source_file_v3(&info_359),                                            _if_conditional515) {
                                                # 1007 "02transpile.c"
                                                printf("%s %d: output source file faield\n",info_359.sname,info_359.sline);
                                                # 1008 "02transpile.c"
                                                exit(2);
                                            }
                                            # 1024 "02transpile.c"
                                            # 1011 "02transpile.c"
                                            if(_if_conditional516=info_359.err_num>0,                                            _if_conditional516) {
                                                # 1012 "02transpile.c"
                                                printf("transpile error. err num %d\n",info_359.err_num);
                                                # 1014 "02transpile.c"
                                                exit(2);
                                            }
                                            else {
                                                # 1022 "02transpile.c"
                                                # 1017 "02transpile.c"
                                                if(_if_conditional517=!compile(&info_359,output_object_file_348,object_files_347),                                                _if_conditional517) {
                                                    # 1018 "02transpile.c"
                                                    printf("%s %d: compile faield\n",info_359.sname,info_359.sline);
                                                    # 1019 "02transpile.c"
                                                    exit(27);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_359),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_360,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 1049 "02transpile.c"
                                    # 1027 "02transpile.c"
                                    if(_if_conditional518=!output_object_file_348&&!output_cpp_file_349&&(list$1charph_length(files_346)>0||list$1charph_length(object_files_347)>0),                                    _if_conditional518) {
                                        # 1028 "02transpile.c"
                                        # 1030 "02transpile.c"
                                        memset(&info_361,0,sizeof(struct sInfo));
                                        # 1032 "02transpile.c"
                                        __dec_obj153=info_361.sname;
                                        info_361.sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(list$1charphp_operator_load_element(files_346,0)))));
                                        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1033 "02transpile.c"
                                        __dec_obj154=info_361.clang_option;
                                        info_361.clang_option=(char*)come_increment_ref_count(((char*)(right_value548=buffer_to_string(clang_option_344))));
                                        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1034 "02transpile.c"
                                        info_361.verbose=verbose_352;
                                        # 1043 "02transpile.c"
                                        # 1036 "02transpile.c"
                                        if(output_file_name_351) {
                                            # 1037 "02transpile.c"
                                            __dec_obj155=info_361.output_file_name;
                                            info_361.output_file_name=(char*)come_increment_ref_count(((char*)(right_value549=__builtin_string(output_file_name_351))));
                                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1040 "02transpile.c"
                                            __dec_obj156=info_361.output_file_name;
                                            info_361.output_file_name=((void*)0);
                                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 1047 "02transpile.c"
                                        __current_stack2__.info_361 = &info_361;
                                        __current_stack2__.clang_option_344 = &clang_option_344;
                                        __current_stack2__.cpp_option_345 = &cpp_option_345;
                                        __current_stack2__.files_346 = &files_346;
                                        __current_stack2__.object_files_347 = &object_files_347;
                                        __current_stack2__.output_object_file_348 = &output_object_file_348;
                                        __current_stack2__.output_cpp_file_349 = &output_cpp_file_349;
                                        __current_stack2__.output_source_file_flag_350 = &output_source_file_flag_350;
                                        __current_stack2__.output_file_name_351 = &output_file_name_351;
                                        __current_stack2__.verbose_352 = &verbose_352;
                                        __current_stack2__.come_debug_353 = &come_debug_353;
                                        __current_stack2__.come_malloc_354 = &come_malloc_354;
                                        __current_stack2__.come_str_355 = &come_str_355;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_361,object_files_347),&__current_stack2__,(void*)method_block2_02transpilec);
                                                                if(__current_stack2__.__method_block_result_kind__ == 3)
                        {
                            return (int)__current_stack2__.__method_block_return_value__;
                        }
                                        come_call_finalizer3((&info_361),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    # 1049 "02transpile.c"
                                    come_final_v5();
                                    come_call_finalizer3(clang_option_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_346,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_347,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_351 = come_decrement_ref_count2(output_file_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 1053 "02transpile.c"
    __result217__ = 0;
    return __result217__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value417;
void* right_value418;
struct buffer* buf_303;
int n_304;
char* it_305;
_Bool _if_conditional382;
void* right_value419;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
right_value418 = (void*)0;
memset(&buf_303, 0, sizeof(struct buffer*));
memset(&n_304, 0, sizeof(int));
memset(&it_305, 0, sizeof(char*));
right_value419 = (void*)0;
            # 1048 "./neo-c.h"
            buf_303=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value417=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1048, "buffer"))))))));
            come_call_finalizer3(right_value417,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value418,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1050 "./neo-c.h"
            n_304=0;
            # 1061 "./neo-c.h"
            for(            it_305=list$1charph_begin(self);            !list$1charph_end(self);            it_305=list$1charph_next(self)            ){
                # 1052 "./neo-c.h"
                buffer_append_str(buf_303,it_305);
                # 1058 "./neo-c.h"
                # 1054 "./neo-c.h"
                if(_if_conditional382=n_304<list$1charph_length(self)-1,                _if_conditional382) {
                    # 1055 "./neo-c.h"
                    buffer_append_str(buf_303,sep);
                }
                # 1058 "./neo-c.h"
                n_304++;
            }
            # 1061 "./neo-c.h"
            __result199__ = __result_obj__ = ((char*)(right_value419=buffer_to_string(buf_303)));
            come_call_finalizer3(buf_303,buffer_finalize, 0, 0, 0, 0, (void*)0);
            right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result199__;
            come_call_finalizer3(buf_303,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional381;
int __result197__;
int __result198__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 368 "./neo-c.h"
                    # 365 "./neo-c.h"
                    if(_if_conditional381=self==((void*)0),                    _if_conditional381) {
                        # 366 "./neo-c.h"
                        __result197__ = 0;
                        return __result197__;
                    }
                    # 368 "./neo-c.h"
                    __result198__ = self->len;
                    return __result198__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value429;
void* right_value430;
void* right_value431;
int i_307;
void* right_value432;
void* right_value433;
struct list$1charp* __dec_obj113;
struct map$2charphsFunph* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
memset(&i_307, 0, sizeof(int));
right_value432 = (void*)0;
right_value433 = (void*)0;
            # 1088 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value429=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1089 "./neo-c.h"
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value430=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./neo-c.h", 1089, "sFun*%"))));
            come_call_finalizer3(right_value430,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1090 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value431=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
            right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1097 "./neo-c.h"
            for(            i_307=0;            i_307<1024;            i_307++            ){
                # 1094 "./neo-c.h"
                self->item_existance[i_307]=(_Bool)0;
            }
            # 1097 "./neo-c.h"
            self->size=1024;
            # 1098 "./neo-c.h"
            self->len=0;
            # 1100 "./neo-c.h"
            __dec_obj113=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value433=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value432=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj113,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value432,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value433,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1102 "./neo-c.h"
            self->it=0;
            # 1104 "./neo-c.h"
            __result200__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result200__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_308;
_Bool _if_conditional383;
_Bool _if_conditional384;
int i_309;
_Bool _if_conditional385;
_Bool _if_conditional386;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_308, 0, sizeof(int));
memset(&i_309, 0, sizeof(int));
                # 1138 "./neo-c.h"
                for(                i_308=0;                i_308<self->size;                i_308++                ){
                    # 1137 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional383=self->item_existance[i_308],                    _if_conditional383) {
                        # 1136 "./neo-c.h"
                        # 1133 "./neo-c.h"
                        if(_if_conditional384=1,                        _if_conditional384) {
                            # 1134 "./neo-c.h"
                            come_call_finalizer3(self->items[i_308],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1138 "./neo-c.h"
                come_free((char*)self->items);
                # 1147 "./neo-c.h"
                for(                i_309=0;                i_309<self->size;                i_309++                ){
                    # 1146 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional385=self->item_existance[i_309],                    _if_conditional385) {
                        # 1145 "./neo-c.h"
                        # 1142 "./neo-c.h"
                        if(_if_conditional386=1,                        _if_conditional386) {
                            # 1143 "./neo-c.h"
                            self->keys[i_309] = come_decrement_ref_count2(self->keys[i_309], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "./neo-c.h"
                come_free((char*)self->keys);
                # 1149 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1151 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_310;
_Bool _if_conditional387;
_Bool _if_conditional388;
int i_311;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_310, 0, sizeof(int));
memset(&i_311, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_310=0;            i_310<self->size;            i_310++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional387=self->item_existance[i_310],                _if_conditional387) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional388=1,                    _if_conditional388) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_310],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_311=0;            i_311<self->size;            i_311++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional389=self->item_existance[i_311],                _if_conditional389) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional390=1,                    _if_conditional390) {
                        # 1143 "./neo-c.h"
                        self->keys[i_311] = come_decrement_ref_count2(self->keys[i_311], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value436;
void* right_value437;
void* right_value438;
int i_312;
void* right_value439;
void* right_value440;
struct list$1charp* __dec_obj115;
struct map$2charphsGenericsFunph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&i_312, 0, sizeof(int));
right_value439 = (void*)0;
right_value440 = (void*)0;
            # 1088 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value436=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1089 "./neo-c.h"
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value437=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./neo-c.h", 1089, "sGenericsFun*%"))));
            come_call_finalizer3(right_value437,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1090 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value438=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
            right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1097 "./neo-c.h"
            for(            i_312=0;            i_312<1024;            i_312++            ){
                # 1094 "./neo-c.h"
                self->item_existance[i_312]=(_Bool)0;
            }
            # 1097 "./neo-c.h"
            self->size=1024;
            # 1098 "./neo-c.h"
            self->len=0;
            # 1100 "./neo-c.h"
            __dec_obj115=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value440=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value439=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj115,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value439,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value440,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1102 "./neo-c.h"
            self->it=0;
            # 1104 "./neo-c.h"
            __result201__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result201__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sGenericsFun_finalize"
                # 0 "sGenericsFun_finalize"
                if(_if_conditional391=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional391) {
                    # 0 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sGenericsFun_finalize"
                # 1 "sGenericsFun_finalize"
                if(_if_conditional392=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional392) {
                    # 1 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sGenericsFun_finalize"
                # 2 "sGenericsFun_finalize"
                if(_if_conditional393=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional393) {
                    # 2 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sGenericsFun_finalize"
                # 3 "sGenericsFun_finalize"
                if(_if_conditional394=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional394) {
                    # 3 "sGenericsFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sGenericsFun_finalize"
                # 4 "sGenericsFun_finalize"
                if(_if_conditional395=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional395) {
                    # 4 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sGenericsFun_finalize"
                # 5 "sGenericsFun_finalize"
                if(_if_conditional396=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional396) {
                    # 5 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sGenericsFun_finalize"
                # 6 "sGenericsFun_finalize"
                if(_if_conditional397=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional397) {
                    # 6 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sGenericsFun_finalize"
                # 7 "sGenericsFun_finalize"
                if(_if_conditional398=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional398) {
                    # 7 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sGenericsFun_finalize"
                # 8 "sGenericsFun_finalize"
                if(_if_conditional399=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional399) {
                    # 8 "sGenericsFun_finalize"
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 10 "sGenericsFun_finalize"
                # 9 "sGenericsFun_finalize"
                if(_if_conditional400=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional400) {
                    # 9 "sGenericsFun_finalize"
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_313;
_Bool _if_conditional401;
_Bool _if_conditional402;
int i_314;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_313, 0, sizeof(int));
memset(&i_314, 0, sizeof(int));
                # 1138 "./neo-c.h"
                for(                i_313=0;                i_313<self->size;                i_313++                ){
                    # 1137 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional401=self->item_existance[i_313],                    _if_conditional401) {
                        # 1136 "./neo-c.h"
                        # 1133 "./neo-c.h"
                        if(_if_conditional402=1,                        _if_conditional402) {
                            # 1134 "./neo-c.h"
                            come_call_finalizer3(self->items[i_313],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1138 "./neo-c.h"
                come_free((char*)self->items);
                # 1147 "./neo-c.h"
                for(                i_314=0;                i_314<self->size;                i_314++                ){
                    # 1146 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional403=self->item_existance[i_314],                    _if_conditional403) {
                        # 1145 "./neo-c.h"
                        # 1142 "./neo-c.h"
                        if(_if_conditional404=1,                        _if_conditional404) {
                            # 1143 "./neo-c.h"
                            self->keys[i_314] = come_decrement_ref_count2(self->keys[i_314], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "./neo-c.h"
                come_free((char*)self->keys);
                # 1149 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1151 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_315;
_Bool _if_conditional405;
_Bool _if_conditional406;
int i_316;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_315, 0, sizeof(int));
memset(&i_316, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_315=0;            i_315<self->size;            i_315++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional405=self->item_existance[i_315],                _if_conditional405) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional406=1,                    _if_conditional406) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_315],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_316=0;            i_316<self->size;            i_316++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional407=self->item_existance[i_316],                _if_conditional407) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional408=1,                    _if_conditional408) {
                        # 1143 "./neo-c.h"
                        self->keys[i_316] = come_decrement_ref_count2(self->keys[i_316], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value443;
void* right_value444;
void* right_value445;
int i_317;
void* right_value446;
void* right_value447;
struct list$1charp* __dec_obj117;
struct map$2charphsClassph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
memset(&i_317, 0, sizeof(int));
right_value446 = (void*)0;
right_value447 = (void*)0;
            # 1088 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value443=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
            right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1089 "./neo-c.h"
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value444=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./neo-c.h", 1089, "sClass*%"))));
            come_call_finalizer3(right_value444,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 1090 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value445=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
            right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1097 "./neo-c.h"
            for(            i_317=0;            i_317<1024;            i_317++            ){
                # 1094 "./neo-c.h"
                self->item_existance[i_317]=(_Bool)0;
            }
            # 1097 "./neo-c.h"
            self->size=1024;
            # 1098 "./neo-c.h"
            self->len=0;
            # 1100 "./neo-c.h"
            __dec_obj117=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value447=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value446=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj117,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value446,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value447,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1102 "./neo-c.h"
            self->it=0;
            # 1104 "./neo-c.h"
            __result202__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result202__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_318;
_Bool _if_conditional409;
_Bool _if_conditional410;
int i_319;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_318, 0, sizeof(int));
memset(&i_319, 0, sizeof(int));
                # 1138 "./neo-c.h"
                for(                i_318=0;                i_318<self->size;                i_318++                ){
                    # 1137 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional409=self->item_existance[i_318],                    _if_conditional409) {
                        # 1136 "./neo-c.h"
                        # 1133 "./neo-c.h"
                        if(_if_conditional410=1,                        _if_conditional410) {
                            # 1134 "./neo-c.h"
                            come_call_finalizer3(self->items[i_318],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1138 "./neo-c.h"
                come_free((char*)self->items);
                # 1147 "./neo-c.h"
                for(                i_319=0;                i_319<self->size;                i_319++                ){
                    # 1146 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional411=self->item_existance[i_319],                    _if_conditional411) {
                        # 1145 "./neo-c.h"
                        # 1142 "./neo-c.h"
                        if(_if_conditional412=1,                        _if_conditional412) {
                            # 1143 "./neo-c.h"
                            self->keys[i_319] = come_decrement_ref_count2(self->keys[i_319], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "./neo-c.h"
                come_free((char*)self->keys);
                # 1149 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1151 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_320;
_Bool _if_conditional413;
_Bool _if_conditional414;
int i_321;
_Bool _if_conditional415;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_320, 0, sizeof(int));
memset(&i_321, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_320=0;            i_320<self->size;            i_320++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional413=self->item_existance[i_320],                _if_conditional413) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional414=1,                    _if_conditional414) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_320],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_321=0;            i_321<self->size;            i_321++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional415=self->item_existance[i_321],                _if_conditional415) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional416=1,                    _if_conditional416) {
                        # 1143 "./neo-c.h"
                        self->keys[i_321] = come_decrement_ref_count2(self->keys[i_321], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value450;
void* right_value451;
void* right_value452;
int i_322;
void* right_value453;
void* right_value454;
struct list$1charp* __dec_obj119;
struct map$2charphsClassModuleph* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
memset(&i_322, 0, sizeof(int));
right_value453 = (void*)0;
right_value454 = (void*)0;
            # 1088 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value450=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
            right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1089 "./neo-c.h"
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value451=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(1024)), "./neo-c.h", 1089, "sClassModule*%"))));
            come_call_finalizer3(right_value451,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            # 1090 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value452=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
            right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1097 "./neo-c.h"
            for(            i_322=0;            i_322<1024;            i_322++            ){
                # 1094 "./neo-c.h"
                self->item_existance[i_322]=(_Bool)0;
            }
            # 1097 "./neo-c.h"
            self->size=1024;
            # 1098 "./neo-c.h"
            self->len=0;
            # 1100 "./neo-c.h"
            __dec_obj119=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value454=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value453=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj119,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value453,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value454,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1102 "./neo-c.h"
            self->it=0;
            # 1104 "./neo-c.h"
            __result203__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result203__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_323;
_Bool _if_conditional417;
_Bool _if_conditional418;
int i_324;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_323, 0, sizeof(int));
memset(&i_324, 0, sizeof(int));
                # 1138 "./neo-c.h"
                for(                i_323=0;                i_323<self->size;                i_323++                ){
                    # 1137 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional417=self->item_existance[i_323],                    _if_conditional417) {
                        # 1136 "./neo-c.h"
                        # 1133 "./neo-c.h"
                        if(_if_conditional418=1,                        _if_conditional418) {
                            # 1134 "./neo-c.h"
                            come_call_finalizer3(self->items[i_323],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1138 "./neo-c.h"
                come_free((char*)self->items);
                # 1147 "./neo-c.h"
                for(                i_324=0;                i_324<self->size;                i_324++                ){
                    # 1146 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional419=self->item_existance[i_324],                    _if_conditional419) {
                        # 1145 "./neo-c.h"
                        # 1142 "./neo-c.h"
                        if(_if_conditional420=1,                        _if_conditional420) {
                            # 1143 "./neo-c.h"
                            self->keys[i_324] = come_decrement_ref_count2(self->keys[i_324], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "./neo-c.h"
                come_free((char*)self->keys);
                # 1149 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1151 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_325;
_Bool _if_conditional421;
_Bool _if_conditional422;
int i_326;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_325, 0, sizeof(int));
memset(&i_326, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_325=0;            i_325<self->size;            i_325++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional421=self->item_existance[i_325],                _if_conditional421) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional422=1,                    _if_conditional422) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_325],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_326=0;            i_326<self->size;            i_326++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional423=self->item_existance[i_326],                _if_conditional423) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional424=1,                    _if_conditional424) {
                        # 1143 "./neo-c.h"
                        self->keys[i_326] = come_decrement_ref_count2(self->keys[i_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value457;
void* right_value458;
void* right_value459;
int i_327;
void* right_value460;
void* right_value461;
struct list$1charp* __dec_obj121;
struct map$2charphsTypeph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&i_327, 0, sizeof(int));
right_value460 = (void*)0;
right_value461 = (void*)0;
            # 1088 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value457=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
            right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1089 "./neo-c.h"
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value458=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./neo-c.h", 1089, "sType*%"))));
            come_call_finalizer3(right_value458,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1090 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value459=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1090, "bool"))));
            right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1097 "./neo-c.h"
            for(            i_327=0;            i_327<1024;            i_327++            ){
                # 1094 "./neo-c.h"
                self->item_existance[i_327]=(_Bool)0;
            }
            # 1097 "./neo-c.h"
            self->size=1024;
            # 1098 "./neo-c.h"
            self->len=0;
            # 1100 "./neo-c.h"
            __dec_obj121=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value461=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value460=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1100, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj121,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value460,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value461,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1102 "./neo-c.h"
            self->it=0;
            # 1104 "./neo-c.h"
            __result204__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result204__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_328;
_Bool _if_conditional425;
_Bool _if_conditional426;
int i_329;
_Bool _if_conditional427;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_328, 0, sizeof(int));
memset(&i_329, 0, sizeof(int));
                # 1138 "./neo-c.h"
                for(                i_328=0;                i_328<self->size;                i_328++                ){
                    # 1137 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional425=self->item_existance[i_328],                    _if_conditional425) {
                        # 1136 "./neo-c.h"
                        # 1133 "./neo-c.h"
                        if(_if_conditional426=1,                        _if_conditional426) {
                            # 1134 "./neo-c.h"
                            come_call_finalizer3(self->items[i_328],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1138 "./neo-c.h"
                come_free((char*)self->items);
                # 1147 "./neo-c.h"
                for(                i_329=0;                i_329<self->size;                i_329++                ){
                    # 1146 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional427=self->item_existance[i_329],                    _if_conditional427) {
                        # 1145 "./neo-c.h"
                        # 1142 "./neo-c.h"
                        if(_if_conditional428=1,                        _if_conditional428) {
                            # 1143 "./neo-c.h"
                            self->keys[i_329] = come_decrement_ref_count2(self->keys[i_329], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "./neo-c.h"
                come_free((char*)self->keys);
                # 1149 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1151 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_330;
_Bool _if_conditional429;
_Bool _if_conditional430;
int i_331;
_Bool _if_conditional431;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_330, 0, sizeof(int));
memset(&i_331, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_330=0;            i_330<self->size;            i_330++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional429=self->item_existance[i_330],                _if_conditional429) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional430=1,                    _if_conditional430) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_330],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_331=0;            i_331<self->size;            i_331++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional431=self->item_existance[i_331],                _if_conditional431) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional432=1,                    _if_conditional432) {
                        # 1143 "./neo-c.h"
                        self->keys[i_331] = come_decrement_ref_count2(self->keys[i_331], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result205__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result205__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_332;
_Bool _while_condtional40;
struct list_item$1sRightValueObjectph* prev_it_333;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_332, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_333, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 124 "./neo-c.h"
                it_332=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional40=it_332!=((void*)0),                _while_condtional40) {
                    # 126 "./neo-c.h"
                    prev_it_333=it_332;
                    # 127 "./neo-c.h"
                    it_332=it_332->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_333,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sRightValueObjectphp_finalize"
                        # 0 "list_item$1sRightValueObjectphp_finalize"
                        if(_if_conditional433=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional433) {
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sRightValueObject_finalize"
                                # 0 "sRightValueObject_finalize"
                                if(_if_conditional434=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional434) {
                                    # 0 "sRightValueObject_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sRightValueObject_finalize"
                                # 1 "sRightValueObject_finalize"
                                if(_if_conditional435=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional435) {
                                    # 1 "sRightValueObject_finalize"
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sRightValueObject_finalize"
                                # 2 "sRightValueObject_finalize"
                                if(_if_conditional436=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional436) {
                                    # 2 "sRightValueObject_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_334;
_Bool _while_condtional41;
struct list_item$1sRightValueObjectph* prev_it_335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_334, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_335, 0, sizeof(struct list_item$1sRightValueObjectph*));
            # 124 "./neo-c.h"
            it_334=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional41=it_334!=((void*)0),            _while_condtional41) {
                # 126 "./neo-c.h"
                prev_it_335=it_334;
                # 127 "./neo-c.h"
                it_334=it_334->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_335,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result206__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result206__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_336;
_Bool _while_condtional42;
struct list_item$1CVALUEph* prev_it_337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_336, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_337, 0, sizeof(struct list_item$1CVALUEph*));
                # 124 "./neo-c.h"
                it_336=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional42=it_336!=((void*)0),                _while_condtional42) {
                    # 126 "./neo-c.h"
                    prev_it_337=it_336;
                    # 127 "./neo-c.h"
                    it_336=it_336->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_337,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional437=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional437) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional438;
_Bool _if_conditional439;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional438=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional438) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional439=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional439) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_338;
_Bool _while_condtional43;
struct list_item$1CVALUEph* prev_it_339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_338, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_339, 0, sizeof(struct list_item$1CVALUEph*));
            # 124 "./neo-c.h"
            it_338=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional43=it_338!=((void*)0),            _while_condtional43) {
                # 126 "./neo-c.h"
                prev_it_339=it_338;
                # 127 "./neo-c.h"
                it_338=it_338->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_339,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInfo_finalize"
            # 0 "sInfo_finalize"
            if(_if_conditional443=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional443) {
                # 0 "sInfo_finalize"
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sInfo_finalize"
            # 1 "sInfo_finalize"
            if(_if_conditional444=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional444) {
                # 1 "sInfo_finalize"
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInfo_finalize"
            # 2 "sInfo_finalize"
            if(_if_conditional445=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional445) {
                # 2 "sInfo_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sInfo_finalize"
            # 3 "sInfo_finalize"
            if(_if_conditional446=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional446) {
                # 3 "sInfo_finalize"
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sInfo_finalize"
            # 4 "sInfo_finalize"
            if(_if_conditional447=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional447) {
                # 4 "sInfo_finalize"
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sInfo_finalize"
            # 5 "sInfo_finalize"
            if(_if_conditional448=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional448) {
                # 5 "sInfo_finalize"
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 7 "sInfo_finalize"
            # 6 "sInfo_finalize"
            if(_if_conditional449=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional449) {
                # 6 "sInfo_finalize"
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 8 "sInfo_finalize"
            # 7 "sInfo_finalize"
            if(_if_conditional450=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional450) {
                # 7 "sInfo_finalize"
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 9 "sInfo_finalize"
            # 8 "sInfo_finalize"
            if(_if_conditional451=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional451) {
                # 8 "sInfo_finalize"
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sInfo_finalize"
            # 9 "sInfo_finalize"
            if(_if_conditional452=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional452) {
                # 9 "sInfo_finalize"
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 11 "sInfo_finalize"
            # 10 "sInfo_finalize"
            if(_if_conditional453=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional453) {
                # 10 "sInfo_finalize"
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 12 "sInfo_finalize"
            # 11 "sInfo_finalize"
            if(_if_conditional454=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional454) {
                # 11 "sInfo_finalize"
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 13 "sInfo_finalize"
            # 12 "sInfo_finalize"
            if(_if_conditional455=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional455) {
                # 12 "sInfo_finalize"
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 14 "sInfo_finalize"
            # 13 "sInfo_finalize"
            if(_if_conditional456=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional456) {
                # 13 "sInfo_finalize"
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 15 "sInfo_finalize"
            # 14 "sInfo_finalize"
            if(_if_conditional457=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional457) {
                # 14 "sInfo_finalize"
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 16 "sInfo_finalize"
            # 15 "sInfo_finalize"
            if(_if_conditional458=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional458) {
                # 15 "sInfo_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 17 "sInfo_finalize"
            # 16 "sInfo_finalize"
            if(_if_conditional459=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional459) {
                # 16 "sInfo_finalize"
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 18 "sInfo_finalize"
            # 17 "sInfo_finalize"
            if(_if_conditional460=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional460) {
                # 17 "sInfo_finalize"
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 19 "sInfo_finalize"
            # 18 "sInfo_finalize"
            if(_if_conditional461=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional461) {
                # 18 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 20 "sInfo_finalize"
            # 19 "sInfo_finalize"
            if(_if_conditional462=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional462) {
                # 19 "sInfo_finalize"
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 21 "sInfo_finalize"
            # 20 "sInfo_finalize"
            if(_if_conditional463=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional463) {
                # 20 "sInfo_finalize"
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 22 "sInfo_finalize"
            # 21 "sInfo_finalize"
            if(_if_conditional464=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional464) {
                # 21 "sInfo_finalize"
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 23 "sInfo_finalize"
            # 22 "sInfo_finalize"
            if(_if_conditional465=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional465) {
                # 22 "sInfo_finalize"
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 24 "sInfo_finalize"
            # 23 "sInfo_finalize"
            if(_if_conditional466=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional466) {
                # 23 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 25 "sInfo_finalize"
            # 24 "sInfo_finalize"
            if(_if_conditional467=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional467) {
                # 24 "sInfo_finalize"
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 26 "sInfo_finalize"
            # 25 "sInfo_finalize"
            if(_if_conditional468=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional468) {
                # 25 "sInfo_finalize"
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 27 "sInfo_finalize"
            # 26 "sInfo_finalize"
            if(_if_conditional469=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional469) {
                # 26 "sInfo_finalize"
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 28 "sInfo_finalize"
            # 27 "sInfo_finalize"
            if(_if_conditional470=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional470) {
                # 27 "sInfo_finalize"
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_342;
_Bool _if_conditional471;
_Bool _if_conditional472;
int i_343;
_Bool _if_conditional473;
_Bool _if_conditional474;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_342, 0, sizeof(int));
memset(&i_343, 0, sizeof(int));
                    # 1138 "./neo-c.h"
                    for(                    i_342=0;                    i_342<self->size;                    i_342++                    ){
                        # 1137 "./neo-c.h"
                        # 1132 "./neo-c.h"
                        if(_if_conditional471=self->item_existance[i_342],                        _if_conditional471) {
                            # 1136 "./neo-c.h"
                            # 1133 "./neo-c.h"
                            if(_if_conditional472=1,                            _if_conditional472) {
                                # 1134 "./neo-c.h"
                                self->items[i_342] = come_decrement_ref_count2(self->items[i_342], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1138 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1147 "./neo-c.h"
                    for(                    i_343=0;                    i_343<self->size;                    i_343++                    ){
                        # 1146 "./neo-c.h"
                        # 1141 "./neo-c.h"
                        if(_if_conditional473=self->item_existance[i_343],                        _if_conditional473) {
                            # 1145 "./neo-c.h"
                            # 1142 "./neo-c.h"
                            if(_if_conditional474=1,                            _if_conditional474) {
                                # 1143 "./neo-c.h"
                                self->keys[i_343] = come_decrement_ref_count2(self->keys[i_343], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1147 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1149 "./neo-c.h"
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    # 1151 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional519;
struct list_item$1charph* it_362;
int i_363;
_Bool _while_condtional44;
_Bool _if_conditional520;
char* __result215__;
char* default_value_364;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_362, 0, sizeof(struct list_item$1charph*));
memset(&i_363, 0, sizeof(int));
memset(&default_value_364, 0, sizeof(char*));
                                            # 687 "./neo-c.h"
                                            # 683 "./neo-c.h"
                                            if(_if_conditional519=position<0,                                            _if_conditional519) {
                                                # 684 "./neo-c.h"
                                                position+=self->len;
                                            }
                                            # 687 "./neo-c.h"
                                            it_362=self->head;
                                            # 688 "./neo-c.h"
                                            i_363=0;
                                            # 695 "./neo-c.h"
                                            while(_while_condtional44=it_362!=((void*)0),                                            _while_condtional44) {
                                                # 693 "./neo-c.h"
                                                # 690 "./neo-c.h"
                                                if(_if_conditional520=position==i_363,                                                _if_conditional520) {
                                                    # 691 "./neo-c.h"
                                                    __result215__ = __result_obj__ = it_362->item;
                                                    return __result215__;
                                                }
                                                # 693 "./neo-c.h"
                                                it_362=it_362->next;
                                                # 694 "./neo-c.h"
                                                i_363++;
                                            }
                                            # 697 "./neo-c.h"
                                            # 698 "./neo-c.h"
                                            memset(&default_value_364,0,sizeof(char*));
                                            # 699 "./neo-c.h"
                                            __result216__ = __result_obj__ = default_value_364;
                                            default_value_364 = come_decrement_ref_count2(default_value_364, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result216__;
                                            default_value_364 = come_decrement_ref_count2(default_value_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1045 "02transpile.c"
                                            printf("%s %d: linker faield\n",(*(parent->info_361)).sname,(*(parent->info_361)).sline);
                                            # 1046 "02transpile.c"
                                            exit(13);
}

