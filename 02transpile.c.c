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
    char* mSName;
    int mSLine;
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
    int* n_52;
    char** msg2_50;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_310;
    struct buffer** clang_option_293;
    struct buffer** cpp_option_294;
    struct list$1charph** files_295;
    struct list$1charph** object_files_296;
    _Bool* output_object_file_297;
    _Bool* output_cpp_file_298;
    _Bool* output_source_file_flag_299;
    char** output_file_name_300;
    _Bool* verbose_301;
    _Bool* come_debug_302;
    _Bool* come_malloc_303;
    _Bool* come_str_304;
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

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

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

struct sNode* expression_node_v98(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v97(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

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
_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool make_header_project(int argc, char** argv);

_Bool compile_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
void init_module(struct sInfo* info);

int come_main_v2(int argc, char** argv);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
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
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
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
    # 45 "./neo-c.h"
    perror(msg);
    # 46 "./neo-c.h"
    stackframe();
    # 47 "./neo-c.h"
    exit(4);
    # 49 "./neo-c.h"
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
    # 1897 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
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
    # 1904 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
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
    # 1911 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
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
    # 1918 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
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
    # 1925 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
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
    # 1932 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
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
    # 1947 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1947, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1949 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1952 "./neo-c.h"
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
    # 1957 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1957, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1959 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1962 "./neo-c.h"
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
    # 1967 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1967, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1969 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1972 "./neo-c.h"
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
    # 1977 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1977, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1979 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1982 "./neo-c.h"
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
    # 1987 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1987, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1989 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1992 "./neo-c.h"
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
    # 2158 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2158, "smart_pointer$1char")))),self,len)));
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
    # 2163 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2163, "smart_pointer$1short")))),self,len)));
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
    # 2168 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2168, "smart_pointer$1int")))),self,len)));
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
    # 2173 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2173, "smart_pointer$1long")))),self,len)));
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
    # 2178 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2178, "smart_pointer$1float")))),self,len)));
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
    # 2183 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2183, "smart_pointer$1double")))),self,len)));
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
    # 2188 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2188, "list$1char")))),len,self)));
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
    # 2193 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2193, "list$1short")))),len,self)));
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
    # 2198 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2198, "list$1int")))),len,self)));
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
    # 2203 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2203, "list$1long")))),len,self)));
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
    # 2208 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2208, "list$1float")))),len,self)));
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
    # 2213 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2213, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2243 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2248 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2253 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2258 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2263 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2268 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2329 "./neo-c.h"
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
    # 2334 "./neo-c.h"
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
    # 2339 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2003 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2003 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2003 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2003 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2003 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2003 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_12->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_12;
                    # 224 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_13->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_13;
                        # 234 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_14->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_15=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "./neo-c.h"
                prev_it_16=it_15;
                # 117 "./neo-c.h"
                it_15=it_15->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_18->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_18;
                    # 224 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_19->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_19;
                        # 234 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_20->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_21=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "./neo-c.h"
                prev_it_22=it_21;
                # 117 "./neo-c.h"
                it_21=it_21->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_24->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_24;
                    # 224 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_25->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_25;
                        # 234 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_26->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_27=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "./neo-c.h"
                prev_it_28=it_27;
                # 117 "./neo-c.h"
                it_27=it_27->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_30->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_30;
                    # 224 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_31->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_31;
                        # 234 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_32->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_33=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "./neo-c.h"
                prev_it_34=it_33;
                # 117 "./neo-c.h"
                it_33=it_33->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_36->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_36;
                    # 224 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_37->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_37;
                        # 234 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_38->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_39=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "./neo-c.h"
                prev_it_40=it_39;
                # 117 "./neo-c.h"
                it_39=it_39->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_42->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_42;
                    # 224 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_43->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_43;
                        # 234 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_44->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_45=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "./neo-c.h"
                prev_it_46=it_45;
                # 117 "./neo-c.h"
                it_45=it_45->next;
                # 118 "./neo-c.h"
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
    # 36 "02transpile.c"
    # 30 "02transpile.c"
    if(gComeOriginalSourcePosition) {
        # 35 "02transpile.c"
        # 31 "02transpile.c"
        if(info->writing_source_file_position) {
            # 32 "02transpile.c"
            add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(info->sline))),((char*)(right_value80=string_to_string(info->sname)))))));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 33 "02transpile.c"
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
    # 40 "02transpile.c"
    sname_47=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 41 "02transpile.c"
    sline_48=info->sline;
    # 43 "02transpile.c"
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(((char*)(right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 44 "02transpile.c"
    info->sline=node->sline(node->_protocol_obj);
    # 46 "02transpile.c"
    write_source_file_position_to_source(info);
    # 48 "02transpile.c"
    result_49=node->compile(node->_protocol_obj,info);
    # 50 "02transpile.c"
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 51 "02transpile.c"
    info->sline=sline_48;
    # 53 "02transpile.c"
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
    # 77 "02transpile.c"
    # 58 "02transpile.c"
    if(_if_conditional21=!info->no_output_err,    _if_conditional21) {
        # 59 "02transpile.c"
        # 61 "02transpile.c"
        # 62 "02transpile.c"
        __builtin_va_start(args_51,msg);
        # 63 "02transpile.c"
        vasprintf(&msg2_50,msg,args_51);
        # 64 "02transpile.c"
        __builtin_va_end(args_51);
        # 66 "02transpile.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        # 67 "02transpile.c"
        info->err_num++;
        # 68 "02transpile.c"
        stackframe();
        # 75 "02transpile.c"
        # 70 "02transpile.c"
        if(info->come_fun) {
            # 71 "02transpile.c"
            n_52=info->sline-5;
            # 72 "02transpile.c"
            __current_stack1__.n_52 = &n_52;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value105=string_puts(((char*)(right_value104=list$1voidp_join(((struct list$1voidp*)(right_value100=list$1charph_map(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_52,n_52+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value100,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 75 "02transpile.c"
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
                # 633 "./neo-c.h"
                result_55=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 633, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 639 "./neo-c.h"
                # 635 "./neo-c.h"
                if(_if_conditional24=begin<0,                _if_conditional24) {
                    # 636 "./neo-c.h"
                    begin+=self->len;
                }
                # 643 "./neo-c.h"
                # 639 "./neo-c.h"
                if(_if_conditional25=tail<0,                _if_conditional25) {
                    # 640 "./neo-c.h"
                    tail+=self->len+1;
                }
                # 647 "./neo-c.h"
                # 643 "./neo-c.h"
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    # 644 "./neo-c.h"
                    begin=0;
                }
                # 651 "./neo-c.h"
                # 647 "./neo-c.h"
                if(_if_conditional27=tail>=self->len,                _if_conditional27) {
                    # 648 "./neo-c.h"
                    tail=self->len;
                }
                # 651 "./neo-c.h"
                it_56=self->head;
                # 652 "./neo-c.h"
                i_57=0;
                # 659 "./neo-c.h"
                while(_while_condtional8=it_56!=((void*)0),                _while_condtional8) {
                    # 657 "./neo-c.h"
                    # 654 "./neo-c.h"
                    if(_if_conditional28=i_57>=begin&&i_57<tail,                    _if_conditional28) {
                        # 655 "./neo-c.h"
                        list$1charph_push_back(result_55,(char*)come_increment_ref_count(it_56->item));
                    }
                    # 657 "./neo-c.h"
                    it_56=it_56->next;
                    # 658 "./neo-c.h"
                    i_57++;
                }
                # 661 "./neo-c.h"
                __result58__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
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
                        # 114 "./neo-c.h"
                        it_53=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_53!=((void*)0),                        _while_condtional7) {
                            # 116 "./neo-c.h"
                            prev_it_54=it_53;
                            # 117 "./neo-c.h"
                            it_53=it_53->next;
                            # 118 "./neo-c.h"
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
                            # 247 "./neo-c.h"
                            # 216 "./neo-c.h"
                            if(_if_conditional29=self->len==0,                            _if_conditional29) {
                                # 217 "./neo-c.h"
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 219 "./neo-c.h"
                                litem_58->prev=((void*)0);
                                # 220 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 221 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 223 "./neo-c.h"
                                self->tail=litem_58;
                                # 224 "./neo-c.h"
                                self->head=litem_58;
                            }
                            else {
                                # 247 "./neo-c.h"
                                # 226 "./neo-c.h"
                                if(_if_conditional30=self->len==1,                                _if_conditional30) {
                                    # 227 "./neo-c.h"
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 229 "./neo-c.h"
                                    litem_59->prev=self->head;
                                    # 230 "./neo-c.h"
                                    litem_59->next=((void*)0);
                                    # 231 "./neo-c.h"
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 233 "./neo-c.h"
                                    self->tail=litem_59;
                                    # 234 "./neo-c.h"
                                    self->head->next=litem_59;
                                }
                                else {
                                    # 237 "./neo-c.h"
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 239 "./neo-c.h"
                                    litem_60->prev=self->tail;
                                    # 240 "./neo-c.h"
                                    litem_60->next=((void*)0);
                                    # 241 "./neo-c.h"
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 243 "./neo-c.h"
                                    self->tail->next=litem_60;
                                    # 244 "./neo-c.h"
                                    self->tail=litem_60;
                                }
                            }
                            # 247 "./neo-c.h"
                            self->len++;
                            # 249 "./neo-c.h"
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
struct list$1voidp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1voidp*));
memset(&it_64, 0, sizeof(struct list_item$1charph*));
                # 914 "./neo-c.h"
                result_63=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value95=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value94=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./neo-c.h", 914, "list$1voidp"))))))));
                come_call_finalizer3(right_value94,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                # 916 "./neo-c.h"
                it_64=self->head;
                # 923 "./neo-c.h"
                while(_while_condtional10=it_64!=((void*)0),                _while_condtional10) {
                    # 918 "./neo-c.h"
                    list$1voidp_push_back(result_63,block(parent,it_64->item));
                    # 920 "./neo-c.h"
                    it_64=it_64->next;
                }
                # 923 "./neo-c.h"
                __result61__ = __result_obj__ = result_63;
                come_call_finalizer3(result_63,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_63,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
struct list$1voidp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
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
                        # 114 "./neo-c.h"
                        it_61=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional9=it_61!=((void*)0),                        _while_condtional9) {
                            # 116 "./neo-c.h"
                            prev_it_62=it_61;
                            # 117 "./neo-c.h"
                            it_61=it_61->next;
                            # 118 "./neo-c.h"
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
                        # 247 "./neo-c.h"
                        # 216 "./neo-c.h"
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            # 217 "./neo-c.h"
                            litem_65=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value96=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 217, "list_item$1voidp"))));
                            come_call_finalizer3(right_value96,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 219 "./neo-c.h"
                            litem_65->prev=((void*)0);
                            # 220 "./neo-c.h"
                            litem_65->next=((void*)0);
                            # 221 "./neo-c.h"
                            litem_65->item=item;
                            # 223 "./neo-c.h"
                            self->tail=litem_65;
                            # 224 "./neo-c.h"
                            self->head=litem_65;
                        }
                        else {
                            # 247 "./neo-c.h"
                            # 226 "./neo-c.h"
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                # 227 "./neo-c.h"
                                litem_66=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value97=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 227, "list_item$1voidp"))));
                                come_call_finalizer3(right_value97,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 229 "./neo-c.h"
                                litem_66->prev=self->head;
                                # 230 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 231 "./neo-c.h"
                                litem_66->item=item;
                                # 233 "./neo-c.h"
                                self->tail=litem_66;
                                # 234 "./neo-c.h"
                                self->head->next=litem_66;
                            }
                            else {
                                # 237 "./neo-c.h"
                                litem_67=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value98=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./neo-c.h", 237, "list_item$1voidp"))));
                                come_call_finalizer3(right_value98,list_item$1voidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 239 "./neo-c.h"
                                litem_67->prev=self->tail;
                                # 240 "./neo-c.h"
                                litem_67->next=((void*)0);
                                # 241 "./neo-c.h"
                                litem_67->item=item;
                                # 243 "./neo-c.h"
                                self->tail->next=litem_67;
                                # 244 "./neo-c.h"
                                self->tail=litem_67;
                            }
                        }
                        # 247 "./neo-c.h"
                        self->len++;
                        # 249 "./neo-c.h"
                        __result60__ = __result_obj__ = self;
                        return __result60__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value99;
void* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
                # 73 "02transpile.c"
                __result62__ = __result_obj__ = ((char*)(right_value99=xsprintf("%d %s",++(*(parent->n_52)),it)));
                right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result62__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
void* right_value101;
void* right_value102;
struct buffer* buf_68;
int n_69;
void* it_72;
_Bool _if_conditional38;
void* right_value103;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&buf_68, 0, sizeof(struct buffer*));
memset(&n_69, 0, sizeof(int));
memset(&it_72, 0, sizeof(void*));
right_value103 = (void*)0;
                # 1022 "./neo-c.h"
                buf_68=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1022, "buffer"))))))));
                come_call_finalizer3(right_value101,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value102,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 1024 "./neo-c.h"
                n_69=0;
                # 1035 "./neo-c.h"
                for(                it_72=list$1voidp_begin(self);                !list$1voidp_end(self);                it_72=list$1voidp_next(self)                ){
                    # 1026 "./neo-c.h"
                    buffer_append_str(buf_68,it_72);
                    # 1032 "./neo-c.h"
                    # 1028 "./neo-c.h"
                    if(_if_conditional38=n_69<list$1voidp_length(self)-1,                    _if_conditional38) {
                        # 1029 "./neo-c.h"
                        buffer_append_str(buf_68,sep);
                    }
                    # 1032 "./neo-c.h"
                    n_69++;
                }
                # 1035 "./neo-c.h"
                __result72__ = __result_obj__ = ((char*)(right_value103=buffer_to_string(buf_68)));
                come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result72__;
                come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional33;
void* result_70;
void* __result63__;
_Bool _if_conditional34;
void* __result64__;
void* result_71;
void* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(void*));
memset(&result_71, 0, sizeof(void*));
                    # 281 "./neo-c.h"
                    # 276 "./neo-c.h"
                    if(_if_conditional33=self==((void*)0),                    _if_conditional33) {
                        # 277 "./neo-c.h"
                        # 278 "./neo-c.h"
                        memset(&result_70,0,sizeof(void*));
                        # 279 "./neo-c.h"
                        __result63__ = __result_obj__ = result_70;
                        return __result63__;
                    }
                    # 281 "./neo-c.h"
                    self->it=self->head;
                    # 287 "./neo-c.h"
                    # 283 "./neo-c.h"
                    if(self->it) {
                        # 284 "./neo-c.h"
                        __result64__ = __result_obj__ = self->it->item;
                        return __result64__;
                    }
                    # 287 "./neo-c.h"
                    # 288 "./neo-c.h"
                    memset(&result_71,0,sizeof(void*));
                    # 289 "./neo-c.h"
                    __result65__ = __result_obj__ = result_71;
                    return __result65__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 311 "./neo-c.h"
                    __result66__ = self==((void*)0)||self->it==((void*)0);
                    return __result66__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional35;
void* result_73;
void* __result67__;
_Bool _if_conditional36;
void* __result68__;
void* result_74;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(void*));
memset(&result_74, 0, sizeof(void*));
                    # 299 "./neo-c.h"
                    # 293 "./neo-c.h"
                    if(_if_conditional35=self==((void*)0)||self->it==((void*)0),                    _if_conditional35) {
                        # 294 "./neo-c.h"
                        # 295 "./neo-c.h"
                        memset(&result_73,0,sizeof(void*));
                        # 296 "./neo-c.h"
                        __result67__ = __result_obj__ = result_73;
                        return __result67__;
                    }
                    # 299 "./neo-c.h"
                    self->it=self->it->next;
                    # 305 "./neo-c.h"
                    # 301 "./neo-c.h"
                    if(self->it) {
                        # 302 "./neo-c.h"
                        __result68__ = __result_obj__ = self->it->item;
                        return __result68__;
                    }
                    # 305 "./neo-c.h"
                    # 306 "./neo-c.h"
                    memset(&result_74,0,sizeof(void*));
                    # 307 "./neo-c.h"
                    __result69__ = __result_obj__ = result_74;
                    return __result69__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional37;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 354 "./neo-c.h"
                        # 351 "./neo-c.h"
                        if(_if_conditional37=self==((void*)0),                        _if_conditional37) {
                            # 352 "./neo-c.h"
                            __result70__ = 0;
                            return __result70__;
                        }
                        # 354 "./neo-c.h"
                        __result71__ = self->len;
                        return __result71__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 81 "02transpile.c"
    __result73__ = 0;
    return __result73__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* output_file_name_75;
void* right_value107;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&output_file_name_75, 0, sizeof(char*));
right_value107 = (void*)0;
    # 86 "02transpile.c"
    output_file_name_75=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("%s.c",info->sname))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 90 "02transpile.c"
    string_write(((char*)(right_value107=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_75,(_Bool)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 92 "02transpile.c"
    __result74__ = (_Bool)1;
    output_file_name_75 = come_decrement_ref_count2(output_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result74__;
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
    # 97 "02transpile.c"
    input_file_name_76=(char*)come_increment_ref_count(info->sname);
    # 99 "02transpile.c"
    system(((char*)(right_value109=xsprintf("rm -f \%s.*",((char*)(right_value108=string_to_string(input_file_name_76)))))));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_76 = come_decrement_ref_count2(input_file_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_77;
char* output_file_name_78;
_Bool _if_conditional39;
void* right_value110;
char* __dec_obj17;
void* right_value111;
char* __dec_obj18;
void* right_value112;
char* cmd_79;
_Bool exist_common_h_80;
struct _IO_FILE* f_81;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
int rc_82;
_Bool _if_conditional44;
void* right_value113;
void* right_value114;
char* cmd2_83;
_Bool _if_conditional45;
int rc_84;
_Bool _if_conditional46;
void* right_value115;
char* command2_85;
_Bool _if_conditional47;
void* right_value116;
void* right_value117;
char* cmd3_86;
_Bool _if_conditional48;
int rc_87;
void* right_value118;
char* command2_88;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value119;
void* right_value120;
char* cmd4_89;
void* right_value121;
char* command_90;
_Bool _if_conditional51;
void* right_value122;
char* command2_91;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool __result75__;
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
    # 104 "02transpile.c"
    input_file_name_77=(char*)come_increment_ref_count(info->sname);
    # 106 "02transpile.c"
    # 114 "02transpile.c"
    # 107 "02transpile.c"
    if(_if_conditional39=!info->output_header_file&&info->output_file_name,    _if_conditional39) {
        # 108 "02transpile.c"
        __dec_obj17=output_file_name_78;
        output_file_name_78=(char*)come_increment_ref_count(((char*)(right_value110=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 111 "02transpile.c"
        __dec_obj18=output_file_name_78;
        output_file_name_78=(char*)come_increment_ref_count(((char*)(right_value111=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 114 "02transpile.c"
    cmd_79=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 116 "02transpile.c"
    exist_common_h_80=(_Bool)0;
    # 130 "02transpile.c"
    {
        # 118 "02transpile.c"
        f_81=fopen("common.h","r");
        # 122 "02transpile.c"
        # 119 "02transpile.c"
        if(f_81) {
            # 120 "02transpile.c"
            exist_common_h_80=(_Bool)1;
        }
        # 125 "02transpile.c"
        # 122 "02transpile.c"
        if(_if_conditional41=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional41) {
            # 123 "02transpile.c"
            exist_common_h_80=(_Bool)0;
        }
        # 128 "02transpile.c"
        # 125 "02transpile.c"
        if(f_81) {
            # 126 "02transpile.c"
            fclose(f_81);
        }
    }
    # 135 "02transpile.c"
    # 130 "02transpile.c"
    if(_if_conditional43=!gCommonHeader,    _if_conditional43) {
        # 131 "02transpile.c"
        exist_common_h_80=(_Bool)0;
    }
    # 135 "02transpile.c"
    rc_82=system(cmd_79);
    # 184 "02transpile.c"
    # 136 "02transpile.c"
    if(_if_conditional44=rc_82==0,    _if_conditional44) {
        # 137 "02transpile.c"
        cmd2_83=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value113=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 139 "02transpile.c"
        # 139 "02transpile.c"
        if(info->verbose) {
            # 139 "02transpile.c"
            puts(cmd2_83);
        }
        # 141 "02transpile.c"
        rc_84=system(cmd2_83);
        # 148 "02transpile.c"
        # 143 "02transpile.c"
        if(_if_conditional46=rc_84!=0,        _if_conditional46) {
            # 144 "02transpile.c"
            printf("failed to cpp(2) (%s)\n",cmd2_83);
            # 145 "02transpile.c"
            exit(5);
        }
        # 148 "02transpile.c"
        command2_85=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 150 "02transpile.c"
        # 150 "02transpile.c"
        if(info->verbose) {
            # 150 "02transpile.c"
            puts(command2_85);
        }
        # 151 "02transpile.c"
        (void)system(command2_85);
        cmd2_83 = come_decrement_ref_count2(cmd2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_85 = come_decrement_ref_count2(command2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 155 "02transpile.c"
        cmd3_86=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value116=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 157 "02transpile.c"
        # 157 "02transpile.c"
        if(info->verbose) {
            # 157 "02transpile.c"
            puts(cmd3_86);
        }
        # 158 "02transpile.c"
        rc_87=system(cmd3_86);
        # 160 "02transpile.c"
        command2_88=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 162 "02transpile.c"
        # 162 "02transpile.c"
        if(info->verbose) {
            # 162 "02transpile.c"
            puts(command2_88);
        }
        # 163 "02transpile.c"
        (void)system(command2_88);
        # 182 "02transpile.c"
        # 165 "02transpile.c"
        if(_if_conditional50=rc_87!=0,        _if_conditional50) {
            # 166 "02transpile.c"
            cmd4_89=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_80?((char*)(right_value119=__builtin_string(" -include common.h "))):"",input_file_name_77,output_file_name_78,output_file_name_78))));
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 167 "02transpile.c"
            command_90=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_78,input_file_name_77,info->clang_option,input_file_name_77))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 169 "02transpile.c"
            # 169 "02transpile.c"
            if(info->verbose) {
                # 169 "02transpile.c"
                puts(cmd4_89);
            }
            # 170 "02transpile.c"
            rc_87=system(cmd4_89);
            # 172 "02transpile.c"
            command2_91=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("grep error\\: %s.cpp.out",output_file_name_78))));
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 174 "02transpile.c"
            # 174 "02transpile.c"
            if(info->verbose) {
                # 174 "02transpile.c"
                puts(command2_91);
            }
            # 175 "02transpile.c"
            (void)system(command2_91);
            # 181 "02transpile.c"
            # 177 "02transpile.c"
            if(_if_conditional53=rc_87!=0,            _if_conditional53) {
                # 178 "02transpile.c"
                printf("failed to cpp(2) (%s)\n",cmd4_89);
                # 179 "02transpile.c"
                exit(5);
            }
            cmd4_89 = come_decrement_ref_count2(cmd4_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_90 = come_decrement_ref_count2(command_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_86 = come_decrement_ref_count2(cmd3_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_88 = come_decrement_ref_count2(command2_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 184 "02transpile.c"
    __result75__ = (_Bool)1;
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_78 = come_decrement_ref_count2(output_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_79 = come_decrement_ref_count2(cmd_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_78 = come_decrement_ref_count2(output_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_79 = come_decrement_ref_count2(cmd_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value123;
char* input_file_name_92;
char* output_file_name_93;
_Bool _if_conditional54;
void* right_value124;
char* __dec_obj19;
void* right_value125;
char* __dec_obj20;
void* right_value126;
char* command_94;
_Bool _if_conditional55;
int rc_95;
void* right_value127;
char* command2_96;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool __result76__;
_Bool _if_conditional58;
void* right_value128;
_Bool __result77__;
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
    # 189 "02transpile.c"
    input_file_name_92=(char*)come_increment_ref_count(((char*)(right_value123=string_operator_add(info->sname,".c"))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 191 "02transpile.c"
    output_file_name_93=((void*)0);
    # 199 "02transpile.c"
    # 192 "02transpile.c"
    if(_if_conditional54=info->output_file_name&&output_object_file,    _if_conditional54) {
        # 193 "02transpile.c"
        __dec_obj19=output_file_name_93;
        output_file_name_93=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 196 "02transpile.c"
        __dec_obj20=output_file_name_93;
        output_file_name_93=(char*)come_increment_ref_count(((char*)(right_value125=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 199 "02transpile.c"
    command_94=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_93,input_file_name_92,info->clang_option,input_file_name_92))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 201 "02transpile.c"
    # 201 "02transpile.c"
    if(info->verbose) {
        # 201 "02transpile.c"
        puts(command_94);
    }
    # 202 "02transpile.c"
    rc_95=system(command_94);
    # 204 "02transpile.c"
    command2_96=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("grep error\\: %s.out",input_file_name_92))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 206 "02transpile.c"
    # 206 "02transpile.c"
    if(info->verbose) {
        # 206 "02transpile.c"
        puts(command2_96);
    }
    # 207 "02transpile.c"
    (void)system(command2_96);
    # 214 "02transpile.c"
    # 209 "02transpile.c"
    if(_if_conditional57=rc_95!=0,    _if_conditional57) {
        # 210 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 211 "02transpile.c"
        __result76__ = (_Bool)0;
        input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    # 218 "02transpile.c"
    # 214 "02transpile.c"
    if(_if_conditional58=!output_object_file,    _if_conditional58) {
        # 215 "02transpile.c"
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(output_file_name_93)))));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 218 "02transpile.c"
    __result77__ = (_Bool)1;
    input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result77__;
    input_file_name_92 = come_decrement_ref_count2(input_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_93 = come_decrement_ref_count2(output_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_94 = come_decrement_ref_count2(command_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_96 = come_decrement_ref_count2(command2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_97;
_Bool _if_conditional59;
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
_Bool _if_conditional64;
void* right_value135;
char* cmd_105;
int rc_106;
_Bool _if_conditional65;
void* right_value136;
_Bool _if_conditional66;
void* right_value137;
_Bool _if_conditional67;
void* right_value138;
void* right_value139;
_Bool _if_conditional68;
_Bool __result85__;
_Bool __result86__;
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
    # 223 "02transpile.c"
    output_file_name_97=((void*)0);
    # 231 "02transpile.c"
    # 224 "02transpile.c"
    if(info->output_file_name) {
        # 225 "02transpile.c"
        __dec_obj21=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 228 "02transpile.c"
        __dec_obj22=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(((char*)(right_value130=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 231 "02transpile.c"
    command_98=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 231, "buffer"))))))));
    come_call_finalizer3(right_value131,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 233 "02transpile.c"
    buffer_append_str(command_98,((char*)(right_value133=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_97,getenv("HOME"),"/usr/local/"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 239 "02transpile.c"
    for(    o2_saved_99=(object_files),it_102=list$1charph_begin((o2_saved_99));    !list$1charph_end((o2_saved_99));    it_102=list$1charph_next((o2_saved_99))    ){
        # 236 "02transpile.c"
        buffer_append_str(command_98,((char*)(right_value134=xsprintf("%s ",it_102))));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 245 "02transpile.c"
    # 239 "02transpile.c"
    if(gComeGC) {
        # 240 "02transpile.c"
        buffer_append_str(command_98,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        # 243 "02transpile.c"
        buffer_append_str(command_98,"-L/usr/local/lib -lneo-c ");
    }
    # 245 "02transpile.c"
    cmd_105=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 247 "02transpile.c"
    rc_106=system(cmd_105);
    # 251 "02transpile.c"
    # 248 "02transpile.c"
    if(_if_conditional65=rc_106==0,    _if_conditional65) {
        # 249 "02transpile.c"
        buffer_append_str(command_98," -L/opt/homebrew/opt/pcre/lib ");
    }
    # 251 "02transpile.c"
    buffer_append_str(command_98,((char*)(right_value136=xsprintf(" %s ",info->clang_option))));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 257 "02transpile.c"
    # 253 "02transpile.c"
    if(gComeGC) {
        # 254 "02transpile.c"
        buffer_append_str(command_98,((char*)(right_value137=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 257 "02transpile.c"
    # 257 "02transpile.c"
    if(info->verbose) {
        # 257 "02transpile.c"
        puts(((char*)(right_value138=buffer_to_string(command_98))));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 258 "02transpile.c"
    rc_106=system(((char*)(right_value139=buffer_to_string(command_98))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 265 "02transpile.c"
    # 260 "02transpile.c"
    if(_if_conditional68=rc_106!=0,    _if_conditional68) {
        # 261 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 262 "02transpile.c"
        __result85__ = (_Bool)0;
        output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result85__;
    }
    # 265 "02transpile.c"
    __result86__ = (_Bool)1;
    output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result86__;
    output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_105 = come_decrement_ref_count2(cmd_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional60;
char* result_100;
char* __result78__;
_Bool _if_conditional61;
char* __result79__;
char* result_101;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional60=self==((void*)0),        _if_conditional60) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_100,0,sizeof(char*));
            # 279 "./neo-c.h"
            __result78__ = __result_obj__ = result_100;
            return __result78__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result79__ = __result_obj__ = self->it->item;
            return __result79__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_101,0,sizeof(char*));
        # 289 "./neo-c.h"
        __result80__ = __result_obj__ = result_101;
        return __result80__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result81__ = self==((void*)0)||self->it==((void*)0);
        return __result81__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional62;
char* result_103;
char* __result82__;
_Bool _if_conditional63;
char* __result83__;
char* result_104;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional62=self==((void*)0)||self->it==((void*)0),        _if_conditional62) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_103,0,sizeof(char*));
            # 296 "./neo-c.h"
            __result82__ = __result_obj__ = result_103;
            return __result82__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result83__ = __result_obj__ = self->it->item;
            return __result83__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_104,0,sizeof(char*));
        # 307 "./neo-c.h"
        __result84__ = __result_obj__ = result_104;
        return __result84__;
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value140;
char* project_name_107;
void* right_value141;
void* right_value142;
void* right_value143;
char* project_name_debug_108;
void* right_value144;
char* cc_109;
void* right_value145;
char* install_110;
void* right_value146;
char* libs_111;
void* right_value147;
char* os_112;
void* right_value148;
char* prefix_113;
void* right_value149;
char* cflags_114;
void* right_value150;
char* cflags_debug_115;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&project_name_107, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&project_name_debug_108, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&cc_109, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&install_110, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&libs_111, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&os_112, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&prefix_113, 0, sizeof(char*));
right_value149 = (void*)0;
memset(&cflags_114, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&cflags_debug_115, 0, sizeof(char*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
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
    # 270 "02transpile.c"
    project_name_107=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(argv[2]))));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 271 "02transpile.c"
    project_name_debug_108=(char*)come_increment_ref_count(((char*)(right_value143=string_operator_add(((char*)(right_value141=__builtin_string(argv[2]))),((char*)(right_value142=__builtin_string("-debug")))))));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 272 "02transpile.c"
    cc_109=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string("neo-c"))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 273 "02transpile.c"
    install_110=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string("install"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 274 "02transpile.c"
    libs_111=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("-lpcre"))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 275 "02transpile.c"
    os_112=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string("linux"))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 276 "02transpile.c"
    prefix_113=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("/usr/local/"))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 277 "02transpile.c"
    cflags_114=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(" -common-header -O2 "))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 278 "02transpile.c"
    cflags_debug_115=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 280 "02transpile.c"
    if(_or_conditional1=mkdir(project_name_107,448|56|4|1),    _or_conditional1 != 0) {
        # 280 "02transpile.c"
        (come_push_stackframe("02transpile.c", 280, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    # 374 "02transpile.c"
    charp_write(((char*)(right_value177=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value151=string_to_string(prefix_113))),((char*)(right_value152=string_to_string(project_name_107))),((char*)(right_value153=string_to_string(project_name_107))),((char*)(right_value154=string_to_string(project_name_107))),((char*)(right_value155=string_to_string(project_name_107))),((char*)(right_value156=string_to_string(cc_109))),((char*)(right_value157=string_to_string(install_110))),((char*)(right_value158=string_to_string(cflags_114))),((char*)(right_value159=string_to_string(cflags_debug_115))),((char*)(right_value160=string_to_string(libs_111))),((char*)(right_value161=string_to_string(os_112))),((char*)(right_value162=string_to_string(prefix_113))),((char*)(right_value163=string_to_string(project_name_107))),((char*)(right_value164=string_to_string(project_name_debug_108))),((char*)(right_value165=string_to_string(project_name_107))),((char*)(right_value166=string_to_string(project_name_107))),((char*)(right_value167=string_to_string(project_name_107))),((char*)(right_value168=string_to_string(project_name_107))),((char*)(right_value169=string_to_string(project_name_debug_108))),((char*)(right_value170=string_to_string(project_name_107))),((char*)(right_value171=string_to_string(project_name_107))),((char*)(right_value172=string_to_string(project_name_107))),((char*)(right_value173=string_to_string(project_name_107))),((char*)(right_value174=string_to_string(project_name_107))),((char*)(right_value175=string_to_string(project_name_debug_108))),((char*)(right_value176=string_to_string(project_name_debug_108)))))),((char*)(right_value179=xsprintf("\%s/Makefile",((char*)(right_value178=string_to_string(project_name_107)))))),(_Bool)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 376 "02transpile.c"
    __result87__ = (_Bool)1;
    project_name_107 = come_decrement_ref_count2(project_name_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_108 = come_decrement_ref_count2(project_name_debug_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_109 = come_decrement_ref_count2(cc_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_110 = come_decrement_ref_count2(install_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_111 = come_decrement_ref_count2(libs_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_112 = come_decrement_ref_count2(os_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_113 = come_decrement_ref_count2(prefix_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_114 = come_decrement_ref_count2(cflags_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_115 = come_decrement_ref_count2(cflags_debug_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
    project_name_107 = come_decrement_ref_count2(project_name_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_108 = come_decrement_ref_count2(project_name_debug_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_109 = come_decrement_ref_count2(cc_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_110 = come_decrement_ref_count2(install_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_111 = come_decrement_ref_count2(libs_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_112 = come_decrement_ref_count2(os_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_113 = come_decrement_ref_count2(prefix_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_114 = come_decrement_ref_count2(cflags_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_115 = come_decrement_ref_count2(cflags_debug_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 381 "02transpile.c"
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        # 381 "02transpile.c"
        (come_push_stackframe("02transpile.c", 381, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    # 383 "02transpile.c"
    __result88__ = (_Bool)1;
    return __result88__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 388 "02transpile.c"
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        # 388 "02transpile.c"
        (come_push_stackframe("02transpile.c", 388, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    # 390 "02transpile.c"
    __result89__ = (_Bool)1;
    return __result89__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    # 395 "02transpile.c"
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        # 395 "02transpile.c"
        (come_push_stackframe("02transpile.c", 395, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    # 397 "02transpile.c"
    __result90__ = (_Bool)1;
    return __result90__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 402 "02transpile.c"
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        # 402 "02transpile.c"
        (come_push_stackframe("02transpile.c", 402, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    # 404 "02transpile.c"
    __result91__ = (_Bool)1;
    return __result91__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    # 409 "02transpile.c"
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        # 409 "02transpile.c"
        (come_push_stackframe("02transpile.c", 409, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    # 411 "02transpile.c"
    __result92__ = (_Bool)1;
    return __result92__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value180;
void* right_value181;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
right_value181 = (void*)0;
    # 416 "02transpile.c"
    if(_or_conditional7=system(((char*)(right_value181=xsprintf("make install DESTDIR=\%s",((char*)(right_value180=charp_to_string(prefix))))))),    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        # 416 "02transpile.c"
        (come_push_stackframe("02transpile.c", 416, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    # 418 "02transpile.c"
    __result93__ = (_Bool)1;
    return __result93__;
}

static void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
int i_166;
void* right_value221;
char* generics_type_167;
void* right_value222;
void* right_value223;
int i_168;
void* right_value224;
char* generics_type_169;
void* right_value225;
void* right_value226;
int rc_171;
_Bool _if_conditional139;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
char* type_name_172;
void* right_value231;
void* right_value232;
struct sType* type_173;
void* right_value233;
char* __dec_obj23;
void* right_value237;
void* right_value238;
void* right_value239;
struct sClass* klass_195;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
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
void* right_value322;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&i_166, 0, sizeof(int));
right_value221 = (void*)0;
memset(&generics_type_167, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&i_168, 0, sizeof(int));
right_value224 = (void*)0;
memset(&generics_type_169, 0, sizeof(char*));
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&rc_171, 0, sizeof(int));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&type_name_172, 0, sizeof(char*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&type_173, 0, sizeof(struct sType*));
right_value233 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&klass_195, 0, sizeof(struct sClass*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
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
right_value322 = (void*)0;
    # 423 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value189=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 423, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value189,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 424 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 424, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value192,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 425 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 425, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value195,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 426 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 426, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value198,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 427 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 427, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value201,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 428 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value204=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 428, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value204,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 429 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 429, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value207,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 430 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 430, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value210,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 431 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 431, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value213,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 432 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value216,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 433 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 433, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value219,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 438 "02transpile.c"
    for(    i_166=0;    i_166<12;    i_166++    ){
        # 435 "02transpile.c"
        generics_type_167=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("generics_type%d",i_166))));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 436 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_167),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "sClass")))),generics_type_167,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_166,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value222,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_167 = come_decrement_ref_count2(generics_type_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 443 "02transpile.c"
    for(    i_168=0;    i_168<7;    i_168++    ){
        # 439 "02transpile.c"
        generics_type_169=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("mgenerics_type%d",i_168))));
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 440 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_169),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "sClass")))),generics_type_169,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_168,(_Bool)0,info)))));
        come_call_finalizer3(right_value225,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_169 = come_decrement_ref_count2(generics_type_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 443 "02transpile.c"
    char cmd_170[1024];
    memset(&cmd_170, 0, sizeof(char)    *(1024)    );
    # 444 "02transpile.c"
    snprintf(cmd_170,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    # 446 "02transpile.c"
    rc_171=system(cmd_170);
    # 470 "02transpile.c"
    # 447 "02transpile.c"
    if(_if_conditional139=rc_171==0,    _if_conditional139) {
        # 448 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 448, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value228,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value229,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 450 "02transpile.c"
        type_name_172=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("__builtin_va_list"))));
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 452 "02transpile.c"
        type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 452, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 453 "02transpile.c"
        __dec_obj23=type_173->mOriginalTypeName;
        type_173->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 455 "02transpile.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(type_name_172)))),(struct sType*)come_increment_ref_count(type_173));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 460 "02transpile.c"
        klass_195=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value239=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value238=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 460, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value238,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 462 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_195->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value247=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value243=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 462, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 462, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value243,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value245,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value247,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 463 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_195->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value252=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value248=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 463, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 463, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value248,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 464 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_195->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value257=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value253=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 464, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value255=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 464, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value253,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value255,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value257,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 465 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_195->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value258=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 465, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 465, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value258,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 466 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_195->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value267=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 466, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 466, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value263,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 468 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value322=sClass_clone(klass_195)))));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value322,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_195,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional69;
unsigned int hash_139;
unsigned int it_140;
_Bool _while_condtional16;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool same_key_exist_157;
char* it2_160;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct map$2charphsClassph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_139, 0, sizeof(unsigned int));
memset(&it_140, 0, sizeof(unsigned int));
memset(&same_key_exist_157, 0, sizeof(_Bool));
memset(&it2_160, 0, sizeof(char*));
        # 1368 "./neo-c.h"
        # 1365 "./neo-c.h"
        if(_if_conditional69=self->len*10>=self->size,        _if_conditional69) {
            # 1366 "./neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1368 "./neo-c.h"
        hash_139=string_get_hash_key(key)%self->size;
        # 1369 "./neo-c.h"
        it_140=hash_139;
        # 1427 "./neo-c.h"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 1425 "./neo-c.h"
            # 1372 "./neo-c.h"
            if(_if_conditional104=self->item_existance[it_140],            _if_conditional104) {
                # 1395 "./neo-c.h"
                # 1374 "./neo-c.h"
                if(_if_conditional105=string_equals(self->keys[it_140],key),                _if_conditional105) {
                    # 1385 "./neo-c.h"
                    # 1376 "./neo-c.h"
                    if(_if_conditional106=1,                    _if_conditional106) {
                        # 1377 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_140]);
                        # 1378 "./neo-c.h"
                        self->keys[it_140] = come_decrement_ref_count2(self->keys[it_140], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "./neo-c.h"
                        self->keys[it_140]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_140]);
                        # 1383 "./neo-c.h"
                        self->keys[it_140]=key;
                    }
                    # 1392 "./neo-c.h"
                    # 1385 "./neo-c.h"
                    if(_if_conditional126=1,                    _if_conditional126) {
                        # 1386 "./neo-c.h"
                        come_call_finalizer3(self->items[it_140],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "./neo-c.h"
                        self->items[it_140]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "./neo-c.h"
                        self->items[it_140]=item;
                    }
                    # 1392 "./neo-c.h"
                    break;
                }
                # 1395 "./neo-c.h"
                it_140++;
                # 1405 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional127=it_140>=self->size,                _if_conditional127) {
                    # 1398 "./neo-c.h"
                    it_140=0;
                }
                else {
                    # 1405 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional128=it_140==hash_139,                    _if_conditional128) {
                        # 1401 "./neo-c.h"
                        printf("unexpected error in map.insert\n");
                        # 1402 "./neo-c.h"
                        stackframe();
                        # 1403 "./neo-c.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1407 "./neo-c.h"
                self->item_existance[it_140]=(_Bool)1;
                # 1414 "./neo-c.h"
                # 1408 "./neo-c.h"
                if(_if_conditional129=1,                _if_conditional129) {
                    # 1409 "./neo-c.h"
                    self->keys[it_140]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "./neo-c.h"
                    self->keys[it_140]=key;
                }
                # 1421 "./neo-c.h"
                # 1414 "./neo-c.h"
                if(_if_conditional130=1,                _if_conditional130) {
                    # 1415 "./neo-c.h"
                    self->items[it_140]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "./neo-c.h"
                    self->items[it_140]=item;
                }
                # 1421 "./neo-c.h"
                self->len++;
                # 1423 "./neo-c.h"
                break;
            }
        }
        # 1427 "./neo-c.h"
        same_key_exist_157=(_Bool)0;
        # 1435 "./neo-c.h"
        for(        it2_160=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_160=list$1charp_next(self->key_list)        ){
            # 1433 "./neo-c.h"
            # 1430 "./neo-c.h"
            if(_if_conditional135=string_equals(it2_160,key),            _if_conditional135) {
                # 1431 "./neo-c.h"
                same_key_exist_157=(_Bool)1;
            }
        }
        # 1439 "./neo-c.h"
        # 1435 "./neo-c.h"
        if(_if_conditional136=!same_key_exist_157,        _if_conditional136) {
            # 1436 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "./neo-c.h"
        __result117__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result117__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_116;
void* right_value182;
char** keys_117;
void* right_value183;
struct sClass** items_118;
void* right_value184;
_Bool* item_existance_125;
int len_126;
char* it_129;
struct sClass* default_value_132;
struct sClass* it2_135;
unsigned int hash_136;
int n_137;
_Bool _while_condtional15;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct sClass* default_value_138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_116, 0, sizeof(int));
right_value182 = (void*)0;
memset(&keys_117, 0, sizeof(char**));
right_value183 = (void*)0;
memset(&items_118, 0, sizeof(struct sClass**));
right_value184 = (void*)0;
memset(&item_existance_125, 0, sizeof(_Bool*));
memset(&len_126, 0, sizeof(int));
memset(&it_129, 0, sizeof(char*));
memset(&default_value_132, 0, sizeof(struct sClass*));
memset(&it2_135, 0, sizeof(struct sClass*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&n_137, 0, sizeof(int));
memset(&default_value_138, 0, sizeof(struct sClass*));
                # 1312 "./neo-c.h"
                size_116=self->size*10;
                # 1313 "./neo-c.h"
                keys_117=(char**)come_increment_ref_count(((char**)(right_value182=(char**)come_calloc(1, sizeof(char*)*(1*(size_116)), "./neo-c.h", 1313, "char*%"))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "./neo-c.h"
                items_118=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value183=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_116)), "./neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value183,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "./neo-c.h"
                item_existance_125=(_Bool*)come_increment_ref_count(((_Bool*)(right_value184=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_116)), "./neo-c.h", 1315, "bool"))));
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "./neo-c.h"
                len_126=0;
                # 1352 "./neo-c.h"
                for(                it_129=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_129=map$2charphsClassph_next(self)                ){
                    # 1320 "./neo-c.h"
                    # 1321 "./neo-c.h"
                    memset(&default_value_132,0,sizeof(struct sClass*));
                    # 1322 "./neo-c.h"
                    it2_135=map$2charphsClassph_at(self,it_129,default_value_132);
                    # 1323 "./neo-c.h"
                    hash_136=string_get_hash_key(it_129)%size_116;
                    # 1324 "./neo-c.h"
                    n_137=hash_136;
                    # 1350 "./neo-c.h"
                    while(_while_condtional15=(_Bool)1,                    _while_condtional15) {
                        # 1349 "./neo-c.h"
                        # 1327 "./neo-c.h"
                        if(_if_conditional101=item_existance_125[n_137],                        _if_conditional101) {
                            # 1329 "./neo-c.h"
                            n_137++;
                            # 1339 "./neo-c.h"
                            # 1331 "./neo-c.h"
                            if(_if_conditional102=n_137>=size_116,                            _if_conditional102) {
                                # 1332 "./neo-c.h"
                                n_137=0;
                            }
                            else {
                                # 1339 "./neo-c.h"
                                # 1334 "./neo-c.h"
                                if(_if_conditional103=n_137==hash_136,                                _if_conditional103) {
                                    # 1335 "./neo-c.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1336 "./neo-c.h"
                                    stackframe();
                                    # 1337 "./neo-c.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1341 "./neo-c.h"
                            item_existance_125[n_137]=(_Bool)1;
                            # 1342 "./neo-c.h"
                            keys_117[n_137]=it_129;
                            # 1343 "./neo-c.h"
                            # 1344 "./neo-c.h"
                            items_118[n_137]=map$2charphsClassph_at(self,it_129,default_value_138);
                            # 1346 "./neo-c.h"
                            len_126++;
                            # 1347 "./neo-c.h"
                            break;
                        }
                    }
                }
                # 1352 "./neo-c.h"
                come_free((char*)self->items);
                # 1353 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1354 "./neo-c.h"
                come_free((char*)self->keys);
                # 1356 "./neo-c.h"
                self->keys=keys_117;
                # 1357 "./neo-c.h"
                self->items=items_118;
                # 1358 "./neo-c.h"
                self->item_existance=item_existance_125;
                # 1360 "./neo-c.h"
                self->size=size_116;
                # 1361 "./neo-c.h"
                self->len=len_126;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional91;
_Bool _if_conditional92;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sClass_finalize"
                    # 0 "sClass_finalize"
                    if(_if_conditional70=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional70) {
                        # 0 "sClass_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sClass_finalize"
                    # 1 "sClass_finalize"
                    if(_if_conditional71=self!=((void*)0)&&self->mFields!=((void*)0),                    _if_conditional71) {
                        # 1 "sClass_finalize"
                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sClass_finalize"
                    # 2 "sClass_finalize"
                    if(_if_conditional91=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                    _if_conditional91) {
                        # 2 "sClass_finalize"
                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sClass_finalize"
                    # 3 "sClass_finalize"
                    if(_if_conditional92=self!=((void*)0)&&self->mParentClassName!=((void*)0),                    _if_conditional92) {
                        # 3 "sClass_finalize"
                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_119;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_120, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 114 "./neo-c.h"
                            it_119=self->head;
                            # 120 "./neo-c.h"
                            while(_while_condtional11=it_119!=((void*)0),                            _while_condtional11) {
                                # 116 "./neo-c.h"
                                prev_it_120=it_119;
                                # 117 "./neo-c.h"
                                it_119=it_119->next;
                                # 118 "./neo-c.h"
                                come_call_finalizer3(prev_it_120,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    if(_if_conditional72=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional72) {
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional77;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sType_finalize"
                                                    # 0 "sType_finalize"
                                                    if(_if_conditional75=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                                    _if_conditional75) {
                                                        # 0 "sType_finalize"
                                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sType_finalize"
                                                    # 1 "sType_finalize"
                                                    if(_if_conditional77=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional77) {
                                                        # 1 "sType_finalize"
                                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 3 "sType_finalize"
                                                    # 2 "sType_finalize"
                                                    if(_if_conditional79=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional79) {
                                                        # 2 "sType_finalize"
                                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 4 "sType_finalize"
                                                    # 3 "sType_finalize"
                                                    if(_if_conditional80=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                                    _if_conditional80) {
                                                        # 3 "sType_finalize"
                                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 5 "sType_finalize"
                                                    # 4 "sType_finalize"
                                                    if(_if_conditional81=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                                    _if_conditional81) {
                                                        # 4 "sType_finalize"
                                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 6 "sType_finalize"
                                                    # 5 "sType_finalize"
                                                    if(_if_conditional82=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                                    _if_conditional82) {
                                                        # 5 "sType_finalize"
                                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 7 "sType_finalize"
                                                    # 6 "sType_finalize"
                                                    if(_if_conditional84=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                    _if_conditional84) {
                                                        # 6 "sType_finalize"
                                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 8 "sType_finalize"
                                                    # 7 "sType_finalize"
                                                    if(_if_conditional85=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                    _if_conditional85) {
                                                        # 7 "sType_finalize"
                                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 9 "sType_finalize"
                                                    # 8 "sType_finalize"
                                                    if(_if_conditional86=self!=((void*)0)&&self->mResultType!=((void*)0),                                                    _if_conditional86) {
                                                        # 8 "sType_finalize"
                                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 10 "sType_finalize"
                                                    # 9 "sType_finalize"
                                                    if(_if_conditional87=self!=((void*)0)&&self->mAlignas!=((void*)0),                                                    _if_conditional87) {
                                                        # 9 "sType_finalize"
                                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 11 "sType_finalize"
                                                    # 10 "sType_finalize"
                                                    if(_if_conditional88=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                                    _if_conditional88) {
                                                        # 10 "sType_finalize"
                                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 12 "sType_finalize"
                                                    # 11 "sType_finalize"
                                                    if(_if_conditional89=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                                    _if_conditional89) {
                                                        # 11 "sType_finalize"
                                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 13 "sType_finalize"
                                                    # 12 "sType_finalize"
                                                    if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),                                                    _if_conditional90) {
                                                        # 12 "sType_finalize"
                                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_121;
_Bool _while_condtional12;
struct list_item$1sTypeph* prev_it_122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_121, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1sTypeph*));
                                                            # 114 "./neo-c.h"
                                                            it_121=self->head;
                                                            # 120 "./neo-c.h"
                                                            while(_while_condtional12=it_121!=((void*)0),                                                            _while_condtional12) {
                                                                # 116 "./neo-c.h"
                                                                prev_it_122=it_121;
                                                                # 117 "./neo-c.h"
                                                                it_121=it_121->next;
                                                                # 118 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_122,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sTypephp_finalize"
                                                                    # 0 "list_item$1sTypephp_finalize"
                                                                    if(_if_conditional76=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional76) {
                                                                        # 0 "list_item$1sTypephp_finalize"
                                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple1$1sTypephp_finalize"
                                                            # 0 "tuple1$1sTypephp_finalize"
                                                            if(_if_conditional78=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional78) {
                                                                # 0 "tuple1$1sTypephp_finalize"
                                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_123;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_124, 0, sizeof(struct list_item$1sNodeph*));
                                                            # 114 "./neo-c.h"
                                                            it_123=self->head;
                                                            # 120 "./neo-c.h"
                                                            while(_while_condtional13=it_123!=((void*)0),                                                            _while_condtional13) {
                                                                # 116 "./neo-c.h"
                                                                prev_it_124=it_123;
                                                                # 117 "./neo-c.h"
                                                                it_123=it_123->next;
                                                                # 118 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_124,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sNodephp_finalize"
                                                                    # 0 "list_item$1sNodephp_finalize"
                                                                    if(_if_conditional83=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional83) {
                                                                        # 0 "list_item$1sNodephp_finalize"
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_127;
char* __result94__;
_Bool _if_conditional94;
char* __result95__;
char* result_128;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                    # 1279 "./neo-c.h"
                    # 1274 "./neo-c.h"
                    if(_if_conditional93=self==((void*)0),                    _if_conditional93) {
                        # 1275 "./neo-c.h"
                        # 1276 "./neo-c.h"
                        memset(&result_127,0,sizeof(char*));
                        # 1277 "./neo-c.h"
                        __result94__ = __result_obj__ = result_127;
                        return __result94__;
                    }
                    # 1279 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "./neo-c.h"
                    # 1281 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "./neo-c.h"
                        __result95__ = __result_obj__ = self->key_list->it->item;
                        return __result95__;
                    }
                    # 1285 "./neo-c.h"
                    # 1286 "./neo-c.h"
                    memset(&result_128,0,sizeof(char*));
                    # 1287 "./neo-c.h"
                    __result96__ = __result_obj__ = result_128;
                    return __result96__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "./neo-c.h"
                    __result97__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result97__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional95;
char* result_130;
char* __result98__;
_Bool _if_conditional96;
char* __result99__;
char* result_131;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(char*));
memset(&result_131, 0, sizeof(char*));
                    # 1296 "./neo-c.h"
                    # 1291 "./neo-c.h"
                    if(_if_conditional95=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional95) {
                        # 1292 "./neo-c.h"
                        # 1293 "./neo-c.h"
                        memset(&result_130,0,sizeof(char*));
                        # 1294 "./neo-c.h"
                        __result98__ = __result_obj__ = result_130;
                        return __result98__;
                    }
                    # 1296 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "./neo-c.h"
                    # 1298 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "./neo-c.h"
                        __result99__ = __result_obj__ = self->key_list->it->item;
                        return __result99__;
                    }
                    # 1302 "./neo-c.h"
                    # 1303 "./neo-c.h"
                    memset(&result_131,0,sizeof(char*));
                    # 1304 "./neo-c.h"
                    __result100__ = __result_obj__ = result_131;
                    return __result100__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional14;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sClass* __result101__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* __result102__;
struct sClass* __result103__;
struct sClass* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
                        # 1201 "./neo-c.h"
                        hash_133=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "./neo-c.h"
                        it_134=hash_133;
                        # 1226 "./neo-c.h"
                        while(_while_condtional14=(_Bool)1,                        _while_condtional14) {
                            # 1224 "./neo-c.h"
                            # 1205 "./neo-c.h"
                            if(_if_conditional97=self->item_existance[it_134],                            _if_conditional97) {
                                # 1212 "./neo-c.h"
                                # 1207 "./neo-c.h"
                                if(_if_conditional98=string_equals(self->keys[it_134],key),                                _if_conditional98) {
                                    # 1209 "./neo-c.h"
                                    __result101__ = __result_obj__ = self->items[it_134];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result101__;
                                }
                                # 1212 "./neo-c.h"
                                it_134++;
                                # 1220 "./neo-c.h"
                                # 1214 "./neo-c.h"
                                if(_if_conditional99=it_134>=self->size,                                _if_conditional99) {
                                    # 1215 "./neo-c.h"
                                    it_134=0;
                                }
                                else {
                                    # 1220 "./neo-c.h"
                                    # 1217 "./neo-c.h"
                                    if(_if_conditional100=it_134==hash_133,                                    _if_conditional100) {
                                        # 1218 "./neo-c.h"
                                        __result102__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result102__;
                                    }
                                }
                            }
                            else {
                                # 1222 "./neo-c.h"
                                __result103__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result103__;
                            }
                        }
                        # 1226 "./neo-c.h"
                        __result104__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_141;
struct list_item$1charp* it_142;
_Bool _while_condtional17;
_Bool _if_conditional107;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_141, 0, sizeof(int));
memset(&it_142, 0, sizeof(struct list_item$1charp*));
                            # 435 "./neo-c.h"
                            it2_141=0;
                            # 436 "./neo-c.h"
                            it_142=self->head;
                            # 447 "./neo-c.h"
                            while(_while_condtional17=it_142!=((void*)0),                            _while_condtional17) {
                                # 442 "./neo-c.h"
                                # 438 "./neo-c.h"
                                if(_if_conditional107=string_equals(it_142->item,item),                                _if_conditional107) {
                                    # 439 "./neo-c.h"
                                    list$1charp_delete(self,it2_141,it2_141+1);
                                    # 440 "./neo-c.h"
                                    break;
                                }
                                # 442 "./neo-c.h"
                                it2_141++;
                                # 444 "./neo-c.h"
                                it_142=it_142->next;
                            }
                            # 447 "./neo-c.h"
                            __result108__ = __result_obj__ = self;
                            return __result108__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
int tmp_143;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charp* __result105__;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct list_item$1charp* it_146;
int i_147;
_Bool _while_condtional19;
_Bool _if_conditional116;
struct list_item$1charp* prev_it_148;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list_item$1charp* it_149;
int i_150;
_Bool _while_condtional20;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_151;
struct list_item$1charp* it_152;
struct list_item$1charp* head_prev_it_153;
struct list_item$1charp* tail_it_154;
int i_155;
_Bool _while_condtional21;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* prev_it_156;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_143, 0, sizeof(int));
memset(&it_146, 0, sizeof(struct list_item$1charp*));
memset(&i_147, 0, sizeof(int));
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*));
memset(&it_149, 0, sizeof(struct list_item$1charp*));
memset(&i_150, 0, sizeof(int));
memset(&prev_it_151, 0, sizeof(struct list_item$1charp*));
memset(&it_152, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_153, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_154, 0, sizeof(struct list_item$1charp*));
memset(&i_155, 0, sizeof(int));
memset(&prev_it_156, 0, sizeof(struct list_item$1charp*));
                                        # 454 "./neo-c.h"
                                        # 451 "./neo-c.h"
                                        if(_if_conditional108=head<0,                                        _if_conditional108) {
                                            # 452 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "./neo-c.h"
                                        # 454 "./neo-c.h"
                                        if(_if_conditional109=tail<0,                                        _if_conditional109) {
                                            # 455 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "./neo-c.h"
                                        # 458 "./neo-c.h"
                                        if(_if_conditional110=head>tail,                                        _if_conditional110) {
                                            # 459 "./neo-c.h"
                                            tmp_143=tail;
                                            # 460 "./neo-c.h"
                                            tail=head;
                                            # 461 "./neo-c.h"
                                            head=tmp_143;
                                        }
                                        # 468 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional111=head<0,                                        _if_conditional111) {
                                            # 465 "./neo-c.h"
                                            head=0;
                                        }
                                        # 472 "./neo-c.h"
                                        # 468 "./neo-c.h"
                                        if(_if_conditional112=tail>self->len,                                        _if_conditional112) {
                                            # 469 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "./neo-c.h"
                                        # 472 "./neo-c.h"
                                        if(_if_conditional113=head==tail,                                        _if_conditional113) {
                                            # 473 "./neo-c.h"
                                            __result105__ = __result_obj__ = self;
                                            return __result105__;
                                        }
                                        # 571 "./neo-c.h"
                                        # 476 "./neo-c.h"
                                        if(_if_conditional114=head==0&&tail==self->len,                                        _if_conditional114) {
                                            # 478 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "./neo-c.h"
                                            # 480 "./neo-c.h"
                                            if(_if_conditional115=head==0,                                            _if_conditional115) {
                                                # 481 "./neo-c.h"
                                                it_146=self->head;
                                                # 482 "./neo-c.h"
                                                i_147=0;
                                                # 504 "./neo-c.h"
                                                while(_while_condtional19=it_146!=((void*)0),                                                _while_condtional19) {
                                                    # 503 "./neo-c.h"
                                                    # 484 "./neo-c.h"
                                                    if(_if_conditional116=i_147<tail,                                                    _if_conditional116) {
                                                        # 485 "./neo-c.h"
                                                        prev_it_148=it_146;
                                                        # 487 "./neo-c.h"
                                                        it_146=it_146->next;
                                                        # 488 "./neo-c.h"
                                                        i_147++;
                                                        # 490 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_148,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "./neo-c.h"
                                                        # 494 "./neo-c.h"
                                                        if(_if_conditional117=i_147==tail,                                                        _if_conditional117) {
                                                            # 495 "./neo-c.h"
                                                            self->head=it_146;
                                                            # 496 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "./neo-c.h"
                                                            it_146=it_146->next;
                                                            # 501 "./neo-c.h"
                                                            i_147++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 505 "./neo-c.h"
                                                if(_if_conditional118=tail==self->len,                                                _if_conditional118) {
                                                    # 506 "./neo-c.h"
                                                    it_149=self->head;
                                                    # 507 "./neo-c.h"
                                                    i_150=0;
                                                    # 529 "./neo-c.h"
                                                    while(_while_condtional20=it_149!=((void*)0),                                                    _while_condtional20) {
                                                        # 514 "./neo-c.h"
                                                        # 509 "./neo-c.h"
                                                        if(_if_conditional119=i_150==head,                                                        _if_conditional119) {
                                                            # 510 "./neo-c.h"
                                                            self->tail=it_149->prev;
                                                            # 511 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "./neo-c.h"
                                                        # 514 "./neo-c.h"
                                                        if(_if_conditional120=i_150>=head,                                                        _if_conditional120) {
                                                            # 515 "./neo-c.h"
                                                            prev_it_151=it_149;
                                                            # 517 "./neo-c.h"
                                                            it_149=it_149->next;
                                                            # 518 "./neo-c.h"
                                                            i_150++;
                                                            # 520 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_151,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "./neo-c.h"
                                                            it_149=it_149->next;
                                                            # 526 "./neo-c.h"
                                                            i_150++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "./neo-c.h"
                                                    it_152=self->head;
                                                    # 533 "./neo-c.h"
                                                    head_prev_it_153=((void*)0);
                                                    # 534 "./neo-c.h"
                                                    tail_it_154=((void*)0);
                                                    # 537 "./neo-c.h"
                                                    i_155=0;
                                                    # 563 "./neo-c.h"
                                                    while(_while_condtional21=it_152!=((void*)0),                                                    _while_condtional21) {
                                                        # 542 "./neo-c.h"
                                                        # 539 "./neo-c.h"
                                                        if(_if_conditional121=i_155==head,                                                        _if_conditional121) {
                                                            # 540 "./neo-c.h"
                                                            head_prev_it_153=it_152->prev;
                                                        }
                                                        # 546 "./neo-c.h"
                                                        # 542 "./neo-c.h"
                                                        if(_if_conditional122=i_155==tail,                                                        _if_conditional122) {
                                                            # 543 "./neo-c.h"
                                                            tail_it_154=it_152;
                                                        }
                                                        # 561 "./neo-c.h"
                                                        # 546 "./neo-c.h"
                                                        if(_if_conditional123=i_155>=head&&i_155<tail,                                                        _if_conditional123) {
                                                            # 548 "./neo-c.h"
                                                            prev_it_156=it_152;
                                                            # 550 "./neo-c.h"
                                                            it_152=it_152->next;
                                                            # 551 "./neo-c.h"
                                                            i_155++;
                                                            # 553 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_156,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "./neo-c.h"
                                                            it_152=it_152->next;
                                                            # 559 "./neo-c.h"
                                                            i_155++;
                                                        }
                                                    }
                                                    # 566 "./neo-c.h"
                                                    # 563 "./neo-c.h"
                                                    if(_if_conditional124=head_prev_it_153!=((void*)0),                                                    _if_conditional124) {
                                                        # 564 "./neo-c.h"
                                                        head_prev_it_153->next=tail_it_154;
                                                    }
                                                    # 569 "./neo-c.h"
                                                    # 566 "./neo-c.h"
                                                    if(_if_conditional125=tail_it_154!=((void*)0),                                                    _if_conditional125) {
                                                        # 567 "./neo-c.h"
                                                        tail_it_154->prev=head_prev_it_153;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "./neo-c.h"
                                        __result107__ = __result_obj__ = self;
                                        return __result107__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_144;
_Bool _while_condtional18;
struct list_item$1charp* prev_it_145;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_144, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*));
                                                # 420 "./neo-c.h"
                                                it_144=self->head;
                                                # 427 "./neo-c.h"
                                                while(_while_condtional18=it_144!=((void*)0),                                                _while_condtional18) {
                                                    # 422 "./neo-c.h"
                                                    prev_it_145=it_144;
                                                    # 423 "./neo-c.h"
                                                    it_144=it_144->next;
                                                    # 424 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "./neo-c.h"
                                                self->len=0;
                                                # 432 "./neo-c.h"
                                                __result106__ = __result_obj__ = self;
                                                return __result106__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional131;
char* result_158;
char* __result109__;
_Bool _if_conditional132;
char* __result110__;
char* result_159;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(char*));
memset(&result_159, 0, sizeof(char*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_158,0,sizeof(char*));
                # 279 "./neo-c.h"
                __result109__ = __result_obj__ = result_158;
                return __result109__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result110__ = __result_obj__ = self->it->item;
                return __result110__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_159,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result111__ = __result_obj__ = result_159;
            return __result111__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result112__ = self==((void*)0)||self->it==((void*)0);
            return __result112__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_161;
char* __result113__;
_Bool _if_conditional134;
char* __result114__;
char* result_162;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(char*));
memset(&result_162, 0, sizeof(char*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional133=self==((void*)0)||self->it==((void*)0),            _if_conditional133) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_161,0,sizeof(char*));
                # 296 "./neo-c.h"
                __result113__ = __result_obj__ = result_161;
                return __result113__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result114__ = __result_obj__ = self->it->item;
                return __result114__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_162,0,sizeof(char*));
            # 307 "./neo-c.h"
            __result115__ = __result_obj__ = result_162;
            return __result115__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional137;
void* right_value185;
struct list_item$1charp* litem_163;
_Bool _if_conditional138;
void* right_value186;
struct list_item$1charp* litem_164;
void* right_value187;
struct list_item$1charp* litem_165;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charp*));
right_value186 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charp*));
right_value187 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charp*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional137=self->len==0,                _if_conditional137) {
                    # 217 "./neo-c.h"
                    litem_163=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value185=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value185,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_163->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_163->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_163->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_163;
                    # 224 "./neo-c.h"
                    self->head=litem_163;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional138=self->len==1,                    _if_conditional138) {
                        # 227 "./neo-c.h"
                        litem_164=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value186=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value186,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_164->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_164->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_164->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_164;
                        # 234 "./neo-c.h"
                        self->head->next=litem_164;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_165=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value187=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value187,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_165->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_165->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_165->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_165;
                        # 244 "./neo-c.h"
                        self->tail=litem_165;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result116__ = __result_obj__ = self;
                return __result116__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional140;
unsigned int hash_191;
unsigned int it_192;
_Bool _while_condtional24;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool same_key_exist_193;
char* it2_194;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct map$2charphsTypeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_191, 0, sizeof(unsigned int));
memset(&it_192, 0, sizeof(unsigned int));
memset(&same_key_exist_193, 0, sizeof(_Bool));
memset(&it2_194, 0, sizeof(char*));
            # 1368 "./neo-c.h"
            # 1365 "./neo-c.h"
            if(_if_conditional140=self->len*10>=self->size,            _if_conditional140) {
                # 1366 "./neo-c.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1368 "./neo-c.h"
            hash_191=string_get_hash_key(key)%self->size;
            # 1369 "./neo-c.h"
            it_192=hash_191;
            # 1427 "./neo-c.h"
            while(_while_condtional24=(_Bool)1,            _while_condtional24) {
                # 1425 "./neo-c.h"
                # 1372 "./neo-c.h"
                if(_if_conditional152=self->item_existance[it_192],                _if_conditional152) {
                    # 1395 "./neo-c.h"
                    # 1374 "./neo-c.h"
                    if(_if_conditional153=string_equals(self->keys[it_192],key),                    _if_conditional153) {
                        # 1385 "./neo-c.h"
                        # 1376 "./neo-c.h"
                        if(_if_conditional154=1,                        _if_conditional154) {
                            # 1377 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_192]);
                            # 1378 "./neo-c.h"
                            self->keys[it_192] = come_decrement_ref_count2(self->keys[it_192], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "./neo-c.h"
                            self->keys[it_192]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_192]);
                            # 1383 "./neo-c.h"
                            self->keys[it_192]=key;
                        }
                        # 1392 "./neo-c.h"
                        # 1385 "./neo-c.h"
                        if(_if_conditional155=1,                        _if_conditional155) {
                            # 1386 "./neo-c.h"
                            come_call_finalizer3(self->items[it_192],sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "./neo-c.h"
                            self->items[it_192]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "./neo-c.h"
                            self->items[it_192]=item;
                        }
                        # 1392 "./neo-c.h"
                        break;
                    }
                    # 1395 "./neo-c.h"
                    it_192++;
                    # 1405 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional156=it_192>=self->size,                    _if_conditional156) {
                        # 1398 "./neo-c.h"
                        it_192=0;
                    }
                    else {
                        # 1405 "./neo-c.h"
                        # 1400 "./neo-c.h"
                        if(_if_conditional157=it_192==hash_191,                        _if_conditional157) {
                            # 1401 "./neo-c.h"
                            printf("unexpected error in map.insert\n");
                            # 1402 "./neo-c.h"
                            stackframe();
                            # 1403 "./neo-c.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1407 "./neo-c.h"
                    self->item_existance[it_192]=(_Bool)1;
                    # 1414 "./neo-c.h"
                    # 1408 "./neo-c.h"
                    if(_if_conditional158=1,                    _if_conditional158) {
                        # 1409 "./neo-c.h"
                        self->keys[it_192]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "./neo-c.h"
                        self->keys[it_192]=key;
                    }
                    # 1421 "./neo-c.h"
                    # 1414 "./neo-c.h"
                    if(_if_conditional159=1,                    _if_conditional159) {
                        # 1415 "./neo-c.h"
                        self->items[it_192]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "./neo-c.h"
                        self->items[it_192]=item;
                    }
                    # 1421 "./neo-c.h"
                    self->len++;
                    # 1423 "./neo-c.h"
                    break;
                }
            }
            # 1427 "./neo-c.h"
            same_key_exist_193=(_Bool)0;
            # 1435 "./neo-c.h"
            for(            it2_194=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_194=list$1charp_next(self->key_list)            ){
                # 1433 "./neo-c.h"
                # 1430 "./neo-c.h"
                if(_if_conditional160=string_equals(it2_194,key),                _if_conditional160) {
                    # 1431 "./neo-c.h"
                    same_key_exist_193=(_Bool)1;
                }
            }
            # 1439 "./neo-c.h"
            # 1435 "./neo-c.h"
            if(_if_conditional161=!same_key_exist_193,            _if_conditional161) {
                # 1436 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "./neo-c.h"
            __result129__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result129__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_174;
void* right_value234;
char** keys_175;
void* right_value235;
struct sType** items_176;
void* right_value236;
_Bool* item_existance_177;
int len_178;
char* it_181;
struct sType* default_value_184;
struct sType* it2_187;
unsigned int hash_188;
int n_189;
_Bool _while_condtional23;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sType* default_value_190;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_174, 0, sizeof(int));
right_value234 = (void*)0;
memset(&keys_175, 0, sizeof(char**));
right_value235 = (void*)0;
memset(&items_176, 0, sizeof(struct sType**));
right_value236 = (void*)0;
memset(&item_existance_177, 0, sizeof(_Bool*));
memset(&len_178, 0, sizeof(int));
memset(&it_181, 0, sizeof(char*));
memset(&default_value_184, 0, sizeof(struct sType*));
memset(&it2_187, 0, sizeof(struct sType*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&n_189, 0, sizeof(int));
memset(&default_value_190, 0, sizeof(struct sType*));
                    # 1312 "./neo-c.h"
                    size_174=self->size*10;
                    # 1313 "./neo-c.h"
                    keys_175=(char**)come_increment_ref_count(((char**)(right_value234=(char**)come_calloc(1, sizeof(char*)*(1*(size_174)), "./neo-c.h", 1313, "char*%"))));
                    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "./neo-c.h"
                    items_176=(struct sType**)come_increment_ref_count(((struct sType**)(right_value235=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_174)), "./neo-c.h", 1314, "sType*%"))));
                    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "./neo-c.h"
                    item_existance_177=(_Bool*)come_increment_ref_count(((_Bool*)(right_value236=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_174)), "./neo-c.h", 1315, "bool"))));
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "./neo-c.h"
                    len_178=0;
                    # 1352 "./neo-c.h"
                    for(                    it_181=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_181=map$2charphsTypeph_next(self)                    ){
                        # 1320 "./neo-c.h"
                        # 1321 "./neo-c.h"
                        memset(&default_value_184,0,sizeof(struct sType*));
                        # 1322 "./neo-c.h"
                        it2_187=map$2charphsTypeph_at(self,it_181,default_value_184);
                        # 1323 "./neo-c.h"
                        hash_188=string_get_hash_key(it_181)%size_174;
                        # 1324 "./neo-c.h"
                        n_189=hash_188;
                        # 1350 "./neo-c.h"
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            # 1349 "./neo-c.h"
                            # 1327 "./neo-c.h"
                            if(_if_conditional149=item_existance_177[n_189],                            _if_conditional149) {
                                # 1329 "./neo-c.h"
                                n_189++;
                                # 1339 "./neo-c.h"
                                # 1331 "./neo-c.h"
                                if(_if_conditional150=n_189>=size_174,                                _if_conditional150) {
                                    # 1332 "./neo-c.h"
                                    n_189=0;
                                }
                                else {
                                    # 1339 "./neo-c.h"
                                    # 1334 "./neo-c.h"
                                    if(_if_conditional151=n_189==hash_188,                                    _if_conditional151) {
                                        # 1335 "./neo-c.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1336 "./neo-c.h"
                                        stackframe();
                                        # 1337 "./neo-c.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1341 "./neo-c.h"
                                item_existance_177[n_189]=(_Bool)1;
                                # 1342 "./neo-c.h"
                                keys_175[n_189]=it_181;
                                # 1343 "./neo-c.h"
                                # 1344 "./neo-c.h"
                                items_176[n_189]=map$2charphsTypeph_at(self,it_181,default_value_190);
                                # 1346 "./neo-c.h"
                                len_178++;
                                # 1347 "./neo-c.h"
                                break;
                            }
                        }
                    }
                    # 1352 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1353 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1354 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1356 "./neo-c.h"
                    self->keys=keys_175;
                    # 1357 "./neo-c.h"
                    self->items=items_176;
                    # 1358 "./neo-c.h"
                    self->item_existance=item_existance_177;
                    # 1360 "./neo-c.h"
                    self->size=size_174;
                    # 1361 "./neo-c.h"
                    self->len=len_178;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_179;
char* __result118__;
_Bool _if_conditional142;
char* __result119__;
char* result_180;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(char*));
memset(&result_180, 0, sizeof(char*));
                        # 1279 "./neo-c.h"
                        # 1274 "./neo-c.h"
                        if(_if_conditional141=self==((void*)0),                        _if_conditional141) {
                            # 1275 "./neo-c.h"
                            # 1276 "./neo-c.h"
                            memset(&result_179,0,sizeof(char*));
                            # 1277 "./neo-c.h"
                            __result118__ = __result_obj__ = result_179;
                            return __result118__;
                        }
                        # 1279 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "./neo-c.h"
                        # 1281 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "./neo-c.h"
                            __result119__ = __result_obj__ = self->key_list->it->item;
                            return __result119__;
                        }
                        # 1285 "./neo-c.h"
                        # 1286 "./neo-c.h"
                        memset(&result_180,0,sizeof(char*));
                        # 1287 "./neo-c.h"
                        __result120__ = __result_obj__ = result_180;
                        return __result120__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "./neo-c.h"
                        __result121__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result121__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_182;
char* __result122__;
_Bool _if_conditional144;
char* __result123__;
char* result_183;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_182, 0, sizeof(char*));
memset(&result_183, 0, sizeof(char*));
                        # 1296 "./neo-c.h"
                        # 1291 "./neo-c.h"
                        if(_if_conditional143=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional143) {
                            # 1292 "./neo-c.h"
                            # 1293 "./neo-c.h"
                            memset(&result_182,0,sizeof(char*));
                            # 1294 "./neo-c.h"
                            __result122__ = __result_obj__ = result_182;
                            return __result122__;
                        }
                        # 1296 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "./neo-c.h"
                        # 1298 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "./neo-c.h"
                            __result123__ = __result_obj__ = self->key_list->it->item;
                            return __result123__;
                        }
                        # 1302 "./neo-c.h"
                        # 1303 "./neo-c.h"
                        memset(&result_183,0,sizeof(char*));
                        # 1304 "./neo-c.h"
                        __result124__ = __result_obj__ = result_183;
                        return __result124__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional22;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct sType* __result125__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sType* __result126__;
struct sType* __result127__;
struct sType* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
                            # 1201 "./neo-c.h"
                            hash_185=string_get_hash_key(((char*)key))%self->size;
                            # 1202 "./neo-c.h"
                            it_186=hash_185;
                            # 1226 "./neo-c.h"
                            while(_while_condtional22=(_Bool)1,                            _while_condtional22) {
                                # 1224 "./neo-c.h"
                                # 1205 "./neo-c.h"
                                if(_if_conditional145=self->item_existance[it_186],                                _if_conditional145) {
                                    # 1212 "./neo-c.h"
                                    # 1207 "./neo-c.h"
                                    if(_if_conditional146=string_equals(self->keys[it_186],key),                                    _if_conditional146) {
                                        # 1209 "./neo-c.h"
                                        __result125__ = __result_obj__ = self->items[it_186];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result125__;
                                    }
                                    # 1212 "./neo-c.h"
                                    it_186++;
                                    # 1220 "./neo-c.h"
                                    # 1214 "./neo-c.h"
                                    if(_if_conditional147=it_186>=self->size,                                    _if_conditional147) {
                                        # 1215 "./neo-c.h"
                                        it_186=0;
                                    }
                                    else {
                                        # 1220 "./neo-c.h"
                                        # 1217 "./neo-c.h"
                                        if(_if_conditional148=it_186==hash_185,                                        _if_conditional148) {
                                            # 1218 "./neo-c.h"
                                            __result126__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                        }
                                    }
                                }
                                else {
                                    # 1222 "./neo-c.h"
                                    __result127__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result127__;
                                }
                            }
                            # 1226 "./neo-c.h"
                            __result128__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result128__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional162;
void* right_value240;
struct list_item$1tuple2$2charphsTypephph* litem_196;
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional165;
void* right_value241;
struct list_item$1tuple2$2charphsTypephph* litem_197;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value242;
struct list_item$1tuple2$2charphsTypephph* litem_198;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value241 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value242 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional162=self->len==0,            _if_conditional162) {
                # 217 "./neo-c.h"
                litem_196=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value240=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value240,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_196->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_196->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj24=litem_196->item;
                litem_196->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_196;
                # 224 "./neo-c.h"
                self->head=litem_196;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional165=self->len==1,                _if_conditional165) {
                    # 227 "./neo-c.h"
                    litem_197=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value241=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value241,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_197->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_197->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj25=litem_197->item;
                    litem_197->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_197;
                    # 234 "./neo-c.h"
                    self->head->next=litem_197;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_198=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value242=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value242,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_198->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_198->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj26=litem_198->item;
                    litem_198->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_198;
                    # 244 "./neo-c.h"
                    self->tail=litem_198;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result130__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1738 "./neo-c.h"
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "./neo-c.h"
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1741 "./neo-c.h"
            __result131__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result131__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional170;
struct sClass* __result132__;
void* right_value269;
struct sClass* result_199;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value270;
char* __dec_obj29;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value319;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value320;
char* __dec_obj61;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value321;
char* __dec_obj62;
struct sClass* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&result_199, 0, sizeof(struct sClass*));
right_value270 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional170=self==(void*)0,            _if_conditional170) {
                # 2 "sClass_clone"
                __result132__ = __result_obj__ = (void*)0;
                return __result132__;
            }
            # 3 "sClass_clone"
            result_199=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value269=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value269,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                # 4 "sClass_clone"
                result_199->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                # 5 "sClass_clone"
                result_199->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                # 6 "sClass_clone"
                result_199->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                # 7 "sClass_clone"
                result_199->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                # 8 "sClass_clone"
                result_199->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                # 9 "sClass_clone"
                result_199->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                # 10 "sClass_clone"
                result_199->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                # 11 "sClass_clone"
                result_199->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional179=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional179) {
                # 12 "sClass_clone"
                __dec_obj29=result_199->mName;
                result_199->mName=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                # 13 "sClass_clone"
                result_199->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                # 14 "sClass_clone"
                result_199->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional182=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional182) {
                # 15 "sClass_clone"
                __dec_obj60=result_199->mFields;
                result_199->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value319=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value319,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional275=self!=((void*)0),            _if_conditional275) {
                # 16 "sClass_clone"
                result_199->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional276=self!=((void*)0),            _if_conditional276) {
                # 17 "sClass_clone"
                result_199->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional277=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional277) {
                # 18 "sClass_clone"
                __dec_obj61=result_199->mDeclareSName;
                result_199->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value320=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional278=self!=((void*)0),            _if_conditional278) {
                # 19 "sClass_clone"
                result_199->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional279=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional279) {
                # 20 "sClass_clone"
                __dec_obj62=result_199->mParentClassName;
                result_199->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value321=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result160__ = __result_obj__ = result_199;
            come_call_finalizer3(result_199,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result160__;
            come_call_finalizer3(result_199,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct list$1tuple2$2charphsTypephph* __result133__;
void* right_value271;
void* right_value272;
struct list$1tuple2$2charphsTypephph* result_200;
struct list_item$1tuple2$2charphsTypephph* it_201;
_Bool _while_condtional25;
void* right_value318;
struct list$1tuple2$2charphsTypephph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&result_200, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_201, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value318 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional183=self==((void*)0),                    _if_conditional183) {
                        # 131 "./neo-c.h"
                        __result133__ = __result_obj__ = ((void*)0);
                        return __result133__;
                    }
                    # 133 "./neo-c.h"
                    result_200=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value272=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value271=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value271,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value272,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_201=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional25=it_201!=((void*)0),                    _while_condtional25) {
                        # 137 "./neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_200,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value318=tuple2$2charphsTypephp_clone(it_201->item)))));
                        come_call_finalizer3(right_value318,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_201=it_201->next;
                    }
                    # 142 "./neo-c.h"
                    __result159__ = __result_obj__ = result_200;
                    come_call_finalizer3(result_200,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result159__;
                    come_call_finalizer3(result_200,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result134__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_202;
struct tuple2$2charphsTypeph* __dec_obj30;
_Bool _if_conditional187;
void* right_value274;
struct list_item$1tuple2$2charphsTypephph* litem_203;
struct tuple2$2charphsTypeph* __dec_obj31;
void* right_value275;
struct list_item$1tuple2$2charphsTypephph* litem_204;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value274 = (void*)0;
memset(&litem_203, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value275 = (void*)0;
memset(&litem_204, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional184=self->len==0,                            _if_conditional184) {
                                # 147 "./neo-c.h"
                                litem_202=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value273,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_202->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_202->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj30=litem_202->item;
                                litem_202->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_202;
                                # 154 "./neo-c.h"
                                self->head=litem_202;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional187=self->len==1,                                _if_conditional187) {
                                    # 157 "./neo-c.h"
                                    litem_203=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value274=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value274,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_203->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_203->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj31=litem_203->item;
                                    litem_203->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_203;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_203;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_204=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value275=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value275,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_204->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_204->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj32=litem_204->item;
                                    litem_204->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_204;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_204;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result135__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result135__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional190=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional190) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional191=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional191) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct tuple2$2charphsTypeph* __result136__;
void* right_value276;
struct tuple2$2charphsTypeph* result_205;
_Bool _if_conditional195;
void* right_value277;
char* __dec_obj33;
_Bool _if_conditional196;
void* right_value317;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_205, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value277 = (void*)0;
right_value317 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional192=self==(void*)0,                            _if_conditional192) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result136__ = __result_obj__ = (void*)0;
                                return __result136__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_205=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value276=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value276,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional195=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional195) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj33=result_205->v1;
                                result_205->v1=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional196=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional196) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj59=result_205->v2;
                                result_205->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result158__ = __result_obj__ = result_205;
                            come_call_finalizer3(result_205,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result158__;
                            come_call_finalizer3(result_205,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional193) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional194) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional197;
struct sType* __result137__;
void* right_value278;
struct sType* result_206;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value285;
struct list$1sTypeph* __dec_obj37;
_Bool _if_conditional203;
void* right_value288;
struct tuple1$1sTypeph* __dec_obj39;
_Bool _if_conditional207;
void* right_value291;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional210;
void* right_value292;
char* __dec_obj42;
_Bool _if_conditional211;
void* right_value293;
struct list$1sTypeph* __dec_obj43;
_Bool _if_conditional212;
void* right_value301;
struct list$1sNodeph* __dec_obj47;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value302;
struct list$1sTypeph* __dec_obj48;
_Bool _if_conditional227;
void* right_value309;
struct list$1charph* __dec_obj52;
_Bool _if_conditional231;
void* right_value312;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value313;
struct sNode* __dec_obj55;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
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
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value314;
struct sNode* __dec_obj56;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value315;
char* __dec_obj57;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value316;
char* __dec_obj58;
_Bool _if_conditional274;
struct sType* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&result_206, 0, sizeof(struct sType*));
right_value285 = (void*)0;
right_value288 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value309 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
                                    # 3 "sType_clone"
                                    # 2 "sType_clone"
                                    if(_if_conditional197=self==(void*)0,                                    _if_conditional197) {
                                        # 2 "sType_clone"
                                        __result137__ = __result_obj__ = (void*)0;
                                        return __result137__;
                                    }
                                    # 3 "sType_clone"
                                    result_206=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sType_clone"
                                    # 4 "sType_clone"
                                    if(_if_conditional198=self!=((void*)0),                                    _if_conditional198) {
                                        # 4 "sType_clone"
                                        result_206->mClass=self->mClass;
                                    }
                                    # 6 "sType_clone"
                                    # 5 "sType_clone"
                                    if(_if_conditional199=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional199) {
                                        # 5 "sType_clone"
                                        __dec_obj37=result_206->mMultipleTypes;
                                        result_206->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value285,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sType_clone"
                                    # 6 "sType_clone"
                                    if(_if_conditional203=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional203) {
                                        # 6 "sType_clone"
                                        __dec_obj39=result_206->mNoSolvedGenericsType;
                                        result_206->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value288=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value288,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sType_clone"
                                    # 7 "sType_clone"
                                    if(_if_conditional207=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional207) {
                                        # 7 "sType_clone"
                                        __dec_obj41=result_206->mOriginalLoadVarType;
                                        result_206->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value291=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value291,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sType_clone"
                                    # 8 "sType_clone"
                                    if(_if_conditional210=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional210) {
                                        # 8 "sType_clone"
                                        __dec_obj42=result_206->mGenericsName;
                                        result_206->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value292=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sType_clone"
                                    # 9 "sType_clone"
                                    if(_if_conditional211=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional211) {
                                        # 9 "sType_clone"
                                        __dec_obj43=result_206->mGenericsTypes;
                                        result_206->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value293=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value293,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sType_clone"
                                    # 10 "sType_clone"
                                    if(_if_conditional212=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional212) {
                                        # 10 "sType_clone"
                                        __dec_obj47=result_206->mArrayNum;
                                        result_206->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value301=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value301,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sType_clone"
                                    # 11 "sType_clone"
                                    if(_if_conditional225=self!=((void*)0),                                    _if_conditional225) {
                                        # 11 "sType_clone"
                                        result_206->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    # 13 "sType_clone"
                                    # 12 "sType_clone"
                                    if(_if_conditional226=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional226) {
                                        # 12 "sType_clone"
                                        __dec_obj48=result_206->mParamTypes;
                                        result_206->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value302=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value302,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 14 "sType_clone"
                                    # 13 "sType_clone"
                                    if(_if_conditional227=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional227) {
                                        # 13 "sType_clone"
                                        __dec_obj52=result_206->mParamNames;
                                        result_206->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value309,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 15 "sType_clone"
                                    # 14 "sType_clone"
                                    if(_if_conditional231=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional231) {
                                        # 14 "sType_clone"
                                        __dec_obj54=result_206->mResultType;
                                        result_206->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value312=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value312,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 16 "sType_clone"
                                    # 15 "sType_clone"
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        # 15 "sType_clone"
                                        result_206->mVarArgs=self->mVarArgs;
                                    }
                                    # 17 "sType_clone"
                                    # 16 "sType_clone"
                                    if(_if_conditional235=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional235) {
                                        # 16 "sType_clone"
                                        __dec_obj55=result_206->mAlignas;
                                        result_206->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 18 "sType_clone"
                                    # 17 "sType_clone"
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        # 17 "sType_clone"
                                        result_206->mUnsigned=self->mUnsigned;
                                    }
                                    # 19 "sType_clone"
                                    # 18 "sType_clone"
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        # 18 "sType_clone"
                                        result_206->mShort=self->mShort;
                                    }
                                    # 20 "sType_clone"
                                    # 19 "sType_clone"
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        # 19 "sType_clone"
                                        result_206->mLong=self->mLong;
                                    }
                                    # 21 "sType_clone"
                                    # 20 "sType_clone"
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        # 20 "sType_clone"
                                        result_206->mLongLong=self->mLongLong;
                                    }
                                    # 22 "sType_clone"
                                    # 21 "sType_clone"
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        # 21 "sType_clone"
                                        result_206->mConstant=self->mConstant;
                                    }
                                    # 23 "sType_clone"
                                    # 22 "sType_clone"
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        # 22 "sType_clone"
                                        result_206->mRegister=self->mRegister;
                                    }
                                    # 24 "sType_clone"
                                    # 23 "sType_clone"
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        # 23 "sType_clone"
                                        result_206->mVolatile=self->mVolatile;
                                    }
                                    # 25 "sType_clone"
                                    # 24 "sType_clone"
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        # 24 "sType_clone"
                                        result_206->mStatic=self->mStatic;
                                    }
                                    # 26 "sType_clone"
                                    # 25 "sType_clone"
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        # 25 "sType_clone"
                                        result_206->mRecord=self->mRecord;
                                    }
                                    # 27 "sType_clone"
                                    # 26 "sType_clone"
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        # 26 "sType_clone"
                                        result_206->mExtern=self->mExtern;
                                    }
                                    # 28 "sType_clone"
                                    # 27 "sType_clone"
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        # 27 "sType_clone"
                                        result_206->mRestrict=self->mRestrict;
                                    }
                                    # 29 "sType_clone"
                                    # 28 "sType_clone"
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        # 28 "sType_clone"
                                        result_206->mImmutable=self->mImmutable;
                                    }
                                    # 30 "sType_clone"
                                    # 29 "sType_clone"
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        # 29 "sType_clone"
                                        result_206->mHeap=self->mHeap;
                                    }
                                    # 31 "sType_clone"
                                    # 30 "sType_clone"
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        # 30 "sType_clone"
                                        result_206->mDummyHeap=self->mDummyHeap;
                                    }
                                    # 32 "sType_clone"
                                    # 31 "sType_clone"
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        # 31 "sType_clone"
                                        result_206->mDelegate=self->mDelegate;
                                    }
                                    # 33 "sType_clone"
                                    # 32 "sType_clone"
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        # 32 "sType_clone"
                                        result_206->mShare=self->mShare;
                                    }
                                    # 34 "sType_clone"
                                    # 33 "sType_clone"
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        # 33 "sType_clone"
                                        result_206->mClone=self->mClone;
                                    }
                                    # 35 "sType_clone"
                                    # 34 "sType_clone"
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        # 34 "sType_clone"
                                        result_206->mNoHeap=self->mNoHeap;
                                    }
                                    # 36 "sType_clone"
                                    # 35 "sType_clone"
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        # 35 "sType_clone"
                                        result_206->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    # 37 "sType_clone"
                                    # 36 "sType_clone"
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        # 36 "sType_clone"
                                        result_206->mRefference=self->mRefference;
                                    }
                                    # 38 "sType_clone"
                                    # 37 "sType_clone"
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        # 37 "sType_clone"
                                        result_206->mException=self->mException;
                                    }
                                    # 39 "sType_clone"
                                    # 38 "sType_clone"
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        # 38 "sType_clone"
                                        result_206->mPointerNum=self->mPointerNum;
                                    }
                                    # 40 "sType_clone"
                                    # 39 "sType_clone"
                                    if(_if_conditional258=self!=((void*)0),                                    _if_conditional258) {
                                        # 39 "sType_clone"
                                        result_206->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    # 41 "sType_clone"
                                    # 40 "sType_clone"
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        # 40 "sType_clone"
                                        result_206->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    # 42 "sType_clone"
                                    # 41 "sType_clone"
                                    if(_if_conditional260=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional260) {
                                        # 41 "sType_clone"
                                        __dec_obj56=result_206->mSizeNum;
                                        result_206->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 43 "sType_clone"
                                    # 42 "sType_clone"
                                    if(_if_conditional261=self!=((void*)0),                                    _if_conditional261) {
                                        # 42 "sType_clone"
                                        result_206->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    # 44 "sType_clone"
                                    # 43 "sType_clone"
                                    if(_if_conditional262=self!=((void*)0),                                    _if_conditional262) {
                                        # 43 "sType_clone"
                                        result_206->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    # 45 "sType_clone"
                                    # 44 "sType_clone"
                                    if(_if_conditional263=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional263) {
                                        # 44 "sType_clone"
                                        __dec_obj57=result_206->mOriginalTypeName;
                                        result_206->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value315=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 46 "sType_clone"
                                    # 45 "sType_clone"
                                    if(_if_conditional264=self!=((void*)0),                                    _if_conditional264) {
                                        # 45 "sType_clone"
                                        result_206->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    # 47 "sType_clone"
                                    # 46 "sType_clone"
                                    if(_if_conditional265=self!=((void*)0),                                    _if_conditional265) {
                                        # 46 "sType_clone"
                                        result_206->mFunctionParam=self->mFunctionParam;
                                    }
                                    # 48 "sType_clone"
                                    # 47 "sType_clone"
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        # 47 "sType_clone"
                                        result_206->mAllocaValue=self->mAllocaValue;
                                    }
                                    # 49 "sType_clone"
                                    # 48 "sType_clone"
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        # 48 "sType_clone"
                                        result_206->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    # 50 "sType_clone"
                                    # 49 "sType_clone"
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        # 49 "sType_clone"
                                        result_206->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    # 51 "sType_clone"
                                    # 50 "sType_clone"
                                    if(_if_conditional269=self!=((void*)0),                                    _if_conditional269) {
                                        # 50 "sType_clone"
                                        result_206->mComeMemCore=self->mComeMemCore;
                                    }
                                    # 52 "sType_clone"
                                    # 51 "sType_clone"
                                    if(_if_conditional270=self!=((void*)0),                                    _if_conditional270) {
                                        # 51 "sType_clone"
                                        result_206->mInline=self->mInline;
                                    }
                                    # 53 "sType_clone"
                                    # 52 "sType_clone"
                                    if(_if_conditional271=self!=((void*)0),                                    _if_conditional271) {
                                        # 52 "sType_clone"
                                        result_206->mNullValue=self->mNullValue;
                                    }
                                    # 54 "sType_clone"
                                    # 53 "sType_clone"
                                    if(_if_conditional272=self!=((void*)0),                                    _if_conditional272) {
                                        # 53 "sType_clone"
                                        result_206->mGuardValue=self->mGuardValue;
                                    }
                                    # 55 "sType_clone"
                                    # 54 "sType_clone"
                                    if(_if_conditional273=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional273) {
                                        # 54 "sType_clone"
                                        __dec_obj58=result_206->mAsmName;
                                        result_206->mAsmName=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 56 "sType_clone"
                                    # 55 "sType_clone"
                                    if(_if_conditional274=self!=((void*)0),                                    _if_conditional274) {
                                        # 55 "sType_clone"
                                        result_206->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    # 56 "sType_clone"
                                    __result157__ = __result_obj__ = result_206;
                                    come_call_finalizer3(result_206,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result157__;
                                    come_call_finalizer3(result_206,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional200;
struct list$1sTypeph* __result138__;
void* right_value279;
void* right_value280;
struct list$1sTypeph* result_207;
struct list_item$1sTypeph* it_208;
_Bool _while_condtional26;
void* right_value284;
struct list$1sTypeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&result_207, 0, sizeof(struct list$1sTypeph*));
memset(&it_208, 0, sizeof(struct list_item$1sTypeph*));
right_value284 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional200=self==((void*)0),                                            _if_conditional200) {
                                                # 131 "./neo-c.h"
                                                __result138__ = __result_obj__ = ((void*)0);
                                                return __result138__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_207=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value280=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value279=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value279,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value280,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_208=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional26=it_208!=((void*)0),                                            _while_condtional26) {
                                                # 137 "./neo-c.h"
                                                list$1sTypeph_add(result_207,(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(it_208->item)))));
                                                come_call_finalizer3(right_value284,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_208=it_208->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result141__ = __result_obj__ = result_207;
                                            come_call_finalizer3(result_207,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result141__;
                                            come_call_finalizer3(result_207,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result139__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result139__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional201;
void* right_value281;
struct list_item$1sTypeph* litem_209;
struct sType* __dec_obj34;
_Bool _if_conditional202;
void* right_value282;
struct list_item$1sTypeph* litem_210;
struct sType* __dec_obj35;
void* right_value283;
struct list_item$1sTypeph* litem_211;
struct sType* __dec_obj36;
struct list$1sTypeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1sTypeph*));
right_value282 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1sTypeph*));
right_value283 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional201=self->len==0,                                                    _if_conditional201) {
                                                        # 147 "./neo-c.h"
                                                        litem_209=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value281=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value281,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_209->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_209->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj34=litem_209->item;
                                                        litem_209->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_209;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_209;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional202=self->len==1,                                                        _if_conditional202) {
                                                            # 157 "./neo-c.h"
                                                            litem_210=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value282=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value282,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_210->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_210->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj35=litem_210->item;
                                                            litem_210->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_210;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_210;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_211=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value283=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value283,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_211->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_211->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj36=litem_211->item;
                                                            litem_211->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_211;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_211;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result140__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result140__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_212;
_Bool _while_condtional27;
struct list_item$1sTypeph* prev_it_213;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_212, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_213, 0, sizeof(struct list_item$1sTypeph*));
                                            # 114 "./neo-c.h"
                                            it_212=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional27=it_212!=((void*)0),                                            _while_condtional27) {
                                                # 116 "./neo-c.h"
                                                prev_it_213=it_212;
                                                # 117 "./neo-c.h"
                                                it_212=it_212->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_213,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypeph_finalize"
                                                # 0 "tuple1$1sTypeph_finalize"
                                                if(_if_conditional205=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional205) {
                                                    # 0 "tuple1$1sTypeph_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional213;
struct list$1sNodeph* __result146__;
void* right_value294;
void* right_value295;
struct list$1sNodeph* result_216;
struct list_item$1sNodeph* it_217;
_Bool _while_condtional28;
void* right_value300;
struct list$1sNodeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&result_216, 0, sizeof(struct list$1sNodeph*));
memset(&it_217, 0, sizeof(struct list_item$1sNodeph*));
right_value300 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional213=self==((void*)0),                                            _if_conditional213) {
                                                # 131 "./neo-c.h"
                                                __result146__ = __result_obj__ = ((void*)0);
                                                return __result146__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_216=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value295=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value294=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value294,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value295,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_217=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional28=it_217!=((void*)0),                                            _while_condtional28) {
                                                # 137 "./neo-c.h"
                                                list$1sNodeph_add(result_216,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=sNode_clone(it_217->item)))));
                                                if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 139 "./neo-c.h"
                                                it_217=it_217->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result151__ = __result_obj__ = result_216;
                                            come_call_finalizer3(result_216,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result151__;
                                            come_call_finalizer3(result_216,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result147__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result147__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value296;
struct list_item$1sNodeph* litem_218;
struct sNode* __dec_obj44;
_Bool _if_conditional215;
void* right_value297;
struct list_item$1sNodeph* litem_219;
struct sNode* __dec_obj45;
void* right_value298;
struct list_item$1sNodeph* litem_220;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
memset(&litem_218, 0, sizeof(struct list_item$1sNodeph*));
right_value297 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1sNodeph*));
right_value298 = (void*)0;
memset(&litem_220, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional214=self->len==0,                                                    _if_conditional214) {
                                                        # 147 "./neo-c.h"
                                                        litem_218=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value296,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_218->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_218->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj44=litem_218->item;
                                                        litem_218->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_218;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_218;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional215=self->len==1,                                                        _if_conditional215) {
                                                            # 157 "./neo-c.h"
                                                            litem_219=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value297=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value297,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_219->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_219->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj45=litem_219->item;
                                                            litem_219->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_219;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_219;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_220=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value298=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value298,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_220->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_220->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj46=litem_220->item;
                                                            litem_220->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_220;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_220;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result148__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result148__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional216;
struct sNode* __result149__;
void* right_value299;
struct sNode* result_221;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
memset(&result_221, 0, sizeof(struct sNode*));
                                                    # 3 "sNode_clone"
                                                    # 2 "sNode_clone"
                                                    if(_if_conditional216=self==(void*)0,                                                    _if_conditional216) {
                                                        # 2 "sNode_clone"
                                                        __result149__ = __result_obj__ = (void*)0;
                                                        return __result149__;
                                                    }
                                                    # 3 "sNode_clone"
                                                    result_221=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 5 "sNode_clone"
                                                    # 4 "sNode_clone"
                                                    if(_if_conditional217=self!=((void*)0)&&self->clone!=((void*)0),                                                    _if_conditional217) {
                                                        # 4 "sNode_clone"
                                                        result_221->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    # 6 "sNode_clone"
                                                    # 5 "sNode_clone"
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        # 5 "sNode_clone"
                                                        result_221->finalize=self->finalize;
                                                    }
                                                    # 7 "sNode_clone"
                                                    # 6 "sNode_clone"
                                                    if(_if_conditional219=self!=((void*)0),                                                    _if_conditional219) {
                                                        # 6 "sNode_clone"
                                                        result_221->clone=self->clone;
                                                    }
                                                    # 8 "sNode_clone"
                                                    # 7 "sNode_clone"
                                                    if(_if_conditional220=self!=((void*)0),                                                    _if_conditional220) {
                                                        # 7 "sNode_clone"
                                                        result_221->compile=self->compile;
                                                    }
                                                    # 9 "sNode_clone"
                                                    # 8 "sNode_clone"
                                                    if(_if_conditional221=self!=((void*)0),                                                    _if_conditional221) {
                                                        # 8 "sNode_clone"
                                                        result_221->sline=self->sline;
                                                    }
                                                    # 10 "sNode_clone"
                                                    # 9 "sNode_clone"
                                                    if(_if_conditional222=self!=((void*)0),                                                    _if_conditional222) {
                                                        # 9 "sNode_clone"
                                                        result_221->sname=self->sname;
                                                    }
                                                    # 11 "sNode_clone"
                                                    # 10 "sNode_clone"
                                                    if(_if_conditional223=self!=((void*)0),                                                    _if_conditional223) {
                                                        # 10 "sNode_clone"
                                                        result_221->terminated=self->terminated;
                                                    }
                                                    # 12 "sNode_clone"
                                                    # 11 "sNode_clone"
                                                    if(_if_conditional224=self!=((void*)0),                                                    _if_conditional224) {
                                                        # 11 "sNode_clone"
                                                        result_221->kind=self->kind;
                                                    }
                                                    # 12 "sNode_clone"
                                                    __result150__ = __result_obj__ = result_221;
                                                    if(result_221) { result_221 = come_decrement_ref_count2(result_221, ((struct sNode*)result_221)->finalize, ((struct sNode*)result_221)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result150__;
                                                    if(result_221) { result_221 = come_decrement_ref_count2(result_221, ((struct sNode*)result_221)->finalize, ((struct sNode*)result_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_222;
_Bool _while_condtional29;
struct list_item$1sNodeph* prev_it_223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_222, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_223, 0, sizeof(struct list_item$1sNodeph*));
                                            # 114 "./neo-c.h"
                                            it_222=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional29=it_222!=((void*)0),                                            _while_condtional29) {
                                                # 116 "./neo-c.h"
                                                prev_it_223=it_222;
                                                # 117 "./neo-c.h"
                                                it_222=it_222->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_223,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct list$1charph* __result152__;
void* right_value303;
void* right_value304;
struct list$1charph* result_224;
struct list_item$1charph* it_225;
_Bool _while_condtional30;
void* right_value308;
struct list$1charph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&result_224, 0, sizeof(struct list$1charph*));
memset(&it_225, 0, sizeof(struct list_item$1charph*));
right_value308 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional228=self==((void*)0),                                            _if_conditional228) {
                                                # 131 "./neo-c.h"
                                                __result152__ = __result_obj__ = ((void*)0);
                                                return __result152__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_224=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value304=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value303=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value303,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value304,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_225=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional30=it_225!=((void*)0),                                            _while_condtional30) {
                                                # 137 "./neo-c.h"
                                                list$1charph_add(result_224,(char*)come_increment_ref_count(((char*)(right_value308=string_clone(it_225->item)))));
                                                right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_225=it_225->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result154__ = __result_obj__ = result_224;
                                            come_call_finalizer3(result_224,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result154__;
                                            come_call_finalizer3(result_224,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value305;
struct list_item$1charph* litem_226;
char* __dec_obj49;
_Bool _if_conditional230;
void* right_value306;
struct list_item$1charph* litem_227;
char* __dec_obj50;
void* right_value307;
struct list_item$1charph* litem_228;
char* __dec_obj51;
struct list$1charph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
memset(&litem_226, 0, sizeof(struct list_item$1charph*));
right_value306 = (void*)0;
memset(&litem_227, 0, sizeof(struct list_item$1charph*));
right_value307 = (void*)0;
memset(&litem_228, 0, sizeof(struct list_item$1charph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional229=self->len==0,                                                    _if_conditional229) {
                                                        # 147 "./neo-c.h"
                                                        litem_226=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value305,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_226->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_226->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj49=litem_226->item;
                                                        litem_226->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_226;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_226;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional230=self->len==1,                                                        _if_conditional230) {
                                                            # 157 "./neo-c.h"
                                                            litem_227=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value306=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value306,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_227->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_227->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj50=litem_227->item;
                                                            litem_227->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_227;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_227;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_228=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value307=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value307,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_228->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_228->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj51=litem_228->item;
                                                            litem_228->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_228;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_228;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result153__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result153__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_229;
_Bool _while_condtional31;
struct list_item$1charph* prev_it_230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_229, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_230, 0, sizeof(struct list_item$1charph*));
                                            # 114 "./neo-c.h"
                                            it_229=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional31=it_229!=((void*)0),                                            _while_condtional31) {
                                                # 116 "./neo-c.h"
                                                prev_it_230=it_229;
                                                # 117 "./neo-c.h"
                                                it_229=it_229->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_230,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional232;
struct tuple1$1sTypeph* __result155__;
void* right_value310;
struct tuple1$1sTypeph* result_231;
_Bool _if_conditional233;
void* right_value311;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
memset(&result_231, 0, sizeof(struct tuple1$1sTypeph*));
right_value311 = (void*)0;
                                            # 3 "tuple1$1sTypephp_clone"
                                            # 2 "tuple1$1sTypephp_clone"
                                            if(_if_conditional232=self==(void*)0,                                            _if_conditional232) {
                                                # 2 "tuple1$1sTypephp_clone"
                                                __result155__ = __result_obj__ = (void*)0;
                                                return __result155__;
                                            }
                                            # 3 "tuple1$1sTypephp_clone"
                                            result_231=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value310=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value310,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "tuple1$1sTypephp_clone"
                                            # 4 "tuple1$1sTypephp_clone"
                                            if(_if_conditional233=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional233) {
                                                # 4 "tuple1$1sTypephp_clone"
                                                __dec_obj53=result_231->v1;
                                                result_231->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 5 "tuple1$1sTypephp_clone"
                                            __result156__ = __result_obj__ = result_231;
                                            come_call_finalizer3(result_231,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result156__;
                                            come_call_finalizer3(result_231,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_232;
_Bool _while_condtional32;
struct list_item$1tuple2$2charphsTypephph* prev_it_233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_232, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_233, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "./neo-c.h"
                    it_232=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional32=it_232!=((void*)0),                    _while_condtional32) {
                        # 116 "./neo-c.h"
                        prev_it_233=it_232;
                        # 117 "./neo-c.h"
                        it_232=it_232->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_233,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

void init_module(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional280;
void* right_value323;
void* right_value324;
struct buffer* clang_option_234;
void* right_value325;
void* right_value326;
struct buffer* cpp_option_235;
void* right_value327;
void* right_value328;
struct list$1charph* files_236;
void* right_value329;
void* right_value330;
struct list$1charph* object_files_237;
_Bool output_object_file_238;
_Bool output_cpp_file_239;
_Bool output_source_file_flag_240;
void* right_value331;
char* output_file_name_241;
_Bool verbose_242;
_Bool prohibit_common_header_243;
_Bool come_debug_244;
_Bool come_malloc_245;
_Bool come_str_246;
int i_247;
_Bool _if_conditional281;
void* right_value332;
char* __dec_obj63;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value333;
_Bool _if_conditional289;
void* right_value334;
void* right_value335;
void* right_value336;
_Bool _if_conditional290;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value341;
void* right_value342;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value343;
_Bool _if_conditional298;
void* right_value344;
void* right_value345;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct _IO_FILE* f_248;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value346;
char* tmp_file_249;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
struct sInfo info_253;
void* right_value354;
char* __dec_obj64;
void* right_value355;
char* __dec_obj65;
void* right_value356;
char* __dec_obj66;
void* right_value357;
char* __dec_obj67;
void* right_value358;
void* right_value364;
struct map$2charphsFunph* __dec_obj69;
void* right_value365;
void* right_value371;
struct map$2charphsGenericsFunph* __dec_obj71;
void* right_value372;
void* right_value378;
struct map$2charphsClassph* __dec_obj73;
void* right_value379;
void* right_value385;
struct map$2charphsClassModuleph* __dec_obj75;
void* right_value386;
void* right_value392;
struct map$2charphsTypeph* __dec_obj77;
void* right_value393;
void* right_value394;
struct sModule* __dec_obj78;
void* right_value395;
void* right_value396;
struct list$1sRightValueObjectph* __dec_obj79;
void* right_value397;
void* right_value398;
struct list$1CVALUEph* __dec_obj80;
void* right_value399;
void* right_value400;
struct sVarTable* __dec_obj81;
void* right_value401;
void* right_value402;
struct sVarTable* lv_table_289;
void* right_value403;
void* right_value404;
struct list$1charph* __dec_obj82;
void* right_value405;
void* right_value406;
struct list$1charph* __dec_obj83;
void* right_value407;
void* right_value408;
struct map$2charphsClassph* __dec_obj84;
static int n_290=0;
void* right_value409;
char* __dec_obj85;
_Bool _if_conditional385;
void* right_value410;
void* right_value411;
void* right_value412;
struct buffer* __dec_obj86;
void* right_value413;
void* right_value414;
void* right_value415;
struct buffer* __dec_obj87;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value416;
void* right_value417;
_Bool _if_conditional420;
_Bool _if_conditional421;
int __result172__;
_Bool _if_conditional422;
_Bool _if_conditional423;
int __result173__;
_Bool _if_conditional424;
_Bool _if_conditional425;
int __result174__;
_Bool _if_conditional426;
_Bool _if_conditional427;
int __result175__;
_Bool _if_conditional428;
_Bool _if_conditional429;
int __result176__;
_Bool _if_conditional430;
_Bool _if_conditional431;
int __result177__;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
int __result178__;
_Bool _if_conditional435;
_Bool _if_conditional436;
int __result179__;
void* right_value418;
void* right_value419;
struct buffer* clang_option_293;
void* right_value420;
void* right_value421;
struct buffer* cpp_option_294;
void* right_value422;
void* right_value423;
struct list$1charph* files_295;
void* right_value424;
void* right_value425;
struct list$1charph* object_files_296;
_Bool output_object_file_297;
_Bool output_cpp_file_298;
_Bool output_source_file_flag_299;
char* output_file_name_300;
_Bool verbose_301;
_Bool come_debug_302;
_Bool come_malloc_303;
_Bool come_str_304;
int i_305;
_Bool _if_conditional437;
void* right_value426;
char* __dec_obj88;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value427;
_Bool _if_conditional444;
void* right_value428;
void* right_value429;
void* right_value430;
_Bool _if_conditional445;
void* right_value431;
void* right_value432;
void* right_value433;
void* right_value434;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value435;
void* right_value436;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value437;
_Bool _if_conditional454;
void* right_value438;
void* right_value439;
void* right_value440;
_Bool _if_conditional455;
_Bool _if_conditional456;
struct list$1charph* o2_saved_306;
char* it_307;
struct sInfo info_308;
void* right_value441;
char* __dec_obj89;
void* right_value442;
char* __dec_obj90;
void* right_value443;
char* __dec_obj91;
void* right_value444;
void* right_value445;
struct map$2charphsFunph* __dec_obj92;
void* right_value446;
void* right_value447;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value448;
void* right_value449;
struct map$2charphsClassph* __dec_obj94;
void* right_value450;
void* right_value451;
struct map$2charphsClassModuleph* __dec_obj95;
void* right_value452;
void* right_value453;
struct map$2charphsTypeph* __dec_obj96;
void* right_value454;
void* right_value455;
struct sModule* __dec_obj97;
void* right_value456;
void* right_value457;
struct list$1sRightValueObjectph* __dec_obj98;
void* right_value458;
void* right_value459;
struct list$1CVALUEph* __dec_obj99;
void* right_value460;
void* right_value461;
struct sVarTable* __dec_obj100;
void* right_value462;
void* right_value463;
struct sVarTable* lv_table_309;
void* right_value464;
void* right_value465;
struct list$1charph* __dec_obj101;
void* right_value466;
void* right_value467;
struct list$1charph* __dec_obj102;
void* right_value468;
void* right_value469;
struct map$2charphsClassph* __dec_obj103;
_Bool _if_conditional457;
void* right_value470;
void* right_value471;
void* right_value472;
struct buffer* __dec_obj104;
void* right_value473;
void* right_value474;
void* right_value475;
struct buffer* __dec_obj105;
_Bool _if_conditional458;
void* right_value476;
char* __dec_obj106;
char* __dec_obj107;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
struct sInfo info_310;
void* right_value477;
char* __dec_obj108;
void* right_value478;
char* __dec_obj109;
_Bool _if_conditional466;
void* right_value479;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
int __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&clang_option_234, 0, sizeof(struct buffer*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&cpp_option_235, 0, sizeof(struct buffer*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&files_236, 0, sizeof(struct list$1charph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&object_files_237, 0, sizeof(struct list$1charph*));
memset(&output_object_file_238, 0, sizeof(_Bool));
memset(&output_cpp_file_239, 0, sizeof(_Bool));
memset(&output_source_file_flag_240, 0, sizeof(_Bool));
right_value331 = (void*)0;
memset(&output_file_name_241, 0, sizeof(char*));
memset(&verbose_242, 0, sizeof(_Bool));
memset(&prohibit_common_header_243, 0, sizeof(_Bool));
memset(&come_debug_244, 0, sizeof(_Bool));
memset(&come_malloc_245, 0, sizeof(_Bool));
memset(&come_str_246, 0, sizeof(_Bool));
memset(&i_247, 0, sizeof(int));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&f_248, 0, sizeof(struct _IO_FILE*));
right_value346 = (void*)0;
memset(&tmp_file_249, 0, sizeof(char*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&info_253, 0, sizeof(struct sInfo));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&lv_table_289, 0, sizeof(struct sVarTable*));
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
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&clang_option_293, 0, sizeof(struct buffer*));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&cpp_option_294, 0, sizeof(struct buffer*));
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&files_295, 0, sizeof(struct list$1charph*));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&object_files_296, 0, sizeof(struct list$1charph*));
memset(&output_object_file_297, 0, sizeof(_Bool));
memset(&output_cpp_file_298, 0, sizeof(_Bool));
memset(&output_source_file_flag_299, 0, sizeof(_Bool));
memset(&output_file_name_300, 0, sizeof(char*));
memset(&verbose_301, 0, sizeof(_Bool));
memset(&come_debug_302, 0, sizeof(_Bool));
memset(&come_malloc_303, 0, sizeof(_Bool));
memset(&come_str_304, 0, sizeof(_Bool));
memset(&i_305, 0, sizeof(int));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&o2_saved_306, 0, sizeof(struct list$1charph*));
memset(&it_307, 0, sizeof(char*));
memset(&info_308, 0, sizeof(struct sInfo));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&lv_table_309, 0, sizeof(struct sVarTable*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&info_310, 0, sizeof(struct sInfo));
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    # 879 "02transpile.c"
    # 478 "02transpile.c"
    if(_if_conditional280=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional280) {
        # 479 "02transpile.c"
        gProgramName=argv[0];
        # 481 "02transpile.c"
        clang_option_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 481, "buffer"))))))));
        come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 482 "02transpile.c"
        cpp_option_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value326=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value325=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 482, "buffer"))))))));
        come_call_finalizer3(right_value325,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 483 "02transpile.c"
        files_236=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 483, "list$1charph"))))))));
        come_call_finalizer3(right_value327,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 484 "02transpile.c"
        object_files_237=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value330=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value329=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 484, "list$1charph"))))))));
        come_call_finalizer3(right_value329,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value330,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 485 "02transpile.c"
        output_object_file_238=(_Bool)0;
        # 486 "02transpile.c"
        output_cpp_file_239=(_Bool)0;
        # 487 "02transpile.c"
        output_source_file_flag_240=(_Bool)0;
        # 488 "02transpile.c"
        output_file_name_241=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("common.h"))));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 489 "02transpile.c"
        verbose_242=(_Bool)0;
        # 490 "02transpile.c"
        prohibit_common_header_243=(_Bool)0;
        # 491 "02transpile.c"
        come_debug_244=(_Bool)0;
        # 492 "02transpile.c"
        come_malloc_245=(_Bool)0;
        # 493 "02transpile.c"
        come_str_246=(_Bool)0;
        # 559 "02transpile.c"
        for(        i_247=2;        i_247<argc;        i_247++        ){
            # 557 "02transpile.c"
            # 495 "02transpile.c"
            if(_if_conditional281=charp_operator_equals(argv[i_247],"-o")&&i_247+1<argc,            _if_conditional281) {
                # 496 "02transpile.c"
                __dec_obj63=output_file_name_241;
                output_file_name_241=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string(argv[i_247+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 497 "02transpile.c"
                i_247++;
            }
            else {
                # 557 "02transpile.c"
                # 499 "02transpile.c"
                if(_if_conditional282=charp_operator_equals(argv[i_247],"-str"),                _if_conditional282) {
                    # 500 "02transpile.c"
                    come_str_246=(_Bool)1;
                }
                else {
                    # 557 "02transpile.c"
                    # 502 "02transpile.c"
                    if(_if_conditional283=charp_operator_equals(argv[i_247],"-leak"),                    _if_conditional283) {
                        # 503 "02transpile.c"
                        come_malloc_245=(_Bool)1;
                    }
                    else {
                        # 557 "02transpile.c"
                        # 505 "02transpile.c"
                        if(_if_conditional284=charp_operator_equals(argv[i_247],"-gc"),                        _if_conditional284) {
                            # 506 "02transpile.c"
                            gComeGC=(_Bool)1;
                        }
                        else {
                            # 557 "02transpile.c"
                            # 508 "02transpile.c"
                            if(_if_conditional285=charp_operator_equals(argv[i_247],"-g"),                            _if_conditional285) {
                                # 509 "02transpile.c"
                                buffer_append_str(clang_option_234,"-g ");
                            }
                            else {
                                # 557 "02transpile.c"
                                # 511 "02transpile.c"
                                if(_if_conditional286=charp_operator_equals(argv[i_247],"-cg"),                                _if_conditional286) {
                                    # 512 "02transpile.c"
                                    buffer_append_str(clang_option_234,"-g ");
                                    # 513 "02transpile.c"
                                    come_debug_244=(_Bool)1;
                                }
                                else {
                                    # 557 "02transpile.c"
                                    # 515 "02transpile.c"
                                    if(_if_conditional287=charp_operator_equals(argv[i_247],"-common-header"),                                    _if_conditional287) {
                                        # 516 "02transpile.c"
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        # 557 "02transpile.c"
                                        # 518 "02transpile.c"
                                        if(_if_conditional288=charp_operator_equals(argv[i_247],"-original-position"),                                        _if_conditional288) {
                                            # 519 "02transpile.c"
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            # 557 "02transpile.c"
                                            # 521 "02transpile.c"
                                            if(_if_conditional289=string_operator_equals(((char*)(right_value333=charp_operator_load_range_element(argv[i_247],0,2))),"-O"),                                            right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional289) {
                                                # 522 "02transpile.c"
                                                buffer_append_str(clang_option_234,((char*)(right_value335=xsprintf(" \%s ",((char*)(right_value334=charp_to_string(argv[i_247])))))));
                                                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 523 "02transpile.c"
                                                come_debug_244=(_Bool)0;
                                            }
                                            else {
                                                # 557 "02transpile.c"
                                                # 525 "02transpile.c"
                                                if(_if_conditional290=string_operator_equals(((char*)(right_value336=charp_operator_load_range_element(argv[i_247],0,2))),"-D"),                                                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional290) {
                                                    # 526 "02transpile.c"
                                                    buffer_append_str(cpp_option_235,((char*)(right_value338=xsprintf(" \%s ",((char*)(right_value337=charp_to_string(argv[i_247])))))));
                                                    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 527 "02transpile.c"
                                                    buffer_append_str(clang_option_234,((char*)(right_value340=xsprintf(" \%s ",((char*)(right_value339=charp_to_string(argv[i_247])))))));
                                                    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 557 "02transpile.c"
                                                    # 529 "02transpile.c"
                                                    if(_if_conditional291=charp_operator_equals(argv[i_247],"-v"),                                                    _if_conditional291) {
                                                        # 530 "02transpile.c"
                                                        buffer_append_str(clang_option_234,"-v ");
                                                        # 531 "02transpile.c"
                                                        verbose_242=(_Bool)1;
                                                    }
                                                    else {
                                                        # 557 "02transpile.c"
                                                        # 533 "02transpile.c"
                                                        if(_if_conditional292=strlen(argv[i_247])>=2&&memcmp(argv[i_247],"-I",strlen("-I"))==0,                                                        _if_conditional292) {
                                                            # 534 "02transpile.c"
                                                            buffer_append_str(cpp_option_235,((char*)(right_value342=charp_operator_add(" ",((char*)(right_value341=charp_operator_add(argv[i_247]," ")))))));
                                                            right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 557 "02transpile.c"
                                                            # 536 "02transpile.c"
                                                            if(_if_conditional293=charp_operator_equals(argv[i_247],"-gdwarf-4"),                                                            _if_conditional293) {
                                                                # 537 "02transpile.c"
                                                                buffer_append_str(clang_option_234,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                # 557 "02transpile.c"
                                                                # 539 "02transpile.c"
                                                                if(_if_conditional294=charp_operator_equals(argv[i_247],"-s")||charp_operator_equals(argv[i_247],"-S"),                                                                _if_conditional294) {
                                                                    # 540 "02transpile.c"
                                                                    output_source_file_flag_240=(_Bool)1;
                                                                }
                                                                else {
                                                                    # 557 "02transpile.c"
                                                                    # 542 "02transpile.c"
                                                                    if(_if_conditional295=charp_operator_equals(argv[i_247],"-c"),                                                                    _if_conditional295) {
                                                                        # 543 "02transpile.c"
                                                                        output_object_file_238=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        # 557 "02transpile.c"
                                                                        # 545 "02transpile.c"
                                                                        if(_if_conditional296=charp_operator_equals(argv[i_247],"-E"),                                                                        _if_conditional296) {
                                                                            # 546 "02transpile.c"
                                                                            output_cpp_file_239=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 557 "02transpile.c"
                                                                            # 548 "02transpile.c"
                                                                            if(_if_conditional297=argv[i_247][0]==45,                                                                            _if_conditional297) {
                                                                                # 549 "02transpile.c"
                                                                                buffer_append_str(clang_option_234,((char*)(right_value343=charp_operator_add(argv[i_247]," "))));
                                                                                right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 557 "02transpile.c"
                                                                                # 551 "02transpile.c"
                                                                                if(_if_conditional298=strlen(argv[i_247])>2&&memcmp(argv[i_247]+strlen(argv[i_247])-2,".o",2)==0,                                                                                _if_conditional298) {
                                                                                    # 552 "02transpile.c"
                                                                                    list$1charph_push_back(object_files_237,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(argv[i_247])))));
                                                                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 555 "02transpile.c"
                                                                                    list$1charph_push_back(files_236,(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(argv[i_247])))));
                                                                                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        # 559 "02transpile.c"
        gComeDebug=come_debug_244;
        # 560 "02transpile.c"
        gComeMalloc=come_malloc_245;
        # 571 "02transpile.c"
        # 562 "02transpile.c"
        if(come_str_246) {
            # 569 "02transpile.c"
            # 563 "02transpile.c"
            if(gComeGC) {
                # 564 "02transpile.c"
                buffer_append_str(clang_option_234," -lneo-c-str-gc -lpcre ");
            }
            else {
                # 567 "02transpile.c"
                buffer_append_str(clang_option_234," -lneo-c-str -lpcre ");
            }
        }
        # 571 "02transpile.c"
        if(_and_conditional1=f_248=fopen(output_file_name_241,"w"),        _and_conditional1 == 0) {
            # 571 "02transpile.c"
            (come_push_stackframe("02transpile.c", 571, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        # 572 "02transpile.c"
        fclose(f_248);
        # 574 "02transpile.c"
        if(_or_conditional8=truncate(output_file_name_241,0),        _or_conditional8 != 0) {
            # 574 "02transpile.c"
            (come_push_stackframe("02transpile.c", 574, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        # 576 "02transpile.c"
        come_init_v5();
        # 578 "02transpile.c"
        tmp_file_249=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string("tmp-common-header"))));
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 580 "02transpile.c"
        system(((char*)(right_value353=xsprintf("cat \%s > \%s",((char*)(right_value351=string_to_string(((char*)(right_value350=list$1charph_join(files_236," ")))))),((char*)(right_value352=string_to_string(tmp_file_249)))))));
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 582 "02transpile.c"
        # 584 "02transpile.c"
        memset(&info_253,0,sizeof(struct sInfo));
        # 586 "02transpile.c"
        __dec_obj64=info_253.base_sname;
        info_253.base_sname=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(tmp_file_249))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 587 "02transpile.c"
        __dec_obj65=info_253.sname;
        info_253.sname=(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string(tmp_file_249))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 588 "02transpile.c"
        info_253.sline=1;
        # 589 "02transpile.c"
        info_253.err_num=0;
        # 590 "02transpile.c"
        __dec_obj66=info_253.clang_option;
        info_253.clang_option=(char*)come_increment_ref_count(((char*)(right_value356=buffer_to_string(clang_option_234))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 591 "02transpile.c"
        __dec_obj67=info_253.cpp_option;
        info_253.cpp_option=(char*)come_increment_ref_count(((char*)(right_value357=buffer_to_string(cpp_option_235))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 592 "02transpile.c"
        info_253.no_output_err=(_Bool)0;
        # 593 "02transpile.c"
        __dec_obj69=info_253.funcs;
        info_253.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value364=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value358=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 593, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value358,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value364,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 594 "02transpile.c"
        __dec_obj71=info_253.generics_funcs;
        info_253.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value371=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value365=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 594, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value365,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value371,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 595 "02transpile.c"
        __dec_obj73=info_253.classes;
        info_253.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value378=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value372=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 595, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value372,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value378,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 596 "02transpile.c"
        __dec_obj75=info_253.modules;
        info_253.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value385=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value379=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 596, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value379,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value385,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 597 "02transpile.c"
        __dec_obj77=info_253.types;
        info_253.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value392=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value386=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 597, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value386,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value392,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 598 "02transpile.c"
        __dec_obj78=info_253.module;
        info_253.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value394=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value393=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 598, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value393,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value394,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        # 599 "02transpile.c"
        __dec_obj79=info_253.right_value_objects;
        info_253.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value396=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value395=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 599, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value395,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value396,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 600 "02transpile.c"
        __dec_obj80=info_253.stack;
        info_253.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value398=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value397=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 600, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value397,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value398,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 601 "02transpile.c"
        __dec_obj81=info_253.gv_table;
        info_253.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value400=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value399=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 601, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value399,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value400,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 602 "02transpile.c"
        lv_table_289=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value402=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value401=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 602, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value401,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value402,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 603 "02transpile.c"
        info_253.lv_table=lv_table_289;
        # 604 "02transpile.c"
        __dec_obj82=info_253.generics_type_names;
        info_253.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 604, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value403,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value404,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 605 "02transpile.c"
        __dec_obj83=info_253.method_generics_type_names;
        info_253.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 605, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value405,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value406,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 606 "02transpile.c"
        __dec_obj84=info_253.generics_classes;
        info_253.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value408=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value407=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 606, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value407,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value408,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 607 "02transpile.c"
        info_253.verbose=verbose_242;
        # 608 "02transpile.c"
        info_253.output_header_file=(_Bool)1;
        # 610 "02transpile.c"
        # 611 "02transpile.c"
        info_253.num_source_files=n_290++;
        # 612 "02transpile.c"
        info_253.max_source_files=list$1charph_length(files_236);
        # 614 "02transpile.c"
        __dec_obj85=info_253.output_file_name;
        info_253.output_file_name=(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string(output_file_name_241))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 616 "02transpile.c"
        init_classes(&info_253);
        # 617 "02transpile.c"
        init_module(&info_253);
        # 619 "02transpile.c"
        clear_tmp_file(&info_253);
        # 626 "02transpile.c"
        # 621 "02transpile.c"
        if(_if_conditional385=!cpp(&info_253),        _if_conditional385) {
            # 622 "02transpile.c"
            printf("%s %d: transpile failed\n",info_253.sname,info_253.sline);
            # 623 "02transpile.c"
            exit(2);
        }
        # 626 "02transpile.c"
        __dec_obj86=info_253.original_source;
        info_253.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value412=string_to_buffer(((char*)(right_value411=string_read(((char*)(right_value410=xsprintf("%s",tmp_file_249))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value412,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 627 "02transpile.c"
        __dec_obj87=info_253.source;
        info_253.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value415=string_to_buffer(((char*)(right_value414=string_read(((char*)(right_value413=xsprintf("%s.i",tmp_file_249))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value415,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 628 "02transpile.c"
        info_253.p=info_253.source->buf;
        # 629 "02transpile.c"
        info_253.head=info_253.source->buf;
        # 640 "02transpile.c"
        # 631 "02transpile.c"
        if(_if_conditional386=!output_cpp_file_239,        _if_conditional386) {
            # 632 "02transpile.c"
            transpile_v5(&info_253);
            # 638 "02transpile.c"
            # 634 "02transpile.c"
            if(_if_conditional387=!output_header_file(&info_253),            _if_conditional387) {
                # 635 "02transpile.c"
                printf("%s %d: output source file faield\n",info_253.sname,info_253.sline);
                # 636 "02transpile.c"
                exit(2);
            }
        }
        # 640 "02transpile.c"
        system(((char*)(right_value417=xsprintf("rm -rf \%s*",((char*)(right_value416=string_to_string(tmp_file_249)))))));
        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 642 "02transpile.c"
        come_final_v5();
        come_call_finalizer3(clang_option_234,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_235,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_236,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_237,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_241 = come_decrement_ref_count2(output_file_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_249 = come_decrement_ref_count2(tmp_file_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_253),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_289,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 879 "02transpile.c"
        # 644 "02transpile.c"
        if(_if_conditional420=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional420) {
            # 648 "02transpile.c"
            # 645 "02transpile.c"
            if(_if_conditional421=!new_project(argc,argv),            _if_conditional421) {
                # 646 "02transpile.c"
                __result172__ = (_Bool)0;
                return __result172__;
            }
        }
        else {
            # 879 "02transpile.c"
            # 649 "02transpile.c"
            if(_if_conditional422=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional422) {
                # 653 "02transpile.c"
                # 650 "02transpile.c"
                if(_if_conditional423=!run_project(argc,argv),                _if_conditional423) {
                    # 651 "02transpile.c"
                    __result173__ = (_Bool)0;
                    return __result173__;
                }
            }
            else {
                # 879 "02transpile.c"
                # 654 "02transpile.c"
                if(_if_conditional424=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional424) {
                    # 658 "02transpile.c"
                    # 655 "02transpile.c"
                    if(_if_conditional425=!make_header_project(argc,argv),                    _if_conditional425) {
                        # 656 "02transpile.c"
                        __result174__ = (_Bool)0;
                        return __result174__;
                    }
                }
                else {
                    # 879 "02transpile.c"
                    # 659 "02transpile.c"
                    if(_if_conditional426=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional426) {
                        # 663 "02transpile.c"
                        # 660 "02transpile.c"
                        if(_if_conditional427=!compile_project(argc,argv),                        _if_conditional427) {
                            # 661 "02transpile.c"
                            __result175__ = (_Bool)0;
                            return __result175__;
                        }
                    }
                    else {
                        # 879 "02transpile.c"
                        # 664 "02transpile.c"
                        if(_if_conditional428=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional428) {
                            # 668 "02transpile.c"
                            # 665 "02transpile.c"
                            if(_if_conditional429=!debug_run_project(argc,argv),                            _if_conditional429) {
                                # 666 "02transpile.c"
                                __result176__ = (_Bool)0;
                                return __result176__;
                            }
                        }
                        else {
                            # 879 "02transpile.c"
                            # 669 "02transpile.c"
                            if(_if_conditional430=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional430) {
                                # 673 "02transpile.c"
                                # 670 "02transpile.c"
                                if(_if_conditional431=!clean_project(argc,argv),                                _if_conditional431) {
                                    # 671 "02transpile.c"
                                    __result177__ = (_Bool)0;
                                    return __result177__;
                                }
                            }
                            else {
                                # 879 "02transpile.c"
                                # 674 "02transpile.c"
                                if(_if_conditional432=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional432) {
                                    # 685 "02transpile.c"
                                    # 675 "02transpile.c"
                                    if(_if_conditional433=argc==2,                                    _if_conditional433) {
                                        # 679 "02transpile.c"
                                        # 676 "02transpile.c"
                                        if(_if_conditional434=!install_project(argc,argv,"/usr/local"),                                        _if_conditional434) {
                                            # 677 "02transpile.c"
                                            __result178__ = (_Bool)0;
                                            return __result178__;
                                        }
                                    }
                                    else {
                                        # 685 "02transpile.c"
                                        # 680 "02transpile.c"
                                        if(_if_conditional435=argc>=3,                                        _if_conditional435) {
                                            # 684 "02transpile.c"
                                            # 681 "02transpile.c"
                                            if(_if_conditional436=!install_project(argc,argv,argv[2]),                                            _if_conditional436) {
                                                # 682 "02transpile.c"
                                                __result179__ = (_Bool)0;
                                                return __result179__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 687 "02transpile.c"
                                    gProgramName=argv[0];
                                    # 689 "02transpile.c"
                                    clang_option_293=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value419=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 689, "buffer"))))))));
                                    come_call_finalizer3(right_value418,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value419,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 690 "02transpile.c"
                                    cpp_option_294=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value421=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value420=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 690, "buffer"))))))));
                                    come_call_finalizer3(right_value420,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value421,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 691 "02transpile.c"
                                    files_295=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value423=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value422=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 691, "list$1charph"))))))));
                                    come_call_finalizer3(right_value422,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value423,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 692 "02transpile.c"
                                    object_files_296=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value425=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value424=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 692, "list$1charph"))))))));
                                    come_call_finalizer3(right_value424,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value425,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 693 "02transpile.c"
                                    output_object_file_297=(_Bool)0;
                                    # 694 "02transpile.c"
                                    output_cpp_file_298=(_Bool)0;
                                    # 695 "02transpile.c"
                                    output_source_file_flag_299=(_Bool)0;
                                    # 696 "02transpile.c"
                                    output_file_name_300=((void*)0);
                                    # 697 "02transpile.c"
                                    verbose_301=(_Bool)0;
                                    # 698 "02transpile.c"
                                    come_debug_302=(_Bool)0;
                                    # 699 "02transpile.c"
                                    come_malloc_303=(_Bool)0;
                                    # 700 "02transpile.c"
                                    come_str_304=(_Bool)0;
                                    # 766 "02transpile.c"
                                    for(                                    i_305=1;                                    i_305<argc;                                    i_305++                                    ){
                                        # 764 "02transpile.c"
                                        # 702 "02transpile.c"
                                        if(_if_conditional437=charp_operator_equals(argv[i_305],"-o")&&i_305+1<argc,                                        _if_conditional437) {
                                            # 703 "02transpile.c"
                                            __dec_obj88=output_file_name_300;
                                            output_file_name_300=(char*)come_increment_ref_count(((char*)(right_value426=__builtin_string(argv[i_305+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 704 "02transpile.c"
                                            i_305++;
                                        }
                                        else {
                                            # 764 "02transpile.c"
                                            # 706 "02transpile.c"
                                            if(_if_conditional438=charp_operator_equals(argv[i_305],"-str"),                                            _if_conditional438) {
                                                # 707 "02transpile.c"
                                                come_str_304=(_Bool)1;
                                            }
                                            else {
                                                # 764 "02transpile.c"
                                                # 709 "02transpile.c"
                                                if(_if_conditional439=charp_operator_equals(argv[i_305],"-leak"),                                                _if_conditional439) {
                                                    # 710 "02transpile.c"
                                                    come_malloc_303=(_Bool)1;
                                                }
                                                else {
                                                    # 764 "02transpile.c"
                                                    # 712 "02transpile.c"
                                                    if(_if_conditional440=charp_operator_equals(argv[i_305],"-gc"),                                                    _if_conditional440) {
                                                        # 713 "02transpile.c"
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        # 764 "02transpile.c"
                                                        # 715 "02transpile.c"
                                                        if(_if_conditional441=charp_operator_equals(argv[i_305],"-cg"),                                                        _if_conditional441) {
                                                            # 716 "02transpile.c"
                                                            come_debug_302=(_Bool)1;
                                                            # 717 "02transpile.c"
                                                            buffer_append_str(clang_option_293,"-g ");
                                                        }
                                                        else {
                                                            # 764 "02transpile.c"
                                                            # 719 "02transpile.c"
                                                            if(_if_conditional442=charp_operator_equals(argv[i_305],"-common-header"),                                                            _if_conditional442) {
                                                                # 720 "02transpile.c"
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                # 764 "02transpile.c"
                                                                # 722 "02transpile.c"
                                                                if(_if_conditional443=charp_operator_equals(argv[i_305],"-original-position"),                                                                _if_conditional443) {
                                                                    # 723 "02transpile.c"
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    # 764 "02transpile.c"
                                                                    # 725 "02transpile.c"
                                                                    if(_if_conditional444=string_operator_equals(((char*)(right_value427=charp_operator_load_range_element(argv[i_305],0,2))),"-O"),                                                                    right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                    _if_conditional444) {
                                                                        # 726 "02transpile.c"
                                                                        buffer_append_str(clang_option_293,((char*)(right_value429=xsprintf(" \%s ",((char*)(right_value428=charp_to_string(argv[i_305])))))));
                                                                        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 727 "02transpile.c"
                                                                        come_debug_302=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        # 764 "02transpile.c"
                                                                        # 729 "02transpile.c"
                                                                        if(_if_conditional445=string_operator_equals(((char*)(right_value430=charp_operator_load_range_element(argv[i_305],0,2))),"-D"),                                                                        right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional445) {
                                                                            # 730 "02transpile.c"
                                                                            buffer_append_str(cpp_option_294,((char*)(right_value432=xsprintf(" \%s ",((char*)(right_value431=charp_to_string(argv[i_305])))))));
                                                                            right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 731 "02transpile.c"
                                                                            buffer_append_str(clang_option_293,((char*)(right_value434=xsprintf(" \%s ",((char*)(right_value433=charp_to_string(argv[i_305])))))));
                                                                            right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 764 "02transpile.c"
                                                                            # 733 "02transpile.c"
                                                                            if(_if_conditional446=charp_operator_equals(argv[i_305],"-g"),                                                                            _if_conditional446) {
                                                                                # 734 "02transpile.c"
                                                                                buffer_append_str(clang_option_293,"-g ");
                                                                            }
                                                                            else {
                                                                                # 764 "02transpile.c"
                                                                                # 736 "02transpile.c"
                                                                                if(_if_conditional447=charp_operator_equals(argv[i_305],"-v"),                                                                                _if_conditional447) {
                                                                                    # 737 "02transpile.c"
                                                                                    buffer_append_str(clang_option_293,"-v ");
                                                                                    # 738 "02transpile.c"
                                                                                    verbose_301=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 764 "02transpile.c"
                                                                                    # 740 "02transpile.c"
                                                                                    if(_if_conditional448=strlen(argv[i_305])>=2&&memcmp(argv[i_305],"-I",strlen("-I"))==0,                                                                                    _if_conditional448) {
                                                                                        # 741 "02transpile.c"
                                                                                        buffer_append_str(cpp_option_294,((char*)(right_value436=charp_operator_add(" ",((char*)(right_value435=charp_operator_add(argv[i_305]," ")))))));
                                                                                        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        # 764 "02transpile.c"
                                                                                        # 743 "02transpile.c"
                                                                                        if(_if_conditional449=charp_operator_equals(argv[i_305],"-gdwarf-4"),                                                                                        _if_conditional449) {
                                                                                            # 744 "02transpile.c"
                                                                                            buffer_append_str(clang_option_293,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            # 764 "02transpile.c"
                                                                                            # 746 "02transpile.c"
                                                                                            if(_if_conditional450=charp_operator_equals(argv[i_305],"-s")||charp_operator_equals(argv[i_305],"-S"),                                                                                            _if_conditional450) {
                                                                                                # 747 "02transpile.c"
                                                                                                output_source_file_flag_299=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                # 764 "02transpile.c"
                                                                                                # 749 "02transpile.c"
                                                                                                if(_if_conditional451=charp_operator_equals(argv[i_305],"-c"),                                                                                                _if_conditional451) {
                                                                                                    # 750 "02transpile.c"
                                                                                                    output_object_file_297=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    # 764 "02transpile.c"
                                                                                                    # 752 "02transpile.c"
                                                                                                    if(_if_conditional452=charp_operator_equals(argv[i_305],"-E"),                                                                                                    _if_conditional452) {
                                                                                                        # 753 "02transpile.c"
                                                                                                        output_cpp_file_298=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 764 "02transpile.c"
                                                                                                        # 755 "02transpile.c"
                                                                                                        if(_if_conditional453=argv[i_305][0]==45,                                                                                                        _if_conditional453) {
                                                                                                            # 756 "02transpile.c"
                                                                                                            buffer_append_str(clang_option_293,((char*)(right_value437=charp_operator_add(argv[i_305]," "))));
                                                                                                            right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        else {
                                                                                                            # 764 "02transpile.c"
                                                                                                            # 758 "02transpile.c"
                                                                                                            if(_if_conditional454=strlen(argv[i_305])>2&&memcmp(argv[i_305]+strlen(argv[i_305])-2,".o",2)==0,                                                                                                            _if_conditional454) {
                                                                                                                # 759 "02transpile.c"
                                                                                                                list$1charph_push_back(object_files_296,(char*)come_increment_ref_count(((char*)(right_value438=__builtin_string(argv[i_305])))));
                                                                                                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                # 762 "02transpile.c"
                                                                                                                list$1charph_push_back(files_295,(char*)come_increment_ref_count(((char*)(right_value440=string_clone(((char*)(right_value439=__builtin_string(argv[i_305]))))))));
                                                                                                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                                    # 766 "02transpile.c"
                                    gComeDebug=come_debug_302;
                                    # 767 "02transpile.c"
                                    gComeMalloc=come_malloc_303;
                                    # 778 "02transpile.c"
                                    # 769 "02transpile.c"
                                    if(come_str_304) {
                                        # 776 "02transpile.c"
                                        # 770 "02transpile.c"
                                        if(gComeGC) {
                                            # 771 "02transpile.c"
                                            buffer_append_str(clang_option_293," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            # 774 "02transpile.c"
                                            buffer_append_str(clang_option_293," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    # 778 "02transpile.c"
                                    come_init_v5();
                                    # 853 "02transpile.c"
                                    for(                                    o2_saved_306=(struct list$1charph*)come_increment_ref_count((files_295)),it_307=list$1charph_begin((o2_saved_306));                                    !list$1charph_end((o2_saved_306));                                    it_307=list$1charph_next((o2_saved_306))                                    ){
                                        # 781 "02transpile.c"
                                        # 783 "02transpile.c"
                                        memset(&info_308,0,sizeof(struct sInfo));
                                        # 785 "02transpile.c"
                                        __dec_obj89=info_308.sname;
                                        info_308.sname=(char*)come_increment_ref_count(((char*)(right_value441=__builtin_string(it_307))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 786 "02transpile.c"
                                        info_308.sline=1;
                                        # 787 "02transpile.c"
                                        info_308.err_num=0;
                                        # 788 "02transpile.c"
                                        __dec_obj90=info_308.clang_option;
                                        info_308.clang_option=(char*)come_increment_ref_count(((char*)(right_value442=buffer_to_string(clang_option_293))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 789 "02transpile.c"
                                        __dec_obj91=info_308.cpp_option;
                                        info_308.cpp_option=(char*)come_increment_ref_count(((char*)(right_value443=buffer_to_string(cpp_option_294))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 790 "02transpile.c"
                                        info_308.no_output_err=(_Bool)0;
                                        # 791 "02transpile.c"
                                        __dec_obj92=info_308.funcs;
                                        info_308.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value445=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value444=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 791, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value444,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value445,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 792 "02transpile.c"
                                        __dec_obj93=info_308.generics_funcs;
                                        info_308.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value447=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value446=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 792, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value446,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value447,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 793 "02transpile.c"
                                        __dec_obj94=info_308.classes;
                                        info_308.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value449=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value448=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 793, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value448,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value449,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 794 "02transpile.c"
                                        __dec_obj95=info_308.modules;
                                        info_308.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value451=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value450=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 794, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value450,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value451,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 795 "02transpile.c"
                                        __dec_obj96=info_308.types;
                                        info_308.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value453=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value452=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 795, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value452,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value453,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 796 "02transpile.c"
                                        __dec_obj97=info_308.module;
                                        info_308.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value455=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value454=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 796, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value454,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value455,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 797 "02transpile.c"
                                        __dec_obj98=info_308.right_value_objects;
                                        info_308.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value457=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value456=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 797, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value456,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value457,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 798 "02transpile.c"
                                        __dec_obj99=info_308.stack;
                                        info_308.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value459=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value458=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 798, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value458,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value459,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 799 "02transpile.c"
                                        __dec_obj100=info_308.gv_table;
                                        info_308.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value461=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value460=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 799, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value460,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value461,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 800 "02transpile.c"
                                        lv_table_309=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value463=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value462=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 800, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value462,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value463,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 801 "02transpile.c"
                                        info_308.lv_table=lv_table_309;
                                        # 802 "02transpile.c"
                                        __dec_obj101=info_308.generics_type_names;
                                        info_308.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value465=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value464=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 802, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value464,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value465,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 803 "02transpile.c"
                                        __dec_obj102=info_308.method_generics_type_names;
                                        info_308.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value467=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value466=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 803, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value466,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 804 "02transpile.c"
                                        __dec_obj103=info_308.generics_classes;
                                        info_308.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value469=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value468=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 804, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value468,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value469,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 805 "02transpile.c"
                                        info_308.verbose=verbose_301;
                                        # 807 "02transpile.c"
                                        init_classes(&info_308);
                                        # 808 "02transpile.c"
                                        init_module(&info_308);
                                        # 810 "02transpile.c"
                                        clear_tmp_file(&info_308);
                                        # 817 "02transpile.c"
                                        # 812 "02transpile.c"
                                        if(_if_conditional457=!cpp(&info_308),                                        _if_conditional457) {
                                            # 813 "02transpile.c"
                                            printf("%s %d: transpile failed\n",info_308.sname,info_308.sline);
                                            # 814 "02transpile.c"
                                            exit(2);
                                        }
                                        # 817 "02transpile.c"
                                        __dec_obj104=info_308.original_source;
                                        info_308.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value472=string_to_buffer(((char*)(right_value471=string_read(((char*)(right_value470=xsprintf("%s",it_307))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value472,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 818 "02transpile.c"
                                        __dec_obj105=info_308.source;
                                        info_308.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value475=string_to_buffer(((char*)(right_value474=string_read(((char*)(right_value473=xsprintf("%s.i",it_307))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value475,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 819 "02transpile.c"
                                        info_308.p=info_308.source->buf;
                                        # 820 "02transpile.c"
                                        info_308.head=info_308.source->buf;
                                        # 829 "02transpile.c"
                                        # 822 "02transpile.c"
                                        if(output_file_name_300) {
                                            # 823 "02transpile.c"
                                            __dec_obj106=info_308.output_file_name;
                                            info_308.output_file_name=(char*)come_increment_ref_count(((char*)(right_value476=__builtin_string(output_file_name_300))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 826 "02transpile.c"
                                            __dec_obj107=info_308.output_file_name;
                                            info_308.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 851 "02transpile.c"
                                        # 829 "02transpile.c"
                                        if(_if_conditional459=!output_cpp_file_298,                                        _if_conditional459) {
                                            # 830 "02transpile.c"
                                            transpile_v5(&info_308);
                                            # 837 "02transpile.c"
                                            # 832 "02transpile.c"
                                            if(_if_conditional460=!output_source_file_v3(&info_308),                                            _if_conditional460) {
                                                # 833 "02transpile.c"
                                                printf("%s %d: output source file faield\n",info_308.sname,info_308.sline);
                                                # 834 "02transpile.c"
                                                exit(2);
                                            }
                                            # 850 "02transpile.c"
                                            # 837 "02transpile.c"
                                            if(_if_conditional461=info_308.err_num>0,                                            _if_conditional461) {
                                                # 838 "02transpile.c"
                                                printf("transpile error. err num %d\n",info_308.err_num);
                                                # 840 "02transpile.c"
                                                exit(2);
                                            }
                                            else {
                                                # 848 "02transpile.c"
                                                # 843 "02transpile.c"
                                                if(_if_conditional462=!compile(&info_308,output_object_file_297,object_files_296),                                                _if_conditional462) {
                                                    # 844 "02transpile.c"
                                                    printf("%s %d: compile faield\n",info_308.sname,info_308.sline);
                                                    # 845 "02transpile.c"
                                                    exit(27);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_308),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_309,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_306,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 875 "02transpile.c"
                                    # 853 "02transpile.c"
                                    if(_if_conditional463=!output_object_file_297&&!output_cpp_file_298&&(list$1charph_length(files_295)>0||list$1charph_length(object_files_296)>0),                                    _if_conditional463) {
                                        # 854 "02transpile.c"
                                        # 856 "02transpile.c"
                                        memset(&info_310,0,sizeof(struct sInfo));
                                        # 858 "02transpile.c"
                                        __dec_obj108=info_310.sname;
                                        info_310.sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(list$1charphp_operator_load_element(files_295,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 859 "02transpile.c"
                                        __dec_obj109=info_310.clang_option;
                                        info_310.clang_option=(char*)come_increment_ref_count(((char*)(right_value478=buffer_to_string(clang_option_293))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 860 "02transpile.c"
                                        info_310.verbose=verbose_301;
                                        # 869 "02transpile.c"
                                        # 862 "02transpile.c"
                                        if(output_file_name_300) {
                                            # 863 "02transpile.c"
                                            __dec_obj110=info_310.output_file_name;
                                            info_310.output_file_name=(char*)come_increment_ref_count(((char*)(right_value479=__builtin_string(output_file_name_300))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 866 "02transpile.c"
                                            __dec_obj111=info_310.output_file_name;
                                            info_310.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 873 "02transpile.c"
                                        __current_stack2__.info_310 = &info_310;
                                        __current_stack2__.clang_option_293 = &clang_option_293;
                                        __current_stack2__.cpp_option_294 = &cpp_option_294;
                                        __current_stack2__.files_295 = &files_295;
                                        __current_stack2__.object_files_296 = &object_files_296;
                                        __current_stack2__.output_object_file_297 = &output_object_file_297;
                                        __current_stack2__.output_cpp_file_298 = &output_cpp_file_298;
                                        __current_stack2__.output_source_file_flag_299 = &output_source_file_flag_299;
                                        __current_stack2__.output_file_name_300 = &output_file_name_300;
                                        __current_stack2__.verbose_301 = &verbose_301;
                                        __current_stack2__.come_debug_302 = &come_debug_302;
                                        __current_stack2__.come_malloc_303 = &come_malloc_303;
                                        __current_stack2__.come_str_304 = &come_str_304;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_310,object_files_296),&__current_stack2__,(void*)method_block2_02transpilec);
                                        come_call_finalizer3((&info_310),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    # 875 "02transpile.c"
                                    come_final_v5();
                                    come_call_finalizer3(clang_option_293,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_294,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_295,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_296,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_300 = come_decrement_ref_count2(output_file_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 879 "02transpile.c"
    __result182__ = 0;
    return __result182__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value347;
void* right_value348;
struct buffer* buf_250;
int n_251;
char* it_252;
_Bool _if_conditional302;
void* right_value349;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&buf_250, 0, sizeof(struct buffer*));
memset(&n_251, 0, sizeof(int));
memset(&it_252, 0, sizeof(char*));
right_value349 = (void*)0;
            # 1022 "./neo-c.h"
            buf_250=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value348=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1022, "buffer"))))))));
            come_call_finalizer3(right_value347,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value348,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1024 "./neo-c.h"
            n_251=0;
            # 1035 "./neo-c.h"
            for(            it_252=list$1charph_begin(self);            !list$1charph_end(self);            it_252=list$1charph_next(self)            ){
                # 1026 "./neo-c.h"
                buffer_append_str(buf_250,it_252);
                # 1032 "./neo-c.h"
                # 1028 "./neo-c.h"
                if(_if_conditional302=n_251<list$1charph_length(self)-1,                _if_conditional302) {
                    # 1029 "./neo-c.h"
                    buffer_append_str(buf_250,sep);
                }
                # 1032 "./neo-c.h"
                n_251++;
            }
            # 1035 "./neo-c.h"
            __result163__ = __result_obj__ = ((char*)(right_value349=buffer_to_string(buf_250)));
            come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result163__;
            come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional301;
int __result161__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 354 "./neo-c.h"
                    # 351 "./neo-c.h"
                    if(_if_conditional301=self==((void*)0),                    _if_conditional301) {
                        # 352 "./neo-c.h"
                        __result161__ = 0;
                        return __result161__;
                    }
                    # 354 "./neo-c.h"
                    __result162__ = self->len;
                    return __result162__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value359;
void* right_value360;
void* right_value361;
int i_254;
void* right_value362;
void* right_value363;
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&i_254, 0, sizeof(int));
right_value362 = (void*)0;
right_value363 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value359=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value360=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1063, "sFun*%"))));
            come_call_finalizer3(right_value360,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value361=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_254=0;            i_254<128;            i_254++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_254]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value363=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value362=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value362,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value363,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result165__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result165__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sFun_finalize"
                # 0 "sFun_finalize"
                if(_if_conditional303=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional303) {
                    # 0 "sFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sFun_finalize"
                # 1 "sFun_finalize"
                if(_if_conditional304=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional304) {
                    # 1 "sFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sFun_finalize"
                # 2 "sFun_finalize"
                if(_if_conditional305=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional305) {
                    # 2 "sFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sFun_finalize"
                # 3 "sFun_finalize"
                if(_if_conditional306=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional306) {
                    # 3 "sFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 5 "sFun_finalize"
                # 4 "sFun_finalize"
                if(_if_conditional307=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional307) {
                    # 4 "sFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sFun_finalize"
                # 5 "sFun_finalize"
                if(_if_conditional308=self!=((void*)0)&&self->mLambdaType!=((void*)0),                _if_conditional308) {
                    # 5 "sFun_finalize"
                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sFun_finalize"
                # 6 "sFun_finalize"
                if(_if_conditional309=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional309) {
                    # 6 "sFun_finalize"
                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sFun_finalize"
                # 7 "sFun_finalize"
                if(_if_conditional312=self!=((void*)0)&&self->mSource!=((void*)0),                _if_conditional312) {
                    # 7 "sFun_finalize"
                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sFun_finalize"
                # 8 "sFun_finalize"
                if(_if_conditional313=self!=((void*)0)&&self->mSourceHead!=((void*)0),                _if_conditional313) {
                    # 8 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sFun_finalize"
                # 9 "sFun_finalize"
                if(_if_conditional314=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                _if_conditional314) {
                    # 9 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 11 "sFun_finalize"
                # 10 "sFun_finalize"
                if(_if_conditional315=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                _if_conditional315) {
                    # 10 "sFun_finalize"
                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 12 "sFun_finalize"
                # 11 "sFun_finalize"
                if(_if_conditional316=self!=((void*)0)&&self->mComeHeader!=((void*)0),                _if_conditional316) {
                    # 11 "sFun_finalize"
                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sFun_finalize"
                # 12 "sFun_finalize"
                if(_if_conditional317=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional317) {
                    # 12 "sFun_finalize"
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sBlock_finalize"
                        # 0 "sBlock_finalize"
                        if(_if_conditional310=self!=((void*)0)&&self->mNodes!=((void*)0),                        _if_conditional310) {
                            # 0 "sBlock_finalize"
                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sBlock_finalize"
                        # 1 "sBlock_finalize"
                        if(_if_conditional311=self!=((void*)0)&&self->mVarTable!=((void*)0),                        _if_conditional311) {
                            # 1 "sBlock_finalize"
                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "./neo-c.h"
                self->head=((void*)0);
                # 96 "./neo-c.h"
                self->tail=((void*)0);
                # 97 "./neo-c.h"
                self->len=0;
                # 99 "./neo-c.h"
                __result164__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result164__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_255;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_256;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_255, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_256, 0, sizeof(struct list_item$1charp*));
                    # 114 "./neo-c.h"
                    it_255=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional33=it_255!=((void*)0),                    _while_condtional33) {
                        # 116 "./neo-c.h"
                        prev_it_256=it_255;
                        # 117 "./neo-c.h"
                        it_255=it_255->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_256,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_257;
_Bool _if_conditional318;
_Bool _if_conditional319;
int i_258;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_257=0;                i_257<self->size;                i_257++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional318=self->item_existance[i_257],                    _if_conditional318) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional319=1,                        _if_conditional319) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_257],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_258=0;                i_258<self->size;                i_258++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional320=self->item_existance[i_258],                    _if_conditional320) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional321=1,                        _if_conditional321) {
                            # 1117 "./neo-c.h"
                            self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_259;
_Bool _if_conditional322;
_Bool _if_conditional323;
int i_260;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_259, 0, sizeof(int));
memset(&i_260, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_259=0;            i_259<self->size;            i_259++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional322=self->item_existance[i_259],                _if_conditional322) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional323=1,                    _if_conditional323) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_259],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_260=0;            i_260<self->size;            i_260++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional324=self->item_existance[i_260],                _if_conditional324) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional325=1,                    _if_conditional325) {
                        # 1117 "./neo-c.h"
                        self->keys[i_260] = come_decrement_ref_count2(self->keys[i_260], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value366;
void* right_value367;
void* right_value368;
int i_261;
void* right_value369;
void* right_value370;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&i_261, 0, sizeof(int));
right_value369 = (void*)0;
right_value370 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value366=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value367=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1063, "sGenericsFun*%"))));
            come_call_finalizer3(right_value367,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value368=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_261=0;            i_261<128;            i_261++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_261]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value370=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value369=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value369,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value370,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result166__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result166__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sGenericsFun_finalize"
                # 0 "sGenericsFun_finalize"
                if(_if_conditional326=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional326) {
                    # 0 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sGenericsFun_finalize"
                # 1 "sGenericsFun_finalize"
                if(_if_conditional327=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional327) {
                    # 1 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sGenericsFun_finalize"
                # 2 "sGenericsFun_finalize"
                if(_if_conditional328=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional328) {
                    # 2 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sGenericsFun_finalize"
                # 3 "sGenericsFun_finalize"
                if(_if_conditional329=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional329) {
                    # 3 "sGenericsFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sGenericsFun_finalize"
                # 4 "sGenericsFun_finalize"
                if(_if_conditional330=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional330) {
                    # 4 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sGenericsFun_finalize"
                # 5 "sGenericsFun_finalize"
                if(_if_conditional331=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional331) {
                    # 5 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sGenericsFun_finalize"
                # 6 "sGenericsFun_finalize"
                if(_if_conditional332=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional332) {
                    # 6 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sGenericsFun_finalize"
                # 7 "sGenericsFun_finalize"
                if(_if_conditional333=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional333) {
                    # 7 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sGenericsFun_finalize"
                # 8 "sGenericsFun_finalize"
                if(_if_conditional334=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional334) {
                    # 8 "sGenericsFun_finalize"
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 10 "sGenericsFun_finalize"
                # 9 "sGenericsFun_finalize"
                if(_if_conditional335=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional335) {
                    # 9 "sGenericsFun_finalize"
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_262;
_Bool _if_conditional336;
_Bool _if_conditional337;
int i_263;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_262=0;                i_262<self->size;                i_262++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional336=self->item_existance[i_262],                    _if_conditional336) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional337=1,                        _if_conditional337) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_262],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_263=0;                i_263<self->size;                i_263++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional338=self->item_existance[i_263],                    _if_conditional338) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional339=1,                        _if_conditional339) {
                            # 1117 "./neo-c.h"
                            self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_264;
_Bool _if_conditional340;
_Bool _if_conditional341;
int i_265;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_264, 0, sizeof(int));
memset(&i_265, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_264=0;            i_264<self->size;            i_264++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional340=self->item_existance[i_264],                _if_conditional340) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional341=1,                    _if_conditional341) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_264],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_265=0;            i_265<self->size;            i_265++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional342=self->item_existance[i_265],                _if_conditional342) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional343=1,                    _if_conditional343) {
                        # 1117 "./neo-c.h"
                        self->keys[i_265] = come_decrement_ref_count2(self->keys[i_265], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value373;
void* right_value374;
void* right_value375;
int i_266;
void* right_value376;
void* right_value377;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&i_266, 0, sizeof(int));
right_value376 = (void*)0;
right_value377 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value373=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value374=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1063, "sClass*%"))));
            come_call_finalizer3(right_value374,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value375=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_266=0;            i_266<128;            i_266++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_266]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value377=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value376=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value376,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value377,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result167__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result167__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_267;
_Bool _if_conditional344;
_Bool _if_conditional345;
int i_268;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_267, 0, sizeof(int));
memset(&i_268, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_267=0;                i_267<self->size;                i_267++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional344=self->item_existance[i_267],                    _if_conditional344) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional345=1,                        _if_conditional345) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_267],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_268=0;                i_268<self->size;                i_268++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional346=self->item_existance[i_268],                    _if_conditional346) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional347=1,                        _if_conditional347) {
                            # 1117 "./neo-c.h"
                            self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_269;
_Bool _if_conditional348;
_Bool _if_conditional349;
int i_270;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_269, 0, sizeof(int));
memset(&i_270, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_269=0;            i_269<self->size;            i_269++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional348=self->item_existance[i_269],                _if_conditional348) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional349=1,                    _if_conditional349) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_269],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_270=0;            i_270<self->size;            i_270++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional350=self->item_existance[i_270],                _if_conditional350) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional351=1,                    _if_conditional351) {
                        # 1117 "./neo-c.h"
                        self->keys[i_270] = come_decrement_ref_count2(self->keys[i_270], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value380;
void* right_value381;
void* right_value382;
int i_271;
void* right_value383;
void* right_value384;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&i_271, 0, sizeof(int));
right_value383 = (void*)0;
right_value384 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value380=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value381=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1063, "sClassModule*%"))));
            come_call_finalizer3(right_value381,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value382=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_271=0;            i_271<128;            i_271++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_271]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value384=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value383=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value383,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value384,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result168__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result168__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sClassModule_finalize"
                # 0 "sClassModule_finalize"
                if(_if_conditional352=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional352) {
                    # 0 "sClassModule_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sClassModule_finalize"
                # 1 "sClassModule_finalize"
                if(_if_conditional353=self!=((void*)0)&&self->mText!=((void*)0),                _if_conditional353) {
                    # 1 "sClassModule_finalize"
                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 3 "sClassModule_finalize"
                # 2 "sClassModule_finalize"
                if(_if_conditional354=self!=((void*)0)&&self->mParams!=((void*)0),                _if_conditional354) {
                    # 2 "sClassModule_finalize"
                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sClassModule_finalize"
                # 3 "sClassModule_finalize"
                if(_if_conditional355=self!=((void*)0)&&self->mSName!=((void*)0),                _if_conditional355) {
                    # 3 "sClassModule_finalize"
                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_272;
_Bool _if_conditional356;
_Bool _if_conditional357;
int i_273;
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_272, 0, sizeof(int));
memset(&i_273, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_272=0;                i_272<self->size;                i_272++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional356=self->item_existance[i_272],                    _if_conditional356) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional357=1,                        _if_conditional357) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_272],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_273=0;                i_273<self->size;                i_273++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional358=self->item_existance[i_273],                    _if_conditional358) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional359=1,                        _if_conditional359) {
                            # 1117 "./neo-c.h"
                            self->keys[i_273] = come_decrement_ref_count2(self->keys[i_273], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_274;
_Bool _if_conditional360;
_Bool _if_conditional361;
int i_275;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_274=0;            i_274<self->size;            i_274++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional360=self->item_existance[i_274],                _if_conditional360) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional361=1,                    _if_conditional361) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_274],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_275=0;            i_275<self->size;            i_275++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional362=self->item_existance[i_275],                _if_conditional362) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional363=1,                    _if_conditional363) {
                        # 1117 "./neo-c.h"
                        self->keys[i_275] = come_decrement_ref_count2(self->keys[i_275], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value387;
void* right_value388;
void* right_value389;
int i_276;
void* right_value390;
void* right_value391;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&i_276, 0, sizeof(int));
right_value390 = (void*)0;
right_value391 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value387=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value388=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1063, "sType*%"))));
            come_call_finalizer3(right_value388,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value389=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_276=0;            i_276<128;            i_276++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_276]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value391=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value390=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value390,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value391,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result169__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result169__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_277;
_Bool _if_conditional364;
_Bool _if_conditional365;
int i_278;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_277, 0, sizeof(int));
memset(&i_278, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_277=0;                i_277<self->size;                i_277++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional364=self->item_existance[i_277],                    _if_conditional364) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional365=1,                        _if_conditional365) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_277],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_278=0;                i_278<self->size;                i_278++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional366=self->item_existance[i_278],                    _if_conditional366) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional367=1,                        _if_conditional367) {
                            # 1117 "./neo-c.h"
                            self->keys[i_278] = come_decrement_ref_count2(self->keys[i_278], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_279;
_Bool _if_conditional368;
_Bool _if_conditional369;
int i_280;
_Bool _if_conditional370;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_279, 0, sizeof(int));
memset(&i_280, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_279=0;            i_279<self->size;            i_279++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional368=self->item_existance[i_279],                _if_conditional368) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional369=1,                    _if_conditional369) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_279],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_280=0;            i_280<self->size;            i_280++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional370=self->item_existance[i_280],                _if_conditional370) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional371=1,                    _if_conditional371) {
                        # 1117 "./neo-c.h"
                        self->keys[i_280] = come_decrement_ref_count2(self->keys[i_280], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sModule_finalize"
            # 0 "sModule_finalize"
            if(_if_conditional372=self!=((void*)0)&&self->mSourceHead!=((void*)0),            _if_conditional372) {
                # 0 "sModule_finalize"
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sModule_finalize"
            # 1 "sModule_finalize"
            if(_if_conditional373=self!=((void*)0)&&self->mSource!=((void*)0),            _if_conditional373) {
                # 1 "sModule_finalize"
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sModule_finalize"
            # 2 "sModule_finalize"
            if(_if_conditional374=self!=((void*)0)&&self->mLastCode!=((void*)0),            _if_conditional374) {
                # 2 "sModule_finalize"
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sModule_finalize"
            # 3 "sModule_finalize"
            if(_if_conditional375=self!=((void*)0)&&self->mLastCode2!=((void*)0),            _if_conditional375) {
                # 3 "sModule_finalize"
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sModule_finalize"
            # 4 "sModule_finalize"
            if(_if_conditional376=self!=((void*)0)&&self->mLastCode3!=((void*)0),            _if_conditional376) {
                # 4 "sModule_finalize"
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sModule_finalize"
            # 5 "sModule_finalize"
            if(_if_conditional377=self!=((void*)0)&&self->mHeader!=((void*)0),            _if_conditional377) {
                # 5 "sModule_finalize"
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result170__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result170__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_281;
_Bool _while_condtional34;
struct list_item$1sRightValueObjectph* prev_it_282;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_281, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_282, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 114 "./neo-c.h"
                it_281=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional34=it_281!=((void*)0),                _while_condtional34) {
                    # 116 "./neo-c.h"
                    prev_it_282=it_281;
                    # 117 "./neo-c.h"
                    it_281=it_281->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_282,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sRightValueObjectphp_finalize"
                        # 0 "list_item$1sRightValueObjectphp_finalize"
                        if(_if_conditional378=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional378) {
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sRightValueObject_finalize"
                                # 0 "sRightValueObject_finalize"
                                if(_if_conditional379=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional379) {
                                    # 0 "sRightValueObject_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sRightValueObject_finalize"
                                # 1 "sRightValueObject_finalize"
                                if(_if_conditional380=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional380) {
                                    # 1 "sRightValueObject_finalize"
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sRightValueObject_finalize"
                                # 2 "sRightValueObject_finalize"
                                if(_if_conditional381=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional381) {
                                    # 2 "sRightValueObject_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_283;
_Bool _while_condtional35;
struct list_item$1sRightValueObjectph* prev_it_284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_283, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_284, 0, sizeof(struct list_item$1sRightValueObjectph*));
            # 114 "./neo-c.h"
            it_283=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional35=it_283!=((void*)0),            _while_condtional35) {
                # 116 "./neo-c.h"
                prev_it_284=it_283;
                # 117 "./neo-c.h"
                it_283=it_283->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_284,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result171__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result171__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_285;
_Bool _while_condtional36;
struct list_item$1CVALUEph* prev_it_286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_285, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_286, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "./neo-c.h"
                it_285=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional36=it_285!=((void*)0),                _while_condtional36) {
                    # 116 "./neo-c.h"
                    prev_it_286=it_285;
                    # 117 "./neo-c.h"
                    it_285=it_285->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_286,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional382=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional382) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional383=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional383) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional384=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional384) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_287;
_Bool _while_condtional37;
struct list_item$1CVALUEph* prev_it_288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_287, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_288, 0, sizeof(struct list_item$1CVALUEph*));
            # 114 "./neo-c.h"
            it_287=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional37=it_287!=((void*)0),            _while_condtional37) {
                # 116 "./neo-c.h"
                prev_it_288=it_287;
                # 117 "./neo-c.h"
                it_287=it_287->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_288,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
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
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInfo_finalize"
            # 0 "sInfo_finalize"
            if(_if_conditional388=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional388) {
                # 0 "sInfo_finalize"
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sInfo_finalize"
            # 1 "sInfo_finalize"
            if(_if_conditional389=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional389) {
                # 1 "sInfo_finalize"
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInfo_finalize"
            # 2 "sInfo_finalize"
            if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional390) {
                # 2 "sInfo_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sInfo_finalize"
            # 3 "sInfo_finalize"
            if(_if_conditional391=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional391) {
                # 3 "sInfo_finalize"
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sInfo_finalize"
            # 4 "sInfo_finalize"
            if(_if_conditional392=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional392) {
                # 4 "sInfo_finalize"
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sInfo_finalize"
            # 5 "sInfo_finalize"
            if(_if_conditional393=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional393) {
                # 5 "sInfo_finalize"
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 7 "sInfo_finalize"
            # 6 "sInfo_finalize"
            if(_if_conditional394=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional394) {
                # 6 "sInfo_finalize"
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 8 "sInfo_finalize"
            # 7 "sInfo_finalize"
            if(_if_conditional395=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional395) {
                # 7 "sInfo_finalize"
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 9 "sInfo_finalize"
            # 8 "sInfo_finalize"
            if(_if_conditional396=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional396) {
                # 8 "sInfo_finalize"
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sInfo_finalize"
            # 9 "sInfo_finalize"
            if(_if_conditional397=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional397) {
                # 9 "sInfo_finalize"
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 11 "sInfo_finalize"
            # 10 "sInfo_finalize"
            if(_if_conditional398=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional398) {
                # 10 "sInfo_finalize"
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 12 "sInfo_finalize"
            # 11 "sInfo_finalize"
            if(_if_conditional399=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional399) {
                # 11 "sInfo_finalize"
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 13 "sInfo_finalize"
            # 12 "sInfo_finalize"
            if(_if_conditional400=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional400) {
                # 12 "sInfo_finalize"
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 14 "sInfo_finalize"
            # 13 "sInfo_finalize"
            if(_if_conditional401=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional401) {
                # 13 "sInfo_finalize"
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 15 "sInfo_finalize"
            # 14 "sInfo_finalize"
            if(_if_conditional402=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional402) {
                # 14 "sInfo_finalize"
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 16 "sInfo_finalize"
            # 15 "sInfo_finalize"
            if(_if_conditional403=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional403) {
                # 15 "sInfo_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 17 "sInfo_finalize"
            # 16 "sInfo_finalize"
            if(_if_conditional404=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional404) {
                # 16 "sInfo_finalize"
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 18 "sInfo_finalize"
            # 17 "sInfo_finalize"
            if(_if_conditional405=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional405) {
                # 17 "sInfo_finalize"
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 19 "sInfo_finalize"
            # 18 "sInfo_finalize"
            if(_if_conditional406=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional406) {
                # 18 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 20 "sInfo_finalize"
            # 19 "sInfo_finalize"
            if(_if_conditional407=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional407) {
                # 19 "sInfo_finalize"
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 21 "sInfo_finalize"
            # 20 "sInfo_finalize"
            if(_if_conditional408=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional408) {
                # 20 "sInfo_finalize"
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 22 "sInfo_finalize"
            # 21 "sInfo_finalize"
            if(_if_conditional409=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional409) {
                # 21 "sInfo_finalize"
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 23 "sInfo_finalize"
            # 22 "sInfo_finalize"
            if(_if_conditional410=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional410) {
                # 22 "sInfo_finalize"
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 24 "sInfo_finalize"
            # 23 "sInfo_finalize"
            if(_if_conditional411=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional411) {
                # 23 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 25 "sInfo_finalize"
            # 24 "sInfo_finalize"
            if(_if_conditional412=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional412) {
                # 24 "sInfo_finalize"
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 26 "sInfo_finalize"
            # 25 "sInfo_finalize"
            if(_if_conditional413=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional413) {
                # 25 "sInfo_finalize"
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 27 "sInfo_finalize"
            # 26 "sInfo_finalize"
            if(_if_conditional414=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional414) {
                # 26 "sInfo_finalize"
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 28 "sInfo_finalize"
            # 27 "sInfo_finalize"
            if(_if_conditional415=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional415) {
                # 27 "sInfo_finalize"
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_291;
_Bool _if_conditional416;
_Bool _if_conditional417;
int i_292;
_Bool _if_conditional418;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_291, 0, sizeof(int));
memset(&i_292, 0, sizeof(int));
                    # 1112 "./neo-c.h"
                    for(                    i_291=0;                    i_291<self->size;                    i_291++                    ){
                        # 1111 "./neo-c.h"
                        # 1106 "./neo-c.h"
                        if(_if_conditional416=self->item_existance[i_291],                        _if_conditional416) {
                            # 1110 "./neo-c.h"
                            # 1107 "./neo-c.h"
                            if(_if_conditional417=1,                            _if_conditional417) {
                                # 1108 "./neo-c.h"
                                self->items[i_291] = come_decrement_ref_count2(self->items[i_291], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1112 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1121 "./neo-c.h"
                    for(                    i_292=0;                    i_292<self->size;                    i_292++                    ){
                        # 1120 "./neo-c.h"
                        # 1115 "./neo-c.h"
                        if(_if_conditional418=self->item_existance[i_292],                        _if_conditional418) {
                            # 1119 "./neo-c.h"
                            # 1116 "./neo-c.h"
                            if(_if_conditional419=1,                            _if_conditional419) {
                                # 1117 "./neo-c.h"
                                self->keys[i_292] = come_decrement_ref_count2(self->keys[i_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1121 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1123 "./neo-c.h"
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    # 1125 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional464;
struct list_item$1charph* it_311;
int i_312;
_Bool _while_condtional38;
_Bool _if_conditional465;
char* __result180__;
char* default_value_313;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_311, 0, sizeof(struct list_item$1charph*));
memset(&i_312, 0, sizeof(int));
memset(&default_value_313, 0, sizeof(char*));
                                            # 673 "./neo-c.h"
                                            # 669 "./neo-c.h"
                                            if(_if_conditional464=position<0,                                            _if_conditional464) {
                                                # 670 "./neo-c.h"
                                                position+=self->len;
                                            }
                                            # 673 "./neo-c.h"
                                            it_311=self->head;
                                            # 674 "./neo-c.h"
                                            i_312=0;
                                            # 681 "./neo-c.h"
                                            while(_while_condtional38=it_311!=((void*)0),                                            _while_condtional38) {
                                                # 679 "./neo-c.h"
                                                # 676 "./neo-c.h"
                                                if(_if_conditional465=position==i_312,                                                _if_conditional465) {
                                                    # 677 "./neo-c.h"
                                                    __result180__ = __result_obj__ = it_311->item;
                                                    return __result180__;
                                                }
                                                # 679 "./neo-c.h"
                                                it_311=it_311->next;
                                                # 680 "./neo-c.h"
                                                i_312++;
                                            }
                                            # 683 "./neo-c.h"
                                            # 684 "./neo-c.h"
                                            memset(&default_value_313,0,sizeof(char*));
                                            # 685 "./neo-c.h"
                                            __result181__ = __result_obj__ = default_value_313;
                                            default_value_313 = come_decrement_ref_count2(default_value_313, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result181__;
                                            default_value_313 = come_decrement_ref_count2(default_value_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 871 "02transpile.c"
                                            printf("%s %d: linker faield\n",(*(parent->info_310)).sname,(*(parent->info_310)).sline);
                                            # 872 "02transpile.c"
                                            exit(13);
}

