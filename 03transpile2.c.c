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
    char* mDeclareSName;
    _Bool mNobodyStruct;
    struct sClass* mParent;
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
    _Bool in_class;
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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

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
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
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

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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










void come_init_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* buf_47;
char* class_name_48;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value81;
char* __result52__;
void* right_value82;
struct CVALUE* come_value_49;
void* right_value83;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value84;
char* result_type_str_56;
int j_57;
struct list$1sTypeph* o2_saved_58;
struct sType* it_61;
void* right_value85;
char* param_type_str_64;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value86;
char* __result62__;
_Bool _if_conditional69;
int i_65;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value87;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
memset(&class_name_48, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type_str_56, 0, sizeof(char*));
memset(&j_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_61, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&param_type_str_64, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&i_65, 0, sizeof(int));
right_value87 = (void*)0;
    # 15 "03transpile2.c"
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 17 "03transpile2.c"
    class_name_48=type->mClass->mName;
    # 31 "03transpile2.c"
    # 19 "03transpile2.c"
    if(type->mAlignas) {
        # 25 "03transpile2.c"
        # 20 "03transpile2.c"
        if(_if_conditional20=!node_compile(type->mAlignas,info),        _if_conditional20) {
            # 21 "03transpile2.c"
            printf("_Alignas error\n");
            # 22 "03transpile2.c"
            __result52__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
            come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result52__;
        }
        # 25 "03transpile2.c"
        come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 26 "03transpile2.c"
        dec_stack_ptr(1,info);
        # 28 "03transpile2.c"
        buffer_append_str(buf_47,((char*)(right_value83=xsprintf("_Alignas(%s) ",come_value_49->c_value))));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 35 "03transpile2.c"
    # 31 "03transpile2.c"
    if(_if_conditional40=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional40) {
        # 32 "03transpile2.c"
        buffer_append_str(buf_47,"static ");
    }
    # 39 "03transpile2.c"
    # 35 "03transpile2.c"
    if(type->mConstant) {
        # 36 "03transpile2.c"
        buffer_append_str(buf_47,"const ");
    }
    # 44 "03transpile2.c"
    # 39 "03transpile2.c"
    if(type->mUnsigned) {
        # 40 "03transpile2.c"
        buffer_append_str(buf_47,"unsigned ");
    }
    # 48 "03transpile2.c"
    # 44 "03transpile2.c"
    if(type->mShort) {
        # 45 "03transpile2.c"
        buffer_append_str(buf_47,"short ");
    }
    # 128 "03transpile2.c"
    # 48 "03transpile2.c"
    if(_if_conditional44=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional44) {
        # 49 "03transpile2.c"
        buffer_append_str(buf_47,"va_list");
    }
    else {
        # 128 "03transpile2.c"
        # 51 "03transpile2.c"
        if(_if_conditional45=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional45) {
            # 52 "03transpile2.c"
            buffer_append_str(buf_47,"__builtin_va_list");
        }
        else {
            # 128 "03transpile2.c"
            # 54 "03transpile2.c"
            if(_if_conditional46=charp_operator_equals(class_name_48,"__builtin_va_list"),            _if_conditional46) {
                # 61 "03transpile2.c"
                # 55 "03transpile2.c"
                if(in_header) {
                    # 56 "03transpile2.c"
                    buffer_append_str(buf_47,class_name_48);
                }
                else {
                    # 59 "03transpile2.c"
                    buffer_append_str(buf_47,"va_list");
                }
            }
            else {
                # 128 "03transpile2.c"
                # 62 "03transpile2.c"
                if(type->mClass->mStruct) {
                    # 63 "03transpile2.c"
                    buffer_append_str(buf_47,"struct ");
                    # 64 "03transpile2.c"
                    buffer_append_str(buf_47,class_name_48);
                }
                else {
                    # 128 "03transpile2.c"
                    # 66 "03transpile2.c"
                    if(type->mClass->mUnion) {
                        # 67 "03transpile2.c"
                        buffer_append_str(buf_47,"union ");
                        # 68 "03transpile2.c"
                        buffer_append_str(buf_47,class_name_48);
                    }
                    else {
                        # 128 "03transpile2.c"
                        # 70 "03transpile2.c"
                        if(type->mClass->mEnum) {
                            # 71 "03transpile2.c"
                            buffer_append_str(buf_47,"enum ");
                            # 72 "03transpile2.c"
                            buffer_append_str(buf_47,class_name_48);
                        }
                        else {
                            # 128 "03transpile2.c"
                            # 74 "03transpile2.c"
                            if(type->mLongLong) {
                                # 81 "03transpile2.c"
                                # 75 "03transpile2.c"
                                if(_if_conditional52=charp_operator_equals(class_name_48,"int"),                                _if_conditional52) {
                                    # 76 "03transpile2.c"
                                    buffer_append_str(buf_47,"long long int");
                                }
                                else {
                                    # 81 "03transpile2.c"
                                    # 78 "03transpile2.c"
                                    if(_if_conditional53=charp_operator_equals(class_name_48,"long"),                                    _if_conditional53) {
                                        # 79 "03transpile2.c"
                                        buffer_append_str(buf_47,"long long");
                                    }
                                }
                            }
                            else {
                                # 128 "03transpile2.c"
                                # 82 "03transpile2.c"
                                if(type->mLong) {
                                    # 92 "03transpile2.c"
                                    # 83 "03transpile2.c"
                                    if(_if_conditional55=charp_operator_equals(class_name_48,"int"),                                    _if_conditional55) {
                                        # 84 "03transpile2.c"
                                        buffer_append_str(buf_47,"long int");
                                    }
                                    else {
                                        # 92 "03transpile2.c"
                                        # 86 "03transpile2.c"
                                        if(_if_conditional56=charp_operator_equals(class_name_48,"long"),                                        _if_conditional56) {
                                            # 87 "03transpile2.c"
                                            buffer_append_str(buf_47,"long long");
                                        }
                                        else {
                                            # 92 "03transpile2.c"
                                            # 89 "03transpile2.c"
                                            if(_if_conditional57=charp_operator_equals(class_name_48,"double"),                                            _if_conditional57) {
                                                # 90 "03transpile2.c"
                                                buffer_append_str(buf_47,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 128 "03transpile2.c"
                                    # 93 "03transpile2.c"
                                    if(_if_conditional58=charp_operator_equals(class_name_48,"long"),                                    _if_conditional58) {
                                        # 94 "03transpile2.c"
                                        buffer_append_str(buf_47,"long");
                                    }
                                    else {
                                        # 128 "03transpile2.c"
                                        # 96 "03transpile2.c"
                                        if(_if_conditional59=charp_operator_equals(class_name_48,"__uint128_t"),                                        _if_conditional59) {
                                            # 97 "03transpile2.c"
                                            buffer_append_str(buf_47,"__uint128_t");
                                        }
                                        else {
                                            # 128 "03transpile2.c"
                                            # 99 "03transpile2.c"
                                            if(_if_conditional60=charp_operator_equals(class_name_48,"bool"),                                            _if_conditional60) {
                                                # 100 "03transpile2.c"
                                                buffer_append_str(buf_47,"_Bool");
                                            }
                                            else {
                                                # 128 "03transpile2.c"
                                                # 102 "03transpile2.c"
                                                if(_if_conditional61=charp_operator_equals(class_name_48,"lambda"),                                                _if_conditional61) {
                                                    # 103 "03transpile2.c"
                                                    result_type_str_56=(char*)come_increment_ref_count(((char*)(right_value84=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 104 "03transpile2.c"
                                                    buffer_append_str(buf_47,result_type_str_56);
                                                    # 105 "03transpile2.c"
                                                    buffer_append_str(buf_47," (*)(");
                                                    # 107 "03transpile2.c"
                                                    j_57=0;
                                                    # 118 "03transpile2.c"
                                                    for(                                                    o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_61=list$1sTypeph_begin((o2_saved_58));                                                    !list$1sTypeph_end((o2_saved_58));                                                    it_61=list$1sTypeph_next((o2_saved_58))                                                    ){
                                                        # 109 "03transpile2.c"
                                                        param_type_str_64=(char*)come_increment_ref_count(((char*)(right_value85=make_type_name_string(it_61,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 111 "03transpile2.c"
                                                        buffer_append_str(buf_47,param_type_str_64);
                                                        # 116 "03transpile2.c"
                                                        # 113 "03transpile2.c"
                                                        if(_if_conditional67=j_57!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional67) {
                                                            # 114 "03transpile2.c"
                                                            buffer_append_str(buf_47,",");
                                                        }
                                                        # 116 "03transpile2.c"
                                                        j_57++;
                                                        param_type_str_64 = come_decrement_ref_count2(param_type_str_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 118 "03transpile2.c"
                                                    buffer_append_str(buf_47,")");
                                                    result_type_str_56 = come_decrement_ref_count2(result_type_str_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    # 125 "03transpile2.c"
                                                    # 121 "03transpile2.c"
                                                    if(_if_conditional68=class_name_48==((void*)0),                                                    _if_conditional68) {
                                                        # 122 "03transpile2.c"
                                                        err_msg(info,"class name is null");
                                                        # 123 "03transpile2.c"
                                                        __result62__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
                                                        come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result62__;
                                                    }
                                                    # 125 "03transpile2.c"
                                                    buffer_append_str(buf_47,class_name_48);
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
    # 134 "03transpile2.c"
    # 128 "03transpile2.c"
    if(_if_conditional69=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_48,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional69) {
        # 132 "03transpile2.c"
        for(        i_65=0;        i_65<type->mPointerNum;        i_65++        ){
            # 130 "03transpile2.c"
            buffer_append_str(buf_47,"*");
        }
    }
    # 138 "03transpile2.c"
    # 134 "03transpile2.c"
    if(_if_conditional71=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional71) {
        # 135 "03transpile2.c"
        buffer_append_str(buf_47,"*");
    }
    # 142 "03transpile2.c"
    # 138 "03transpile2.c"
    if(type->mRestrict) {
        # 139 "03transpile2.c"
        buffer_append_str(buf_47,"restrict");
    }
    # 142 "03transpile2.c"
    __result65__ = __result_obj__ = ((char*)(right_value87=buffer_to_string(buf_47)));
    come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional21) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional22) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional23) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional25=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional25) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional27) {
                        # 2 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional28) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional29) {
                        # 4 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional30=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional30) {
                        # 5 "sType_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional32=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional32) {
                        # 6 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional33=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional33) {
                        # 7 "sType_finalize"
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional35=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional35) {
                        # 8 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional36=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional36) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional37=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional37) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional38=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional38) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional39=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional39) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_50;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "./neo-c.h"
                            it_50=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional7=it_50!=((void*)0),                            _while_condtional7) {
                                # 125 "./neo-c.h"
                                prev_it_51=it_50;
                                # 126 "./neo-c.h"
                                it_50=it_50->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional24) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional26) {
                                # 0 "tuple1$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                            # 123 "./neo-c.h"
                            it_52=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional8=it_52!=((void*)0),                            _while_condtional8) {
                                # 125 "./neo-c.h"
                                prev_it_53=it_52;
                                # 126 "./neo-c.h"
                                it_52=it_52->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional31) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_54;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                            # 123 "./neo-c.h"
                            it_54=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional9=it_54!=((void*)0),                            _while_condtional9) {
                                # 125 "./neo-c.h"
                                prev_it_55=it_54;
                                # 126 "./neo-c.h"
                                it_54=it_54->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional34) {
                                        # 0 "list_item$1charphp_finalize"
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct sType* result_59;
struct sType* __result53__;
_Bool _if_conditional63;
struct sType* __result54__;
struct sType* result_60;
struct sType* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*));
memset(&result_60, 0, sizeof(struct sType*));
                                                        # 290 "./neo-c.h"
                                                        # 285 "./neo-c.h"
                                                        if(_if_conditional62=self==((void*)0),                                                        _if_conditional62) {
                                                            # 286 "./neo-c.h"
                                                            # 287 "./neo-c.h"
                                                            memset(&result_59,0,sizeof(struct sType*));
                                                            # 288 "./neo-c.h"
                                                            __result53__ = __result_obj__ = result_59;
                                                            return __result53__;
                                                        }
                                                        # 290 "./neo-c.h"
                                                        self->it=self->head;
                                                        # 296 "./neo-c.h"
                                                        # 292 "./neo-c.h"
                                                        if(self->it) {
                                                            # 293 "./neo-c.h"
                                                            __result54__ = __result_obj__ = self->it->item;
                                                            return __result54__;
                                                        }
                                                        # 296 "./neo-c.h"
                                                        # 297 "./neo-c.h"
                                                        memset(&result_60,0,sizeof(struct sType*));
                                                        # 298 "./neo-c.h"
                                                        __result55__ = __result_obj__ = result_60;
                                                        return __result55__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 320 "./neo-c.h"
                                                        __result56__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result56__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct sType* result_62;
struct sType* __result57__;
_Bool _if_conditional65;
struct sType* __result58__;
struct sType* result_63;
struct sType* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sType*));
memset(&result_63, 0, sizeof(struct sType*));
                                                        # 308 "./neo-c.h"
                                                        # 302 "./neo-c.h"
                                                        if(_if_conditional64=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional64) {
                                                            # 303 "./neo-c.h"
                                                            # 304 "./neo-c.h"
                                                            memset(&result_62,0,sizeof(struct sType*));
                                                            # 305 "./neo-c.h"
                                                            __result57__ = __result_obj__ = result_62;
                                                            return __result57__;
                                                        }
                                                        # 308 "./neo-c.h"
                                                        self->it=self->it->next;
                                                        # 314 "./neo-c.h"
                                                        # 310 "./neo-c.h"
                                                        if(self->it) {
                                                            # 311 "./neo-c.h"
                                                            __result58__ = __result_obj__ = self->it->item;
                                                            return __result58__;
                                                        }
                                                        # 314 "./neo-c.h"
                                                        # 315 "./neo-c.h"
                                                        memset(&result_63,0,sizeof(struct sType*));
                                                        # 316 "./neo-c.h"
                                                        __result59__ = __result_obj__ = result_63;
                                                        return __result59__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
int __result60__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 367 "./neo-c.h"
                                                            # 364 "./neo-c.h"
                                                            if(_if_conditional66=self==((void*)0),                                                            _if_conditional66) {
                                                                # 365 "./neo-c.h"
                                                                __result60__ = 0;
                                                                return __result60__;
                                                            }
                                                            # 367 "./neo-c.h"
                                                            __result61__ = self->len;
                                                            return __result61__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional70;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional70=self==((void*)0),        _if_conditional70) {
            # 365 "./neo-c.h"
            __result63__ = 0;
            return __result63__;
        }
        # 367 "./neo-c.h"
        __result64__ = self->len;
        return __result64__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct buffer* buf_66;
char* class_name_67;
_Bool _if_conditional73;
int i_68;
struct sType* gtype_72;
void* right_value90;
_Bool _if_conditional76;
_Bool _if_conditional77;
int i_73;
_Bool _if_conditional78;
int i_74;
_Bool _if_conditional79;
void* right_value91;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&class_name_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
memset(&gtype_72, 0, sizeof(struct sType*));
right_value90 = (void*)0;
memset(&i_73, 0, sizeof(int));
memset(&i_74, 0, sizeof(int));
right_value91 = (void*)0;
    # 147 "03transpile2.c"
    buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value89=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 149 "03transpile2.c"
    class_name_67=type->mClass->mName;
    # 151 "03transpile2.c"
    buffer_append_str(buf_66,class_name_67);
    # 168 "03transpile2.c"
    # 153 "03transpile2.c"
    if(_if_conditional73=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional73) {
        # 154 "03transpile2.c"
        buffer_append_str(buf_66,"<");
        # 165 "03transpile2.c"
        for(        i_68=0;        i_68<list$1sTypeph_length(type->mGenericsTypes);        i_68++        ){
            # 156 "03transpile2.c"
            gtype_72=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_68), "03transpile2.c", 156, 0));
            # 158 "03transpile2.c"
            buffer_append_str(buf_66,((char*)(right_value90=make_come_type_name_string(gtype_72,info))));
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 163 "03transpile2.c"
            # 160 "03transpile2.c"
            if(_if_conditional76=i_68!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional76) {
                # 161 "03transpile2.c"
                buffer_append_str(buf_66,",");
            }
        }
        # 165 "03transpile2.c"
        buffer_append_str(buf_66,">");
    }
    # 174 "03transpile2.c"
    # 168 "03transpile2.c"
    if(_if_conditional77=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_67,"lambda"),    _if_conditional77) {
        # 172 "03transpile2.c"
        for(        i_73=0;        i_73<type->mPointerNum;        i_73++        ){
            # 170 "03transpile2.c"
            buffer_append_str(buf_66,"*");
        }
    }
    # 180 "03transpile2.c"
    # 174 "03transpile2.c"
    if(_if_conditional78=list$1sNodeph_length(type->mArrayNum)>0,    _if_conditional78) {
        # 178 "03transpile2.c"
        for(        i_74=0;        i_74<list$1sNodeph_length(type->mArrayNum);        i_74++        ){
            # 176 "03transpile2.c"
            buffer_append_str(buf_66,"[]");
        }
    }
    # 184 "03transpile2.c"
    # 180 "03transpile2.c"
    if(type->mHeap) {
        # 181 "03transpile2.c"
        buffer_append_str(buf_66,"%");
    }
    # 184 "03transpile2.c"
    __result68__ = __result_obj__ = ((char*)(right_value91=buffer_to_string(buf_66)));
    come_call_finalizer2(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
    come_call_finalizer2(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional74;
struct list_item$1sTypeph* it_69;
int i_70;
_Bool _while_condtional10;
_Bool _if_conditional75;
struct sType* __result66__;
struct sType* default_value_71;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_70, 0, sizeof(int));
memset(&default_value_71, 0, sizeof(struct sType*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional74=position<0,                _if_conditional74) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_69=self->head;
                # 687 "./neo-c.h"
                i_70=0;
                # 694 "./neo-c.h"
                while(_while_condtional10=it_69!=((void*)0),                _while_condtional10) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional75=position==i_70,                    _if_conditional75) {
                        # 690 "./neo-c.h"
                        __result66__ = __result_obj__ = it_69->item;
                        return __result66__;
                    }
                    # 692 "./neo-c.h"
                    it_69=it_69->next;
                    # 693 "./neo-c.h"
                    i_70++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_71,0,sizeof(struct sType*));
                # 698 "./neo-c.h"
                __result67__ = __result_obj__ = default_value_71;
                come_call_finalizer2(sType_finalize,default_value_71, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer2(sType_finalize,default_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value92;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    # 189 "03transpile2.c"
    puts(((char*)(right_value92=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value93;
void* right_value94;
struct buffer* buf_75;
_Bool _if_conditional80;
void* right_value95;
char* __result69__;
_Bool _if_conditional81;
void* right_value96;
int i_76;
struct list$1sTypeph* o2_saved_77;
struct sType* it_78;
void* right_value97;
_Bool _if_conditional82;
void* right_value98;
void* right_value99;
char* __result70__;
void* right_value100;
void* right_value101;
int i_79;
struct list$1sTypeph* o2_saved_80;
struct sType* it_81;
void* right_value102;
_Bool _if_conditional83;
void* right_value103;
char* __result71__;
void* right_value104;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&i_76, 0, sizeof(int));
memset(&o2_saved_77, 0, sizeof(struct list$1sTypeph*));
memset(&it_78, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1sTypeph*));
memset(&it_81, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
    # 194 "03transpile2.c"
    buf_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 194, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 200 "03transpile2.c"
    # 195 "03transpile2.c"
    if(_if_conditional80=type->mResultType==((void*)0),    _if_conditional80) {
        # 196 "03transpile2.c"
        err_msg(info,"invalid lambda type");
        # 197 "03transpile2.c"
        __result69__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result69__;
    }
    # 236 "03transpile2.c"
    # 200 "03transpile2.c"
    if(_if_conditional81=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional81) {
        # 202 "03transpile2.c"
        buffer_append_str(buf_75,((char*)(right_value96=xsprintf("(*%s)(",var_name))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 204 "03transpile2.c"
        i_76=0;
        # 214 "03transpile2.c"
        for(        o2_saved_77=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_78=list$1sTypeph_begin((o2_saved_77));        !list$1sTypeph_end((o2_saved_77));        it_78=list$1sTypeph_next((o2_saved_77))        ){
            # 206 "03transpile2.c"
            buffer_append_str(buf_75,((char*)(right_value97=make_type_name_string(it_78,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 211 "03transpile2.c"
            # 207 "03transpile2.c"
            if(_if_conditional82=i_76!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional82) {
                # 208 "03transpile2.c"
                buffer_append_str(buf_75,",");
            }
            # 211 "03transpile2.c"
            i_76++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 214 "03transpile2.c"
        buffer_append_str(buf_75,")");
        # 216 "03transpile2.c"
        __result70__ = __result_obj__ = ((char*)(right_value99=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value98=buffer_to_string(buf_75))),info)));
        come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result70__;
    }
    else {
        # 219 "03transpile2.c"
        buffer_append_str(buf_75,((char*)(right_value101=xsprintf("%s (*%s)(",((char*)(right_value100=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 221 "03transpile2.c"
        i_79=0;
        # 231 "03transpile2.c"
        for(        o2_saved_80=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_81=list$1sTypeph_begin((o2_saved_80));        !list$1sTypeph_end((o2_saved_80));        it_81=list$1sTypeph_next((o2_saved_80))        ){
            # 223 "03transpile2.c"
            buffer_append_str(buf_75,((char*)(right_value102=make_type_name_string(it_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 228 "03transpile2.c"
            # 224 "03transpile2.c"
            if(_if_conditional83=i_79!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional83) {
                # 225 "03transpile2.c"
                buffer_append_str(buf_75,",");
            }
            # 228 "03transpile2.c"
            i_79++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 231 "03transpile2.c"
        buffer_append_str(buf_75,")");
        # 233 "03transpile2.c"
        __result71__ = __result_obj__ = ((char*)(right_value103=buffer_to_string(buf_75)));
        come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result71__;
    }
    # 236 "03transpile2.c"
    __result72__ = __result_obj__ = ((char*)(right_value104=buffer_to_string(buf_75)));
    come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
    come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value105;
void* right_value106;
struct buffer* buf_82;
_Bool _if_conditional84;
void* right_value107;
char* str_83;
_Bool _if_conditional85;
void* right_value108;
char* str_84;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value109;
char* __result73__;
void* right_value110;
struct CVALUE* come_value_85;
void* right_value111;
char* type_str_86;
void* right_value112;
void* right_value113;
_Bool _if_conditional88;
void* right_value114;
_Bool _if_conditional89;
void* right_value115;
_Bool _if_conditional90;
void* right_value116;
char* type_str_87;
_Bool _if_conditional91;
void* right_value117;
_Bool _if_conditional92;
void* right_value118;
char* type_str_88;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct list$1sNodeph* o2_saved_89;
struct sNode* it_92;
_Bool _if_conditional99;
void* right_value119;
char* __result81__;
void* right_value120;
struct CVALUE* cvalue_95;
void* right_value121;
_Bool _if_conditional100;
void* right_value122;
void* right_value123;
char* type_str_96;
_Bool _if_conditional101;
void* right_value124;
char* __result82__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value125;
void* right_value126;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&buf_82, 0, sizeof(struct buffer*));
right_value107 = (void*)0;
memset(&str_83, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&str_84, 0, sizeof(char*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
memset(&type_str_86, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&type_str_87, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&type_str_88, 0, sizeof(char*));
memset(&o2_saved_89, 0, sizeof(struct list$1sNodeph*));
memset(&it_92, 0, sizeof(struct sNode*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&cvalue_95, 0, sizeof(struct CVALUE*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&type_str_96, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
    # 243 "03transpile2.c"
    buf_82=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 243, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 342 "03transpile2.c"
    # 245 "03transpile2.c"
    if(_if_conditional84=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional84) {
        # 246 "03transpile2.c"
        str_83=(char*)come_increment_ref_count(((char*)(right_value107=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 248 "03transpile2.c"
        buffer_append_str(buf_82,str_83);
        str_83 = come_decrement_ref_count2(str_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 342 "03transpile2.c"
        # 250 "03transpile2.c"
        if(_if_conditional85=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional85) {
            # 251 "03transpile2.c"
            str_84=(char*)come_increment_ref_count(((char*)(right_value108=make_lambda_type_name_string(type,name,info))));
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 253 "03transpile2.c"
            buffer_append_str(buf_82,str_84);
            str_84 = come_decrement_ref_count2(str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 342 "03transpile2.c"
            # 255 "03transpile2.c"
            if(_if_conditional86=type->mSizeNum!=((void*)0),            _if_conditional86) {
                # 261 "03transpile2.c"
                # 256 "03transpile2.c"
                if(_if_conditional87=!node_compile(type->mSizeNum,info),                _if_conditional87) {
                    # 257 "03transpile2.c"
                    err_msg(info,"invalid bit field number");
                    # 258 "03transpile2.c"
                    __result73__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
                    come_call_finalizer2(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result73__;
                }
                # 261 "03transpile2.c"
                come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 262 "03transpile2.c"
                dec_stack_ptr(1,info);
                # 264 "03transpile2.c"
                type_str_86=(char*)come_increment_ref_count(((char*)(right_value111=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 265 "03transpile2.c"
                buffer_append_str(buf_82,((char*)(right_value112=xsprintf("%s ",type_str_86))));
                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 266 "03transpile2.c"
                buffer_append_str(buf_82,((char*)(right_value113=xsprintf("%s:%s",name,come_value_85->c_value))));
                right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 272 "03transpile2.c"
                # 268 "03transpile2.c"
                if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional88) {
                    # 269 "03transpile2.c"
                    buffer_append_str(buf_82,((char*)(right_value114=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 275 "03transpile2.c"
                # 272 "03transpile2.c"
                if(_if_conditional89=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional89) {
                    # 273 "03transpile2.c"
                    buffer_append_str(buf_82,((char*)(right_value115=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_str_86 = come_decrement_ref_count2(type_str_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 342 "03transpile2.c"
                # 276 "03transpile2.c"
                if(type->mOmitArrayNum) {
                    # 277 "03transpile2.c"
                    type_str_87=(char*)come_increment_ref_count(((char*)(right_value116=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 279 "03transpile2.c"
                    buffer_append_str(buf_82,type_str_87);
                    # 281 "03transpile2.c"
                    buffer_append_str(buf_82," ");
                    # 282 "03transpile2.c"
                    buffer_append_str(buf_82,name);
                    # 284 "03transpile2.c"
                    buffer_append_str(buf_82,"[]");
                    # 289 "03transpile2.c"
                    # 286 "03transpile2.c"
                    if(_if_conditional91=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional91) {
                        # 287 "03transpile2.c"
                        buffer_append_str(buf_82,((char*)(right_value117=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_87 = come_decrement_ref_count2(type_str_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 342 "03transpile2.c"
                    # 290 "03transpile2.c"
                    if(_if_conditional92=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional92) {
                        # 291 "03transpile2.c"
                        type_str_88=(char*)come_increment_ref_count(((char*)(right_value118=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 293 "03transpile2.c"
                        buffer_append_str(buf_82,type_str_88);
                        # 295 "03transpile2.c"
                        buffer_append_str(buf_82," ");
                        # 299 "03transpile2.c"
                        # 296 "03transpile2.c"
                        if(_if_conditional93=type->mNoArrayPointerNum>0,                        _if_conditional93) {
                            # 297 "03transpile2.c"
                            buffer_append_str(buf_82,"(*");
                        }
                        # 299 "03transpile2.c"
                        buffer_append_str(buf_82,name);
                        # 304 "03transpile2.c"
                        # 300 "03transpile2.c"
                        if(_if_conditional94=type->mNoArrayPointerNum>0,                        _if_conditional94) {
                            # 301 "03transpile2.c"
                            buffer_append_str(buf_82,")");
                        }
                        # 315 "03transpile2.c"
                        for(                        o2_saved_89=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_92=list$1sNodeph_begin((o2_saved_89));                        !list$1sNodeph_end((o2_saved_89));                        it_92=list$1sNodeph_next((o2_saved_89))                        ){
                            # 309 "03transpile2.c"
                            # 305 "03transpile2.c"
                            if(_if_conditional99=!node_compile(it_92,info),                            _if_conditional99) {
                                # 306 "03transpile2.c"
                                err_msg(info,"invalid array number");
                                # 307 "03transpile2.c"
                                __result81__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_str_88 = come_decrement_ref_count2(type_str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result81__;
                            }
                            # 309 "03transpile2.c"
                            cvalue_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 310 "03transpile2.c"
                            dec_stack_ptr(1,info);
                            # 312 "03transpile2.c"
                            buffer_append_str(buf_82,((char*)(right_value121=xsprintf("[%s]",cvalue_95->c_value))));
                            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(CVALUE_finalize,cvalue_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 318 "03transpile2.c"
                        # 315 "03transpile2.c"
                        if(_if_conditional100=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional100) {
                            # 316 "03transpile2.c"
                            buffer_append_str(buf_82,((char*)(right_value122=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_88 = come_decrement_ref_count2(type_str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 320 "03transpile2.c"
                        type_str_96=(char*)come_increment_ref_count(((char*)(right_value123=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 326 "03transpile2.c"
                        # 322 "03transpile2.c"
                        if(_if_conditional101=string_operator_equals(type_str_96,""),                        _if_conditional101) {
                            # 323 "03transpile2.c"
                            __result82__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
                            type_str_96 = come_decrement_ref_count2(type_str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result82__;
                        }
                        # 326 "03transpile2.c"
                        buffer_append_str(buf_82,type_str_96);
                        # 328 "03transpile2.c"
                        buffer_append_str(buf_82," ");
                        # 332 "03transpile2.c"
                        # 329 "03transpile2.c"
                        if(_if_conditional102=type->mNoArrayPointerNum>0,                        _if_conditional102) {
                            # 330 "03transpile2.c"
                            buffer_append_str(buf_82,"(*");
                        }
                        # 332 "03transpile2.c"
                        buffer_append_str(buf_82,name);
                        # 337 "03transpile2.c"
                        # 333 "03transpile2.c"
                        if(_if_conditional103=type->mNoArrayPointerNum>0,                        _if_conditional103) {
                            # 334 "03transpile2.c"
                            buffer_append_str(buf_82,")");
                        }
                        # 340 "03transpile2.c"
                        # 337 "03transpile2.c"
                        if(_if_conditional104=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional104) {
                            # 338 "03transpile2.c"
                            buffer_append_str(buf_82,((char*)(right_value125=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_96 = come_decrement_ref_count2(type_str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 342 "03transpile2.c"
    __result83__ = __result_obj__ = ((char*)(right_value126=buffer_to_string(buf_82)));
    come_call_finalizer2(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
    come_call_finalizer2(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct sNode* result_90;
struct sNode* __result74__;
_Bool _if_conditional96;
struct sNode* __result75__;
struct sNode* result_91;
struct sNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(struct sNode*));
memset(&result_91, 0, sizeof(struct sNode*));
                            # 290 "./neo-c.h"
                            # 285 "./neo-c.h"
                            if(_if_conditional95=self==((void*)0),                            _if_conditional95) {
                                # 286 "./neo-c.h"
                                # 287 "./neo-c.h"
                                memset(&result_90,0,sizeof(struct sNode*));
                                # 288 "./neo-c.h"
                                __result74__ = __result_obj__ = result_90;
                                return __result74__;
                            }
                            # 290 "./neo-c.h"
                            self->it=self->head;
                            # 296 "./neo-c.h"
                            # 292 "./neo-c.h"
                            if(self->it) {
                                # 293 "./neo-c.h"
                                __result75__ = __result_obj__ = self->it->item;
                                return __result75__;
                            }
                            # 296 "./neo-c.h"
                            # 297 "./neo-c.h"
                            memset(&result_91,0,sizeof(struct sNode*));
                            # 298 "./neo-c.h"
                            __result76__ = __result_obj__ = result_91;
                            return __result76__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 320 "./neo-c.h"
                            __result77__ = self==((void*)0)||self->it==((void*)0);
                            return __result77__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional97;
struct sNode* result_93;
struct sNode* __result78__;
_Bool _if_conditional98;
struct sNode* __result79__;
struct sNode* result_94;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sNode*));
memset(&result_94, 0, sizeof(struct sNode*));
                            # 308 "./neo-c.h"
                            # 302 "./neo-c.h"
                            if(_if_conditional97=self==((void*)0)||self->it==((void*)0),                            _if_conditional97) {
                                # 303 "./neo-c.h"
                                # 304 "./neo-c.h"
                                memset(&result_93,0,sizeof(struct sNode*));
                                # 305 "./neo-c.h"
                                __result78__ = __result_obj__ = result_93;
                                return __result78__;
                            }
                            # 308 "./neo-c.h"
                            self->it=self->it->next;
                            # 314 "./neo-c.h"
                            # 310 "./neo-c.h"
                            if(self->it) {
                                # 311 "./neo-c.h"
                                __result79__ = __result_obj__ = self->it->item;
                                return __result79__;
                            }
                            # 314 "./neo-c.h"
                            # 315 "./neo-c.h"
                            memset(&result_94,0,sizeof(struct sNode*));
                            # 316 "./neo-c.h"
                            __result80__ = __result_obj__ = result_94;
                            return __result80__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value127;
void* right_value128;
struct buffer* output_97;
_Bool _if_conditional105;
void* right_value129;
void* right_value130;
struct buffer* output2_98;
int i_99;
struct list$1sTypeph* o2_saved_100;
struct sType* it_101;
char* name_105;
void* right_value131;
char* str_106;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value132;
void* right_value133;
char* str_107;
void* right_value134;
_Bool _if_conditional110;
void* right_value170;
struct sType* base_result_type_126;
void* right_value171;
void* right_value172;
struct list$1sNodeph* __dec_obj35;
void* right_value173;
char* result_type_str_127;
int i_128;
struct list$1sTypeph* o2_saved_129;
struct sType* it_130;
char* name_131;
void* right_value174;
char* str_132;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct sNode* node_136;
_Bool _if_conditional189;
void* right_value175;
char* __result106__;
void* right_value176;
struct CVALUE* cvalue_137;
void* right_value177;
void* right_value178;
void* right_value179;
char* result_type_str_138;
int i_139;
struct list$1sTypeph* o2_saved_140;
struct sType* it_141;
char* name_142;
void* right_value180;
char* str_143;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&output_97, 0, sizeof(struct buffer*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&output2_98, 0, sizeof(struct buffer*));
memset(&i_99, 0, sizeof(int));
memset(&o2_saved_100, 0, sizeof(struct list$1sTypeph*));
memset(&it_101, 0, sizeof(struct sType*));
memset(&name_105, 0, sizeof(char*));
right_value131 = (void*)0;
memset(&str_106, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&str_107, 0, sizeof(char*));
right_value134 = (void*)0;
right_value170 = (void*)0;
memset(&base_result_type_126, 0, sizeof(struct sType*));
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&result_type_str_127, 0, sizeof(char*));
memset(&i_128, 0, sizeof(int));
memset(&o2_saved_129, 0, sizeof(struct list$1sTypeph*));
memset(&it_130, 0, sizeof(struct sType*));
memset(&name_131, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&str_132, 0, sizeof(char*));
memset(&node_136, 0, sizeof(struct sNode*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&cvalue_137, 0, sizeof(struct CVALUE*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_type_str_138, 0, sizeof(char*));
memset(&i_139, 0, sizeof(int));
memset(&o2_saved_140, 0, sizeof(struct list$1sTypeph*));
memset(&it_141, 0, sizeof(struct sType*));
memset(&name_142, 0, sizeof(char*));
right_value180 = (void*)0;
memset(&str_143, 0, sizeof(char*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    # 347 "03transpile2.c"
    output_97=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value128=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value127=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 347, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 461 "03transpile2.c"
    # 348 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 349 "03transpile2.c"
        output2_98=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 349, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 351 "03transpile2.c"
        buffer_append_str(output2_98,fun->mName);
        # 352 "03transpile2.c"
        buffer_append_str(output2_98,"(");
        # 354 "03transpile2.c"
        i_99=0;
        # 372 "03transpile2.c"
        for(        o2_saved_100=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_101=list$1sTypeph_begin((o2_saved_100));        !list$1sTypeph_end((o2_saved_100));        it_101=list$1sTypeph_next((o2_saved_100))        ){
            # 356 "03transpile2.c"
            name_105=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_99), "03transpile2.c", 356, 1));
            # 358 "03transpile2.c"
            str_106=(char*)come_increment_ref_count(((char*)(right_value131=make_define_var(it_101,name_105,(_Bool)0,info))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 359 "03transpile2.c"
            buffer_append_str(output2_98,str_106);
            # 370 "03transpile2.c"
            # 361 "03transpile2.c"
            if(_if_conditional108=i_99==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional108) {
                # 365 "03transpile2.c"
                # 362 "03transpile2.c"
                if(fun->mVarArgs) {
                    # 363 "03transpile2.c"
                    buffer_append_str(output2_98,", ...");
                }
            }
            else {
                # 367 "03transpile2.c"
                buffer_append_str(output2_98,", ");
            }
            # 370 "03transpile2.c"
            i_99++;
            str_106 = come_decrement_ref_count2(str_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 372 "03transpile2.c"
        buffer_append_str(output2_98,")");
        # 374 "03transpile2.c"
        str_107=(char*)come_increment_ref_count(((char*)(right_value133=make_lambda_type_name_string(fun->mResultType,((char*)(right_value132=buffer_to_string(output2_98))),info))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 376 "03transpile2.c"
        buffer_append_str(output_97,str_107);
        # 380 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value134=buffer_to_string(output_97))));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 381 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_107 = come_decrement_ref_count2(str_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 461 "03transpile2.c"
        # 383 "03transpile2.c"
        if(_if_conditional110=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional110) {
            # 384 "03transpile2.c"
            base_result_type_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 385 "03transpile2.c"
            __dec_obj35=base_result_type_126->mArrayNum;
            base_result_type_126->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value172=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value171=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 385, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 387 "03transpile2.c"
            result_type_str_127=(char*)come_increment_ref_count(((char*)(right_value173=make_type_name_string(base_result_type_126,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 389 "03transpile2.c"
            buffer_append_str(output_97,result_type_str_127);
            # 390 "03transpile2.c"
            buffer_append_str(output_97," (*");
            # 392 "03transpile2.c"
            buffer_append_str(output_97,fun->mName);
            # 393 "03transpile2.c"
            buffer_append_str(output_97,"(");
            # 395 "03transpile2.c"
            i_128=0;
            # 414 "03transpile2.c"
            for(            o2_saved_129=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_130=list$1sTypeph_begin((o2_saved_129));            !list$1sTypeph_end((o2_saved_129));            it_130=list$1sTypeph_next((o2_saved_129))            ){
                # 397 "03transpile2.c"
                name_131=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_128), "03transpile2.c", 397, 2));
                # 399 "03transpile2.c"
                str_132=(char*)come_increment_ref_count(((char*)(right_value174=make_define_var(it_130,name_131,(_Bool)0,info))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 400 "03transpile2.c"
                buffer_append_str(output_97,str_132);
                # 411 "03transpile2.c"
                # 402 "03transpile2.c"
                if(_if_conditional185=i_128==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional185) {
                    # 406 "03transpile2.c"
                    # 403 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 404 "03transpile2.c"
                        buffer_append_str(output_97,", ...");
                    }
                }
                else {
                    # 408 "03transpile2.c"
                    buffer_append_str(output_97,", ");
                }
                # 411 "03transpile2.c"
                i_128++;
                str_132 = come_decrement_ref_count2(str_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 414 "03transpile2.c"
            node_136=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 414, 3));
            # 420 "03transpile2.c"
            # 416 "03transpile2.c"
            if(_if_conditional189=!node_compile(node_136,info),            _if_conditional189) {
                # 417 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 418 "03transpile2.c"
                __result106__ = __result_obj__ = ((char*)(right_value175=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_127 = come_decrement_ref_count2(result_type_str_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result106__;
            }
            # 420 "03transpile2.c"
            cvalue_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 421 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 423 "03transpile2.c"
            buffer_append_str(output_97,((char*)(right_value177=xsprintf("))[%s]",cvalue_137->c_value))));
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 425 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value178=buffer_to_string(output_97))));
            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 426 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_127 = come_decrement_ref_count2(result_type_str_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 429 "03transpile2.c"
            result_type_str_138=(char*)come_increment_ref_count(((char*)(right_value179=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 431 "03transpile2.c"
            buffer_append_str(output_97,result_type_str_138);
            # 432 "03transpile2.c"
            buffer_append_str(output_97," ");
            # 434 "03transpile2.c"
            buffer_append_str(output_97,fun->mName);
            # 435 "03transpile2.c"
            buffer_append_str(output_97,"(");
            # 437 "03transpile2.c"
            i_139=0;
            # 455 "03transpile2.c"
            for(            o2_saved_140=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_141=list$1sTypeph_begin((o2_saved_140));            !list$1sTypeph_end((o2_saved_140));            it_141=list$1sTypeph_next((o2_saved_140))            ){
                # 439 "03transpile2.c"
                name_142=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_139), "03transpile2.c", 439, 4));
                # 441 "03transpile2.c"
                str_143=(char*)come_increment_ref_count(((char*)(right_value180=make_define_var(it_141,name_142,(_Bool)0,info))));
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 442 "03transpile2.c"
                buffer_append_str(output_97,str_143);
                # 452 "03transpile2.c"
                # 444 "03transpile2.c"
                if(_if_conditional190=i_139==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional190) {
                    # 448 "03transpile2.c"
                    # 445 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 446 "03transpile2.c"
                        buffer_append_str(output_97,", ...");
                    }
                }
                else {
                    # 450 "03transpile2.c"
                    buffer_append_str(output_97,", ");
                }
                # 452 "03transpile2.c"
                i_139++;
                str_143 = come_decrement_ref_count2(str_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 455 "03transpile2.c"
            buffer_append_str(output_97,")");
            # 457 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value181=buffer_to_string(output_97))));
            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 458 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_138 = come_decrement_ref_count2(result_type_str_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 461 "03transpile2.c"
    buffer_append_str(output_97,"{\n");
    # 463 "03transpile2.c"
    buffer_append_str(output_97,((char*)(right_value182=buffer_to_string(fun->mSourceHead))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 464 "03transpile2.c"
    buffer_append_str(output_97,((char*)(right_value183=buffer_to_string(fun->mSourceHead2))));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 465 "03transpile2.c"
    buffer_append_str(output_97,((char*)(right_value184=buffer_to_string(fun->mSource))));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 467 "03transpile2.c"
    buffer_append_str(output_97,"}\n");
    # 469 "03transpile2.c"
    __result107__ = __result_obj__ = ((char*)(right_value185=buffer_to_string(output_97)));
    come_call_finalizer2(buffer_finalize,output_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
    come_call_finalizer2(buffer_finalize,output_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional106;
struct list_item$1charph* it_102;
int i_103;
_Bool _while_condtional11;
_Bool _if_conditional107;
char* __result84__;
char* default_value_104;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_102, 0, sizeof(struct list_item$1charph*));
memset(&i_103, 0, sizeof(int));
memset(&default_value_104, 0, sizeof(char*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional106=position<0,                _if_conditional106) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_102=self->head;
                # 687 "./neo-c.h"
                i_103=0;
                # 694 "./neo-c.h"
                while(_while_condtional11=it_102!=((void*)0),                _while_condtional11) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional107=position==i_103,                    _if_conditional107) {
                        # 690 "./neo-c.h"
                        __result84__ = __result_obj__ = it_102->item;
                        return __result84__;
                    }
                    # 692 "./neo-c.h"
                    it_102=it_102->next;
                    # 693 "./neo-c.h"
                    i_103++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_104,0,sizeof(char*));
                # 698 "./neo-c.h"
                __result85__ = __result_obj__ = default_value_104;
                default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result85__;
                default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional111;
struct sType* __result86__;
void* right_value135;
struct sType* result_108;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value142;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional117;
void* right_value145;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional121;
void* right_value146;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional122;
void* right_value147;
char* __dec_obj19;
_Bool _if_conditional123;
void* right_value148;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional124;
void* right_value156;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value157;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional139;
void* right_value164;
struct list$1charph* __dec_obj29;
_Bool _if_conditional143;
void* right_value165;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value166;
struct sNode* __dec_obj31;
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
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value167;
struct sNode* __dec_obj32;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value168;
char* __dec_obj33;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value169;
char* __dec_obj34;
_Bool _if_conditional184;
struct sType* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_108, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional111=self==(void*)0,                _if_conditional111) {
                    # 2 "sType_clone"
                    __result86__ = __result_obj__ = (void*)0;
                    return __result86__;
                }
                # 3 "sType_clone"
                result_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    # 4 "sType_clone"
                    result_108->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional113=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional113) {
                    # 5 "sType_clone"
                    __dec_obj15=result_108->mMultipleTypes;
                    result_108->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value142=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional117=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional117) {
                    # 6 "sType_clone"
                    __dec_obj17=result_108->mNoSolvedGenericsType;
                    result_108->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value145=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional121=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional121) {
                    # 7 "sType_clone"
                    __dec_obj18=result_108->mOriginalLoadVarType;
                    result_108->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value146=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional122=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional122) {
                    # 8 "sType_clone"
                    __dec_obj19=result_108->mGenericsName;
                    result_108->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value147=string_clone(self->mGenericsName))));
                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional123=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional123) {
                    # 9 "sType_clone"
                    __dec_obj20=result_108->mGenericsTypes;
                    result_108->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional124=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional124) {
                    # 10 "sType_clone"
                    __dec_obj24=result_108->mArrayNum;
                    result_108->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value156=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    # 11 "sType_clone"
                    result_108->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional138=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional138) {
                    # 12 "sType_clone"
                    __dec_obj25=result_108->mParamTypes;
                    result_108->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value157=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional139=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional139) {
                    # 13 "sType_clone"
                    __dec_obj29=result_108->mParamNames;
                    result_108->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value164=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional143=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional143) {
                    # 14 "sType_clone"
                    __dec_obj30=result_108->mResultType;
                    result_108->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value165=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    # 15 "sType_clone"
                    result_108->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional145=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional145) {
                    # 16 "sType_clone"
                    __dec_obj31=result_108->mAlignas;
                    result_108->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(self->mAlignas))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    # 17 "sType_clone"
                    result_108->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    # 18 "sType_clone"
                    result_108->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    # 19 "sType_clone"
                    result_108->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    # 20 "sType_clone"
                    result_108->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional150=self!=((void*)0),                _if_conditional150) {
                    # 21 "sType_clone"
                    result_108->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    # 22 "sType_clone"
                    result_108->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    # 23 "sType_clone"
                    result_108->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional153=self!=((void*)0),                _if_conditional153) {
                    # 24 "sType_clone"
                    result_108->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    # 25 "sType_clone"
                    result_108->mRecord=self->mRecord;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    # 26 "sType_clone"
                    result_108->mExtern=self->mExtern;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    # 27 "sType_clone"
                    result_108->mRestrict=self->mRestrict;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    # 28 "sType_clone"
                    result_108->mImmutable=self->mImmutable;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    # 29 "sType_clone"
                    result_108->mHeap=self->mHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    # 30 "sType_clone"
                    result_108->mDummyHeap=self->mDummyHeap;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    # 31 "sType_clone"
                    result_108->mDelegate=self->mDelegate;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    # 32 "sType_clone"
                    result_108->mShare=self->mShare;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional162=self!=((void*)0),                _if_conditional162) {
                    # 33 "sType_clone"
                    result_108->mClone=self->mClone;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional163=self!=((void*)0),                _if_conditional163) {
                    # 34 "sType_clone"
                    result_108->mNoHeap=self->mNoHeap;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional164=self!=((void*)0),                _if_conditional164) {
                    # 35 "sType_clone"
                    result_108->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional165=self!=((void*)0),                _if_conditional165) {
                    # 36 "sType_clone"
                    result_108->mRefference=self->mRefference;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional166=self!=((void*)0),                _if_conditional166) {
                    # 37 "sType_clone"
                    result_108->mException=self->mException;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional167=self!=((void*)0),                _if_conditional167) {
                    # 38 "sType_clone"
                    result_108->mPointerNum=self->mPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional168=self!=((void*)0),                _if_conditional168) {
                    # 39 "sType_clone"
                    result_108->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional169=self!=((void*)0),                _if_conditional169) {
                    # 40 "sType_clone"
                    result_108->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional170=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional170) {
                    # 41 "sType_clone"
                    __dec_obj32=result_108->mSizeNum;
                    result_108->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(self->mSizeNum))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional171=self!=((void*)0),                _if_conditional171) {
                    # 42 "sType_clone"
                    result_108->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional172=self!=((void*)0),                _if_conditional172) {
                    # 43 "sType_clone"
                    result_108->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional173=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional173) {
                    # 44 "sType_clone"
                    __dec_obj33=result_108->mOriginalTypeName;
                    result_108->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(self->mOriginalTypeName))));
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional174=self!=((void*)0),                _if_conditional174) {
                    # 45 "sType_clone"
                    result_108->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional175=self!=((void*)0),                _if_conditional175) {
                    # 46 "sType_clone"
                    result_108->mFunctionParam=self->mFunctionParam;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional176=self!=((void*)0),                _if_conditional176) {
                    # 47 "sType_clone"
                    result_108->mAllocaValue=self->mAllocaValue;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional177=self!=((void*)0),                _if_conditional177) {
                    # 48 "sType_clone"
                    result_108->mGenericsStruct=self->mGenericsStruct;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional178=self!=((void*)0),                _if_conditional178) {
                    # 49 "sType_clone"
                    result_108->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional179=self!=((void*)0),                _if_conditional179) {
                    # 50 "sType_clone"
                    result_108->mComeMemCore=self->mComeMemCore;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional180=self!=((void*)0),                _if_conditional180) {
                    # 51 "sType_clone"
                    result_108->mInline=self->mInline;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional181=self!=((void*)0),                _if_conditional181) {
                    # 52 "sType_clone"
                    result_108->mNullValue=self->mNullValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional182=self!=((void*)0),                _if_conditional182) {
                    # 53 "sType_clone"
                    result_108->mGuardValue=self->mGuardValue;
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional183=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional183) {
                    # 54 "sType_clone"
                    __dec_obj34=result_108->mAsmName;
                    result_108->mAsmName=(char*)come_increment_ref_count(((char*)(right_value169=string_clone(self->mAsmName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 56 "sType_clone"
                # 55 "sType_clone"
                if(_if_conditional184=self!=((void*)0),                _if_conditional184) {
                    # 55 "sType_clone"
                    result_108->mArrayPointerType=self->mArrayPointerType;
                }
                # 56 "sType_clone"
                __result103__ = __result_obj__ = result_108;
                come_call_finalizer2(sType_finalize,result_108, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result103__;
                come_call_finalizer2(sType_finalize,result_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional114;
struct list$1sTypeph* __result87__;
void* right_value136;
void* right_value137;
struct list$1sTypeph* result_109;
struct list_item$1sTypeph* it_110;
_Bool _while_condtional12;
void* right_value141;
struct list$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&result_109, 0, sizeof(struct list$1sTypeph*));
memset(&it_110, 0, sizeof(struct list_item$1sTypeph*));
right_value141 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional114=self==((void*)0),                        _if_conditional114) {
                            # 140 "./neo-c.h"
                            __result87__ = __result_obj__ = ((void*)0);
                            return __result87__;
                        }
                        # 142 "./neo-c.h"
                        result_109=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value137=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value136=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_110=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional12=it_110!=((void*)0),                        _while_condtional12) {
                            # 146 "./neo-c.h"
                            list$1sTypeph_add(result_109,(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(it_110->item)))));
                            come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_110=it_110->next;
                        }
                        # 151 "./neo-c.h"
                        __result90__ = __result_obj__ = result_109;
                        come_call_finalizer2(list$1sTypephp_finalize,result_109, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result88__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result88__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional115;
void* right_value138;
struct list_item$1sTypeph* litem_111;
struct sType* __dec_obj12;
_Bool _if_conditional116;
void* right_value139;
struct list_item$1sTypeph* litem_112;
struct sType* __dec_obj13;
void* right_value140;
struct list_item$1sTypeph* litem_113;
struct sType* __dec_obj14;
struct list$1sTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1sTypeph*));
right_value139 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sTypeph*));
right_value140 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional115=self->len==0,                                _if_conditional115) {
                                    # 156 "./neo-c.h"
                                    litem_111=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_111->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_111->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj12=litem_111->item;
                                    litem_111->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_111;
                                    # 163 "./neo-c.h"
                                    self->head=litem_111;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional116=self->len==1,                                    _if_conditional116) {
                                        # 166 "./neo-c.h"
                                        litem_112=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_112->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_112->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj13=litem_112->item;
                                        litem_112->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_112;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_112;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_113=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value140=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_113->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_113->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj14=litem_113->item;
                                        litem_113->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_113;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_113;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result89__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result89__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional118;
struct tuple1$1sTypeph* __result91__;
void* right_value143;
struct tuple1$1sTypeph* result_114;
_Bool _if_conditional120;
void* right_value144;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&result_114, 0, sizeof(struct tuple1$1sTypeph*));
right_value144 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional118=self==(void*)0,                        _if_conditional118) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result91__ = __result_obj__ = (void*)0;
                            return __result91__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_114=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value143=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional120=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional120) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj16=result_114->v1;
                            result_114->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result92__ = __result_obj__ = result_114;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result92__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional119=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional119) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional125;
struct list$1sNodeph* __result93__;
void* right_value149;
void* right_value150;
struct list$1sNodeph* result_115;
struct list_item$1sNodeph* it_116;
_Bool _while_condtional13;
void* right_value155;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_115, 0, sizeof(struct list$1sNodeph*));
memset(&it_116, 0, sizeof(struct list_item$1sNodeph*));
right_value155 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional125=self==((void*)0),                        _if_conditional125) {
                            # 140 "./neo-c.h"
                            __result93__ = __result_obj__ = ((void*)0);
                            return __result93__;
                        }
                        # 142 "./neo-c.h"
                        result_115=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value150=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value149=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_116=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional13=it_116!=((void*)0),                        _while_condtional13) {
                            # 146 "./neo-c.h"
                            list$1sNodeph_add(result_115,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(it_116->item)))));
                            if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./neo-c.h"
                            it_116=it_116->next;
                        }
                        # 151 "./neo-c.h"
                        __result98__ = __result_obj__ = result_115;
                        come_call_finalizer2(list$1sNodephp_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result94__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value151;
struct list_item$1sNodeph* litem_117;
struct sNode* __dec_obj21;
_Bool _if_conditional127;
void* right_value152;
struct list_item$1sNodeph* litem_118;
struct sNode* __dec_obj22;
void* right_value153;
struct list_item$1sNodeph* litem_119;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1sNodeph*));
right_value152 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1sNodeph*));
right_value153 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional126=self->len==0,                                _if_conditional126) {
                                    # 156 "./neo-c.h"
                                    litem_117=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_117->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_117->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj21=litem_117->item;
                                    litem_117->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./neo-c.h"
                                    self->tail=litem_117;
                                    # 163 "./neo-c.h"
                                    self->head=litem_117;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional127=self->len==1,                                    _if_conditional127) {
                                        # 166 "./neo-c.h"
                                        litem_118=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_118->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_118->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj22=litem_118->item;
                                        litem_118->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./neo-c.h"
                                        self->tail=litem_118;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_118;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_119=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_119->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_119->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj23=litem_119->item;
                                        litem_119->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_119;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_119;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result95__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result95__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional128;
struct sNode* __result96__;
void* right_value154;
struct sNode* result_120;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&result_120, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional128=self==(void*)0,                                _if_conditional128) {
                                    # 2 "sNode_clone"
                                    __result96__ = __result_obj__ = (void*)0;
                                    return __result96__;
                                }
                                # 3 "sNode_clone"
                                result_120=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional129=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional129) {
                                    # 4 "sNode_clone"
                                    result_120->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional130=self!=((void*)0),                                _if_conditional130) {
                                    # 5 "sNode_clone"
                                    result_120->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional131=self!=((void*)0),                                _if_conditional131) {
                                    # 6 "sNode_clone"
                                    result_120->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional132=self!=((void*)0),                                _if_conditional132) {
                                    # 7 "sNode_clone"
                                    result_120->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional133=self!=((void*)0),                                _if_conditional133) {
                                    # 8 "sNode_clone"
                                    result_120->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional134=self!=((void*)0),                                _if_conditional134) {
                                    # 9 "sNode_clone"
                                    result_120->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional135=self!=((void*)0),                                _if_conditional135) {
                                    # 10 "sNode_clone"
                                    result_120->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional136=self!=((void*)0),                                _if_conditional136) {
                                    # 11 "sNode_clone"
                                    result_120->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result97__ = __result_obj__ = result_120;
                                if(result_120) { result_120 = come_decrement_ref_count2(result_120, ((struct sNode*)result_120)->finalize, ((struct sNode*)result_120)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result97__;
                                if(result_120) { result_120 = come_decrement_ref_count2(result_120, ((struct sNode*)result_120)->finalize, ((struct sNode*)result_120)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional140;
struct list$1charph* __result99__;
void* right_value158;
void* right_value159;
struct list$1charph* result_121;
struct list_item$1charph* it_122;
_Bool _while_condtional14;
void* right_value163;
struct list$1charph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&result_121, 0, sizeof(struct list$1charph*));
memset(&it_122, 0, sizeof(struct list_item$1charph*));
right_value163 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional140=self==((void*)0),                        _if_conditional140) {
                            # 140 "./neo-c.h"
                            __result99__ = __result_obj__ = ((void*)0);
                            return __result99__;
                        }
                        # 142 "./neo-c.h"
                        result_121=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value159=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value158=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_122=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional14=it_122!=((void*)0),                        _while_condtional14) {
                            # 146 "./neo-c.h"
                            list$1charph_add(result_121,(char*)come_increment_ref_count(((char*)(right_value163=string_clone(it_122->item)))));
                            right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_122=it_122->next;
                        }
                        # 151 "./neo-c.h"
                        __result102__ = __result_obj__ = result_121;
                        come_call_finalizer2(list$1charphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer2(list$1charphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result100__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result100__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional141;
void* right_value160;
struct list_item$1charph* litem_123;
char* __dec_obj26;
_Bool _if_conditional142;
void* right_value161;
struct list_item$1charph* litem_124;
char* __dec_obj27;
void* right_value162;
struct list_item$1charph* litem_125;
char* __dec_obj28;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1charph*));
right_value161 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1charph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional141=self->len==0,                                _if_conditional141) {
                                    # 156 "./neo-c.h"
                                    litem_123=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value160=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_123->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_123->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj26=litem_123->item;
                                    litem_123->item=(char*)come_increment_ref_count(item);
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_123;
                                    # 163 "./neo-c.h"
                                    self->head=litem_123;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional142=self->len==1,                                    _if_conditional142) {
                                        # 166 "./neo-c.h"
                                        litem_124=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_124->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_124->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj27=litem_124->item;
                                        litem_124->item=(char*)come_increment_ref_count(item);
                                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_124;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_124;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_125=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_125->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_125->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj28=litem_125->item;
                                        litem_125->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_125;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_125;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result101__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result101__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional187;
struct list_item$1sNodeph* it_133;
int i_134;
_Bool _while_condtional15;
_Bool _if_conditional188;
struct sNode* __result104__;
struct sNode* default_value_135;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_133, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_134, 0, sizeof(int));
memset(&default_value_135, 0, sizeof(struct sNode*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional187=position<0,                _if_conditional187) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_133=self->head;
                # 687 "./neo-c.h"
                i_134=0;
                # 694 "./neo-c.h"
                while(_while_condtional15=it_133!=((void*)0),                _while_condtional15) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional188=position==i_134,                    _if_conditional188) {
                        # 690 "./neo-c.h"
                        __result104__ = __result_obj__ = it_133->item;
                        return __result104__;
                    }
                    # 692 "./neo-c.h"
                    it_133=it_133->next;
                    # 693 "./neo-c.h"
                    i_134++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_135,0,sizeof(struct sNode*));
                # 698 "./neo-c.h"
                __result105__ = __result_obj__ = default_value_135;
                if(default_value_135) { default_value_135 = come_decrement_ref_count2(default_value_135, ((struct sNode*)default_value_135)->finalize, ((struct sNode*)default_value_135)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result105__;
                if(default_value_135) { default_value_135 = come_decrement_ref_count2(default_value_135, ((struct sNode*)default_value_135)->finalize, ((struct sNode*)default_value_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value186;
void* right_value187;
struct buffer* output_144;
_Bool _if_conditional192;
void* right_value188;
void* right_value189;
struct buffer* output2_145;
int i_146;
struct list$1sTypeph* o2_saved_147;
struct sType* it_148;
char* name_149;
void* right_value190;
char* str_150;
_Bool _if_conditional193;
void* right_value191;
void* right_value192;
char* str_151;
_Bool _if_conditional194;
void* right_value193;
struct sType* base_result_type_152;
void* right_value194;
void* right_value195;
struct list$1sNodeph* __dec_obj36;
void* right_value196;
char* result_type_str_153;
int i_154;
struct list$1sTypeph* o2_saved_155;
struct sType* it_156;
char* name_157;
void* right_value197;
char* str_158;
_Bool _if_conditional195;
_Bool _if_conditional196;
struct sNode* node_159;
_Bool _if_conditional197;
void* right_value198;
char* __result108__;
void* right_value199;
struct CVALUE* cvalue_160;
void* right_value200;
void* right_value201;
char* result_type_str_161;
int i_162;
struct list$1sTypeph* o2_saved_163;
struct sType* it_164;
char* name_165;
void* right_value202;
char* str_166;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value203;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&output_144, 0, sizeof(struct buffer*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&output2_145, 0, sizeof(struct buffer*));
memset(&i_146, 0, sizeof(int));
memset(&o2_saved_147, 0, sizeof(struct list$1sTypeph*));
memset(&it_148, 0, sizeof(struct sType*));
memset(&name_149, 0, sizeof(char*));
right_value190 = (void*)0;
memset(&str_150, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&str_151, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&base_result_type_152, 0, sizeof(struct sType*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&result_type_str_153, 0, sizeof(char*));
memset(&i_154, 0, sizeof(int));
memset(&o2_saved_155, 0, sizeof(struct list$1sTypeph*));
memset(&it_156, 0, sizeof(struct sType*));
memset(&name_157, 0, sizeof(char*));
right_value197 = (void*)0;
memset(&str_158, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&cvalue_160, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&result_type_str_161, 0, sizeof(char*));
memset(&i_162, 0, sizeof(int));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_164, 0, sizeof(struct sType*));
memset(&name_165, 0, sizeof(char*));
right_value202 = (void*)0;
memset(&str_166, 0, sizeof(char*));
right_value203 = (void*)0;
    # 474 "03transpile2.c"
    output_144=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value187=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 474, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 571 "03transpile2.c"
    # 476 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 477 "03transpile2.c"
        output2_145=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value188=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 477, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 479 "03transpile2.c"
        buffer_append_str(output2_145,fun->mName);
        # 480 "03transpile2.c"
        buffer_append_str(output2_145,"(");
        # 482 "03transpile2.c"
        i_146=0;
        # 494 "03transpile2.c"
        for(        o2_saved_147=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_148=list$1sTypeph_begin((o2_saved_147));        !list$1sTypeph_end((o2_saved_147));        it_148=list$1sTypeph_next((o2_saved_147))        ){
            # 484 "03transpile2.c"
            name_149=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_146), "03transpile2.c", 484, 5));
            # 486 "03transpile2.c"
            str_150=(char*)come_increment_ref_count(((char*)(right_value190=make_define_var(it_148,name_149,(_Bool)0,info))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 487 "03transpile2.c"
            buffer_append_str(output2_145,str_150);
            # 492 "03transpile2.c"
            # 489 "03transpile2.c"
            if(_if_conditional193=i_146!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional193) {
                # 490 "03transpile2.c"
                buffer_append_str(output2_145,", ");
            }
            # 492 "03transpile2.c"
            i_146++;
            str_150 = come_decrement_ref_count2(str_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 494 "03transpile2.c"
        buffer_append_str(output2_145,")");
        # 496 "03transpile2.c"
        str_151=(char*)come_increment_ref_count(((char*)(right_value192=make_lambda_type_name_string(fun->mResultType,((char*)(right_value191=buffer_to_string(output2_145))),info))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 498 "03transpile2.c"
        buffer_append_str(output_144,str_151);
        # 499 "03transpile2.c"
        buffer_append_str(output_144,";\n");
        come_call_finalizer2(buffer_finalize,output2_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_151 = come_decrement_ref_count2(str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 571 "03transpile2.c"
        # 501 "03transpile2.c"
        if(_if_conditional194=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional194) {
            # 502 "03transpile2.c"
            base_result_type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 503 "03transpile2.c"
            __dec_obj36=base_result_type_152->mArrayNum;
            base_result_type_152->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value195=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value194=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 503, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 505 "03transpile2.c"
            result_type_str_153=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(base_result_type_152,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 507 "03transpile2.c"
            buffer_append_str(output_144,result_type_str_153);
            # 508 "03transpile2.c"
            buffer_append_str(output_144," (*");
            # 510 "03transpile2.c"
            buffer_append_str(output_144,fun->mName);
            # 511 "03transpile2.c"
            buffer_append_str(output_144,"(");
            # 513 "03transpile2.c"
            i_154=0;
            # 531 "03transpile2.c"
            for(            o2_saved_155=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_156=list$1sTypeph_begin((o2_saved_155));            !list$1sTypeph_end((o2_saved_155));            it_156=list$1sTypeph_next((o2_saved_155))            ){
                # 515 "03transpile2.c"
                name_157=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_154), "03transpile2.c", 515, 6));
                # 517 "03transpile2.c"
                str_158=(char*)come_increment_ref_count(((char*)(right_value197=make_define_var(it_156,name_157,(_Bool)0,info))));
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 518 "03transpile2.c"
                buffer_append_str(output_144,str_158);
                # 528 "03transpile2.c"
                # 520 "03transpile2.c"
                if(_if_conditional195=i_154==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional195) {
                    # 524 "03transpile2.c"
                    # 521 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 522 "03transpile2.c"
                        buffer_append_str(output_144,", ...");
                    }
                }
                else {
                    # 526 "03transpile2.c"
                    buffer_append_str(output_144,", ");
                }
                # 528 "03transpile2.c"
                i_154++;
                str_158 = come_decrement_ref_count2(str_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 531 "03transpile2.c"
            node_159=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 531, 7));
            # 536 "03transpile2.c"
            # 532 "03transpile2.c"
            if(_if_conditional197=!node_compile(node_159,info),            _if_conditional197) {
                # 533 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 534 "03transpile2.c"
                __result108__ = __result_obj__ = ((char*)(right_value198=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_153 = come_decrement_ref_count2(result_type_str_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result108__;
            }
            # 536 "03transpile2.c"
            cvalue_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 537 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 539 "03transpile2.c"
            buffer_append_str(output_144,((char*)(right_value200=xsprintf("))[%s];\n",cvalue_160->c_value))));
            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_153 = come_decrement_ref_count2(result_type_str_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 542 "03transpile2.c"
            result_type_str_161=(char*)come_increment_ref_count(((char*)(right_value201=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 544 "03transpile2.c"
            buffer_append_str(output_144,result_type_str_161);
            # 545 "03transpile2.c"
            buffer_append_str(output_144," ");
            # 547 "03transpile2.c"
            buffer_append_str(output_144,fun->mName);
            # 548 "03transpile2.c"
            buffer_append_str(output_144,"(");
            # 550 "03transpile2.c"
            i_162=0;
            # 568 "03transpile2.c"
            for(            o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_164=list$1sTypeph_begin((o2_saved_163));            !list$1sTypeph_end((o2_saved_163));            it_164=list$1sTypeph_next((o2_saved_163))            ){
                # 552 "03transpile2.c"
                name_165=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_162), "03transpile2.c", 552, 8));
                # 554 "03transpile2.c"
                str_166=(char*)come_increment_ref_count(((char*)(right_value202=make_define_var(it_164,name_165,(_Bool)0,info))));
                right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 555 "03transpile2.c"
                buffer_append_str(output_144,str_166);
                # 565 "03transpile2.c"
                # 557 "03transpile2.c"
                if(_if_conditional198=i_162==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional198) {
                    # 561 "03transpile2.c"
                    # 558 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 559 "03transpile2.c"
                        buffer_append_str(output_144,", ...");
                    }
                }
                else {
                    # 563 "03transpile2.c"
                    buffer_append_str(output_144,", ");
                }
                # 565 "03transpile2.c"
                i_162++;
                str_166 = come_decrement_ref_count2(str_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 568 "03transpile2.c"
            buffer_append_str(output_144,");\n");
            result_type_str_161 = come_decrement_ref_count2(result_type_str_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 571 "03transpile2.c"
    __result109__ = __result_obj__ = ((char*)(right_value203=buffer_to_string(output_144)));
    come_call_finalizer2(buffer_finalize,output_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
    come_call_finalizer2(buffer_finalize,output_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value204;
void* right_value205;
struct buffer* output_167;
void* right_value206;
char* result_type_str_168;
int i_169;
struct list$1sTypeph* o2_saved_170;
struct sType* it_171;
char* name_172;
void* right_value207;
char* str_173;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value208;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&output_167, 0, sizeof(struct buffer*));
right_value206 = (void*)0;
memset(&result_type_str_168, 0, sizeof(char*));
memset(&i_169, 0, sizeof(int));
memset(&o2_saved_170, 0, sizeof(struct list$1sTypeph*));
memset(&it_171, 0, sizeof(struct sType*));
memset(&name_172, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&str_173, 0, sizeof(char*));
right_value208 = (void*)0;
    # 576 "03transpile2.c"
    output_167=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value205=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value204=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 576, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 578 "03transpile2.c"
    result_type_str_168=(char*)come_increment_ref_count(((char*)(right_value206=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 580 "03transpile2.c"
    buffer_append_str(output_167,result_type_str_168);
    # 581 "03transpile2.c"
    buffer_append_str(output_167," ");
    # 583 "03transpile2.c"
    buffer_append_str(output_167,name);
    # 584 "03transpile2.c"
    buffer_append_str(output_167,"(");
    # 586 "03transpile2.c"
    i_169=0;
    # 604 "03transpile2.c"
    for(    o2_saved_170=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_171=list$1sTypeph_begin((o2_saved_170));    !list$1sTypeph_end((o2_saved_170));    it_171=list$1sTypeph_next((o2_saved_170))    ){
        # 588 "03transpile2.c"
        name_172=((char*)come_null_check(list$1charphp_operator_load_element(lambda_type->mParamNames,i_169), "03transpile2.c", 588, 9));
        # 590 "03transpile2.c"
        str_173=(char*)come_increment_ref_count(((char*)(right_value207=make_define_var(it_171,name_172,(_Bool)0,info))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 591 "03transpile2.c"
        buffer_append_str(output_167,str_173);
        # 601 "03transpile2.c"
        # 593 "03transpile2.c"
        if(_if_conditional200=i_169==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional200) {
            # 597 "03transpile2.c"
            # 594 "03transpile2.c"
            if(lambda_type->mVarArgs) {
                # 595 "03transpile2.c"
                buffer_append_str(output_167,", ...");
            }
        }
        else {
            # 599 "03transpile2.c"
            buffer_append_str(output_167,", ");
        }
        # 601 "03transpile2.c"
        i_169++;
        str_173 = come_decrement_ref_count2(str_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 604 "03transpile2.c"
    buffer_append_str(output_167,");\n");
    # 606 "03transpile2.c"
    __result110__ = __result_obj__ = ((char*)(right_value208=buffer_to_string(output_167)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_168 = come_decrement_ref_count2(result_type_str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_168 = come_decrement_ref_count2(result_type_str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional202;
char* msg2_174;
va_list args_175;
int len_176;
_Bool _if_conditional203;
int i_177;
void* right_value209;
void* right_value210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_174, 0, sizeof(char*));
memset(&args_175, 0, sizeof(va_list));
memset(&len_176, 0, sizeof(int));
memset(&i_177, 0, sizeof(int));
right_value209 = (void*)0;
right_value210 = (void*)0;
    # 615 "03transpile2.c"
    # 612 "03transpile2.c"
    if(info->no_output_come_code) {
        # 613 "03transpile2.c"
        return;
    }
    # 615 "03transpile2.c"
    # 617 "03transpile2.c"
    # 618 "03transpile2.c"
    __builtin_va_start(args_175,msg);
    # 619 "03transpile2.c"
    len_176=vasprintf(&msg2_174,msg,args_175);
    # 620 "03transpile2.c"
    __builtin_va_end(args_175);
    # 634 "03transpile2.c"
    # 622 "03transpile2.c"
    if(info->come_fun) {
        # 623 "03transpile2.c"
        # 628 "03transpile2.c"
        for(        i_177=0;        i_177<info->block_level;        i_177++        ){
            # 625 "03transpile2.c"
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        # 628 "03transpile2.c"
        buffer_append_str(info->come_fun->mSource,((char*)(right_value209=xsprintf("%s",msg2_174))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 631 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value210=xsprintf("%s",msg2_174))));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 634 "03transpile2.c"
    free(msg2_174);
    come_call_finalizer2(va_list_finalize,(&args_175), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional204;
char* msg2_178;
va_list args_179;
int len_180;
void* right_value211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_178, 0, sizeof(char*));
memset(&args_179, 0, sizeof(va_list));
memset(&len_180, 0, sizeof(int));
right_value211 = (void*)0;
    # 642 "03transpile2.c"
    # 639 "03transpile2.c"
    if(info->no_output_come_code) {
        # 640 "03transpile2.c"
        return;
    }
    # 642 "03transpile2.c"
    # 644 "03transpile2.c"
    # 645 "03transpile2.c"
    __builtin_va_start(args_179,msg);
    # 646 "03transpile2.c"
    len_180=vasprintf(&msg2_178,msg,args_179);
    # 647 "03transpile2.c"
    __builtin_va_end(args_179);
    # 649 "03transpile2.c"
    buffer_append_str(info->module->mSourceHead,((char*)(right_value211=xsprintf("%s",msg2_178))));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 651 "03transpile2.c"
    free(msg2_178);
    come_call_finalizer2(va_list_finalize,(&args_179), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
char* msg2_181;
va_list args_182;
int len_183;
void* right_value212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_181, 0, sizeof(char*));
memset(&args_182, 0, sizeof(va_list));
memset(&len_183, 0, sizeof(int));
right_value212 = (void*)0;
    # 659 "03transpile2.c"
    # 656 "03transpile2.c"
    if(info->no_output_come_code) {
        # 657 "03transpile2.c"
        return;
    }
    # 671 "03transpile2.c"
    # 659 "03transpile2.c"
    if(_if_conditional206=string_operator_equals(info->sname,info->base_sname),    _if_conditional206) {
        # 660 "03transpile2.c"
        # 662 "03transpile2.c"
        # 663 "03transpile2.c"
        __builtin_va_start(args_182,msg);
        # 664 "03transpile2.c"
        len_183=vasprintf(&msg2_181,msg,args_182);
        # 665 "03transpile2.c"
        __builtin_va_end(args_182);
        # 667 "03transpile2.c"
        buffer_append_str(info->module->mHeader,((char*)(right_value212=xsprintf("%s",msg2_181))));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 669 "03transpile2.c"
        free(msg2_181);
        come_call_finalizer2(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value213;
char* name_184;
void* right_value214;
void* right_value215;
struct sType* result_type_185;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
struct sType* __list_values1___186[2];
void* right_value223;
void* right_value224;
struct list$1sTypeph* param_types_191;
void* right_value225;
void* right_value226;
char* __list_values2___192[2];
void* right_value230;
void* right_value231;
struct list$1charph* param_names_197;
void* right_value232;
void* right_value233;
struct list$1charph* param_default_parametors_198;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
struct sFun* main_fun_199;
void* right_value244;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&name_184, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&param_types_191, 0, sizeof(struct list$1sTypeph*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&param_names_197, 0, sizeof(struct list$1charph*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&param_default_parametors_198, 0, sizeof(struct list$1charph*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&main_fun_199, 0, sizeof(struct sFun*));
right_value244 = (void*)0;
    # 675 "03transpile2.c"
    name_184=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("main"))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 676 "03transpile2.c"
    result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value214=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 676, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 677 "03transpile2.c"
    {__list_values1___186[0]=come_increment_ref_count(((struct sType*)(right_value217=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value216=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"int",(_Bool)0,info))));
__list_values1___186[1]=come_increment_ref_count(((struct sType*)(right_value219=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value218=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"char**",(_Bool)0,info))));
}    param_types_191=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value224=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value223=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 677, "struct list$1sTypeph")))),2,__list_values1___186))));
    come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 678 "03transpile2.c"
    {__list_values2___192[0]=come_increment_ref_count(((char*)(right_value225=__builtin_string("argc"))));
__list_values2___192[1]=come_increment_ref_count(((char*)(right_value226=__builtin_string("argv"))));
}    param_names_197=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value230=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 678, "struct list$1charph")))),2,__list_values2___192))));
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 679 "03transpile2.c"
    param_default_parametors_198=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 679, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 685 "03transpile2.c"
    main_fun_199=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value237=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value234=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 680, "sFun")))),(char*)come_increment_ref_count(name_184),(struct sType*)come_increment_ref_count(result_type_185),(struct list$1sTypeph*)come_increment_ref_count(param_types_191),(struct list$1charph*)come_increment_ref_count(param_names_197),(struct list$1charph*)come_increment_ref_count(param_default_parametors_198),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 687 "03transpile2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(name_184)))),(struct sFun*)come_increment_ref_count(main_fun_199));
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 689 "03transpile2.c"
    add_come_code(info,"#include <stdio.h>\n");
    # 691 "03transpile2.c"
    info->come_fun=main_fun_199;
    # 693 "03transpile2.c"
    info->block_level++;
    # 694 "03transpile2.c"
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    # 695 "03transpile2.c"
    add_come_code(info,"return 0;\n");
    # 696 "03transpile2.c"
    info->block_level--;
    # 698 "03transpile2.c"
    __result139__ = 0;
    name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result139__;
    name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_187;
struct list$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_187, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_187=0;        i_187<num_value;        i_187++        ){
            # 117 "./neo-c.h"
            list$1sTypeph_push_back(self,values[i_187]);
        }
        # 120 "./neo-c.h"
        __result112__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result112__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value220;
struct list_item$1sTypeph* litem_188;
struct sType* __dec_obj37;
_Bool _if_conditional208;
void* right_value221;
struct list_item$1sTypeph* litem_189;
struct sType* __dec_obj38;
void* right_value222;
struct list_item$1sTypeph* litem_190;
struct sType* __dec_obj39;
struct list$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1sTypeph*));
right_value221 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1sTypeph*));
right_value222 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional207=self->len==0,                _if_conditional207) {
                    # 226 "./neo-c.h"
                    litem_188=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value220=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_188->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_188->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj37=litem_188->item;
                    litem_188->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_188;
                    # 233 "./neo-c.h"
                    self->head=litem_188;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional208=self->len==1,                    _if_conditional208) {
                        # 236 "./neo-c.h"
                        litem_189=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value221=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_189->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_189->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj38=litem_189->item;
                        litem_189->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_189;
                        # 243 "./neo-c.h"
                        self->head->next=litem_189;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_190=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value222=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_190->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_190->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj39=litem_190->item;
                        litem_190->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_190;
                        # 253 "./neo-c.h"
                        self->tail=litem_190;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result111__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result111__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_193;
struct list$1charph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_193, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_193=0;        i_193<num_value;        i_193++        ){
            # 117 "./neo-c.h"
            list$1charph_push_back(self,values[i_193]);
        }
        # 120 "./neo-c.h"
        __result114__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result114__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value227;
struct list_item$1charph* litem_194;
char* __dec_obj40;
_Bool _if_conditional210;
void* right_value228;
struct list_item$1charph* litem_195;
char* __dec_obj41;
void* right_value229;
struct list_item$1charph* litem_196;
char* __dec_obj42;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1charph*));
right_value228 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1charph*));
right_value229 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1charph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional209=self->len==0,                _if_conditional209) {
                    # 226 "./neo-c.h"
                    litem_194=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value227=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_194->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_194->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj40=litem_194->item;
                    litem_194->item=(char*)come_increment_ref_count(item);
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_194;
                    # 233 "./neo-c.h"
                    self->head=litem_194;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional210=self->len==1,                    _if_conditional210) {
                        # 236 "./neo-c.h"
                        litem_195=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value228=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_195->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_195->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj41=litem_195->item;
                        litem_195->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_195;
                        # 243 "./neo-c.h"
                        self->head->next=litem_195;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_196=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value229=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_196->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_196->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj42=litem_196->item;
                        litem_196->item=(char*)come_increment_ref_count(item);
                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_196;
                        # 253 "./neo-c.h"
                        self->tail=litem_196;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result113__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result113__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional211=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional211) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional212=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional212) {
            # 1 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional213=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional213) {
            # 2 "sFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional214=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional214) {
            # 3 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional215=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional215) {
            # 4 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional216=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional216) {
            # 5 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional217=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional217) {
            # 6 "sFun_finalize"
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional220=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional220) {
            # 7 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional221=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional221) {
            # 8 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional222=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional222) {
            # 9 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional223=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional223) {
            # 10 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional224=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional224) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional225=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional225) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional218=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional218) {
                    # 0 "sBlock_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional219=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional219) {
                    # 1 "sBlock_finalize"
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional226;
unsigned int hash_217;
unsigned int it_218;
_Bool _while_condtional18;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool same_key_exist_235;
char* it2_238;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct map$2charphsFunph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_217, 0, sizeof(unsigned int));
memset(&it_218, 0, sizeof(unsigned int));
memset(&same_key_exist_235, 0, sizeof(_Bool));
memset(&it2_238, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional226=self->len*10>=self->size,        _if_conditional226) {
            # 1391 "./neo-c.h"
            map$2charphsFunph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_217=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_218=hash_217;
        # 1452 "./neo-c.h"
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional238=self->item_existance[it_218],            _if_conditional238) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional239=string_equals(self->keys[it_218],key),                _if_conditional239) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional240=1,                    _if_conditional240) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_218]);
                        # 1403 "./neo-c.h"
                        self->keys[it_218] = come_decrement_ref_count2(self->keys[it_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_218]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_218]);
                        # 1408 "./neo-c.h"
                        self->keys[it_218]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional260=1,                    _if_conditional260) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sFun_finalize,self->items[it_218], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_218]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_218]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_218++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional261=it_218>=self->size,                _if_conditional261) {
                    # 1423 "./neo-c.h"
                    it_218=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional262=it_218==hash_217,                    _if_conditional262) {
                        # 1426 "./neo-c.h"
                        printf("unexpected error in map.insert\n");
                        # 1427 "./neo-c.h"
                        stackframe();
                        # 1428 "./neo-c.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1432 "./neo-c.h"
                self->item_existance[it_218]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional263=1,                _if_conditional263) {
                    # 1434 "./neo-c.h"
                    self->keys[it_218]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_218]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional264=1,                _if_conditional264) {
                    # 1440 "./neo-c.h"
                    self->items[it_218]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_218]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_235=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_238=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_238=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional269=string_equals(it2_238,key),            _if_conditional269) {
                # 1456 "./neo-c.h"
                same_key_exist_235=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional270=!same_key_exist_235,        _if_conditional270) {
            # 1461 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1464 "./neo-c.h"
        __result138__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result138__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_200;
void* right_value238;
char** keys_201;
void* right_value239;
struct sFun** items_202;
void* right_value240;
_Bool* item_existance_203;
int len_204;
char* it_207;
struct sFun* default_value_210;
struct sFun* it2_213;
unsigned int hash_214;
int n_215;
_Bool _while_condtional17;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sFun* default_value_216;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_200, 0, sizeof(int));
right_value238 = (void*)0;
memset(&keys_201, 0, sizeof(char**));
right_value239 = (void*)0;
memset(&items_202, 0, sizeof(struct sFun**));
right_value240 = (void*)0;
memset(&item_existance_203, 0, sizeof(_Bool*));
memset(&len_204, 0, sizeof(int));
memset(&it_207, 0, sizeof(char*));
memset(&default_value_210, 0, sizeof(struct sFun*));
memset(&it2_213, 0, sizeof(struct sFun*));
memset(&hash_214, 0, sizeof(unsigned int));
memset(&n_215, 0, sizeof(int));
memset(&default_value_216, 0, sizeof(struct sFun*));
                # 1337 "./neo-c.h"
                size_200=self->size*10;
                # 1338 "./neo-c.h"
                keys_201=(char**)come_increment_ref_count(((char**)(right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_200)), "./neo-c.h", 1338, "char*%"))));
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_202=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value239=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_200)), "./neo-c.h", 1339, "sFun*%"))));
                come_call_finalizer2(sFun_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_203=(_Bool*)come_increment_ref_count(((_Bool*)(right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_200)), "./neo-c.h", 1340, "bool"))));
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_204=0;
                # 1377 "./neo-c.h"
                for(                it_207=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_207=map$2charphsFunph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_210,0,sizeof(struct sFun*));
                    # 1347 "./neo-c.h"
                    it2_213=map$2charphsFunph_at(self,it_207,default_value_210);
                    # 1348 "./neo-c.h"
                    hash_214=string_get_hash_key(it_207)%size_200;
                    # 1349 "./neo-c.h"
                    n_215=hash_214;
                    # 1375 "./neo-c.h"
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional235=item_existance_203[n_215],                        _if_conditional235) {
                            # 1354 "./neo-c.h"
                            n_215++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional236=n_215>=size_200,                            _if_conditional236) {
                                # 1357 "./neo-c.h"
                                n_215=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional237=n_215==hash_214,                                _if_conditional237) {
                                    # 1360 "./neo-c.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1361 "./neo-c.h"
                                    stackframe();
                                    # 1362 "./neo-c.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1366 "./neo-c.h"
                            item_existance_203[n_215]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_201[n_215]=it_207;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_202[n_215]=map$2charphsFunph_at(self,it_207,default_value_216);
                            # 1371 "./neo-c.h"
                            len_204++;
                            # 1372 "./neo-c.h"
                            break;
                        }
                    }
                }
                # 1377 "./neo-c.h"
                come_free((char*)self->items);
                # 1378 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1379 "./neo-c.h"
                come_free((char*)self->keys);
                # 1381 "./neo-c.h"
                self->keys=keys_201;
                # 1382 "./neo-c.h"
                self->items=items_202;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_203;
                # 1385 "./neo-c.h"
                self->size=size_200;
                # 1386 "./neo-c.h"
                self->len=len_204;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional227;
char* result_205;
char* __result115__;
_Bool _if_conditional228;
char* __result116__;
char* result_206;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(char*));
memset(&result_206, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional227=self==((void*)0),                    _if_conditional227) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_205,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result115__ = __result_obj__ = result_205;
                        return __result115__;
                    }
                    # 1304 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./neo-c.h"
                    # 1306 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1307 "./neo-c.h"
                        __result116__ = __result_obj__ = self->key_list->it->item;
                        return __result116__;
                    }
                    # 1310 "./neo-c.h"
                    # 1311 "./neo-c.h"
                    memset(&result_206,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result117__ = __result_obj__ = result_206;
                    return __result117__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./neo-c.h"
                    __result118__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result118__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional229;
char* result_208;
char* __result119__;
_Bool _if_conditional230;
char* __result120__;
char* result_209;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(char*));
memset(&result_209, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional229=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional229) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_208,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result119__ = __result_obj__ = result_208;
                        return __result119__;
                    }
                    # 1321 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./neo-c.h"
                    # 1323 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1324 "./neo-c.h"
                        __result120__ = __result_obj__ = self->key_list->it->item;
                        return __result120__;
                    }
                    # 1327 "./neo-c.h"
                    # 1328 "./neo-c.h"
                    memset(&result_209,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result121__ = __result_obj__ = result_209;
                    return __result121__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional16;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct sFun* __result122__;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct sFun* __result123__;
struct sFun* __result124__;
struct sFun* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_211=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_212=hash_211;
                        # 1251 "./neo-c.h"
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional231=self->item_existance[it_212],                            _if_conditional231) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional232=string_equals(self->keys[it_212],key),                                _if_conditional232) {
                                    # 1234 "./neo-c.h"
                                    __result122__ = __result_obj__ = self->items[it_212];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result122__;
                                }
                                # 1237 "./neo-c.h"
                                it_212++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional233=it_212>=self->size,                                _if_conditional233) {
                                    # 1240 "./neo-c.h"
                                    it_212=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional234=it_212==hash_211,                                    _if_conditional234) {
                                        # 1243 "./neo-c.h"
                                        __result123__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result123__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./neo-c.h"
                                __result124__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result124__;
                            }
                        }
                        # 1251 "./neo-c.h"
                        __result125__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result125__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_219;
struct list_item$1charp* it_220;
_Bool _while_condtional19;
_Bool _if_conditional241;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_219, 0, sizeof(int));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
                            # 448 "./neo-c.h"
                            it2_219=0;
                            # 449 "./neo-c.h"
                            it_220=self->head;
                            # 460 "./neo-c.h"
                            while(_while_condtional19=it_220!=((void*)0),                            _while_condtional19) {
                                # 455 "./neo-c.h"
                                # 451 "./neo-c.h"
                                if(_if_conditional241=string_equals(it_220->item,item),                                _if_conditional241) {
                                    # 452 "./neo-c.h"
                                    list$1charp_delete(self,it2_219,it2_219+1);
                                    # 453 "./neo-c.h"
                                    break;
                                }
                                # 455 "./neo-c.h"
                                it2_219++;
                                # 457 "./neo-c.h"
                                it_220=it_220->next;
                            }
                            # 460 "./neo-c.h"
                            __result129__ = __result_obj__ = self;
                            return __result129__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
int tmp_221;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct list$1charp* __result126__;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct list_item$1charp* it_224;
int i_225;
_Bool _while_condtional21;
_Bool _if_conditional250;
struct list_item$1charp* prev_it_226;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct list_item$1charp* it_227;
int i_228;
_Bool _while_condtional22;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct list_item$1charp* prev_it_229;
struct list_item$1charp* it_230;
struct list_item$1charp* head_prev_it_231;
struct list_item$1charp* tail_it_232;
int i_233;
_Bool _while_condtional23;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct list_item$1charp* prev_it_234;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_221, 0, sizeof(int));
memset(&it_224, 0, sizeof(struct list_item$1charp*));
memset(&i_225, 0, sizeof(int));
memset(&prev_it_226, 0, sizeof(struct list_item$1charp*));
memset(&it_227, 0, sizeof(struct list_item$1charp*));
memset(&i_228, 0, sizeof(int));
memset(&prev_it_229, 0, sizeof(struct list_item$1charp*));
memset(&it_230, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_231, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_232, 0, sizeof(struct list_item$1charp*));
memset(&i_233, 0, sizeof(int));
memset(&prev_it_234, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional242=head<0,                                        _if_conditional242) {
                                            # 465 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 471 "./neo-c.h"
                                        # 467 "./neo-c.h"
                                        if(_if_conditional243=tail<0,                                        _if_conditional243) {
                                            # 468 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./neo-c.h"
                                        # 471 "./neo-c.h"
                                        if(_if_conditional244=head>tail,                                        _if_conditional244) {
                                            # 472 "./neo-c.h"
                                            tmp_221=tail;
                                            # 473 "./neo-c.h"
                                            tail=head;
                                            # 474 "./neo-c.h"
                                            head=tmp_221;
                                        }
                                        # 481 "./neo-c.h"
                                        # 477 "./neo-c.h"
                                        if(_if_conditional245=head<0,                                        _if_conditional245) {
                                            # 478 "./neo-c.h"
                                            head=0;
                                        }
                                        # 485 "./neo-c.h"
                                        # 481 "./neo-c.h"
                                        if(_if_conditional246=tail>self->len,                                        _if_conditional246) {
                                            # 482 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 489 "./neo-c.h"
                                        # 485 "./neo-c.h"
                                        if(_if_conditional247=head==tail,                                        _if_conditional247) {
                                            # 486 "./neo-c.h"
                                            __result126__ = __result_obj__ = self;
                                            return __result126__;
                                        }
                                        # 584 "./neo-c.h"
                                        # 489 "./neo-c.h"
                                        if(_if_conditional248=head==0&&tail==self->len,                                        _if_conditional248) {
                                            # 491 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./neo-c.h"
                                            # 493 "./neo-c.h"
                                            if(_if_conditional249=head==0,                                            _if_conditional249) {
                                                # 494 "./neo-c.h"
                                                it_224=self->head;
                                                # 495 "./neo-c.h"
                                                i_225=0;
                                                # 517 "./neo-c.h"
                                                while(_while_condtional21=it_224!=((void*)0),                                                _while_condtional21) {
                                                    # 516 "./neo-c.h"
                                                    # 497 "./neo-c.h"
                                                    if(_if_conditional250=i_225<tail,                                                    _if_conditional250) {
                                                        # 498 "./neo-c.h"
                                                        prev_it_226=it_224;
                                                        # 500 "./neo-c.h"
                                                        it_224=it_224->next;
                                                        # 501 "./neo-c.h"
                                                        i_225++;
                                                        # 503 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./neo-c.h"
                                                        # 507 "./neo-c.h"
                                                        if(_if_conditional251=i_225==tail,                                                        _if_conditional251) {
                                                            # 508 "./neo-c.h"
                                                            self->head=it_224;
                                                            # 509 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./neo-c.h"
                                                            it_224=it_224->next;
                                                            # 514 "./neo-c.h"
                                                            i_225++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 518 "./neo-c.h"
                                                if(_if_conditional252=tail==self->len,                                                _if_conditional252) {
                                                    # 519 "./neo-c.h"
                                                    it_227=self->head;
                                                    # 520 "./neo-c.h"
                                                    i_228=0;
                                                    # 542 "./neo-c.h"
                                                    while(_while_condtional22=it_227!=((void*)0),                                                    _while_condtional22) {
                                                        # 527 "./neo-c.h"
                                                        # 522 "./neo-c.h"
                                                        if(_if_conditional253=i_228==head,                                                        _if_conditional253) {
                                                            # 523 "./neo-c.h"
                                                            self->tail=it_227->prev;
                                                            # 524 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./neo-c.h"
                                                        # 527 "./neo-c.h"
                                                        if(_if_conditional254=i_228>=head,                                                        _if_conditional254) {
                                                            # 528 "./neo-c.h"
                                                            prev_it_229=it_227;
                                                            # 530 "./neo-c.h"
                                                            it_227=it_227->next;
                                                            # 531 "./neo-c.h"
                                                            i_228++;
                                                            # 533 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./neo-c.h"
                                                            it_227=it_227->next;
                                                            # 539 "./neo-c.h"
                                                            i_228++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./neo-c.h"
                                                    it_230=self->head;
                                                    # 546 "./neo-c.h"
                                                    head_prev_it_231=((void*)0);
                                                    # 547 "./neo-c.h"
                                                    tail_it_232=((void*)0);
                                                    # 550 "./neo-c.h"
                                                    i_233=0;
                                                    # 576 "./neo-c.h"
                                                    while(_while_condtional23=it_230!=((void*)0),                                                    _while_condtional23) {
                                                        # 555 "./neo-c.h"
                                                        # 552 "./neo-c.h"
                                                        if(_if_conditional255=i_233==head,                                                        _if_conditional255) {
                                                            # 553 "./neo-c.h"
                                                            head_prev_it_231=it_230->prev;
                                                        }
                                                        # 559 "./neo-c.h"
                                                        # 555 "./neo-c.h"
                                                        if(_if_conditional256=i_233==tail,                                                        _if_conditional256) {
                                                            # 556 "./neo-c.h"
                                                            tail_it_232=it_230;
                                                        }
                                                        # 574 "./neo-c.h"
                                                        # 559 "./neo-c.h"
                                                        if(_if_conditional257=i_233>=head&&i_233<tail,                                                        _if_conditional257) {
                                                            # 561 "./neo-c.h"
                                                            prev_it_234=it_230;
                                                            # 563 "./neo-c.h"
                                                            it_230=it_230->next;
                                                            # 564 "./neo-c.h"
                                                            i_233++;
                                                            # 566 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./neo-c.h"
                                                            it_230=it_230->next;
                                                            # 572 "./neo-c.h"
                                                            i_233++;
                                                        }
                                                    }
                                                    # 579 "./neo-c.h"
                                                    # 576 "./neo-c.h"
                                                    if(_if_conditional258=head_prev_it_231!=((void*)0),                                                    _if_conditional258) {
                                                        # 577 "./neo-c.h"
                                                        head_prev_it_231->next=tail_it_232;
                                                    }
                                                    # 582 "./neo-c.h"
                                                    # 579 "./neo-c.h"
                                                    if(_if_conditional259=tail_it_232!=((void*)0),                                                    _if_conditional259) {
                                                        # 580 "./neo-c.h"
                                                        tail_it_232->prev=head_prev_it_231;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./neo-c.h"
                                        __result128__ = __result_obj__ = self;
                                        return __result128__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_222;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_223;
struct list$1charp* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_222, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_223, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./neo-c.h"
                                                it_222=self->head;
                                                # 440 "./neo-c.h"
                                                while(_while_condtional20=it_222!=((void*)0),                                                _while_condtional20) {
                                                    # 435 "./neo-c.h"
                                                    prev_it_223=it_222;
                                                    # 436 "./neo-c.h"
                                                    it_222=it_222->next;
                                                    # 437 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 441 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 443 "./neo-c.h"
                                                self->len=0;
                                                # 445 "./neo-c.h"
                                                __result127__ = __result_obj__ = self;
                                                return __result127__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional265;
char* result_236;
char* __result130__;
_Bool _if_conditional266;
char* __result131__;
char* result_237;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_236, 0, sizeof(char*));
memset(&result_237, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional265=self==((void*)0),            _if_conditional265) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_236,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result130__ = __result_obj__ = result_236;
                return __result130__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result131__ = __result_obj__ = self->it->item;
                return __result131__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_237,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result132__ = __result_obj__ = result_237;
            return __result132__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result133__ = self==((void*)0)||self->it==((void*)0);
            return __result133__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional267;
char* result_239;
char* __result134__;
_Bool _if_conditional268;
char* __result135__;
char* result_240;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_239, 0, sizeof(char*));
memset(&result_240, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional267=self==((void*)0)||self->it==((void*)0),            _if_conditional267) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_239,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result134__ = __result_obj__ = result_239;
                return __result134__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result135__ = __result_obj__ = self->it->item;
                return __result135__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_240,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result136__ = __result_obj__ = result_240;
            return __result136__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional271;
void* right_value241;
struct list_item$1charp* litem_241;
_Bool _if_conditional272;
void* right_value242;
struct list_item$1charp* litem_242;
void* right_value243;
struct list_item$1charp* litem_243;
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&litem_241, 0, sizeof(struct list_item$1charp*));
right_value242 = (void*)0;
memset(&litem_242, 0, sizeof(struct list_item$1charp*));
right_value243 = (void*)0;
memset(&litem_243, 0, sizeof(struct list_item$1charp*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional271=self->len==0,                _if_conditional271) {
                    # 226 "./neo-c.h"
                    litem_241=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value241=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_241->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_241->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_241->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_241;
                    # 233 "./neo-c.h"
                    self->head=litem_241;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional272=self->len==1,                    _if_conditional272) {
                        # 236 "./neo-c.h"
                        litem_242=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value242=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_242->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_242->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_242->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_242;
                        # 243 "./neo-c.h"
                        self->head->next=litem_242;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_243=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value243=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_243->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_243->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_243->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_243;
                        # 253 "./neo-c.h"
                        self->tail=litem_243;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result137__ = __result_obj__ = self;
                return __result137__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* output_file_name_244;
struct _IO_FILE* f_245;
void* right_value246;
struct map$2charphsFunph* o2_saved_246;
char* it_247;
void* right_value247;
struct sFun* it2_251;
void* right_value248;
char* header_252;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct map$2charphsFunph* o2_saved_257;
char* it_258;
void* right_value249;
struct sFun* it2_259;
void* right_value250;
char* header_260;
_Bool _if_conditional285;
void* right_value251;
char* output_261;
_Bool _if_conditional286;
void* right_value252;
char* output_262;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct map$2charphsFunph* o2_saved_263;
char* it_264;
struct sFun* it2_265;
_Bool _if_conditional289;
void* right_value253;
char* output_266;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
memset(&output_file_name_244, 0, sizeof(char*));
memset(&f_245, 0, sizeof(struct _IO_FILE*));
right_value246 = (void*)0;
memset(&o2_saved_246, 0, sizeof(struct map$2charphsFunph*));
memset(&it_247, 0, sizeof(char*));
right_value247 = (void*)0;
memset(&it2_251, 0, sizeof(struct sFun*));
right_value248 = (void*)0;
memset(&header_252, 0, sizeof(char*));
memset(&o2_saved_257, 0, sizeof(struct map$2charphsFunph*));
memset(&it_258, 0, sizeof(char*));
right_value249 = (void*)0;
memset(&it2_259, 0, sizeof(struct sFun*));
right_value250 = (void*)0;
memset(&header_260, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&output_261, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&output_262, 0, sizeof(char*));
memset(&o2_saved_263, 0, sizeof(struct map$2charphsFunph*));
memset(&it_264, 0, sizeof(char*));
memset(&it2_265, 0, sizeof(struct sFun*));
right_value253 = (void*)0;
memset(&output_266, 0, sizeof(char*));
    # 704 "03transpile2.c"
    output_file_name_244=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s.c",info->sname))));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 706 "03transpile2.c"
    f_245=fopen(output_file_name_244,"w");
    # 708 "03transpile2.c"
    fprintf(f_245,"// source head\n");
    # 709 "03transpile2.c"
    fprintf(f_245,"%s\n",((char*)(right_value246=buffer_to_string(info->module->mSourceHead))));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 711 "03transpile2.c"
    fprintf(f_245,"// header function\n");
    # 729 "03transpile2.c"
    for(    o2_saved_246=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_247=map$2charphsFunph_begin((o2_saved_246));    !map$2charphsFunph_end((o2_saved_246));    it_247=map$2charphsFunph_next((o2_saved_246))    ){
        # 713 "03transpile2.c"
        it2_251=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value247=__builtin_string(it_247))));
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 715 "03transpile2.c"
        header_252=(char*)come_increment_ref_count(((char*)(right_value248=header_function(it2_251,info))));
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 727 "03transpile2.c"
        # 717 "03transpile2.c"
        if(_if_conditional277=it2_251->mStatic&&it2_251->mResultType->mInline,        _if_conditional277) {
        }
        else {
            # 727 "03transpile2.c"
            # 719 "03transpile2.c"
            if(it2_251->mStatic) {
                # 720 "03transpile2.c"
                fprintf(f_245,"static %s",header_252);
            }
            else {
                # 727 "03transpile2.c"
                # 722 "03transpile2.c"
                if(it2_251->mResultType->mInline) {
                }
                else {
                    # 727 "03transpile2.c"
                    # 724 "03transpile2.c"
                    if(_if_conditional280=string_operator_not_equals(it_247,"__builtin_va_start")&&string_operator_not_equals(it_247,"__builtin_va_end"),                    _if_conditional280) {
                        # 725 "03transpile2.c"
                        fprintf(f_245,"%s\n",header_252,it_247);
                    }
                }
            }
        }
        header_252 = come_decrement_ref_count2(header_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 729 "03transpile2.c"
    fprintf(f_245,"// inline function\n");
    # 749 "03transpile2.c"
    for(    o2_saved_257=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_258=map$2charphsFunph_begin((o2_saved_257));    !map$2charphsFunph_end((o2_saved_257));    it_258=map$2charphsFunph_next((o2_saved_257))    ){
        # 731 "03transpile2.c"
        it2_259=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value249=__builtin_string(it_258))));
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 733 "03transpile2.c"
        header_260=(char*)come_increment_ref_count(((char*)(right_value250=header_function(it2_259,info))));
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 747 "03transpile2.c"
        # 735 "03transpile2.c"
        if(_if_conditional285=it2_259->mStatic&&it2_259->mResultType->mInline,        _if_conditional285) {
            # 736 "03transpile2.c"
            output_261=(char*)come_increment_ref_count(((char*)(right_value251=output_function(it2_259,info))));
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 737 "03transpile2.c"
            fprintf(f_245,"static inline %s",output_261);
            output_261 = come_decrement_ref_count2(output_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 747 "03transpile2.c"
            # 739 "03transpile2.c"
            if(it2_259->mResultType->mInline) {
                # 740 "03transpile2.c"
                output_262=(char*)come_increment_ref_count(((char*)(right_value252=output_function(it2_259,info))));
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 741 "03transpile2.c"
                fprintf(f_245,"static inline %s",output_262);
                output_262 = come_decrement_ref_count2(output_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 747 "03transpile2.c"
                # 743 "03transpile2.c"
                if(it2_259->mStatic) {
                }
                else {
                    # 747 "03transpile2.c"
                    # 745 "03transpile2.c"
                    if(_if_conditional288=string_operator_not_equals(it_258,"__builtin_va_start")&&string_operator_not_equals(it_258,"__builtin_va_end"),                    _if_conditional288) {
                    }
                }
            }
        }
        header_260 = come_decrement_ref_count2(header_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 749 "03transpile2.c"
    fprintf(f_245,"\n");
    # 751 "03transpile2.c"
    fprintf(f_245,"// body function\n");
    # 773 "03transpile2.c"
    for(    o2_saved_263=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_264=map$2charphsFunph_begin((o2_saved_263));    !map$2charphsFunph_end((o2_saved_263));    it_264=map$2charphsFunph_next((o2_saved_263))    ){
        # 753 "03transpile2.c"
        it2_265=map$2charphsFunphp_operator_load_element(info->funcs,it_264);
        # 771 "03transpile2.c"
        # 755 "03transpile2.c"
        if(_if_conditional289=!it2_265->mExternal,        _if_conditional289) {
            # 756 "03transpile2.c"
            output_266=(char*)come_increment_ref_count(((char*)(right_value253=output_function(it2_265,info))));
            right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 769 "03transpile2.c"
            # 758 "03transpile2.c"
            if(_if_conditional290=it2_265->mStatic&&it2_265->mResultType->mInline,            _if_conditional290) {
            }
            else {
                # 769 "03transpile2.c"
                # 760 "03transpile2.c"
                if(it2_265->mStatic) {
                    # 761 "03transpile2.c"
                    fprintf(f_245,"static %s",output_266);
                }
                else {
                    # 769 "03transpile2.c"
                    # 763 "03transpile2.c"
                    if(it2_265->mResultType->mInline) {
                    }
                    else {
                        # 766 "03transpile2.c"
                        fprintf(f_245,"%s",output_266);
                    }
                }
            }
            # 769 "03transpile2.c"
            fprintf(f_245,"\n");
            output_266 = come_decrement_ref_count2(output_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 773 "03transpile2.c"
    fclose(f_245);
    # 775 "03transpile2.c"
    __result144__ = (_Bool)1;
    output_file_name_244 = come_decrement_ref_count2(output_file_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
    output_file_name_244 = come_decrement_ref_count2(output_file_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_248;
unsigned int hash_249;
unsigned int it_250;
_Bool _while_condtional24;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct sFun* __result140__;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct sFun* __result141__;
struct sFun* __result142__;
struct sFun* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_248, 0, sizeof(struct sFun*));
memset(&hash_249, 0, sizeof(unsigned int));
memset(&it_250, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_248,0,sizeof(struct sFun*));
            # 1547 "./neo-c.h"
            hash_249=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_250=hash_249;
            # 1572 "./neo-c.h"
            while(_while_condtional24=(_Bool)1,            _while_condtional24) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional273=self->item_existance[it_250],                _if_conditional273) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional274=string_equals(self->keys[it_250],key),                    _if_conditional274) {
                        # 1555 "./neo-c.h"
                        __result140__ = __result_obj__ = self->items[it_250];
                        come_call_finalizer2(sFun_finalize,default_value_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result140__;
                    }
                    # 1558 "./neo-c.h"
                    it_250++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional275=it_250>=self->size,                    _if_conditional275) {
                        # 1561 "./neo-c.h"
                        it_250=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional276=it_250==hash_249,                        _if_conditional276) {
                            # 1564 "./neo-c.h"
                            __result141__ = __result_obj__ = default_value_248;
                            come_call_finalizer2(sFun_finalize,default_value_248, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result141__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result142__ = __result_obj__ = default_value_248;
                    come_call_finalizer2(sFun_finalize,default_value_248, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result142__;
                }
            }
            # 1572 "./neo-c.h"
            __result143__ = __result_obj__ = default_value_248;
            come_call_finalizer2(sFun_finalize,default_value_248, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result143__;
            come_call_finalizer2(sFun_finalize,default_value_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_253;
_Bool _if_conditional281;
_Bool _if_conditional282;
int i_254;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
        # 1137 "./neo-c.h"
        for(        i_253=0;        i_253<self->size;        i_253++        ){
            # 1136 "./neo-c.h"
            # 1131 "./neo-c.h"
            if(_if_conditional281=self->item_existance[i_253],            _if_conditional281) {
                # 1135 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional282=1,                _if_conditional282) {
                    # 1133 "./neo-c.h"
                    come_call_finalizer2(sFun_finalize,self->items[i_253], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1137 "./neo-c.h"
        come_free((char*)self->items);
        # 1146 "./neo-c.h"
        for(        i_254=0;        i_254<self->size;        i_254++        ){
            # 1145 "./neo-c.h"
            # 1140 "./neo-c.h"
            if(_if_conditional283=self->item_existance[i_254],            _if_conditional283) {
                # 1144 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional284=1,                _if_conditional284) {
                    # 1142 "./neo-c.h"
                    self->keys[i_254] = come_decrement_ref_count2(self->keys[i_254], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charp* it_255;
_Bool _while_condtional25;
struct list_item$1charp* prev_it_256;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_255, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_256, 0, sizeof(struct list_item$1charp*));
            # 123 "./neo-c.h"
            it_255=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional25=it_255!=((void*)0),            _while_condtional25) {
                # 125 "./neo-c.h"
                prev_it_256=it_255;
                # 126 "./neo-c.h"
                it_255=it_255->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_267;
struct _IO_FILE* f_268;
_Bool _if_conditional293;
void* right_value254;
_Bool _if_conditional294;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_267, 0, sizeof(char*));
memset(&f_268, 0, sizeof(struct _IO_FILE*));
right_value254 = (void*)0;
    # 781 "03transpile2.c"
    output_file_name_267=(char*)come_increment_ref_count(info->output_file_name);
    # 783 "03transpile2.c"
    f_268=fopen(output_file_name_267,"a");
    # 791 "03transpile2.c"
    # 785 "03transpile2.c"
    if(_if_conditional293=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional293) {
        # 786 "03transpile2.c"
        fprintf(f_268,"#ifndef __COMMON_H__\n");
        # 787 "03transpile2.c"
        fprintf(f_268,"#define __COMMON_H__\n");
        # 788 "03transpile2.c"
        fprintf(f_268,"#include <neo-c.h>\n");
    }
    # 791 "03transpile2.c"
    fprintf(f_268,"%s\n",((char*)(right_value254=buffer_to_string(info->module->mHeader))));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 793 "03transpile2.c"
    fprintf(f_268,"\n");
    # 799 "03transpile2.c"
    # 795 "03transpile2.c"
    if(_if_conditional294=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional294) {
        # 796 "03transpile2.c"
        fprintf(f_268,"#endif\n");
    }
    # 799 "03transpile2.c"
    fclose(f_268);
    # 801 "03transpile2.c"
    __result145__ = (_Bool)1;
    output_file_name_267 = come_decrement_ref_count2(output_file_name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result145__;
    output_file_name_267 = come_decrement_ref_count2(output_file_name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional295;
char* msg2_269;
va_list args_270;
int len_271;
_Bool _if_conditional296;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_269, 0, sizeof(char*));
memset(&args_270, 0, sizeof(va_list));
memset(&len_271, 0, sizeof(int));
    # 809 "03transpile2.c"
    # 806 "03transpile2.c"
    if(info->no_output_come_code) {
        # 807 "03transpile2.c"
        return;
    }
    # 809 "03transpile2.c"
    # 811 "03transpile2.c"
    # 812 "03transpile2.c"
    __builtin_va_start(args_270,code);
    # 813 "03transpile2.c"
    len_271=vasprintf(&msg2_269,code,args_270);
    # 814 "03transpile2.c"
    __builtin_va_end(args_270);
    # 820 "03transpile2.c"
    # 816 "03transpile2.c"
    if(info->come_fun) {
        # 817 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead,msg2_269);
    }
    # 820 "03transpile2.c"
    free(msg2_269);
    come_call_finalizer2(va_list_finalize,(&args_270), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional297;
char* msg2_272;
va_list args_273;
int len_274;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_272, 0, sizeof(char*));
memset(&args_273, 0, sizeof(va_list));
memset(&len_274, 0, sizeof(int));
    # 828 "03transpile2.c"
    # 825 "03transpile2.c"
    if(info->no_output_come_code) {
        # 826 "03transpile2.c"
        return;
    }
    # 828 "03transpile2.c"
    # 830 "03transpile2.c"
    # 831 "03transpile2.c"
    __builtin_va_start(args_273,code);
    # 832 "03transpile2.c"
    len_274=vasprintf(&msg2_272,code,args_273);
    # 833 "03transpile2.c"
    __builtin_va_end(args_273);
    # 839 "03transpile2.c"
    # 835 "03transpile2.c"
    if(info->come_fun) {
        # 836 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead2,msg2_272);
    }
    # 839 "03transpile2.c"
    free(msg2_272);
    come_call_finalizer2(va_list_finalize,(&args_273), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional299;
_Bool _if_conditional300;
char* __dec_obj43;
_Bool _if_conditional301;
char* __dec_obj44;
_Bool _if_conditional302;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
    # 847 "03transpile2.c"
    # 844 "03transpile2.c"
    if(info->no_output_come_code) {
        # 845 "03transpile2.c"
        return;
    }
    # 851 "03transpile2.c"
    # 847 "03transpile2.c"
    if(info->module->mLastCode) {
        # 848 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 849 "03transpile2.c"
        __dec_obj43=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 855 "03transpile2.c"
    # 851 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 852 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode2);
        # 853 "03transpile2.c"
        __dec_obj44=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 859 "03transpile2.c"
    # 855 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 856 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode3);
        # 857 "03transpile2.c"
        __dec_obj45=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value255;
char* __dec_obj46;
_Bool _if_conditional305;
void* right_value256;
char* __dec_obj47;
_Bool _if_conditional306;
void* right_value257;
char* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
    # 866 "03transpile2.c"
    # 863 "03transpile2.c"
    if(info->no_output_come_code) {
        # 864 "03transpile2.c"
        return;
    }
    # 870 "03transpile2.c"
    # 866 "03transpile2.c"
    if(info->module->mLastCode) {
        # 867 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value255=string_substring(info->module->mLastCode,0,-3))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 868 "03transpile2.c"
        __dec_obj46=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 874 "03transpile2.c"
    # 870 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 871 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value256=string_substring(info->module->mLastCode2,0,-3))));
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 872 "03transpile2.c"
        __dec_obj47=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 878 "03transpile2.c"
    # 874 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 875 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value257=string_substring(info->module->mLastCode3,0,-3))));
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 876 "03transpile2.c"
        __dec_obj48=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional307;
char* msg2_275;
va_list args_276;
int len_277;
void* right_value258;
char* __dec_obj49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_275, 0, sizeof(char*));
memset(&args_276, 0, sizeof(va_list));
memset(&len_277, 0, sizeof(int));
right_value258 = (void*)0;
    # 885 "03transpile2.c"
    # 882 "03transpile2.c"
    if(info->no_output_come_code) {
        # 883 "03transpile2.c"
        return;
    }
    # 885 "03transpile2.c"
    # 887 "03transpile2.c"
    # 888 "03transpile2.c"
    __builtin_va_start(args_276,msg);
    # 889 "03transpile2.c"
    len_277=vasprintf(&msg2_275,msg,args_276);
    # 890 "03transpile2.c"
    __builtin_va_end(args_276);
    # 892 "03transpile2.c"
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s",msg2_275))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 894 "03transpile2.c"
    free(msg2_275);
    come_call_finalizer2(va_list_finalize,(&args_276), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional308;
char* msg2_278;
va_list args_279;
int len_280;
void* right_value259;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_278, 0, sizeof(char*));
memset(&args_279, 0, sizeof(va_list));
memset(&len_280, 0, sizeof(int));
right_value259 = (void*)0;
    # 902 "03transpile2.c"
    # 899 "03transpile2.c"
    if(info->no_output_come_code) {
        # 900 "03transpile2.c"
        return;
    }
    # 902 "03transpile2.c"
    # 904 "03transpile2.c"
    # 905 "03transpile2.c"
    __builtin_va_start(args_279,msg);
    # 906 "03transpile2.c"
    len_280=vasprintf(&msg2_278,msg,args_279);
    # 907 "03transpile2.c"
    __builtin_va_end(args_279);
    # 909 "03transpile2.c"
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s",msg2_278))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 911 "03transpile2.c"
    free(msg2_278);
    come_call_finalizer2(va_list_finalize,(&args_279), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional309;
char* msg2_281;
va_list args_282;
int len_283;
void* right_value260;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_281, 0, sizeof(char*));
memset(&args_282, 0, sizeof(va_list));
memset(&len_283, 0, sizeof(int));
right_value260 = (void*)0;
    # 919 "03transpile2.c"
    # 916 "03transpile2.c"
    if(info->no_output_come_code) {
        # 917 "03transpile2.c"
        return;
    }
    # 919 "03transpile2.c"
    # 921 "03transpile2.c"
    # 922 "03transpile2.c"
    __builtin_va_start(args_282,msg);
    # 923 "03transpile2.c"
    len_283=vasprintf(&msg2_281,msg,args_282);
    # 924 "03transpile2.c"
    __builtin_va_end(args_282);
    # 926 "03transpile2.c"
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s",msg2_281))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 928 "03transpile2.c"
    free(msg2_281);
    come_call_finalizer2(va_list_finalize,(&args_282), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 933 "03transpile2.c"
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
int tmp_284;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list$1CVALUEph* __result146__;
_Bool _if_conditional316;
_Bool _if_conditional318;
struct list_item$1CVALUEph* it_287;
int i_288;
_Bool _while_condtional27;
_Bool _if_conditional319;
struct list_item$1CVALUEph* prev_it_289;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct list_item$1CVALUEph* it_290;
int i_291;
_Bool _while_condtional28;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct list_item$1CVALUEph* prev_it_292;
struct list_item$1CVALUEph* it_293;
struct list_item$1CVALUEph* head_prev_it_294;
struct list_item$1CVALUEph* tail_it_295;
int i_296;
_Bool _while_condtional29;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
struct list_item$1CVALUEph* prev_it_297;
_Bool _if_conditional327;
_Bool _if_conditional328;
struct list$1CVALUEph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_284, 0, sizeof(int));
memset(&it_287, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_288, 0, sizeof(int));
memset(&prev_it_289, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_290, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_291, 0, sizeof(int));
memset(&prev_it_292, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_293, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_294, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_295, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_296, 0, sizeof(int));
memset(&prev_it_297, 0, sizeof(struct list_item$1CVALUEph*));
        # 467 "./neo-c.h"
        # 464 "./neo-c.h"
        if(_if_conditional310=head<0,        _if_conditional310) {
            # 465 "./neo-c.h"
            head+=self->len;
        }
        # 471 "./neo-c.h"
        # 467 "./neo-c.h"
        if(_if_conditional311=tail<0,        _if_conditional311) {
            # 468 "./neo-c.h"
            tail+=self->len+1;
        }
        # 477 "./neo-c.h"
        # 471 "./neo-c.h"
        if(_if_conditional312=head>tail,        _if_conditional312) {
            # 472 "./neo-c.h"
            tmp_284=tail;
            # 473 "./neo-c.h"
            tail=head;
            # 474 "./neo-c.h"
            head=tmp_284;
        }
        # 481 "./neo-c.h"
        # 477 "./neo-c.h"
        if(_if_conditional313=head<0,        _if_conditional313) {
            # 478 "./neo-c.h"
            head=0;
        }
        # 485 "./neo-c.h"
        # 481 "./neo-c.h"
        if(_if_conditional314=tail>self->len,        _if_conditional314) {
            # 482 "./neo-c.h"
            tail=self->len;
        }
        # 489 "./neo-c.h"
        # 485 "./neo-c.h"
        if(_if_conditional315=head==tail,        _if_conditional315) {
            # 486 "./neo-c.h"
            __result146__ = __result_obj__ = self;
            return __result146__;
        }
        # 584 "./neo-c.h"
        # 489 "./neo-c.h"
        if(_if_conditional316=head==0&&tail==self->len,        _if_conditional316) {
            # 491 "./neo-c.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 584 "./neo-c.h"
            # 493 "./neo-c.h"
            if(_if_conditional318=head==0,            _if_conditional318) {
                # 494 "./neo-c.h"
                it_287=self->head;
                # 495 "./neo-c.h"
                i_288=0;
                # 517 "./neo-c.h"
                while(_while_condtional27=it_287!=((void*)0),                _while_condtional27) {
                    # 516 "./neo-c.h"
                    # 497 "./neo-c.h"
                    if(_if_conditional319=i_288<tail,                    _if_conditional319) {
                        # 498 "./neo-c.h"
                        prev_it_289=it_287;
                        # 500 "./neo-c.h"
                        it_287=it_287->next;
                        # 501 "./neo-c.h"
                        i_288++;
                        # 503 "./neo-c.h"
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "./neo-c.h"
                        self->len--;
                    }
                    else {
                        # 516 "./neo-c.h"
                        # 507 "./neo-c.h"
                        if(_if_conditional320=i_288==tail,                        _if_conditional320) {
                            # 508 "./neo-c.h"
                            self->head=it_287;
                            # 509 "./neo-c.h"
                            self->head->prev=((void*)0);
                            # 510 "./neo-c.h"
                            break;
                        }
                        else {
                            # 513 "./neo-c.h"
                            it_287=it_287->next;
                            # 514 "./neo-c.h"
                            i_288++;
                        }
                    }
                }
            }
            else {
                # 584 "./neo-c.h"
                # 518 "./neo-c.h"
                if(_if_conditional321=tail==self->len,                _if_conditional321) {
                    # 519 "./neo-c.h"
                    it_290=self->head;
                    # 520 "./neo-c.h"
                    i_291=0;
                    # 542 "./neo-c.h"
                    while(_while_condtional28=it_290!=((void*)0),                    _while_condtional28) {
                        # 527 "./neo-c.h"
                        # 522 "./neo-c.h"
                        if(_if_conditional322=i_291==head,                        _if_conditional322) {
                            # 523 "./neo-c.h"
                            self->tail=it_290->prev;
                            # 524 "./neo-c.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "./neo-c.h"
                        # 527 "./neo-c.h"
                        if(_if_conditional323=i_291>=head,                        _if_conditional323) {
                            # 528 "./neo-c.h"
                            prev_it_292=it_290;
                            # 530 "./neo-c.h"
                            it_290=it_290->next;
                            # 531 "./neo-c.h"
                            i_291++;
                            # 533 "./neo-c.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 538 "./neo-c.h"
                            it_290=it_290->next;
                            # 539 "./neo-c.h"
                            i_291++;
                        }
                    }
                }
                else {
                    # 544 "./neo-c.h"
                    it_293=self->head;
                    # 546 "./neo-c.h"
                    head_prev_it_294=((void*)0);
                    # 547 "./neo-c.h"
                    tail_it_295=((void*)0);
                    # 550 "./neo-c.h"
                    i_296=0;
                    # 576 "./neo-c.h"
                    while(_while_condtional29=it_293!=((void*)0),                    _while_condtional29) {
                        # 555 "./neo-c.h"
                        # 552 "./neo-c.h"
                        if(_if_conditional324=i_296==head,                        _if_conditional324) {
                            # 553 "./neo-c.h"
                            head_prev_it_294=it_293->prev;
                        }
                        # 559 "./neo-c.h"
                        # 555 "./neo-c.h"
                        if(_if_conditional325=i_296==tail,                        _if_conditional325) {
                            # 556 "./neo-c.h"
                            tail_it_295=it_293;
                        }
                        # 574 "./neo-c.h"
                        # 559 "./neo-c.h"
                        if(_if_conditional326=i_296>=head&&i_296<tail,                        _if_conditional326) {
                            # 561 "./neo-c.h"
                            prev_it_297=it_293;
                            # 563 "./neo-c.h"
                            it_293=it_293->next;
                            # 564 "./neo-c.h"
                            i_296++;
                            # 566 "./neo-c.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 571 "./neo-c.h"
                            it_293=it_293->next;
                            # 572 "./neo-c.h"
                            i_296++;
                        }
                    }
                    # 579 "./neo-c.h"
                    # 576 "./neo-c.h"
                    if(_if_conditional327=head_prev_it_294!=((void*)0),                    _if_conditional327) {
                        # 577 "./neo-c.h"
                        head_prev_it_294->next=tail_it_295;
                    }
                    # 582 "./neo-c.h"
                    # 579 "./neo-c.h"
                    if(_if_conditional328=tail_it_295!=((void*)0),                    _if_conditional328) {
                        # 580 "./neo-c.h"
                        tail_it_295->prev=head_prev_it_294;
                    }
                }
            }
        }
        # 584 "./neo-c.h"
        __result148__ = __result_obj__ = self;
        return __result148__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_285;
_Bool _while_condtional26;
struct list_item$1CVALUEph* prev_it_286;
struct list$1CVALUEph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_285, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_286, 0, sizeof(struct list_item$1CVALUEph*));
                # 433 "./neo-c.h"
                it_285=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional26=it_285!=((void*)0),                _while_condtional26) {
                    # 435 "./neo-c.h"
                    prev_it_286=it_285;
                    # 436 "./neo-c.h"
                    it_285=it_285->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./neo-c.h"
                self->head=((void*)0);
                # 441 "./neo-c.h"
                self->tail=((void*)0);
                # 443 "./neo-c.h"
                self->len=0;
                # 445 "./neo-c.h"
                __result147__ = __result_obj__ = self;
                return __result147__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional317=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional317) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj52;
void* right_value264;
struct CVALUE* result_302;
_Bool _if_conditional335;
struct CVALUE* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
memset(&result_302, 0, sizeof(struct CVALUE*));
    # 938 "03transpile2.c"
    __dec_obj52=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 941 "03transpile2.c"
    result_302=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=CVALUE_clone(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(info->stack,offset), "03transpile2.c", 941, 10))))));
    come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 948 "03transpile2.c"
    # 943 "03transpile2.c"
    if(_if_conditional335=result_302==((void*)0),    _if_conditional335) {
        # 944 "03transpile2.c"
        err_msg(info,"invalid stack value");
        # 945 "03transpile2.c"
        exit(2);
    }
    # 948 "03transpile2.c"
    __result153__ = __result_obj__ = result_302;
    come_call_finalizer2(CVALUE_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result153__;
    come_call_finalizer2(CVALUE_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional329;
struct list_item$1CVALUEph* it_298;
int i_299;
_Bool _while_condtional30;
_Bool _if_conditional330;
struct CVALUE* __result149__;
struct CVALUE* default_value_300;
struct CVALUE* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_298, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_299, 0, sizeof(int));
memset(&default_value_300, 0, sizeof(struct CVALUE*));
        # 686 "./neo-c.h"
        # 682 "./neo-c.h"
        if(_if_conditional329=position<0,        _if_conditional329) {
            # 683 "./neo-c.h"
            position+=self->len;
        }
        # 686 "./neo-c.h"
        it_298=self->head;
        # 687 "./neo-c.h"
        i_299=0;
        # 694 "./neo-c.h"
        while(_while_condtional30=it_298!=((void*)0),        _while_condtional30) {
            # 692 "./neo-c.h"
            # 689 "./neo-c.h"
            if(_if_conditional330=position==i_299,            _if_conditional330) {
                # 690 "./neo-c.h"
                __result149__ = __result_obj__ = it_298->item;
                return __result149__;
            }
            # 692 "./neo-c.h"
            it_298=it_298->next;
            # 693 "./neo-c.h"
            i_299++;
        }
        # 696 "./neo-c.h"
        # 697 "./neo-c.h"
        memset(&default_value_300,0,sizeof(struct CVALUE*));
        # 698 "./neo-c.h"
        __result150__ = __result_obj__ = default_value_300;
        come_call_finalizer2(CVALUE_finalize,default_value_300, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result150__;
        come_call_finalizer2(CVALUE_finalize,default_value_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional331;
struct CVALUE* __result151__;
void* right_value261;
struct CVALUE* result_301;
_Bool _if_conditional332;
void* right_value262;
char* __dec_obj53;
_Bool _if_conditional333;
void* right_value263;
struct sType* __dec_obj54;
_Bool _if_conditional334;
struct CVALUE* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
memset(&result_301, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional331=self==(void*)0,        _if_conditional331) {
            # 2 "CVALUE_clone"
            __result151__ = __result_obj__ = (void*)0;
            return __result151__;
        }
        # 3 "CVALUE_clone"
        result_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional332=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional332) {
            # 4 "CVALUE_clone"
            __dec_obj53=result_301->c_value;
            result_301->c_value=(char*)come_increment_ref_count(((char*)(right_value262=string_clone(self->c_value))));
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional333=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional333) {
            # 5 "CVALUE_clone"
            __dec_obj54=result_301->type;
            result_301->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional334=self!=((void*)0),        _if_conditional334) {
            # 6 "CVALUE_clone"
            result_301->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result152__ = __result_obj__ = result_301;
        come_call_finalizer2(CVALUE_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result152__;
        come_call_finalizer2(CVALUE_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
memset(&__result_obj__, 0, sizeof(void*));
    # 953 "03transpile2.c"
    __dec_obj55=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 954 "03transpile2.c"
    __dec_obj56=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 955 "03transpile2.c"
    __dec_obj57=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
}

