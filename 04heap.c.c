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
    _Bool mNobodyStruct;
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
    char* come_fun_name;
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
int gRightValueNum=0;

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

char* ctermid(char* anonymous_var_nameX125);

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

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

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

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

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

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
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
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

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
    # 1942 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1942, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1943 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1944 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1949 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1949, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1950 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1951 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1956 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1956, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1957 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1958 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1963 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1963, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1964 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1965 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1970 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1970, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1971 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1972 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1977 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1977, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1978 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1979 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 1992 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1992, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1994 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1997 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 2002 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2002, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2004 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2007 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 2012 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2012, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2014 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2017 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 2022 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2022, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2024 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2027 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    # 2032 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2032, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2034 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2037 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2203 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2203, "smart_pointer$1char")))),self,len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2208 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2208, "smart_pointer$1short")))),self,len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2213 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2213, "smart_pointer$1int")))),self,len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2218 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2218, "smart_pointer$1long")))),self,len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2223 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2223, "smart_pointer$1float")))),self,len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2228 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2228, "smart_pointer$1double")))),self,len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2233 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2233, "list$1char")))),len,self)));
    come_call_finalizer2(list$1charp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2238 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2238, "list$1short")))),len,self)));
    come_call_finalizer2(list$1shortp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1shortp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2243 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2243, "list$1int")))),len,self)));
    come_call_finalizer2(list$1intp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1intp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2248 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2248, "list$1long")))),len,self)));
    come_call_finalizer2(list$1longp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1longp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2253 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2253, "list$1float")))),len,self)));
    come_call_finalizer2(list$1floatp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1floatp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    # 2258 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2258, "list$1double")))),len,self)));
    come_call_finalizer2(list$1doublep_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1doublep_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2288 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2293 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2298 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2303 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2308 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2313 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2374 "./neo-c.h"
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
    # 2379 "./neo-c.h"
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
    # 2384 "./neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
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
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2048 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2048 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2048 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2048 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2048 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 2044 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2048 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2050 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 117 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 120 "./neo-c.h"
        __result26__ = __result_obj__ = self;
        come_call_finalizer2(list$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer2(list$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 226 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 226, "list_item$1char"))));
                    come_call_finalizer2(list_item$1charp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_12->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_12;
                    # 233 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 236 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 236, "list_item$1char"))));
                        come_call_finalizer2(list_item$1charp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_13->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_13;
                        # 243 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 246, "list_item$1char"))));
                        come_call_finalizer2(list_item$1charp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_14->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 253 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_15=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 125 "./neo-c.h"
                prev_it_16=it_15;
                # 126 "./neo-c.h"
                it_15=it_15->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1charp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 117 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 120 "./neo-c.h"
        __result29__ = __result_obj__ = self;
        come_call_finalizer2(list$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer2(list$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 226 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 226, "list_item$1short"))));
                    come_call_finalizer2(list_item$1shortp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_18->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_18;
                    # 233 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 236 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 236, "list_item$1short"))));
                        come_call_finalizer2(list_item$1shortp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_19->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_19;
                        # 243 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 246, "list_item$1short"))));
                        come_call_finalizer2(list_item$1shortp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_20->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 253 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_21=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 125 "./neo-c.h"
                prev_it_22=it_21;
                # 126 "./neo-c.h"
                it_21=it_21->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1shortp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 117 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 120 "./neo-c.h"
        __result32__ = __result_obj__ = self;
        come_call_finalizer2(list$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer2(list$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 226 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 226, "list_item$1int"))));
                    come_call_finalizer2(list_item$1intp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_24->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_24;
                    # 233 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 236 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 236, "list_item$1int"))));
                        come_call_finalizer2(list_item$1intp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_25->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_25;
                        # 243 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 246, "list_item$1int"))));
                        come_call_finalizer2(list_item$1intp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_26->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 253 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_27=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 125 "./neo-c.h"
                prev_it_28=it_27;
                # 126 "./neo-c.h"
                it_27=it_27->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1intp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 117 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 120 "./neo-c.h"
        __result35__ = __result_obj__ = self;
        come_call_finalizer2(list$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer2(list$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 226 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 226, "list_item$1long"))));
                    come_call_finalizer2(list_item$1longp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_30->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_30;
                    # 233 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 236 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 236, "list_item$1long"))));
                        come_call_finalizer2(list_item$1longp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_31->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_31;
                        # 243 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 246, "list_item$1long"))));
                        come_call_finalizer2(list_item$1longp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_32->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 253 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_33=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 125 "./neo-c.h"
                prev_it_34=it_33;
                # 126 "./neo-c.h"
                it_33=it_33->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1longp_finalize,prev_it_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 117 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 120 "./neo-c.h"
        __result38__ = __result_obj__ = self;
        come_call_finalizer2(list$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer2(list$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 226 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 226, "list_item$1float"))));
                    come_call_finalizer2(list_item$1floatp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_36->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_36;
                    # 233 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 236 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 236, "list_item$1float"))));
                        come_call_finalizer2(list_item$1floatp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_37->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_37;
                        # 243 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 246, "list_item$1float"))));
                        come_call_finalizer2(list_item$1floatp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_38->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 253 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_39=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 125 "./neo-c.h"
                prev_it_40=it_39;
                # 126 "./neo-c.h"
                it_39=it_39->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1floatp_finalize,prev_it_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 117 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 120 "./neo-c.h"
        __result41__ = __result_obj__ = self;
        come_call_finalizer2(list$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer2(list$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 226 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 226, "list_item$1double"))));
                    come_call_finalizer2(list_item$1doublep_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_42->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_42;
                    # 233 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 236 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 236, "list_item$1double"))));
                        come_call_finalizer2(list_item$1doublep_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_43->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_43;
                        # 243 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 246, "list_item$1double"))));
                        come_call_finalizer2(list_item$1doublep_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_44->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 253 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
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
            # 123 "./neo-c.h"
            it_45=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 125 "./neo-c.h"
                prev_it_46=it_45;
                # 126 "./neo-c.h"
                it_45=it_45->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1doublep_finalize,prev_it_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
char* __dec_obj12;
_Bool _if_conditional22;
void* right_value79;
char* __dec_obj13;
_Bool _if_conditional23;
void* right_value80;
char* __dec_obj14;
void* right_value81;
char* __dec_obj15;
_Bool _if_conditional24;
void* right_value82;
char* __dec_obj16;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
    # 8 "04heap.c"
    # 5 "04heap.c"
    if(gComeGC) {
        # 6 "04heap.c"
        return;
    }
    # 38 "04heap.c"
    # 17 "04heap.c"
    if(right_value->var) {
        # 30 "04heap.c"
        # 18 "04heap.c"
        if(right_value->var->mType->mDelegate) {
            # 19 "04heap.c"
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 30 "04heap.c"
            # 21 "04heap.c"
            if(right_value->var->mType->mShare) {
                # 22 "04heap.c"
                __dec_obj13=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 30 "04heap.c"
                # 24 "04heap.c"
                if(right_value->var->mType->mClone) {
                    # 25 "04heap.c"
                    __dec_obj14=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value80=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 28 "04heap.c"
                    __dec_obj15=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value81=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        # 37 "04heap.c"
        # 32 "04heap.c"
        if(right_value->type->mDelegate) {
        }
        else {
            # 35 "04heap.c"
            __dec_obj16=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value82=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value118;
struct sType* result_71;
_Bool _if_conditional116;
struct sType* __result70__;
_Bool _if_conditional118;
struct sType* __result73__;
struct sClass* klass_72;
_Bool _if_conditional119;
void* right_value119;
struct sType* result_type_73;
void* right_value120;
void* right_value121;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* o2_saved_76;
struct sType* it_79;
void* right_value122;
struct sType* new_param_type_82;
void* right_value126;
_Bool _if_conditional126;
int generics_number_86;
_Bool _if_conditional127;
void* right_value127;
struct list$1sNodeph* array_num_87;
_Bool immutable__88;
int pointer_num_89;
_Bool heap_90;
_Bool guard__91;
_Bool no_heap_92;
_Bool no_calling_destructor_93;
_Bool null_value_94;
void* right_value128;
struct sType* __dec_obj45;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional136;
struct list$1sNodeph* __dec_obj46;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
int generics_number_98;
_Bool _if_conditional140;
struct sClass* klass2_99;
int generics_number2_100;
_Bool _if_conditional141;
void* right_value129;
struct list$1sNodeph* array_num_101;
_Bool immutable__102;
int pointer_num_103;
_Bool heap_104;
_Bool guard__105;
_Bool no_heap_106;
_Bool no_calling_destructor_107;
_Bool null_value_108;
_Bool record__109;
void* right_value130;
struct sType* __dec_obj47;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list$1sNodeph* __dec_obj48;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list$1sTypeph* o2_saved_110;
struct sType* it_111;
void* right_value131;
struct sType* type_112;
void* right_value132;
struct list$1sTypeph* o2_saved_113;
struct sType* it_114;
void* right_value133;
struct sType* type_115;
void* right_value134;
_Bool _if_conditional151;
void* right_value135;
char* new_name_116;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&result_71, 0, sizeof(struct sType*));
memset(&klass_72, 0, sizeof(struct sClass*));
right_value119 = (void*)0;
memset(&result_type_73, 0, sizeof(struct sType*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1sTypeph*));
memset(&it_79, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&new_param_type_82, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&generics_number_86, 0, sizeof(int));
right_value127 = (void*)0;
memset(&array_num_87, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__88, 0, sizeof(_Bool));
memset(&pointer_num_89, 0, sizeof(int));
memset(&heap_90, 0, sizeof(_Bool));
memset(&guard__91, 0, sizeof(_Bool));
memset(&no_heap_92, 0, sizeof(_Bool));
memset(&no_calling_destructor_93, 0, sizeof(_Bool));
memset(&null_value_94, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&generics_number_98, 0, sizeof(int));
memset(&klass2_99, 0, sizeof(struct sClass*));
memset(&generics_number2_100, 0, sizeof(int));
right_value129 = (void*)0;
memset(&array_num_101, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__102, 0, sizeof(_Bool));
memset(&pointer_num_103, 0, sizeof(int));
memset(&heap_104, 0, sizeof(_Bool));
memset(&guard__105, 0, sizeof(_Bool));
memset(&no_heap_106, 0, sizeof(_Bool));
memset(&no_calling_destructor_107, 0, sizeof(_Bool));
memset(&null_value_108, 0, sizeof(_Bool));
memset(&record__109, 0, sizeof(_Bool));
right_value130 = (void*)0;
memset(&o2_saved_110, 0, sizeof(struct list$1sTypeph*));
memset(&it_111, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&type_112, 0, sizeof(struct sType*));
right_value132 = (void*)0;
memset(&o2_saved_113, 0, sizeof(struct list$1sTypeph*));
memset(&it_114, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&type_115, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_name_116, 0, sizeof(char*));
    # 42 "04heap.c"
    result_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 46 "04heap.c"
    # 43 "04heap.c"
    if(_if_conditional116=generics_type==((void*)0),    _if_conditional116) {
        # 44 "04heap.c"
        __result70__ = __result_obj__ = result_71;
        come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result70__;
    }
    # 50 "04heap.c"
    # 46 "04heap.c"
    if(_if_conditional118=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional118) {
        # 47 "04heap.c"
        __result73__ = __result_obj__ = result_71;
        come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result73__;
    }
    # 50 "04heap.c"
    klass_72=type->mClass;
    # 194 "04heap.c"
    # 52 "04heap.c"
    if(_if_conditional119=string_operator_equals(klass_72->mName,"lambda"),    _if_conditional119) {
        # 53 "04heap.c"
        result_type_73=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 55 "04heap.c"
        __dec_obj41=result_71->mResultType;
        result_71->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value121=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_73)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 57 "04heap.c"
        list$1sTypeph_reset(result_71->mParamTypes);
        # 64 "04heap.c"
        for(        o2_saved_76=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_79=list$1sTypeph_begin((o2_saved_76));        !list$1sTypeph_end((o2_saved_76));        it_79=list$1sTypeph_next((o2_saved_76))        ){
            # 60 "04heap.c"
            new_param_type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=solve_generics(it_79,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 62 "04heap.c"
            list$1sTypeph_push_back(result_71->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(new_param_type_82)))));
            come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 194 "04heap.c"
        # 65 "04heap.c"
        if(_if_conditional126=klass_72->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional126) {
            # 66 "04heap.c"
            generics_number_86=klass_72->mMethodGenericsNum;
            # 74 "04heap.c"
            # 68 "04heap.c"
            if(_if_conditional127=generics_number_86>=list$1sTypeph_length(info->method_generics_types),            _if_conditional127) {
                # 70 "04heap.c"
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_86,list$1sTypeph_length(info->method_generics_types));
                # 71 "04heap.c"
                exit(2);
            }
            # 74 "04heap.c"
            array_num_87=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 75 "04heap.c"
            immutable__88=type->mImmutable;
            # 76 "04heap.c"
            pointer_num_89=type->mPointerNum;
            # 77 "04heap.c"
            heap_90=type->mHeap;
            # 78 "04heap.c"
            guard__91=type->mGuardValue;
            # 80 "04heap.c"
            no_heap_92=type->mNoHeap;
            # 81 "04heap.c"
            no_calling_destructor_93=type->mNoCallingDestructor;
            # 82 "04heap.c"
            null_value_94=type->mNullValue;
            # 84 "04heap.c"
            __dec_obj45=result_71;
            result_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_86), "04heap.c", 84, 0))))));
            come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 89 "04heap.c"
            # 86 "04heap.c"
            if(heap_90) {
                # 87 "04heap.c"
                result_71->mHeap=heap_90;
            }
            # 92 "04heap.c"
            # 89 "04heap.c"
            if(guard__91) {
                # 90 "04heap.c"
                result_71->mGuardValue=guard__91;
            }
            # 96 "04heap.c"
            # 92 "04heap.c"
            if(no_heap_92) {
                # 93 "04heap.c"
                result_71->mNoHeap=(_Bool)1;
                # 94 "04heap.c"
                result_71->mHeap=(_Bool)0;
            }
            # 99 "04heap.c"
            # 96 "04heap.c"
            if(no_calling_destructor_93) {
                # 97 "04heap.c"
                result_71->mNoCallingDestructor=(_Bool)1;
            }
            # 102 "04heap.c"
            # 99 "04heap.c"
            if(immutable__88) {
                # 100 "04heap.c"
                result_71->mImmutable=immutable__88;
            }
            # 106 "04heap.c"
            # 102 "04heap.c"
            if(_if_conditional136=list$1sNodeph_length(array_num_87)>0,            _if_conditional136) {
                # 103 "04heap.c"
                __dec_obj46=result_71->mArrayNum;
                result_71->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_87);
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 110 "04heap.c"
            # 106 "04heap.c"
            if(null_value_94) {
                # 107 "04heap.c"
                result_71->mNullValue=null_value_94;
            }
            # 113 "04heap.c"
            # 110 "04heap.c"
            if(_if_conditional138=pointer_num_89>0,            _if_conditional138) {
                # 111 "04heap.c"
                result_71->mPointerNum+=pointer_num_89;
            }
            come_call_finalizer2(list$1sNodephp_finalize,array_num_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 194 "04heap.c"
            # 114 "04heap.c"
            if(klass_72->mGenerics) {
                # 115 "04heap.c"
                generics_number_98=klass_72->mGenericsNum;
                # 123 "04heap.c"
                # 117 "04heap.c"
                if(_if_conditional140=generics_number_98>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional140) {
                    # 119 "04heap.c"
                    err_msg(info,"invalid generics parametor number");
                    # 120 "04heap.c"
                    exit(2);
                }
                # 123 "04heap.c"
                klass2_99=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_98), "04heap.c", 123, 1))->mClass;
                # 125 "04heap.c"
                generics_number2_100=klass2_99->mGenericsNum;
                # 173 "04heap.c"
                # 127 "04heap.c"
                if(_if_conditional141=generics_number_98!=generics_number2_100,                _if_conditional141) {
                    # 129 "04heap.c"
                    array_num_101=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 130 "04heap.c"
                    immutable__102=type->mImmutable;
                    # 131 "04heap.c"
                    pointer_num_103=type->mPointerNum;
                    # 132 "04heap.c"
                    heap_104=type->mHeap;
                    # 133 "04heap.c"
                    guard__105=type->mGuardValue;
                    # 135 "04heap.c"
                    no_heap_106=type->mNoHeap;
                    # 136 "04heap.c"
                    no_calling_destructor_107=type->mNoCallingDestructor;
                    # 137 "04heap.c"
                    null_value_108=type->mNullValue;
                    # 138 "04heap.c"
                    record__109=type->mRecord;
                    # 140 "04heap.c"
                    __dec_obj47=result_71;
                    result_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_98), "04heap.c", 140, 2))))));
                    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 145 "04heap.c"
                    # 142 "04heap.c"
                    if(heap_104) {
                        # 143 "04heap.c"
                        result_71->mHeap=heap_104;
                    }
                    # 148 "04heap.c"
                    # 145 "04heap.c"
                    if(guard__105) {
                        # 146 "04heap.c"
                        result_71->mGuardValue=guard__105;
                    }
                    # 151 "04heap.c"
                    # 148 "04heap.c"
                    if(record__109) {
                        # 149 "04heap.c"
                        result_71->mRecord=record__109;
                    }
                    # 155 "04heap.c"
                    # 151 "04heap.c"
                    if(no_heap_106) {
                        # 152 "04heap.c"
                        result_71->mNoHeap=(_Bool)1;
                        # 153 "04heap.c"
                        result_71->mHeap=(_Bool)0;
                    }
                    # 158 "04heap.c"
                    # 155 "04heap.c"
                    if(no_calling_destructor_107) {
                        # 156 "04heap.c"
                        result_71->mNoCallingDestructor=(_Bool)1;
                    }
                    # 161 "04heap.c"
                    # 158 "04heap.c"
                    if(immutable__102) {
                        # 159 "04heap.c"
                        result_71->mImmutable=immutable__102;
                    }
                    # 165 "04heap.c"
                    # 161 "04heap.c"
                    if(_if_conditional148=list$1sNodeph_length(array_num_101)>0,                    _if_conditional148) {
                        # 162 "04heap.c"
                        __dec_obj48=result_71->mArrayNum;
                        result_71->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_101);
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 169 "04heap.c"
                    # 165 "04heap.c"
                    if(null_value_108) {
                        # 166 "04heap.c"
                        result_71->mNullValue=null_value_108;
                    }
                    # 172 "04heap.c"
                    # 169 "04heap.c"
                    if(_if_conditional150=pointer_num_103>0,                    _if_conditional150) {
                        # 170 "04heap.c"
                        result_71->mPointerNum+=pointer_num_103;
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,array_num_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 175 "04heap.c"
                list$1sTypeph_reset(result_71->mGenericsTypes);
                # 180 "04heap.c"
                for(                o2_saved_110=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_111=list$1sTypeph_begin((o2_saved_110));                !list$1sTypeph_end((o2_saved_110));                it_111=list$1sTypeph_next((o2_saved_110))                ){
                    # 177 "04heap.c"
                    type_112=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(it_111,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 178 "04heap.c"
                    list$1sTypeph_push_back(result_71->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_112)))));
                    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 180 "04heap.c"
                list$1sTypeph_reset(result_71->mMultipleTypes);
                # 186 "04heap.c"
                for(                o2_saved_113=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_114=list$1sTypeph_begin((o2_saved_113));                !list$1sTypeph_end((o2_saved_113));                it_114=list$1sTypeph_next((o2_saved_113))                ){
                    # 182 "04heap.c"
                    type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=solve_generics(it_114,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 183 "04heap.c"
                    list$1sTypeph_push_back(result_71->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(type_115)))));
                    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 192 "04heap.c"
                # 186 "04heap.c"
                if(_if_conditional151=!output_generics_struct(result_71,generics_type,info),                _if_conditional151) {
                    # 188 "04heap.c"
                    new_name_116=(char*)come_increment_ref_count(((char*)(right_value135=create_generics_name(type,info))));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 189 "04heap.c"
                    printf("output generics is failed(%s)",new_name_116);
                    # 190 "04heap.c"
                    exit(1);
                    new_name_116 = come_decrement_ref_count2(new_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    # 194 "04heap.c"
    __result88__ = __result_obj__ = result_71;
    come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sType* __result52__;
void* right_value83;
struct sType* result_47;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* right_value90;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional48;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional52;
void* right_value94;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
void* right_value95;
char* __dec_obj24;
_Bool _if_conditional54;
void* right_value96;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional55;
void* right_value104;
struct list$1sNodeph* __dec_obj29;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value105;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional70;
void* right_value112;
struct list$1charph* __dec_obj34;
_Bool _if_conditional74;
void* right_value113;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value114;
struct sNode* __dec_obj36;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
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
void* right_value115;
struct sNode* __dec_obj37;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value116;
char* __dec_obj38;
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
void* right_value117;
char* __dec_obj39;
_Bool _if_conditional115;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value90 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional25=self==(void*)0,        _if_conditional25) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional43=self!=((void*)0),        _if_conditional43) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional44=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional44) {
            # 5 "sType_clone"
            __dec_obj20=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional48) {
            # 6 "sType_clone"
            __dec_obj22=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional52) {
            # 7 "sType_clone"
            __dec_obj23=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional53) {
            # 8 "sType_clone"
            __dec_obj24=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional54) {
            # 9 "sType_clone"
            __dec_obj25=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional55=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional55) {
            # 10 "sType_clone"
            __dec_obj29=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional69) {
            # 12 "sType_clone"
            __dec_obj30=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional70) {
            # 13 "sType_clone"
            __dec_obj34=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional74=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional74) {
            # 14 "sType_clone"
            __dec_obj35=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional76=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional76) {
            # 16 "sType_clone"
            __dec_obj36=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional101=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional101) {
            # 41 "sType_clone"
            __dec_obj37=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional104=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional104) {
            # 44 "sType_clone"
            __dec_obj38=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional114=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional114) {
            # 54 "sType_clone"
            __dec_obj39=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional26) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional28) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional30) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional31) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional32) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional33) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional35) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional36) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional38=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional38) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional39=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional39) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional40=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional40) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional41=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional41) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional42=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional42) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                    # 123 "./neo-c.h"
                    it_48=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 125 "./neo-c.h"
                        prev_it_49=it_48;
                        # 126 "./neo-c.h"
                        it_48=it_48->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional27=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional27) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional29) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                    # 123 "./neo-c.h"
                    it_50=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 125 "./neo-c.h"
                        prev_it_51=it_50;
                        # 126 "./neo-c.h"
                        it_50=it_50->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional34) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                    # 123 "./neo-c.h"
                    it_52=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 125 "./neo-c.h"
                        prev_it_53=it_52;
                        # 126 "./neo-c.h"
                        it_52=it_52->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional37=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional37) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct list$1sTypeph* __result53__;
void* right_value84;
void* right_value85;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value89;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional45=self==((void*)0),                _if_conditional45) {
                    # 140 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 142 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value85=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_55=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(it_55->item)))));
                    come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 151 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional46;
void* right_value86;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj17;
_Bool _if_conditional47;
void* right_value87;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj18;
void* right_value88;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj19;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional46=self->len==0,                        _if_conditional46) {
                            # 156 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj17=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_56;
                            # 163 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional47=self->len==1,                            _if_conditional47) {
                                # 166 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj18=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_57;
                                # 173 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj19=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 183 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct tuple1$1sTypeph* __result57__;
void* right_value91;
struct tuple1$1sTypeph* result_59;
_Bool _if_conditional51;
void* right_value92;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_59, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_59=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional51=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional51) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj21=result_59->v1;
                    result_59->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_59;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional50) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sNodeph* __result59__;
void* right_value97;
void* right_value98;
struct list$1sNodeph* result_60;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional11;
void* right_value103;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional56=self==((void*)0),                _if_conditional56) {
                    # 140 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 142 "./neo-c.h"
                result_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_61=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional11=it_61!=((void*)0),                _while_condtional11) {
                    # 146 "./neo-c.h"
                    list$1sNodeph_add(result_60,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(it_61->item)))));
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./neo-c.h"
                    it_61=it_61->next;
                }
                # 151 "./neo-c.h"
                __result64__ = __result_obj__ = result_60;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value99;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj26;
_Bool _if_conditional58;
void* right_value100;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj27;
void* right_value101;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional57=self->len==0,                        _if_conditional57) {
                            # 156 "./neo-c.h"
                            litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_62->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_62->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj26=litem_62->item;
                            litem_62->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./neo-c.h"
                            self->tail=litem_62;
                            # 163 "./neo-c.h"
                            self->head=litem_62;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional58=self->len==1,                            _if_conditional58) {
                                # 166 "./neo-c.h"
                                litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_63->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_63->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj27=litem_63->item;
                                litem_63->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./neo-c.h"
                                self->tail=litem_63;
                                # 173 "./neo-c.h"
                                self->head->next=litem_63;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_64->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_64->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj28=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./neo-c.h"
                                self->tail->next=litem_64;
                                # 183 "./neo-c.h"
                                self->tail=litem_64;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional59;
struct sNode* __result62__;
void* right_value102;
struct sNode* result_65;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&result_65, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional59=self==(void*)0,                        _if_conditional59) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_65=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional60) {
                            # 4 "sNode_clone"
                            result_65->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 5 "sNode_clone"
                            result_65->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 6 "sNode_clone"
                            result_65->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            # 7 "sNode_clone"
                            result_65->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            # 8 "sNode_clone"
                            result_65->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            # 9 "sNode_clone"
                            result_65->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            # 10 "sNode_clone"
                            result_65->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional67=self!=((void*)0),                        _if_conditional67) {
                            # 11 "sNode_clone"
                            result_65->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result63__ = __result_obj__ = result_65;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1charph* __result65__;
void* right_value106;
void* right_value107;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional12;
void* right_value111;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional71=self==((void*)0),                _if_conditional71) {
                    # 140 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 142 "./neo-c.h"
                result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_67=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional12=it_67!=((void*)0),                _while_condtional12) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value111=string_clone(it_67->item)))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_67=it_67->next;
                }
                # 151 "./neo-c.h"
                __result68__ = __result_obj__ = result_66;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value108;
struct list_item$1charph* litem_68;
char* __dec_obj31;
_Bool _if_conditional73;
void* right_value109;
struct list_item$1charph* litem_69;
char* __dec_obj32;
void* right_value110;
struct list_item$1charph* litem_70;
char* __dec_obj33;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional72=self->len==0,                        _if_conditional72) {
                            # 156 "./neo-c.h"
                            litem_68=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_68->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_68->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj31=litem_68->item;
                            litem_68->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_68;
                            # 163 "./neo-c.h"
                            self->head=litem_68;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional73=self->len==1,                            _if_conditional73) {
                                # 166 "./neo-c.h"
                                litem_69=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_69->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_69->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj32=litem_69->item;
                                litem_69->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_69;
                                # 173 "./neo-c.h"
                                self->head->next=litem_69;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_70->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_70->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj33=litem_70->item;
                                litem_70->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_70;
                                # 183 "./neo-c.h"
                                self->tail=litem_70;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional117;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional117=self==((void*)0),        _if_conditional117) {
            # 365 "./neo-c.h"
            __result71__ = 0;
            return __result71__;
        }
        # 367 "./neo-c.h"
        __result72__ = self->len;
        return __result72__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1735 "./neo-c.h"
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1737 "./neo-c.h"
            __result74__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_74;
_Bool _while_condtional13;
struct list_item$1sTypeph* prev_it_75;
struct list$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_74, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1sTypeph*));
            # 433 "./neo-c.h"
            it_74=self->head;
            # 440 "./neo-c.h"
            while(_while_condtional13=it_74!=((void*)0),            _while_condtional13) {
                # 435 "./neo-c.h"
                prev_it_75=it_74;
                # 436 "./neo-c.h"
                it_74=it_74->next;
                # 437 "./neo-c.h"
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./neo-c.h"
            self->head=((void*)0);
            # 441 "./neo-c.h"
            self->tail=((void*)0);
            # 443 "./neo-c.h"
            self->len=0;
            # 445 "./neo-c.h"
            __result75__ = __result_obj__ = self;
            return __result75__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional120;
struct sType* result_77;
struct sType* __result76__;
_Bool _if_conditional121;
struct sType* __result77__;
struct sType* result_78;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sType*));
memset(&result_78, 0, sizeof(struct sType*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional120=self==((void*)0),            _if_conditional120) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_77,0,sizeof(struct sType*));
                # 288 "./neo-c.h"
                __result76__ = __result_obj__ = result_77;
                return __result76__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result77__ = __result_obj__ = self->it->item;
                return __result77__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_78,0,sizeof(struct sType*));
            # 298 "./neo-c.h"
            __result78__ = __result_obj__ = result_78;
            return __result78__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result79__ = self==((void*)0)||self->it==((void*)0);
            return __result79__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional122;
struct sType* result_80;
struct sType* __result80__;
_Bool _if_conditional123;
struct sType* __result81__;
struct sType* result_81;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct sType*));
memset(&result_81, 0, sizeof(struct sType*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional122=self==((void*)0)||self->it==((void*)0),            _if_conditional122) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_80,0,sizeof(struct sType*));
                # 305 "./neo-c.h"
                __result80__ = __result_obj__ = result_80;
                return __result80__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result81__ = __result_obj__ = self->it->item;
                return __result81__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_81,0,sizeof(struct sType*));
            # 316 "./neo-c.h"
            __result82__ = __result_obj__ = result_81;
            return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional124;
void* right_value123;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj42;
_Bool _if_conditional125;
void* right_value124;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj43;
void* right_value125;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj44;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional124=self->len==0,                _if_conditional124) {
                    # 226 "./neo-c.h"
                    litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_83->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_83->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj42=litem_83->item;
                    litem_83->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_83;
                    # 233 "./neo-c.h"
                    self->head=litem_83;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional125=self->len==1,                    _if_conditional125) {
                        # 236 "./neo-c.h"
                        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_84->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_84->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj43=litem_84->item;
                        litem_84->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_84;
                        # 243 "./neo-c.h"
                        self->head->next=litem_84;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_85->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_85->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj44=litem_85->item;
                        litem_85->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_85;
                        # 253 "./neo-c.h"
                        self->tail=litem_85;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result83__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result83__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional128;
struct list_item$1sTypeph* it_95;
int i_96;
_Bool _while_condtional14;
_Bool _if_conditional129;
struct sType* __result84__;
struct sType* default_value_97;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_95, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_96, 0, sizeof(int));
memset(&default_value_97, 0, sizeof(struct sType*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional128=position<0,                _if_conditional128) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_95=self->head;
                # 687 "./neo-c.h"
                i_96=0;
                # 694 "./neo-c.h"
                while(_while_condtional14=it_95!=((void*)0),                _while_condtional14) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional129=position==i_96,                    _if_conditional129) {
                        # 690 "./neo-c.h"
                        __result84__ = __result_obj__ = it_95->item;
                        return __result84__;
                    }
                    # 692 "./neo-c.h"
                    it_95=it_95->next;
                    # 693 "./neo-c.h"
                    i_96++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_97,0,sizeof(struct sType*));
                # 698 "./neo-c.h"
                __result85__ = __result_obj__ = default_value_97;
                come_call_finalizer2(sType_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer2(sType_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional135;
int __result86__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./neo-c.h"
                # 364 "./neo-c.h"
                if(_if_conditional135=self==((void*)0),                _if_conditional135) {
                    # 365 "./neo-c.h"
                    __result86__ = 0;
                    return __result86__;
                }
                # 367 "./neo-c.h"
                __result87__ = self->len;
                return __result87__;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value136;
struct sType* result_117;
struct sClass* klass_118;
_Bool _if_conditional152;
int generics_number_119;
_Bool _if_conditional153;
void* right_value137;
struct list$1sNodeph* array_num_120;
_Bool immutable__121;
int pointer_num_122;
_Bool heap_123;
_Bool guard__124;
_Bool no_heap_125;
_Bool no_calling_destructor_126;
_Bool null_value_127;
void* right_value138;
struct sType* __dec_obj49;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list$1sNodeph* __dec_obj50;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_117, 0, sizeof(struct sType*));
memset(&klass_118, 0, sizeof(struct sClass*));
memset(&generics_number_119, 0, sizeof(int));
right_value137 = (void*)0;
memset(&array_num_120, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__121, 0, sizeof(_Bool));
memset(&pointer_num_122, 0, sizeof(int));
memset(&heap_123, 0, sizeof(_Bool));
memset(&guard__124, 0, sizeof(_Bool));
memset(&no_heap_125, 0, sizeof(_Bool));
memset(&no_calling_destructor_126, 0, sizeof(_Bool));
memset(&null_value_127, 0, sizeof(_Bool));
right_value138 = (void*)0;
    # 199 "04heap.c"
    result_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 201 "04heap.c"
    klass_118=type->mClass;
    # 253 "04heap.c"
    # 203 "04heap.c"
    if(_if_conditional152=klass_118->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,    _if_conditional152) {
        # 204 "04heap.c"
        generics_number_119=klass_118->mMethodGenericsNum;
        # 212 "04heap.c"
        # 206 "04heap.c"
        if(_if_conditional153=generics_number_119>=list$1sTypeph_length(info->method_generics_types),        _if_conditional153) {
            # 208 "04heap.c"
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_119,list$1sTypeph_length(info->method_generics_types));
            # 209 "04heap.c"
            exit(2);
        }
        # 212 "04heap.c"
        array_num_120=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodephp_clone(type->mArrayNum))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 213 "04heap.c"
        immutable__121=type->mImmutable;
        # 214 "04heap.c"
        pointer_num_122=type->mPointerNum;
        # 215 "04heap.c"
        heap_123=type->mHeap;
        # 216 "04heap.c"
        guard__124=type->mGuardValue;
        # 218 "04heap.c"
        no_heap_125=type->mNoHeap;
        # 219 "04heap.c"
        no_calling_destructor_126=type->mNoCallingDestructor;
        # 220 "04heap.c"
        null_value_127=type->mNullValue;
        # 222 "04heap.c"
        __dec_obj49=result_117;
        result_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_119), "04heap.c", 222, 3))))));
        come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 227 "04heap.c"
        # 224 "04heap.c"
        if(heap_123) {
            # 225 "04heap.c"
            result_117->mHeap=heap_123;
        }
        # 230 "04heap.c"
        # 227 "04heap.c"
        if(guard__124) {
            # 228 "04heap.c"
            result_117->mGuardValue=guard__124;
        }
        # 234 "04heap.c"
        # 230 "04heap.c"
        if(no_heap_125) {
            # 231 "04heap.c"
            result_117->mNoHeap=(_Bool)1;
            # 232 "04heap.c"
            result_117->mHeap=(_Bool)0;
        }
        # 237 "04heap.c"
        # 234 "04heap.c"
        if(no_calling_destructor_126) {
            # 235 "04heap.c"
            result_117->mNoCallingDestructor=(_Bool)1;
        }
        # 240 "04heap.c"
        # 237 "04heap.c"
        if(immutable__121) {
            # 238 "04heap.c"
            result_117->mImmutable=immutable__121;
        }
        # 244 "04heap.c"
        # 240 "04heap.c"
        if(_if_conditional159=list$1sNodeph_length(array_num_120)>0,        _if_conditional159) {
            # 241 "04heap.c"
            __dec_obj50=result_117->mArrayNum;
            result_117->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_120);
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 248 "04heap.c"
        # 244 "04heap.c"
        if(null_value_127) {
            # 245 "04heap.c"
            result_117->mNullValue=null_value_127;
        }
        # 251 "04heap.c"
        # 248 "04heap.c"
        if(_if_conditional161=pointer_num_122>0,        _if_conditional161) {
            # 249 "04heap.c"
            result_117->mPointerNum+=pointer_num_122;
        }
        come_call_finalizer2(list$1sNodephp_finalize,array_num_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 253 "04heap.c"
    __result89__ = __result_obj__ = result_117;
    come_call_finalizer2(sType_finalize,result_117, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(sType_finalize,result_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value139;
struct sType* result_128;
_Bool _if_conditional162;
void* right_value140;
struct sType* __dec_obj51;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_128, 0, sizeof(struct sType*));
right_value140 = (void*)0;
    # 258 "04heap.c"
    result_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 264 "04heap.c"
    # 260 "04heap.c"
    if(generics_type) {
        # 261 "04heap.c"
        __dec_obj51=result_128;
        result_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(result_128,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 264 "04heap.c"
    __result90__ = __result_obj__ = result_128;
    come_call_finalizer2(sType_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer2(sType_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_129;
_Bool _if_conditional163;
_Bool _while_condtional15;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
int n_130;
_Bool _while_condtional16;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_129, 0, sizeof(char*));
memset(&n_130, 0, sizeof(int));
    # 271 "04heap.c"
    p_129=obj;
    # 294 "04heap.c"
    # 272 "04heap.c"
    if(_if_conditional163=*p_129==40,    _if_conditional163) {
        # 273 "04heap.c"
        p_129++;
        # 277 "04heap.c"
        while(_while_condtional15=*p_129!=41,        _while_condtional15) {
            # 275 "04heap.c"
            p_129++;
        }
        # 277 "04heap.c"
        p_129++;
        # 292 "04heap.c"
        # 278 "04heap.c"
        if(_if_conditional164=*p_129==40,        _if_conditional164) {
            # 279 "04heap.c"
            p_129++;
            # 291 "04heap.c"
            # 280 "04heap.c"
            if(_if_conditional165=strcmp(p_129,"right_value")==0,            _if_conditional165) {
                # 281 "04heap.c"
                p_129+=strlen("right_value");
                # 290 "04heap.c"
                # 282 "04heap.c"
                if(_if_conditional166=xisdigit(*p_129),                _if_conditional166) {
                    # 283 "04heap.c"
                    n_130=0;
                    # 288 "04heap.c"
                    while(_while_condtional16=xisdigit(*p_129),                    _while_condtional16) {
                        # 285 "04heap.c"
                        n_130=n_130*10+*p_129-48;
                        # 286 "04heap.c"
                        p_129++;
                    }
                    # 288 "04heap.c"
                    __result91__ = n_130;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result91__;
                }
            }
        }
    }
    # 294 "04heap.c"
    __result92__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result92__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional167;
void* right_value141;
char* __result93__;
_Bool _if_conditional168;
void* right_value142;
char* __result94__;
void* right_value143;
struct sRightValueObject* new_value_131;
struct sType* __dec_obj52;
void* right_value144;
char* __dec_obj53;
void* right_value145;
char* __dec_obj54;
void* right_value149;
char* buf_135;
void* right_value150;
void* right_value151;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&new_value_131, 0, sizeof(struct sRightValueObject*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value149 = (void*)0;
memset(&buf_135, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    # 302 "04heap.c"
    # 299 "04heap.c"
    if(gComeGC) {
        # 300 "04heap.c"
        __result93__ = __result_obj__ = ((char*)(right_value141=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result93__;
    }
    # 305 "04heap.c"
    # 302 "04heap.c"
    if(info->no_output_come_code) {
        # 303 "04heap.c"
        __result94__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    # 305 "04heap.c"
    new_value_131=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value143=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 305, "sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 306 "04heap.c"
    __dec_obj52=new_value_131->mType;
    new_value_131->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 307 "04heap.c"
    new_value_131->mFreed=(_Bool)0;
    # 308 "04heap.c"
    new_value_131->mID=gRightValueNum;
    # 309 "04heap.c"
    __dec_obj53=new_value_131->mVarName;
    new_value_131->mVarName=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 310 "04heap.c"
    __dec_obj54=new_value_131->mFunName;
    new_value_131->mFunName=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(info->come_fun->mName))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 311 "04heap.c"
    new_value_131->mBlockLevel=info->block_level;
    # 313 "04heap.c"
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_131));
    # 315 "04heap.c"
    buf_135=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 316 "04heap.c"
    add_come_code_at_function_head(info,buf_135);
    # 317 "04heap.c"
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    # 319 "04heap.c"
    __result96__ = __result_obj__ = ((char*)(right_value151=xsprintf("((%s)(%s=%s))",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_131->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_135 = come_decrement_ref_count2(buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_135 = come_decrement_ref_count2(buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sRightValueObject_finalize"
        # 0 "sRightValueObject_finalize"
        if(_if_conditional169=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional169) {
            # 0 "sRightValueObject_finalize"
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sRightValueObject_finalize"
        # 1 "sRightValueObject_finalize"
        if(_if_conditional170=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional170) {
            # 1 "sRightValueObject_finalize"
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sRightValueObject_finalize"
        # 2 "sRightValueObject_finalize"
        if(_if_conditional171=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional171) {
            # 2 "sRightValueObject_finalize"
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional172;
void* right_value146;
struct list_item$1sRightValueObjectph* litem_132;
struct sRightValueObject* __dec_obj55;
_Bool _if_conditional174;
void* right_value147;
struct list_item$1sRightValueObjectph* litem_133;
struct sRightValueObject* __dec_obj56;
void* right_value148;
struct list_item$1sRightValueObjectph* litem_134;
struct sRightValueObject* __dec_obj57;
struct list$1sRightValueObjectph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value147 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value148 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional172=self->len==0,        _if_conditional172) {
            # 226 "./neo-c.h"
            litem_132=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 226, "list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_132->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_132->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj55=litem_132->item;
            litem_132->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_132;
            # 233 "./neo-c.h"
            self->head=litem_132;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional174=self->len==1,            _if_conditional174) {
                # 236 "./neo-c.h"
                litem_133=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 236, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_133->prev=self->head;
                # 239 "./neo-c.h"
                litem_133->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj56=litem_133->item;
                litem_133->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_133;
                # 243 "./neo-c.h"
                self->head->next=litem_133;
            }
            else {
                # 246 "./neo-c.h"
                litem_134=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 246, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_134->prev=self->tail;
                # 249 "./neo-c.h"
                litem_134->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj57=litem_134->item;
                litem_134->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_134;
                # 253 "./neo-c.h"
                self->tail=litem_134;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result95__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1sRightValueObjectphp_finalize"
                # 0 "list_item$1sRightValueObjectphp_finalize"
                if(_if_conditional173=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional173) {
                    # 0 "list_item$1sRightValueObjectphp_finalize"
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional175;
int i_136;
struct list$1sRightValueObjectph* o2_saved_137;
struct sRightValueObject* it_140;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_136, 0, sizeof(int));
memset(&o2_saved_137, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_140, 0, sizeof(struct sRightValueObject*));
    # 327 "04heap.c"
    # 324 "04heap.c"
    if(gComeGC) {
        # 325 "04heap.c"
        return;
    }
    # 327 "04heap.c"
    i_136=0;
    # 335 "04heap.c"
    for(    o2_saved_137=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_140=list$1sRightValueObjectph_begin((o2_saved_137));    !list$1sRightValueObjectph_end((o2_saved_137));    it_140=list$1sRightValueObjectph_next((o2_saved_137))    ){
        # 332 "04heap.c"
        # 329 "04heap.c"
        if(_if_conditional180=it_140->mID==right_value_num,        _if_conditional180) {
            # 330 "04heap.c"
            break;
        }
        # 332 "04heap.c"
        i_136++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 335 "04heap.c"
    list$1sRightValueObjectph_delete(info->right_value_objects,i_136,i_136+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional176;
struct sRightValueObject* result_138;
struct sRightValueObject* __result97__;
_Bool _if_conditional177;
struct sRightValueObject* __result98__;
struct sRightValueObject* result_139;
struct sRightValueObject* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_138, 0, sizeof(struct sRightValueObject*));
memset(&result_139, 0, sizeof(struct sRightValueObject*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional176=self==((void*)0),        _if_conditional176) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_138,0,sizeof(struct sRightValueObject*));
            # 288 "./neo-c.h"
            __result97__ = __result_obj__ = result_138;
            return __result97__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result98__ = __result_obj__ = self->it->item;
            return __result98__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_139,0,sizeof(struct sRightValueObject*));
        # 298 "./neo-c.h"
        __result99__ = __result_obj__ = result_139;
        return __result99__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result100__ = self==((void*)0)||self->it==((void*)0);
        return __result100__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional178;
struct sRightValueObject* result_141;
struct sRightValueObject* __result101__;
_Bool _if_conditional179;
struct sRightValueObject* __result102__;
struct sRightValueObject* result_142;
struct sRightValueObject* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_141, 0, sizeof(struct sRightValueObject*));
memset(&result_142, 0, sizeof(struct sRightValueObject*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional178=self==((void*)0)||self->it==((void*)0),        _if_conditional178) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_141,0,sizeof(struct sRightValueObject*));
            # 305 "./neo-c.h"
            __result101__ = __result_obj__ = result_141;
            return __result101__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result102__ = __result_obj__ = self->it->item;
            return __result102__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_142,0,sizeof(struct sRightValueObject*));
        # 316 "./neo-c.h"
        __result103__ = __result_obj__ = result_142;
        return __result103__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_143;
_Bool _while_condtional17;
struct list_item$1sRightValueObjectph* prev_it_144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_143, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_144, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 123 "./neo-c.h"
        it_143=self->head;
        # 129 "./neo-c.h"
        while(_while_condtional17=it_143!=((void*)0),        _while_condtional17) {
            # 125 "./neo-c.h"
            prev_it_144=it_143;
            # 126 "./neo-c.h"
            it_143=it_143->next;
            # 127 "./neo-c.h"
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
int tmp_145;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct list$1sRightValueObjectph* __result104__;
_Bool _if_conditional187;
_Bool _if_conditional188;
struct list_item$1sRightValueObjectph* it_148;
int i_149;
_Bool _while_condtional19;
_Bool _if_conditional189;
struct list_item$1sRightValueObjectph* prev_it_150;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct list_item$1sRightValueObjectph* it_151;
int i_152;
_Bool _while_condtional20;
_Bool _if_conditional192;
_Bool _if_conditional193;
struct list_item$1sRightValueObjectph* prev_it_153;
struct list_item$1sRightValueObjectph* it_154;
struct list_item$1sRightValueObjectph* head_prev_it_155;
struct list_item$1sRightValueObjectph* tail_it_156;
int i_157;
_Bool _while_condtional21;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
struct list_item$1sRightValueObjectph* prev_it_158;
_Bool _if_conditional197;
_Bool _if_conditional198;
struct list$1sRightValueObjectph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_145, 0, sizeof(int));
memset(&it_148, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_149, 0, sizeof(int));
memset(&prev_it_150, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_151, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_152, 0, sizeof(int));
memset(&prev_it_153, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_154, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_155, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_156, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_157, 0, sizeof(int));
memset(&prev_it_158, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 467 "./neo-c.h"
        # 464 "./neo-c.h"
        if(_if_conditional181=head<0,        _if_conditional181) {
            # 465 "./neo-c.h"
            head+=self->len;
        }
        # 471 "./neo-c.h"
        # 467 "./neo-c.h"
        if(_if_conditional182=tail<0,        _if_conditional182) {
            # 468 "./neo-c.h"
            tail+=self->len+1;
        }
        # 477 "./neo-c.h"
        # 471 "./neo-c.h"
        if(_if_conditional183=head>tail,        _if_conditional183) {
            # 472 "./neo-c.h"
            tmp_145=tail;
            # 473 "./neo-c.h"
            tail=head;
            # 474 "./neo-c.h"
            head=tmp_145;
        }
        # 481 "./neo-c.h"
        # 477 "./neo-c.h"
        if(_if_conditional184=head<0,        _if_conditional184) {
            # 478 "./neo-c.h"
            head=0;
        }
        # 485 "./neo-c.h"
        # 481 "./neo-c.h"
        if(_if_conditional185=tail>self->len,        _if_conditional185) {
            # 482 "./neo-c.h"
            tail=self->len;
        }
        # 489 "./neo-c.h"
        # 485 "./neo-c.h"
        if(_if_conditional186=head==tail,        _if_conditional186) {
            # 486 "./neo-c.h"
            __result104__ = __result_obj__ = self;
            return __result104__;
        }
        # 584 "./neo-c.h"
        # 489 "./neo-c.h"
        if(_if_conditional187=head==0&&tail==self->len,        _if_conditional187) {
            # 491 "./neo-c.h"
            list$1sRightValueObjectph_reset(self);
        }
        else {
            # 584 "./neo-c.h"
            # 493 "./neo-c.h"
            if(_if_conditional188=head==0,            _if_conditional188) {
                # 494 "./neo-c.h"
                it_148=self->head;
                # 495 "./neo-c.h"
                i_149=0;
                # 517 "./neo-c.h"
                while(_while_condtional19=it_148!=((void*)0),                _while_condtional19) {
                    # 516 "./neo-c.h"
                    # 497 "./neo-c.h"
                    if(_if_conditional189=i_149<tail,                    _if_conditional189) {
                        # 498 "./neo-c.h"
                        prev_it_150=it_148;
                        # 500 "./neo-c.h"
                        it_148=it_148->next;
                        # 501 "./neo-c.h"
                        i_149++;
                        # 503 "./neo-c.h"
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "./neo-c.h"
                        self->len--;
                    }
                    else {
                        # 516 "./neo-c.h"
                        # 507 "./neo-c.h"
                        if(_if_conditional190=i_149==tail,                        _if_conditional190) {
                            # 508 "./neo-c.h"
                            self->head=it_148;
                            # 509 "./neo-c.h"
                            self->head->prev=((void*)0);
                            # 510 "./neo-c.h"
                            break;
                        }
                        else {
                            # 513 "./neo-c.h"
                            it_148=it_148->next;
                            # 514 "./neo-c.h"
                            i_149++;
                        }
                    }
                }
            }
            else {
                # 584 "./neo-c.h"
                # 518 "./neo-c.h"
                if(_if_conditional191=tail==self->len,                _if_conditional191) {
                    # 519 "./neo-c.h"
                    it_151=self->head;
                    # 520 "./neo-c.h"
                    i_152=0;
                    # 542 "./neo-c.h"
                    while(_while_condtional20=it_151!=((void*)0),                    _while_condtional20) {
                        # 527 "./neo-c.h"
                        # 522 "./neo-c.h"
                        if(_if_conditional192=i_152==head,                        _if_conditional192) {
                            # 523 "./neo-c.h"
                            self->tail=it_151->prev;
                            # 524 "./neo-c.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "./neo-c.h"
                        # 527 "./neo-c.h"
                        if(_if_conditional193=i_152>=head,                        _if_conditional193) {
                            # 528 "./neo-c.h"
                            prev_it_153=it_151;
                            # 530 "./neo-c.h"
                            it_151=it_151->next;
                            # 531 "./neo-c.h"
                            i_152++;
                            # 533 "./neo-c.h"
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 538 "./neo-c.h"
                            it_151=it_151->next;
                            # 539 "./neo-c.h"
                            i_152++;
                        }
                    }
                }
                else {
                    # 544 "./neo-c.h"
                    it_154=self->head;
                    # 546 "./neo-c.h"
                    head_prev_it_155=((void*)0);
                    # 547 "./neo-c.h"
                    tail_it_156=((void*)0);
                    # 550 "./neo-c.h"
                    i_157=0;
                    # 576 "./neo-c.h"
                    while(_while_condtional21=it_154!=((void*)0),                    _while_condtional21) {
                        # 555 "./neo-c.h"
                        # 552 "./neo-c.h"
                        if(_if_conditional194=i_157==head,                        _if_conditional194) {
                            # 553 "./neo-c.h"
                            head_prev_it_155=it_154->prev;
                        }
                        # 559 "./neo-c.h"
                        # 555 "./neo-c.h"
                        if(_if_conditional195=i_157==tail,                        _if_conditional195) {
                            # 556 "./neo-c.h"
                            tail_it_156=it_154;
                        }
                        # 574 "./neo-c.h"
                        # 559 "./neo-c.h"
                        if(_if_conditional196=i_157>=head&&i_157<tail,                        _if_conditional196) {
                            # 561 "./neo-c.h"
                            prev_it_158=it_154;
                            # 563 "./neo-c.h"
                            it_154=it_154->next;
                            # 564 "./neo-c.h"
                            i_157++;
                            # 566 "./neo-c.h"
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 571 "./neo-c.h"
                            it_154=it_154->next;
                            # 572 "./neo-c.h"
                            i_157++;
                        }
                    }
                    # 579 "./neo-c.h"
                    # 576 "./neo-c.h"
                    if(_if_conditional197=head_prev_it_155!=((void*)0),                    _if_conditional197) {
                        # 577 "./neo-c.h"
                        head_prev_it_155->next=tail_it_156;
                    }
                    # 582 "./neo-c.h"
                    # 579 "./neo-c.h"
                    if(_if_conditional198=tail_it_156!=((void*)0),                    _if_conditional198) {
                        # 580 "./neo-c.h"
                        tail_it_156->prev=head_prev_it_155;
                    }
                }
            }
        }
        # 584 "./neo-c.h"
        __result106__ = __result_obj__ = self;
        return __result106__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_146;
_Bool _while_condtional18;
struct list_item$1sRightValueObjectph* prev_it_147;
struct list$1sRightValueObjectph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_146, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_147, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 433 "./neo-c.h"
                it_146=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional18=it_146!=((void*)0),                _while_condtional18) {
                    # 435 "./neo-c.h"
                    prev_it_147=it_146;
                    # 436 "./neo-c.h"
                    it_146=it_146->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./neo-c.h"
                self->head=((void*)0);
                # 441 "./neo-c.h"
                self->tail=((void*)0);
                # 443 "./neo-c.h"
                self->len=0;
                # 445 "./neo-c.h"
                __result105__ = __result_obj__ = self;
                return __result105__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value152;
char* __result107__;
struct sClass* klass_159;
void* right_value153;
char* type_name_160;
void* right_value154;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&klass_159, 0, sizeof(struct sClass*));
right_value153 = (void*)0;
memset(&type_name_160, 0, sizeof(char*));
right_value154 = (void*)0;
    # 343 "04heap.c"
    # 340 "04heap.c"
    if(gComeGC) {
        # 341 "04heap.c"
        __result107__ = __result_obj__ = ((char*)(right_value152=__builtin_string(obj)));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result107__;
    }
    # 343 "04heap.c"
    klass_159=type->mClass;
    # 345 "04heap.c"
    type_name_160=(char*)come_increment_ref_count(((char*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 347 "04heap.c"
    __result108__ = __result_obj__ = ((char*)(right_value154=xsprintf("(%s)come_increment_ref_count(%s)",type_name_160,obj)));
    type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional200;
struct list$1CVALUEph* stack_saved_161;
struct list$1sRightValueObjectph* right_value_objects_162;
struct sClass* klass_163;
static int dec_num_164=0;
void* right_value155;
char* name_165;
void* right_value156;
_Bool no_decrement_166;
_Bool no_free_167;
_Bool _if_conditional201;
void* right_value157;
char* c_value_168;
struct sClass* klass_169;
char* class_name_170;
char* fun_name_171;
void* right_value158;
struct sType* type2_172;
void* right_value159;
char* fun_name2_173;
struct sFun* finalizer_174;
_Bool _if_conditional202;
_Bool _if_conditional222;
void* right_value160;
char* none_generics_name_178;
void* right_value161;
char* generics_fun_name_179;
struct sGenericsFun* generics_fun_183;
_Bool _if_conditional237;
_Bool _if_conditional238;
int i_184;
void* right_value162;
char* new_fun_name_185;
_Bool _if_conditional239;
void* right_value163;
char* __dec_obj58;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value164;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_186;
char* new_fun_name_187;
char* __dec_obj59;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value165;
char* type_name_188;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value166;
_Bool _if_conditional247;
void* right_value167;
char* type_name_189;
void* right_value168;
void* right_value169;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_161, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_162, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_163, 0, sizeof(struct sClass*));
right_value155 = (void*)0;
memset(&name_165, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&no_decrement_166, 0, sizeof(_Bool));
memset(&no_free_167, 0, sizeof(_Bool));
right_value157 = (void*)0;
memset(&c_value_168, 0, sizeof(char*));
memset(&klass_169, 0, sizeof(struct sClass*));
memset(&class_name_170, 0, sizeof(char*));
memset(&fun_name_171, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&type2_172, 0, sizeof(struct sType*));
right_value159 = (void*)0;
memset(&fun_name2_173, 0, sizeof(char*));
memset(&finalizer_174, 0, sizeof(struct sFun*));
right_value160 = (void*)0;
memset(&none_generics_name_178, 0, sizeof(char*));
right_value161 = (void*)0;
memset(&generics_fun_name_179, 0, sizeof(char*));
memset(&generics_fun_183, 0, sizeof(struct sGenericsFun*));
memset(&i_184, 0, sizeof(int));
right_value162 = (void*)0;
memset(&new_fun_name_185, 0, sizeof(char*));
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&fun_186, 0, sizeof(struct sFun*));
memset(&new_fun_name_187, 0, sizeof(char*));
memset(&fun_186, 0, sizeof(struct sFun*));
memset(&new_fun_name_187, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&type_name_188, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_name_189, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 355 "04heap.c"
    # 352 "04heap.c"
    if(gComeGC) {
        # 353 "04heap.c"
        return;
    }
    # 355 "04heap.c"
    stack_saved_161=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 356 "04heap.c"
    right_value_objects_162=info->right_value_objects;
    # 358 "04heap.c"
    klass_163=type->mClass;
    # 360 "04heap.c"
    # 362 "04heap.c"
    name_165=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("__dec_obj%d",++dec_num_164))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 363 "04heap.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value156=make_define_var(type,name_165,(_Bool)0,info))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 365 "04heap.c"
    add_come_code(info,"%s=%s;\n",name_165,obj);
    # 367 "04heap.c"
    obj=name_165;
    # 368 "04heap.c"
    no_decrement_166=(_Bool)0;
    # 369 "04heap.c"
    no_free_167=(_Bool)0;
    # 455 "04heap.c"
    # 371 "04heap.c"
    if(_if_conditional201=type->mPointerNum>0,    _if_conditional201) {
        # 372 "04heap.c"
        c_value_168=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(obj))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 374 "04heap.c"
        klass_169=type->mClass;
        # 376 "04heap.c"
        class_name_170=klass_169->mName;
        # 378 "04heap.c"
        fun_name_171="finalize";
        # 380 "04heap.c"
        type2_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 381 "04heap.c"
        type2_172->mHeap=(_Bool)0;
        # 383 "04heap.c"
        fun_name2_173=(char*)come_increment_ref_count(((char*)(right_value159=create_method_name(type,(_Bool)0,fun_name_171,info,(_Bool)1))));
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 385 "04heap.c"
        finalizer_174=((void*)0);
        # 422 "04heap.c"
        # 386 "04heap.c"
        if(_if_conditional202=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional202) {
            # 387 "04heap.c"
            finalizer_174=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173);
            # 404 "04heap.c"
            # 389 "04heap.c"
            if(_if_conditional222=finalizer_174==((void*)0),            _if_conditional222) {
                # 390 "04heap.c"
                none_generics_name_178=(char*)come_increment_ref_count(((char*)(right_value160=get_none_generics_name(type2_172->mClass->mName))));
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 392 "04heap.c"
                generics_fun_name_179=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%s_%s",none_generics_name_178,fun_name_171))));
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 393 "04heap.c"
                generics_fun_183=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_179);
                # 403 "04heap.c"
                # 395 "04heap.c"
                if(generics_fun_183) {
                    # 401 "04heap.c"
                    # 396 "04heap.c"
                    if(_if_conditional238=!create_generics_fun((char*)come_increment_ref_count(fun_name2_173),generics_fun_183,type,info),                    _if_conditional238) {
                        # 398 "04heap.c"
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        # 399 "04heap.c"
                        exit(2);
                    }
                    # 401 "04heap.c"
                    finalizer_174=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173);
                }
                none_generics_name_178 = come_decrement_ref_count2(none_generics_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_179 = come_decrement_ref_count2(generics_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 406 "04heap.c"
            # 417 "04heap.c"
            for(            i_184=128-1;            i_184>=1;            i_184--            ){
                # 408 "04heap.c"
                new_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s_v%d",fun_name2_173,i_184))));
                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 409 "04heap.c"
                finalizer_174=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_185);
                # 415 "04heap.c"
                # 411 "04heap.c"
                if(finalizer_174) {
                    # 412 "04heap.c"
                    __dec_obj58=fun_name2_173;
                    fun_name2_173=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(new_fun_name_185))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 413 "04heap.c"
                    new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 420 "04heap.c"
            # 417 "04heap.c"
            if(_if_conditional240=finalizer_174==((void*)0),            _if_conditional240) {
                # 418 "04heap.c"
                finalizer_174=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173);
            }
        }
        # 431 "04heap.c"
        # 422 "04heap.c"
        if(_if_conditional241=finalizer_174==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional241) {
            # 424 "04heap.c"
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value164=create_finalizer_automatically(type,fun_name_171,info)));
            fun_186=multiple_assign_var1->v1;
            new_fun_name_187=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 426 "04heap.c"
            __dec_obj59=fun_name2_173;
            fun_name2_173=(char*)come_increment_ref_count(new_fun_name_187);
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 427 "04heap.c"
            finalizer_174=fun_186;
            new_fun_name_187 = come_decrement_ref_count2(new_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 453 "04heap.c"
        # 431 "04heap.c"
        if(_if_conditional243=finalizer_174!=((void*)0),        _if_conditional243) {
            # 443 "04heap.c"
            # 432 "04heap.c"
            if(_if_conditional244=klass_169->mProtocol&&type->mPointerNum==1,            _if_conditional244) {
                # 433 "04heap.c"
                type_name_188=(char*)come_increment_ref_count(((char*)(right_value165=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 437 "04heap.c"
                # 434 "04heap.c"
                if(c_value_168) {
                    # 435 "04heap.c"
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_173,c_value_168,type_name_188,c_value_168,type_name_188,c_value_168,type->mAllocaValue,no_decrement_166,no_free_167,force_delete_);
                }
                type_name_188 = come_decrement_ref_count2(type_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 442 "04heap.c"
                # 439 "04heap.c"
                if(c_value_168) {
                    # 440 "04heap.c"
                    add_come_last_code2(info,((char*)(right_value166=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_173,c_value_168,type->mAllocaValue,no_decrement_166,no_free_167,force_delete_))));
                    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            # 452 "04heap.c"
            # 445 "04heap.c"
            if(_if_conditional247=klass_169->mProtocol&&type->mPointerNum==1,            _if_conditional247) {
                # 446 "04heap.c"
                type_name_189=(char*)come_increment_ref_count(((char*)(right_value167=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 447 "04heap.c"
                add_come_last_code2(info,((char*)(right_value168=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_165,name_165,name_165,type_name_189,name_165,type_name_189,name_165))));
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_189 = come_decrement_ref_count2(type_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 450 "04heap.c"
                add_come_last_code2(info,((char*)(right_value169=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_165,name_165))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_168 = come_decrement_ref_count2(c_value_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_173 = come_decrement_ref_count2(fun_name2_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 455 "04heap.c"
    __dec_obj60=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_162);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 456 "04heap.c"
    __dec_obj61=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_161);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_165 = come_decrement_ref_count2(name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_175;
unsigned int hash_176;
unsigned int it_177;
_Bool _while_condtional22;
_Bool _if_conditional203;
_Bool _if_conditional204;
struct sFun* __result109__;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_175, 0, sizeof(struct sFun*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_175,0,sizeof(struct sFun*));
                # 1547 "./neo-c.h"
                hash_176=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_177=hash_176;
                # 1572 "./neo-c.h"
                while(_while_condtional22=(_Bool)1,                _while_condtional22) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional203=self->item_existance[it_177],                    _if_conditional203) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional204=string_equals(self->keys[it_177],key),                        _if_conditional204) {
                            # 1555 "./neo-c.h"
                            __result109__ = __result_obj__ = self->items[it_177];
                            come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        # 1558 "./neo-c.h"
                        it_177++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional220=it_177>=self->size,                        _if_conditional220) {
                            # 1561 "./neo-c.h"
                            it_177=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional221=it_177==hash_176,                            _if_conditional221) {
                                # 1564 "./neo-c.h"
                                __result110__ = __result_obj__ = default_value_175;
                                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result111__ = __result_obj__ = default_value_175;
                        come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                # 1572 "./neo-c.h"
                __result112__ = __result_obj__ = default_value_175;
                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional205=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional205) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional206=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional206) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional207=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional207) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional208=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional208) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional209=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional209) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional210=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional210) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional211=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional211) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional214=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional214) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional215=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional215) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional216=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional216) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional217=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional217) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional218=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional218) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional219=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional219) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional212;
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional212=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional212) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional213=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional213) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_180;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional23;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sGenericsFun* __result113__;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct sGenericsFun* __result114__;
struct sGenericsFun* __result115__;
struct sGenericsFun* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_180, 0, sizeof(struct sGenericsFun*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
                    # 1544 "./neo-c.h"
                    # 1545 "./neo-c.h"
                    memset(&default_value_180,0,sizeof(struct sGenericsFun*));
                    # 1547 "./neo-c.h"
                    hash_181=string_get_hash_key(((char*)key))%self->size;
                    # 1548 "./neo-c.h"
                    it_182=hash_181;
                    # 1572 "./neo-c.h"
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        # 1570 "./neo-c.h"
                        # 1551 "./neo-c.h"
                        if(_if_conditional223=self->item_existance[it_182],                        _if_conditional223) {
                            # 1558 "./neo-c.h"
                            # 1553 "./neo-c.h"
                            if(_if_conditional224=string_equals(self->keys[it_182],key),                            _if_conditional224) {
                                # 1555 "./neo-c.h"
                                __result113__ = __result_obj__ = self->items[it_182];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result113__;
                            }
                            # 1558 "./neo-c.h"
                            it_182++;
                            # 1566 "./neo-c.h"
                            # 1560 "./neo-c.h"
                            if(_if_conditional235=it_182>=self->size,                            _if_conditional235) {
                                # 1561 "./neo-c.h"
                                it_182=0;
                            }
                            else {
                                # 1566 "./neo-c.h"
                                # 1563 "./neo-c.h"
                                if(_if_conditional236=it_182==hash_181,                                _if_conditional236) {
                                    # 1564 "./neo-c.h"
                                    __result114__ = __result_obj__ = default_value_180;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result114__;
                                }
                            }
                        }
                        else {
                            # 1568 "./neo-c.h"
                            __result115__ = __result_obj__ = default_value_180;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result115__;
                        }
                    }
                    # 1572 "./neo-c.h"
                    __result116__ = __result_obj__ = default_value_180;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result116__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sGenericsFun_finalize"
                                    # 0 "sGenericsFun_finalize"
                                    if(_if_conditional225=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional225) {
                                        # 0 "sGenericsFun_finalize"
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sGenericsFun_finalize"
                                    # 1 "sGenericsFun_finalize"
                                    if(_if_conditional226=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional226) {
                                        # 1 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sGenericsFun_finalize"
                                    # 2 "sGenericsFun_finalize"
                                    if(_if_conditional227=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional227) {
                                        # 2 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sGenericsFun_finalize"
                                    # 3 "sGenericsFun_finalize"
                                    if(_if_conditional228=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional228) {
                                        # 3 "sGenericsFun_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sGenericsFun_finalize"
                                    # 4 "sGenericsFun_finalize"
                                    if(_if_conditional229=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional229) {
                                        # 4 "sGenericsFun_finalize"
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sGenericsFun_finalize"
                                    # 5 "sGenericsFun_finalize"
                                    if(_if_conditional230=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional230) {
                                        # 5 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sGenericsFun_finalize"
                                    # 6 "sGenericsFun_finalize"
                                    if(_if_conditional231=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional231) {
                                        # 6 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 8 "sGenericsFun_finalize"
                                    # 7 "sGenericsFun_finalize"
                                    if(_if_conditional232=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional232) {
                                        # 7 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 9 "sGenericsFun_finalize"
                                    # 8 "sGenericsFun_finalize"
                                    if(_if_conditional233=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional233) {
                                        # 8 "sGenericsFun_finalize"
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 10 "sGenericsFun_finalize"
                                    # 9 "sGenericsFun_finalize"
                                    if(_if_conditional234=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional234) {
                                        # 9 "sGenericsFun_finalize"
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sFunpcharphp_finalize"
                # 0 "tuple2$2sFunpcharphp_finalize"
                if(_if_conditional242=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional242) {
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_190;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_191;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_190, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_191, 0, sizeof(struct list_item$1CVALUEph*));
        # 123 "./neo-c.h"
        it_190=self->head;
        # 129 "./neo-c.h"
        while(_while_condtional24=it_190!=((void*)0),        _while_condtional24) {
            # 125 "./neo-c.h"
            prev_it_191=it_190;
            # 126 "./neo-c.h"
            it_190=it_190->next;
            # 127 "./neo-c.h"
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional248=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional248) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional249=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional249) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional250=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional250) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional251;
struct list$1CVALUEph* stack_saved_192;
struct list$1sRightValueObjectph* right_value_objects_193;
struct sType* type_before_194;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value170;
char* c_value_195;
struct sClass* klass_196;
char* class_name_197;
char* fun_name_198;
void* right_value171;
struct sType* type2_199;
void* right_value172;
char* fun_name2_200;
struct sFun* finalizer_201;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value173;
char* none_generics_name_202;
void* right_value174;
char* generics_fun_name_203;
struct sGenericsFun* generics_fun_204;
_Bool _if_conditional257;
_Bool _if_conditional258;
int i_205;
void* right_value175;
char* new_fun_name_206;
_Bool _if_conditional259;
void* right_value176;
char* __dec_obj62;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value177;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_207;
char* new_fun_name_208;
char* __dec_obj63;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value178;
char* type_name_209;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value179;
void* right_value180;
_Bool _if_conditional271;
void* right_value181;
void* right_value182;
_Bool _if_conditional272;
struct list$1tuple2$2charphsTypephph* o2_saved_210;
struct tuple2$2charphsTypeph* it_213;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_216;
struct sType* field_type_217;
_Bool _if_conditional277;
void* right_value183;
void* right_value184;
char* obj_218;
_Bool _if_conditional281;
struct list$1tuple2$2charphsTypephph* o2_saved_221;
struct tuple2$2charphsTypeph* it_222;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_223;
struct sType* field_type_224;
_Bool _if_conditional282;
void* right_value185;
void* right_value186;
char* obj_225;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value187;
char* type_name_226;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value188;
char* c_value_227;
struct sClass* klass_228;
char* class_name_229;
char* fun_name_230;
void* right_value189;
struct sType* type2_231;
void* right_value190;
char* fun_name2_232;
struct sFun* finalizer_233;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value191;
char* none_generics_name_234;
void* right_value192;
char* generics_fun_name_235;
struct sGenericsFun* generics_fun_236;
_Bool _if_conditional295;
_Bool _if_conditional296;
int i_237;
void* right_value193;
char* new_fun_name_238;
_Bool _if_conditional297;
void* right_value194;
char* __dec_obj64;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value195;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_239;
char* new_fun_name_240;
char* __dec_obj65;
_Bool _if_conditional300;
_Bool _if_conditional301;
void* right_value196;
char* type_name_241;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value197;
void* right_value198;
_Bool _if_conditional309;
void* right_value199;
void* right_value200;
_Bool _if_conditional310;
struct list$1tuple2$2charphsTypephph* o2_saved_242;
struct tuple2$2charphsTypeph* it_243;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_244;
struct sType* field_type_245;
_Bool _if_conditional311;
void* right_value201;
void* right_value202;
char* obj_246;
_Bool _if_conditional312;
struct list$1tuple2$2charphsTypephph* o2_saved_247;
struct tuple2$2charphsTypeph* it_248;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_249;
struct sType* field_type_250;
_Bool _if_conditional313;
void* right_value203;
void* right_value204;
char* obj_251;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value205;
char* type_name_252;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_192, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_193, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_194, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&c_value_195, 0, sizeof(char*));
memset(&klass_196, 0, sizeof(struct sClass*));
memset(&class_name_197, 0, sizeof(char*));
memset(&fun_name_198, 0, sizeof(char*));
right_value171 = (void*)0;
memset(&type2_199, 0, sizeof(struct sType*));
right_value172 = (void*)0;
memset(&fun_name2_200, 0, sizeof(char*));
memset(&finalizer_201, 0, sizeof(struct sFun*));
right_value173 = (void*)0;
memset(&none_generics_name_202, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&generics_fun_name_203, 0, sizeof(char*));
memset(&generics_fun_204, 0, sizeof(struct sGenericsFun*));
memset(&i_205, 0, sizeof(int));
right_value175 = (void*)0;
memset(&new_fun_name_206, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&type_name_209, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&o2_saved_210, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_213, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_216, 0, sizeof(char*));
memset(&field_type_217, 0, sizeof(struct sType*));
memset(&name_216, 0, sizeof(char*));
memset(&field_type_217, 0, sizeof(struct sType*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&obj_218, 0, sizeof(char*));
memset(&o2_saved_221, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_222, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_223, 0, sizeof(char*));
memset(&field_type_224, 0, sizeof(struct sType*));
memset(&name_223, 0, sizeof(char*));
memset(&field_type_224, 0, sizeof(struct sType*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&obj_225, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&type_name_226, 0, sizeof(char*));
right_value188 = (void*)0;
memset(&c_value_227, 0, sizeof(char*));
memset(&klass_228, 0, sizeof(struct sClass*));
memset(&class_name_229, 0, sizeof(char*));
memset(&fun_name_230, 0, sizeof(char*));
right_value189 = (void*)0;
memset(&type2_231, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&fun_name2_232, 0, sizeof(char*));
memset(&finalizer_233, 0, sizeof(struct sFun*));
right_value191 = (void*)0;
memset(&none_generics_name_234, 0, sizeof(char*));
right_value192 = (void*)0;
memset(&generics_fun_name_235, 0, sizeof(char*));
memset(&generics_fun_236, 0, sizeof(struct sGenericsFun*));
memset(&i_237, 0, sizeof(int));
right_value193 = (void*)0;
memset(&new_fun_name_238, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&fun_239, 0, sizeof(struct sFun*));
memset(&new_fun_name_240, 0, sizeof(char*));
memset(&fun_239, 0, sizeof(struct sFun*));
memset(&new_fun_name_240, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&type_name_241, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&o2_saved_242, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_243, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_244, 0, sizeof(char*));
memset(&field_type_245, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&field_type_245, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&obj_246, 0, sizeof(char*));
memset(&o2_saved_247, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_248, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_249, 0, sizeof(char*));
memset(&field_type_250, 0, sizeof(struct sType*));
memset(&name_249, 0, sizeof(char*));
memset(&field_type_250, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&obj_251, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&type_name_252, 0, sizeof(char*));
    # 464 "04heap.c"
    # 461 "04heap.c"
    if(gComeGC) {
        # 462 "04heap.c"
        return;
    }
    # 464 "04heap.c"
    stack_saved_192=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 465 "04heap.c"
    right_value_objects_193=info->right_value_objects;
    # 467 "04heap.c"
    type_before_194=type;
    # 474 "04heap.c"
    # 470 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 471 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 823 "04heap.c"
    # 474 "04heap.c"
    if(_if_conditional253=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional253) {
        # 821 "04heap.c"
        # 475 "04heap.c"
        if(force_delete_) {
            # 476 "04heap.c"
            c_value_195=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(obj))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 478 "04heap.c"
            klass_196=type->mClass;
            # 480 "04heap.c"
            class_name_197=klass_196->mName;
            # 482 "04heap.c"
            fun_name_198="force_finalize";
            # 484 "04heap.c"
            type2_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 485 "04heap.c"
            type2_199->mHeap=(_Bool)0;
            # 487 "04heap.c"
            fun_name2_200=(char*)come_increment_ref_count(((char*)(right_value172=create_method_name(type,(_Bool)0,fun_name_198,info,(_Bool)1))));
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 489 "04heap.c"
            finalizer_201=((void*)0);
            # 526 "04heap.c"
            # 490 "04heap.c"
            if(_if_conditional255=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional255) {
                # 491 "04heap.c"
                finalizer_201=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_200);
                # 508 "04heap.c"
                # 493 "04heap.c"
                if(_if_conditional256=finalizer_201==((void*)0),                _if_conditional256) {
                    # 494 "04heap.c"
                    none_generics_name_202=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type2_199->mClass->mName))));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 496 "04heap.c"
                    generics_fun_name_203=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s_%s",none_generics_name_202,fun_name_198))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 497 "04heap.c"
                    generics_fun_204=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_203);
                    # 507 "04heap.c"
                    # 499 "04heap.c"
                    if(generics_fun_204) {
                        # 505 "04heap.c"
                        # 500 "04heap.c"
                        if(_if_conditional258=!create_generics_fun((char*)come_increment_ref_count(fun_name2_200),generics_fun_204,type,info),                        _if_conditional258) {
                            # 502 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 503 "04heap.c"
                            exit(2);
                        }
                        # 505 "04heap.c"
                        finalizer_201=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_200);
                    }
                    none_generics_name_202 = come_decrement_ref_count2(none_generics_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_203 = come_decrement_ref_count2(generics_fun_name_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 510 "04heap.c"
                # 521 "04heap.c"
                for(                i_205=128-1;                i_205>=1;                i_205--                ){
                    # 512 "04heap.c"
                    new_fun_name_206=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s_v%d",fun_name2_200,i_205))));
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 513 "04heap.c"
                    finalizer_201=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_206);
                    # 519 "04heap.c"
                    # 515 "04heap.c"
                    if(finalizer_201) {
                        # 516 "04heap.c"
                        __dec_obj62=fun_name2_200;
                        fun_name2_200=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(new_fun_name_206))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 517 "04heap.c"
                        new_fun_name_206 = come_decrement_ref_count2(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_206 = come_decrement_ref_count2(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 524 "04heap.c"
                # 521 "04heap.c"
                if(_if_conditional260=finalizer_201==((void*)0),                _if_conditional260) {
                    # 522 "04heap.c"
                    finalizer_201=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_200);
                }
            }
            # 535 "04heap.c"
            # 526 "04heap.c"
            if(_if_conditional261=finalizer_201==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional261) {
                # 528 "04heap.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value177=create_force_finalizer_automatically(type,fun_name_198,info)));
                fun_207=multiple_assign_var2->v1;
                new_fun_name_208=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 530 "04heap.c"
                __dec_obj63=fun_name2_200;
                fun_name2_200=(char*)come_increment_ref_count(new_fun_name_208);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 531 "04heap.c"
                finalizer_201=fun_207;
                new_fun_name_208 = come_decrement_ref_count2(new_fun_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 647 "04heap.c"
            # 535 "04heap.c"
            if(_if_conditional262=finalizer_201!=((void*)0),            _if_conditional262) {
                # 577 "04heap.c"
                # 536 "04heap.c"
                if(_if_conditional263=klass_196->mProtocol&&type->mPointerNum==1,                _if_conditional263) {
                    # 537 "04heap.c"
                    type_name_209=(char*)come_increment_ref_count(((char*)(right_value178=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 556 "04heap.c"
                    # 538 "04heap.c"
                    if(c_value_195) {
                        # 555 "04heap.c"
                        # 539 "04heap.c"
                        if(no_decrement) {
                            # 546 "04heap.c"
                            # 540 "04heap.c"
                            if(comma) {
                                # 541 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_200,c_value_195,type_name_209,c_value_195,type_name_209,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 544 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_200,c_value_195,type_name_209,c_value_195,type_name_209,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 554 "04heap.c"
                            # 548 "04heap.c"
                            if(comma) {
                                # 549 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_200,c_value_195,type_name_209,c_value_195,type_name_209,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 552 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_200,c_value_195,type_name_209,c_value_195,type_name_209,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_209 = come_decrement_ref_count2(type_name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 576 "04heap.c"
                    # 558 "04heap.c"
                    if(c_value_195) {
                        # 575 "04heap.c"
                        # 559 "04heap.c"
                        if(no_decrement) {
                            # 566 "04heap.c"
                            # 560 "04heap.c"
                            if(comma) {
                                # 561 "04heap.c"
                                add_come_code(info,((char*)(right_value179=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_200,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 564 "04heap.c"
                                add_come_code(info,((char*)(right_value180=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_200,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 574 "04heap.c"
                            # 568 "04heap.c"
                            if(comma) {
                                # 569 "04heap.c"
                                add_come_code(info,((char*)(right_value181=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_200,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 572 "04heap.c"
                                add_come_code(info,((char*)(right_value182=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_200,c_value_195,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 603 "04heap.c"
                # 579 "04heap.c"
                if(_if_conditional272=klass_196->mStruct&&type->mPointerNum==0,                _if_conditional272) {
                    # 589 "04heap.c"
                    for(                    o2_saved_210=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_196->mFields)),it_213=list$1tuple2$2charphsTypephph_begin((o2_saved_210));                    !list$1tuple2$2charphsTypephph_end((o2_saved_210));                    it_213=list$1tuple2$2charphsTypephph_next((o2_saved_210))                    ){
                        # 582 "04heap.c"
                        multiple_assign_var3=it_213;
                        name_216=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_217=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        # 588 "04heap.c"
                        # 584 "04heap.c"
                        if(_if_conditional277=field_type_217->mHeap&&field_type_217->mPointerNum>0,                        _if_conditional277) {
                            # 585 "04heap.c"
                            obj_218=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("(((%s)%s).%s)",((char*)(right_value183=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_195,name_216))));
                            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 586 "04heap.c"
                            free_object(field_type_217,obj_218,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_218 = come_decrement_ref_count2(obj_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 603 "04heap.c"
                    # 590 "04heap.c"
                    if(_if_conditional281=klass_196->mStruct&&type->mPointerNum==1,                    _if_conditional281) {
                        # 600 "04heap.c"
                        for(                        o2_saved_221=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_196->mFields)),it_222=list$1tuple2$2charphsTypephph_begin((o2_saved_221));                        !list$1tuple2$2charphsTypephph_end((o2_saved_221));                        it_222=list$1tuple2$2charphsTypephph_next((o2_saved_221))                        ){
                            # 593 "04heap.c"
                            multiple_assign_var4=it_222;
                            name_223=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_224=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            # 599 "04heap.c"
                            # 595 "04heap.c"
                            if(_if_conditional282=field_type_224->mHeap&&field_type_224->mPointerNum>0,                            _if_conditional282) {
                                # 596 "04heap.c"
                                obj_225=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("(((%s)%s)->%s)",((char*)(right_value185=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_195,name_223))));
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 597 "04heap.c"
                                free_object(field_type_224,obj_225,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_225 = come_decrement_ref_count2(obj_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 646 "04heap.c"
                # 603 "04heap.c"
                if(_if_conditional283=!type->mAllocaValue,                _if_conditional283) {
                    # 645 "04heap.c"
                    # 604 "04heap.c"
                    if(_if_conditional284=klass_196->mProtocol&&type->mPointerNum==1,                    _if_conditional284) {
                        # 624 "04heap.c"
                        # 605 "04heap.c"
                        if(c_value_195) {
                            # 606 "04heap.c"
                            type_name_226=(char*)come_increment_ref_count(((char*)(right_value187=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 623 "04heap.c"
                            # 607 "04heap.c"
                            if(no_decrement) {
                                # 614 "04heap.c"
                                # 608 "04heap.c"
                                if(comma) {
                                    # 609 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_195,c_value_195,c_value_195,type_name_226,c_value_195,type_name_226,c_value_195,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 612 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_195,c_value_195,c_value_195,type_name_226,c_value_195,type_name_226,c_value_195,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 622 "04heap.c"
                                # 616 "04heap.c"
                                if(comma) {
                                    # 617 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_195,c_value_195,c_value_195,type_name_226,c_value_195,type_name_226,c_value_195,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 620 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_195,c_value_195,c_value_195,type_name_226,c_value_195,type_name_226,c_value_195,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_226 = come_decrement_ref_count2(type_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 644 "04heap.c"
                        # 626 "04heap.c"
                        if(c_value_195) {
                            # 643 "04heap.c"
                            # 627 "04heap.c"
                            if(no_decrement) {
                                # 634 "04heap.c"
                                # 628 "04heap.c"
                                if(comma) {
                                    # 629 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_195,c_value_195,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 632 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_195,c_value_195,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 642 "04heap.c"
                                # 636 "04heap.c"
                                if(comma) {
                                    # 637 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_195,c_value_195,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 640 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_195,c_value_195,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_195 = come_decrement_ref_count2(c_value_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_200 = come_decrement_ref_count2(fun_name2_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 649 "04heap.c"
            c_value_227=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(obj))));
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 651 "04heap.c"
            klass_228=type->mClass;
            # 653 "04heap.c"
            class_name_229=klass_228->mName;
            # 655 "04heap.c"
            fun_name_230="finalize";
            # 657 "04heap.c"
            type2_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 658 "04heap.c"
            type2_231->mHeap=(_Bool)0;
            # 660 "04heap.c"
            fun_name2_232=(char*)come_increment_ref_count(((char*)(right_value190=create_method_name(type,(_Bool)0,fun_name_230,info,(_Bool)1))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 662 "04heap.c"
            finalizer_233=((void*)0);
            # 699 "04heap.c"
            # 663 "04heap.c"
            if(_if_conditional293=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional293) {
                # 664 "04heap.c"
                finalizer_233=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_232);
                # 681 "04heap.c"
                # 666 "04heap.c"
                if(_if_conditional294=finalizer_233==((void*)0),                _if_conditional294) {
                    # 667 "04heap.c"
                    none_generics_name_234=(char*)come_increment_ref_count(((char*)(right_value191=get_none_generics_name(type2_231->mClass->mName))));
                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 669 "04heap.c"
                    generics_fun_name_235=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s_%s",none_generics_name_234,fun_name_230))));
                    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 670 "04heap.c"
                    generics_fun_236=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_235);
                    # 680 "04heap.c"
                    # 672 "04heap.c"
                    if(generics_fun_236) {
                        # 678 "04heap.c"
                        # 673 "04heap.c"
                        if(_if_conditional296=!create_generics_fun((char*)come_increment_ref_count(fun_name2_232),generics_fun_236,type,info),                        _if_conditional296) {
                            # 675 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 676 "04heap.c"
                            exit(2);
                        }
                        # 678 "04heap.c"
                        finalizer_233=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_232);
                    }
                    none_generics_name_234 = come_decrement_ref_count2(none_generics_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_235 = come_decrement_ref_count2(generics_fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 683 "04heap.c"
                # 694 "04heap.c"
                for(                i_237=128-1;                i_237>=1;                i_237--                ){
                    # 685 "04heap.c"
                    new_fun_name_238=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_232,i_237))));
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 686 "04heap.c"
                    finalizer_233=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_238);
                    # 692 "04heap.c"
                    # 688 "04heap.c"
                    if(finalizer_233) {
                        # 689 "04heap.c"
                        __dec_obj64=fun_name2_232;
                        fun_name2_232=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(new_fun_name_238))));
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 690 "04heap.c"
                        new_fun_name_238 = come_decrement_ref_count2(new_fun_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_238 = come_decrement_ref_count2(new_fun_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 697 "04heap.c"
                # 694 "04heap.c"
                if(_if_conditional298=finalizer_233==((void*)0),                _if_conditional298) {
                    # 695 "04heap.c"
                    finalizer_233=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_232);
                }
            }
            # 708 "04heap.c"
            # 699 "04heap.c"
            if(_if_conditional299=finalizer_233==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional299) {
                # 701 "04heap.c"
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value195=create_finalizer_automatically(type,fun_name_230,info)));
                fun_239=multiple_assign_var5->v1;
                new_fun_name_240=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 703 "04heap.c"
                __dec_obj65=fun_name2_232;
                fun_name2_232=(char*)come_increment_ref_count(new_fun_name_240);
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 704 "04heap.c"
                finalizer_233=fun_239;
                new_fun_name_240 = come_decrement_ref_count2(new_fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 820 "04heap.c"
            # 708 "04heap.c"
            if(_if_conditional300=finalizer_233!=((void*)0),            _if_conditional300) {
                # 750 "04heap.c"
                # 709 "04heap.c"
                if(_if_conditional301=klass_228->mProtocol&&type->mPointerNum==1,                _if_conditional301) {
                    # 710 "04heap.c"
                    type_name_241=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 729 "04heap.c"
                    # 711 "04heap.c"
                    if(c_value_227) {
                        # 728 "04heap.c"
                        # 712 "04heap.c"
                        if(no_decrement) {
                            # 719 "04heap.c"
                            # 713 "04heap.c"
                            if(comma) {
                                # 714 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_232,c_value_227,type_name_241,c_value_227,type_name_241,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 717 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_232,c_value_227,type_name_241,c_value_227,type_name_241,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 727 "04heap.c"
                            # 721 "04heap.c"
                            if(comma) {
                                # 722 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_232,c_value_227,type_name_241,c_value_227,type_name_241,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 725 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_232,c_value_227,type_name_241,c_value_227,type_name_241,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_241 = come_decrement_ref_count2(type_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 749 "04heap.c"
                    # 731 "04heap.c"
                    if(c_value_227) {
                        # 748 "04heap.c"
                        # 732 "04heap.c"
                        if(no_decrement) {
                            # 739 "04heap.c"
                            # 733 "04heap.c"
                            if(comma) {
                                # 734 "04heap.c"
                                add_come_code(info,((char*)(right_value197=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_232,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 737 "04heap.c"
                                add_come_code(info,((char*)(right_value198=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_232,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 747 "04heap.c"
                            # 741 "04heap.c"
                            if(comma) {
                                # 742 "04heap.c"
                                add_come_code(info,((char*)(right_value199=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_232,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 745 "04heap.c"
                                add_come_code(info,((char*)(right_value200=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_232,c_value_227,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 776 "04heap.c"
                # 752 "04heap.c"
                if(_if_conditional310=klass_228->mStruct&&type->mPointerNum==0,                _if_conditional310) {
                    # 762 "04heap.c"
                    for(                    o2_saved_242=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_228->mFields)),it_243=list$1tuple2$2charphsTypephph_begin((o2_saved_242));                    !list$1tuple2$2charphsTypephph_end((o2_saved_242));                    it_243=list$1tuple2$2charphsTypephph_next((o2_saved_242))                    ){
                        # 755 "04heap.c"
                        multiple_assign_var6=it_243;
                        name_244=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        # 761 "04heap.c"
                        # 757 "04heap.c"
                        if(_if_conditional311=field_type_245->mHeap&&field_type_245->mPointerNum>0,                        _if_conditional311) {
                            # 758 "04heap.c"
                            obj_246=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("(((%s)%s).%s)",((char*)(right_value201=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_227,name_244))));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 759 "04heap.c"
                            free_object(field_type_245,obj_246,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_246 = come_decrement_ref_count2(obj_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 776 "04heap.c"
                    # 763 "04heap.c"
                    if(_if_conditional312=klass_228->mStruct&&type->mPointerNum==1,                    _if_conditional312) {
                        # 773 "04heap.c"
                        for(                        o2_saved_247=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_228->mFields)),it_248=list$1tuple2$2charphsTypephph_begin((o2_saved_247));                        !list$1tuple2$2charphsTypephph_end((o2_saved_247));                        it_248=list$1tuple2$2charphsTypephph_next((o2_saved_247))                        ){
                            # 766 "04heap.c"
                            multiple_assign_var7=it_248;
                            name_249=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_250=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            # 772 "04heap.c"
                            # 768 "04heap.c"
                            if(_if_conditional313=field_type_250->mHeap&&field_type_250->mPointerNum>0,                            _if_conditional313) {
                                # 769 "04heap.c"
                                obj_251=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("(((%s)%s)->%s)",((char*)(right_value203=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_227,name_249))));
                                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 770 "04heap.c"
                                free_object(field_type_250,obj_251,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_251 = come_decrement_ref_count2(obj_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_249 = come_decrement_ref_count2(name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 819 "04heap.c"
                # 776 "04heap.c"
                if(_if_conditional314=!type->mAllocaValue,                _if_conditional314) {
                    # 818 "04heap.c"
                    # 777 "04heap.c"
                    if(_if_conditional315=klass_228->mProtocol&&type->mPointerNum==1,                    _if_conditional315) {
                        # 797 "04heap.c"
                        # 778 "04heap.c"
                        if(c_value_227) {
                            # 779 "04heap.c"
                            type_name_252=(char*)come_increment_ref_count(((char*)(right_value205=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 796 "04heap.c"
                            # 780 "04heap.c"
                            if(no_decrement) {
                                # 787 "04heap.c"
                                # 781 "04heap.c"
                                if(comma) {
                                    # 782 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_227,c_value_227,c_value_227,type_name_252,c_value_227,type_name_252,c_value_227,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 785 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_227,c_value_227,c_value_227,type_name_252,c_value_227,type_name_252,c_value_227,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 795 "04heap.c"
                                # 789 "04heap.c"
                                if(comma) {
                                    # 790 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_227,c_value_227,c_value_227,type_name_252,c_value_227,type_name_252,c_value_227,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 793 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_227,c_value_227,c_value_227,type_name_252,c_value_227,type_name_252,c_value_227,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_252 = come_decrement_ref_count2(type_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 817 "04heap.c"
                        # 799 "04heap.c"
                        if(c_value_227) {
                            # 816 "04heap.c"
                            # 800 "04heap.c"
                            if(no_decrement) {
                                # 807 "04heap.c"
                                # 801 "04heap.c"
                                if(comma) {
                                    # 802 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_227,c_value_227,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 805 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_227,c_value_227,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 815 "04heap.c"
                                # 809 "04heap.c"
                                if(comma) {
                                    # 810 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_227,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 813 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_227,c_value_227,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_227 = come_decrement_ref_count2(c_value_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_232 = come_decrement_ref_count2(fun_name2_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 823 "04heap.c"
    __dec_obj66=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_193);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 824 "04heap.c"
    __dec_obj67=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_192);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct tuple2$2charphsTypeph* result_211;
struct tuple2$2charphsTypeph* __result117__;
_Bool _if_conditional274;
struct tuple2$2charphsTypeph* __result118__;
struct tuple2$2charphsTypeph* result_212;
struct tuple2$2charphsTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_212, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional273=self==((void*)0),                        _if_conditional273) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_211,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 288 "./neo-c.h"
                            __result117__ = __result_obj__ = result_211;
                            return __result117__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result118__ = __result_obj__ = self->it->item;
                            return __result118__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_212,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 298 "./neo-c.h"
                        __result119__ = __result_obj__ = result_212;
                        return __result119__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result120__ = self==((void*)0)||self->it==((void*)0);
                        return __result120__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional275;
struct tuple2$2charphsTypeph* result_214;
struct tuple2$2charphsTypeph* __result121__;
_Bool _if_conditional276;
struct tuple2$2charphsTypeph* __result122__;
struct tuple2$2charphsTypeph* result_215;
struct tuple2$2charphsTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_214, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_215, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional275=self==((void*)0)||self->it==((void*)0),                        _if_conditional275) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_214,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 305 "./neo-c.h"
                            __result121__ = __result_obj__ = result_214;
                            return __result121__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result122__ = __result_obj__ = self->it->item;
                            return __result122__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_215,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 316 "./neo-c.h"
                        __result123__ = __result_obj__ = result_215;
                        return __result123__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_219;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_220;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_220, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 123 "./neo-c.h"
                        it_219=self->head;
                        # 129 "./neo-c.h"
                        while(_while_condtional25=it_219!=((void*)0),                        _while_condtional25) {
                            # 125 "./neo-c.h"
                            prev_it_220=it_219;
                            # 126 "./neo-c.h"
                            it_219=it_219->next;
                            # 127 "./neo-c.h"
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                if(_if_conditional278=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional278) {
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional279=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional279) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional280=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional280) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value206;
struct sType* type2_253;
_Bool _if_conditional324;
char* result_254;
struct sType* result_type_255;
struct list$1CVALUEph* stack_saved_256;
struct list$1sRightValueObjectph* right_value_objects_257;
void* right_value207;
char* c_value_258;
struct sClass* klass_259;
char* class_name_260;
char* fun_name_261;
struct sFun* cloner_262;
char* fun_name2_263;
_Bool _if_conditional325;
void* right_value208;
char* none_generics_name_264;
void* right_value209;
struct sType* obj_type_265;
void* right_value210;
char* __dec_obj68;
void* right_value211;
char* fun_name3_266;
struct sGenericsFun* generics_fun_269;
_Bool _if_conditional330;
void* right_value212;
_Bool _if_conditional331;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
struct tuple2$2sTypephcharph* __result129__;
void* right_value218;
char* __dec_obj71;
int i_270;
void* right_value219;
char* new_fun_name_271;
_Bool _if_conditional334;
void* right_value220;
char* __dec_obj72;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value221;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_272;
char* new_fun_name_273;
char* __dec_obj73;
_Bool _if_conditional337;
struct sType* __dec_obj74;
void* right_value222;
struct sType* __dec_obj75;
void* right_value223;
char* __dec_obj76;
_Bool _if_conditional338;
void* right_value224;
char* __dec_obj77;
void* right_value225;
struct sType* __dec_obj78;
void* right_value226;
char* type_name_274;
void* right_value227;
char* __dec_obj79;
_Bool _if_conditional339;
void* right_value228;
char* __dec_obj80;
struct list$1sRightValueObjectph* __dec_obj81;
struct list$1CVALUEph* __dec_obj82;
void* right_value229;
void* right_value230;
struct tuple2$2sTypephcharph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&type2_253, 0, sizeof(struct sType*));
memset(&result_254, 0, sizeof(char*));
memset(&result_type_255, 0, sizeof(struct sType*));
memset(&stack_saved_256, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_257, 0, sizeof(struct list$1sRightValueObjectph*));
right_value207 = (void*)0;
memset(&c_value_258, 0, sizeof(char*));
memset(&klass_259, 0, sizeof(struct sClass*));
memset(&class_name_260, 0, sizeof(char*));
memset(&fun_name_261, 0, sizeof(char*));
memset(&cloner_262, 0, sizeof(struct sFun*));
memset(&fun_name2_263, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&none_generics_name_264, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&obj_type_265, 0, sizeof(struct sType*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&fun_name3_266, 0, sizeof(char*));
memset(&generics_fun_269, 0, sizeof(struct sGenericsFun*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value219 = (void*)0;
memset(&new_fun_name_271, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&fun_272, 0, sizeof(struct sFun*));
memset(&new_fun_name_273, 0, sizeof(char*));
memset(&fun_272, 0, sizeof(struct sFun*));
memset(&new_fun_name_273, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&type_name_274, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    # 829 "04heap.c"
    type2_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 834 "04heap.c"
    # 830 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 831 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 835 "04heap.c"
    result_254=((void*)0);
    # 835 "04heap.c"
    result_type_255=((void*)0);
    # 836 "04heap.c"
    stack_saved_256=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 837 "04heap.c"
    right_value_objects_257=info->right_value_objects;
    # 839 "04heap.c"
    c_value_258=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(obj))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 841 "04heap.c"
    klass_259=type->mClass;
    # 843 "04heap.c"
    class_name_260=klass_259->mName;
    # 845 "04heap.c"
    fun_name_261="clone";
    # 847 "04heap.c"
    cloner_262=((void*)0);
    # 848 "04heap.c"
    # 886 "04heap.c"
    # 849 "04heap.c"
    if(_if_conditional325=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional325) {
        # 850 "04heap.c"
        none_generics_name_264=(char*)come_increment_ref_count(((char*)(right_value208=get_none_generics_name(type->mClass->mName))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 852 "04heap.c"
        obj_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 854 "04heap.c"
        __dec_obj68=fun_name2_263;
        fun_name2_263=(char*)come_increment_ref_count(((char*)(right_value210=create_method_name(obj_type_265,(_Bool)0,fun_name_261,info,(_Bool)1))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 855 "04heap.c"
        fun_name3_266=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s_%s",none_generics_name_264,fun_name_261))));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 857 "04heap.c"
        generics_fun_269=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_266,((void*)0));
        # 865 "04heap.c"
        # 859 "04heap.c"
        if(generics_fun_269) {
            # 863 "04heap.c"
            # 860 "04heap.c"
            if(_if_conditional331=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name2_263)))),generics_fun_269,obj_type_265,info),            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional331) {
                # 861 "04heap.c"
                __result129__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value217=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value216=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 861, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 861, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("")))))));
                none_generics_name_264 = come_decrement_ref_count2(none_generics_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_266 = come_decrement_ref_count2(fun_name3_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_254 = come_decrement_ref_count2(result_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_258 = come_decrement_ref_count2(c_value_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_263 = come_decrement_ref_count2(fun_name2_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result129__;
            }
        }
        # 865 "04heap.c"
        cloner_262=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_263);
        none_generics_name_264 = come_decrement_ref_count2(none_generics_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_266 = come_decrement_ref_count2(fun_name3_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 868 "04heap.c"
        __dec_obj71=fun_name2_263;
        fun_name2_263=(char*)come_increment_ref_count(((char*)(right_value218=create_method_name(type,(_Bool)0,fun_name_261,info,(_Bool)1))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 870 "04heap.c"
        # 881 "04heap.c"
        for(        i_270=128-1;        i_270>=1;        i_270--        ){
            # 872 "04heap.c"
            new_fun_name_271=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s_v%d",fun_name2_263,i_270))));
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 873 "04heap.c"
            cloner_262=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_271);
            # 879 "04heap.c"
            # 875 "04heap.c"
            if(cloner_262) {
                # 876 "04heap.c"
                __dec_obj72=fun_name2_263;
                fun_name2_263=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(new_fun_name_271))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 877 "04heap.c"
                new_fun_name_271 = come_decrement_ref_count2(new_fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_271 = come_decrement_ref_count2(new_fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 884 "04heap.c"
        # 881 "04heap.c"
        if(_if_conditional335=cloner_262==((void*)0),        _if_conditional335) {
            # 882 "04heap.c"
            cloner_262=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_263);
        }
    }
    # 895 "04heap.c"
    # 886 "04heap.c"
    if(_if_conditional336=cloner_262==((void*)0)&&!type->mClass->mNumber,    _if_conditional336) {
        # 888 "04heap.c"
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value221=create_cloner_automatically(type,fun_name_261,info)));
        fun_272=multiple_assign_var8->v1;
        new_fun_name_273=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 890 "04heap.c"
        __dec_obj73=fun_name2_263;
        fun_name2_263=(char*)come_increment_ref_count(new_fun_name_273);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 891 "04heap.c"
        cloner_262=fun_272;
        new_fun_name_273 = come_decrement_ref_count2(new_fun_name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 915 "04heap.c"
    # 895 "04heap.c"
    if(_if_conditional337=cloner_262!=((void*)0),    _if_conditional337) {
        # 896 "04heap.c"
        __dec_obj74=result_type_255;
        result_type_255=(struct sType*)come_increment_ref_count(cloner_262->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 897 "04heap.c"
        __dec_obj75=result_type_255;
        result_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=solve_generics(result_type_255,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 899 "04heap.c"
        __dec_obj76=result_254;
        result_254=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s(%s)",fun_name2_263,c_value_258))));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 904 "04heap.c"
        # 901 "04heap.c"
        if(gComeDebug) {
            # 902 "04heap.c"
            __dec_obj77=result_254;
            result_254=(char*)come_increment_ref_count(((char*)(right_value224=append_stackframe(result_254,result_type_255,info))));
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 906 "04heap.c"
        __dec_obj78=result_type_255;
        result_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 907 "04heap.c"
        type2_253->mHeap=(_Bool)1;
        # 908 "04heap.c"
        type_name_274=(char*)come_increment_ref_count(((char*)(right_value226=make_type_name_string(type2_253,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 909 "04heap.c"
        __dec_obj79=result_254;
        result_254=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_274,c_value_258,info->sname,info->sline,type_name_274))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 913 "04heap.c"
        # 910 "04heap.c"
        if(gComeDebug) {
            # 911 "04heap.c"
            __dec_obj80=result_254;
            result_254=(char*)come_increment_ref_count(((char*)(right_value228=append_stackframe(result_254,result_type_255,info))));
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_274 = come_decrement_ref_count2(type_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 915 "04heap.c"
    __dec_obj81=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_257);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 916 "04heap.c"
    __dec_obj82=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_256);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 918 "04heap.c"
    __result130__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value230=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value229=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 918, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_255),(char*)come_increment_ref_count(result_254))));
    come_call_finalizer2(sType_finalize,type2_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_254 = come_decrement_ref_count2(result_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_258 = come_decrement_ref_count2(c_value_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_263 = come_decrement_ref_count2(fun_name2_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result130__;
    come_call_finalizer2(sType_finalize,type2_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_254 = come_decrement_ref_count2(result_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_258 = come_decrement_ref_count2(c_value_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_263 = come_decrement_ref_count2(fun_name2_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_267;
unsigned int it_268;
_Bool _while_condtional26;
_Bool _if_conditional326;
_Bool _if_conditional327;
struct sGenericsFun* __result124__;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct sGenericsFun* __result125__;
struct sGenericsFun* __result126__;
struct sGenericsFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_267, 0, sizeof(unsigned int));
memset(&it_268, 0, sizeof(unsigned int));
            # 1226 "./neo-c.h"
            hash_267=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./neo-c.h"
            it_268=hash_267;
            # 1251 "./neo-c.h"
            while(_while_condtional26=(_Bool)1,            _while_condtional26) {
                # 1249 "./neo-c.h"
                # 1230 "./neo-c.h"
                if(_if_conditional326=self->item_existance[it_268],                _if_conditional326) {
                    # 1237 "./neo-c.h"
                    # 1232 "./neo-c.h"
                    if(_if_conditional327=string_equals(self->keys[it_268],key),                    _if_conditional327) {
                        # 1234 "./neo-c.h"
                        __result124__ = __result_obj__ = self->items[it_268];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                    }
                    # 1237 "./neo-c.h"
                    it_268++;
                    # 1245 "./neo-c.h"
                    # 1239 "./neo-c.h"
                    if(_if_conditional328=it_268>=self->size,                    _if_conditional328) {
                        # 1240 "./neo-c.h"
                        it_268=0;
                    }
                    else {
                        # 1245 "./neo-c.h"
                        # 1242 "./neo-c.h"
                        if(_if_conditional329=it_268==hash_267,                        _if_conditional329) {
                            # 1243 "./neo-c.h"
                            __result125__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    # 1247 "./neo-c.h"
                    __result126__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            # 1251 "./neo-c.h"
            __result127__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj69;
char* __dec_obj70;
struct tuple2$2sTypephcharph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1767 "./neo-c.h"
                    __dec_obj69=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 1768 "./neo-c.h"
                    __dec_obj70=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1770 "./neo-c.h"
                    __result128__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result128__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional332=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional332) {
                            # 0 "tuple2$2sTypephcharphp_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2sTypephcharphp_finalize"
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional333=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional333) {
                            # 1 "tuple2$2sTypephcharphp_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional340;
char* result_275;
struct list$1CVALUEph* stack_saved_276;
struct list$1sRightValueObjectph* right_value_objects_277;
struct sClass* klass_278;
char* class_name_279;
char* fun_name_280;
void* right_value231;
struct sType* type2_281;
struct sFun* cloner_282;
char* fun_name2_283;
_Bool _if_conditional341;
void* right_value232;
char* none_generics_name_284;
void* right_value233;
struct sType* obj_type_285;
void* right_value234;
char* __dec_obj83;
void* right_value235;
char* fun_name3_286;
struct sGenericsFun* generics_fun_287;
_Bool _if_conditional342;
void* right_value236;
_Bool _if_conditional343;
_Bool __result131__;
void* right_value237;
char* __dec_obj84;
int i_288;
void* right_value238;
char* new_fun_name_289;
_Bool _if_conditional344;
void* right_value239;
char* __dec_obj85;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value240;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_290;
char* new_fun_name_291;
char* __dec_obj86;
struct list$1sRightValueObjectph* __dec_obj87;
struct list$1CVALUEph* __dec_obj88;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_275, 0, sizeof(char*));
memset(&stack_saved_276, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_277, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_278, 0, sizeof(struct sClass*));
memset(&class_name_279, 0, sizeof(char*));
memset(&fun_name_280, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&type2_281, 0, sizeof(struct sType*));
memset(&cloner_282, 0, sizeof(struct sFun*));
memset(&fun_name2_283, 0, sizeof(char*));
right_value232 = (void*)0;
memset(&none_generics_name_284, 0, sizeof(char*));
right_value233 = (void*)0;
memset(&obj_type_285, 0, sizeof(struct sType*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&fun_name3_286, 0, sizeof(char*));
memset(&generics_fun_287, 0, sizeof(struct sGenericsFun*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&i_288, 0, sizeof(int));
right_value238 = (void*)0;
memset(&new_fun_name_289, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&fun_290, 0, sizeof(struct sFun*));
memset(&new_fun_name_291, 0, sizeof(char*));
memset(&fun_290, 0, sizeof(struct sFun*));
memset(&new_fun_name_291, 0, sizeof(char*));
    # 926 "04heap.c"
    # 923 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 924 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 927 "04heap.c"
    result_275=((void*)0);
    # 927 "04heap.c"
    stack_saved_276=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 928 "04heap.c"
    right_value_objects_277=info->right_value_objects;
    # 930 "04heap.c"
    klass_278=type->mClass;
    # 932 "04heap.c"
    class_name_279=klass_278->mName;
    # 934 "04heap.c"
    fun_name_280="equals";
    # 936 "04heap.c"
    type2_281=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 937 "04heap.c"
    type2_281->mHeap=(_Bool)0;
    # 939 "04heap.c"
    cloner_282=((void*)0);
    # 940 "04heap.c"
    # 978 "04heap.c"
    # 941 "04heap.c"
    if(_if_conditional341=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional341) {
        # 942 "04heap.c"
        none_generics_name_284=(char*)come_increment_ref_count(((char*)(right_value232=get_none_generics_name(type->mClass->mName))));
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 944 "04heap.c"
        obj_type_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 946 "04heap.c"
        __dec_obj83=fun_name2_283;
        fun_name2_283=(char*)come_increment_ref_count(((char*)(right_value234=create_method_name(obj_type_285,(_Bool)0,fun_name_280,info,(_Bool)1))));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 947 "04heap.c"
        fun_name3_286=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s_%s",none_generics_name_284,fun_name_280))));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 949 "04heap.c"
        generics_fun_287=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_286,((void*)0));
        # 957 "04heap.c"
        # 951 "04heap.c"
        if(generics_fun_287) {
            # 955 "04heap.c"
            # 952 "04heap.c"
            if(_if_conditional343=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(fun_name2_283)))),generics_fun_287,obj_type_285,info),            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional343) {
                # 953 "04heap.c"
                __result131__ = (_Bool)0;
                none_generics_name_284 = come_decrement_ref_count2(none_generics_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_286 = come_decrement_ref_count2(fun_name3_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_275 = come_decrement_ref_count2(result_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_283 = come_decrement_ref_count2(fun_name2_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result131__;
            }
        }
        # 957 "04heap.c"
        cloner_282=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_283);
        none_generics_name_284 = come_decrement_ref_count2(none_generics_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_286 = come_decrement_ref_count2(fun_name3_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 960 "04heap.c"
        __dec_obj84=fun_name2_283;
        fun_name2_283=(char*)come_increment_ref_count(((char*)(right_value237=create_method_name(type,(_Bool)0,fun_name_280,info,(_Bool)1))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 962 "04heap.c"
        # 973 "04heap.c"
        for(        i_288=128-1;        i_288>=1;        i_288--        ){
            # 964 "04heap.c"
            new_fun_name_289=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s_v%d",fun_name2_283,i_288))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 965 "04heap.c"
            cloner_282=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_289);
            # 971 "04heap.c"
            # 967 "04heap.c"
            if(cloner_282) {
                # 968 "04heap.c"
                __dec_obj85=fun_name2_283;
                fun_name2_283=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(new_fun_name_289))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 969 "04heap.c"
                new_fun_name_289 = come_decrement_ref_count2(new_fun_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_289 = come_decrement_ref_count2(new_fun_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 976 "04heap.c"
        # 973 "04heap.c"
        if(_if_conditional345=cloner_282==((void*)0),        _if_conditional345) {
            # 974 "04heap.c"
            cloner_282=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_283);
        }
    }
    # 986 "04heap.c"
    # 978 "04heap.c"
    if(_if_conditional346=cloner_282==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional346) {
        # 980 "04heap.c"
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value240=create_equals_automatically(type,fun_name_280,info)));
        fun_290=multiple_assign_var9->v1;
        new_fun_name_291=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 982 "04heap.c"
        __dec_obj86=fun_name2_283;
        fun_name2_283=(char*)come_increment_ref_count(new_fun_name_291);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 983 "04heap.c"
        cloner_282=fun_290;
        new_fun_name_291 = come_decrement_ref_count2(new_fun_name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 986 "04heap.c"
    __dec_obj87=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_277);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 987 "04heap.c"
    __dec_obj88=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_276);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 989 "04heap.c"
    __result132__ = (_Bool)1;
    result_275 = come_decrement_ref_count2(result_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_283 = come_decrement_ref_count2(fun_name2_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result132__;
    result_275 = come_decrement_ref_count2(result_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_283 = come_decrement_ref_count2(fun_name2_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional347;
char* result_292;
struct list$1CVALUEph* stack_saved_293;
struct list$1sRightValueObjectph* right_value_objects_294;
struct sClass* klass_295;
char* class_name_296;
char* fun_name_297;
void* right_value241;
struct sType* type2_298;
struct sFun* cloner_299;
char* fun_name2_300;
_Bool _if_conditional348;
void* right_value242;
char* none_generics_name_301;
void* right_value243;
struct sType* obj_type_302;
void* right_value244;
char* __dec_obj89;
void* right_value245;
char* fun_name3_303;
struct sGenericsFun* generics_fun_304;
_Bool _if_conditional349;
void* right_value246;
_Bool _if_conditional350;
_Bool __result133__;
void* right_value247;
char* __dec_obj90;
int i_305;
void* right_value248;
char* new_fun_name_306;
_Bool _if_conditional351;
void* right_value249;
char* __dec_obj91;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value250;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_307;
char* new_fun_name_308;
char* __dec_obj92;
struct list$1sRightValueObjectph* __dec_obj93;
struct list$1CVALUEph* __dec_obj94;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_292, 0, sizeof(char*));
memset(&stack_saved_293, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_294, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_295, 0, sizeof(struct sClass*));
memset(&class_name_296, 0, sizeof(char*));
memset(&fun_name_297, 0, sizeof(char*));
right_value241 = (void*)0;
memset(&type2_298, 0, sizeof(struct sType*));
memset(&cloner_299, 0, sizeof(struct sFun*));
memset(&fun_name2_300, 0, sizeof(char*));
right_value242 = (void*)0;
memset(&none_generics_name_301, 0, sizeof(char*));
right_value243 = (void*)0;
memset(&obj_type_302, 0, sizeof(struct sType*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&fun_name3_303, 0, sizeof(char*));
memset(&generics_fun_304, 0, sizeof(struct sGenericsFun*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&i_305, 0, sizeof(int));
right_value248 = (void*)0;
memset(&new_fun_name_306, 0, sizeof(char*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&fun_307, 0, sizeof(struct sFun*));
memset(&new_fun_name_308, 0, sizeof(char*));
memset(&fun_307, 0, sizeof(struct sFun*));
memset(&new_fun_name_308, 0, sizeof(char*));
    # 997 "04heap.c"
    # 994 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 995 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 998 "04heap.c"
    result_292=((void*)0);
    # 998 "04heap.c"
    stack_saved_293=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 999 "04heap.c"
    right_value_objects_294=info->right_value_objects;
    # 1001 "04heap.c"
    klass_295=type->mClass;
    # 1003 "04heap.c"
    class_name_296=klass_295->mName;
    # 1005 "04heap.c"
    fun_name_297="operator_equals";
    # 1007 "04heap.c"
    type2_298=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1008 "04heap.c"
    type2_298->mHeap=(_Bool)0;
    # 1010 "04heap.c"
    cloner_299=((void*)0);
    # 1011 "04heap.c"
    # 1049 "04heap.c"
    # 1012 "04heap.c"
    if(_if_conditional348=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional348) {
        # 1013 "04heap.c"
        none_generics_name_301=(char*)come_increment_ref_count(((char*)(right_value242=get_none_generics_name(type->mClass->mName))));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1015 "04heap.c"
        obj_type_302=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1017 "04heap.c"
        __dec_obj89=fun_name2_300;
        fun_name2_300=(char*)come_increment_ref_count(((char*)(right_value244=create_method_name(obj_type_302,(_Bool)0,fun_name_297,info,(_Bool)1))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1018 "04heap.c"
        fun_name3_303=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s_%s",none_generics_name_301,fun_name_297))));
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1020 "04heap.c"
        generics_fun_304=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_303,((void*)0));
        # 1028 "04heap.c"
        # 1022 "04heap.c"
        if(generics_fun_304) {
            # 1026 "04heap.c"
            # 1023 "04heap.c"
            if(_if_conditional350=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(fun_name2_300)))),generics_fun_304,obj_type_302,info),            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional350) {
                # 1024 "04heap.c"
                __result133__ = (_Bool)0;
                none_generics_name_301 = come_decrement_ref_count2(none_generics_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_303 = come_decrement_ref_count2(fun_name3_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_292 = come_decrement_ref_count2(result_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_300 = come_decrement_ref_count2(fun_name2_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result133__;
            }
        }
        # 1028 "04heap.c"
        cloner_299=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_300);
        none_generics_name_301 = come_decrement_ref_count2(none_generics_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_303 = come_decrement_ref_count2(fun_name3_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1031 "04heap.c"
        __dec_obj90=fun_name2_300;
        fun_name2_300=(char*)come_increment_ref_count(((char*)(right_value247=create_method_name(type,(_Bool)0,fun_name_297,info,(_Bool)1))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1033 "04heap.c"
        # 1044 "04heap.c"
        for(        i_305=128-1;        i_305>=1;        i_305--        ){
            # 1035 "04heap.c"
            new_fun_name_306=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s_v%d",fun_name2_300,i_305))));
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1036 "04heap.c"
            cloner_299=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_306);
            # 1042 "04heap.c"
            # 1038 "04heap.c"
            if(cloner_299) {
                # 1039 "04heap.c"
                __dec_obj91=fun_name2_300;
                fun_name2_300=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(new_fun_name_306))));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1040 "04heap.c"
                new_fun_name_306 = come_decrement_ref_count2(new_fun_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_306 = come_decrement_ref_count2(new_fun_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1047 "04heap.c"
        # 1044 "04heap.c"
        if(_if_conditional352=cloner_299==((void*)0),        _if_conditional352) {
            # 1045 "04heap.c"
            cloner_299=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_300);
        }
    }
    # 1057 "04heap.c"
    # 1049 "04heap.c"
    if(_if_conditional353=cloner_299==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional353) {
        # 1051 "04heap.c"
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value250=create_operator_equals_automatically(type,fun_name_297,info)));
        fun_307=multiple_assign_var10->v1;
        new_fun_name_308=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1053 "04heap.c"
        __dec_obj92=fun_name2_300;
        fun_name2_300=(char*)come_increment_ref_count(new_fun_name_308);
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1054 "04heap.c"
        cloner_299=fun_307;
        new_fun_name_308 = come_decrement_ref_count2(new_fun_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1057 "04heap.c"
    __dec_obj93=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_294);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1058 "04heap.c"
    __dec_obj94=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_293);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1060 "04heap.c"
    __result134__ = (_Bool)1;
    result_292 = come_decrement_ref_count2(result_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_300 = come_decrement_ref_count2(fun_name2_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result134__;
    result_292 = come_decrement_ref_count2(result_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_300 = come_decrement_ref_count2(fun_name2_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional354;
char* result_309;
struct list$1CVALUEph* stack_saved_310;
struct list$1sRightValueObjectph* right_value_objects_311;
struct sClass* klass_312;
char* class_name_313;
char* fun_name_314;
void* right_value251;
struct sType* type2_315;
struct sFun* cloner_316;
char* fun_name2_317;
_Bool _if_conditional355;
void* right_value252;
char* none_generics_name_318;
void* right_value253;
struct sType* obj_type_319;
void* right_value254;
char* __dec_obj95;
void* right_value255;
char* fun_name3_320;
struct sGenericsFun* generics_fun_321;
_Bool _if_conditional356;
void* right_value256;
_Bool _if_conditional357;
_Bool __result135__;
void* right_value257;
char* __dec_obj96;
int i_322;
void* right_value258;
char* new_fun_name_323;
_Bool _if_conditional358;
void* right_value259;
char* __dec_obj97;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value260;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_324;
char* new_fun_name_325;
char* __dec_obj98;
struct list$1sRightValueObjectph* __dec_obj99;
struct list$1CVALUEph* __dec_obj100;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_309, 0, sizeof(char*));
memset(&stack_saved_310, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_311, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_312, 0, sizeof(struct sClass*));
memset(&class_name_313, 0, sizeof(char*));
memset(&fun_name_314, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&type2_315, 0, sizeof(struct sType*));
memset(&cloner_316, 0, sizeof(struct sFun*));
memset(&fun_name2_317, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&none_generics_name_318, 0, sizeof(char*));
right_value253 = (void*)0;
memset(&obj_type_319, 0, sizeof(struct sType*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&fun_name3_320, 0, sizeof(char*));
memset(&generics_fun_321, 0, sizeof(struct sGenericsFun*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&i_322, 0, sizeof(int));
right_value258 = (void*)0;
memset(&new_fun_name_323, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&fun_324, 0, sizeof(struct sFun*));
memset(&new_fun_name_325, 0, sizeof(char*));
memset(&fun_324, 0, sizeof(struct sFun*));
memset(&new_fun_name_325, 0, sizeof(char*));
    # 1068 "04heap.c"
    # 1065 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 1066 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 1069 "04heap.c"
    result_309=((void*)0);
    # 1069 "04heap.c"
    stack_saved_310=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 1070 "04heap.c"
    right_value_objects_311=info->right_value_objects;
    # 1072 "04heap.c"
    klass_312=type->mClass;
    # 1074 "04heap.c"
    class_name_313=klass_312->mName;
    # 1076 "04heap.c"
    fun_name_314="operator_not_equals";
    # 1078 "04heap.c"
    type2_315=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1079 "04heap.c"
    type2_315->mHeap=(_Bool)0;
    # 1081 "04heap.c"
    cloner_316=((void*)0);
    # 1082 "04heap.c"
    # 1120 "04heap.c"
    # 1083 "04heap.c"
    if(_if_conditional355=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional355) {
        # 1084 "04heap.c"
        none_generics_name_318=(char*)come_increment_ref_count(((char*)(right_value252=get_none_generics_name(type->mClass->mName))));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1086 "04heap.c"
        obj_type_319=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1088 "04heap.c"
        __dec_obj95=fun_name2_317;
        fun_name2_317=(char*)come_increment_ref_count(((char*)(right_value254=create_method_name(obj_type_319,(_Bool)0,fun_name_314,info,(_Bool)1))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1089 "04heap.c"
        fun_name3_320=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s_%s",none_generics_name_318,fun_name_314))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1091 "04heap.c"
        generics_fun_321=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_320,((void*)0));
        # 1099 "04heap.c"
        # 1093 "04heap.c"
        if(generics_fun_321) {
            # 1097 "04heap.c"
            # 1094 "04heap.c"
            if(_if_conditional357=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(fun_name2_317)))),generics_fun_321,obj_type_319,info),            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional357) {
                # 1095 "04heap.c"
                __result135__ = (_Bool)0;
                none_generics_name_318 = come_decrement_ref_count2(none_generics_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_320 = come_decrement_ref_count2(fun_name3_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_309 = come_decrement_ref_count2(result_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_317 = come_decrement_ref_count2(fun_name2_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result135__;
            }
        }
        # 1099 "04heap.c"
        cloner_316=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_317);
        none_generics_name_318 = come_decrement_ref_count2(none_generics_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_320 = come_decrement_ref_count2(fun_name3_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1102 "04heap.c"
        __dec_obj96=fun_name2_317;
        fun_name2_317=(char*)come_increment_ref_count(((char*)(right_value257=create_method_name(type,(_Bool)0,fun_name_314,info,(_Bool)1))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1104 "04heap.c"
        # 1115 "04heap.c"
        for(        i_322=128-1;        i_322>=1;        i_322--        ){
            # 1106 "04heap.c"
            new_fun_name_323=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s_v%d",fun_name2_317,i_322))));
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1107 "04heap.c"
            cloner_316=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_323);
            # 1113 "04heap.c"
            # 1109 "04heap.c"
            if(cloner_316) {
                # 1110 "04heap.c"
                __dec_obj97=fun_name2_317;
                fun_name2_317=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(new_fun_name_323))));
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1111 "04heap.c"
                new_fun_name_323 = come_decrement_ref_count2(new_fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_323 = come_decrement_ref_count2(new_fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1118 "04heap.c"
        # 1115 "04heap.c"
        if(_if_conditional359=cloner_316==((void*)0),        _if_conditional359) {
            # 1116 "04heap.c"
            cloner_316=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_317);
        }
    }
    # 1128 "04heap.c"
    # 1120 "04heap.c"
    if(_if_conditional360=cloner_316==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional360) {
        # 1122 "04heap.c"
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value260=create_operator_not_equals_automatically(type,fun_name_314,info)));
        fun_324=multiple_assign_var11->v1;
        new_fun_name_325=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1124 "04heap.c"
        __dec_obj98=fun_name2_317;
        fun_name2_317=(char*)come_increment_ref_count(new_fun_name_325);
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1125 "04heap.c"
        cloner_316=fun_324;
        new_fun_name_325 = come_decrement_ref_count2(new_fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1128 "04heap.c"
    __dec_obj99=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_311);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1129 "04heap.c"
    __dec_obj100=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_310);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1131 "04heap.c"
    __result136__ = (_Bool)1;
    result_309 = come_decrement_ref_count2(result_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_317 = come_decrement_ref_count2(fun_name2_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result136__;
    result_309 = come_decrement_ref_count2(result_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_317 = come_decrement_ref_count2(fun_name2_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional361;
_Bool __result137__;
struct list$1sRightValueObjectph* right_value_objects_326;
struct list$1sRightValueObjectph* o2_saved_327;
struct sRightValueObject* it_328;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_326, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_327, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_328, 0, sizeof(struct sRightValueObject*));
    # 1139 "04heap.c"
    # 1136 "04heap.c"
    if(gComeGC) {
        # 1137 "04heap.c"
        __result137__ = (_Bool)0;
        return __result137__;
    }
    # 1139 "04heap.c"
    right_value_objects_326=info->right_value_objects;
    # 1149 "04heap.c"
    for(    o2_saved_327=(right_value_objects_326),it_328=list$1sRightValueObjectph_begin((o2_saved_327));    !list$1sRightValueObjectph_end((o2_saved_327));    it_328=list$1sRightValueObjectph_next((o2_saved_327))    ){
        # 1147 "04heap.c"
        # 1142 "04heap.c"
        if(_if_conditional362=it_328&&!it_328->mFreed,        _if_conditional362) {
            # 1146 "04heap.c"
            # 1143 "04heap.c"
            if(_if_conditional363=string_operator_equals(it_328->mFunName,info->come_fun->mName)&&it_328->mBlockLevel==info->block_level,            _if_conditional363) {
                # 1144 "04heap.c"
                __result138__ = (_Bool)1;
                return __result138__;
            }
        }
    }
    # 1149 "04heap.c"
    __result139__ = (_Bool)0;
    return __result139__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional364;
_Bool free_right_value_329;
struct list$1sRightValueObjectph* right_value_objects_330;
int n_331;
struct list$1sRightValueObjectph* o2_saved_332;
struct sRightValueObject* it_333;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value261;
struct sType* type_334;
void* right_value262;
struct sType* __dec_obj101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_329, 0, sizeof(_Bool));
memset(&right_value_objects_330, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_331, 0, sizeof(int));
memset(&o2_saved_332, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_333, 0, sizeof(struct sRightValueObject*));
right_value261 = (void*)0;
memset(&type_334, 0, sizeof(struct sType*));
right_value262 = (void*)0;
    # 1157 "04heap.c"
    # 1154 "04heap.c"
    if(gComeGC) {
        # 1155 "04heap.c"
        return;
    }
    # 1157 "04heap.c"
    free_right_value_329=(_Bool)0;
    # 1158 "04heap.c"
    right_value_objects_330=info->right_value_objects;
    # 1160 "04heap.c"
    n_331=0;
    # 1179 "04heap.c"
    for(    o2_saved_332=(right_value_objects_330),it_333=list$1sRightValueObjectph_begin((o2_saved_332));    !list$1sRightValueObjectph_end((o2_saved_332));    it_333=list$1sRightValueObjectph_next((o2_saved_332))    ){
        # 1177 "04heap.c"
        # 1162 "04heap.c"
        if(_if_conditional365=it_333&&!it_333->mFreed,        _if_conditional365) {
            # 1175 "04heap.c"
            # 1163 "04heap.c"
            if(_if_conditional366=string_operator_equals(it_333->mFunName,info->come_fun->mName)&&it_333->mBlockLevel==info->block_level,            _if_conditional366) {
                # 1164 "04heap.c"
                type_334=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(it_333->mType))));
                come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1166 "04heap.c"
                __dec_obj101=type_334;
                type_334=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=solve_type(type_334,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1169 "04heap.c"
                free_object(type_334,it_333->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                # 1172 "04heap.c"
                it_333->mFreed=(_Bool)1;
                # 1173 "04heap.c"
                free_right_value_329=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        # 1177 "04heap.c"
        n_331++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional367;
_Bool __result140__;
struct list$1sRightValueObjectph* o2_saved_335;
struct sRightValueObject* it_336;
_Bool _if_conditional368;
_Bool __result141__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_335, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_336, 0, sizeof(struct sRightValueObject*));
    # 1186 "04heap.c"
    # 1183 "04heap.c"
    if(gComeGC) {
        # 1184 "04heap.c"
        __result140__ = (_Bool)0;
        return __result140__;
    }
    # 1192 "04heap.c"
    for(    o2_saved_335=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_336=list$1sRightValueObjectph_begin((o2_saved_335));    !list$1sRightValueObjectph_end((o2_saved_335));    it_336=list$1sRightValueObjectph_next((o2_saved_335))    ){
        # 1190 "04heap.c"
        # 1187 "04heap.c"
        if(_if_conditional368=it_336->mID==right_value_num,        _if_conditional368) {
            # 1188 "04heap.c"
            __result141__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result141__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1192 "04heap.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_337;
struct sVar* var__341;
_Bool _if_conditional377;
struct sVar* __result147__;
struct sVar* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_337, 0, sizeof(struct sVarTable*));
memset(&var__341, 0, sizeof(struct sVar*));
    # 1198 "04heap.c"
    it_337=table;
    # 1210 "04heap.c"
    while(it_337) {
        # 1201 "04heap.c"
        var__341=map$2charphsVarphp_operator_load_element(it_337->mVars,name);
        # 1207 "04heap.c"
        # 1203 "04heap.c"
        if(var__341) {
            # 1204 "04heap.c"
            __result147__ = __result_obj__ = var__341;
            return __result147__;
        }
        # 1207 "04heap.c"
        it_337=it_337->mParent;
    }
    # 1210 "04heap.c"
    __result148__ = __result_obj__ = ((void*)0);
    return __result148__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_338;
unsigned int hash_339;
unsigned int it_340;
_Bool _while_condtional27;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct sVar* __result143__;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct sVar* __result144__;
struct sVar* __result145__;
struct sVar* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_338, 0, sizeof(struct sVar*));
memset(&hash_339, 0, sizeof(unsigned int));
memset(&it_340, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_338,0,sizeof(struct sVar*));
            # 1547 "./neo-c.h"
            hash_339=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_340=hash_339;
            # 1572 "./neo-c.h"
            while(_while_condtional27=(_Bool)1,            _while_condtional27) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional369=self->item_existance[it_340],                _if_conditional369) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional370=string_equals(self->keys[it_340],key),                    _if_conditional370) {
                        # 1555 "./neo-c.h"
                        __result143__ = __result_obj__ = self->items[it_340];
                        come_call_finalizer2(sVar_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result143__;
                    }
                    # 1558 "./neo-c.h"
                    it_340++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional375=it_340>=self->size,                    _if_conditional375) {
                        # 1561 "./neo-c.h"
                        it_340=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional376=it_340==hash_339,                        _if_conditional376) {
                            # 1564 "./neo-c.h"
                            __result144__ = __result_obj__ = default_value_338;
                            come_call_finalizer2(sVar_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result144__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result145__ = __result_obj__ = default_value_338;
                    come_call_finalizer2(sVar_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                }
            }
            # 1572 "./neo-c.h"
            __result146__ = __result_obj__ = default_value_338;
            come_call_finalizer2(sVar_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result146__;
            come_call_finalizer2(sVar_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional371=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional371) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional372=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional372) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional373=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional373) {
                                # 2 "sVar_finalize"
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional374=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional374) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional378;
struct map$2charphsVarph* o2_saved_342;
char* it_345;
struct sVar* p_348;
struct sType* type_349;
struct sClass* klass_350;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value263;
char* c_value_351;
void* right_value264;
struct sType* type2_352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_342, 0, sizeof(struct map$2charphsVarph*));
memset(&it_345, 0, sizeof(char*));
memset(&p_348, 0, sizeof(struct sVar*));
memset(&type_349, 0, sizeof(struct sType*));
memset(&klass_350, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
memset(&c_value_351, 0, sizeof(char*));
right_value264 = (void*)0;
memset(&type2_352, 0, sizeof(struct sType*));
    # 1218 "04heap.c"
    # 1215 "04heap.c"
    if(gComeGC) {
        # 1216 "04heap.c"
        return;
    }
    # 1248 "04heap.c"
    for(    o2_saved_342=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_345=map$2charphsVarph_begin((o2_saved_342));    !map$2charphsVarph_end((o2_saved_342));    it_345=map$2charphsVarph_next((o2_saved_342))    ){
        # 1219 "04heap.c"
        p_348=map$2charphsVarphp_operator_load_element(table->mVars,it_345);
        # 1220 "04heap.c"
        type_349=p_348->mType;
        # 1221 "04heap.c"
        klass_350=type_349->mClass;
        # 1247 "04heap.c"
        # 1229 "04heap.c"
        if(_if_conditional383=ret_value!=((void*)0)&&p_348->mCValueName!=((void*)0)&&string_operator_equals(p_348->mCValueName,ret_value->mCValueName)&&type_349->mHeap,        _if_conditional383) {
            # 1231 "04heap.c"
            free_object(p_348->mType,p_348->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            # 1247 "04heap.c"
            # 1233 "04heap.c"
            if(_if_conditional384=type_349->mHeap&&p_348->mCValueName,            _if_conditional384) {
                # 1240 "04heap.c"
                # 1234 "04heap.c"
                if(type_349->mFunctionParam) {
                    # 1235 "04heap.c"
                    free_object(p_348->mType,p_348->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    # 1238 "04heap.c"
                    free_object(p_348->mType,p_348->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                # 1247 "04heap.c"
                # 1241 "04heap.c"
                if(_if_conditional386=klass_350->mStruct&&p_348->mCValueName&&type_349->mAllocaValue&&!type_349->mNoCallingDestructor,                _if_conditional386) {
                    # 1242 "04heap.c"
                    c_value_351=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("(&%s)",p_348->mCValueName))));
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1243 "04heap.c"
                    type2_352=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type_349))));
                    come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1244 "04heap.c"
                    type2_352->mPointerNum++;
                    # 1245 "04heap.c"
                    free_object(type2_352,c_value_351,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_351 = come_decrement_ref_count2(c_value_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_352, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional379;
char* result_343;
char* __result149__;
_Bool _if_conditional380;
char* __result150__;
char* result_344;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_343, 0, sizeof(char*));
memset(&result_344, 0, sizeof(char*));
        # 1304 "./neo-c.h"
        # 1299 "./neo-c.h"
        if(_if_conditional379=self==((void*)0),        _if_conditional379) {
            # 1300 "./neo-c.h"
            # 1301 "./neo-c.h"
            memset(&result_343,0,sizeof(char*));
            # 1302 "./neo-c.h"
            __result149__ = __result_obj__ = result_343;
            return __result149__;
        }
        # 1304 "./neo-c.h"
        self->key_list->it=self->key_list->head;
        # 1310 "./neo-c.h"
        # 1306 "./neo-c.h"
        if(self->key_list->it) {
            # 1307 "./neo-c.h"
            __result150__ = __result_obj__ = self->key_list->it->item;
            return __result150__;
        }
        # 1310 "./neo-c.h"
        # 1311 "./neo-c.h"
        memset(&result_344,0,sizeof(char*));
        # 1312 "./neo-c.h"
        __result151__ = __result_obj__ = result_344;
        return __result151__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1333 "./neo-c.h"
        __result152__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result152__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional381;
char* result_346;
char* __result153__;
_Bool _if_conditional382;
char* __result154__;
char* result_347;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_346, 0, sizeof(char*));
memset(&result_347, 0, sizeof(char*));
        # 1321 "./neo-c.h"
        # 1316 "./neo-c.h"
        if(_if_conditional381=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional381) {
            # 1317 "./neo-c.h"
            # 1318 "./neo-c.h"
            memset(&result_346,0,sizeof(char*));
            # 1319 "./neo-c.h"
            __result153__ = __result_obj__ = result_346;
            return __result153__;
        }
        # 1321 "./neo-c.h"
        self->key_list->it=self->key_list->it->next;
        # 1327 "./neo-c.h"
        # 1323 "./neo-c.h"
        if(self->key_list->it) {
            # 1324 "./neo-c.h"
            __result154__ = __result_obj__ = self->key_list->it->item;
            return __result154__;
        }
        # 1327 "./neo-c.h"
        # 1328 "./neo-c.h"
        memset(&result_347,0,sizeof(char*));
        # 1329 "./neo-c.h"
        __result155__ = __result_obj__ = result_347;
        return __result155__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_353;
_Bool _if_conditional387;
_Bool _if_conditional388;
int i_354;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_353, 0, sizeof(int));
memset(&i_354, 0, sizeof(int));
        # 1137 "./neo-c.h"
        for(        i_353=0;        i_353<self->size;        i_353++        ){
            # 1136 "./neo-c.h"
            # 1131 "./neo-c.h"
            if(_if_conditional387=self->item_existance[i_353],            _if_conditional387) {
                # 1135 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional388=1,                _if_conditional388) {
                    # 1133 "./neo-c.h"
                    come_call_finalizer2(sVar_finalize,self->items[i_353], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1137 "./neo-c.h"
        come_free((char*)self->items);
        # 1146 "./neo-c.h"
        for(        i_354=0;        i_354<self->size;        i_354++        ){
            # 1145 "./neo-c.h"
            # 1140 "./neo-c.h"
            if(_if_conditional389=self->item_existance[i_354],            _if_conditional389) {
                # 1144 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional390=1,                _if_conditional390) {
                    # 1142 "./neo-c.h"
                    self->keys[i_354] = come_decrement_ref_count2(self->keys[i_354], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1146 "./neo-c.h"
        come_free((char*)self->keys);
        # 1148 "./neo-c.h"
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1150 "./neo-c.h"
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_355;
_Bool _while_condtional28;
struct list_item$1charp* prev_it_356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_355, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_356, 0, sizeof(struct list_item$1charp*));
            # 123 "./neo-c.h"
            it_355=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional28=it_355!=((void*)0),            _while_condtional28) {
                # 125 "./neo-c.h"
                prev_it_356=it_355;
                # 126 "./neo-c.h"
                it_355=it_355->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional391;
struct sVarTable* it_357;
_Bool _if_conditional392;
_Bool _while_condtional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_357, 0, sizeof(struct sVarTable*));
    # 1255 "04heap.c"
    # 1252 "04heap.c"
    if(gComeGC) {
        # 1253 "04heap.c"
        return;
    }
    # 1255 "04heap.c"
    it_357=info->lv_table;
    # 1268 "04heap.c"
    # 1257 "04heap.c"
    if(_if_conditional392=it_357==info->come_fun->mBlock->mVarTable,    _if_conditional392) {
        # 1258 "04heap.c"
        free_objects(it_357,ret_value,info);
    }
    else {
        # 1266 "04heap.c"
        while(_while_condtional29=it_357!=info->come_fun->mBlock->mVarTable,        _while_condtional29) {
            # 1262 "04heap.c"
            free_objects(it_357,ret_value,info);
            # 1264 "04heap.c"
            it_357=it_357->mParent;
        }
        # 1266 "04heap.c"
        free_objects(it_357,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional393;
struct sVar* ret_value_358;
struct sVarTable* current_loop_vtable_359;
_Bool _if_conditional394;
struct sVarTable* it_360;
_Bool _while_condtional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_358, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_359, 0, sizeof(struct sVarTable*));
memset(&it_360, 0, sizeof(struct sVarTable*));
    # 1275 "04heap.c"
    # 1272 "04heap.c"
    if(gComeGC) {
        # 1273 "04heap.c"
        return;
    }
    # 1275 "04heap.c"
    ret_value_358=((void*)0);
    # 1277 "04heap.c"
    current_loop_vtable_359=info->current_loop_vtable;
    # 1288 "04heap.c"
    # 1279 "04heap.c"
    if(_if_conditional394=current_loop_vtable_359!=((void*)0),    _if_conditional394) {
        # 1280 "04heap.c"
        it_360=info->lv_table;
        # 1286 "04heap.c"
        while(_while_condtional30=it_360!=current_loop_vtable_359,        _while_condtional30) {
            # 1282 "04heap.c"
            free_objects(it_360,ret_value_358,info);
            # 1284 "04heap.c"
            it_360=it_360->mParent;
        }
        # 1286 "04heap.c"
        free_objects(it_360,ret_value_358,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
char* __result156__;
_Bool _if_conditional397;
static int n_361=0;
void* right_value270;
char* var_name_362;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
char* __result157__;
void* right_value279;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&var_name_362, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 1306 "04heap.c"
    # 1292 "04heap.c"
    if(_if_conditional395=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional395) {
        # 1296 "04heap.c"
        # 1293 "04heap.c"
        if(_if_conditional396=gComeDebug||type->mRecord,        _if_conditional396) {
            # 1294 "04heap.c"
            __result156__ = __result_obj__ = ((char*)(right_value269=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value265=string_to_string(info->sname))),((char*)(right_value266=int_to_string(info->sline))),((char*)(right_value267=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value268=charp_to_string(c_value))))));
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result156__;
        }
    }
    else {
        # 1306 "04heap.c"
        # 1297 "04heap.c"
        if(_if_conditional397=gComeDebug||type->mRecord,        _if_conditional397) {
            # 1298 "04heap.c"
            # 1299 "04heap.c"
            ++n_361;
            # 1301 "04heap.c"
            var_name_362=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("__exception_result_var_b%d",n_361))));
            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1302 "04heap.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value271=make_define_var(type,var_name_362,(_Bool)0,info))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1303 "04heap.c"
            __result157__ = __result_obj__ = ((char*)(right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value272=string_to_string(info->sname))),((char*)(right_value273=int_to_string(info->sline))),((char*)(right_value274=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value275=string_to_string(var_name_362))),((char*)(right_value276=charp_to_string(c_value))),((char*)(right_value277=string_to_string(var_name_362))))));
            var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result157__;
            var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 1306 "04heap.c"
    __result158__ = __result_obj__ = ((char*)(right_value279=__builtin_string(c_value)));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

