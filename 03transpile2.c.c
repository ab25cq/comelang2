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

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, struct sInfo* info);

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

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

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
struct sType* get_no_solved_type(struct sType* type);

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
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
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

struct sType* get_no_solved_type(struct sType* type){
void* __result_obj__;
struct sType* result_97;
_Bool _if_conditional105;
void* right_value162;
struct sType* __dec_obj35;
void* right_value163;
struct sType* __dec_obj36;
int i_116;
struct list$1sTypeph* o2_saved_117;
struct sType* it_118;
void* right_value164;
struct sType* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&i_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1sTypeph*));
memset(&it_118, 0, sizeof(struct sType*));
right_value164 = (void*)0;
    # 347 "03transpile2.c"
    # 355 "03transpile2.c"
    # 348 "03transpile2.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 349 "03transpile2.c"
        __dec_obj35=result_97;
        result_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type->mNoSolvedGenericsType->v1))));
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 352 "03transpile2.c"
        __dec_obj36=result_97;
        result_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 355 "03transpile2.c"
    i_116=0;
    # 361 "03transpile2.c"
    for(    o2_saved_117=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_118=list$1sTypeph_begin((o2_saved_117));    !list$1sTypeph_end((o2_saved_117));    it_118=list$1sTypeph_next((o2_saved_117))    ){
        # 357 "03transpile2.c"
        list$1sTypephp_operator_store_element(result_97->mGenericsTypes,i_116,(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=get_no_solved_type(it_118)))));
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 358 "03transpile2.c"
        i_116++;
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 361 "03transpile2.c"
    __result106__ = __result_obj__ = result_97;
    come_call_finalizer2(sType_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sType_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional106;
struct sType* __result84__;
void* right_value127;
struct sType* result_98;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value134;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional112;
void* right_value137;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional116;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional117;
void* right_value139;
char* __dec_obj19;
_Bool _if_conditional118;
void* right_value140;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional119;
void* right_value148;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value149;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional134;
void* right_value156;
struct list$1charph* __dec_obj29;
_Bool _if_conditional138;
void* right_value157;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value158;
struct sNode* __dec_obj31;
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
void* right_value159;
struct sNode* __dec_obj32;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value160;
char* __dec_obj33;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value161;
char* __dec_obj34;
_Bool _if_conditional179;
struct sType* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_98, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional106=self==(void*)0,            _if_conditional106) {
                # 2 "sType_clone"
                __result84__ = __result_obj__ = (void*)0;
                return __result84__;
            }
            # 3 "sType_clone"
            result_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 4 "sType_clone"
                result_98->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional108=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional108) {
                # 5 "sType_clone"
                __dec_obj15=result_98->mMultipleTypes;
                result_98->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional112=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional112) {
                # 6 "sType_clone"
                __dec_obj17=result_98->mNoSolvedGenericsType;
                result_98->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional116=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional116) {
                # 7 "sType_clone"
                __dec_obj18=result_98->mOriginalLoadVarType;
                result_98->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional117=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional117) {
                # 8 "sType_clone"
                __dec_obj19=result_98->mGenericsName;
                result_98->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional118=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional118) {
                # 9 "sType_clone"
                __dec_obj20=result_98->mGenericsTypes;
                result_98->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional119=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional119) {
                # 10 "sType_clone"
                __dec_obj24=result_98->mArrayNum;
                result_98->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 11 "sType_clone"
                result_98->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional133=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional133) {
                # 12 "sType_clone"
                __dec_obj25=result_98->mParamTypes;
                result_98->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional134=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional134) {
                # 13 "sType_clone"
                __dec_obj29=result_98->mParamNames;
                result_98->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional138=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional138) {
                # 14 "sType_clone"
                __dec_obj30=result_98->mResultType;
                result_98->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value157=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional139=self!=((void*)0),            _if_conditional139) {
                # 15 "sType_clone"
                result_98->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional140=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional140) {
                # 16 "sType_clone"
                __dec_obj31=result_98->mAlignas;
                result_98->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional141=self!=((void*)0),            _if_conditional141) {
                # 17 "sType_clone"
                result_98->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional142=self!=((void*)0),            _if_conditional142) {
                # 18 "sType_clone"
                result_98->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional143=self!=((void*)0),            _if_conditional143) {
                # 19 "sType_clone"
                result_98->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional144=self!=((void*)0),            _if_conditional144) {
                # 20 "sType_clone"
                result_98->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional145=self!=((void*)0),            _if_conditional145) {
                # 21 "sType_clone"
                result_98->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                # 22 "sType_clone"
                result_98->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional147=self!=((void*)0),            _if_conditional147) {
                # 23 "sType_clone"
                result_98->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                # 24 "sType_clone"
                result_98->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                # 25 "sType_clone"
                result_98->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                # 26 "sType_clone"
                result_98->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                # 27 "sType_clone"
                result_98->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                # 28 "sType_clone"
                result_98->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional153=self!=((void*)0),            _if_conditional153) {
                # 29 "sType_clone"
                result_98->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional154=self!=((void*)0),            _if_conditional154) {
                # 30 "sType_clone"
                result_98->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                # 31 "sType_clone"
                result_98->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                # 32 "sType_clone"
                result_98->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional157=self!=((void*)0),            _if_conditional157) {
                # 33 "sType_clone"
                result_98->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional158=self!=((void*)0),            _if_conditional158) {
                # 34 "sType_clone"
                result_98->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional159=self!=((void*)0),            _if_conditional159) {
                # 35 "sType_clone"
                result_98->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional160=self!=((void*)0),            _if_conditional160) {
                # 36 "sType_clone"
                result_98->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional161=self!=((void*)0),            _if_conditional161) {
                # 37 "sType_clone"
                result_98->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional162=self!=((void*)0),            _if_conditional162) {
                # 38 "sType_clone"
                result_98->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional163=self!=((void*)0),            _if_conditional163) {
                # 39 "sType_clone"
                result_98->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional164=self!=((void*)0),            _if_conditional164) {
                # 40 "sType_clone"
                result_98->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional165=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional165) {
                # 41 "sType_clone"
                __dec_obj32=result_98->mSizeNum;
                result_98->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                # 42 "sType_clone"
                result_98->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                # 43 "sType_clone"
                result_98->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional168=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional168) {
                # 44 "sType_clone"
                __dec_obj33=result_98->mOriginalTypeName;
                result_98->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value160=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                # 45 "sType_clone"
                result_98->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                # 46 "sType_clone"
                result_98->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                # 47 "sType_clone"
                result_98->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                # 48 "sType_clone"
                result_98->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                # 49 "sType_clone"
                result_98->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                # 50 "sType_clone"
                result_98->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                # 51 "sType_clone"
                result_98->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                # 52 "sType_clone"
                result_98->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                # 53 "sType_clone"
                result_98->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional178=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional178) {
                # 54 "sType_clone"
                __dec_obj34=result_98->mAsmName;
                result_98->mAsmName=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                # 55 "sType_clone"
                result_98->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result101__ = __result_obj__ = result_98;
            come_call_finalizer2(sType_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result101__;
            come_call_finalizer2(sType_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional109;
struct list$1sTypeph* __result85__;
void* right_value128;
void* right_value129;
struct list$1sTypeph* result_99;
struct list_item$1sTypeph* it_100;
_Bool _while_condtional11;
void* right_value133;
struct list$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&result_99, 0, sizeof(struct list$1sTypeph*));
memset(&it_100, 0, sizeof(struct list_item$1sTypeph*));
right_value133 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional109=self==((void*)0),                    _if_conditional109) {
                        # 140 "./neo-c.h"
                        __result85__ = __result_obj__ = ((void*)0);
                        return __result85__;
                    }
                    # 142 "./neo-c.h"
                    result_99=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_100=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional11=it_100!=((void*)0),                    _while_condtional11) {
                        # 146 "./neo-c.h"
                        list$1sTypeph_add(result_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(it_100->item)))));
                        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_100=it_100->next;
                    }
                    # 151 "./neo-c.h"
                    __result88__ = __result_obj__ = result_99;
                    come_call_finalizer2(list$1sTypephp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result86__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional110;
void* right_value130;
struct list_item$1sTypeph* litem_101;
struct sType* __dec_obj12;
_Bool _if_conditional111;
void* right_value131;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj13;
void* right_value132;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj14;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional110=self->len==0,                            _if_conditional110) {
                                # 156 "./neo-c.h"
                                litem_101=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_101->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_101->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj12=litem_101->item;
                                litem_101->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_101;
                                # 163 "./neo-c.h"
                                self->head=litem_101;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional111=self->len==1,                                _if_conditional111) {
                                    # 166 "./neo-c.h"
                                    litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_102->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_102->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj13=litem_102->item;
                                    litem_102->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_102;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_102;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_103->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_103->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj14=litem_103->item;
                                    litem_103->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_103;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_103;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result87__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result87__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct tuple1$1sTypeph* __result89__;
void* right_value135;
struct tuple1$1sTypeph* result_104;
_Bool _if_conditional115;
void* right_value136;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_104, 0, sizeof(struct tuple1$1sTypeph*));
right_value136 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional113=self==(void*)0,                    _if_conditional113) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result89__ = __result_obj__ = (void*)0;
                        return __result89__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_104=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional115=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional115) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj16=result_104->v1;
                        result_104->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result90__ = __result_obj__ = result_104;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional114=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional114) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional120;
struct list$1sNodeph* __result91__;
void* right_value141;
void* right_value142;
struct list$1sNodeph* result_105;
struct list_item$1sNodeph* it_106;
_Bool _while_condtional12;
void* right_value147;
struct list$1sNodeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_105, 0, sizeof(struct list$1sNodeph*));
memset(&it_106, 0, sizeof(struct list_item$1sNodeph*));
right_value147 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional120=self==((void*)0),                    _if_conditional120) {
                        # 140 "./neo-c.h"
                        __result91__ = __result_obj__ = ((void*)0);
                        return __result91__;
                    }
                    # 142 "./neo-c.h"
                    result_105=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_106=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional12=it_106!=((void*)0),                    _while_condtional12) {
                        # 146 "./neo-c.h"
                        list$1sNodeph_add(result_105,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(it_106->item)))));
                        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./neo-c.h"
                        it_106=it_106->next;
                    }
                    # 151 "./neo-c.h"
                    __result96__ = __result_obj__ = result_105;
                    come_call_finalizer2(list$1sNodephp_finalize,result_105, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result96__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result92__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result92__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value143;
struct list_item$1sNodeph* litem_107;
struct sNode* __dec_obj21;
_Bool _if_conditional122;
void* right_value144;
struct list_item$1sNodeph* litem_108;
struct sNode* __dec_obj22;
void* right_value145;
struct list_item$1sNodeph* litem_109;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional121=self->len==0,                            _if_conditional121) {
                                # 156 "./neo-c.h"
                                litem_107=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_107->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_107->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj21=litem_107->item;
                                litem_107->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./neo-c.h"
                                self->tail=litem_107;
                                # 163 "./neo-c.h"
                                self->head=litem_107;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional122=self->len==1,                                _if_conditional122) {
                                    # 166 "./neo-c.h"
                                    litem_108=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_108->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_108->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj22=litem_108->item;
                                    litem_108->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./neo-c.h"
                                    self->tail=litem_108;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_108;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_109=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_109->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_109->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj23=litem_109->item;
                                    litem_109->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_109;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_109;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result93__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result93__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional123;
struct sNode* __result94__;
void* right_value146;
struct sNode* result_110;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&result_110, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional123=self==(void*)0,                            _if_conditional123) {
                                # 2 "sNode_clone"
                                __result94__ = __result_obj__ = (void*)0;
                                return __result94__;
                            }
                            # 3 "sNode_clone"
                            result_110=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional124=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional124) {
                                # 4 "sNode_clone"
                                result_110->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional125=self!=((void*)0),                            _if_conditional125) {
                                # 5 "sNode_clone"
                                result_110->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional126=self!=((void*)0),                            _if_conditional126) {
                                # 6 "sNode_clone"
                                result_110->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional127=self!=((void*)0),                            _if_conditional127) {
                                # 7 "sNode_clone"
                                result_110->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional128=self!=((void*)0),                            _if_conditional128) {
                                # 8 "sNode_clone"
                                result_110->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional129=self!=((void*)0),                            _if_conditional129) {
                                # 9 "sNode_clone"
                                result_110->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional130=self!=((void*)0),                            _if_conditional130) {
                                # 10 "sNode_clone"
                                result_110->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional131=self!=((void*)0),                            _if_conditional131) {
                                # 11 "sNode_clone"
                                result_110->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result95__ = __result_obj__ = result_110;
                            if(result_110) { result_110 = come_decrement_ref_count2(result_110, ((struct sNode*)result_110)->finalize, ((struct sNode*)result_110)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result95__;
                            if(result_110) { result_110 = come_decrement_ref_count2(result_110, ((struct sNode*)result_110)->finalize, ((struct sNode*)result_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional135;
struct list$1charph* __result97__;
void* right_value150;
void* right_value151;
struct list$1charph* result_111;
struct list_item$1charph* it_112;
_Bool _while_condtional13;
void* right_value155;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_111, 0, sizeof(struct list$1charph*));
memset(&it_112, 0, sizeof(struct list_item$1charph*));
right_value155 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional135=self==((void*)0),                    _if_conditional135) {
                        # 140 "./neo-c.h"
                        __result97__ = __result_obj__ = ((void*)0);
                        return __result97__;
                    }
                    # 142 "./neo-c.h"
                    result_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_112=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional13=it_112!=((void*)0),                    _while_condtional13) {
                        # 146 "./neo-c.h"
                        list$1charph_add(result_111,(char*)come_increment_ref_count(((char*)(right_value155=string_clone(it_112->item)))));
                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_112=it_112->next;
                    }
                    # 151 "./neo-c.h"
                    __result100__ = __result_obj__ = result_111;
                    come_call_finalizer2(list$1charphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result100__;
                    come_call_finalizer2(list$1charphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result98__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional136;
void* right_value152;
struct list_item$1charph* litem_113;
char* __dec_obj26;
_Bool _if_conditional137;
void* right_value153;
struct list_item$1charph* litem_114;
char* __dec_obj27;
void* right_value154;
struct list_item$1charph* litem_115;
char* __dec_obj28;
struct list$1charph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional136=self->len==0,                            _if_conditional136) {
                                # 156 "./neo-c.h"
                                litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_113->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_113->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj26=litem_113->item;
                                litem_113->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_113;
                                # 163 "./neo-c.h"
                                self->head=litem_113;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional137=self->len==1,                                _if_conditional137) {
                                    # 166 "./neo-c.h"
                                    litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_114->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_114->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj27=litem_114->item;
                                    litem_114->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_114;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_114;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value154=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_115->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_115->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj28=litem_115->item;
                                    litem_115->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_115;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_115;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result99__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result99__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
struct sType* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
            # 677 "./neo-c.h"
            list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
            # 679 "./neo-c.h"
            __result105__ = __result_obj__ = item;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result105__;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list$1sTypeph* __result103__;
struct list_item$1sTypeph* it_122;
int i_123;
_Bool _while_condtional14;
_Bool _if_conditional184;
struct sType* __dec_obj40;
struct list$1sTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_123, 0, sizeof(int));
                # 592 "./neo-c.h"
                # 588 "./neo-c.h"
                if(_if_conditional180=position<0,                _if_conditional180) {
                    # 589 "./neo-c.h"
                    position+=self->len;
                }
                # 597 "./neo-c.h"
                # 592 "./neo-c.h"
                if(_if_conditional181=position>=self->len,                _if_conditional181) {
                    # 593 "./neo-c.h"
                    list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
                    # 594 "./neo-c.h"
                    __result103__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                }
                # 597 "./neo-c.h"
                it_122=self->head;
                # 598 "./neo-c.h"
                i_123=0;
                # 608 "./neo-c.h"
                while(_while_condtional14=it_122!=((void*)0),                _while_condtional14) {
                    # 604 "./neo-c.h"
                    # 600 "./neo-c.h"
                    if(_if_conditional184=position==i_123,                    _if_conditional184) {
                        # 601 "./neo-c.h"
                        __dec_obj40=it_122->item;
                        it_122->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 602 "./neo-c.h"
                        break;
                    }
                    # 604 "./neo-c.h"
                    it_122=it_122->next;
                    # 605 "./neo-c.h"
                    i_123++;
                }
                # 608 "./neo-c.h"
                __result104__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result104__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional182;
void* right_value165;
struct list_item$1sTypeph* litem_119;
struct sType* __dec_obj37;
_Bool _if_conditional183;
void* right_value166;
struct list_item$1sTypeph* litem_120;
struct sType* __dec_obj38;
void* right_value167;
struct list_item$1sTypeph* litem_121;
struct sType* __dec_obj39;
struct list$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1sTypeph*));
right_value166 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1sTypeph*));
right_value167 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1sTypeph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional182=self->len==0,                        _if_conditional182) {
                            # 226 "./neo-c.h"
                            litem_119=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_119->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_119->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj37=litem_119->item;
                            litem_119->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 232 "./neo-c.h"
                            self->tail=litem_119;
                            # 233 "./neo-c.h"
                            self->head=litem_119;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional183=self->len==1,                            _if_conditional183) {
                                # 236 "./neo-c.h"
                                litem_120=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value166=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_120->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_120->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj38=litem_120->item;
                                litem_120->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 242 "./neo-c.h"
                                self->tail=litem_120;
                                # 243 "./neo-c.h"
                                self->head->next=litem_120;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_121=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value167=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_121->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_121->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj39=litem_121->item;
                                litem_121->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 252 "./neo-c.h"
                                self->tail->next=litem_121;
                                # 253 "./neo-c.h"
                                self->tail=litem_121;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result102__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value168;
struct sType* no_solved_type_124;
void* right_value169;
void* right_value170;
struct buffer* buf_125;
char* class_name_126;
_Bool _if_conditional185;
int i_127;
struct sType* gtype_128;
void* right_value171;
_Bool _if_conditional186;
_Bool _if_conditional187;
int i_129;
_Bool _if_conditional188;
int i_130;
_Bool _if_conditional189;
void* right_value172;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&no_solved_type_124, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&buf_125, 0, sizeof(struct buffer*));
memset(&class_name_126, 0, sizeof(char*));
memset(&i_127, 0, sizeof(int));
memset(&gtype_128, 0, sizeof(struct sType*));
right_value171 = (void*)0;
memset(&i_129, 0, sizeof(int));
memset(&i_130, 0, sizeof(int));
right_value172 = (void*)0;
    # 366 "03transpile2.c"
    no_solved_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=get_no_solved_type(type))));
    come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 368 "03transpile2.c"
    buf_125=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 368, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 370 "03transpile2.c"
    class_name_126=no_solved_type_124->mClass->mName;
    # 372 "03transpile2.c"
    buffer_append_str(buf_125,class_name_126);
    # 389 "03transpile2.c"
    # 374 "03transpile2.c"
    if(_if_conditional185=list$1sTypeph_length(no_solved_type_124->mGenericsTypes)>0,    _if_conditional185) {
        # 375 "03transpile2.c"
        buffer_append_str(buf_125,"<");
        # 386 "03transpile2.c"
        for(        i_127=0;        i_127<list$1sTypeph_length(no_solved_type_124->mGenericsTypes);        i_127++        ){
            # 377 "03transpile2.c"
            gtype_128=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(no_solved_type_124->mGenericsTypes,i_127), "03transpile2.c", 377, 1));
            # 379 "03transpile2.c"
            buffer_append_str(buf_125,((char*)(right_value171=make_come_type_name_string_no_solved(gtype_128,info))));
            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 384 "03transpile2.c"
            # 381 "03transpile2.c"
            if(_if_conditional186=i_127!=list$1sTypeph_length(no_solved_type_124->mGenericsTypes)-1,            _if_conditional186) {
                # 382 "03transpile2.c"
                buffer_append_str(buf_125,",");
            }
        }
        # 386 "03transpile2.c"
        buffer_append_str(buf_125,">");
    }
    # 395 "03transpile2.c"
    # 389 "03transpile2.c"
    if(_if_conditional187=no_solved_type_124->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_126,"lambda"),    _if_conditional187) {
        # 393 "03transpile2.c"
        for(        i_129=0;        i_129<no_solved_type_124->mPointerNum;        i_129++        ){
            # 391 "03transpile2.c"
            buffer_append_str(buf_125,"*");
        }
    }
    # 401 "03transpile2.c"
    # 395 "03transpile2.c"
    if(_if_conditional188=list$1sNodeph_length(no_solved_type_124->mArrayNum)>0,    _if_conditional188) {
        # 399 "03transpile2.c"
        for(        i_130=0;        i_130<list$1sNodeph_length(no_solved_type_124->mArrayNum);        i_130++        ){
            # 397 "03transpile2.c"
            buffer_append_str(buf_125,"[]");
        }
    }
    # 405 "03transpile2.c"
    # 401 "03transpile2.c"
    if(no_solved_type_124->mHeap) {
        # 402 "03transpile2.c"
        buffer_append_str(buf_125,"%");
    }
    # 405 "03transpile2.c"
    __result107__ = __result_obj__ = ((char*)(right_value172=buffer_to_string(buf_125)));
    come_call_finalizer2(sType_finalize,no_solved_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
    come_call_finalizer2(sType_finalize,no_solved_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* type_name_131;
void* right_value174;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&type_name_131, 0, sizeof(char*));
right_value174 = (void*)0;
    # 410 "03transpile2.c"
    type_name_131=(char*)come_increment_ref_count(((char*)(right_value173=make_come_type_name_string_no_solved(type,info))));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 412 "03transpile2.c"
    __result108__ = __result_obj__ = ((char*)(right_value174=xsprintf("%s %s",type_name_131,name)));
    type_name_131 = come_decrement_ref_count2(type_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    type_name_131 = come_decrement_ref_count2(type_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value175;
void* right_value176;
struct buffer* output_132;
_Bool _if_conditional190;
void* right_value177;
void* right_value178;
struct buffer* output2_133;
int i_134;
struct list$1sTypeph* o2_saved_135;
struct sType* it_136;
char* name_140;
void* right_value179;
char* str_141;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value180;
void* right_value181;
char* str_142;
void* right_value182;
_Bool _if_conditional195;
void* right_value183;
struct sType* base_result_type_143;
void* right_value184;
void* right_value185;
struct list$1sNodeph* __dec_obj41;
void* right_value186;
char* result_type_str_144;
int i_145;
struct list$1sTypeph* o2_saved_146;
struct sType* it_147;
char* name_148;
void* right_value187;
char* str_149;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sNode* node_153;
_Bool _if_conditional200;
void* right_value188;
char* __result113__;
void* right_value189;
struct CVALUE* cvalue_154;
void* right_value190;
void* right_value191;
void* right_value192;
char* result_type_str_155;
int i_156;
struct list$1sTypeph* o2_saved_157;
struct sType* it_158;
char* name_159;
void* right_value193;
char* str_160;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&output_132, 0, sizeof(struct buffer*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&output2_133, 0, sizeof(struct buffer*));
memset(&i_134, 0, sizeof(int));
memset(&o2_saved_135, 0, sizeof(struct list$1sTypeph*));
memset(&it_136, 0, sizeof(struct sType*));
memset(&name_140, 0, sizeof(char*));
right_value179 = (void*)0;
memset(&str_141, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_142, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&base_result_type_143, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&result_type_str_144, 0, sizeof(char*));
memset(&i_145, 0, sizeof(int));
memset(&o2_saved_146, 0, sizeof(struct list$1sTypeph*));
memset(&it_147, 0, sizeof(struct sType*));
memset(&name_148, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&str_149, 0, sizeof(char*));
memset(&node_153, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&cvalue_154, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&result_type_str_155, 0, sizeof(char*));
memset(&i_156, 0, sizeof(int));
memset(&o2_saved_157, 0, sizeof(struct list$1sTypeph*));
memset(&it_158, 0, sizeof(struct sType*));
memset(&name_159, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&str_160, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
    # 417 "03transpile2.c"
    output_132=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 417, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 531 "03transpile2.c"
    # 418 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 419 "03transpile2.c"
        output2_133=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value178=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 419, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 421 "03transpile2.c"
        buffer_append_str(output2_133,fun->mName);
        # 422 "03transpile2.c"
        buffer_append_str(output2_133,"(");
        # 424 "03transpile2.c"
        i_134=0;
        # 442 "03transpile2.c"
        for(        o2_saved_135=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_136=list$1sTypeph_begin((o2_saved_135));        !list$1sTypeph_end((o2_saved_135));        it_136=list$1sTypeph_next((o2_saved_135))        ){
            # 426 "03transpile2.c"
            name_140=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_134), "03transpile2.c", 426, 2));
            # 428 "03transpile2.c"
            str_141=(char*)come_increment_ref_count(((char*)(right_value179=make_define_var(it_136,name_140,(_Bool)0,info))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 429 "03transpile2.c"
            buffer_append_str(output2_133,str_141);
            # 440 "03transpile2.c"
            # 431 "03transpile2.c"
            if(_if_conditional193=i_134==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional193) {
                # 435 "03transpile2.c"
                # 432 "03transpile2.c"
                if(fun->mVarArgs) {
                    # 433 "03transpile2.c"
                    buffer_append_str(output2_133,", ...");
                }
            }
            else {
                # 437 "03transpile2.c"
                buffer_append_str(output2_133,", ");
            }
            # 440 "03transpile2.c"
            i_134++;
            str_141 = come_decrement_ref_count2(str_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 442 "03transpile2.c"
        buffer_append_str(output2_133,")");
        # 444 "03transpile2.c"
        str_142=(char*)come_increment_ref_count(((char*)(right_value181=make_lambda_type_name_string(fun->mResultType,((char*)(right_value180=buffer_to_string(output2_133))),info))));
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 446 "03transpile2.c"
        buffer_append_str(output_132,str_142);
        # 450 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value182=buffer_to_string(output_132))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 451 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_142 = come_decrement_ref_count2(str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 531 "03transpile2.c"
        # 453 "03transpile2.c"
        if(_if_conditional195=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional195) {
            # 454 "03transpile2.c"
            base_result_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 455 "03transpile2.c"
            __dec_obj41=base_result_type_143->mArrayNum;
            base_result_type_143->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value185=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value184=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 455, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 457 "03transpile2.c"
            result_type_str_144=(char*)come_increment_ref_count(((char*)(right_value186=make_type_name_string(base_result_type_143,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 459 "03transpile2.c"
            buffer_append_str(output_132,result_type_str_144);
            # 460 "03transpile2.c"
            buffer_append_str(output_132," (*");
            # 462 "03transpile2.c"
            buffer_append_str(output_132,fun->mName);
            # 463 "03transpile2.c"
            buffer_append_str(output_132,"(");
            # 465 "03transpile2.c"
            i_145=0;
            # 484 "03transpile2.c"
            for(            o2_saved_146=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_147=list$1sTypeph_begin((o2_saved_146));            !list$1sTypeph_end((o2_saved_146));            it_147=list$1sTypeph_next((o2_saved_146))            ){
                # 467 "03transpile2.c"
                name_148=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_145), "03transpile2.c", 467, 3));
                # 469 "03transpile2.c"
                str_149=(char*)come_increment_ref_count(((char*)(right_value187=make_define_var(it_147,name_148,(_Bool)0,info))));
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 470 "03transpile2.c"
                buffer_append_str(output_132,str_149);
                # 481 "03transpile2.c"
                # 472 "03transpile2.c"
                if(_if_conditional196=i_145==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional196) {
                    # 476 "03transpile2.c"
                    # 473 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 474 "03transpile2.c"
                        buffer_append_str(output_132,", ...");
                    }
                }
                else {
                    # 478 "03transpile2.c"
                    buffer_append_str(output_132,", ");
                }
                # 481 "03transpile2.c"
                i_145++;
                str_149 = come_decrement_ref_count2(str_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 484 "03transpile2.c"
            node_153=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 484, 4));
            # 490 "03transpile2.c"
            # 486 "03transpile2.c"
            if(_if_conditional200=!node_compile(node_153,info),            _if_conditional200) {
                # 487 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 488 "03transpile2.c"
                __result113__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_144 = come_decrement_ref_count2(result_type_str_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result113__;
            }
            # 490 "03transpile2.c"
            cvalue_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 491 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 493 "03transpile2.c"
            buffer_append_str(output_132,((char*)(right_value190=xsprintf("))[%s]",cvalue_154->c_value))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 495 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value191=buffer_to_string(output_132))));
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 496 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_144 = come_decrement_ref_count2(result_type_str_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 499 "03transpile2.c"
            result_type_str_155=(char*)come_increment_ref_count(((char*)(right_value192=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 501 "03transpile2.c"
            buffer_append_str(output_132,result_type_str_155);
            # 502 "03transpile2.c"
            buffer_append_str(output_132," ");
            # 504 "03transpile2.c"
            buffer_append_str(output_132,fun->mName);
            # 505 "03transpile2.c"
            buffer_append_str(output_132,"(");
            # 507 "03transpile2.c"
            i_156=0;
            # 525 "03transpile2.c"
            for(            o2_saved_157=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_158=list$1sTypeph_begin((o2_saved_157));            !list$1sTypeph_end((o2_saved_157));            it_158=list$1sTypeph_next((o2_saved_157))            ){
                # 509 "03transpile2.c"
                name_159=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_156), "03transpile2.c", 509, 5));
                # 511 "03transpile2.c"
                str_160=(char*)come_increment_ref_count(((char*)(right_value193=make_define_var(it_158,name_159,(_Bool)0,info))));
                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 512 "03transpile2.c"
                buffer_append_str(output_132,str_160);
                # 522 "03transpile2.c"
                # 514 "03transpile2.c"
                if(_if_conditional201=i_156==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional201) {
                    # 518 "03transpile2.c"
                    # 515 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 516 "03transpile2.c"
                        buffer_append_str(output_132,", ...");
                    }
                }
                else {
                    # 520 "03transpile2.c"
                    buffer_append_str(output_132,", ");
                }
                # 522 "03transpile2.c"
                i_156++;
                str_160 = come_decrement_ref_count2(str_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 525 "03transpile2.c"
            buffer_append_str(output_132,")");
            # 527 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value194=buffer_to_string(output_132))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 528 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_155 = come_decrement_ref_count2(result_type_str_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 531 "03transpile2.c"
    buffer_append_str(output_132,"{\n");
    # 533 "03transpile2.c"
    buffer_append_str(output_132,((char*)(right_value195=buffer_to_string(fun->mSourceHead))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 534 "03transpile2.c"
    buffer_append_str(output_132,((char*)(right_value196=buffer_to_string(fun->mSourceHead2))));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 535 "03transpile2.c"
    buffer_append_str(output_132,((char*)(right_value197=buffer_to_string(fun->mSource))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 537 "03transpile2.c"
    buffer_append_str(output_132,"}\n");
    # 539 "03transpile2.c"
    __result114__ = __result_obj__ = ((char*)(right_value198=buffer_to_string(output_132)));
    come_call_finalizer2(buffer_finalize,output_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    come_call_finalizer2(buffer_finalize,output_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional191;
struct list_item$1charph* it_137;
int i_138;
_Bool _while_condtional15;
_Bool _if_conditional192;
char* __result109__;
char* default_value_139;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1charph*));
memset(&i_138, 0, sizeof(int));
memset(&default_value_139, 0, sizeof(char*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional191=position<0,                _if_conditional191) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_137=self->head;
                # 687 "./neo-c.h"
                i_138=0;
                # 694 "./neo-c.h"
                while(_while_condtional15=it_137!=((void*)0),                _while_condtional15) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional192=position==i_138,                    _if_conditional192) {
                        # 690 "./neo-c.h"
                        __result109__ = __result_obj__ = it_137->item;
                        return __result109__;
                    }
                    # 692 "./neo-c.h"
                    it_137=it_137->next;
                    # 693 "./neo-c.h"
                    i_138++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_139,0,sizeof(char*));
                # 698 "./neo-c.h"
                __result110__ = __result_obj__ = default_value_139;
                default_value_139 = come_decrement_ref_count2(default_value_139, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result110__;
                default_value_139 = come_decrement_ref_count2(default_value_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional198;
struct list_item$1sNodeph* it_150;
int i_151;
_Bool _while_condtional16;
_Bool _if_conditional199;
struct sNode* __result111__;
struct sNode* default_value_152;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_150, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_151, 0, sizeof(int));
memset(&default_value_152, 0, sizeof(struct sNode*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional198=position<0,                _if_conditional198) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_150=self->head;
                # 687 "./neo-c.h"
                i_151=0;
                # 694 "./neo-c.h"
                while(_while_condtional16=it_150!=((void*)0),                _while_condtional16) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional199=position==i_151,                    _if_conditional199) {
                        # 690 "./neo-c.h"
                        __result111__ = __result_obj__ = it_150->item;
                        return __result111__;
                    }
                    # 692 "./neo-c.h"
                    it_150=it_150->next;
                    # 693 "./neo-c.h"
                    i_151++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_152,0,sizeof(struct sNode*));
                # 698 "./neo-c.h"
                __result112__ = __result_obj__ = default_value_152;
                if(default_value_152) { default_value_152 = come_decrement_ref_count2(default_value_152, ((struct sNode*)default_value_152)->finalize, ((struct sNode*)default_value_152)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result112__;
                if(default_value_152) { default_value_152 = come_decrement_ref_count2(default_value_152, ((struct sNode*)default_value_152)->finalize, ((struct sNode*)default_value_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value199;
void* right_value200;
struct buffer* output_161;
_Bool _if_conditional203;
void* right_value201;
void* right_value202;
struct buffer* output2_162;
int i_163;
struct list$1sTypeph* o2_saved_164;
struct sType* it_165;
char* name_166;
void* right_value203;
char* str_167;
_Bool _if_conditional204;
void* right_value204;
void* right_value205;
char* str_168;
_Bool _if_conditional205;
void* right_value206;
struct sType* base_result_type_169;
void* right_value207;
void* right_value208;
struct list$1sNodeph* __dec_obj42;
void* right_value209;
char* result_type_str_170;
int i_171;
struct list$1sTypeph* o2_saved_172;
struct sType* it_173;
char* name_174;
void* right_value210;
char* str_175;
_Bool _if_conditional206;
_Bool _if_conditional207;
struct sNode* node_176;
_Bool _if_conditional208;
void* right_value211;
char* __result115__;
void* right_value212;
struct CVALUE* cvalue_177;
void* right_value213;
void* right_value214;
char* result_type_str_178;
int i_179;
struct list$1sTypeph* o2_saved_180;
struct sType* it_181;
char* name_182;
void* right_value215;
char* str_183;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value216;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&output_161, 0, sizeof(struct buffer*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&output2_162, 0, sizeof(struct buffer*));
memset(&i_163, 0, sizeof(int));
memset(&o2_saved_164, 0, sizeof(struct list$1sTypeph*));
memset(&it_165, 0, sizeof(struct sType*));
memset(&name_166, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&str_167, 0, sizeof(char*));
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&str_168, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&base_result_type_169, 0, sizeof(struct sType*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_type_str_170, 0, sizeof(char*));
memset(&i_171, 0, sizeof(int));
memset(&o2_saved_172, 0, sizeof(struct list$1sTypeph*));
memset(&it_173, 0, sizeof(struct sType*));
memset(&name_174, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&str_175, 0, sizeof(char*));
memset(&node_176, 0, sizeof(struct sNode*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&cvalue_177, 0, sizeof(struct CVALUE*));
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&result_type_str_178, 0, sizeof(char*));
memset(&i_179, 0, sizeof(int));
memset(&o2_saved_180, 0, sizeof(struct list$1sTypeph*));
memset(&it_181, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
right_value215 = (void*)0;
memset(&str_183, 0, sizeof(char*));
right_value216 = (void*)0;
    # 544 "03transpile2.c"
    output_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 544, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 641 "03transpile2.c"
    # 546 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 547 "03transpile2.c"
        output2_162=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 547, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 549 "03transpile2.c"
        buffer_append_str(output2_162,fun->mName);
        # 550 "03transpile2.c"
        buffer_append_str(output2_162,"(");
        # 552 "03transpile2.c"
        i_163=0;
        # 564 "03transpile2.c"
        for(        o2_saved_164=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_165=list$1sTypeph_begin((o2_saved_164));        !list$1sTypeph_end((o2_saved_164));        it_165=list$1sTypeph_next((o2_saved_164))        ){
            # 554 "03transpile2.c"
            name_166=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_163), "03transpile2.c", 554, 6));
            # 556 "03transpile2.c"
            str_167=(char*)come_increment_ref_count(((char*)(right_value203=make_define_var(it_165,name_166,(_Bool)0,info))));
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 557 "03transpile2.c"
            buffer_append_str(output2_162,str_167);
            # 562 "03transpile2.c"
            # 559 "03transpile2.c"
            if(_if_conditional204=i_163!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional204) {
                # 560 "03transpile2.c"
                buffer_append_str(output2_162,", ");
            }
            # 562 "03transpile2.c"
            i_163++;
            str_167 = come_decrement_ref_count2(str_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 564 "03transpile2.c"
        buffer_append_str(output2_162,")");
        # 566 "03transpile2.c"
        str_168=(char*)come_increment_ref_count(((char*)(right_value205=make_lambda_type_name_string(fun->mResultType,((char*)(right_value204=buffer_to_string(output2_162))),info))));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 568 "03transpile2.c"
        buffer_append_str(output_161,str_168);
        # 569 "03transpile2.c"
        buffer_append_str(output_161,";\n");
        come_call_finalizer2(buffer_finalize,output2_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_168 = come_decrement_ref_count2(str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 641 "03transpile2.c"
        # 571 "03transpile2.c"
        if(_if_conditional205=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional205) {
            # 572 "03transpile2.c"
            base_result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 573 "03transpile2.c"
            __dec_obj42=base_result_type_169->mArrayNum;
            base_result_type_169->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value208=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value207=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 573, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 575 "03transpile2.c"
            result_type_str_170=(char*)come_increment_ref_count(((char*)(right_value209=make_type_name_string(base_result_type_169,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 577 "03transpile2.c"
            buffer_append_str(output_161,result_type_str_170);
            # 578 "03transpile2.c"
            buffer_append_str(output_161," (*");
            # 580 "03transpile2.c"
            buffer_append_str(output_161,fun->mName);
            # 581 "03transpile2.c"
            buffer_append_str(output_161,"(");
            # 583 "03transpile2.c"
            i_171=0;
            # 601 "03transpile2.c"
            for(            o2_saved_172=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_173=list$1sTypeph_begin((o2_saved_172));            !list$1sTypeph_end((o2_saved_172));            it_173=list$1sTypeph_next((o2_saved_172))            ){
                # 585 "03transpile2.c"
                name_174=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_171), "03transpile2.c", 585, 7));
                # 587 "03transpile2.c"
                str_175=(char*)come_increment_ref_count(((char*)(right_value210=make_define_var(it_173,name_174,(_Bool)0,info))));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 588 "03transpile2.c"
                buffer_append_str(output_161,str_175);
                # 598 "03transpile2.c"
                # 590 "03transpile2.c"
                if(_if_conditional206=i_171==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional206) {
                    # 594 "03transpile2.c"
                    # 591 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 592 "03transpile2.c"
                        buffer_append_str(output_161,", ...");
                    }
                }
                else {
                    # 596 "03transpile2.c"
                    buffer_append_str(output_161,", ");
                }
                # 598 "03transpile2.c"
                i_171++;
                str_175 = come_decrement_ref_count2(str_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 601 "03transpile2.c"
            node_176=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 601, 8));
            # 606 "03transpile2.c"
            # 602 "03transpile2.c"
            if(_if_conditional208=!node_compile(node_176,info),            _if_conditional208) {
                # 603 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 604 "03transpile2.c"
                __result115__ = __result_obj__ = ((char*)(right_value211=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_170 = come_decrement_ref_count2(result_type_str_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result115__;
            }
            # 606 "03transpile2.c"
            cvalue_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 607 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 609 "03transpile2.c"
            buffer_append_str(output_161,((char*)(right_value213=xsprintf("))[%s];\n",cvalue_177->c_value))));
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_170 = come_decrement_ref_count2(result_type_str_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 612 "03transpile2.c"
            result_type_str_178=(char*)come_increment_ref_count(((char*)(right_value214=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 614 "03transpile2.c"
            buffer_append_str(output_161,result_type_str_178);
            # 615 "03transpile2.c"
            buffer_append_str(output_161," ");
            # 617 "03transpile2.c"
            buffer_append_str(output_161,fun->mName);
            # 618 "03transpile2.c"
            buffer_append_str(output_161,"(");
            # 620 "03transpile2.c"
            i_179=0;
            # 638 "03transpile2.c"
            for(            o2_saved_180=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_181=list$1sTypeph_begin((o2_saved_180));            !list$1sTypeph_end((o2_saved_180));            it_181=list$1sTypeph_next((o2_saved_180))            ){
                # 622 "03transpile2.c"
                name_182=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_179), "03transpile2.c", 622, 9));
                # 624 "03transpile2.c"
                str_183=(char*)come_increment_ref_count(((char*)(right_value215=make_define_var(it_181,name_182,(_Bool)0,info))));
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 625 "03transpile2.c"
                buffer_append_str(output_161,str_183);
                # 635 "03transpile2.c"
                # 627 "03transpile2.c"
                if(_if_conditional209=i_179==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional209) {
                    # 631 "03transpile2.c"
                    # 628 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 629 "03transpile2.c"
                        buffer_append_str(output_161,", ...");
                    }
                }
                else {
                    # 633 "03transpile2.c"
                    buffer_append_str(output_161,", ");
                }
                # 635 "03transpile2.c"
                i_179++;
                str_183 = come_decrement_ref_count2(str_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 638 "03transpile2.c"
            buffer_append_str(output_161,");\n");
            result_type_str_178 = come_decrement_ref_count2(result_type_str_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 641 "03transpile2.c"
    __result116__ = __result_obj__ = ((char*)(right_value216=buffer_to_string(output_161)));
    come_call_finalizer2(buffer_finalize,output_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
    come_call_finalizer2(buffer_finalize,output_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value217;
void* right_value218;
struct buffer* output_184;
void* right_value219;
char* result_type_str_185;
int i_186;
struct list$1sTypeph* o2_saved_187;
struct sType* it_188;
char* name_189;
void* right_value220;
char* str_190;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value221;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&output_184, 0, sizeof(struct buffer*));
right_value219 = (void*)0;
memset(&result_type_str_185, 0, sizeof(char*));
memset(&i_186, 0, sizeof(int));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_188, 0, sizeof(struct sType*));
memset(&name_189, 0, sizeof(char*));
right_value220 = (void*)0;
memset(&str_190, 0, sizeof(char*));
right_value221 = (void*)0;
    # 646 "03transpile2.c"
    output_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 646, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 648 "03transpile2.c"
    result_type_str_185=(char*)come_increment_ref_count(((char*)(right_value219=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 650 "03transpile2.c"
    buffer_append_str(output_184,result_type_str_185);
    # 651 "03transpile2.c"
    buffer_append_str(output_184," ");
    # 653 "03transpile2.c"
    buffer_append_str(output_184,name);
    # 654 "03transpile2.c"
    buffer_append_str(output_184,"(");
    # 656 "03transpile2.c"
    i_186=0;
    # 674 "03transpile2.c"
    for(    o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_188=list$1sTypeph_begin((o2_saved_187));    !list$1sTypeph_end((o2_saved_187));    it_188=list$1sTypeph_next((o2_saved_187))    ){
        # 658 "03transpile2.c"
        name_189=((char*)come_null_check(list$1charphp_operator_load_element(lambda_type->mParamNames,i_186), "03transpile2.c", 658, 10));
        # 660 "03transpile2.c"
        str_190=(char*)come_increment_ref_count(((char*)(right_value220=make_define_var(it_188,name_189,(_Bool)0,info))));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 661 "03transpile2.c"
        buffer_append_str(output_184,str_190);
        # 671 "03transpile2.c"
        # 663 "03transpile2.c"
        if(_if_conditional211=i_186==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional211) {
            # 667 "03transpile2.c"
            # 664 "03transpile2.c"
            if(lambda_type->mVarArgs) {
                # 665 "03transpile2.c"
                buffer_append_str(output_184,", ...");
            }
        }
        else {
            # 669 "03transpile2.c"
            buffer_append_str(output_184,", ");
        }
        # 671 "03transpile2.c"
        i_186++;
        str_190 = come_decrement_ref_count2(str_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 674 "03transpile2.c"
    buffer_append_str(output_184,");\n");
    # 676 "03transpile2.c"
    __result117__ = __result_obj__ = ((char*)(right_value221=buffer_to_string(output_184)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_185 = come_decrement_ref_count2(result_type_str_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_185 = come_decrement_ref_count2(result_type_str_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
char* msg2_191;
va_list args_192;
int len_193;
_Bool _if_conditional214;
int i_194;
void* right_value222;
void* right_value223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_191, 0, sizeof(char*));
memset(&args_192, 0, sizeof(va_list));
memset(&len_193, 0, sizeof(int));
memset(&i_194, 0, sizeof(int));
right_value222 = (void*)0;
right_value223 = (void*)0;
    # 685 "03transpile2.c"
    # 682 "03transpile2.c"
    if(info->no_output_come_code) {
        # 683 "03transpile2.c"
        return;
    }
    # 685 "03transpile2.c"
    # 687 "03transpile2.c"
    # 688 "03transpile2.c"
    __builtin_va_start(args_192,msg);
    # 689 "03transpile2.c"
    len_193=vasprintf(&msg2_191,msg,args_192);
    # 690 "03transpile2.c"
    __builtin_va_end(args_192);
    # 704 "03transpile2.c"
    # 692 "03transpile2.c"
    if(info->come_fun) {
        # 693 "03transpile2.c"
        # 698 "03transpile2.c"
        for(        i_194=0;        i_194<info->block_level;        i_194++        ){
            # 695 "03transpile2.c"
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        # 698 "03transpile2.c"
        buffer_append_str(info->come_fun->mSource,((char*)(right_value222=xsprintf("%s",msg2_191))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 701 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value223=xsprintf("%s",msg2_191))));
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 704 "03transpile2.c"
    free(msg2_191);
    come_call_finalizer2(va_list_finalize,(&args_192), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional215;
char* msg2_195;
va_list args_196;
int len_197;
void* right_value224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_195, 0, sizeof(char*));
memset(&args_196, 0, sizeof(va_list));
memset(&len_197, 0, sizeof(int));
right_value224 = (void*)0;
    # 712 "03transpile2.c"
    # 709 "03transpile2.c"
    if(info->no_output_come_code) {
        # 710 "03transpile2.c"
        return;
    }
    # 712 "03transpile2.c"
    # 714 "03transpile2.c"
    # 715 "03transpile2.c"
    __builtin_va_start(args_196,msg);
    # 716 "03transpile2.c"
    len_197=vasprintf(&msg2_195,msg,args_196);
    # 717 "03transpile2.c"
    __builtin_va_end(args_196);
    # 719 "03transpile2.c"
    buffer_append_str(info->module->mSourceHead,((char*)(right_value224=xsprintf("%s",msg2_195))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 721 "03transpile2.c"
    free(msg2_195);
    come_call_finalizer2(va_list_finalize,(&args_196), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional216;
_Bool _if_conditional217;
char* msg2_198;
va_list args_199;
int len_200;
void* right_value225;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_198, 0, sizeof(char*));
memset(&args_199, 0, sizeof(va_list));
memset(&len_200, 0, sizeof(int));
right_value225 = (void*)0;
    # 729 "03transpile2.c"
    # 726 "03transpile2.c"
    if(info->no_output_come_code) {
        # 727 "03transpile2.c"
        return;
    }
    # 741 "03transpile2.c"
    # 729 "03transpile2.c"
    if(_if_conditional217=string_operator_equals(info->sname,info->base_sname),    _if_conditional217) {
        # 730 "03transpile2.c"
        # 732 "03transpile2.c"
        # 733 "03transpile2.c"
        __builtin_va_start(args_199,msg);
        # 734 "03transpile2.c"
        len_200=vasprintf(&msg2_198,msg,args_199);
        # 735 "03transpile2.c"
        __builtin_va_end(args_199);
        # 737 "03transpile2.c"
        buffer_append_str(info->module->mHeader,((char*)(right_value225=xsprintf("%s",msg2_198))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 739 "03transpile2.c"
        free(msg2_198);
        come_call_finalizer2(va_list_finalize,(&args_199), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* name_201;
void* right_value227;
void* right_value228;
struct sType* result_type_202;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
struct sType* __list_values1___203[2];
void* right_value233;
void* right_value234;
struct list$1sTypeph* param_types_205;
void* right_value235;
void* right_value236;
char* __list_values2___206[2];
void* right_value240;
void* right_value241;
struct list$1charph* param_names_211;
void* right_value242;
void* right_value243;
struct list$1charph* param_default_parametors_212;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
struct sFun* main_fun_213;
void* right_value254;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
memset(&name_201, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&result_type_202, 0, sizeof(struct sType*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&param_types_205, 0, sizeof(struct list$1sTypeph*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&param_names_211, 0, sizeof(struct list$1charph*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&param_default_parametors_212, 0, sizeof(struct list$1charph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&main_fun_213, 0, sizeof(struct sFun*));
right_value254 = (void*)0;
    # 745 "03transpile2.c"
    name_201=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string("main"))));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 746 "03transpile2.c"
    result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 746, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 747 "03transpile2.c"
    {__list_values1___203[0]=come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 747, "sType")))),"int",(_Bool)0,info))));
__list_values1___203[1]=come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 747, "sType")))),"char**",(_Bool)0,info))));
}    param_types_205=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value234=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value233=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 747, "struct list$1sTypeph")))),2,__list_values1___203))));
    come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 748 "03transpile2.c"
    {__list_values2___206[0]=come_increment_ref_count(((char*)(right_value235=__builtin_string("argc"))));
__list_values2___206[1]=come_increment_ref_count(((char*)(right_value236=__builtin_string("argv"))));
}    param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value240=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 748, "struct list$1charph")))),2,__list_values2___206))));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 749 "03transpile2.c"
    param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 749, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 755 "03transpile2.c"
    main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value247=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value244=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 750, "sFun")))),(char*)come_increment_ref_count(name_201),(struct sType*)come_increment_ref_count(result_type_202),(struct list$1sTypeph*)come_increment_ref_count(param_types_205),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 757 "03transpile2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(name_201)))),(struct sFun*)come_increment_ref_count(main_fun_213));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 759 "03transpile2.c"
    add_come_code(info,"#include <stdio.h>\n");
    # 761 "03transpile2.c"
    info->come_fun=main_fun_213;
    # 763 "03transpile2.c"
    info->block_level++;
    # 764 "03transpile2.c"
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    # 765 "03transpile2.c"
    add_come_code(info,"return 0;\n");
    # 766 "03transpile2.c"
    info->block_level--;
    # 768 "03transpile2.c"
    __result145__ = 0;
    name_201 = come_decrement_ref_count2(name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    name_201 = come_decrement_ref_count2(name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_204;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_204, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_204=0;        i_204<num_value;        i_204++        ){
            # 117 "./neo-c.h"
            list$1sTypeph_push_back(self,values[i_204]);
        }
        # 120 "./neo-c.h"
        __result118__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result118__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_207;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_207, 0, sizeof(int));
        # 112 "./neo-c.h"
        self->head=((void*)0);
        # 113 "./neo-c.h"
        self->tail=((void*)0);
        # 114 "./neo-c.h"
        self->len=0;
        # 120 "./neo-c.h"
        for(        i_207=0;        i_207<num_value;        i_207++        ){
            # 117 "./neo-c.h"
            list$1charph_push_back(self,values[i_207]);
        }
        # 120 "./neo-c.h"
        __result120__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result120__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional218;
void* right_value237;
struct list_item$1charph* litem_208;
char* __dec_obj43;
_Bool _if_conditional219;
void* right_value238;
struct list_item$1charph* litem_209;
char* __dec_obj44;
void* right_value239;
struct list_item$1charph* litem_210;
char* __dec_obj45;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1charph*));
right_value238 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1charph*));
right_value239 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1charph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional218=self->len==0,                _if_conditional218) {
                    # 226 "./neo-c.h"
                    litem_208=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value237=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_208->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_208->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj43=litem_208->item;
                    litem_208->item=(char*)come_increment_ref_count(item);
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_208;
                    # 233 "./neo-c.h"
                    self->head=litem_208;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional219=self->len==1,                    _if_conditional219) {
                        # 236 "./neo-c.h"
                        litem_209=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value238=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_209->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_209->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj44=litem_209->item;
                        litem_209->item=(char*)come_increment_ref_count(item);
                        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_209;
                        # 243 "./neo-c.h"
                        self->head->next=litem_209;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_210=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value239=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_210->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_210->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj45=litem_210->item;
                        litem_210->item=(char*)come_increment_ref_count(item);
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_210;
                        # 253 "./neo-c.h"
                        self->tail=litem_210;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result119__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result119__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional220=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional220) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional221=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional221) {
            # 1 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional222=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional222) {
            # 2 "sFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional223=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional223) {
            # 3 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional224=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional224) {
            # 4 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional225=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional225) {
            # 5 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional226=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional226) {
            # 6 "sFun_finalize"
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional229=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional229) {
            # 7 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional230=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional230) {
            # 8 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional231=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional231) {
            # 9 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional232=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional232) {
            # 10 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional233=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional233) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional234=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional234) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional227=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional227) {
                    # 0 "sBlock_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional228=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional228) {
                    # 1 "sBlock_finalize"
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional235;
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional19;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool same_key_exist_249;
char* it2_252;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct map$2charphsFunph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
memset(&same_key_exist_249, 0, sizeof(_Bool));
memset(&it2_252, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional235=self->len*10>=self->size,        _if_conditional235) {
            # 1391 "./neo-c.h"
            map$2charphsFunph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_231=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_232=hash_231;
        # 1452 "./neo-c.h"
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional247=self->item_existance[it_232],            _if_conditional247) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional248=string_equals(self->keys[it_232],key),                _if_conditional248) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional249=1,                    _if_conditional249) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_232]);
                        # 1403 "./neo-c.h"
                        self->keys[it_232] = come_decrement_ref_count2(self->keys[it_232], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_232]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_232]);
                        # 1408 "./neo-c.h"
                        self->keys[it_232]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional269=1,                    _if_conditional269) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sFun_finalize,self->items[it_232], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_232]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_232]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_232++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional270=it_232>=self->size,                _if_conditional270) {
                    # 1423 "./neo-c.h"
                    it_232=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional271=it_232==hash_231,                    _if_conditional271) {
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
                self->item_existance[it_232]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional272=1,                _if_conditional272) {
                    # 1434 "./neo-c.h"
                    self->keys[it_232]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_232]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional273=1,                _if_conditional273) {
                    # 1440 "./neo-c.h"
                    self->items[it_232]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_232]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_249=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_252=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_252=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional278=string_equals(it2_252,key),            _if_conditional278) {
                # 1456 "./neo-c.h"
                same_key_exist_249=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional279=!same_key_exist_249,        _if_conditional279) {
            # 1461 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1464 "./neo-c.h"
        __result144__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result144__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_214;
void* right_value248;
char** keys_215;
void* right_value249;
struct sFun** items_216;
void* right_value250;
_Bool* item_existance_217;
int len_218;
char* it_221;
struct sFun* default_value_224;
struct sFun* it2_227;
unsigned int hash_228;
int n_229;
_Bool _while_condtional18;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sFun* default_value_230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_214, 0, sizeof(int));
right_value248 = (void*)0;
memset(&keys_215, 0, sizeof(char**));
right_value249 = (void*)0;
memset(&items_216, 0, sizeof(struct sFun**));
right_value250 = (void*)0;
memset(&item_existance_217, 0, sizeof(_Bool*));
memset(&len_218, 0, sizeof(int));
memset(&it_221, 0, sizeof(char*));
memset(&default_value_224, 0, sizeof(struct sFun*));
memset(&it2_227, 0, sizeof(struct sFun*));
memset(&hash_228, 0, sizeof(unsigned int));
memset(&n_229, 0, sizeof(int));
memset(&default_value_230, 0, sizeof(struct sFun*));
                # 1337 "./neo-c.h"
                size_214=self->size*10;
                # 1338 "./neo-c.h"
                keys_215=(char**)come_increment_ref_count(((char**)(right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_214)), "./neo-c.h", 1338, "char*%"))));
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_216=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value249=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_214)), "./neo-c.h", 1339, "sFun*%"))));
                come_call_finalizer2(sFun_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_217=(_Bool*)come_increment_ref_count(((_Bool*)(right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_214)), "./neo-c.h", 1340, "bool"))));
                right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_218=0;
                # 1377 "./neo-c.h"
                for(                it_221=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_221=map$2charphsFunph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_224,0,sizeof(struct sFun*));
                    # 1347 "./neo-c.h"
                    it2_227=map$2charphsFunph_at(self,it_221,default_value_224);
                    # 1348 "./neo-c.h"
                    hash_228=string_get_hash_key(it_221)%size_214;
                    # 1349 "./neo-c.h"
                    n_229=hash_228;
                    # 1375 "./neo-c.h"
                    while(_while_condtional18=(_Bool)1,                    _while_condtional18) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional244=item_existance_217[n_229],                        _if_conditional244) {
                            # 1354 "./neo-c.h"
                            n_229++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional245=n_229>=size_214,                            _if_conditional245) {
                                # 1357 "./neo-c.h"
                                n_229=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional246=n_229==hash_228,                                _if_conditional246) {
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
                            item_existance_217[n_229]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_215[n_229]=it_221;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_216[n_229]=map$2charphsFunph_at(self,it_221,default_value_230);
                            # 1371 "./neo-c.h"
                            len_218++;
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
                self->keys=keys_215;
                # 1382 "./neo-c.h"
                self->items=items_216;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_217;
                # 1385 "./neo-c.h"
                self->size=size_214;
                # 1386 "./neo-c.h"
                self->len=len_218;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional236;
char* result_219;
char* __result121__;
_Bool _if_conditional237;
char* __result122__;
char* result_220;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional236=self==((void*)0),                    _if_conditional236) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_219,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result121__ = __result_obj__ = result_219;
                        return __result121__;
                    }
                    # 1304 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./neo-c.h"
                    # 1306 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1307 "./neo-c.h"
                        __result122__ = __result_obj__ = self->key_list->it->item;
                        return __result122__;
                    }
                    # 1310 "./neo-c.h"
                    # 1311 "./neo-c.h"
                    memset(&result_220,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result123__ = __result_obj__ = result_220;
                    return __result123__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./neo-c.h"
                    __result124__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result124__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional238;
char* result_222;
char* __result125__;
_Bool _if_conditional239;
char* __result126__;
char* result_223;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_222, 0, sizeof(char*));
memset(&result_223, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional238=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional238) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_222,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result125__ = __result_obj__ = result_222;
                        return __result125__;
                    }
                    # 1321 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./neo-c.h"
                    # 1323 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1324 "./neo-c.h"
                        __result126__ = __result_obj__ = self->key_list->it->item;
                        return __result126__;
                    }
                    # 1327 "./neo-c.h"
                    # 1328 "./neo-c.h"
                    memset(&result_223,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result127__ = __result_obj__ = result_223;
                    return __result127__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_225;
unsigned int it_226;
_Bool _while_condtional17;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sFun* __result128__;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_225, 0, sizeof(unsigned int));
memset(&it_226, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_225=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_226=hash_225;
                        # 1251 "./neo-c.h"
                        while(_while_condtional17=(_Bool)1,                        _while_condtional17) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional240=self->item_existance[it_226],                            _if_conditional240) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional241=string_equals(self->keys[it_226],key),                                _if_conditional241) {
                                    # 1234 "./neo-c.h"
                                    __result128__ = __result_obj__ = self->items[it_226];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result128__;
                                }
                                # 1237 "./neo-c.h"
                                it_226++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional242=it_226>=self->size,                                _if_conditional242) {
                                    # 1240 "./neo-c.h"
                                    it_226=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional243=it_226==hash_225,                                    _if_conditional243) {
                                        # 1243 "./neo-c.h"
                                        __result129__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result129__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./neo-c.h"
                                __result130__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result130__;
                            }
                        }
                        # 1251 "./neo-c.h"
                        __result131__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result131__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_233;
struct list_item$1charp* it_234;
_Bool _while_condtional20;
_Bool _if_conditional250;
struct list$1charp* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_233, 0, sizeof(int));
memset(&it_234, 0, sizeof(struct list_item$1charp*));
                            # 448 "./neo-c.h"
                            it2_233=0;
                            # 449 "./neo-c.h"
                            it_234=self->head;
                            # 460 "./neo-c.h"
                            while(_while_condtional20=it_234!=((void*)0),                            _while_condtional20) {
                                # 455 "./neo-c.h"
                                # 451 "./neo-c.h"
                                if(_if_conditional250=string_equals(it_234->item,item),                                _if_conditional250) {
                                    # 452 "./neo-c.h"
                                    list$1charp_delete(self,it2_233,it2_233+1);
                                    # 453 "./neo-c.h"
                                    break;
                                }
                                # 455 "./neo-c.h"
                                it2_233++;
                                # 457 "./neo-c.h"
                                it_234=it_234->next;
                            }
                            # 460 "./neo-c.h"
                            __result135__ = __result_obj__ = self;
                            return __result135__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
int tmp_235;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct list$1charp* __result132__;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct list_item$1charp* it_238;
int i_239;
_Bool _while_condtional22;
_Bool _if_conditional259;
struct list_item$1charp* prev_it_240;
_Bool _if_conditional260;
_Bool _if_conditional261;
struct list_item$1charp* it_241;
int i_242;
_Bool _while_condtional23;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct list_item$1charp* prev_it_243;
struct list_item$1charp* it_244;
struct list_item$1charp* head_prev_it_245;
struct list_item$1charp* tail_it_246;
int i_247;
_Bool _while_condtional24;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct list_item$1charp* prev_it_248;
_Bool _if_conditional267;
_Bool _if_conditional268;
struct list$1charp* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_235, 0, sizeof(int));
memset(&it_238, 0, sizeof(struct list_item$1charp*));
memset(&i_239, 0, sizeof(int));
memset(&prev_it_240, 0, sizeof(struct list_item$1charp*));
memset(&it_241, 0, sizeof(struct list_item$1charp*));
memset(&i_242, 0, sizeof(int));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_245, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_246, 0, sizeof(struct list_item$1charp*));
memset(&i_247, 0, sizeof(int));
memset(&prev_it_248, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional251=head<0,                                        _if_conditional251) {
                                            # 465 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 471 "./neo-c.h"
                                        # 467 "./neo-c.h"
                                        if(_if_conditional252=tail<0,                                        _if_conditional252) {
                                            # 468 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./neo-c.h"
                                        # 471 "./neo-c.h"
                                        if(_if_conditional253=head>tail,                                        _if_conditional253) {
                                            # 472 "./neo-c.h"
                                            tmp_235=tail;
                                            # 473 "./neo-c.h"
                                            tail=head;
                                            # 474 "./neo-c.h"
                                            head=tmp_235;
                                        }
                                        # 481 "./neo-c.h"
                                        # 477 "./neo-c.h"
                                        if(_if_conditional254=head<0,                                        _if_conditional254) {
                                            # 478 "./neo-c.h"
                                            head=0;
                                        }
                                        # 485 "./neo-c.h"
                                        # 481 "./neo-c.h"
                                        if(_if_conditional255=tail>self->len,                                        _if_conditional255) {
                                            # 482 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 489 "./neo-c.h"
                                        # 485 "./neo-c.h"
                                        if(_if_conditional256=head==tail,                                        _if_conditional256) {
                                            # 486 "./neo-c.h"
                                            __result132__ = __result_obj__ = self;
                                            return __result132__;
                                        }
                                        # 584 "./neo-c.h"
                                        # 489 "./neo-c.h"
                                        if(_if_conditional257=head==0&&tail==self->len,                                        _if_conditional257) {
                                            # 491 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./neo-c.h"
                                            # 493 "./neo-c.h"
                                            if(_if_conditional258=head==0,                                            _if_conditional258) {
                                                # 494 "./neo-c.h"
                                                it_238=self->head;
                                                # 495 "./neo-c.h"
                                                i_239=0;
                                                # 517 "./neo-c.h"
                                                while(_while_condtional22=it_238!=((void*)0),                                                _while_condtional22) {
                                                    # 516 "./neo-c.h"
                                                    # 497 "./neo-c.h"
                                                    if(_if_conditional259=i_239<tail,                                                    _if_conditional259) {
                                                        # 498 "./neo-c.h"
                                                        prev_it_240=it_238;
                                                        # 500 "./neo-c.h"
                                                        it_238=it_238->next;
                                                        # 501 "./neo-c.h"
                                                        i_239++;
                                                        # 503 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./neo-c.h"
                                                        # 507 "./neo-c.h"
                                                        if(_if_conditional260=i_239==tail,                                                        _if_conditional260) {
                                                            # 508 "./neo-c.h"
                                                            self->head=it_238;
                                                            # 509 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./neo-c.h"
                                                            it_238=it_238->next;
                                                            # 514 "./neo-c.h"
                                                            i_239++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 518 "./neo-c.h"
                                                if(_if_conditional261=tail==self->len,                                                _if_conditional261) {
                                                    # 519 "./neo-c.h"
                                                    it_241=self->head;
                                                    # 520 "./neo-c.h"
                                                    i_242=0;
                                                    # 542 "./neo-c.h"
                                                    while(_while_condtional23=it_241!=((void*)0),                                                    _while_condtional23) {
                                                        # 527 "./neo-c.h"
                                                        # 522 "./neo-c.h"
                                                        if(_if_conditional262=i_242==head,                                                        _if_conditional262) {
                                                            # 523 "./neo-c.h"
                                                            self->tail=it_241->prev;
                                                            # 524 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./neo-c.h"
                                                        # 527 "./neo-c.h"
                                                        if(_if_conditional263=i_242>=head,                                                        _if_conditional263) {
                                                            # 528 "./neo-c.h"
                                                            prev_it_243=it_241;
                                                            # 530 "./neo-c.h"
                                                            it_241=it_241->next;
                                                            # 531 "./neo-c.h"
                                                            i_242++;
                                                            # 533 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./neo-c.h"
                                                            it_241=it_241->next;
                                                            # 539 "./neo-c.h"
                                                            i_242++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./neo-c.h"
                                                    it_244=self->head;
                                                    # 546 "./neo-c.h"
                                                    head_prev_it_245=((void*)0);
                                                    # 547 "./neo-c.h"
                                                    tail_it_246=((void*)0);
                                                    # 550 "./neo-c.h"
                                                    i_247=0;
                                                    # 576 "./neo-c.h"
                                                    while(_while_condtional24=it_244!=((void*)0),                                                    _while_condtional24) {
                                                        # 555 "./neo-c.h"
                                                        # 552 "./neo-c.h"
                                                        if(_if_conditional264=i_247==head,                                                        _if_conditional264) {
                                                            # 553 "./neo-c.h"
                                                            head_prev_it_245=it_244->prev;
                                                        }
                                                        # 559 "./neo-c.h"
                                                        # 555 "./neo-c.h"
                                                        if(_if_conditional265=i_247==tail,                                                        _if_conditional265) {
                                                            # 556 "./neo-c.h"
                                                            tail_it_246=it_244;
                                                        }
                                                        # 574 "./neo-c.h"
                                                        # 559 "./neo-c.h"
                                                        if(_if_conditional266=i_247>=head&&i_247<tail,                                                        _if_conditional266) {
                                                            # 561 "./neo-c.h"
                                                            prev_it_248=it_244;
                                                            # 563 "./neo-c.h"
                                                            it_244=it_244->next;
                                                            # 564 "./neo-c.h"
                                                            i_247++;
                                                            # 566 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./neo-c.h"
                                                            it_244=it_244->next;
                                                            # 572 "./neo-c.h"
                                                            i_247++;
                                                        }
                                                    }
                                                    # 579 "./neo-c.h"
                                                    # 576 "./neo-c.h"
                                                    if(_if_conditional267=head_prev_it_245!=((void*)0),                                                    _if_conditional267) {
                                                        # 577 "./neo-c.h"
                                                        head_prev_it_245->next=tail_it_246;
                                                    }
                                                    # 582 "./neo-c.h"
                                                    # 579 "./neo-c.h"
                                                    if(_if_conditional268=tail_it_246!=((void*)0),                                                    _if_conditional268) {
                                                        # 580 "./neo-c.h"
                                                        tail_it_246->prev=head_prev_it_245;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./neo-c.h"
                                        __result134__ = __result_obj__ = self;
                                        return __result134__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_236;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_237;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_236, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_237, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./neo-c.h"
                                                it_236=self->head;
                                                # 440 "./neo-c.h"
                                                while(_while_condtional21=it_236!=((void*)0),                                                _while_condtional21) {
                                                    # 435 "./neo-c.h"
                                                    prev_it_237=it_236;
                                                    # 436 "./neo-c.h"
                                                    it_236=it_236->next;
                                                    # 437 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 441 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 443 "./neo-c.h"
                                                self->len=0;
                                                # 445 "./neo-c.h"
                                                __result133__ = __result_obj__ = self;
                                                return __result133__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional274;
char* result_250;
char* __result136__;
_Bool _if_conditional275;
char* __result137__;
char* result_251;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(char*));
memset(&result_251, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional274=self==((void*)0),            _if_conditional274) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_250,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result136__ = __result_obj__ = result_250;
                return __result136__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result137__ = __result_obj__ = self->it->item;
                return __result137__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_251,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result138__ = __result_obj__ = result_251;
            return __result138__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result139__ = self==((void*)0)||self->it==((void*)0);
            return __result139__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional276;
char* result_253;
char* __result140__;
_Bool _if_conditional277;
char* __result141__;
char* result_254;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_253, 0, sizeof(char*));
memset(&result_254, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional276=self==((void*)0)||self->it==((void*)0),            _if_conditional276) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_253,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result140__ = __result_obj__ = result_253;
                return __result140__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result141__ = __result_obj__ = self->it->item;
                return __result141__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_254,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result142__ = __result_obj__ = result_254;
            return __result142__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional280;
void* right_value251;
struct list_item$1charp* litem_255;
_Bool _if_conditional281;
void* right_value252;
struct list_item$1charp* litem_256;
void* right_value253;
struct list_item$1charp* litem_257;
struct list$1charp* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1charp*));
right_value252 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1charp*));
right_value253 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1charp*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional280=self->len==0,                _if_conditional280) {
                    # 226 "./neo-c.h"
                    litem_255=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value251=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_255->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_255->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_255->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_255;
                    # 233 "./neo-c.h"
                    self->head=litem_255;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional281=self->len==1,                    _if_conditional281) {
                        # 236 "./neo-c.h"
                        litem_256=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value252=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_256->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_256->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_256->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_256;
                        # 243 "./neo-c.h"
                        self->head->next=litem_256;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_257=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value253=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_257->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_257->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_257->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_257;
                        # 253 "./neo-c.h"
                        self->tail=litem_257;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result143__ = __result_obj__ = self;
                return __result143__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value255;
char* output_file_name_258;
struct _IO_FILE* f_259;
void* right_value256;
struct map$2charphsFunph* o2_saved_260;
char* it_261;
void* right_value257;
struct sFun* it2_265;
void* right_value258;
char* header_266;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct map$2charphsFunph* o2_saved_271;
char* it_272;
void* right_value259;
struct sFun* it2_273;
void* right_value260;
char* header_274;
_Bool _if_conditional294;
void* right_value261;
char* output_275;
_Bool _if_conditional295;
void* right_value262;
char* output_276;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct map$2charphsFunph* o2_saved_277;
char* it_278;
struct sFun* it2_279;
_Bool _if_conditional298;
void* right_value263;
char* output_280;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&output_file_name_258, 0, sizeof(char*));
memset(&f_259, 0, sizeof(struct _IO_FILE*));
right_value256 = (void*)0;
memset(&o2_saved_260, 0, sizeof(struct map$2charphsFunph*));
memset(&it_261, 0, sizeof(char*));
right_value257 = (void*)0;
memset(&it2_265, 0, sizeof(struct sFun*));
right_value258 = (void*)0;
memset(&header_266, 0, sizeof(char*));
memset(&o2_saved_271, 0, sizeof(struct map$2charphsFunph*));
memset(&it_272, 0, sizeof(char*));
right_value259 = (void*)0;
memset(&it2_273, 0, sizeof(struct sFun*));
right_value260 = (void*)0;
memset(&header_274, 0, sizeof(char*));
right_value261 = (void*)0;
memset(&output_275, 0, sizeof(char*));
right_value262 = (void*)0;
memset(&output_276, 0, sizeof(char*));
memset(&o2_saved_277, 0, sizeof(struct map$2charphsFunph*));
memset(&it_278, 0, sizeof(char*));
memset(&it2_279, 0, sizeof(struct sFun*));
right_value263 = (void*)0;
memset(&output_280, 0, sizeof(char*));
    # 774 "03transpile2.c"
    output_file_name_258=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s.c",info->sname))));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 776 "03transpile2.c"
    f_259=fopen(output_file_name_258,"w");
    # 778 "03transpile2.c"
    fprintf(f_259,"// source head\n");
    # 779 "03transpile2.c"
    fprintf(f_259,"%s\n",((char*)(right_value256=buffer_to_string(info->module->mSourceHead))));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 781 "03transpile2.c"
    fprintf(f_259,"// header function\n");
    # 799 "03transpile2.c"
    for(    o2_saved_260=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_261=map$2charphsFunph_begin((o2_saved_260));    !map$2charphsFunph_end((o2_saved_260));    it_261=map$2charphsFunph_next((o2_saved_260))    ){
        # 783 "03transpile2.c"
        it2_265=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value257=__builtin_string(it_261))));
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 785 "03transpile2.c"
        header_266=(char*)come_increment_ref_count(((char*)(right_value258=header_function(it2_265,info))));
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 797 "03transpile2.c"
        # 787 "03transpile2.c"
        if(_if_conditional286=it2_265->mStatic&&it2_265->mResultType->mInline,        _if_conditional286) {
        }
        else {
            # 797 "03transpile2.c"
            # 789 "03transpile2.c"
            if(it2_265->mStatic) {
                # 790 "03transpile2.c"
                fprintf(f_259,"static %s",header_266);
            }
            else {
                # 797 "03transpile2.c"
                # 792 "03transpile2.c"
                if(it2_265->mResultType->mInline) {
                }
                else {
                    # 797 "03transpile2.c"
                    # 794 "03transpile2.c"
                    if(_if_conditional289=string_operator_not_equals(it_261,"__builtin_va_start")&&string_operator_not_equals(it_261,"__builtin_va_end"),                    _if_conditional289) {
                        # 795 "03transpile2.c"
                        fprintf(f_259,"%s\n",header_266,it_261);
                    }
                }
            }
        }
        header_266 = come_decrement_ref_count2(header_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 799 "03transpile2.c"
    fprintf(f_259,"// inline function\n");
    # 819 "03transpile2.c"
    for(    o2_saved_271=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_272=map$2charphsFunph_begin((o2_saved_271));    !map$2charphsFunph_end((o2_saved_271));    it_272=map$2charphsFunph_next((o2_saved_271))    ){
        # 801 "03transpile2.c"
        it2_273=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value259=__builtin_string(it_272))));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 803 "03transpile2.c"
        header_274=(char*)come_increment_ref_count(((char*)(right_value260=header_function(it2_273,info))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 817 "03transpile2.c"
        # 805 "03transpile2.c"
        if(_if_conditional294=it2_273->mStatic&&it2_273->mResultType->mInline,        _if_conditional294) {
            # 806 "03transpile2.c"
            output_275=(char*)come_increment_ref_count(((char*)(right_value261=output_function(it2_273,info))));
            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 807 "03transpile2.c"
            fprintf(f_259,"static inline %s",output_275);
            output_275 = come_decrement_ref_count2(output_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 817 "03transpile2.c"
            # 809 "03transpile2.c"
            if(it2_273->mResultType->mInline) {
                # 810 "03transpile2.c"
                output_276=(char*)come_increment_ref_count(((char*)(right_value262=output_function(it2_273,info))));
                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 811 "03transpile2.c"
                fprintf(f_259,"static inline %s",output_276);
                output_276 = come_decrement_ref_count2(output_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 817 "03transpile2.c"
                # 813 "03transpile2.c"
                if(it2_273->mStatic) {
                }
                else {
                    # 817 "03transpile2.c"
                    # 815 "03transpile2.c"
                    if(_if_conditional297=string_operator_not_equals(it_272,"__builtin_va_start")&&string_operator_not_equals(it_272,"__builtin_va_end"),                    _if_conditional297) {
                    }
                }
            }
        }
        header_274 = come_decrement_ref_count2(header_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 819 "03transpile2.c"
    fprintf(f_259,"\n");
    # 821 "03transpile2.c"
    fprintf(f_259,"// body function\n");
    # 843 "03transpile2.c"
    for(    o2_saved_277=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_278=map$2charphsFunph_begin((o2_saved_277));    !map$2charphsFunph_end((o2_saved_277));    it_278=map$2charphsFunph_next((o2_saved_277))    ){
        # 823 "03transpile2.c"
        it2_279=map$2charphsFunphp_operator_load_element(info->funcs,it_278);
        # 841 "03transpile2.c"
        # 825 "03transpile2.c"
        if(_if_conditional298=!it2_279->mExternal,        _if_conditional298) {
            # 826 "03transpile2.c"
            output_280=(char*)come_increment_ref_count(((char*)(right_value263=output_function(it2_279,info))));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 839 "03transpile2.c"
            # 828 "03transpile2.c"
            if(_if_conditional299=it2_279->mStatic&&it2_279->mResultType->mInline,            _if_conditional299) {
            }
            else {
                # 839 "03transpile2.c"
                # 830 "03transpile2.c"
                if(it2_279->mStatic) {
                    # 831 "03transpile2.c"
                    fprintf(f_259,"static %s",output_280);
                }
                else {
                    # 839 "03transpile2.c"
                    # 833 "03transpile2.c"
                    if(it2_279->mResultType->mInline) {
                    }
                    else {
                        # 836 "03transpile2.c"
                        fprintf(f_259,"%s",output_280);
                    }
                }
            }
            # 839 "03transpile2.c"
            fprintf(f_259,"\n");
            output_280 = come_decrement_ref_count2(output_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 843 "03transpile2.c"
    fclose(f_259);
    # 845 "03transpile2.c"
    __result150__ = (_Bool)1;
    output_file_name_258 = come_decrement_ref_count2(output_file_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result150__;
    output_file_name_258 = come_decrement_ref_count2(output_file_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_262;
unsigned int hash_263;
unsigned int it_264;
_Bool _while_condtional25;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sFun* __result146__;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sFun* __result147__;
struct sFun* __result148__;
struct sFun* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_262, 0, sizeof(struct sFun*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&it_264, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_262,0,sizeof(struct sFun*));
            # 1547 "./neo-c.h"
            hash_263=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_264=hash_263;
            # 1572 "./neo-c.h"
            while(_while_condtional25=(_Bool)1,            _while_condtional25) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional282=self->item_existance[it_264],                _if_conditional282) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional283=string_equals(self->keys[it_264],key),                    _if_conditional283) {
                        # 1555 "./neo-c.h"
                        __result146__ = __result_obj__ = self->items[it_264];
                        come_call_finalizer2(sFun_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result146__;
                    }
                    # 1558 "./neo-c.h"
                    it_264++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional284=it_264>=self->size,                    _if_conditional284) {
                        # 1561 "./neo-c.h"
                        it_264=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional285=it_264==hash_263,                        _if_conditional285) {
                            # 1564 "./neo-c.h"
                            __result147__ = __result_obj__ = default_value_262;
                            come_call_finalizer2(sFun_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result147__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result148__ = __result_obj__ = default_value_262;
                    come_call_finalizer2(sFun_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result148__;
                }
            }
            # 1572 "./neo-c.h"
            __result149__ = __result_obj__ = default_value_262;
            come_call_finalizer2(sFun_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result149__;
            come_call_finalizer2(sFun_finalize,default_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_267;
_Bool _if_conditional290;
_Bool _if_conditional291;
int i_268;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_267, 0, sizeof(int));
memset(&i_268, 0, sizeof(int));
        # 1137 "./neo-c.h"
        for(        i_267=0;        i_267<self->size;        i_267++        ){
            # 1136 "./neo-c.h"
            # 1131 "./neo-c.h"
            if(_if_conditional290=self->item_existance[i_267],            _if_conditional290) {
                # 1135 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional291=1,                _if_conditional291) {
                    # 1133 "./neo-c.h"
                    come_call_finalizer2(sFun_finalize,self->items[i_267], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1137 "./neo-c.h"
        come_free((char*)self->items);
        # 1146 "./neo-c.h"
        for(        i_268=0;        i_268<self->size;        i_268++        ){
            # 1145 "./neo-c.h"
            # 1140 "./neo-c.h"
            if(_if_conditional292=self->item_existance[i_268],            _if_conditional292) {
                # 1144 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional293=1,                _if_conditional293) {
                    # 1142 "./neo-c.h"
                    self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charp* it_269;
_Bool _while_condtional26;
struct list_item$1charp* prev_it_270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_269, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_270, 0, sizeof(struct list_item$1charp*));
            # 123 "./neo-c.h"
            it_269=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional26=it_269!=((void*)0),            _while_condtional26) {
                # 125 "./neo-c.h"
                prev_it_270=it_269;
                # 126 "./neo-c.h"
                it_269=it_269->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_281;
struct _IO_FILE* f_282;
_Bool _if_conditional302;
void* right_value264;
_Bool _if_conditional303;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_281, 0, sizeof(char*));
memset(&f_282, 0, sizeof(struct _IO_FILE*));
right_value264 = (void*)0;
    # 851 "03transpile2.c"
    output_file_name_281=(char*)come_increment_ref_count(info->output_file_name);
    # 853 "03transpile2.c"
    f_282=fopen(output_file_name_281,"a");
    # 861 "03transpile2.c"
    # 855 "03transpile2.c"
    if(_if_conditional302=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional302) {
        # 856 "03transpile2.c"
        fprintf(f_282,"#ifndef __COMMON_H__\n");
        # 857 "03transpile2.c"
        fprintf(f_282,"#define __COMMON_H__\n");
        # 858 "03transpile2.c"
        fprintf(f_282,"#include <neo-c.h>\n");
    }
    # 861 "03transpile2.c"
    fprintf(f_282,"%s\n",((char*)(right_value264=buffer_to_string(info->module->mHeader))));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 863 "03transpile2.c"
    fprintf(f_282,"\n");
    # 869 "03transpile2.c"
    # 865 "03transpile2.c"
    if(_if_conditional303=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional303) {
        # 866 "03transpile2.c"
        fprintf(f_282,"#endif\n");
    }
    # 869 "03transpile2.c"
    fclose(f_282);
    # 871 "03transpile2.c"
    __result151__ = (_Bool)1;
    output_file_name_281 = come_decrement_ref_count2(output_file_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result151__;
    output_file_name_281 = come_decrement_ref_count2(output_file_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional304;
char* msg2_283;
va_list args_284;
int len_285;
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_283, 0, sizeof(char*));
memset(&args_284, 0, sizeof(va_list));
memset(&len_285, 0, sizeof(int));
    # 879 "03transpile2.c"
    # 876 "03transpile2.c"
    if(info->no_output_come_code) {
        # 877 "03transpile2.c"
        return;
    }
    # 879 "03transpile2.c"
    # 881 "03transpile2.c"
    # 882 "03transpile2.c"
    __builtin_va_start(args_284,code);
    # 883 "03transpile2.c"
    len_285=vasprintf(&msg2_283,code,args_284);
    # 884 "03transpile2.c"
    __builtin_va_end(args_284);
    # 890 "03transpile2.c"
    # 886 "03transpile2.c"
    if(info->come_fun) {
        # 887 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead,msg2_283);
    }
    # 890 "03transpile2.c"
    free(msg2_283);
    come_call_finalizer2(va_list_finalize,(&args_284), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional306;
char* msg2_286;
va_list args_287;
int len_288;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_286, 0, sizeof(char*));
memset(&args_287, 0, sizeof(va_list));
memset(&len_288, 0, sizeof(int));
    # 898 "03transpile2.c"
    # 895 "03transpile2.c"
    if(info->no_output_come_code) {
        # 896 "03transpile2.c"
        return;
    }
    # 898 "03transpile2.c"
    # 900 "03transpile2.c"
    # 901 "03transpile2.c"
    __builtin_va_start(args_287,code);
    # 902 "03transpile2.c"
    len_288=vasprintf(&msg2_286,code,args_287);
    # 903 "03transpile2.c"
    __builtin_va_end(args_287);
    # 909 "03transpile2.c"
    # 905 "03transpile2.c"
    if(info->come_fun) {
        # 906 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead2,msg2_286);
    }
    # 909 "03transpile2.c"
    free(msg2_286);
    come_call_finalizer2(va_list_finalize,(&args_287), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* __dec_obj46;
_Bool _if_conditional310;
char* __dec_obj47;
_Bool _if_conditional311;
char* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
    # 917 "03transpile2.c"
    # 914 "03transpile2.c"
    if(info->no_output_come_code) {
        # 915 "03transpile2.c"
        return;
    }
    # 921 "03transpile2.c"
    # 917 "03transpile2.c"
    if(info->module->mLastCode) {
        # 918 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 919 "03transpile2.c"
        __dec_obj46=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 925 "03transpile2.c"
    # 921 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 922 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode2);
        # 923 "03transpile2.c"
        __dec_obj47=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 929 "03transpile2.c"
    # 925 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 926 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode3);
        # 927 "03transpile2.c"
        __dec_obj48=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value265;
char* __dec_obj49;
_Bool _if_conditional314;
void* right_value266;
char* __dec_obj50;
_Bool _if_conditional315;
void* right_value267;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    # 936 "03transpile2.c"
    # 933 "03transpile2.c"
    if(info->no_output_come_code) {
        # 934 "03transpile2.c"
        return;
    }
    # 940 "03transpile2.c"
    # 936 "03transpile2.c"
    if(info->module->mLastCode) {
        # 937 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value265=string_substring(info->module->mLastCode,0,-3))));
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 938 "03transpile2.c"
        __dec_obj49=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 944 "03transpile2.c"
    # 940 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 941 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value266=string_substring(info->module->mLastCode2,0,-3))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 942 "03transpile2.c"
        __dec_obj50=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 948 "03transpile2.c"
    # 944 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 945 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value267=string_substring(info->module->mLastCode3,0,-3))));
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 946 "03transpile2.c"
        __dec_obj51=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional316;
char* msg2_289;
va_list args_290;
int len_291;
void* right_value268;
char* __dec_obj52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_289, 0, sizeof(char*));
memset(&args_290, 0, sizeof(va_list));
memset(&len_291, 0, sizeof(int));
right_value268 = (void*)0;
    # 955 "03transpile2.c"
    # 952 "03transpile2.c"
    if(info->no_output_come_code) {
        # 953 "03transpile2.c"
        return;
    }
    # 955 "03transpile2.c"
    # 957 "03transpile2.c"
    # 958 "03transpile2.c"
    __builtin_va_start(args_290,msg);
    # 959 "03transpile2.c"
    len_291=vasprintf(&msg2_289,msg,args_290);
    # 960 "03transpile2.c"
    __builtin_va_end(args_290);
    # 962 "03transpile2.c"
    __dec_obj52=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("%s",msg2_289))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 964 "03transpile2.c"
    free(msg2_289);
    come_call_finalizer2(va_list_finalize,(&args_290), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional317;
char* msg2_292;
va_list args_293;
int len_294;
void* right_value269;
char* __dec_obj53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_292, 0, sizeof(char*));
memset(&args_293, 0, sizeof(va_list));
memset(&len_294, 0, sizeof(int));
right_value269 = (void*)0;
    # 972 "03transpile2.c"
    # 969 "03transpile2.c"
    if(info->no_output_come_code) {
        # 970 "03transpile2.c"
        return;
    }
    # 972 "03transpile2.c"
    # 974 "03transpile2.c"
    # 975 "03transpile2.c"
    __builtin_va_start(args_293,msg);
    # 976 "03transpile2.c"
    len_294=vasprintf(&msg2_292,msg,args_293);
    # 977 "03transpile2.c"
    __builtin_va_end(args_293);
    # 979 "03transpile2.c"
    __dec_obj53=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s",msg2_292))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 981 "03transpile2.c"
    free(msg2_292);
    come_call_finalizer2(va_list_finalize,(&args_293), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional318;
char* msg2_295;
va_list args_296;
int len_297;
void* right_value270;
char* __dec_obj54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_295, 0, sizeof(char*));
memset(&args_296, 0, sizeof(va_list));
memset(&len_297, 0, sizeof(int));
right_value270 = (void*)0;
    # 989 "03transpile2.c"
    # 986 "03transpile2.c"
    if(info->no_output_come_code) {
        # 987 "03transpile2.c"
        return;
    }
    # 989 "03transpile2.c"
    # 991 "03transpile2.c"
    # 992 "03transpile2.c"
    __builtin_va_start(args_296,msg);
    # 993 "03transpile2.c"
    len_297=vasprintf(&msg2_295,msg,args_296);
    # 994 "03transpile2.c"
    __builtin_va_end(args_296);
    # 996 "03transpile2.c"
    __dec_obj54=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("%s",msg2_295))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 998 "03transpile2.c"
    free(msg2_295);
    come_call_finalizer2(va_list_finalize,(&args_296), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1003 "03transpile2.c"
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
int tmp_298;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct list$1CVALUEph* __result152__;
_Bool _if_conditional325;
_Bool _if_conditional327;
struct list_item$1CVALUEph* it_301;
int i_302;
_Bool _while_condtional28;
_Bool _if_conditional328;
struct list_item$1CVALUEph* prev_it_303;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct list_item$1CVALUEph* it_304;
int i_305;
_Bool _while_condtional29;
_Bool _if_conditional331;
_Bool _if_conditional332;
struct list_item$1CVALUEph* prev_it_306;
struct list_item$1CVALUEph* it_307;
struct list_item$1CVALUEph* head_prev_it_308;
struct list_item$1CVALUEph* tail_it_309;
int i_310;
_Bool _while_condtional30;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
struct list_item$1CVALUEph* prev_it_311;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct list$1CVALUEph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_298, 0, sizeof(int));
memset(&it_301, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_302, 0, sizeof(int));
memset(&prev_it_303, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_304, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_305, 0, sizeof(int));
memset(&prev_it_306, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_307, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_308, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_309, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_310, 0, sizeof(int));
memset(&prev_it_311, 0, sizeof(struct list_item$1CVALUEph*));
        # 467 "./neo-c.h"
        # 464 "./neo-c.h"
        if(_if_conditional319=head<0,        _if_conditional319) {
            # 465 "./neo-c.h"
            head+=self->len;
        }
        # 471 "./neo-c.h"
        # 467 "./neo-c.h"
        if(_if_conditional320=tail<0,        _if_conditional320) {
            # 468 "./neo-c.h"
            tail+=self->len+1;
        }
        # 477 "./neo-c.h"
        # 471 "./neo-c.h"
        if(_if_conditional321=head>tail,        _if_conditional321) {
            # 472 "./neo-c.h"
            tmp_298=tail;
            # 473 "./neo-c.h"
            tail=head;
            # 474 "./neo-c.h"
            head=tmp_298;
        }
        # 481 "./neo-c.h"
        # 477 "./neo-c.h"
        if(_if_conditional322=head<0,        _if_conditional322) {
            # 478 "./neo-c.h"
            head=0;
        }
        # 485 "./neo-c.h"
        # 481 "./neo-c.h"
        if(_if_conditional323=tail>self->len,        _if_conditional323) {
            # 482 "./neo-c.h"
            tail=self->len;
        }
        # 489 "./neo-c.h"
        # 485 "./neo-c.h"
        if(_if_conditional324=head==tail,        _if_conditional324) {
            # 486 "./neo-c.h"
            __result152__ = __result_obj__ = self;
            return __result152__;
        }
        # 584 "./neo-c.h"
        # 489 "./neo-c.h"
        if(_if_conditional325=head==0&&tail==self->len,        _if_conditional325) {
            # 491 "./neo-c.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 584 "./neo-c.h"
            # 493 "./neo-c.h"
            if(_if_conditional327=head==0,            _if_conditional327) {
                # 494 "./neo-c.h"
                it_301=self->head;
                # 495 "./neo-c.h"
                i_302=0;
                # 517 "./neo-c.h"
                while(_while_condtional28=it_301!=((void*)0),                _while_condtional28) {
                    # 516 "./neo-c.h"
                    # 497 "./neo-c.h"
                    if(_if_conditional328=i_302<tail,                    _if_conditional328) {
                        # 498 "./neo-c.h"
                        prev_it_303=it_301;
                        # 500 "./neo-c.h"
                        it_301=it_301->next;
                        # 501 "./neo-c.h"
                        i_302++;
                        # 503 "./neo-c.h"
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "./neo-c.h"
                        self->len--;
                    }
                    else {
                        # 516 "./neo-c.h"
                        # 507 "./neo-c.h"
                        if(_if_conditional329=i_302==tail,                        _if_conditional329) {
                            # 508 "./neo-c.h"
                            self->head=it_301;
                            # 509 "./neo-c.h"
                            self->head->prev=((void*)0);
                            # 510 "./neo-c.h"
                            break;
                        }
                        else {
                            # 513 "./neo-c.h"
                            it_301=it_301->next;
                            # 514 "./neo-c.h"
                            i_302++;
                        }
                    }
                }
            }
            else {
                # 584 "./neo-c.h"
                # 518 "./neo-c.h"
                if(_if_conditional330=tail==self->len,                _if_conditional330) {
                    # 519 "./neo-c.h"
                    it_304=self->head;
                    # 520 "./neo-c.h"
                    i_305=0;
                    # 542 "./neo-c.h"
                    while(_while_condtional29=it_304!=((void*)0),                    _while_condtional29) {
                        # 527 "./neo-c.h"
                        # 522 "./neo-c.h"
                        if(_if_conditional331=i_305==head,                        _if_conditional331) {
                            # 523 "./neo-c.h"
                            self->tail=it_304->prev;
                            # 524 "./neo-c.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "./neo-c.h"
                        # 527 "./neo-c.h"
                        if(_if_conditional332=i_305>=head,                        _if_conditional332) {
                            # 528 "./neo-c.h"
                            prev_it_306=it_304;
                            # 530 "./neo-c.h"
                            it_304=it_304->next;
                            # 531 "./neo-c.h"
                            i_305++;
                            # 533 "./neo-c.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 538 "./neo-c.h"
                            it_304=it_304->next;
                            # 539 "./neo-c.h"
                            i_305++;
                        }
                    }
                }
                else {
                    # 544 "./neo-c.h"
                    it_307=self->head;
                    # 546 "./neo-c.h"
                    head_prev_it_308=((void*)0);
                    # 547 "./neo-c.h"
                    tail_it_309=((void*)0);
                    # 550 "./neo-c.h"
                    i_310=0;
                    # 576 "./neo-c.h"
                    while(_while_condtional30=it_307!=((void*)0),                    _while_condtional30) {
                        # 555 "./neo-c.h"
                        # 552 "./neo-c.h"
                        if(_if_conditional333=i_310==head,                        _if_conditional333) {
                            # 553 "./neo-c.h"
                            head_prev_it_308=it_307->prev;
                        }
                        # 559 "./neo-c.h"
                        # 555 "./neo-c.h"
                        if(_if_conditional334=i_310==tail,                        _if_conditional334) {
                            # 556 "./neo-c.h"
                            tail_it_309=it_307;
                        }
                        # 574 "./neo-c.h"
                        # 559 "./neo-c.h"
                        if(_if_conditional335=i_310>=head&&i_310<tail,                        _if_conditional335) {
                            # 561 "./neo-c.h"
                            prev_it_311=it_307;
                            # 563 "./neo-c.h"
                            it_307=it_307->next;
                            # 564 "./neo-c.h"
                            i_310++;
                            # 566 "./neo-c.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 571 "./neo-c.h"
                            it_307=it_307->next;
                            # 572 "./neo-c.h"
                            i_310++;
                        }
                    }
                    # 579 "./neo-c.h"
                    # 576 "./neo-c.h"
                    if(_if_conditional336=head_prev_it_308!=((void*)0),                    _if_conditional336) {
                        # 577 "./neo-c.h"
                        head_prev_it_308->next=tail_it_309;
                    }
                    # 582 "./neo-c.h"
                    # 579 "./neo-c.h"
                    if(_if_conditional337=tail_it_309!=((void*)0),                    _if_conditional337) {
                        # 580 "./neo-c.h"
                        tail_it_309->prev=head_prev_it_308;
                    }
                }
            }
        }
        # 584 "./neo-c.h"
        __result154__ = __result_obj__ = self;
        return __result154__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_299;
_Bool _while_condtional27;
struct list_item$1CVALUEph* prev_it_300;
struct list$1CVALUEph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_299, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_300, 0, sizeof(struct list_item$1CVALUEph*));
                # 433 "./neo-c.h"
                it_299=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional27=it_299!=((void*)0),                _while_condtional27) {
                    # 435 "./neo-c.h"
                    prev_it_300=it_299;
                    # 436 "./neo-c.h"
                    it_299=it_299->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./neo-c.h"
                self->head=((void*)0);
                # 441 "./neo-c.h"
                self->tail=((void*)0);
                # 443 "./neo-c.h"
                self->len=0;
                # 445 "./neo-c.h"
                __result153__ = __result_obj__ = self;
                return __result153__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional326=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional326) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj55;
void* right_value274;
struct CVALUE* result_316;
_Bool _if_conditional344;
struct CVALUE* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&result_316, 0, sizeof(struct CVALUE*));
    # 1008 "03transpile2.c"
    __dec_obj55=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1011 "03transpile2.c"
    result_316=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=CVALUE_clone(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(info->stack,offset), "03transpile2.c", 1011, 11))))));
    come_call_finalizer2(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1018 "03transpile2.c"
    # 1013 "03transpile2.c"
    if(_if_conditional344=result_316==((void*)0),    _if_conditional344) {
        # 1014 "03transpile2.c"
        err_msg(info,"invalid stack value");
        # 1015 "03transpile2.c"
        exit(2);
    }
    # 1018 "03transpile2.c"
    __result159__ = __result_obj__ = result_316;
    come_call_finalizer2(CVALUE_finalize,result_316, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result159__;
    come_call_finalizer2(CVALUE_finalize,result_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional338;
struct list_item$1CVALUEph* it_312;
int i_313;
_Bool _while_condtional31;
_Bool _if_conditional339;
struct CVALUE* __result155__;
struct CVALUE* default_value_314;
struct CVALUE* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_312, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_313, 0, sizeof(int));
memset(&default_value_314, 0, sizeof(struct CVALUE*));
        # 686 "./neo-c.h"
        # 682 "./neo-c.h"
        if(_if_conditional338=position<0,        _if_conditional338) {
            # 683 "./neo-c.h"
            position+=self->len;
        }
        # 686 "./neo-c.h"
        it_312=self->head;
        # 687 "./neo-c.h"
        i_313=0;
        # 694 "./neo-c.h"
        while(_while_condtional31=it_312!=((void*)0),        _while_condtional31) {
            # 692 "./neo-c.h"
            # 689 "./neo-c.h"
            if(_if_conditional339=position==i_313,            _if_conditional339) {
                # 690 "./neo-c.h"
                __result155__ = __result_obj__ = it_312->item;
                return __result155__;
            }
            # 692 "./neo-c.h"
            it_312=it_312->next;
            # 693 "./neo-c.h"
            i_313++;
        }
        # 696 "./neo-c.h"
        # 697 "./neo-c.h"
        memset(&default_value_314,0,sizeof(struct CVALUE*));
        # 698 "./neo-c.h"
        __result156__ = __result_obj__ = default_value_314;
        come_call_finalizer2(CVALUE_finalize,default_value_314, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result156__;
        come_call_finalizer2(CVALUE_finalize,default_value_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional340;
struct CVALUE* __result157__;
void* right_value271;
struct CVALUE* result_315;
_Bool _if_conditional341;
void* right_value272;
char* __dec_obj56;
_Bool _if_conditional342;
void* right_value273;
struct sType* __dec_obj57;
_Bool _if_conditional343;
struct CVALUE* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&result_315, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional340=self==(void*)0,        _if_conditional340) {
            # 2 "CVALUE_clone"
            __result157__ = __result_obj__ = (void*)0;
            return __result157__;
        }
        # 3 "CVALUE_clone"
        result_315=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional341=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional341) {
            # 4 "CVALUE_clone"
            __dec_obj56=result_315->c_value;
            result_315->c_value=(char*)come_increment_ref_count(((char*)(right_value272=string_clone(self->c_value))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional342=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional342) {
            # 5 "CVALUE_clone"
            __dec_obj57=result_315->type;
            result_315->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional343=self!=((void*)0),        _if_conditional343) {
            # 6 "CVALUE_clone"
            result_315->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result158__ = __result_obj__ = result_315;
        come_call_finalizer2(CVALUE_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result158__;
        come_call_finalizer2(CVALUE_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
memset(&__result_obj__, 0, sizeof(void*));
    # 1023 "03transpile2.c"
    __dec_obj58=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1024 "03transpile2.c"
    __dec_obj59=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1025 "03transpile2.c"
    __dec_obj60=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
}

