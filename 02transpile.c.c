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
_Bool gComeDebug=(_Bool)0;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_2;
    char** msg2_0;
    struct sInfo** info;
    char** msg;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_266;
    struct buffer** clang_option_252;
    struct buffer** cpp_option_253;
    struct list$1charph** files_254;
    struct list$1charph** object_files_255;
    _Bool* output_object_file_256;
    _Bool* output_cpp_file_257;
    _Bool* output_source_file_flag_258;
    char** output_file_name_259;
    _Bool* verbose_260;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline);

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

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

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

int pipe(int anonymous_var_nameX478[2]);

int pipe2(int anonymous_var_nameX479[2], int anonymous_var_nameX480);

int close(int anonymous_var_nameX481);

int posix_close(int anonymous_var_nameX482, int anonymous_var_nameX483);

int dup(int anonymous_var_nameX484);

int dup2(int anonymous_var_nameX485, int anonymous_var_nameX486);

int dup3(int anonymous_var_nameX487, int anonymous_var_nameX488, int anonymous_var_nameX489);

long lseek(int anonymous_var_nameX490, long anonymous_var_nameX491, int anonymous_var_nameX492);

int fsync(int anonymous_var_nameX493);

int fdatasync(int anonymous_var_nameX494);

long read(int anonymous_var_nameX495, void* anonymous_var_nameX496, unsigned long int anonymous_var_nameX497);

long write(int anonymous_var_nameX498, const void* anonymous_var_nameX499, unsigned long int anonymous_var_nameX500);

long pread(int anonymous_var_nameX501, void* anonymous_var_nameX502, unsigned long int anonymous_var_nameX503, long anonymous_var_nameX504);

long pwrite(int anonymous_var_nameX505, const void* anonymous_var_nameX506, unsigned long int anonymous_var_nameX507, long anonymous_var_nameX508);

int chown(const char* anonymous_var_nameX509, unsigned int anonymous_var_nameX510, unsigned int anonymous_var_nameX511);

int fchown(int anonymous_var_nameX512, unsigned int anonymous_var_nameX513, unsigned int anonymous_var_nameX514);

int lchown(const char* anonymous_var_nameX515, unsigned int anonymous_var_nameX516, unsigned int anonymous_var_nameX517);

int fchownat(int anonymous_var_nameX518, const char* anonymous_var_nameX519, unsigned int anonymous_var_nameX520, unsigned int anonymous_var_nameX521, int anonymous_var_nameX522);

int link(const char* anonymous_var_nameX523, const char* anonymous_var_nameX524);

int linkat(int anonymous_var_nameX525, const char* anonymous_var_nameX526, int anonymous_var_nameX527, const char* anonymous_var_nameX528, int anonymous_var_nameX529);

int symlink(const char* anonymous_var_nameX530, const char* anonymous_var_nameX531);

int symlinkat(const char* anonymous_var_nameX532, int anonymous_var_nameX533, const char* anonymous_var_nameX534);

long readlink(const char* anonymous_var_nameX535, char* anonymous_var_nameX536, unsigned long int anonymous_var_nameX537);

long readlinkat(int anonymous_var_nameX538, const char* anonymous_var_nameX539, char* anonymous_var_nameX540, unsigned long int anonymous_var_nameX541);

int unlink(const char* anonymous_var_nameX542);

int unlinkat(int anonymous_var_nameX543, const char* anonymous_var_nameX544, int anonymous_var_nameX545);

int rmdir(const char* anonymous_var_nameX546);

int truncate(const char* anonymous_var_nameX547, long anonymous_var_nameX548);

int ftruncate(int anonymous_var_nameX549, long anonymous_var_nameX550);

int access(const char* anonymous_var_nameX551, int anonymous_var_nameX552);

int faccessat(int anonymous_var_nameX553, const char* anonymous_var_nameX554, int anonymous_var_nameX555, int anonymous_var_nameX556);

int chdir(const char* anonymous_var_nameX557);

int fchdir(int anonymous_var_nameX558);

char* getcwd(char* anonymous_var_nameX559, unsigned long int anonymous_var_nameX560);

unsigned int alarm(unsigned int anonymous_var_nameX561);

unsigned int sleep(unsigned int anonymous_var_nameX562);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX563, char** anonymous_var_nameX564, char** anonymous_var_nameX565);

int execv(const char* anonymous_var_nameX566, char** anonymous_var_nameX567);

int execle(const char* anonymous_var_nameX568, const char* anonymous_var_nameX569, ...);

int execl(const char* anonymous_var_nameX570, const char* anonymous_var_nameX571, ...);

int execvp(const char* anonymous_var_nameX572, char** anonymous_var_nameX573);

int execlp(const char* anonymous_var_nameX574, const char* anonymous_var_nameX575, ...);

int fexecve(int anonymous_var_nameX576, char** anonymous_var_nameX577, char** anonymous_var_nameX578);

void _exit(int anonymous_var_nameX579);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX580);

int setpgid(int anonymous_var_nameX581, int anonymous_var_nameX582);

int setsid();

int getsid(int anonymous_var_nameX583);

char* ttyname(int anonymous_var_nameX584);

int ttyname_r(int anonymous_var_nameX585, char* anonymous_var_nameX586, unsigned long int anonymous_var_nameX587);

int isatty(int anonymous_var_nameX588);

int tcgetpgrp(int anonymous_var_nameX589);

int tcsetpgrp(int anonymous_var_nameX590, int anonymous_var_nameX591);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX592, unsigned int* anonymous_var_nameX593);

int setuid(unsigned int anonymous_var_nameX594);

int seteuid(unsigned int anonymous_var_nameX595);

int setgid(unsigned int anonymous_var_nameX596);

int setegid(unsigned int anonymous_var_nameX597);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX598, unsigned long int anonymous_var_nameX599);

int gethostname(char* anonymous_var_nameX600, unsigned long int anonymous_var_nameX601);

char* ctermid(char* anonymous_var_nameX602);

int getopt(int anonymous_var_nameX603, char** anonymous_var_nameX604, const char* anonymous_var_nameX605);

long pathconf(const char* anonymous_var_nameX606, int anonymous_var_nameX607);

long fpathconf(int anonymous_var_nameX608, int anonymous_var_nameX609);

long sysconf(int anonymous_var_nameX610);

unsigned long int confstr(int anonymous_var_nameX611, char* anonymous_var_nameX612, unsigned long int anonymous_var_nameX613);

int setreuid(unsigned int anonymous_var_nameX614, unsigned int anonymous_var_nameX615);

int setregid(unsigned int anonymous_var_nameX616, unsigned int anonymous_var_nameX617);

int lockf(int anonymous_var_nameX618, int anonymous_var_nameX619, long anonymous_var_nameX620);

long gethostid();

int nice(int anonymous_var_nameX621);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX622, const char* anonymous_var_nameX623);

void encrypt(char* anonymous_var_nameX624, int anonymous_var_nameX625);

void swab(const void* anonymous_var_nameX626, void* anonymous_var_nameX627, long anonymous_var_nameX628);

int usleep(unsigned int anonymous_var_nameX629);

unsigned int ualarm(unsigned int anonymous_var_nameX630, unsigned int anonymous_var_nameX631);

int brk(void* anonymous_var_nameX632);

void* sbrk(long anonymous_var_nameX633);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX634);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX635, unsigned long int anonymous_var_nameX636);

int getdomainname(char* anonymous_var_nameX637, unsigned long int anonymous_var_nameX638);

int setdomainname(const char* anonymous_var_nameX639, unsigned long int anonymous_var_nameX640);

int setgroups(unsigned long int anonymous_var_nameX641, const unsigned int* anonymous_var_nameX642);

char* getpass(const char* anonymous_var_nameX643);

int daemon(int anonymous_var_nameX644, int anonymous_var_nameX645);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX646);

long syscall(long anonymous_var_nameX647, ...);

int execvpe(const char* anonymous_var_nameX648, char** anonymous_var_nameX649, char** anonymous_var_nameX650);

int issetugid();

int getentropy(void* anonymous_var_nameX651, unsigned long int anonymous_var_nameX652);

int setresuid(unsigned int anonymous_var_nameX653, unsigned int anonymous_var_nameX654, unsigned int anonymous_var_nameX655);

int setresgid(unsigned int anonymous_var_nameX656, unsigned int anonymous_var_nameX657, unsigned int anonymous_var_nameX658);

int getresuid(unsigned int* anonymous_var_nameX659, unsigned int* anonymous_var_nameX660, unsigned int* anonymous_var_nameX661);

int getresgid(unsigned int* anonymous_var_nameX662, unsigned int* anonymous_var_nameX663, unsigned int* anonymous_var_nameX664);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX665);

int euidaccess(const char* anonymous_var_nameX666, int anonymous_var_nameX667);

int eaccess(const char* anonymous_var_nameX668, int anonymous_var_nameX669);

long copy_file_range(int anonymous_var_nameX670, long* anonymous_var_nameX671, int anonymous_var_nameX672, long* anonymous_var_nameX673, unsigned long int anonymous_var_nameX674, unsigned int anonymous_var_nameX675);

int gettid();

int select(int anonymous_var_nameX676, struct anonymous_typeX23* anonymous_var_nameX677, struct anonymous_typeX23* anonymous_var_nameX678, struct anonymous_typeX23* anonymous_var_nameX679, struct timeval* anonymous_var_nameX680);

int pselect(int anonymous_var_nameX681, struct anonymous_typeX23* anonymous_var_nameX682, struct anonymous_typeX23* anonymous_var_nameX683, struct anonymous_typeX23* anonymous_var_nameX684, const struct timespec* anonymous_var_nameX685, const struct __sigset_t* anonymous_var_nameX686);

int stat(const char* anonymous_var_nameX687, struct stat* anonymous_var_nameX688);

int fstat(int anonymous_var_nameX689, struct stat* anonymous_var_nameX690);

int lstat(const char* anonymous_var_nameX691, struct stat* anonymous_var_nameX692);

int fstatat(int anonymous_var_nameX693, const char* anonymous_var_nameX694, struct stat* anonymous_var_nameX695, int anonymous_var_nameX696);

int chmod(const char* anonymous_var_nameX697, unsigned int anonymous_var_nameX698);

int fchmod(int anonymous_var_nameX699, unsigned int anonymous_var_nameX700);

int fchmodat(int anonymous_var_nameX701, const char* anonymous_var_nameX702, unsigned int anonymous_var_nameX703, int anonymous_var_nameX704);

unsigned int umask(unsigned int anonymous_var_nameX705);

int mkdir(const char* anonymous_var_nameX706, unsigned int anonymous_var_nameX707);

int mkfifo(const char* anonymous_var_nameX708, unsigned int anonymous_var_nameX709);

int mkdirat(int anonymous_var_nameX710, const char* anonymous_var_nameX711, unsigned int anonymous_var_nameX712);

int mkfifoat(int anonymous_var_nameX713, const char* anonymous_var_nameX714, unsigned int anonymous_var_nameX715);

int mknod(const char* anonymous_var_nameX716, unsigned int anonymous_var_nameX717, unsigned long int anonymous_var_nameX718);

int mknodat(int anonymous_var_nameX719, const char* anonymous_var_nameX720, unsigned int anonymous_var_nameX721, unsigned long int anonymous_var_nameX722);

int futimens(int anonymous_var_nameX723, const struct timespec anonymous_var_nameX724[2]);

int utimensat(int anonymous_var_nameX725, const char* anonymous_var_nameX726, const struct timespec anonymous_var_nameX727[2], int anonymous_var_nameX728);

int lchmod(const char* anonymous_var_nameX729, unsigned int anonymous_var_nameX730);

int* __errno_location();

void come_init_v2();

void come_final_v2();

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
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
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
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
void init_module(struct sInfo* info);

_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

int come_main_v2(int argc, char** argv);

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
static int list$1charph_length(struct list$1charph* self);
static void sInfo_finalize(struct sInfo* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
void method_block2_02transpilec(struct __current_stack2__* parent);

// inline function
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
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = __x<<8|__x>>8;
    __freed_obj__ = 0;
    return __result1__;
    __freed_obj__ = 0;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}

// body function




void come_init_v2(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v2(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
char* msg2_0;
va_list args_1;
_Bool _if_conditional2;
int n_2;
void* right_value0;
void* right_value1;
void* right_value7;
struct __current_stack1__ __current_stack1__;
void* right_value14;
void* right_value18;
void* right_value19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_0, 0, sizeof(char*));
memset(&args_1, 0, sizeof(va_list));
memset(&n_2, 0, sizeof(int));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    if(_if_conditional1=!((struct sInfo*)come_null_check(info, "02transpile.c", 44))->no_output_err,    __freed_obj__ = 0, 
    _if_conditional1) {
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        __builtin_va_start(args_1,msg);
        __freed_obj__ = 0;
        vasprintf(&msg2_0,msg,args_1);
        __freed_obj__ = 0;
        __builtin_va_end(args_1);
        __freed_obj__ = 0;
        printf("%s %d: %s\n",((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sline,msg2_0);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "02transpile.c", 35))->err_num++;
        __freed_obj__ = 0;
        if(_if_conditional2=((struct sInfo*)come_null_check(info, "02transpile.c", 42))->come_fun,        __freed_obj__ = 0, 
        _if_conditional2) {
            n_2=((struct sInfo*)come_null_check(info, "02transpile.c", 38))->sline-5;
            __freed_obj__ = 0;
            __current_stack1__.n_2 = &n_2;
            __current_stack1__.msg2_0 = &msg2_0;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            come_clear_stackframe();
            optional$2charphbool_value((come_push_stackframe("02transpile.c", 39),((struct optional$2charphbool*)(right_value19=string_puts(((char*)come_null_check(((char*)(right_value18=list$1voidp_join(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value14=list$1charph_map(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value7=list$1charph_sublist(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value1=string_split_char(((char*)come_null_check(((char*)(right_value0=buffer_to_string(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 39))->original_source, "02transpile.c", 39))))), "02transpile.c", 39)),10))), "02transpile.c", 39)),n_2,n_2+10))), "02transpile.c", 39)),&__current_stack1__,(void*)method_block1_02transpilec))), "02transpile.c", 39)),"\n"))), "02transpile.c", 39)))))));
            come_pop_stackframe();
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(msg2_0);
        __freed_obj__ = 0;
        if((&args_1) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_1), (void*)0, (void*)0, 1, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
void* right_value3;
struct list$1charph* result_5;
_Bool _if_conditional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
struct list_item$1charph* it_6;
int i_7;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct list$1charph* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct list$1charph*));
memset(&it_6, 0, sizeof(struct list_item$1charph*));
memset(&i_7, 0, sizeof(int));
                result_5=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value3=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value2=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 689))), "./comelang2.h", 689)))))));
                if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional4=begin<0,                __freed_obj__ = 0, 
                _if_conditional4) {
                    begin+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 692))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional5=tail<0,                __freed_obj__ = 0, 
                _if_conditional5) {
                    tail+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 696))->len+1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional6=begin<0,                __freed_obj__ = 0, 
                _if_conditional6) {
                    begin=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional7=tail>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->len,                __freed_obj__ = 0, 
                _if_conditional7) {
                    tail=((struct list$1charph*)come_null_check(self, "./comelang2.h", 704))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_6=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->head;
                __freed_obj__ = 0;
                i_7=0;
                __freed_obj__ = 0;
                while(_while_condtional2=it_6!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    if(_if_conditional8=i_7>=begin&&i_7<tail,                    __freed_obj__ = 0, 
                    _if_conditional8) {
                        list$1charph_push_back(((struct list$1charph*)come_null_check(result_5, "./comelang2.h", 711)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_6, "./comelang2.h", 711))->item));
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_6=((struct list_item$1charph*)come_null_check(it_6, "./comelang2.h", 713))->next;
                    __freed_obj__ = 0;
                    i_7++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result6__ = __result_obj__ = result_5;
                if(result_5 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result6__;
                __freed_obj__ = 0;
                if(result_5 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result4__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result4__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_3;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1charph*));
                        it_3=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional1=it_3!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional1) {
                            prev_it_4=it_3;
                            __freed_obj__ = 0;
                            it_3=((struct list_item$1charph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional3=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional3) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
void* right_value4;
struct list_item$1charph* litem_8;
char* __dec_obj1;
_Bool _if_conditional10;
void* right_value5;
struct list_item$1charph* litem_9;
char* __dec_obj2;
void* right_value6;
struct list_item$1charph* litem_10;
char* __dec_obj3;
struct list$1charph* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&litem_8, 0, sizeof(struct list_item$1charph*));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1charph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional9=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional9) {
                                litem_8=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value4=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_8, "./comelang2.h", 274))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_8, "./comelang2.h", 275))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj1=((struct list_item$1charph*)come_null_check(litem_8, "./comelang2.h", 276))->item;
                                ((struct list_item$1charph*)come_null_check(litem_8, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_8;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_8;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional10) {
                                    litem_9=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value5=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                                    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_9, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_9, "./comelang2.h", 285))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj2=((struct list_item$1charph*)come_null_check(litem_9, "./comelang2.h", 286))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_9, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_9;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_9;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_10=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value6=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                                    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_10, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_10, "./comelang2.h", 295))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj3=((struct list_item$1charph*)come_null_check(litem_10, "./comelang2.h", 296))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_10, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_10;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_10;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                            __freed_obj__ = 0;
                            __result5__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result5__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value8;
void* right_value9;
struct list$1voidp* result_13;
struct list_item$1charph* it_14;
_Bool _while_condtional4;
_Bool _if_conditional13;
struct list$1voidp* __result9__;
struct list$1voidp* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1voidp*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
                result_13=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value9=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value8=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 979))), "./comelang2.h", 979)))))));
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_14=((struct list$1charph*)come_null_check(self, "./comelang2.h", 981))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1voidp_push_back(((struct list$1voidp*)come_null_check(result_13, "./comelang2.h", 983)),block(parent,((struct list_item$1charph*)come_null_check(it_14, "./comelang2.h", 983))->item));
                    __freed_obj__ = 0;
                    if(_if_conditional13=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 989))->__method_block_result_kind__!=0,                    __freed_obj__ = 0, 
                    _if_conditional13) {
                        __result9__ = __result_obj__ = result_13;
                        if(result_13 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result9__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1charph*)come_null_check(it_14, "./comelang2.h", 989))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result10__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result10__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1voidp* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result7__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result7__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1voidp* it_11;
_Bool _while_condtional3;
struct list_item$1voidp* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_12, 0, sizeof(struct list_item$1voidp*));
                        it_11=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_11!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_12=it_11;
                            __freed_obj__ = 0;
                            it_11=((struct list_item$1voidp*)come_null_check(it_11, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional11;
void* right_value10;
struct list_item$1voidp* litem_15;
_Bool _if_conditional12;
void* right_value11;
struct list_item$1voidp* litem_16;
void* right_value12;
struct list_item$1voidp* litem_17;
struct list$1voidp* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1voidp*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1voidp*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional11=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional11) {
                            litem_15=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value10=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 272))));
                            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_15, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_15, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_15, "./comelang2.h", 276))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 279))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional12=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional12) {
                                litem_16=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value11=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 282))));
                                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_16, "./comelang2.h", 284))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_16, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_16, "./comelang2.h", 286))->item=item;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value12=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 292))));
                                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_17, "./comelang2.h", 294))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_17, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_17, "./comelang2.h", 296))->item=item;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result8__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result8__;
                        __freed_obj__ = 0;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
void* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
                __result11__ = __result_obj__ = ((char*)(right_value13=xsprintf("%d %s",++(*(parent->n_2)),it)));
                __freed_obj__ = 0;
                return __result11__;
                __freed_obj__ = 0;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
void* right_value16;
struct buffer* buf_18;
int n_19;
void* it_22;
_Bool _for_condtionalA1;
_Bool _if_conditional18;
void* right_value17;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_18, 0, sizeof(struct buffer*));
memset(&n_19, 0, sizeof(int));
memset(&it_22, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
                buf_18=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1082))))))));
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                n_19=0;
                __freed_obj__ = 0;
                for(
                it_22=list$1voidp_begin(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA1=                !list$1voidp_end(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                _for_condtionalA1;                it_22=list$1voidp_next(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0                ){
                    buffer_append_str(((struct buffer*)come_null_check(buf_18, "./comelang2.h", 1086)),it_22);
                    __freed_obj__ = 0;
                    if(_if_conditional18=n_19<list$1voidp_length(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1092)))-1,                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_18, "./comelang2.h", 1089)),sep);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    n_19++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result20__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(((struct buffer*)come_null_check(buf_18, "./comelang2.h", 1095)))));
                if(buf_18 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result20__;
                __freed_obj__ = 0;
                if(buf_18 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional14;
void* result_20;
void* __result12__;
_Bool _if_conditional15;
void* __result13__;
void* result_21;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(void*));
memset(&result_21, 0, sizeof(void*));
                    if(_if_conditional14=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional14) {
                        __freed_obj__ = 0;
                        memset(&result_20,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result12__ = __result_obj__ = result_20;
                        __freed_obj__ = 0;
                        return __result12__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional15=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 342))->it,                    __freed_obj__ = 0, 
                    _if_conditional15) {
                        __result13__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                        __freed_obj__ = 0;
                        return __result13__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_21,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result14__ = __result_obj__ = result_21;
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result15__ = self==((void*)0)||((struct list$1voidp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional16;
void* result_23;
void* __result16__;
_Bool _if_conditional17;
void* __result17__;
void* result_24;
void* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(void*));
memset(&result_24, 0, sizeof(void*));
                    if(_if_conditional16=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional16) {
                        __freed_obj__ = 0;
                        memset(&result_23,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result16__ = __result_obj__ = result_23;
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional17=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 360))->it,                    __freed_obj__ = 0, 
                    _if_conditional17) {
                        __result17__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                        __freed_obj__ = 0;
                        return __result17__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_24,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result18__ = __result_obj__ = result_24;
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result19__ = ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result19__;
                        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional19;
char* default_value_25;
char* __result21__;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_25, 0, sizeof(char*));
                if(_if_conditional19=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    __freed_obj__ = 0;
                    memset(&default_value_25,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result21__ = __result_obj__ = default_value_25;
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                }
                else {
                    __result22__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result22__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional20=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional20) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result23__ = 0;
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value20;
char* output_file_name_26;
void* right_value21;
void* right_value22;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&output_file_name_26, 0, sizeof(char*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
    output_file_name_26=(char*)come_increment_ref_count(((char*)(right_value20=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "02transpile.c", 53))->sname))));
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 57),((struct optional$2intbool*)(right_value22=string_write(((char*)come_null_check(((char*)(right_value21=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))), "02transpile.c", 57)),output_file_name_26,(_Bool)0)))));
    come_pop_stackframe();
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result26__ = (_Bool)1;
    if(output_file_name_26 && !__freed_obj__) { output_file_name_26 = come_decrement_ref_count(output_file_name_26, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
    if(output_file_name_26 && !__freed_obj__) { output_file_name_26 = come_decrement_ref_count(output_file_name_26, (void*)0, (void*)0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
int default_value_27;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_27, 0, sizeof(int));
        if(_if_conditional21=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional21) {
            __freed_obj__ = 0;
            memset(&default_value_27,0,sizeof(int));
            __freed_obj__ = 0;
            __result24__ = default_value_27;
            __freed_obj__ = 0;
            return __result24__;
            __freed_obj__ = 0;
        }
        else {
            __result25__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result25__;
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

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* input_file_name_28;
char* output_file_name_29;
_Bool _if_conditional22;
void* right_value23;
char* __dec_obj4;
void* right_value24;
char* __dec_obj5;
void* right_value25;
char* cmd_30;
_Bool exist_common_h_31;
struct _IO_FILE* f_32;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
int rc_33;
_Bool _if_conditional27;
void* right_value26;
void* right_value27;
char* cmd2_34;
_Bool _if_conditional28;
int rc_35;
_Bool _if_conditional29;
void* right_value28;
void* right_value29;
char* cmd3_36;
_Bool _if_conditional30;
_Bool _if_conditional31;
void* right_value30;
void* right_value31;
char* cmd4_37;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_28, 0, sizeof(char*));
memset(&output_file_name_29, 0, sizeof(char*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&cmd_30, 0, sizeof(char*));
memset(&exist_common_h_31, 0, sizeof(_Bool));
memset(&f_32, 0, sizeof(struct _IO_FILE*));
memset(&rc_33, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&cmd2_34, 0, sizeof(char*));
memset(&rc_35, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&cmd3_36, 0, sizeof(char*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&cmd4_37, 0, sizeof(char*));
    input_file_name_28=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "02transpile.c", 64))->sname);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional22=!((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_header_file&&((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional22) {
        __dec_obj4=output_file_name_29;
        output_file_name_29=(char*)come_increment_ref_count(((char*)(right_value23=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 68))->output_file_name,".i"))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj5=output_file_name_29;
        output_file_name_29=(char*)come_increment_ref_count(((char*)(right_value24=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 71))->sname,".i"))));
        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    cmd_30=(char*)come_increment_ref_count(((char*)(right_value25=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    exist_common_h_31=(_Bool)0;
    __freed_obj__ = 0;
    {
        f_32=fopen("common.h","r");
        __freed_obj__ = 0;
        if(_if_conditional23=f_32,        __freed_obj__ = 0, 
        _if_conditional23) {
            exist_common_h_31=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=string_operator_equals(((struct sInfo*)come_null_check(info, "02transpile.c", 85))->output_file_name,"common.h"),        __freed_obj__ = 0, 
        _if_conditional24) {
            exist_common_h_31=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=f_32,        __freed_obj__ = 0, 
        _if_conditional25) {
            fclose(f_32);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional26=!gCommonHeader,    __freed_obj__ = 0, 
    _if_conditional26) {
        exist_common_h_31=(_Bool)0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_33=system(cmd_30);
    __freed_obj__ = 0;
    if(_if_conditional27=rc_33==0,    __freed_obj__ = 0, 
    _if_conditional27) {
        cmd2_34=(char*)come_increment_ref_count(((char*)(right_value27=xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s %s > %s",((struct sInfo*)come_null_check(info, "02transpile.c", 97))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_31?((char*)(right_value26=__builtin_string(" -include common.h "))):"",input_file_name_28,output_file_name_29))));
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional28=((struct sInfo*)come_null_check(info, "02transpile.c", 98))->verbose,        __freed_obj__ = 0, 
        _if_conditional28) {
            puts(cmd2_34);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_35=system(cmd2_34);
        __freed_obj__ = 0;
        if(_if_conditional29=rc_35!=0,        __freed_obj__ = 0, 
        _if_conditional29) {
            printf("failed to cpp(2) (%s)\n",cmd2_34);
            __freed_obj__ = 0;
            exit(5);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(cmd2_34 && !__freed_obj__) { cmd2_34 = come_decrement_ref_count(cmd2_34, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        cmd3_36=(char*)come_increment_ref_count(((char*)(right_value29=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 109))->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_31?((char*)(right_value28=__builtin_string(" -include common.h "))):"",input_file_name_28,output_file_name_29))));
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional30=((struct sInfo*)come_null_check(info, "02transpile.c", 111))->verbose,        __freed_obj__ = 0, 
        _if_conditional30) {
            puts(cmd3_36);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_33=system(cmd3_36);
        __freed_obj__ = 0;
        if(_if_conditional31=rc_33!=0,        __freed_obj__ = 0, 
        _if_conditional31) {
            cmd4_37=(char*)come_increment_ref_count(((char*)(right_value31=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 115))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_31?((char*)(right_value30=__builtin_string(" -include common.h "))):"",input_file_name_28,output_file_name_29))));
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional32=((struct sInfo*)come_null_check(info, "02transpile.c", 117))->verbose,            __freed_obj__ = 0, 
            _if_conditional32) {
                puts(cmd4_37);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            rc_33=system(cmd4_37);
            __freed_obj__ = 0;
            if(_if_conditional33=rc_33!=0,            __freed_obj__ = 0, 
            _if_conditional33) {
                printf("failed to cpp(2) (%s)\n",cmd4_37);
                __freed_obj__ = 0;
                exit(5);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(cmd4_37 && !__freed_obj__) { cmd4_37 = come_decrement_ref_count(cmd4_37, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(cmd3_36 && !__freed_obj__) { cmd3_36 = come_decrement_ref_count(cmd3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result27__ = (_Bool)1;
    if(input_file_name_28 && !__freed_obj__) { input_file_name_28 = come_decrement_ref_count(input_file_name_28, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_29 && !__freed_obj__) { output_file_name_29 = come_decrement_ref_count(output_file_name_29, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_30 && !__freed_obj__) { cmd_30 = come_decrement_ref_count(cmd_30, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
    if(input_file_name_28 && !__freed_obj__) { input_file_name_28 = come_decrement_ref_count(input_file_name_28, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_29 && !__freed_obj__) { output_file_name_29 = come_decrement_ref_count(output_file_name_29, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_30 && !__freed_obj__) { cmd_30 = come_decrement_ref_count(cmd_30, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value32;
char* input_file_name_38;
char* output_file_name_39;
_Bool _if_conditional34;
void* right_value33;
char* __dec_obj6;
void* right_value34;
char* __dec_obj7;
void* right_value35;
char* command_40;
_Bool _if_conditional35;
int rc_41;
void* right_value36;
char* command2_42;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool __result28__;
_Bool _if_conditional38;
void* right_value37;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&input_file_name_38, 0, sizeof(char*));
memset(&output_file_name_39, 0, sizeof(char*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&command_40, 0, sizeof(char*));
memset(&rc_41, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&command2_42, 0, sizeof(char*));
memset(&right_value37, 0, sizeof(void*));
    input_file_name_38=(char*)come_increment_ref_count(((char*)(right_value32=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 132))->sname,".c"))));
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    output_file_name_39=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional34=((struct sInfo*)come_null_check(info, "02transpile.c", 142))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional34) {
        __dec_obj6=output_file_name_39;
        output_file_name_39=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 136))->output_file_name))));
        if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj7=output_file_name_39;
        output_file_name_39=(char*)come_increment_ref_count(((char*)(right_value34=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 139))->sname,".o"))));
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_40=(char*)come_increment_ref_count(((char*)(right_value35=xsprintf("clang -o %s -c %s %s > %s.out 2>&1",output_file_name_39,input_file_name_38,((struct sInfo*)come_null_check(info, "02transpile.c", 142))->clang_option,input_file_name_38))));
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional35=((struct sInfo*)come_null_check(info, "02transpile.c", 144))->verbose,    __freed_obj__ = 0, 
    _if_conditional35) {
        puts(command_40);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_41=system(command_40);
    __freed_obj__ = 0;
    command2_42=(char*)come_increment_ref_count(((char*)(right_value36=xsprintf("grep error\\: %s.out",input_file_name_38))));
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional36=((struct sInfo*)come_null_check(info, "02transpile.c", 149))->verbose,    __freed_obj__ = 0, 
    _if_conditional36) {
        puts(command2_42);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (void)system(command2_42);
    __freed_obj__ = 0;
    if(_if_conditional37=rc_41!=0,    __freed_obj__ = 0, 
    _if_conditional37) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 153))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 153))->sline);
        __freed_obj__ = 0;
        __result28__ = (_Bool)0;
        if(input_file_name_38 && !__freed_obj__) { input_file_name_38 = come_decrement_ref_count(input_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
        if(output_file_name_39 && !__freed_obj__) { output_file_name_39 = come_decrement_ref_count(output_file_name_39, (void*)0, (void*)0, 0, 0, 0); }
        if(command_40 && !__freed_obj__) { command_40 = come_decrement_ref_count(command_40, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_42 && !__freed_obj__) { command2_42 = come_decrement_ref_count(command2_42, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result28__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional38=!output_object_file,    __freed_obj__ = 0, 
    _if_conditional38) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files, "02transpile.c", 158)),(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(output_file_name_39)))));
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result29__ = (_Bool)1;
    if(input_file_name_38 && !__freed_obj__) { input_file_name_38 = come_decrement_ref_count(input_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_39 && !__freed_obj__) { output_file_name_39 = come_decrement_ref_count(output_file_name_39, (void*)0, (void*)0, 0, 0, 0); }
    if(command_40 && !__freed_obj__) { command_40 = come_decrement_ref_count(command_40, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_42 && !__freed_obj__) { command2_42 = come_decrement_ref_count(command2_42, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
    if(input_file_name_38 && !__freed_obj__) { input_file_name_38 = come_decrement_ref_count(input_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_39 && !__freed_obj__) { output_file_name_39 = come_decrement_ref_count(output_file_name_39, (void*)0, (void*)0, 0, 0, 0); }
    if(command_40 && !__freed_obj__) { command_40 = come_decrement_ref_count(command_40, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_42 && !__freed_obj__) { command2_42 = come_decrement_ref_count(command2_42, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
char* output_file_name_43;
_Bool _if_conditional39;
void* right_value38;
char* __dec_obj8;
void* right_value39;
char* __dec_obj9;
void* right_value40;
void* right_value41;
struct buffer* command_44;
void* right_value42;
struct list$1charph* o2_saved_45;
char* it_48;
_Bool _for_condtionalA2;
void* right_value43;
void* right_value44;
char* cmd_51;
int rc_52;
_Bool _if_conditional44;
void* right_value45;
_Bool _if_conditional45;
void* right_value46;
_Bool _if_conditional46;
void* right_value47;
void* right_value48;
_Bool _if_conditional47;
_Bool __result37__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_43, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&command_44, 0, sizeof(struct buffer*));
memset(&right_value42, 0, sizeof(void*));
memset(&o2_saved_45, 0, sizeof(struct list$1charph*));
memset(&it_48, 0, sizeof(char*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&cmd_51, 0, sizeof(char*));
memset(&rc_52, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    output_file_name_43=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional39=((struct sInfo*)come_null_check(info, "02transpile.c", 174))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional39) {
        __dec_obj8=output_file_name_43;
        output_file_name_43=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 168))->output_file_name))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj9=output_file_name_43;
        output_file_name_43=(char*)come_increment_ref_count(((char*)(right_value39=xnoextname(((struct sInfo*)come_null_check(info, "02transpile.c", 171))->sname))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value41=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 174))))))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 176)),((char*)(right_value42=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_43,getenv("HOME"),"/usr/local/"))));
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_45=(object_files),it_48=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_45), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_45), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    it_48=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_45), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 179)),((char*)(right_value43=xsprintf("%s ",it_48))));
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 183)),"-L/usr/local/lib -lcomelang2 ");
    __freed_obj__ = 0;
    cmd_51=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    rc_52=system(cmd_51);
    __freed_obj__ = 0;
    if(_if_conditional44=rc_52==0,    __freed_obj__ = 0, 
    _if_conditional44) {
        buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 189))," -L/opt/homebrew/opt/pcre/lib ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 191)),((char*)(right_value45=xsprintf(" %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 191))->clang_option))));
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional45=gComeGC,    __freed_obj__ = 0, 
    _if_conditional45) {
        buffer_append_str(((struct buffer*)come_null_check(command_44, "02transpile.c", 194)),((char*)(right_value46=xsprintf(" -lgc "))));
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional46=((struct sInfo*)come_null_check(info, "02transpile.c", 197))->verbose,    __freed_obj__ = 0, 
    _if_conditional46) {
        puts(((char*)(right_value47=buffer_to_string(((struct buffer*)come_null_check(command_44, "02transpile.c", 197))))));
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_52=system(((char*)(right_value48=buffer_to_string(((struct buffer*)come_null_check(command_44, "02transpile.c", 198))))));
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional47=rc_52!=0,    __freed_obj__ = 0, 
    _if_conditional47) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 201))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 201))->sline);
        __freed_obj__ = 0;
        __result37__ = (_Bool)0;
        if(output_file_name_43 && !__freed_obj__) { output_file_name_43 = come_decrement_ref_count(output_file_name_43, (void*)0, (void*)0, 0, 0, 0); }
        if(command_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_44, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cmd_51 && !__freed_obj__) { cmd_51 = come_decrement_ref_count(cmd_51, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result37__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result38__ = (_Bool)1;
    if(output_file_name_43 && !__freed_obj__) { output_file_name_43 = come_decrement_ref_count(output_file_name_43, (void*)0, (void*)0, 0, 0, 0); }
    if(command_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_51 && !__freed_obj__) { cmd_51 = come_decrement_ref_count(cmd_51, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
    if(output_file_name_43 && !__freed_obj__) { output_file_name_43 = come_decrement_ref_count(output_file_name_43, (void*)0, (void*)0, 0, 0, 0); }
    if(command_44 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_51 && !__freed_obj__) { cmd_51 = come_decrement_ref_count(cmd_51, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional40;
char* result_46;
char* __result30__;
_Bool _if_conditional41;
char* __result31__;
char* result_47;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
        if(_if_conditional40=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional40) {
            __freed_obj__ = 0;
            memset(&result_46,0,sizeof(char*));
            __freed_obj__ = 0;
            __result30__ = __result_obj__ = result_46;
            __freed_obj__ = 0;
            return __result30__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional41=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional41) {
            __result31__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_47,0,sizeof(char*));
        __freed_obj__ = 0;
        __result32__ = __result_obj__ = result_47;
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result33__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result33__;
        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional42;
char* result_49;
char* __result34__;
_Bool _if_conditional43;
char* __result35__;
char* result_50;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_49, 0, sizeof(char*));
memset(&result_50, 0, sizeof(char*));
        if(_if_conditional42=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional42) {
            __freed_obj__ = 0;
            memset(&result_49,0,sizeof(char*));
            __freed_obj__ = 0;
            __result34__ = __result_obj__ = result_49;
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional43=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional43) {
            __result35__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_50,0,sizeof(char*));
        __freed_obj__ = 0;
        __result36__ = __result_obj__ = result_50;
        __freed_obj__ = 0;
        return __result36__;
        __freed_obj__ = 0;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
void* right_value50;
struct buffer* __dec_obj10;
void* right_value51;
void* right_value52;
struct buffer* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
struct sModule* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
    __dec_obj10=((struct sModule*)come_null_check(self, "02transpile.c", 210))->mSourceHead;
    ((struct sModule*)come_null_check(self, "02transpile.c", 210))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 210))))))));
    if(__dec_obj10) { come_call_finalizer(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj11=((struct sModule*)come_null_check(self, "02transpile.c", 211))->mSource;
    ((struct sModule*)come_null_check(self, "02transpile.c", 211))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 211))))))));
    if(__dec_obj11) { come_call_finalizer(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj12=((struct sModule*)come_null_check(self, "02transpile.c", 212))->mLastCode;
    ((struct sModule*)come_null_check(self, "02transpile.c", 212))->mLastCode=((void*)0);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj13=((struct sModule*)come_null_check(self, "02transpile.c", 213))->mLastCode2;
    ((struct sModule*)come_null_check(self, "02transpile.c", 213))->mLastCode2=((void*)0);
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __result39__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional48=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional50=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional50) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 5))->mLastCode3!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value53;
void* right_value59;
struct map$2charphsVarph* __dec_obj15;
static int id_62=0;
struct sVarTable* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
    __dec_obj15=((struct sVarTable*)come_null_check(self, "02transpile.c", 220))->mVars;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 220))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value59=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value53=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 220))))))));
    if(__dec_obj15) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 221))->mGlobal=global;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 222))->mParent=parent;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 224))->mID=++id_62;
    __freed_obj__ = 0;
    __result42__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value54;
void* right_value55;
void* right_value56;
int i_57;
_Bool _for_condtionalA3;
void* right_value57;
void* right_value58;
struct list$1charp* __dec_obj14;
struct map$2charphsVarph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&i_57, 0, sizeof(int));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value54=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value55=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1123))));
        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value56=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        i_57=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_57<1024 ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_57++ ,        __freed_obj__ = 0, 
        0        ){
            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_57]=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
        __freed_obj__ = 0;
        __dec_obj14=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value58=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value57=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
        if(__dec_obj14) { come_call_finalizer(list$1charp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
        __freed_obj__ = 0;
        __result41__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional53=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional54=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional54) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional56;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional62;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional56) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional59=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional59) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional60=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional60) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional62) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional64) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional65) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional66) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional67=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional67) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional68) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional69) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional70) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional57=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional57) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_53;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sTypeph*));
                            it_53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional5=it_53!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional5) {
                                prev_it_54=it_53;
                                __freed_obj__ = 0;
                                it_53=((struct list_item$1sTypeph*)come_null_check(it_53, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_54 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional61=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional61) {
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_55;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_55, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1sNodeph*));
                            it_55=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional6=it_55!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional6) {
                                prev_it_56=it_55;
                                __freed_obj__ = 0;
                                it_55=((struct list_item$1sNodeph*)come_null_check(it_55, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_56 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional63=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional63) {
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_58;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charp*));
                it_58=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_58!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    prev_it_59=it_58;
                    __freed_obj__ = 0;
                    it_58=((struct list_item$1charp*)come_null_check(it_58, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int i_60;
_Bool _for_condtionalA4;
_Bool _if_conditional72;
_Bool _if_conditional73;
int i_61;
_Bool _for_condtionalA5;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_60, 0, sizeof(int));
memset(&i_61, 0, sizeof(int));
            for(
            i_60=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_60<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_60++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional72=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_60],                __freed_obj__ = 0, 
                _if_conditional72) {
                    if(_if_conditional73=1,                    __freed_obj__ = 0, 
                    _if_conditional73) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_60] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_60], (void*)0, (void*)0, 0, 0, 0, 0); }
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
            i_61=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_61<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_61++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional74=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_61],                __freed_obj__ = 0, 
                _if_conditional74) {
                    if(_if_conditional75=1,                    __freed_obj__ = 0, 
                    _if_conditional75) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_61] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_61] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_61], (void*)0, (void*)0, 0, 0, 0); }
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

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional76=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 1))->key_list!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(((struct sVarTable*)come_null_check(self, "02transpile.c", 231))->mVars && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,((struct sVarTable*)come_null_check(self, "02transpile.c", 231))->mVars, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int pointer_num_63;
char* p_64;
_Bool _while_condtional8;
_Bool _if_conditional77;
_Bool _while_condtional9;
void* right_value60;
void* right_value61;
char* name2_65;
void* right_value71;
struct sClass* klass_71;
void* right_value72;
struct sClass* generics_class_72;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value73;
struct sClass* klass2_73;
void* right_value74;
char* __dec_obj16;
void* right_value75;
char* __dec_obj17;
void* right_value88;
void* right_value89;
void* right_value90;
void* right_value91;
void* right_value131;
struct tuple1$1sTypeph* __dec_obj43;
void* right_value132;
void* right_value133;
struct tuple1$1sTypeph* __dec_obj44;
void* right_value134;
void* right_value135;
struct list$1sTypeph* __dec_obj45;
void* right_value136;
void* right_value137;
struct list$1sNodeph* __dec_obj46;
void* right_value138;
void* right_value139;
struct list$1sTypeph* __dec_obj47;
void* right_value140;
void* right_value141;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj50;
void* right_value142;
char* __dec_obj51;
struct sType* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&pointer_num_63, 0, sizeof(int));
memset(&p_64, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&name2_65, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&klass_71, 0, sizeof(struct sClass*));
memset(&right_value72, 0, sizeof(void*));
memset(&generics_class_72, 0, sizeof(struct sClass*));
memset(&right_value73, 0, sizeof(void*));
memset(&klass2_73, 0, sizeof(struct sClass*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    pointer_num_63=0;
    __freed_obj__ = 0;
    p_64=name;
    __freed_obj__ = 0;
    while(_while_condtional8=*p_64,    __freed_obj__ = 0, 
    _while_condtional8) {
        if(_if_conditional77=xisalpha(*p_64),        __freed_obj__ = 0, 
        _if_conditional77) {
            p_64++;
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional9=*p_64==42,    __freed_obj__ = 0, 
    _while_condtional9) {
        pointer_num_63++;
        __freed_obj__ = 0;
        p_64++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    name2_65=(char*)come_increment_ref_count(((char*)(right_value61=string_substring(((char*)come_null_check(((char*)(right_value60=__builtin_string(name))), "02transpile.c", 251)),0,-pointer_num_63-1))));
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_71=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 253),((struct optional$2sClasspbool*)(right_value71=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 253))->classes,name2_65)))));
    come_pop_stackframe();
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    generics_class_72=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 254),((struct optional$2sClasspbool*)(right_value72=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 254))->generics_classes,name2_65)))));
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional84=klass_71==((void*)0)&&generics_class_72==((void*)0),    __freed_obj__ = 0, 
    _if_conditional84) {
        printf("%s %d: class not found(%s)(1)\n",((struct sInfo*)come_null_check(info, "02transpile.c", 257))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 257))->sline,name2_65);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional85=klass_71,    __freed_obj__ = 0, 
    _if_conditional85) {
        ((struct sType*)come_null_check(self, "02transpile.c", 260))->mClass=klass_71;
        __freed_obj__ = 0;
    }
    else {
        klass2_73=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value73=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 263))));
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj16=((struct sClass*)come_null_check(klass2_73, "02transpile.c", 264))->mName;
        ((struct sClass*)come_null_check(klass2_73, "02transpile.c", 264))->mName=(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string(name))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj17=((struct sClass*)come_null_check(klass2_73, "02transpile.c", 265))->mDeclareSName;
        ((struct sClass*)come_null_check(klass2_73, "02transpile.c", 265))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 265))->sname))));
        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 267))->classes, "02transpile.c", 267)),(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_73));
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        ((struct sType*)come_null_check(self, "02transpile.c", 269))->mClass=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 269),((struct optional$2sClasspbool*)(right_value90=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 269))->classes,((char*)(right_value89=__builtin_string(name))))))));
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(klass2_73 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass2_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj43=((struct sType*)come_null_check(self, "02transpile.c", 272))->mNoSolvedGenericsType;
    ((struct sType*)come_null_check(self, "02transpile.c", 272))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value131=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 272)))),((void*)0)))));
    if(__dec_obj43) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj44=((struct sType*)come_null_check(self, "02transpile.c", 273))->mOriginalLoadVarType;
    ((struct sType*)come_null_check(self, "02transpile.c", 273))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value133=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value132=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 273)))),((void*)0)))));
    if(__dec_obj44) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj45=((struct sType*)come_null_check(self, "02transpile.c", 274))->mGenericsTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 274))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value135=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 274))))))));
    if(__dec_obj45) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj46=((struct sType*)come_null_check(self, "02transpile.c", 275))->mArrayNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 275))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 275))))))));
    if(__dec_obj46) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 276))->mOmitArrayNum=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj47=((struct sType*)come_null_check(self, "02transpile.c", 277))->mParamTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 277))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value139=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value138=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 277))))))));
    if(__dec_obj47) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sType*)come_null_check(self, "02transpile.c", 278))->mParamNames;
    ((struct sType*)come_null_check(self, "02transpile.c", 278))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value140=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 278))))))));
    if(__dec_obj48) { come_call_finalizer(list$1charph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 279))->mVarArgs=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj49=((struct sType*)come_null_check(self, "02transpile.c", 280))->mResultType;
    ((struct sType*)come_null_check(self, "02transpile.c", 280))->mResultType=((void*)0);
    if(__dec_obj49) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 281))->mUnsigned=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 282))->mConstant=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 283))->mRegister=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 284))->mVolatile=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 285))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 286))->mRestrict=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 287))->mImmutable=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 288))->mLongLong=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 289))->mHeap=heap;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 290))->mDummyHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 291))->mNoHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 292))->mRefference=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 294))->mPointerNum=pointer_num_63;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 295))->mNoArrayPointerNum=0;
    __freed_obj__ = 0;
    __dec_obj50=((struct sType*)come_null_check(self, "02transpile.c", 296))->mSizeNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 296))->mSizeNum=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 298))->mDynamicArrayNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 299))->mTypeOfExpression=0;
    __freed_obj__ = 0;
    __dec_obj51=((struct sType*)come_null_check(self, "02transpile.c", 301))->mOriginalTypeName;
    ((struct sType*)come_null_check(self, "02transpile.c", 301))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(""))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 302))->mOriginalPointerNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 304))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    __result98__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_65 && !__freed_obj__) { name2_65 = come_decrement_ref_count(name2_65, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_65 && !__freed_obj__) { name2_65 = come_decrement_ref_count(name2_65, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_66;
unsigned int hash_67;
unsigned int it_68;
_Bool _while_condtional10;
_Bool _if_conditional78;
void* right_value62;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional80;
void* right_value63;
void* right_value64;
struct optional$2sClasspbool* __result46__;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value65;
void* right_value66;
struct optional$2sClasspbool* __result47__;
void* right_value67;
void* right_value68;
struct optional$2sClasspbool* __result48__;
void* right_value69;
void* right_value70;
struct optional$2sClasspbool* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_66, 0, sizeof(struct sClass*));
memset(&hash_67, 0, sizeof(unsigned int));
memset(&it_68, 0, sizeof(unsigned int));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_66,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_67=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
        __freed_obj__ = 0;
        it_68=hash_67;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional78=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_68],            __freed_obj__ = 0, 
            _if_conditional78) {
                if(_if_conditional80=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value62=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_68], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                (right_value62 && right_value62 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional80) {
                    __result46__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value64=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value63=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_68],(_Bool)1)));
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_68++;
                __freed_obj__ = 0;
                if(_if_conditional81=it_68>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                __freed_obj__ = 0, 
                _if_conditional81) {
                    it_68=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional82=it_68==hash_67,                    __freed_obj__ = 0, 
                    _if_conditional82) {
                        __result47__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value66=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value65=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_66,(_Bool)0))));
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result47__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value68=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value67=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_66,(_Bool)0))));
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value70=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value69=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_66,(_Bool)0))));
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional79;
_Bool default_value_69;
_Bool __result43__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_69, 0, sizeof(_Bool));
                    if(_if_conditional79=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional79) {
                        __freed_obj__ = 0;
                        memset(&default_value_69,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result43__ = default_value_69;
                        __freed_obj__ = 0;
                        return __result43__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result44__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result44__;
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

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result45__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result45__;
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
_Bool _if_conditional83;
struct sClass* default_value_70;
struct sClass* __result50__;
struct sClass* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(struct sClass*));
        if(_if_conditional83=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            __freed_obj__ = 0;
            memset(&default_value_70,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result50__ = __result_obj__ = default_value_70;
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
        }
        else {
            __result51__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional86=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_74;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_74, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_74=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional11=it_74!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional11) {
                        prev_it_75=it_74;
                        __freed_obj__ = 0;
                        it_74=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_74, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_75 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional88=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional88) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional89;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional89=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional89) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional90=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional90) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
unsigned int hash_93;
unsigned int it_94;
_Bool _while_condtional14;
_Bool _if_conditional104;
void* right_value82;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool same_key_exist_111;
char* it2_114;
_Bool _for_condtionalA7;
void* right_value84;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct map$2charphsClassph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_93, 0, sizeof(unsigned int));
memset(&it_94, 0, sizeof(unsigned int));
memset(&right_value82, 0, sizeof(void*));
memset(&same_key_exist_111, 0, sizeof(_Bool));
memset(&it2_114, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
            if(_if_conditional92=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional92) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_93=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_94=hash_93;
            __freed_obj__ = 0;
            while(_while_condtional14=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional14) {
                if(_if_conditional104=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_94],                __freed_obj__ = 0, 
                _if_conditional104) {
                    if(_if_conditional105=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value82=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_94], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    (right_value82 && right_value82 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional105) {
                        if(_if_conditional106=1,                        __freed_obj__ = 0, 
                        _if_conditional106) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_94]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_94] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_94] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_94], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_94]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_94]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_94]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional126=1,                        __freed_obj__ = 0, 
                        _if_conditional126) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_94] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_94], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_94]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_94]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_94++;
                    __freed_obj__ = 0;
                    if(_if_conditional127=it_94>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        it_94=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional128=it_94==hash_93,                        __freed_obj__ = 0, 
                        _if_conditional128) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_94]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional129=1,                    __freed_obj__ = 0, 
                    _if_conditional129) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_94]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_94]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional130=1,                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_94]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_94]=item;
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
            same_key_exist_111=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_114=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            it2_114=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional135=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value84=string_equals(((char*)come_null_check(it2_114, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value84 && right_value84 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional135) {
                    same_key_exist_111=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional136=!same_key_exist_111,            __freed_obj__ = 0, 
            _if_conditional136) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result75__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result75__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_76;
void* right_value76;
char** keys_77;
void* right_value77;
struct sClass** items_78;
void* right_value78;
_Bool* item_existance_79;
int len_80;
char* it_83;
_Bool _for_condtionalA6;
struct sClass* default_value_86;
void* right_value80;
struct sClass* it2_89;
unsigned int hash_90;
int n_91;
_Bool _while_condtional13;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct sClass* default_value_92;
void* right_value81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_76, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
memset(&keys_77, 0, sizeof(char**));
memset(&right_value77, 0, sizeof(void*));
memset(&items_78, 0, sizeof(struct sClass**));
memset(&right_value78, 0, sizeof(void*));
memset(&item_existance_79, 0, sizeof(_Bool*));
memset(&len_80, 0, sizeof(int));
memset(&it_83, 0, sizeof(char*));
memset(&default_value_86, 0, sizeof(struct sClass*));
memset(&right_value80, 0, sizeof(void*));
memset(&it2_89, 0, sizeof(struct sClass*));
memset(&hash_90, 0, sizeof(unsigned int));
memset(&n_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sClass*));
memset(&right_value81, 0, sizeof(void*));
                    size_76=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_77=(char**)come_increment_ref_count(((char**)(right_value76=(char**)come_calloc(1, sizeof(char*)*(1*(size_76)), "./comelang2.h", 1370))));
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_78=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value77=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_76)), "./comelang2.h", 1371))));
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_79=(_Bool*)come_increment_ref_count(((_Bool*)(right_value78=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_76)), "./comelang2.h", 1372))));
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_80=0;
                    __freed_obj__ = 0;
                    for(
                    it_83=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_83=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_86,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_89=((struct sClass*)(right_value80=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_83,default_value_86)));
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_90=string_get_hash_key(((char*)come_null_check(it_83, "./comelang2.h", 1380)))%size_76;
                        __freed_obj__ = 0;
                        n_91=hash_90;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional101=item_existance_79[n_91],                            __freed_obj__ = 0, 
                            _if_conditional101) {
                                n_91++;
                                __freed_obj__ = 0;
                                if(_if_conditional102=n_91>=size_76,                                __freed_obj__ = 0, 
                                _if_conditional102) {
                                    n_91=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional103=n_91==hash_90,                                    __freed_obj__ = 0, 
                                    _if_conditional103) {
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
                                item_existance_79[n_91]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_77[n_91]=it_83;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_78[n_91]=((struct sClass*)(right_value81=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_83,default_value_92)));
                                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_80++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_77;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_78;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_79;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_76;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_80;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional93;
char* result_81;
char* __result52__;
_Bool _if_conditional94;
char* __result53__;
char* result_82;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(char*));
memset(&result_82, 0, sizeof(char*));
                        if(_if_conditional93=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional93) {
                            __freed_obj__ = 0;
                            memset(&result_81,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result52__ = __result_obj__ = result_81;
                            __freed_obj__ = 0;
                            return __result52__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional94=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional94) {
                            __result53__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result53__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_82,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result54__ = __result_obj__ = result_82;
                        __freed_obj__ = 0;
                        return __result54__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result55__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result55__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
char* result_84;
char* __result56__;
_Bool _if_conditional96;
char* __result57__;
char* result_85;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(char*));
memset(&result_85, 0, sizeof(char*));
                        if(_if_conditional95=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional95) {
                            __freed_obj__ = 0;
                            memset(&result_84,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result56__ = __result_obj__ = result_84;
                            __freed_obj__ = 0;
                            return __result56__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional96=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional96) {
                            __result57__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_85,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result58__ = __result_obj__ = result_85;
                        __freed_obj__ = 0;
                        return __result58__;
                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_87;
unsigned int it_88;
_Bool _while_condtional12;
_Bool _if_conditional97;
void* right_value79;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional98;
struct sClass* __result59__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* __result60__;
struct sClass* __result61__;
struct sClass* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_87, 0, sizeof(unsigned int));
memset(&it_88, 0, sizeof(unsigned int));
memset(&right_value79, 0, sizeof(void*));
                            hash_87=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_88=hash_87;
                            __freed_obj__ = 0;
                            while(_while_condtional12=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional12) {
                                if(_if_conditional97=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_88],                                __freed_obj__ = 0, 
                                _if_conditional97) {
                                    if(_if_conditional98=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value79=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_88], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                    (right_value79 && right_value79 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional98) {
                                        __result59__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_88];
                                        __freed_obj__ = 0;
                                        return __result59__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_88++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional99=it_88>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional99) {
                                        it_88=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional100=it_88==hash_87,                                        __freed_obj__ = 0, 
                                        _if_conditional100) {
                                            __result60__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result60__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result61__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result61__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result62__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result62__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_95;
struct list_item$1charp* it_96;
_Bool _while_condtional15;
void* right_value83;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional107;
struct list$1charp* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_95, 0, sizeof(int));
memset(&it_96, 0, sizeof(struct list_item$1charp*));
memset(&right_value83, 0, sizeof(void*));
                                it2_95=0;
                                __freed_obj__ = 0;
                                it_96=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional15=it_96!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional15) {
                                    if(_if_conditional107=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value83=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_96, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    (right_value83 && right_value83 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional107) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_95,it2_95+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_95++;
                                    __freed_obj__ = 0;
                                    it_96=((struct list_item$1charp*)come_null_check(it_96, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result66__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result66__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
int tmp_97;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charp* __result63__;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct list_item$1charp* it_100;
int i_101;
_Bool _while_condtional17;
_Bool _if_conditional116;
struct list_item$1charp* prev_it_102;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list_item$1charp* it_103;
int i_104;
_Bool _while_condtional18;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_105;
struct list_item$1charp* it_106;
struct list_item$1charp* head_prev_it_107;
struct list_item$1charp* tail_it_108;
int i_109;
_Bool _while_condtional19;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* prev_it_110;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list$1charp* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_97, 0, sizeof(int));
memset(&it_100, 0, sizeof(struct list_item$1charp*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item$1charp*));
memset(&it_103, 0, sizeof(struct list_item$1charp*));
memset(&i_104, 0, sizeof(int));
memset(&prev_it_105, 0, sizeof(struct list_item$1charp*));
memset(&it_106, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_107, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_108, 0, sizeof(struct list_item$1charp*));
memset(&i_109, 0, sizeof(int));
memset(&prev_it_110, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional108=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional108) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional109=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional109) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional110=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional110) {
                                                tmp_97=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_97;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional111=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional111) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional112=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional112) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional113=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional113) {
                                                __result63__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result63__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional114=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional114) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional115=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional115) {
                                                    it_100=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_101=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_100!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional116=i_101<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional116) {
                                                            prev_it_102=it_100;
                                                            __freed_obj__ = 0;
                                                            it_100=((struct list_item$1charp*)come_null_check(it_100, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_101++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_102 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional117=i_101==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional117) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_100;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_100=((struct list_item$1charp*)come_null_check(it_100, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_101++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional118=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional118) {
                                                        it_103=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_104=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional18=it_103!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional18) {
                                                            if(_if_conditional119=i_104==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional119) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_103, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional120=i_104>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional120) {
                                                                prev_it_105=it_103;
                                                                __freed_obj__ = 0;
                                                                it_103=((struct list_item$1charp*)come_null_check(it_103, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_104++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_105 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_105, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_103=((struct list_item$1charp*)come_null_check(it_103, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_104++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_106=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_107=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_108=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_109=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional19=it_106!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional19) {
                                                            if(_if_conditional121=i_109==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional121) {
                                                                head_prev_it_107=((struct list_item$1charp*)come_null_check(it_106, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional122=i_109==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional122) {
                                                                tail_it_108=it_106;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional123=i_109>=head&&i_109<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional123) {
                                                                prev_it_110=it_106;
                                                                __freed_obj__ = 0;
                                                                it_106=((struct list_item$1charp*)come_null_check(it_106, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_109++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_110 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_110, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_106=((struct list_item$1charp*)come_null_check(it_106, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_109++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional124=head_prev_it_107!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional124) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_107, "./comelang2.h", 620))->next=tail_it_108;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional125=tail_it_108!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional125) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_108, "./comelang2.h", 623))->prev=head_prev_it_107;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result65__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result65__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_98;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_99;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_98, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_99, 0, sizeof(struct list_item$1charp*));
                                                    it_98=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_98!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        prev_it_99=it_98;
                                                        __freed_obj__ = 0;
                                                        it_98=((struct list_item$1charp*)come_null_check(it_98, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_99 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result64__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result64__;
                                                    __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional131;
char* result_112;
char* __result67__;
_Bool _if_conditional132;
char* __result68__;
char* result_113;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                if(_if_conditional131=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional131) {
                    __freed_obj__ = 0;
                    memset(&result_112,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result67__ = __result_obj__ = result_112;
                    __freed_obj__ = 0;
                    return __result67__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional132=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional132) {
                    __result68__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result68__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_113,0,sizeof(char*));
                __freed_obj__ = 0;
                __result69__ = __result_obj__ = result_113;
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result70__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result70__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional133;
char* result_115;
char* __result71__;
_Bool _if_conditional134;
char* __result72__;
char* result_116;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                if(_if_conditional133=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional133) {
                    __freed_obj__ = 0;
                    memset(&result_115,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result71__ = __result_obj__ = result_115;
                    __freed_obj__ = 0;
                    return __result71__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional134=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional134) {
                    __result72__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_116,0,sizeof(char*));
                __freed_obj__ = 0;
                __result73__ = __result_obj__ = result_116;
                __freed_obj__ = 0;
                return __result73__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional137;
void* right_value85;
struct list_item$1charp* litem_117;
_Bool _if_conditional138;
void* right_value86;
struct list_item$1charp* litem_118;
void* right_value87;
struct list_item$1charp* litem_119;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1charp*));
memset(&right_value86, 0, sizeof(void*));
memset(&litem_118, 0, sizeof(struct list_item$1charp*));
memset(&right_value87, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional137=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional137) {
                        litem_117=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value85=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_117, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_117, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_117, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_117;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_117;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional138=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional138) {
                            litem_118=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value86=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_118, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_118, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_118, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_118;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_118;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_119=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value87=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_119, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_119, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_119, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_119;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_119;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result74__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result74__;
                    __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value130;
struct sType* __dec_obj42;
struct tuple1$1sTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
        __dec_obj42=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(v1))));
        if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result97__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional139;
struct sType* __result76__;
void* right_value92;
struct sType* result_120;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional145;
void* right_value98;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional148;
void* right_value99;
char* __dec_obj22;
_Bool _if_conditional149;
void* right_value106;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional153;
void* right_value114;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value115;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional168;
void* right_value122;
struct list$1charph* __dec_obj35;
_Bool _if_conditional172;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value126;
struct sNode* __dec_obj38;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
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
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value127;
struct sNode* __dec_obj39;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value128;
char* __dec_obj40;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value129;
char* __dec_obj41;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
            if(_if_conditional139=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional139) {
                __result76__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional140=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional140) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional141=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional141) {
                __dec_obj19=((struct sType*)come_null_check(result_120, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_120, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional145=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional145) {
                __dec_obj21=((struct sType*)come_null_check(result_120, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_120, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value98=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj21) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional148=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional148) {
                __dec_obj22=((struct sType*)come_null_check(result_120, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_120, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional149=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional149) {
                __dec_obj26=((struct sType*)come_null_check(result_120, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_120, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj26) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional153=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional153) {
                __dec_obj30=((struct sType*)come_null_check(result_120, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_120, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional166=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional166) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional167=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional167) {
                __dec_obj31=((struct sType*)come_null_check(result_120, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_120, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional168=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional168) {
                __dec_obj35=((struct sType*)come_null_check(result_120, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_120, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional172=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional172) {
                __dec_obj37=((struct sType*)come_null_check(result_120, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_120, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj37) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional175=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional176=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional176) {
                __dec_obj38=((struct sType*)come_null_check(result_120, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_120, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional177=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional177) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional178=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional178) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional179=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional179) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional180=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional180) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional181=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional181) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional182=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional182) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional183=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional183) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional184=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional184) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional185=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional185) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional186=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional186) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional187=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional187) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional188=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional189) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional190=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional190) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional191=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional192=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional192) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional193=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional193) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional194=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional194) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional197=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional197) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional198=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional199=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional200=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional200) {
                __dec_obj39=((struct sType*)come_null_check(result_120, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_120, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional201=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional201) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional202=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional202) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional203=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional203) {
                __dec_obj40=((struct sType*)come_null_check(result_120, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_120, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional204=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional204) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional205=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional205) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional206=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional207=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional207) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional208=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional208) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional209=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional210=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional211=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional211) {
                ((struct sType*)come_null_check(result_120, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional212=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional212) {
                __dec_obj41=((struct sType*)come_null_check(result_120, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_120, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result96__ = __result_obj__ = result_120;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result96__;
            __freed_obj__ = 0;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional143=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional150;
struct list$1sTypeph* __result81__;
void* right_value100;
void* right_value101;
struct list$1sTypeph* result_123;
struct list_item$1sTypeph* it_124;
_Bool _while_condtional20;
void* right_value105;
struct list$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct list$1sTypeph*));
memset(&it_124, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value105, 0, sizeof(void*));
                    if(_if_conditional150=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional150) {
                        __result81__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_123=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value100=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_124=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional20=it_124!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional20) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_123, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_124, "./comelang2.h", 192))->item)))));
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_124=((struct list_item$1sTypeph*)come_null_check(it_124, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result84__ = __result_obj__ = result_123;
                    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result82__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result82__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional151;
void* right_value102;
struct list_item$1sTypeph* litem_125;
struct sType* __dec_obj23;
_Bool _if_conditional152;
void* right_value103;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj24;
void* right_value104;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj25;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional151=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional151) {
                                litem_125=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_125, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_125, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_125, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_125, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_125;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_125;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional152=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional152) {
                                    litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_126, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_126, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj24=((struct list_item$1sTypeph*)come_null_check(litem_126, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_126, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_126;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_126;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_127, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_127, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj25=((struct list_item$1sTypeph*)come_null_check(litem_127, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_127, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_127;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_127;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result83__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result83__;
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
_Bool _if_conditional154;
struct list$1sNodeph* __result85__;
void* right_value107;
void* right_value108;
struct list$1sNodeph* result_128;
struct list_item$1sNodeph* it_129;
_Bool _while_condtional21;
void* right_value113;
struct list$1sNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct list$1sNodeph*));
memset(&it_129, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value113, 0, sizeof(void*));
                    if(_if_conditional154=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional154) {
                        __result85__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_128=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value107=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_129=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional21=it_129!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional21) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_128, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_129, "./comelang2.h", 192))->item)))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        it_129=((struct list_item$1sNodeph*)come_null_check(it_129, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result90__ = __result_obj__ = result_128;
                    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result86__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional155;
void* right_value109;
struct list_item$1sNodeph* litem_130;
struct sNode* __dec_obj27;
_Bool _if_conditional156;
void* right_value110;
struct list_item$1sNodeph* litem_131;
struct sNode* __dec_obj28;
void* right_value111;
struct list_item$1sNodeph* litem_132;
struct sNode* __dec_obj29;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value110, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional155=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional155) {
                                litem_130=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_130, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_130, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj27=((struct list_item$1sNodeph*)come_null_check(litem_130, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_130, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_130;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_130;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional156=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional156) {
                                    litem_131=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value110=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_131, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_131, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj28=((struct list_item$1sNodeph*)come_null_check(litem_131, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_131, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_131;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_131;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_132=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value111=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_132, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_132, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj29=((struct list_item$1sNodeph*)come_null_check(litem_132, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_132, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_132;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_132;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result87__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result87__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional157;
struct sNode* __result88__;
void* right_value112;
struct sNode* result_133;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sNode*));
                            if(_if_conditional157=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional157) {
                                __result88__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result88__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_133=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            if(_if_conditional158=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional158) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional159=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional159) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional160=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional160) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional161=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional161) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional162=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional162) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional163=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional163) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional164=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional164) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional165=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional165) {
                                ((struct sNode*)come_null_check(result_133, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result89__ = __result_obj__ = result_133;
                            if(result_133 && !__freed_obj__) { result_133 = come_decrement_ref_count(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result89__;
                            __freed_obj__ = 0;
                            if(result_133 && !__freed_obj__) { result_133 = come_decrement_ref_count(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional169;
struct list$1charph* __result91__;
void* right_value116;
void* right_value117;
struct list$1charph* result_134;
struct list_item$1charph* it_135;
_Bool _while_condtional22;
void* right_value121;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct list$1charph*));
memset(&it_135, 0, sizeof(struct list_item$1charph*));
memset(&right_value121, 0, sizeof(void*));
                    if(_if_conditional169=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional169) {
                        __result91__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result91__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_134=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value116=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_135=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_135!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_134, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value121=string_clone(((struct list_item$1charph*)come_null_check(it_135, "./comelang2.h", 192))->item)))));
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_135=((struct list_item$1charph*)come_null_check(it_135, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result93__ = __result_obj__ = result_134;
                    if(result_134 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_134, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result93__;
                    __freed_obj__ = 0;
                    if(result_134 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional170;
void* right_value118;
struct list_item$1charph* litem_136;
char* __dec_obj32;
_Bool _if_conditional171;
void* right_value119;
struct list_item$1charph* litem_137;
char* __dec_obj33;
void* right_value120;
struct list_item$1charph* litem_138;
char* __dec_obj34;
struct list$1charph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&litem_136, 0, sizeof(struct list_item$1charph*));
memset(&right_value119, 0, sizeof(void*));
memset(&litem_137, 0, sizeof(struct list_item$1charph*));
memset(&right_value120, 0, sizeof(void*));
memset(&litem_138, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional170=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional170) {
                                litem_136=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_136, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_136, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj32=((struct list_item$1charph*)come_null_check(litem_136, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_136, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_136;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_136;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional171=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    litem_137=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_137, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_137, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj33=((struct list_item$1charph*)come_null_check(litem_137, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_137, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_137;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_137;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_138=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_138, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_138, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj34=((struct list_item$1charph*)come_null_check(litem_138, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_138, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_138;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_138;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result92__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result92__;
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
_Bool _if_conditional173;
struct tuple1$1sTypeph* __result94__;
void* right_value123;
struct tuple1$1sTypeph* result_139;
_Bool _if_conditional174;
void* right_value124;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&result_139, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value124, 0, sizeof(void*));
                    if(_if_conditional173=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional173) {
                        __result94__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_139=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional174=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional174) {
                        __dec_obj36=((struct tuple1$1sTypeph*)come_null_check(result_139, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_139, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result95__ = __result_obj__ = result_139;
                    if(result_139 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_139, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result95__;
                    __freed_obj__ = 0;
                    if(result_139 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_139, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value143;
char* __dec_obj52;
void* right_value144;
void* right_value145;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
void* right_value146;
char* __dec_obj54;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    ((struct sClass*)come_null_check(self, "02transpile.c", 311))->mNumber=number;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 312))->mStruct=struct_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 313))->mUnion=union_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 314))->mGenerics=generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 315))->mMethodGenerics=method_generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 316))->mEnum=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 317))->mProtocol=protocol_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 318))->mFloat=float_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 319))->mEnum=enum_;
    __freed_obj__ = 0;
    __dec_obj52=((struct sClass*)come_null_check(self, "02transpile.c", 321))->mName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 321))->mName=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(name))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 323))->mGenericsNum=generics_num;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 324))->mMethodGenericsNum=method_generics_num;
    __freed_obj__ = 0;
    __dec_obj53=((struct sClass*)come_null_check(self, "02transpile.c", 326))->mFields;
    ((struct sClass*)come_null_check(self, "02transpile.c", 326))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value145=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value144=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 326))))))));
    if(__dec_obj53) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct sClass*)come_null_check(self, "02transpile.c", 328))->mDeclareSName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 328))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 328))->sname))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsTypephph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result99__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj55;
struct sType* __dec_obj56;
struct list$1sTypeph* __dec_obj57;
struct list$1charph* __dec_obj58;
struct list$1charph* __dec_obj59;
void* right_value147;
void* right_value148;
struct sType* __dec_obj60;
struct list$1sTypeph* o2_saved_140;
struct sType* it_143;
_Bool _for_condtionalA8;
void* right_value152;
struct list$1charph* o2_saved_149;
char* it_150;
_Bool _for_condtionalA9;
void* right_value153;
void* right_value154;
void* right_value155;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value156;
void* right_value157;
struct buffer* __dec_obj65;
void* right_value158;
void* right_value159;
struct buffer* __dec_obj66;
void* right_value160;
void* right_value161;
struct buffer* __dec_obj67;
void* right_value162;
void* right_value163;
struct buffer* __dec_obj68;
void* right_value189;
struct sBlock* __dec_obj76;
char* __dec_obj77;
void* right_value190;
char* __dec_obj78;
struct sFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&o2_saved_140, 0, sizeof(struct list$1sTypeph*));
memset(&it_143, 0, sizeof(struct sType*));
memset(&right_value152, 0, sizeof(void*));
memset(&o2_saved_149, 0, sizeof(struct list$1charph*));
memset(&it_150, 0, sizeof(char*));
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
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
    __dec_obj55=((struct sFun*)come_null_check(self, "02transpile.c", 335))->mName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 335))->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj56=((struct sFun*)come_null_check(self, "02transpile.c", 336))->mResultType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 336))->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj57=((struct sFun*)come_null_check(self, "02transpile.c", 337))->mParamTypes;
    ((struct sFun*)come_null_check(self, "02transpile.c", 337))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj57) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj58=((struct sFun*)come_null_check(self, "02transpile.c", 338))->mParamNames;
    ((struct sFun*)come_null_check(self, "02transpile.c", 338))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj58) { come_call_finalizer(list$1charph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj59=((struct sFun*)come_null_check(self, "02transpile.c", 339))->mParamDefaultParametors;
    ((struct sFun*)come_null_check(self, "02transpile.c", 339))->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj59) { come_call_finalizer(list$1charph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 340))->mExternal=external;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 341))->mVarArgs=var_args;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 342))->mStatic=static_;
    __freed_obj__ = 0;
    __dec_obj60=((struct sFun*)come_null_check(self, "02transpile.c", 344))->mLambdaType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 344))->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 344)))),"lambda",(_Bool)0,info))));
    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_140=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_143=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_140), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_140), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_143=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_140), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 347))->mLambdaType, "02transpile.c", 347))->mParamTypes, "02transpile.c", 347)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(it_143)))));
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_140 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_149=(struct list$1charph*)come_increment_ref_count((param_names)),it_150=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_149), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_149), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    _for_condtionalA9;    it_150=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_149), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    0    ){
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 351))->mLambdaType, "02transpile.c", 351))->mParamNames, "02transpile.c", 351)),(char*)come_increment_ref_count(((char*)(right_value153=string_clone(it_150)))));
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_149 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj64=((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 354))->mLambdaType, "02transpile.c", 354))->mResultType;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 354))->mLambdaType, "02transpile.c", 354))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value155=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 354)))),(struct sType*)come_increment_ref_count(result_type)))));
    if(__dec_obj64) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 355))->mLambdaType, "02transpile.c", 355))->mVarArgs=var_args;
    __freed_obj__ = 0;
    __dec_obj65=((struct sFun*)come_null_check(self, "02transpile.c", 357))->mSource;
    ((struct sFun*)come_null_check(self, "02transpile.c", 357))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value157=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value156=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 357))))))));
    if(__dec_obj65) { come_call_finalizer(buffer_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj66=((struct sFun*)come_null_check(self, "02transpile.c", 358))->mSourceHead;
    ((struct sFun*)come_null_check(self, "02transpile.c", 358))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 358))))))));
    if(__dec_obj66) { come_call_finalizer(buffer_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj67=((struct sFun*)come_null_check(self, "02transpile.c", 359))->mSourceHead2;
    ((struct sFun*)come_null_check(self, "02transpile.c", 359))->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 359))))))));
    if(__dec_obj67) { come_call_finalizer(buffer_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj68=((struct sFun*)come_null_check(self, "02transpile.c", 360))->mSourceDefer;
    ((struct sFun*)come_null_check(self, "02transpile.c", 360))->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value163=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value162=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 360))))))));
    if(__dec_obj68) { come_call_finalizer(buffer_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj76=((struct sFun*)come_null_check(self, "02transpile.c", 362))->mBlock;
    ((struct sFun*)come_null_check(self, "02transpile.c", 362))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value189=sBlock_clone(block))));
    if(__dec_obj76) { come_call_finalizer(sBlock_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj77=((struct sFun*)come_null_check(self, "02transpile.c", 364))->mComeHeader;
    ((struct sFun*)come_null_check(self, "02transpile.c", 364))->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj78=((struct sFun*)come_null_check(self, "02transpile.c", 366))->mDeclareSName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 366))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(declare_sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result131__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional213;
struct sType* result_141;
struct sType* __result101__;
_Bool _if_conditional214;
struct sType* __result102__;
struct sType* result_142;
struct sType* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_141, 0, sizeof(struct sType*));
memset(&result_142, 0, sizeof(struct sType*));
        if(_if_conditional213=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional213) {
            __freed_obj__ = 0;
            memset(&result_141,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = result_141;
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional214=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional214) {
            __result102__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result102__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_142,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result103__ = __result_obj__ = result_142;
        __freed_obj__ = 0;
        return __result103__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result104__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional215;
struct sType* result_144;
struct sType* __result105__;
_Bool _if_conditional216;
struct sType* __result106__;
struct sType* result_145;
struct sType* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_144, 0, sizeof(struct sType*));
memset(&result_145, 0, sizeof(struct sType*));
        if(_if_conditional215=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional215) {
            __freed_obj__ = 0;
            memset(&result_144,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result105__ = __result_obj__ = result_144;
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional216=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional216) {
            __result106__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_145,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result107__ = __result_obj__ = result_145;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional217;
void* right_value149;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj61;
_Bool _if_conditional218;
void* right_value150;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj62;
void* right_value151;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj63;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value150, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value151, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional217=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional217) {
                litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 276))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_146;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_146;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional218=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional218) {
                    litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj62=((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 286))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_147;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_147;
                    __freed_obj__ = 0;
                }
                else {
                    litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value151=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj63=((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 296))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_148;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_148;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result108__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional219;
struct sBlock* __result109__;
void* right_value164;
struct sBlock* result_151;
_Bool _if_conditional222;
void* right_value168;
struct list$1sNodeph* __dec_obj69;
_Bool _if_conditional224;
void* right_value188;
struct sVarTable* __dec_obj75;
struct sBlock* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct sBlock*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
        if(_if_conditional219=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional219) {
            __result109__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result109__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_151=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value164=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional222=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mNodes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional222) {
            __dec_obj69=((struct sBlock*)come_null_check(result_151, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_151, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value168=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj69) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional224=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 6))->mVarTable!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional224) {
            __dec_obj75=((struct sBlock*)come_null_check(result_151, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_151, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value188=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj75) { come_call_finalizer(sVarTable_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result130__ = __result_obj__ = result_151;
        if(result_151 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_151, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
        if(result_151 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_151, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional220=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional223;
struct list$1sNodeph* __result110__;
void* right_value165;
void* right_value166;
struct list$1sNodeph* result_152;
struct list_item$1sNodeph* it_153;
_Bool _while_condtional23;
void* right_value167;
struct list$1sNodeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct list$1sNodeph*));
memset(&it_153, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value167, 0, sizeof(void*));
                if(_if_conditional223=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional223) {
                    __result110__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result110__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_152=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value166=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value165=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_153=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional23=it_153!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional23) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_152, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_153, "./comelang2.h", 192))->item)))));
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    it_153=((struct list_item$1sNodeph*)come_null_check(it_153, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result111__ = __result_obj__ = result_152;
                if(result_152 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result111__;
                __freed_obj__ = 0;
                if(result_152 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional225;
struct sVarTable* __result112__;
void* right_value169;
struct sVarTable* result_154;
_Bool _if_conditional226;
void* right_value187;
struct map$2charphsVarph* __dec_obj74;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct sVarTable* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct sVarTable*));
memset(&right_value187, 0, sizeof(void*));
                if(_if_conditional225=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional225) {
                    __result112__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result112__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_154=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value169=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional226=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mVars!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional226) {
                    __dec_obj74=((struct sVarTable*)come_null_check(result_154, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_154, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value187=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj74) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional260=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional260) {
                    ((struct sVarTable*)come_null_check(result_154, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional261=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional261) {
                    ((struct sVarTable*)come_null_check(result_154, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional262=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional262) {
                    ((struct sVarTable*)come_null_check(result_154, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result129__ = __result_obj__ = result_154;
                if(result_154 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_154, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
                if(result_154 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_154, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional227;
struct map$2charphsVarph* __result113__;
void* right_value170;
void* right_value171;
struct map$2charphsVarph* result_155;
char* it_158;
_Bool _for_condtionalA10;
struct sVar* default_value_161;
void* right_value173;
struct sVar* it2_164;
void* right_value186;
struct map$2charphsVarph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct map$2charphsVarph*));
memset(&it_158, 0, sizeof(char*));
memset(&default_value_161, 0, sizeof(struct sVar*));
memset(&right_value173, 0, sizeof(void*));
memset(&it2_164, 0, sizeof(struct sVar*));
memset(&right_value186, 0, sizeof(void*));
                        if(_if_conditional227=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional227) {
                            __result113__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result113__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_155=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value171=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value170=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1215))))))));
                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        for(
                        it_158=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_158=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_161,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_164=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value173=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1221)),it_158,default_value_161))));
                            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_155, "./comelang2.h", 1223)),it_158,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value186=sVar_clone(it2_164)))));
                            if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(it2_164 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        __result128__ = __result_obj__ = result_155;
                        if(result_155 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result128__;
                        __freed_obj__ = 0;
                        if(result_155 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional228;
char* result_156;
char* __result114__;
_Bool _if_conditional229;
char* __result115__;
char* result_157;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                            if(_if_conditional228=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional228) {
                                __freed_obj__ = 0;
                                memset(&result_156,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result114__ = __result_obj__ = result_156;
                                __freed_obj__ = 0;
                                return __result114__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional229=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                            __freed_obj__ = 0, 
                            _if_conditional229) {
                                __result115__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                __freed_obj__ = 0;
                                return __result115__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_157,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result116__ = __result_obj__ = result_157;
                            __freed_obj__ = 0;
                            return __result116__;
                            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result117__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result117__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional230;
char* result_159;
char* __result118__;
_Bool _if_conditional231;
char* __result119__;
char* result_160;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                            if(_if_conditional230=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional230) {
                                __freed_obj__ = 0;
                                memset(&result_159,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result118__ = __result_obj__ = result_159;
                                __freed_obj__ = 0;
                                return __result118__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional231=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                            __freed_obj__ = 0, 
                            _if_conditional231) {
                                __result119__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                __freed_obj__ = 0;
                                return __result119__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_160,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result120__ = __result_obj__ = result_160;
                            __freed_obj__ = 0;
                            return __result120__;
                            __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_162;
unsigned int it_163;
_Bool _while_condtional24;
_Bool _if_conditional232;
void* right_value172;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional233;
struct sVar* __result121__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sVar* __result122__;
struct sVar* __result123__;
struct sVar* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_162, 0, sizeof(unsigned int));
memset(&it_163, 0, sizeof(unsigned int));
memset(&right_value172, 0, sizeof(void*));
                                hash_162=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                __freed_obj__ = 0;
                                it_163=hash_162;
                                __freed_obj__ = 0;
                                while(_while_condtional24=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional24) {
                                    if(_if_conditional232=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_163],                                    __freed_obj__ = 0, 
                                    _if_conditional232) {
                                        if(_if_conditional233=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value172=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_163], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                        (right_value172 && right_value172 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional233) {
                                            __result121__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_163];
                                            __freed_obj__ = 0;
                                            return __result121__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_163++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional234=it_163>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional234) {
                                            it_163=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional235=it_163==hash_162,                                            __freed_obj__ = 0, 
                                            _if_conditional235) {
                                                __result122__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result122__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result123__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result123__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result124__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result124__;
                                __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional236;
unsigned int hash_176;
int it_177;
_Bool _while_condtional26;
_Bool _if_conditional240;
void* right_value179;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool same_key_exist_178;
char* it2_179;
_Bool _for_condtionalA12;
void* right_value180;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsVarph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&same_key_exist_178, 0, sizeof(_Bool));
memset(&it2_179, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
                                if(_if_conditional236=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size,                                __freed_obj__ = 0, 
                                _if_conditional236) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1498)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_176=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1500)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size;
                                __freed_obj__ = 0;
                                it_177=hash_176;
                                __freed_obj__ = 0;
                                while(_while_condtional26=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional26) {
                                    if(_if_conditional240=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1556))->item_existance[it_177],                                    __freed_obj__ = 0, 
                                    _if_conditional240) {
                                        if(_if_conditional241=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1527),__exception_result_var_a6=((struct optional$2boolbool*)(right_value179=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->keys[it_177], "./comelang2.h", 1527)),key))), come_pop_stackframe(), __exception_result_var_a6)),                                        (right_value179 && right_value179 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional241) {
                                            if(_if_conditional242=1,                                            __freed_obj__ = 0, 
                                            _if_conditional242) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_177] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_177] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_177], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->key_list, "./comelang2.h", 1510)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->keys[it_177]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->keys[it_177]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->key_list, "./comelang2.h", 1514)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_177]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_177]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional243=1,                                            __freed_obj__ = 0, 
                                            _if_conditional243) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_177] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_177], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->items[it_177]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->items[it_177]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_177++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional244=it_177>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1536))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional244) {
                                            it_177=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional245=it_177==hash_176,                                            __freed_obj__ = 0, 
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1538))->item_existance[it_177]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional246=1,                                        __freed_obj__ = 0, 
                                        _if_conditional246) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->keys[it_177]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->keys[it_177]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional247=1,                                        __freed_obj__ = 0, 
                                        _if_conditional247) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1546))->items[it_177]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1549))->items[it_177]=item;
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
                                same_key_exist_178=(_Bool)0;
                                __freed_obj__ = 0;
                                for(
                                it2_179=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA12=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA12;                                it2_179=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional248=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1564),__exception_result_var_a7=((struct optional$2boolbool*)(right_value180=string_equals(((char*)come_null_check(it2_179, "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_a7)),                                    (right_value180 && right_value180 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional248) {
                                        same_key_exist_178=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional249=!same_key_exist_178,                                __freed_obj__ = 0, 
                                _if_conditional249) {
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1567))->key_list, "./comelang2.h", 1567)),key);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result125__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result125__;
                                __freed_obj__ = 0;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_165;
void* right_value174;
char** keys_166;
void* right_value175;
struct sVar** items_167;
void* right_value176;
_Bool* item_existance_168;
int len_169;
char* it_170;
_Bool _for_condtionalA11;
struct sVar* default_value_171;
void* right_value177;
struct sVar* it2_172;
unsigned int hash_173;
int n_174;
_Bool _while_condtional25;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sVar* default_value_175;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_165, 0, sizeof(int));
memset(&right_value174, 0, sizeof(void*));
memset(&keys_166, 0, sizeof(char**));
memset(&right_value175, 0, sizeof(void*));
memset(&items_167, 0, sizeof(struct sVar**));
memset(&right_value176, 0, sizeof(void*));
memset(&item_existance_168, 0, sizeof(_Bool*));
memset(&len_169, 0, sizeof(int));
memset(&it_170, 0, sizeof(char*));
memset(&default_value_171, 0, sizeof(struct sVar*));
memset(&right_value177, 0, sizeof(void*));
memset(&it2_172, 0, sizeof(struct sVar*));
memset(&hash_173, 0, sizeof(unsigned int));
memset(&n_174, 0, sizeof(int));
memset(&default_value_175, 0, sizeof(struct sVar*));
memset(&right_value178, 0, sizeof(void*));
                                        size_165=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                        __freed_obj__ = 0;
                                        keys_166=(char**)come_increment_ref_count(((char**)(right_value174=(char**)come_calloc(1, sizeof(char*)*(1*(size_165)), "./comelang2.h", 1370))));
                                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        items_167=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value175=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_165)), "./comelang2.h", 1371))));
                                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        item_existance_168=(_Bool*)come_increment_ref_count(((_Bool*)(right_value176=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_165)), "./comelang2.h", 1372))));
                                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        len_169=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_170=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA11=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA11;                                        it_170=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_171,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_172=((struct sVar*)(right_value177=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_170,default_value_171)));
                                            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            hash_173=string_get_hash_key(((char*)come_null_check(it_170, "./comelang2.h", 1380)))%size_165;
                                            __freed_obj__ = 0;
                                            n_174=hash_173;
                                            __freed_obj__ = 0;
                                            while(_while_condtional25=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional25) {
                                                if(_if_conditional237=item_existance_168[n_174],                                                __freed_obj__ = 0, 
                                                _if_conditional237) {
                                                    n_174++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional238=n_174>=size_165,                                                    __freed_obj__ = 0, 
                                                    _if_conditional238) {
                                                        n_174=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional239=n_174==hash_173,                                                        __freed_obj__ = 0, 
                                                        _if_conditional239) {
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
                                                    item_existance_168[n_174]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    keys_166[n_174]=it_170;
                                                    __freed_obj__ = 0;
                                                    __freed_obj__ = 0;
                                                    items_167[n_174]=((struct sVar*)(right_value178=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_170,default_value_175)));
                                                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    len_169++;
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_166;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_167;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_168;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_165;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_169;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional250;
struct sVar* __result126__;
void* right_value181;
struct sVar* result_180;
_Bool _if_conditional251;
void* right_value182;
char* __dec_obj70;
_Bool _if_conditional252;
void* right_value183;
char* __dec_obj71;
_Bool _if_conditional253;
void* right_value184;
struct sType* __dec_obj72;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value185;
char* __dec_obj73;
struct sVar* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
memset(&result_180, 0, sizeof(struct sVar*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
                                if(_if_conditional250=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional250) {
                                    __result126__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result126__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_180=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value181=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3))));
                                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional251=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 5))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional251) {
                                    __dec_obj70=((struct sVar*)come_null_check(result_180, "sVar_clone", 4))->mName;
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value182=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 4))->mName))));
                                    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional252=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 6))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional252) {
                                    __dec_obj71=((struct sVar*)come_null_check(result_180, "sVar_clone", 5))->mCValueName;
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 5))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 5))->mCValueName))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional253=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 7))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional253) {
                                    __dec_obj72=((struct sVar*)come_null_check(result_180, "sVar_clone", 6))->mType;
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 6))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(((struct sVar*)come_null_check(self, "sVar_clone", 6))->mType))));
                                    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional254=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional254) {
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 7))->mBlockLevel=((struct sVar*)come_null_check(self, "sVar_clone", 7))->mBlockLevel;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional255=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional255) {
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 8))->mGlobal=((struct sVar*)come_null_check(self, "sVar_clone", 8))->mGlobal;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional256=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional256) {
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 9))->mAllocaValue=((struct sVar*)come_null_check(self, "sVar_clone", 9))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional257=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional257) {
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 10))->mFunctionParam=((struct sVar*)come_null_check(self, "sVar_clone", 10))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional258=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional258) {
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 11))->mNoFree=((struct sVar*)come_null_check(self, "sVar_clone", 11))->mNoFree;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional259=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 13))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional259) {
                                    __dec_obj73=((struct sVar*)come_null_check(result_180, "sVar_clone", 12))->mFunName;
                                    ((struct sVar*)come_null_check(result_180, "sVar_clone", 12))->mFunName=(char*)come_increment_ref_count(((char*)(right_value185=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 12))->mFunName))));
                                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result127__ = __result_obj__ = result_180;
                                if(result_180 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result127__;
                                __freed_obj__ = 0;
                                if(result_180 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional263;
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
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional263=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional263) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional264=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional264) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional265=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional265) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional266=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional266) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional267=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional267) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional268=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional268) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional269=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional269) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional270=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional271=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional272=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void init_classes(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
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
void* right_value221;
void* right_value222;
void* right_value223;
int i_181;
_Bool _for_condtionalA13;
void* right_value224;
char* generics_type_182;
void* right_value225;
void* right_value226;
int rc_184;
_Bool _if_conditional276;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
char* type_name_185;
void* right_value231;
void* right_value232;
struct sType* type_186;
void* right_value233;
char* __dec_obj79;
void* right_value242;
void* right_value243;
void* right_value244;
struct sClass* klass_208;
void* right_value248;
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
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&i_181, 0, sizeof(int));
memset(&right_value224, 0, sizeof(void*));
memset(&generics_type_182, 0, sizeof(char*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&rc_184, 0, sizeof(int));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&type_name_185, 0, sizeof(char*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&type_186, 0, sizeof(struct sType*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&klass_208, 0, sizeof(struct sClass*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
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
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 373))->classes, "02transpile.c", 373)),(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 373)))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 374))->classes, "02transpile.c", 374)),(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 374)))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 375))->classes, "02transpile.c", 375)),(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 375)))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 376))->classes, "02transpile.c", 376)),(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 376)))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 377))->classes, "02transpile.c", 377)),(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value204=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 377)))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 378))->classes, "02transpile.c", 378)),(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 378)))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 379))->classes, "02transpile.c", 379)),(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 379)))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 380))->classes, "02transpile.c", 380)),(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 380)))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 381))->classes, "02transpile.c", 381)),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 381)))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 382))->classes, "02transpile.c", 382)),(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 382)))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 383))->classes, "02transpile.c", 383)),(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 383)))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_181=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_181<12 ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_181++ ,    __freed_obj__ = 0, 
    0    ){
        generics_type_182=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("generics_type%d",i_181))));
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 386))->classes, "02transpile.c", 386)),(char*)come_increment_ref_count(generics_type_182),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 386)))),generics_type_182,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_181,-1,(_Bool)0,info)))));
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(generics_type_182 && !__freed_obj__) { generics_type_182 = come_decrement_ref_count(generics_type_182, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    char cmd_183[1024];
    memset(&cmd_183, 0, sizeof(char)    *(1024)    );
    __freed_obj__ = 0;
    snprintf(cmd_183,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    __freed_obj__ = 0;
    rc_184=system(cmd_183);
    __freed_obj__ = 0;
    if(_if_conditional276=rc_184==0,    __freed_obj__ = 0, 
    _if_conditional276) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 394))->classes, "02transpile.c", 394)),(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 394)))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_name_185=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("__builtin_va_list"))));
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 398)))),"__builtin_va_list",(_Bool)0,info))));
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj79=((struct sType*)come_null_check(type_186, "02transpile.c", 399))->mOriginalTypeName;
        ((struct sType*)come_null_check(type_186, "02transpile.c", 399))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string("__builtin_va_list"))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 401))->types, "02transpile.c", 401)),(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(type_name_185)))),(struct sType*)come_increment_ref_count(type_186));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
        if(type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        klass_208=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value243=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 406)))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_208, "02transpile.c", 408))->mFields, "02transpile.c", 408)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value254=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value248=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 408)))),(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 408)))),"char*",(_Bool)0,info)))))))));
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_208, "02transpile.c", 409))->mFields, "02transpile.c", 409)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value259=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 409)))),(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 409)))),"char*",(_Bool)0,info)))))))));
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_208, "02transpile.c", 410))->mFields, "02transpile.c", 410)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value264=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 410)))),(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 410)))),"char*",(_Bool)0,info)))))))));
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_208, "02transpile.c", 411))->mFields, "02transpile.c", 411)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 411)))),(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 411)))),"int",(_Bool)0,info)))))))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_208, "02transpile.c", 412))->mFields, "02transpile.c", 412)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value270=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 412)))),(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 412)))),"int",(_Bool)0,info)))))))));
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 414))->classes, "02transpile.c", 414)),(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(klass_208));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(klass_208 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional277;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional29;
_Bool _if_conditional289;
void* right_value240;
struct optional$2boolbool* __exception_result_var_a9;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool same_key_exist_206;
char* it2_207;
_Bool _for_condtionalA15;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a10;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct map$2charphsTypeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
memset(&right_value240, 0, sizeof(void*));
memset(&same_key_exist_206, 0, sizeof(_Bool));
memset(&it2_207, 0, sizeof(char*));
memset(&right_value241, 0, sizeof(void*));
            if(_if_conditional277=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional277) {
                map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_204=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_205=hash_204;
            __freed_obj__ = 0;
            while(_while_condtional29=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional29) {
                if(_if_conditional289=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_205],                __freed_obj__ = 0, 
                _if_conditional289) {
                    if(_if_conditional290=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a9=((struct optional$2boolbool*)(right_value240=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_205], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a9)),                    (right_value240 && right_value240 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        if(_if_conditional291=1,                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_205]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_205] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_205] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_205], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_205]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_205]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_205]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional292=1,                        __freed_obj__ = 0, 
                        _if_conditional292) {
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_205] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_205], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->items[it_205]=(struct sType*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->items[it_205]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_205++;
                    __freed_obj__ = 0;
                    if(_if_conditional293=it_205>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        it_205=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional294=it_205==hash_204,                        __freed_obj__ = 0, 
                        _if_conditional294) {
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
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_205]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional295=1,                    __freed_obj__ = 0, 
                    _if_conditional295) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_205]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_205]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional296=1,                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1470))->items[it_205]=(struct sType*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->items[it_205]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_206=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_207=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA15=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA15;            it2_207=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional297=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a10=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(it2_207, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a10)),                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional297) {
                    same_key_exist_206=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional298=!same_key_exist_206,            __freed_obj__ = 0, 
            _if_conditional298) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result143__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_187;
void* right_value234;
char** keys_188;
void* right_value235;
struct sType** items_189;
void* right_value236;
_Bool* item_existance_190;
int len_191;
char* it_194;
_Bool _for_condtionalA14;
struct sType* default_value_197;
void* right_value238;
struct sType* it2_200;
unsigned int hash_201;
int n_202;
_Bool _while_condtional28;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct sType* default_value_203;
void* right_value239;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_187, 0, sizeof(int));
memset(&right_value234, 0, sizeof(void*));
memset(&keys_188, 0, sizeof(char**));
memset(&right_value235, 0, sizeof(void*));
memset(&items_189, 0, sizeof(struct sType**));
memset(&right_value236, 0, sizeof(void*));
memset(&item_existance_190, 0, sizeof(_Bool*));
memset(&len_191, 0, sizeof(int));
memset(&it_194, 0, sizeof(char*));
memset(&default_value_197, 0, sizeof(struct sType*));
memset(&right_value238, 0, sizeof(void*));
memset(&it2_200, 0, sizeof(struct sType*));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&n_202, 0, sizeof(int));
memset(&default_value_203, 0, sizeof(struct sType*));
memset(&right_value239, 0, sizeof(void*));
                    size_187=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_188=(char**)come_increment_ref_count(((char**)(right_value234=(char**)come_calloc(1, sizeof(char*)*(1*(size_187)), "./comelang2.h", 1370))));
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_189=(struct sType**)come_increment_ref_count(((struct sType**)(right_value235=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_187)), "./comelang2.h", 1371))));
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_190=(_Bool*)come_increment_ref_count(((_Bool*)(right_value236=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_187)), "./comelang2.h", 1372))));
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_191=0;
                    __freed_obj__ = 0;
                    for(
                    it_194=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA14=                    !map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA14;                    it_194=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_197,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        it2_200=((struct sType*)(right_value238=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1379)),it_194,default_value_197)));
                        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_201=string_get_hash_key(((char*)come_null_check(it_194, "./comelang2.h", 1380)))%size_187;
                        __freed_obj__ = 0;
                        n_202=hash_201;
                        __freed_obj__ = 0;
                        while(_while_condtional28=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional28) {
                            if(_if_conditional286=item_existance_190[n_202],                            __freed_obj__ = 0, 
                            _if_conditional286) {
                                n_202++;
                                __freed_obj__ = 0;
                                if(_if_conditional287=n_202>=size_187,                                __freed_obj__ = 0, 
                                _if_conditional287) {
                                    n_202=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional288=n_202==hash_201,                                    __freed_obj__ = 0, 
                                    _if_conditional288) {
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
                                item_existance_190[n_202]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_188[n_202]=it_194;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_189[n_202]=((struct sType*)(right_value239=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1400)),it_194,default_value_203)));
                                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_191++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_188;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1413))->items=items_189;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_190;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->size=size_187;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->len=len_191;
                    __freed_obj__ = 0;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional278;
char* result_192;
char* __result132__;
_Bool _if_conditional279;
char* __result133__;
char* result_193;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_192, 0, sizeof(char*));
memset(&result_193, 0, sizeof(char*));
                        if(_if_conditional278=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional278) {
                            __freed_obj__ = 0;
                            memset(&result_192,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result132__ = __result_obj__ = result_192;
                            __freed_obj__ = 0;
                            return __result132__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional279=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional279) {
                            __result133__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result133__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_193,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result134__ = __result_obj__ = result_193;
                        __freed_obj__ = 0;
                        return __result134__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result135__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result135__;
                        __freed_obj__ = 0;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional280;
char* result_195;
char* __result136__;
_Bool _if_conditional281;
char* __result137__;
char* result_196;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_195, 0, sizeof(char*));
memset(&result_196, 0, sizeof(char*));
                        if(_if_conditional280=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional280) {
                            __freed_obj__ = 0;
                            memset(&result_195,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result136__ = __result_obj__ = result_195;
                            __freed_obj__ = 0;
                            return __result136__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional281=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional281) {
                            __result137__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result137__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_196,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result138__ = __result_obj__ = result_196;
                        __freed_obj__ = 0;
                        return __result138__;
                        __freed_obj__ = 0;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_198;
unsigned int it_199;
_Bool _while_condtional27;
_Bool _if_conditional282;
void* right_value237;
struct optional$2boolbool* __exception_result_var_a8;
_Bool _if_conditional283;
struct sType* __result139__;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sType* __result140__;
struct sType* __result141__;
struct sType* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_198, 0, sizeof(unsigned int));
memset(&it_199, 0, sizeof(unsigned int));
memset(&right_value237, 0, sizeof(void*));
                            hash_198=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_199=hash_198;
                            __freed_obj__ = 0;
                            while(_while_condtional27=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional27) {
                                if(_if_conditional282=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_199],                                __freed_obj__ = 0, 
                                _if_conditional282) {
                                    if(_if_conditional283=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a8=((struct optional$2boolbool*)(right_value237=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_199], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a8)),                                    (right_value237 && right_value237 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional283) {
                                        __result139__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1266))->items[it_199];
                                        __freed_obj__ = 0;
                                        return __result139__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_199++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional284=it_199>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional284) {
                                        it_199=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional285=it_199==hash_198,                                        __freed_obj__ = 0, 
                                        _if_conditional285) {
                                            __result140__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result140__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result141__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result141__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result142__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result142__;
                            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional299;
void* right_value245;
struct list_item$1tuple2$2charphsTypephph* litem_209;
struct tuple2$2charphsTypeph* __dec_obj80;
_Bool _if_conditional302;
void* right_value246;
struct list_item$1tuple2$2charphsTypephph* litem_210;
struct tuple2$2charphsTypeph* __dec_obj81;
void* right_value247;
struct list_item$1tuple2$2charphsTypephph* litem_211;
struct tuple2$2charphsTypeph* __dec_obj82;
struct list$1tuple2$2charphsTypephph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value245, 0, sizeof(void*));
memset(&litem_209, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value246, 0, sizeof(void*));
memset(&litem_210, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value247, 0, sizeof(void*));
memset(&litem_211, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional299=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional299) {
                litem_209=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value245=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_209, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_209, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj80=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_209, "./comelang2.h", 276))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_209, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj80) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_209;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_209;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional302=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional302) {
                    litem_210=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value246=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_210, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_210, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj81=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_210, "./comelang2.h", 286))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_210, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj81) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_210;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_210;
                    __freed_obj__ = 0;
                }
                else {
                    litem_211=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_211, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_211, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj82=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_211, "./comelang2.h", 296))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_211, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj82) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_211;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_211;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result144__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional300=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional300) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional301=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional301) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value249;
char* __dec_obj83;
void* right_value250;
struct sType* __dec_obj84;
struct tuple2$2charphsTypeph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
            __dec_obj83=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value249=string_clone(v1))));
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj84=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(v2))));
            if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result145__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result145__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void init_module(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value276;
char* project_name_212;
void* right_value277;
char* cc_213;
void* right_value278;
char* install_214;
void* right_value279;
char* libs_215;
void* right_value280;
char* os_216;
void* right_value281;
char* prefix_217;
void* right_value282;
char* cflags_218;
_Bool _or_conditional1;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&project_name_212, 0, sizeof(char*));
memset(&right_value277, 0, sizeof(void*));
memset(&cc_213, 0, sizeof(char*));
memset(&right_value278, 0, sizeof(void*));
memset(&install_214, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&libs_215, 0, sizeof(char*));
memset(&right_value280, 0, sizeof(void*));
memset(&os_216, 0, sizeof(char*));
memset(&right_value281, 0, sizeof(void*));
memset(&prefix_217, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&cflags_218, 0, sizeof(char*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
    project_name_212=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(argv[2]))));
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    cc_213=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("comelang2"))));
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    install_214=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("install"))));
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    libs_215=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("-lpcre"))));
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    os_216=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("linux"))));
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    prefix_217=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string("/usr/local/"))));
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    cflags_218=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(" -common-header "))));
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_or_conditional1=mkdir(project_name_212,448|56|4|1),    __freed_obj__ = 0, 
    _or_conditional1 != 0) {
        die("mkdir error");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 515),((struct optional$2intbool*)(right_value307=charp_write(((char*)come_null_check(((char*)(right_value304=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\n\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s\n\ndistclean: clean\n\trm -fR config.h Makefile autom4te.cache\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\t./\%s\n",((char*)(right_value283=string_to_string(prefix_217))),((char*)(right_value284=string_to_string(project_name_212))),((char*)(right_value285=string_to_string(project_name_212))),((char*)(right_value286=string_to_string(project_name_212))),((char*)(right_value287=string_to_string(project_name_212))),((char*)(right_value288=string_to_string(cc_213))),((char*)(right_value289=string_to_string(install_214))),((char*)(right_value290=string_to_string(cflags_218))),((char*)(right_value291=string_to_string(libs_215))),((char*)(right_value292=string_to_string(os_216))),((char*)(right_value293=string_to_string(prefix_217))),((char*)(right_value294=string_to_string(project_name_212))),((char*)(right_value295=string_to_string(project_name_212))),((char*)(right_value296=string_to_string(project_name_212))),((char*)(right_value297=string_to_string(project_name_212))),((char*)(right_value298=string_to_string(project_name_212))),((char*)(right_value299=string_to_string(project_name_212))),((char*)(right_value300=string_to_string(project_name_212))),((char*)(right_value301=string_to_string(project_name_212))),((char*)(right_value302=string_to_string(project_name_212))),((char*)(right_value303=string_to_string(project_name_212)))))), "02transpile.c", 515)),((char*)(right_value306=xsprintf("\%s/Makefile",((char*)(right_value305=string_to_string(project_name_212)))))),(_Bool)0)))));
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result146__ = (_Bool)1;
    if(project_name_212 && !__freed_obj__) { project_name_212 = come_decrement_ref_count(project_name_212, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_213 && !__freed_obj__) { cc_213 = come_decrement_ref_count(cc_213, (void*)0, (void*)0, 0, 0, 0); }
    if(install_214 && !__freed_obj__) { install_214 = come_decrement_ref_count(install_214, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_215 && !__freed_obj__) { libs_215 = come_decrement_ref_count(libs_215, (void*)0, (void*)0, 0, 0, 0); }
    if(os_216 && !__freed_obj__) { os_216 = come_decrement_ref_count(os_216, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_217 && !__freed_obj__) { prefix_217 = come_decrement_ref_count(prefix_217, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_218 && !__freed_obj__) { cflags_218 = come_decrement_ref_count(cflags_218, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
    if(project_name_212 && !__freed_obj__) { project_name_212 = come_decrement_ref_count(project_name_212, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_213 && !__freed_obj__) { cc_213 = come_decrement_ref_count(cc_213, (void*)0, (void*)0, 0, 0, 0); }
    if(install_214 && !__freed_obj__) { install_214 = come_decrement_ref_count(install_214, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_215 && !__freed_obj__) { libs_215 = come_decrement_ref_count(libs_215, (void*)0, (void*)0, 0, 0, 0); }
    if(os_216 && !__freed_obj__) { os_216 = come_decrement_ref_count(os_216, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_217 && !__freed_obj__) { prefix_217 = come_decrement_ref_count(prefix_217, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_218 && !__freed_obj__) { cflags_218 = come_decrement_ref_count(cflags_218, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _or_conditional2;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional2=system("make run"),    __freed_obj__ = 0, 
    _or_conditional2 != 0) {
        die("system");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result147__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional303;
void* right_value308;
void* right_value309;
struct buffer* clang_option_219;
void* right_value310;
void* right_value311;
struct buffer* cpp_option_220;
void* right_value312;
void* right_value313;
struct list$1charph* files_221;
void* right_value314;
void* right_value315;
struct list$1charph* object_files_222;
_Bool output_object_file_223;
_Bool output_cpp_file_224;
_Bool output_source_file_flag_225;
void* right_value316;
char* output_file_name_226;
_Bool verbose_227;
_Bool prohibit_common_header_228;
int i_229;
_Bool _for_condtionalA16;
_Bool _if_conditional304;
void* right_value317;
char* __dec_obj85;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value318;
void* right_value319;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value320;
_Bool _if_conditional316;
void* right_value321;
void* right_value322;
struct _IO_FILE* f_230;
_Bool _and_conditional1;
_Bool _or_conditional3;
struct list$1charph* o2_saved_231;
char* it_232;
_Bool _for_condtionalA17;
struct sInfo info_233;
void* right_value323;
char* __dec_obj86;
void* right_value324;
char* __dec_obj87;
void* right_value325;
char* __dec_obj88;
void* right_value326;
char* __dec_obj89;
void* right_value327;
void* right_value333;
struct map$2charphsFunph* __dec_obj91;
void* right_value334;
void* right_value340;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value341;
void* right_value347;
struct map$2charphsClassph* __dec_obj95;
void* right_value348;
void* right_value354;
struct map$2charphsTypeph* __dec_obj97;
void* right_value355;
void* right_value356;
struct sModule* __dec_obj98;
void* right_value357;
void* right_value358;
struct list$1sRightValueObjectph* __dec_obj99;
void* right_value359;
void* right_value360;
struct list$1CVALUEph* __dec_obj100;
void* right_value361;
void* right_value362;
struct sVarTable* __dec_obj101;
void* right_value363;
void* right_value364;
struct sVarTable* lv_table_250;
void* right_value365;
void* right_value366;
struct list$1charph* __dec_obj102;
void* right_value367;
void* right_value368;
struct map$2charphsClassph* __dec_obj103;
static int n_251=0;
void* right_value369;
char* __dec_obj104;
_Bool _if_conditional353;
void* right_value370;
void* right_value371;
void* right_value372;
struct buffer* __dec_obj105;
void* right_value373;
void* right_value374;
void* right_value375;
struct buffer* __dec_obj106;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional379;
_Bool _if_conditional380;
int __result155__;
_Bool _if_conditional381;
_Bool _if_conditional382;
int __result156__;
void* right_value376;
void* right_value377;
struct buffer* clang_option_252;
void* right_value378;
void* right_value379;
struct buffer* cpp_option_253;
void* right_value380;
void* right_value381;
struct list$1charph* files_254;
void* right_value382;
void* right_value383;
struct list$1charph* object_files_255;
_Bool output_object_file_256;
_Bool output_cpp_file_257;
_Bool output_source_file_flag_258;
char* output_file_name_259;
_Bool verbose_260;
int i_261;
_Bool _for_condtionalA30;
_Bool _if_conditional383;
void* right_value384;
char* __dec_obj107;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value385;
void* right_value386;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value387;
_Bool _if_conditional395;
void* right_value388;
void* right_value389;
void* right_value390;
struct list$1charph* o2_saved_262;
char* it_263;
_Bool _for_condtionalA31;
struct sInfo info_264;
void* right_value391;
char* __dec_obj108;
void* right_value392;
char* __dec_obj109;
void* right_value393;
char* __dec_obj110;
void* right_value394;
void* right_value395;
struct map$2charphsFunph* __dec_obj111;
void* right_value396;
void* right_value397;
struct map$2charphsGenericsFunph* __dec_obj112;
void* right_value398;
void* right_value399;
struct map$2charphsClassph* __dec_obj113;
void* right_value400;
void* right_value401;
struct map$2charphsTypeph* __dec_obj114;
void* right_value402;
void* right_value403;
struct sModule* __dec_obj115;
void* right_value404;
void* right_value405;
struct list$1sRightValueObjectph* __dec_obj116;
void* right_value406;
void* right_value407;
struct list$1CVALUEph* __dec_obj117;
void* right_value408;
void* right_value409;
struct sVarTable* __dec_obj118;
void* right_value410;
void* right_value411;
struct sVarTable* lv_table_265;
void* right_value412;
void* right_value413;
struct list$1charph* __dec_obj119;
void* right_value414;
void* right_value415;
struct map$2charphsClassph* __dec_obj120;
_Bool _if_conditional396;
void* right_value416;
void* right_value417;
void* right_value418;
struct buffer* __dec_obj121;
void* right_value419;
void* right_value420;
void* right_value421;
struct buffer* __dec_obj122;
_Bool _if_conditional397;
void* right_value422;
char* __dec_obj123;
char* __dec_obj124;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sInfo info_266;
void* right_value427;
void* right_value428;
char* __dec_obj126;
void* right_value429;
char* __dec_obj127;
_Bool _if_conditional405;
void* right_value430;
char* __dec_obj128;
char* __dec_obj129;
struct __current_stack2__ __current_stack2__;
int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&clang_option_219, 0, sizeof(struct buffer*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&cpp_option_220, 0, sizeof(struct buffer*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&files_221, 0, sizeof(struct list$1charph*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&object_files_222, 0, sizeof(struct list$1charph*));
memset(&output_object_file_223, 0, sizeof(_Bool));
memset(&output_cpp_file_224, 0, sizeof(_Bool));
memset(&output_source_file_flag_225, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&output_file_name_226, 0, sizeof(char*));
memset(&verbose_227, 0, sizeof(_Bool));
memset(&prohibit_common_header_228, 0, sizeof(_Bool));
memset(&i_229, 0, sizeof(int));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&f_230, 0, sizeof(struct _IO_FILE*));
memset(&o2_saved_231, 0, sizeof(struct list$1charph*));
memset(&it_232, 0, sizeof(char*));
memset(&info_233, 0, sizeof(struct sInfo));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&lv_table_250, 0, sizeof(struct sVarTable*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
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
memset(&clang_option_252, 0, sizeof(struct buffer*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&cpp_option_253, 0, sizeof(struct buffer*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&files_254, 0, sizeof(struct list$1charph*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&object_files_255, 0, sizeof(struct list$1charph*));
memset(&output_object_file_256, 0, sizeof(_Bool));
memset(&output_cpp_file_257, 0, sizeof(_Bool));
memset(&output_source_file_flag_258, 0, sizeof(_Bool));
memset(&output_file_name_259, 0, sizeof(char*));
memset(&verbose_260, 0, sizeof(_Bool));
memset(&i_261, 0, sizeof(int));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&o2_saved_262, 0, sizeof(struct list$1charph*));
memset(&it_263, 0, sizeof(char*));
memset(&info_264, 0, sizeof(struct sInfo));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&lv_table_265, 0, sizeof(struct sVarTable*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&info_266, 0, sizeof(struct sInfo));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional303=charp_operator_equals(argv[1],"header")&&argc>=3,    __freed_obj__ = 0, 
    _if_conditional303) {
        gProgramName=argv[0];
        __freed_obj__ = 0;
        clang_option_219=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 532))))))));
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        cpp_option_220=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 533))))))));
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        files_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value313=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value312=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 534))))))));
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        object_files_222=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value315=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value314=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 535))))))));
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        output_object_file_223=(_Bool)0;
        __freed_obj__ = 0;
        output_cpp_file_224=(_Bool)0;
        __freed_obj__ = 0;
        output_source_file_flag_225=(_Bool)0;
        __freed_obj__ = 0;
        output_file_name_226=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string("common.h"))));
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        verbose_227=(_Bool)0;
        __freed_obj__ = 0;
        prohibit_common_header_228=(_Bool)0;
        __freed_obj__ = 0;
        for(
        i_229=2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_229<argc ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_229++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional304=charp_operator_equals(argv[i_229],"-o")&&i_229+1<argc,            __freed_obj__ = 0, 
            _if_conditional304) {
                __dec_obj85=output_file_name_226;
                output_file_name_226=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(argv[i_229+1]))));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                i_229++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional305=charp_operator_equals(argv[i_229],"-str"),                __freed_obj__ = 0, 
                _if_conditional305) {
                    buffer_append_str(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 548))," -lcomelang2-str -lpcre ");
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional306=charp_operator_equals(argv[i_229],"-g"),                    __freed_obj__ = 0, 
                    _if_conditional306) {
                        buffer_append_str(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 551)),"-g ");
                        __freed_obj__ = 0;
                        gComeDebug=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional307=charp_operator_equals(argv[i_229],"-common-header"),                        __freed_obj__ = 0, 
                        _if_conditional307) {
                            gCommonHeader=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional308=charp_operator_equals(argv[i_229],"-v"),                            __freed_obj__ = 0, 
                            _if_conditional308) {
                                buffer_append_str(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 558)),"-v ");
                                __freed_obj__ = 0;
                                verbose_227=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional309=memcmp(argv[i_229],"-I",strlen("-I"))==0,                                __freed_obj__ = 0, 
                                _if_conditional309) {
                                    buffer_append_str(((struct buffer*)come_null_check(cpp_option_220, "02transpile.c", 562)),((char*)(right_value319=charp_operator_add(" ",((char*)(right_value318=charp_operator_add(argv[i_229]," ")))))));
                                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional310=charp_operator_equals(argv[i_229],"-gdwarf-4"),                                    __freed_obj__ = 0, 
                                    _if_conditional310) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 565)),"-gdwarf-4 ");
                                        __freed_obj__ = 0;
                                        gComeDebug=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional311=charp_operator_equals(argv[i_229],"-gc"),                                        __freed_obj__ = 0, 
                                        _if_conditional311) {
                                            gComeGC=(_Bool)1;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional312=charp_operator_equals(argv[i_229],"-s")||charp_operator_equals(argv[i_229],"-S"),                                            __freed_obj__ = 0, 
                                            _if_conditional312) {
                                                output_source_file_flag_225=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional313=charp_operator_equals(argv[i_229],"-c"),                                                __freed_obj__ = 0, 
                                                _if_conditional313) {
                                                    output_object_file_223=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional314=charp_operator_equals(argv[i_229],"-E"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional314) {
                                                        output_cpp_file_224=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional315=argv[i_229][0]==45,                                                        __freed_obj__ = 0, 
                                                        _if_conditional315) {
                                                            buffer_append_str(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 581)),((char*)(right_value320=charp_operator_add(argv[i_229]," "))));
                                                            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional316=memcmp(argv[i_229]+strlen(argv[i_229])-2,".o",2)==0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional316) {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_222, "02transpile.c", 584)),(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string(argv[i_229])))));
                                                                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(files_221, "02transpile.c", 587)),(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(argv[i_229])))));
                                                                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
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
        if(_and_conditional1=f_230=fopen(output_file_name_226,"w"),        __freed_obj__ = 0, 
        _and_conditional1 == 0) {
            die("fopen");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_230);
        __freed_obj__ = 0;
        if(_or_conditional3=truncate(output_file_name_226,0),        __freed_obj__ = 0, 
        _or_conditional3 != 0) {
            die("truncate");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_init_v5();
        __freed_obj__ = 0;
        for(
        o2_saved_231=(struct list$1charph*)come_increment_ref_count((files_221)),it_232=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_231), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_231), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        _for_condtionalA17;        it_232=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_231), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        0        ){
            __freed_obj__ = 0;
            memset(&info_233,0,sizeof(struct sInfo));
            __freed_obj__ = 0;
            __dec_obj86=info_233.base_sname;
            info_233.base_sname=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string(it_232))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj87=info_233.sname;
            info_233.sname=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(it_232))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
            if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_233.sline=1;
            __freed_obj__ = 0;
            info_233.err_num=0;
            __freed_obj__ = 0;
            __dec_obj88=info_233.clang_option;
            info_233.clang_option=(char*)come_increment_ref_count(((char*)(right_value325=buffer_to_string(((struct buffer*)come_null_check(clang_option_219, "02transpile.c", 607))))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
            if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj89=info_233.cpp_option;
            info_233.cpp_option=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(((struct buffer*)come_null_check(cpp_option_220, "02transpile.c", 608))))));
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
            if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_233.no_output_err=(_Bool)0;
            __freed_obj__ = 0;
            __dec_obj91=info_233.funcs;
            info_233.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value333=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value327=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 610))))))));
            if(__dec_obj91) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj93=info_233.generics_funcs;
            info_233.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value340=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value334=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 611))))))));
            if(__dec_obj93) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj95=info_233.classes;
            info_233.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value347=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value341=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 612))))))));
            if(__dec_obj95) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj97=info_233.types;
            info_233.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value354=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value348=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 613))))))));
            if(__dec_obj97) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj98=info_233.module;
            info_233.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value356=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value355=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 614))))))));
            if(__dec_obj98) { come_call_finalizer(sModule_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj99=info_233.right_value_objects;
            info_233.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value358=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value357=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 615))))))));
            if(__dec_obj99) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj100=info_233.stack;
            info_233.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value360=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value359=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 616))))))));
            if(__dec_obj100) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj101=info_233.gv_table;
            info_233.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value362=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value361=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 617)))),(_Bool)1,((void*)0)))));
            if(__dec_obj101) { come_call_finalizer(sVarTable_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            lv_table_250=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value364=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value363=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 618)))),(_Bool)0,((void*)0)))));
            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_233.lv_table=lv_table_250;
            __freed_obj__ = 0;
            __dec_obj102=info_233.generics_type_names;
            info_233.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 620))))))));
            if(__dec_obj102) { come_call_finalizer(list$1charph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj103=info_233.generics_classes;
            info_233.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value368=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value367=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 621))))))));
            if(__dec_obj103) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_233.verbose=verbose_227;
            __freed_obj__ = 0;
            info_233.output_header_file=(_Bool)1;
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            info_233.num_source_files=n_251++;
            __freed_obj__ = 0;
            info_233.max_source_files=list$1charph_length(((struct list$1charph*)come_null_check(files_221, "02transpile.c", 627)));
            __freed_obj__ = 0;
            __dec_obj104=info_233.output_file_name;
            info_233.output_file_name=(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string(output_file_name_226))));
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            init_classes(&info_233);
            __freed_obj__ = 0;
            init_module(&info_233);
            __freed_obj__ = 0;
            if(_if_conditional353=!cpp(&info_233),            __freed_obj__ = 0, 
            _if_conditional353) {
                printf("%s %d: transpile failed\n",info_233.sname,info_233.sline);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj105=info_233.original_source;
            info_233.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value372=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 639),((struct optional$2charphbool*)(right_value371=string_read(((char*)come_null_check(((char*)(right_value370=xsprintf("%s",it_232))), "02transpile.c", 639))))))), "02transpile.c", 639))))));
            if(__dec_obj105) { come_call_finalizer(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj106=info_233.source;
            info_233.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value375=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 640),((struct optional$2charphbool*)(right_value374=string_read(((char*)come_null_check(((char*)(right_value373=xsprintf("%s.i",it_232))), "02transpile.c", 640))))))), "02transpile.c", 640))))));
            if(__dec_obj106) { come_call_finalizer(buffer_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_233.p=((struct buffer*)come_null_check(info_233.source, "02transpile.c", 641))->buf;
            __freed_obj__ = 0;
            info_233.head=((struct buffer*)come_null_check(info_233.source, "02transpile.c", 642))->buf;
            __freed_obj__ = 0;
            if(_if_conditional354=!output_cpp_file_224,            __freed_obj__ = 0, 
            _if_conditional354) {
                transpile_v5(&info_233);
                __freed_obj__ = 0;
                if(_if_conditional355=!output_header_file(&info_233),                __freed_obj__ = 0, 
                _if_conditional355) {
                    printf("%s %d: output source file faield\n",info_233.sname,info_233.sline);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if((&info_233) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_233), (void*)0, (void*)0, 1, 0, 0, 0); }
            if(lv_table_250 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_250, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_231 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_231, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_final_v5();
        __freed_obj__ = 0;
        if(clang_option_219 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cpp_option_220 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(files_221 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(object_files_222 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_222, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(output_file_name_226 && !__freed_obj__) { output_file_name_226 = come_decrement_ref_count(output_file_name_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional379=charp_operator_equals(argv[1],"new")&&argc==3,        __freed_obj__ = 0, 
        _if_conditional379) {
            if(_if_conditional380=!new_project(argc,argv),            __freed_obj__ = 0, 
            _if_conditional380) {
                __result155__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result155__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional381=charp_operator_equals(argv[1],"run")&&argc==2,            __freed_obj__ = 0, 
            _if_conditional381) {
                if(_if_conditional382=!run_project(argc,argv),                __freed_obj__ = 0, 
                _if_conditional382) {
                    __result156__ = (_Bool)0;
                    __freed_obj__ = 0;
                    return __result156__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                gProgramName=argv[0];
                __freed_obj__ = 0;
                clang_option_252=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 669))))))));
                if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                cpp_option_253=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value379=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 670))))))));
                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                files_254=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value381=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value380=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 671))))))));
                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                object_files_255=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value383=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value382=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 672))))))));
                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                output_object_file_256=(_Bool)0;
                __freed_obj__ = 0;
                output_cpp_file_257=(_Bool)0;
                __freed_obj__ = 0;
                output_source_file_flag_258=(_Bool)0;
                __freed_obj__ = 0;
                output_file_name_259=((void*)0);
                __freed_obj__ = 0;
                verbose_260=(_Bool)0;
                __freed_obj__ = 0;
                for(
                i_261=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA30=                i_261<argc ,                __freed_obj__ = 0, 
                _for_condtionalA30;                i_261++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional383=charp_operator_equals(argv[i_261],"-o")&&i_261+1<argc,                    __freed_obj__ = 0, 
                    _if_conditional383) {
                        __dec_obj107=output_file_name_259;
                        output_file_name_259=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(argv[i_261+1]))));
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        i_261++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional384=charp_operator_equals(argv[i_261],"-str"),                        __freed_obj__ = 0, 
                        _if_conditional384) {
                            buffer_append_str(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 684))," -lcomelang2-str -lpcre ");
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional385=charp_operator_equals(argv[i_261],"-common-header"),                            __freed_obj__ = 0, 
                            _if_conditional385) {
                                gCommonHeader=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional386=charp_operator_equals(argv[i_261],"-g"),                                __freed_obj__ = 0, 
                                _if_conditional386) {
                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 690)),"-g ");
                                    __freed_obj__ = 0;
                                    gComeDebug=(_Bool)1;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional387=charp_operator_equals(argv[i_261],"-v"),                                    __freed_obj__ = 0, 
                                    _if_conditional387) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 694)),"-v ");
                                        __freed_obj__ = 0;
                                        verbose_260=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional388=memcmp(argv[i_261],"-I",strlen("-I"))==0,                                        __freed_obj__ = 0, 
                                        _if_conditional388) {
                                            buffer_append_str(((struct buffer*)come_null_check(cpp_option_253, "02transpile.c", 698)),((char*)(right_value386=charp_operator_add(" ",((char*)(right_value385=charp_operator_add(argv[i_261]," ")))))));
                                            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                                            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional389=charp_operator_equals(argv[i_261],"-gdwarf-4"),                                            __freed_obj__ = 0, 
                                            _if_conditional389) {
                                                buffer_append_str(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 701)),"-gdwarf-4 ");
                                                __freed_obj__ = 0;
                                                gComeDebug=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional390=charp_operator_equals(argv[i_261],"-gc"),                                                __freed_obj__ = 0, 
                                                _if_conditional390) {
                                                    gComeGC=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional391=charp_operator_equals(argv[i_261],"-s")||charp_operator_equals(argv[i_261],"-S"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional391) {
                                                        output_source_file_flag_258=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional392=charp_operator_equals(argv[i_261],"-c"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional392) {
                                                            output_object_file_256=(_Bool)1;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional393=charp_operator_equals(argv[i_261],"-E"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional393) {
                                                                output_cpp_file_257=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional394=argv[i_261][0]==45,                                                                __freed_obj__ = 0, 
                                                                _if_conditional394) {
                                                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 717)),((char*)(right_value387=charp_operator_add(argv[i_261]," "))));
                                                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional395=memcmp(argv[i_261]+strlen(argv[i_261])-2,".o",2)==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional395) {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_255, "02transpile.c", 720)),(char*)come_increment_ref_count(((char*)(right_value388=__builtin_string(argv[i_261])))));
                                                                        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(files_254, "02transpile.c", 723)),(char*)come_increment_ref_count(((char*)(right_value390=string_clone(((char*)(right_value389=__builtin_string(argv[i_261]))))))));
                                                                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                                                        if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
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
                come_init_v5();
                __freed_obj__ = 0;
                for(
                o2_saved_262=(struct list$1charph*)come_increment_ref_count((files_254)),it_263=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_262), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA31=                !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_262), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                _for_condtionalA31;                it_263=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_262), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&info_264,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    __dec_obj108=info_264.sname;
                    info_264.sname=(char*)come_increment_ref_count(((char*)(right_value391=__builtin_string(it_263))));
                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_264.sline=1;
                    __freed_obj__ = 0;
                    info_264.err_num=0;
                    __freed_obj__ = 0;
                    __dec_obj109=info_264.clang_option;
                    info_264.clang_option=(char*)come_increment_ref_count(((char*)(right_value392=buffer_to_string(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 737))))));
                    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj110=info_264.cpp_option;
                    info_264.cpp_option=(char*)come_increment_ref_count(((char*)(right_value393=buffer_to_string(((struct buffer*)come_null_check(cpp_option_253, "02transpile.c", 738))))));
                    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_264.no_output_err=(_Bool)0;
                    __freed_obj__ = 0;
                    __dec_obj111=info_264.funcs;
                    info_264.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value395=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value394=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 740))))))));
                    if(__dec_obj111) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj112=info_264.generics_funcs;
                    info_264.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value397=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value396=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 741))))))));
                    if(__dec_obj112) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj113=info_264.classes;
                    info_264.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value399=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value398=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 742))))))));
                    if(__dec_obj113) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj114=info_264.types;
                    info_264.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value401=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value400=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 743))))))));
                    if(__dec_obj114) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj115=info_264.module;
                    info_264.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value403=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value402=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 744))))))));
                    if(__dec_obj115) { come_call_finalizer(sModule_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj116=info_264.right_value_objects;
                    info_264.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value405=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value404=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 745))))))));
                    if(__dec_obj116) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj117=info_264.stack;
                    info_264.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value407=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value406=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 746))))))));
                    if(__dec_obj117) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj118=info_264.gv_table;
                    info_264.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value409=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value408=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 747)))),(_Bool)1,((void*)0)))));
                    if(__dec_obj118) { come_call_finalizer(sVarTable_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    lv_table_265=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value411=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value410=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 748)))),(_Bool)0,((void*)0)))));
                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_264.lv_table=lv_table_265;
                    __freed_obj__ = 0;
                    __dec_obj119=info_264.generics_type_names;
                    info_264.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value413=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value412=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 750))))))));
                    if(__dec_obj119) { come_call_finalizer(list$1charph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj120=info_264.generics_classes;
                    info_264.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value415=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value414=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 751))))))));
                    if(__dec_obj120) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_264.verbose=verbose_260;
                    __freed_obj__ = 0;
                    init_classes(&info_264);
                    __freed_obj__ = 0;
                    init_module(&info_264);
                    __freed_obj__ = 0;
                    if(_if_conditional396=!cpp(&info_264),                    __freed_obj__ = 0, 
                    _if_conditional396) {
                        printf("%s %d: transpile failed\n",info_264.sname,info_264.sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj121=info_264.original_source;
                    info_264.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 762),((struct optional$2charphbool*)(right_value417=string_read(((char*)come_null_check(((char*)(right_value416=xsprintf("%s",it_263))), "02transpile.c", 762))))))), "02transpile.c", 762))))));
                    if(__dec_obj121) { come_call_finalizer(buffer_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj122=info_264.source;
                    info_264.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value421=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 763),((struct optional$2charphbool*)(right_value420=string_read(((char*)come_null_check(((char*)(right_value419=xsprintf("%s.i",it_263))), "02transpile.c", 763))))))), "02transpile.c", 763))))));
                    if(__dec_obj122) { come_call_finalizer(buffer_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_264.p=((struct buffer*)come_null_check(info_264.source, "02transpile.c", 764))->buf;
                    __freed_obj__ = 0;
                    info_264.head=((struct buffer*)come_null_check(info_264.source, "02transpile.c", 765))->buf;
                    __freed_obj__ = 0;
                    if(_if_conditional397=output_file_name_259,                    __freed_obj__ = 0, 
                    _if_conditional397) {
                        __dec_obj123=info_264.output_file_name;
                        info_264.output_file_name=(char*)come_increment_ref_count(((char*)(right_value422=__builtin_string(output_file_name_259))));
                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj124=info_264.output_file_name;
                        info_264.output_file_name=((void*)0);
                        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional398=!output_cpp_file_257,                    __freed_obj__ = 0, 
                    _if_conditional398) {
                        transpile_v5(&info_264);
                        __freed_obj__ = 0;
                        if(_if_conditional399=!output_source_file_v3(&info_264),                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            printf("%s %d: output source file faield\n",info_264.sname,info_264.sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=info_264.err_num>0,                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            printf("transpile error. err num %d\n",info_264.err_num);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional401=!compile(&info_264,output_object_file_256,object_files_255),                            __freed_obj__ = 0, 
                            _if_conditional401) {
                                printf("%s %d: compile faield\n",info_264.sname,info_264.sline);
                                __freed_obj__ = 0;
                                exit(27);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if((&info_264) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_264), (void*)0, (void*)0, 1, 0, 0, 0); }
                    if(lv_table_265 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_262 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional402=!output_object_file_256&&!output_cpp_file_257&&(list$1charph_length(((struct list$1charph*)come_null_check(files_254, "02transpile.c", 820)))>0||list$1charph_length(((struct list$1charph*)come_null_check(object_files_255, "02transpile.c", 820)))>0),                __freed_obj__ = 0, 
                _if_conditional402) {
                    __freed_obj__ = 0;
                    memset(&info_266,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj126=info_266.sname;
                    info_266.sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(optional$2charphbool_value((come_push_stackframe("02transpile.c", 803),((struct optional$2charphbool*)(right_value427=list$1charphp_operator_load_element(files_254,0)))))))));
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj127=info_266.clang_option;
                    info_266.clang_option=(char*)come_increment_ref_count(((char*)(right_value429=buffer_to_string(((struct buffer*)come_null_check(clang_option_252, "02transpile.c", 804))))));
                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_266.verbose=verbose_260;
                    __freed_obj__ = 0;
                    if(_if_conditional405=output_file_name_259,                    __freed_obj__ = 0, 
                    _if_conditional405) {
                        __dec_obj128=info_266.output_file_name;
                        info_266.output_file_name=(char*)come_increment_ref_count(((char*)(right_value430=__builtin_string(output_file_name_259))));
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj129=info_266.output_file_name;
                        info_266.output_file_name=((void*)0);
                        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __current_stack2__.info_266 = &info_266;
                    __current_stack2__.clang_option_252 = &clang_option_252;
                    __current_stack2__.cpp_option_253 = &cpp_option_253;
                    __current_stack2__.files_254 = &files_254;
                    __current_stack2__.object_files_255 = &object_files_255;
                    __current_stack2__.output_object_file_256 = &output_object_file_256;
                    __current_stack2__.output_cpp_file_257 = &output_cpp_file_257;
                    __current_stack2__.output_source_file_flag_258 = &output_source_file_flag_258;
                    __current_stack2__.output_file_name_259 = &output_file_name_259;
                    __current_stack2__.verbose_260 = &verbose_260;
                    __current_stack2__.argc = &argc;
                    __current_stack2__.argv = &argv;
                    bool_expect(linker(&info_266,object_files_255),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                    __freed_obj__ = 0;
                    if((&info_266) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_266), (void*)0, (void*)0, 1, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_final_v5();
                __freed_obj__ = 0;
                if(clang_option_252 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(cpp_option_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(files_254 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(object_files_255 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(output_file_name_259 && !__freed_obj__) { output_file_name_259 = come_decrement_ref_count(output_file_name_259, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result160__ = 0;
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value328;
void* right_value329;
void* right_value330;
int i_234;
_Bool _for_condtionalA18;
void* right_value331;
void* right_value332;
struct list$1charp* __dec_obj90;
struct map$2charphsFunph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&i_234, 0, sizeof(int));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value329=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_234=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA18=                i_234<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA18;                i_234++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_234]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj90=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value332=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value331=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj90) { come_call_finalizer(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result148__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result148__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_235;
_Bool _for_condtionalA19;
_Bool _if_conditional317;
_Bool _if_conditional318;
int i_236;
_Bool _for_condtionalA20;
_Bool _if_conditional319;
_Bool _if_conditional320;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_235, 0, sizeof(int));
memset(&i_236, 0, sizeof(int));
                    for(
                    i_235=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA19=                    i_235<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA19;                    i_235++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional317=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_235],                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            if(_if_conditional318=1,                            __freed_obj__ = 0, 
                            _if_conditional318) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_235] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_235], (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    i_236=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA20=                    i_236<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA20;                    i_236++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional319=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_236],                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            if(_if_conditional320=1,                            __freed_obj__ = 0, 
                            _if_conditional320) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_236] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_236] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_236], (void*)0, (void*)0, 0, 0, 0); }
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

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional321=self!=((void*)0)&&((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional321) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value335;
void* right_value336;
void* right_value337;
int i_237;
_Bool _for_condtionalA21;
void* right_value338;
void* right_value339;
struct list$1charp* __dec_obj92;
struct map$2charphsGenericsFunph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&i_237, 0, sizeof(int));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value336=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_237=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA21=                i_237<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA21;                i_237++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_237]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj92=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value339=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value338=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj92) { come_call_finalizer(list$1charp_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result149__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional322=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional322) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional323=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional323) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional324=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional324) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional325=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional326=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional326) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional327=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional328=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional328) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional329=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional329) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional330=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_238;
_Bool _for_condtionalA22;
_Bool _if_conditional331;
_Bool _if_conditional332;
int i_239;
_Bool _for_condtionalA23;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_238, 0, sizeof(int));
memset(&i_239, 0, sizeof(int));
                    for(
                    i_238=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA22=                    i_238<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA22;                    i_238++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional331=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_238],                        __freed_obj__ = 0, 
                        _if_conditional331) {
                            if(_if_conditional332=1,                            __freed_obj__ = 0, 
                            _if_conditional332) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_238] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_238], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_239=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA23=                    i_239<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA23;                    i_239++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional333=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_239],                        __freed_obj__ = 0, 
                        _if_conditional333) {
                            if(_if_conditional334=1,                            __freed_obj__ = 0, 
                            _if_conditional334) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_239] && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_239] = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_239], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional335=self!=((void*)0)&&((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional335) {
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value342;
void* right_value343;
void* right_value344;
int i_240;
_Bool _for_condtionalA24;
void* right_value345;
void* right_value346;
struct list$1charp* __dec_obj94;
struct map$2charphsClassph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&i_240, 0, sizeof(int));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value342=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value343=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value344=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_240=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA24=                i_240<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA24;                i_240++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_240]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj94=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value346=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value345=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj94) { come_call_finalizer(list$1charp_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result150__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result150__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_241;
_Bool _for_condtionalA25;
_Bool _if_conditional336;
_Bool _if_conditional337;
int i_242;
_Bool _for_condtionalA26;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_241, 0, sizeof(int));
memset(&i_242, 0, sizeof(int));
                    for(
                    i_241=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA25=                    i_241<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA25;                    i_241++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional336=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_241],                        __freed_obj__ = 0, 
                        _if_conditional336) {
                            if(_if_conditional337=1,                            __freed_obj__ = 0, 
                            _if_conditional337) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_241] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_241], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_242=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA26=                    i_242<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA26;                    i_242++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional338=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_242],                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            if(_if_conditional339=1,                            __freed_obj__ = 0, 
                            _if_conditional339) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_242] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_242] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_242], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional340=self!=((void*)0)&&((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional340) {
                    if(((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value349;
void* right_value350;
void* right_value351;
int i_243;
_Bool _for_condtionalA27;
void* right_value352;
void* right_value353;
struct list$1charp* __dec_obj96;
struct map$2charphsTypeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&i_243, 0, sizeof(int));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value349=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value350=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value351=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_243=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA27=                i_243<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA27;                i_243++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_243]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj96=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value353=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value352=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj96) { come_call_finalizer(list$1charp_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result151__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result151__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_244;
_Bool _for_condtionalA28;
_Bool _if_conditional341;
_Bool _if_conditional342;
int i_245;
_Bool _for_condtionalA29;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_244, 0, sizeof(int));
memset(&i_245, 0, sizeof(int));
                    for(
                    i_244=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA28=                    i_244<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA28;                    i_244++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional341=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_244],                        __freed_obj__ = 0, 
                        _if_conditional341) {
                            if(_if_conditional342=1,                            __freed_obj__ = 0, 
                            _if_conditional342) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_244] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_244], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_245=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA29=                    i_245<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA29;                    i_245++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional343=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_245],                        __freed_obj__ = 0, 
                        _if_conditional343) {
                            if(_if_conditional344=1,                            __freed_obj__ = 0, 
                            _if_conditional344) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_245], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional345=self!=((void*)0)&&((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional345) {
                    if(((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sRightValueObjectph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_246;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_246, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_247, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_246=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional30=it_246!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional30) {
                        prev_it_247=it_246;
                        __freed_obj__ = 0;
                        it_246=((struct list_item$1sRightValueObjectph*)come_null_check(it_246, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_247 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional346=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional347=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional347) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional348=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional348) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional349=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional349) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result153__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_248;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_248, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_249, 0, sizeof(struct list_item$1CVALUEph*));
                    it_248=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional31=it_248!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional31) {
                        prev_it_249=it_248;
                        __freed_obj__ = 0;
                        it_248=((struct list_item$1CVALUEph*)come_null_check(it_248, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_249 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional350=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional350) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional351=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional351) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional352=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional352) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result154__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result154__;
                __freed_obj__ = 0;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional356=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->original_source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional356) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional357=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional357) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional358=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional358) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional359=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->base_sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional359) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional360=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->err_line!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional360) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional361=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->clang_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional361) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional362=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->cpp_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional362) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional363=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional363) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional364=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->generics_funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional364) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional365=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional365) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional366=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional366) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional367=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->generics_classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional367) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional368=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->module!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional368) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module && !__freed_obj__) { come_call_finalizer(sModule_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional369=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional369) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional370=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->right_value_objects!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional370) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional371=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->generics_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional371) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional372=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->method_generics_types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional372) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional373=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->stack!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional373) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional374=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->come_function_result_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional374) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional375=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->gv_table!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional375) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional376=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->generics_type_names!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional376) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional377=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->impl_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional377) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional378=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 23))->output_file_name!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional378) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional403;
struct list_item$1charph* it_267;
int i_268;
_Bool _while_condtional32;
_Bool _if_conditional404;
void* right_value423;
void* right_value424;
struct optional$2charphbool* __result158__;
char* default_value_269;
void* right_value425;
void* right_value426;
struct optional$2charphbool* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_267, 0, sizeof(struct list_item$1charph*));
memset(&i_268, 0, sizeof(int));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&default_value_269, 0, sizeof(char*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
                        if(_if_conditional403=position<0,                        __freed_obj__ = 0, 
                        _if_conditional403) {
                            position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_267=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                        __freed_obj__ = 0;
                        i_268=0;
                        __freed_obj__ = 0;
                        while(_while_condtional32=it_267!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional32) {
                            if(_if_conditional404=position==i_268,                            __freed_obj__ = 0, 
                            _if_conditional404) {
                                __result158__ = __result_obj__ = ((struct optional$2charphbool*)(right_value424=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value423=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_267, "./comelang2.h", 742))->item),(_Bool)1)));
                                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result158__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_267=((struct list_item$1charph*)come_null_check(it_267, "./comelang2.h", 744))->next;
                            __freed_obj__ = 0;
                            i_268++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&default_value_269,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result159__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value426=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value425=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_269),(_Bool)0))));
                        if(default_value_269 && !__freed_obj__) { default_value_269 = come_decrement_ref_count(default_value_269, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result159__;
                        __freed_obj__ = 0;
                        if(default_value_269 && !__freed_obj__) { default_value_269 = come_decrement_ref_count(default_value_269, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj125;
struct optional$2charphbool* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __dec_obj125=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                                    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result157__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result157__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        printf("%s %d: linker faield\n",(*(parent->info_266)).sname,(*(parent->info_266)).sline);
                        __freed_obj__ = 0;
                        exit(13);
                        __freed_obj__ = 0;
}

