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
struct sLambdaNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct sFunNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

char* sLambdaNode_kind();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

char* sFunNode_kind();

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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










struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sLambdaNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 11 "05function2.c"
    self->mFun=fun;
    # 12 "05function2.c"
    self->sline=info->sline;
    # 13 "05function2.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 15 "05function2.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 20 "05function2.c"
    __result53__ = self->sline;
    return __result53__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 25 "05function2.c"
    __result54__ = __result_obj__ = ((char*)(right_value79=__builtin_string(self->sname)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 30 "05function2.c"
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value80;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 35 "05function2.c"
    __result56__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sLambdaNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_47;
void* right_value81;
void* right_value82;
struct sType* result_type_48;
void* right_value83;
void* right_value84;
_Bool _if_conditional37;
void* right_value85;
struct CVALUE* come_value_55;
void* right_value86;
char* __dec_obj13;
void* right_value122;
struct sType* __dec_obj37;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value86 = (void*)0;
right_value122 = (void*)0;
    # 40 "05function2.c"
    come_fun_47=info->come_fun;
    # 41 "05function2.c"
    info->come_fun=self->mFun;
    # 43 "05function2.c"
    result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 45 "05function2.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value83=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 46 "05function2.c"
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value84=make_type_name_string(result_type_48,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 52 "05function2.c"
    # 48 "05function2.c"
    if(self->mFun->mBlock) {
        # 49 "05function2.c"
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    # 52 "05function2.c"
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 54 "05function2.c"
    __dec_obj13=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s",self->mFun->mName))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 55 "05function2.c"
    __dec_obj37=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 56 "05function2.c"
    come_value_55->var=((void*)0);
    # 58 "05function2.c"
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    # 60 "05function2.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    # 62 "05function2.c"
    info->come_fun=come_fun_47;
    # 64 "05function2.c"
    __result76__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sType_finalize,result_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sType_finalize"
        # 0 "sType_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional20) {
            # 0 "sType_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sType_finalize"
        # 1 "sType_finalize"
        if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional22) {
            # 1 "sType_finalize"
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sType_finalize"
        # 2 "sType_finalize"
        if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional24) {
            # 2 "sType_finalize"
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sType_finalize"
        # 3 "sType_finalize"
        if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional25) {
            # 3 "sType_finalize"
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sType_finalize"
        # 4 "sType_finalize"
        if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional26) {
            # 4 "sType_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sType_finalize"
        # 5 "sType_finalize"
        if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional27) {
            # 5 "sType_finalize"
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sType_finalize"
        # 6 "sType_finalize"
        if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional29) {
            # 6 "sType_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sType_finalize"
        # 7 "sType_finalize"
        if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional30) {
            # 7 "sType_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sType_finalize"
        # 8 "sType_finalize"
        if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional32) {
            # 8 "sType_finalize"
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sType_finalize"
        # 9 "sType_finalize"
        if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional33) {
            # 9 "sType_finalize"
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 11 "sType_finalize"
        # 10 "sType_finalize"
        if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional34) {
            # 10 "sType_finalize"
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 12 "sType_finalize"
        # 11 "sType_finalize"
        if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional35) {
            # 11 "sType_finalize"
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sType_finalize"
        # 12 "sType_finalize"
        if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional36) {
            # 12 "sType_finalize"
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                # 123 "./neo-c.h"
                it_49=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    # 125 "./neo-c.h"
                    prev_it_50=it_49;
                    # 126 "./neo-c.h"
                    it_49=it_49->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple1$1sTypephp_finalize"
                # 0 "tuple1$1sTypephp_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional23) {
                    # 0 "tuple1$1sTypephp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_51;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                # 123 "./neo-c.h"
                it_51=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional8=it_51!=((void*)0),                _while_condtional8) {
                    # 125 "./neo-c.h"
                    prev_it_52=it_51;
                    # 126 "./neo-c.h"
                    it_51=it_51->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sNodephp_finalize"
                        # 0 "list_item$1sNodephp_finalize"
                        if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional28) {
                            # 0 "list_item$1sNodephp_finalize"
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                # 123 "./neo-c.h"
                it_53=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional9=it_53!=((void*)0),                _while_condtional9) {
                    # 125 "./neo-c.h"
                    prev_it_54=it_53;
                    # 126 "./neo-c.h"
                    it_53=it_53->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional31) {
                            # 0 "list_item$1charphp_finalize"
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional38=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional38) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional39=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional39) {
            # 1 "CVALUE_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional40;
struct sType* __result57__;
void* right_value87;
struct sType* result_56;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value94;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
void* right_value98;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
void* right_value99;
char* __dec_obj21;
_Bool _if_conditional52;
void* right_value100;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional53;
void* right_value108;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value109;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional68;
void* right_value116;
struct list$1charph* __dec_obj31;
_Bool _if_conditional72;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value118;
struct sNode* __dec_obj33;
_Bool _if_conditional75;
_Bool _if_conditional76;
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
void* right_value119;
struct sNode* __dec_obj34;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value120;
char* __dec_obj35;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value121;
char* __dec_obj36;
_Bool _if_conditional113;
struct sType* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value94 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional40=self==(void*)0,        _if_conditional40) {
            # 2 "sType_clone"
            __result57__ = __result_obj__ = (void*)0;
            return __result57__;
        }
        # 3 "sType_clone"
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional41=self!=((void*)0),        _if_conditional41) {
            # 4 "sType_clone"
            result_56->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional42) {
            # 5 "sType_clone"
            __dec_obj17=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional46) {
            # 6 "sType_clone"
            __dec_obj19=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional50) {
            # 7 "sType_clone"
            __dec_obj20=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value98=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional51) {
            # 8 "sType_clone"
            __dec_obj21=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional52) {
            # 9 "sType_clone"
            __dec_obj22=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional53) {
            # 10 "sType_clone"
            __dec_obj26=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 11 "sType_clone"
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional67=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional67) {
            # 12 "sType_clone"
            __dec_obj27=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional68) {
            # 13 "sType_clone"
            __dec_obj31=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional72=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional72) {
            # 14 "sType_clone"
            __dec_obj32=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 15 "sType_clone"
            result_56->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional74=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional74) {
            # 16 "sType_clone"
            __dec_obj33=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 17 "sType_clone"
            result_56->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 18 "sType_clone"
            result_56->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 19 "sType_clone"
            result_56->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 20 "sType_clone"
            result_56->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 21 "sType_clone"
            result_56->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 22 "sType_clone"
            result_56->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 23 "sType_clone"
            result_56->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 24 "sType_clone"
            result_56->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 25 "sType_clone"
            result_56->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 26 "sType_clone"
            result_56->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 27 "sType_clone"
            result_56->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 28 "sType_clone"
            result_56->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 29 "sType_clone"
            result_56->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 30 "sType_clone"
            result_56->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 31 "sType_clone"
            result_56->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 32 "sType_clone"
            result_56->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 33 "sType_clone"
            result_56->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 34 "sType_clone"
            result_56->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 35 "sType_clone"
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 36 "sType_clone"
            result_56->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 37 "sType_clone"
            result_56->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 38 "sType_clone"
            result_56->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 39 "sType_clone"
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 40 "sType_clone"
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional99) {
            # 41 "sType_clone"
            __dec_obj34=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 42 "sType_clone"
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 43 "sType_clone"
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional102) {
            # 44 "sType_clone"
            __dec_obj35=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 45 "sType_clone"
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 46 "sType_clone"
            result_56->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 47 "sType_clone"
            result_56->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 48 "sType_clone"
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 49 "sType_clone"
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 50 "sType_clone"
            result_56->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 51 "sType_clone"
            result_56->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 52 "sType_clone"
            result_56->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 53 "sType_clone"
            result_56->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional112) {
            # 54 "sType_clone"
            __dec_obj36=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 55 "sType_clone"
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result74__ = __result_obj__ = result_56;
        come_call_finalizer2(sType_finalize,result_56, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(sType_finalize,result_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sTypeph* __result58__;
void* right_value88;
void* right_value89;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional10;
void* right_value93;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value93 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional43=self==((void*)0),                _if_conditional43) {
                    # 140 "./neo-c.h"
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                # 142 "./neo-c.h"
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_58=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional10=it_58!=((void*)0),                _while_condtional10) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(it_58->item)))));
                    come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_58=it_58->next;
                }
                # 151 "./neo-c.h"
                __result61__ = __result_obj__ = result_57;
                come_call_finalizer2(list$1sTypephp_finalize,result_57, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer2(list$1sTypephp_finalize,result_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value90;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
_Bool _if_conditional45;
void* right_value91;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj15;
void* right_value92;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj16;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional44=self->len==0,                        _if_conditional44) {
                            # 156 "./neo-c.h"
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_59->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_59->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj14=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_59;
                            # 163 "./neo-c.h"
                            self->head=litem_59;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional45=self->len==1,                            _if_conditional45) {
                                # 166 "./neo-c.h"
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_60->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_60->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj15=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_60;
                                # 173 "./neo-c.h"
                                self->head->next=litem_60;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_61->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_61->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj16=litem_61->item;
                                litem_61->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_61;
                                # 183 "./neo-c.h"
                                self->tail=litem_61;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result60__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __result62__;
void* right_value95;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional49;
void* right_value96;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value96 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional47=self==(void*)0,                _if_conditional47) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result62__ = __result_obj__ = (void*)0;
                    return __result62__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional49) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj18=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result63__ = __result_obj__ = result_62;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional48) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sNodeph* __result64__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional11;
void* right_value107;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value107 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional54=self==((void*)0),                _if_conditional54) {
                    # 140 "./neo-c.h"
                    __result64__ = __result_obj__ = ((void*)0);
                    return __result64__;
                }
                # 142 "./neo-c.h"
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_64=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional11=it_64!=((void*)0),                _while_condtional11) {
                    # 146 "./neo-c.h"
                    list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(it_64->item)))));
                    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./neo-c.h"
                    it_64=it_64->next;
                }
                # 151 "./neo-c.h"
                __result69__ = __result_obj__ = result_63;
                come_call_finalizer2(list$1sNodephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result69__;
                come_call_finalizer2(list$1sNodephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result65__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result65__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value103;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
_Bool _if_conditional56;
void* right_value104;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
void* right_value105;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional55=self->len==0,                        _if_conditional55) {
                            # 156 "./neo-c.h"
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_65->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_65->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj23=litem_65->item;
                            litem_65->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./neo-c.h"
                            self->tail=litem_65;
                            # 163 "./neo-c.h"
                            self->head=litem_65;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional56=self->len==1,                            _if_conditional56) {
                                # 166 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_66->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj24=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./neo-c.h"
                                self->tail=litem_66;
                                # 173 "./neo-c.h"
                                self->head->next=litem_66;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_67->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_67->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj25=litem_67->item;
                                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./neo-c.h"
                                self->tail->next=litem_67;
                                # 183 "./neo-c.h"
                                self->tail=litem_67;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result66__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result66__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sNode* __result67__;
void* right_value106;
struct sNode* result_68;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_68, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional57=self==(void*)0,                        _if_conditional57) {
                            # 2 "sNode_clone"
                            __result67__ = __result_obj__ = (void*)0;
                            return __result67__;
                        }
                        # 3 "sNode_clone"
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional58) {
                            # 4 "sNode_clone"
                            result_68->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 5 "sNode_clone"
                            result_68->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 6 "sNode_clone"
                            result_68->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 7 "sNode_clone"
                            result_68->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 8 "sNode_clone"
                            result_68->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            # 9 "sNode_clone"
                            result_68->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            # 10 "sNode_clone"
                            result_68->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            # 11 "sNode_clone"
                            result_68->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result68__ = __result_obj__ = result_68;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result68__;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1charph* __result70__;
void* right_value110;
void* right_value111;
struct list$1charph* result_69;
struct list_item$1charph* it_70;
_Bool _while_condtional12;
void* right_value115;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1charph*));
memset(&it_70, 0, sizeof(struct list_item$1charph*));
right_value115 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional69=self==((void*)0),                _if_conditional69) {
                    # 140 "./neo-c.h"
                    __result70__ = __result_obj__ = ((void*)0);
                    return __result70__;
                }
                # 142 "./neo-c.h"
                result_69=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_70=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional12=it_70!=((void*)0),                _while_condtional12) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_69,(char*)come_increment_ref_count(((char*)(right_value115=string_clone(it_70->item)))));
                    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_70=it_70->next;
                }
                # 151 "./neo-c.h"
                __result73__ = __result_obj__ = result_69;
                come_call_finalizer2(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer2(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result71__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value112;
struct list_item$1charph* litem_71;
char* __dec_obj28;
_Bool _if_conditional71;
void* right_value113;
struct list_item$1charph* litem_72;
char* __dec_obj29;
void* right_value114;
struct list_item$1charph* litem_73;
char* __dec_obj30;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value114 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional70=self->len==0,                        _if_conditional70) {
                            # 156 "./neo-c.h"
                            litem_71=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_71->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_71->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj28=litem_71->item;
                            litem_71->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_71;
                            # 163 "./neo-c.h"
                            self->head=litem_71;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional71=self->len==1,                            _if_conditional71) {
                                # 166 "./neo-c.h"
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_72->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_72->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj29=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_72;
                                # 173 "./neo-c.h"
                                self->head->next=litem_72;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_73->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj30=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_73;
                                # 183 "./neo-c.h"
                                self->tail=litem_73;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result72__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result72__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value123;
struct list_item$1CVALUEph* litem_74;
struct CVALUE* __dec_obj38;
_Bool _if_conditional116;
void* right_value124;
struct list_item$1CVALUEph* litem_75;
struct CVALUE* __dec_obj39;
void* right_value125;
struct list_item$1CVALUEph* litem_76;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1CVALUEph*));
right_value124 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1CVALUEph*));
right_value125 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional114=self->len==0,        _if_conditional114) {
            # 226 "./neo-c.h"
            litem_74=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_74->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_74->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj38=litem_74->item;
            litem_74->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_74;
            # 233 "./neo-c.h"
            self->head=litem_74;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional116=self->len==1,            _if_conditional116) {
                # 236 "./neo-c.h"
                litem_75=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_75->prev=self->head;
                # 239 "./neo-c.h"
                litem_75->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj39=litem_75->item;
                litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_75;
                # 243 "./neo-c.h"
                self->head->next=litem_75;
            }
            else {
                # 246 "./neo-c.h"
                litem_76=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_76->prev=self->tail;
                # 249 "./neo-c.h"
                litem_76->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj40=litem_76->item;
                litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_76;
                # 253 "./neo-c.h"
                self->tail=litem_76;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result75__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional115=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional115) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj41;
char* __dec_obj42;
struct sFunNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 75 "05function2.c"
    __dec_obj41=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 76 "05function2.c"
    self->sline=info->sline;
    # 77 "05function2.c"
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 79 "05function2.c"
    __result77__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional117) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional118=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional118) {
            # 1 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional119) {
            # 2 "sFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional120) {
            # 3 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional121=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional121) {
            # 4 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional122=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional122) {
            # 5 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional123=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional123) {
            # 6 "sFun_finalize"
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional126=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional126) {
            # 7 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional127=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional127) {
            # 8 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional128=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional128) {
            # 9 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional129=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional129) {
            # 10 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional130=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional130) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional131=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional131) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional124=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional124) {
                    # 0 "sBlock_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional125=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional125) {
                    # 1 "sBlock_finalize"
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 84 "05function2.c"
    __result78__ = self->sline;
    return __result78__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    # 89 "05function2.c"
    __result79__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 94 "05function2.c"
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value127;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    # 99 "05function2.c"
    __result81__ = __result_obj__ = ((char*)(right_value127=__builtin_string("sFunNode")));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

void caller_begin(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void caller_end(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_77;
char* come_fun_name_78;
void* right_value128;
char* __dec_obj43;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value129;
void* right_value130;
struct sType* result_type_79;
void* right_value131;
void* right_value132;
_Bool _if_conditional136;
void* right_value133;
char* __dec_obj44;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_77, 0, sizeof(struct sFun*));
memset(&come_fun_name_78, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&result_type_79, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    # 112 "05function2.c"
    come_fun_77=info->come_fun;
    # 113 "05function2.c"
    info->come_fun=self->mFun;
    # 115 "05function2.c"
    caller_begin(info);
    # 124 "05function2.c"
    come_fun_name_78=(char*)come_increment_ref_count(info->come_fun_name);
    # 125 "05function2.c"
    __dec_obj43=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->come_fun->mName))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 144 "05function2.c"
    # 127 "05function2.c"
    if(self->mFun->mBlock) {
        # 132 "05function2.c"
        # 128 "05function2.c"
        if(_if_conditional135=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional135) {
            # 129 "05function2.c"
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        # 132 "05function2.c"
        result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 134 "05function2.c"
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value131=make_define_var(result_type_79,"__result_obj__",(_Bool)0,info))));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 135 "05function2.c"
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value132=make_type_name_string(result_type_79,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 137 "05function2.c"
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        # 142 "05function2.c"
        # 138 "05function2.c"
        if(_if_conditional136=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional136) {
            # 139 "05function2.c"
            free_objects(info->gv_table,((void*)0),info);
            # 140 "05function2.c"
            add_come_code(info,((char*)(right_value133=xsprintf("come_heap_final();\n"))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 144 "05function2.c"
    caller_end(info);
    # 146 "05function2.c"
    info->come_fun=come_fun_77;
    # 147 "05function2.c"
    __dec_obj44=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_78);
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 149 "05function2.c"
    __result82__ = (_Bool)1;
    come_fun_name_78 = come_decrement_ref_count2(come_fun_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result82__;
    come_fun_name_78 = come_decrement_ref_count2(come_fun_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value134;
void* right_value135;
struct list$1sNodeph* __dec_obj45;
struct sBlock* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
    # 154 "05function2.c"
    __dec_obj45=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value134=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 156 "05function2.c"
    __result83__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result83__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value136;
struct sType* __dec_obj46;
void* right_value137;
struct list$1charph* __dec_obj47;
void* right_value138;
struct list$1charph* __dec_obj48;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
void* right_value139;
char* __dec_obj55;
struct sGenericsFun* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
    # 161 "05function2.c"
    __dec_obj46=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 162 "05function2.c"
    __dec_obj47=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 163 "05function2.c"
    __dec_obj48=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 165 "05function2.c"
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 166 "05function2.c"
    __dec_obj50=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 167 "05function2.c"
    __dec_obj51=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 168 "05function2.c"
    __dec_obj52=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 169 "05function2.c"
    __dec_obj53=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 170 "05function2.c"
    self->mVarArgs=var_args;
    # 172 "05function2.c"
    __dec_obj54=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 173 "05function2.c"
    self->mSLine=info->sline;
    # 175 "05function2.c"
    __dec_obj55=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(generics_sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 176 "05function2.c"
    self->mGenericsSLine=generics_sline;
    # 178 "05function2.c"
    __result84__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sGenericsFun_finalize"
        # 0 "sGenericsFun_finalize"
        if(_if_conditional137=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional137) {
            # 0 "sGenericsFun_finalize"
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sGenericsFun_finalize"
        # 1 "sGenericsFun_finalize"
        if(_if_conditional138=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional138) {
            # 1 "sGenericsFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sGenericsFun_finalize"
        # 2 "sGenericsFun_finalize"
        if(_if_conditional139=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional139) {
            # 2 "sGenericsFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sGenericsFun_finalize"
        # 3 "sGenericsFun_finalize"
        if(_if_conditional140=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional140) {
            # 3 "sGenericsFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sGenericsFun_finalize"
        # 4 "sGenericsFun_finalize"
        if(_if_conditional141=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional141) {
            # 4 "sGenericsFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sGenericsFun_finalize"
        # 5 "sGenericsFun_finalize"
        if(_if_conditional142=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional142) {
            # 5 "sGenericsFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sGenericsFun_finalize"
        # 6 "sGenericsFun_finalize"
        if(_if_conditional143=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional143) {
            # 6 "sGenericsFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sGenericsFun_finalize"
        # 7 "sGenericsFun_finalize"
        if(_if_conditional144=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional144) {
            # 7 "sGenericsFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sGenericsFun_finalize"
        # 8 "sGenericsFun_finalize"
        if(_if_conditional145=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional145) {
            # 8 "sGenericsFun_finalize"
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 10 "sGenericsFun_finalize"
        # 9 "sGenericsFun_finalize"
        if(_if_conditional146=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional146) {
            # 9 "sGenericsFun_finalize"
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value140;
void* right_value141;
struct sBlock* result_80;
int block_level_81;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _while_condtional13;
_Bool _if_conditional149;
int sline_82;
char* sname_83;
void* right_value142;
struct sNode* node_84;
void* right_value143;
char* __dec_obj56;
_Bool _if_conditional150;
_Bool _if_conditional153;
_Bool _while_condtional14;
_Bool _if_conditional154;
void* right_value147;
struct sNode* node_88;
_Bool _if_conditional155;
struct sBlock* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_80, 0, sizeof(struct sBlock*));
memset(&block_level_81, 0, sizeof(int));
memset(&sline_82, 0, sizeof(int));
memset(&sname_83, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&node_84, 0, sizeof(struct sNode*));
right_value143 = (void*)0;
right_value147 = (void*)0;
memset(&node_88, 0, sizeof(struct sNode*));
    # 184 "05function2.c"
    result_80=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value141=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value140=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 186 "05function2.c"
    block_level_81=info->block_level;
    # 191 "05function2.c"
    # 187 "05function2.c"
    if(_if_conditional147=!no_block_level,    _if_conditional147) {
        # 188 "05function2.c"
        info->block_level++;
    }
    # 255 "05function2.c"
    # 191 "05function2.c"
    if(_if_conditional148=*info->p==123,    _if_conditional148) {
        # 192 "05function2.c"
        info->p++;
        # 193 "05function2.c"
        skip_spaces_and_lf(info);
        # 241 "05function2.c"
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            # 195 "05function2.c"
            parse_sharp_v5(info);
            # 202 "05function2.c"
            # 196 "05function2.c"
            if(_if_conditional149=*info->p==125,            _if_conditional149) {
                # 197 "05function2.c"
                info->p++;
                # 198 "05function2.c"
                skip_spaces_and_lf(info);
                # 199 "05function2.c"
                break;
            }
            # 202 "05function2.c"
            parse_sharp_v5(info);
            # 204 "05function2.c"
            sline_82=info->sline;
            # 205 "05function2.c"
            sname_83=info->sname;
            # 210 "05function2.c"
            node_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=statment(info))));
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 212 "05function2.c"
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value143=node_84->sname(node_84->_protocol_obj))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 213 "05function2.c"
            info->sline=node_84->sline(node_84->_protocol_obj);
            # 221 "05function2.c"
            # 216 "05function2.c"
            if(_if_conditional150=node_84==((void*)0),            _if_conditional150) {
                # 217 "05function2.c"
                err_msg(info,"Invalid expression");
                # 218 "05function2.c"
                exit(1);
            }
            # 221 "05function2.c"
            list$1sNodeph_push_back(result_80->mNodes,(struct sNode*)come_increment_ref_count(node_84));
            # 223 "05function2.c"
            parse_sharp_v5(info);
            # 229 "05function2.c"
            # 225 "05function2.c"
            if(_if_conditional153=node_84->terminated(node_84->_protocol_obj),            _if_conditional153) {
                # 226 "05function2.c"
                skip_spaces_and_lf(info);
            }
            # 233 "05function2.c"
            while(_while_condtional14=*info->p==59,            _while_condtional14) {
                # 230 "05function2.c"
                info->p++;
                # 231 "05function2.c"
                skip_spaces_and_lf(info);
            }
            # 233 "05function2.c"
            parse_sharp_v5(info);
            # 240 "05function2.c"
            # 235 "05function2.c"
            if(_if_conditional154=*info->p==125,            _if_conditional154) {
                # 236 "05function2.c"
                info->p++;
                # 237 "05function2.c"
                skip_spaces_and_lf(info);
                # 238 "05function2.c"
                if(node_84) { node_84 = come_decrement_ref_count2(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_84) { node_84 = come_decrement_ref_count2(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        # 243 "05function2.c"
        parse_sharp_v5(info);
        # 244 "05function2.c"
        node_88=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 245 "05function2.c"
        parse_sharp_v5(info);
        # 252 "05function2.c"
        # 247 "05function2.c"
        if(_if_conditional155=node_88==((void*)0),        _if_conditional155) {
            # 248 "05function2.c"
            err_msg(info,"Invalid expression");
            # 249 "05function2.c"
            exit(1);
        }
        # 252 "05function2.c"
        list$1sNodeph_push_back(result_80->mNodes,(struct sNode*)come_increment_ref_count(node_88));
        if(node_88) { node_88 = come_decrement_ref_count2(node_88, ((struct sNode*)node_88)->finalize, ((struct sNode*)node_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 255 "05function2.c"
    info->block_level=block_level_81;
    # 257 "05function2.c"
    __result86__ = __result_obj__ = result_80;
    come_call_finalizer2(sBlock_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(sBlock_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional151;
void* right_value144;
struct list_item$1sNodeph* litem_85;
struct sNode* __dec_obj57;
_Bool _if_conditional152;
void* right_value145;
struct list_item$1sNodeph* litem_86;
struct sNode* __dec_obj58;
void* right_value146;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sNodeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional151=self->len==0,                _if_conditional151) {
                    # 226 "./neo-c.h"
                    litem_85=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_85->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_85->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj57=litem_85->item;
                    litem_85->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                    # 232 "./neo-c.h"
                    self->tail=litem_85;
                    # 233 "./neo-c.h"
                    self->head=litem_85;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional152=self->len==1,                    _if_conditional152) {
                        # 236 "./neo-c.h"
                        litem_86=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_86->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_86->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj58=litem_86->item;
                        litem_86->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                        # 242 "./neo-c.h"
                        self->tail=litem_86;
                        # 243 "./neo-c.h"
                        self->head->next=litem_86;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_87->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_87->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj59=litem_87->item;
                        litem_87->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                        # 252 "./neo-c.h"
                        self->tail->next=litem_87;
                        # 253 "./neo-c.h"
                        self->tail=litem_87;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result85__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result85__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional156;
int __result87__;
struct sVarTable* old_table_89;
_Bool _if_conditional157;
void* right_value148;
void* right_value149;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_90;
_Bool _if_conditional158;
struct list$1sTypeph* param_types__91;
struct list$1charph* param_names__92;
_Bool _if_conditional159;
int i_93;
struct list$1charph* o2_saved_94;
char* name_97;
void* right_value150;
struct sType* type_103;
void* right_value151;
int block_level_104;
_Bool _if_conditional166;
_Bool _if_conditional168;
int i_105;
struct list$1sNodeph* o2_saved_106;
struct sNode* node_109;
struct list$1sRightValueObjectph* right_value_objects_112;
void* right_value152;
void* right_value153;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_115;
int sline_116;
void* right_value154;
char* sname_117;
void* right_value155;
char* __dec_obj65;
_Bool _if_conditional178;
void* right_value156;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional179;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_89, 0, sizeof(struct sVarTable*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&current_loop_vtable_90, 0, sizeof(struct sVarTable*));
memset(&param_types__91, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__92, 0, sizeof(struct list$1charph*));
memset(&i_93, 0, sizeof(int));
memset(&o2_saved_94, 0, sizeof(struct list$1charph*));
memset(&name_97, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&type_103, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&block_level_104, 0, sizeof(int));
memset(&i_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1sNodeph*));
memset(&node_109, 0, sizeof(struct sNode*));
memset(&right_value_objects_112, 0, sizeof(struct list$1sRightValueObjectph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&stack_num_before_115, 0, sizeof(int));
memset(&sline_116, 0, sizeof(int));
right_value154 = (void*)0;
memset(&sname_117, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 266 "05function2.c"
    # 262 "05function2.c"
    if(info->output_header_file) {
        # 263 "05function2.c"
        __result87__ = 0;
        return __result87__;
    }
    # 266 "05function2.c"
    old_table_89=info->lv_table;
    # 272 "05function2.c"
    # 267 "05function2.c"
    if(_if_conditional157=!no_var_table,    _if_conditional157) {
        # 268 "05function2.c"
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value149=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value148=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "sVarTable")))),(_Bool)0,old_table_89))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 269 "05function2.c"
        info->lv_table=block->mVarTable;
    }
    # 272 "05function2.c"
    current_loop_vtable_90=info->current_loop_vtable;
    # 277 "05function2.c"
    # 273 "05function2.c"
    if(loop_block) {
        # 274 "05function2.c"
        info->current_loop_vtable=block->mVarTable;
    }
    # 277 "05function2.c"
    param_types__91=info->param_types;
    # 278 "05function2.c"
    param_names__92=info->param_names;
    # 280 "05function2.c"
    info->param_types=param_types;
    # 281 "05function2.c"
    info->param_names=param_names;
    # 294 "05function2.c"
    # 283 "05function2.c"
    if(_if_conditional159=param_types&&param_names,    _if_conditional159) {
        # 284 "05function2.c"
        # 292 "05function2.c"
        for(        o2_saved_94=(param_names),name_97=list$1charph_begin((o2_saved_94));        !list$1charph_end((o2_saved_94));        name_97=list$1charph_next((o2_saved_94))        ){
            # 286 "05function2.c"
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_93), "05function2.c", 286, 0))))));
            come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 287 "05function2.c"
            type_103->mFunctionParam=(_Bool)1;
            # 288 "05function2.c"
            type_103->mAllocaValue=(_Bool)0;
            # 289 "05function2.c"
            add_variable_to_table(name_97,(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type_103)))),info);
            come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 290 "05function2.c"
            i_93++;
            come_call_finalizer2(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 294 "05function2.c"
    block_level_104=info->block_level;
    # 299 "05function2.c"
    # 295 "05function2.c"
    if(_if_conditional166=!no_var_table,    _if_conditional166) {
        # 296 "05function2.c"
        info->block_level++;
    }
    # 342 "05function2.c"
    # 299 "05function2.c"
    if(_if_conditional168=list$1sNodeph_length(block->mNodes)==0,    _if_conditional168) {
    }
    else {
        # 302 "05function2.c"
        # 340 "05function2.c"
        for(        o2_saved_106=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_109=list$1sNodeph_begin((o2_saved_106));        !list$1sNodeph_end((o2_saved_106));        node_109=list$1sNodeph_next((o2_saved_106))        ){
            # 304 "05function2.c"
            right_value_objects_112=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            # 305 "05function2.c"
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value153=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value152=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 307 "05function2.c"
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 308 "05function2.c"
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 309 "05function2.c"
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 311 "05function2.c"
            stack_num_before_115=list$1CVALUEph_length(info->stack);
            # 313 "05function2.c"
            sline_116=info->sline;
            # 314 "05function2.c"
            sname_117=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 316 "05function2.c"
            info->last_statment_is_return=(_Bool)0;
            # 318 "05function2.c"
            info->sline=node_109->sline(node_109->_protocol_obj);
            # 319 "05function2.c"
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value155=node_109->sname(node_109->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 321 "05function2.c"
            info->writing_source_file_position=(_Bool)1;
            # 328 "05function2.c"
            # 323 "05function2.c"
            if(_if_conditional178=!node_compile(node_109,info),            _if_conditional178) {
                # 324 "05function2.c"
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                # 325 "05function2.c"
                exit(2);
            }
            # 328 "05function2.c"
            info->sline=sline_116;
            # 329 "05function2.c"
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(sname_117))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 331 "05function2.c"
            add_last_code_to_source(info);
            # 333 "05function2.c"
            arrange_stack(info,stack_num_before_115);
            # 335 "05function2.c"
            free_right_value_objects(info,(_Bool)0);
            # 337 "05function2.c"
            list$1sRightValueObjectph_reset(info->right_value_objects);
            # 338 "05function2.c"
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_112);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_117 = come_decrement_ref_count2(sname_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 347 "05function2.c"
    # 342 "05function2.c"
    if(_if_conditional179=!no_var_table,    _if_conditional179) {
        # 344 "05function2.c"
        free_objects(info->lv_table,((void*)0),info);
    }
    # 347 "05function2.c"
    info->lv_table=old_table_89;
    # 348 "05function2.c"
    info->block_level=block_level_104;
    # 350 "05function2.c"
    info->param_types=param_types__91;
    # 351 "05function2.c"
    info->param_names=param_names__92;
    # 353 "05function2.c"
    info->current_loop_vtable=current_loop_vtable_90;
    # 355 "05function2.c"
    __result110__ = 0;
    return __result110__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional160;
char* result_95;
char* __result88__;
_Bool _if_conditional161;
char* __result89__;
char* result_96;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(char*));
memset(&result_96, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional160=self==((void*)0),            _if_conditional160) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_95,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result88__ = __result_obj__ = result_95;
                return __result88__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result89__ = __result_obj__ = self->it->item;
                return __result89__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_96,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result90__ = __result_obj__ = result_96;
            return __result90__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result91__ = self==((void*)0)||self->it==((void*)0);
            return __result91__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_98;
char* __result92__;
_Bool _if_conditional163;
char* __result93__;
char* result_99;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_98, 0, sizeof(char*));
memset(&result_99, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional162=self==((void*)0)||self->it==((void*)0),            _if_conditional162) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_98,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result92__ = __result_obj__ = result_98;
                return __result92__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result93__ = __result_obj__ = self->it->item;
                return __result93__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_99,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result94__ = __result_obj__ = result_99;
            return __result94__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional164;
struct list_item$1sTypeph* it_100;
int i_101;
_Bool _while_condtional15;
_Bool _if_conditional165;
struct sType* __result95__;
struct sType* default_value_102;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_100, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_101, 0, sizeof(int));
memset(&default_value_102, 0, sizeof(struct sType*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional164=position<0,                _if_conditional164) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_100=self->head;
                # 687 "./neo-c.h"
                i_101=0;
                # 694 "./neo-c.h"
                while(_while_condtional15=it_100!=((void*)0),                _while_condtional15) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional165=position==i_101,                    _if_conditional165) {
                        # 690 "./neo-c.h"
                        __result95__ = __result_obj__ = it_100->item;
                        return __result95__;
                    }
                    # 692 "./neo-c.h"
                    it_100=it_100->next;
                    # 693 "./neo-c.h"
                    i_101++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_102,0,sizeof(struct sType*));
                # 698 "./neo-c.h"
                __result96__ = __result_obj__ = default_value_102;
                come_call_finalizer2(sType_finalize,default_value_102, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result96__;
                come_call_finalizer2(sType_finalize,default_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional167;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional167=self==((void*)0),        _if_conditional167) {
            # 365 "./neo-c.h"
            __result97__ = 0;
            return __result97__;
        }
        # 367 "./neo-c.h"
        __result98__ = self->len;
        return __result98__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct sNode* result_107;
struct sNode* __result99__;
_Bool _if_conditional170;
struct sNode* __result100__;
struct sNode* result_108;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_107, 0, sizeof(struct sNode*));
memset(&result_108, 0, sizeof(struct sNode*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional169=self==((void*)0),            _if_conditional169) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_107,0,sizeof(struct sNode*));
                # 288 "./neo-c.h"
                __result99__ = __result_obj__ = result_107;
                return __result99__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result100__ = __result_obj__ = self->it->item;
                return __result100__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_108,0,sizeof(struct sNode*));
            # 298 "./neo-c.h"
            __result101__ = __result_obj__ = result_108;
            return __result101__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result102__ = self==((void*)0)||self->it==((void*)0);
            return __result102__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sNode* result_110;
struct sNode* __result103__;
_Bool _if_conditional172;
struct sNode* __result104__;
struct sNode* result_111;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct sNode*));
memset(&result_111, 0, sizeof(struct sNode*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional171=self==((void*)0)||self->it==((void*)0),            _if_conditional171) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_110,0,sizeof(struct sNode*));
                # 305 "./neo-c.h"
                __result103__ = __result_obj__ = result_110;
                return __result103__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result104__ = __result_obj__ = self->it->item;
                return __result104__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_111,0,sizeof(struct sNode*));
            # 316 "./neo-c.h"
            __result105__ = __result_obj__ = result_111;
            return __result105__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
                # 104 "./neo-c.h"
                self->head=((void*)0);
                # 105 "./neo-c.h"
                self->tail=((void*)0);
                # 106 "./neo-c.h"
                self->len=0;
                # 108 "./neo-c.h"
                __result106__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result106__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_113;
_Bool _while_condtional16;
struct list_item$1sRightValueObjectph* prev_it_114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_114, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    # 123 "./neo-c.h"
                    it_113=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional16=it_113!=((void*)0),                    _while_condtional16) {
                        # 125 "./neo-c.h"
                        prev_it_114=it_113;
                        # 126 "./neo-c.h"
                        it_113=it_113->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sRightValueObjectphp_finalize"
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            if(_if_conditional173=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional173) {
                                # 0 "list_item$1sRightValueObjectphp_finalize"
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sRightValueObject_finalize"
                                    # 0 "sRightValueObject_finalize"
                                    if(_if_conditional174=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional174) {
                                        # 0 "sRightValueObject_finalize"
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sRightValueObject_finalize"
                                    # 1 "sRightValueObject_finalize"
                                    if(_if_conditional175=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional175) {
                                        # 1 "sRightValueObject_finalize"
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sRightValueObject_finalize"
                                    # 2 "sRightValueObject_finalize"
                                    if(_if_conditional176=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional176) {
                                        # 2 "sRightValueObject_finalize"
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional177;
int __result107__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./neo-c.h"
                # 364 "./neo-c.h"
                if(_if_conditional177=self==((void*)0),                _if_conditional177) {
                    # 365 "./neo-c.h"
                    __result107__ = 0;
                    return __result107__;
                }
                # 367 "./neo-c.h"
                __result108__ = self->len;
                return __result108__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_118;
_Bool _while_condtional17;
struct list_item$1sRightValueObjectph* prev_it_119;
struct list$1sRightValueObjectph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 433 "./neo-c.h"
                it_118=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional17=it_118!=((void*)0),                _while_condtional17) {
                    # 435 "./neo-c.h"
                    prev_it_119=it_118;
                    # 436 "./neo-c.h"
                    it_118=it_118->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./neo-c.h"
                self->head=((void*)0);
                # 441 "./neo-c.h"
                self->tail=((void*)0);
                # 443 "./neo-c.h"
                self->len=0;
                # 445 "./neo-c.h"
                __result109__ = __result_obj__ = self;
                return __result109__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
    # 364 "05function2.c"
    # 361 "05function2.c"
    if(_if_conditional180=list$1CVALUEph_length(info->stack)>top,    _if_conditional180) {
        # 362 "05function2.c"
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    # 368 "05function2.c"
    # 364 "05function2.c"
    if(_if_conditional181=list$1CVALUEph_length(info->stack)<top,    _if_conditional181) {
        # 365 "05function2.c"
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        # 366 "05function2.c"
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 372 "05function2.c"
    parse_sharp_v5(info);
    # 380 "05function2.c"
    # 373 "05function2.c"
    if(_if_conditional182=*info->p!=c,    _if_conditional182) {
        # 378 "05function2.c"
        # 374 "05function2.c"
        if(_if_conditional183=!info->no_output_err,        _if_conditional183) {
            # 375 "05function2.c"
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            # 376 "05function2.c"
            exit(2);
        }
    }
    # 380 "05function2.c"
    info->p++;
    # 381 "05function2.c"
    skip_spaces_and_lf(info);
    # 383 "05function2.c"
    __result111__ = 0;
    return __result111__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_120;
_Bool _if_conditional184;
_Bool dquort_121;
_Bool squort_122;
int sline_123;
int nest_124;
_Bool _while_condtional18;
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
_Bool _if_conditional201;
_Bool _if_conditional202;
char* tail_125;
void* right_value157;
char* buf_126;
void* right_value158;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_120, 0, sizeof(char*));
memset(&dquort_121, 0, sizeof(_Bool));
memset(&squort_122, 0, sizeof(_Bool));
memset(&sline_123, 0, sizeof(int));
memset(&nest_124, 0, sizeof(int));
memset(&tail_125, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&buf_126, 0, sizeof(char*));
right_value158 = (void*)0;
    # 388 "05function2.c"
    head_120=info->p;
    # 486 "05function2.c"
    # 389 "05function2.c"
    if(_if_conditional184=*info->p==123,    _if_conditional184) {
        # 390 "05function2.c"
        info->p++;
        # 392 "05function2.c"
        dquort_121=(_Bool)0;
        # 393 "05function2.c"
        squort_122=(_Bool)0;
        # 394 "05function2.c"
        sline_123=0;
        # 395 "05function2.c"
        nest_124=0;
        # 481 "05function2.c"
        while(_while_condtional18=1,        _while_condtional18) {
            # 480 "05function2.c"
            # 397 "05function2.c"
            if(dquort_121) {
                # 418 "05function2.c"
                # 398 "05function2.c"
                if(_if_conditional186=*info->p==92,                _if_conditional186) {
                    # 399 "05function2.c"
                    info->p++;
                    # 404 "05function2.c"
                    # 400 "05function2.c"
                    if(_if_conditional187=*info->p==0,                    _if_conditional187) {
                        # 401 "05function2.c"
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_123);
                        # 402 "05function2.c"
                        exit(2);
                    }
                    # 404 "05function2.c"
                    info->p++;
                }
                else {
                    # 418 "05function2.c"
                    # 406 "05function2.c"
                    if(_if_conditional188=*info->p==34,                    _if_conditional188) {
                        # 407 "05function2.c"
                        info->p++;
                        # 408 "05function2.c"
                        dquort_121=!dquort_121;
                    }
                    else {
                        # 411 "05function2.c"
                        info->p++;
                        # 417 "05function2.c"
                        # 413 "05function2.c"
                        if(_if_conditional189=*info->p==0,                        _if_conditional189) {
                            # 414 "05function2.c"
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_123);
                            # 415 "05function2.c"
                            exit(2);
                        }
                    }
                }
            }
            else {
                # 480 "05function2.c"
                # 419 "05function2.c"
                if(squort_122) {
                    # 440 "05function2.c"
                    # 420 "05function2.c"
                    if(_if_conditional191=*info->p==92,                    _if_conditional191) {
                        # 421 "05function2.c"
                        info->p++;
                        # 426 "05function2.c"
                        # 422 "05function2.c"
                        if(_if_conditional192=*info->p==0,                        _if_conditional192) {
                            # 423 "05function2.c"
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_123);
                            # 424 "05function2.c"
                            exit(2);
                        }
                        # 426 "05function2.c"
                        info->p++;
                    }
                    else {
                        # 440 "05function2.c"
                        # 428 "05function2.c"
                        if(_if_conditional193=*info->p==39,                        _if_conditional193) {
                            # 429 "05function2.c"
                            info->p++;
                            # 430 "05function2.c"
                            squort_122=!squort_122;
                        }
                        else {
                            # 433 "05function2.c"
                            info->p++;
                            # 439 "05function2.c"
                            # 435 "05function2.c"
                            if(_if_conditional194=*info->p==0,                            _if_conditional194) {
                                # 436 "05function2.c"
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_123);
                                # 437 "05function2.c"
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    # 480 "05function2.c"
                    # 441 "05function2.c"
                    if(_if_conditional195=*info->p==39,                    _if_conditional195) {
                        # 442 "05function2.c"
                        sline_123=info->sline;
                        # 443 "05function2.c"
                        info->p++;
                        # 444 "05function2.c"
                        squort_122=!squort_122;
                    }
                    else {
                        # 480 "05function2.c"
                        # 446 "05function2.c"
                        if(_if_conditional196=*info->p==34,                        _if_conditional196) {
                            # 447 "05function2.c"
                            sline_123=info->sline;
                            # 448 "05function2.c"
                            info->p++;
                            # 449 "05function2.c"
                            dquort_121=!dquort_121;
                        }
                        else {
                            # 480 "05function2.c"
                            # 451 "05function2.c"
                            if(_if_conditional197=*info->p==35,                            _if_conditional197) {
                                # 452 "05function2.c"
                                parse_sharp_v5(info);
                            }
                            else {
                                # 480 "05function2.c"
                                # 454 "05function2.c"
                                if(_if_conditional198=*info->p==123,                                _if_conditional198) {
                                    # 455 "05function2.c"
                                    info->p++;
                                    # 457 "05function2.c"
                                    nest_124++;
                                }
                                else {
                                    # 480 "05function2.c"
                                    # 459 "05function2.c"
                                    if(_if_conditional199=*info->p==125,                                    _if_conditional199) {
                                        # 460 "05function2.c"
                                        info->p++;
                                        # 467 "05function2.c"
                                        # 462 "05function2.c"
                                        if(_if_conditional200=nest_124==0,                                        _if_conditional200) {
                                            # 463 "05function2.c"
                                            skip_spaces_and_lf(info);
                                            # 464 "05function2.c"
                                            break;
                                        }
                                        # 467 "05function2.c"
                                        nest_124--;
                                    }
                                    else {
                                        # 480 "05function2.c"
                                        # 469 "05function2.c"
                                        if(_if_conditional201=*info->p==0,                                        _if_conditional201) {
                                            # 470 "05function2.c"
                                            err_msg(info,"The block requires } character for closing block");
                                            # 471 "05function2.c"
                                            exit(2);
                                        }
                                        else {
                                            # 480 "05function2.c"
                                            # 473 "05function2.c"
                                            if(_if_conditional202=*info->p==10,                                            _if_conditional202) {
                                                # 474 "05function2.c"
                                                info->p++;
                                                # 475 "05function2.c"
                                                info->sline++;
                                            }
                                            else {
                                                # 478 "05function2.c"
                                                info->p++;
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
    else {
        # 483 "05function2.c"
        err_msg(info,"Require block. This is %c",*info->p);
    }
    # 486 "05function2.c"
    tail_125=info->p;
    # 488 "05function2.c"
    buf_126=(char*)come_increment_ref_count(((char*)(right_value157=(char*)come_calloc(1, sizeof(char)*(1*(tail_125-head_120+1)), "05function2.c", 488, "char"))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 489 "05function2.c"
    memcpy(buf_126,head_120,tail_125-head_120);
    # 490 "05function2.c"
    buf_126[tail_125-head_120]=0;
    # 492 "05function2.c"
    __result112__ = __result_obj__ = ((char*)(right_value158=__builtin_string(buf_126)));
    buf_126 = come_decrement_ref_count2(buf_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
    buf_126 = come_decrement_ref_count2(buf_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_127;
char* p3_128;
int i_129;
_Bool _if_conditional203;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_127, 0, sizeof(_Bool));
memset(&p3_128, 0, sizeof(char*));
memset(&i_129, 0, sizeof(int));
    # 497 "05function2.c"
    terminated_127=(_Bool)0;
    # 498 "05function2.c"
    p3_128=p;
    # 506 "05function2.c"
    for(    i_129=0;    i_129<strlen(p2);    i_129++    ){
        # 504 "05function2.c"
        # 500 "05function2.c"
        if(_if_conditional203=*p3_128==0,        _if_conditional203) {
            # 501 "05function2.c"
            terminated_127=(_Bool)1;
            # 502 "05function2.c"
            break;
        }
        # 504 "05function2.c"
        p3_128++;
    }
    # 506 "05function2.c"
    __result113__ = !terminated_127&&memcmp(p,p2,strlen(p2))==0;
    return __result113__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value159;
void* right_value160;
struct buffer* asm_fun_name_130;
_Bool _while_condtional19;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
int brace_num_131;
_Bool _while_condtional20;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
int len_132;
_Bool in_dquort_133;
int brace_num_134;
_Bool _while_condtional21;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
int brace_num_135;
_Bool _while_condtional22;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value161;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&asm_fun_name_130, 0, sizeof(struct buffer*));
memset(&brace_num_131, 0, sizeof(int));
memset(&len_132, 0, sizeof(int));
memset(&in_dquort_133, 0, sizeof(_Bool));
memset(&brace_num_134, 0, sizeof(int));
memset(&brace_num_135, 0, sizeof(int));
right_value161 = (void*)0;
    # 511 "05function2.c"
    asm_fun_name_130=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 626 "05function2.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 624 "05function2.c"
        # 514 "05function2.c"
        if(_if_conditional204=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional204) {
            # 515 "05function2.c"
            info->p+=strlen("__attribute_pure__");
            # 516 "05function2.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 624 "05function2.c"
            # 518 "05function2.c"
            if(_if_conditional205=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional205) {
                # 519 "05function2.c"
                info->p+=strlen("__attribute_malloc__");
                # 520 "05function2.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 624 "05function2.c"
                # 522 "05function2.c"
                if(_if_conditional206=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional206) {
                    # 523 "05function2.c"
                    info->p+=strlen("__attr_dealloc_fclose");
                    # 524 "05function2.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 624 "05function2.c"
                    # 526 "05function2.c"
                    if(_if_conditional207=strmemcmp(info->p,"__wur"),                    _if_conditional207) {
                        # 527 "05function2.c"
                        info->p+=strlen("__wur");
                        # 528 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 624 "05function2.c"
                        # 530 "05function2.c"
                        if(_if_conditional208=strmemcmp(info->p,"__noreturn"),                        _if_conditional208) {
                            # 531 "05function2.c"
                            info->p+=strlen("__noreturn");
                            # 532 "05function2.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 624 "05function2.c"
                            # 534 "05function2.c"
                            if(_if_conditional209=strmemcmp(info->p,"__attribute__"),                            _if_conditional209) {
                                # 535 "05function2.c"
                                info->p+=strlen("__attribute__");
                                # 536 "05function2.c"
                                skip_spaces_and_lf(info);
                                # 538 "05function2.c"
                                brace_num_131=0;
                                # 557 "05function2.c"
                                while(_while_condtional20=*info->p,                                _while_condtional20) {
                                    # 555 "05function2.c"
                                    # 540 "05function2.c"
                                    if(_if_conditional210=*info->p==40,                                    _if_conditional210) {
                                        # 541 "05function2.c"
                                        info->p++;
                                        # 542 "05function2.c"
                                        brace_num_131++;
                                    }
                                    else {
                                        # 555 "05function2.c"
                                        # 544 "05function2.c"
                                        if(_if_conditional211=*info->p==41,                                        _if_conditional211) {
                                            # 545 "05function2.c"
                                            info->p++;
                                            # 546 "05function2.c"
                                            brace_num_131--;
                                            # 551 "05function2.c"
                                            # 548 "05function2.c"
                                            if(_if_conditional212=brace_num_131==0,                                            _if_conditional212) {
                                                # 549 "05function2.c"
                                                break;
                                            }
                                        }
                                        else {
                                            # 553 "05function2.c"
                                            info->p++;
                                        }
                                    }
                                }
                                # 557 "05function2.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 624 "05function2.c"
                                # 559 "05function2.c"
                                if(_if_conditional213=strmemcmp(info->p,"__asm__"),                                _if_conditional213) {
                                    # 560 "05function2.c"
                                    info->p+=strlen("__asm__");
                                    # 561 "05function2.c"
                                    skip_spaces_and_lf(info);
                                    # 563 "05function2.c"
                                    len_132=0;
                                    # 565 "05function2.c"
                                    in_dquort_133=(_Bool)0;
                                    # 566 "05function2.c"
                                    brace_num_134=0;
                                    # 594 "05function2.c"
                                    while(_while_condtional21=*info->p,                                    _while_condtional21) {
                                        # 592 "05function2.c"
                                        # 568 "05function2.c"
                                        if(_if_conditional214=*info->p==34,                                        _if_conditional214) {
                                            # 569 "05function2.c"
                                            info->p++;
                                            # 571 "05function2.c"
                                            in_dquort_133=!in_dquort_133;
                                        }
                                        else {
                                            # 592 "05function2.c"
                                            # 573 "05function2.c"
                                            if(in_dquort_133) {
                                                # 574 "05function2.c"
                                                buffer_append_char(asm_fun_name_130,*info->p);
                                                # 575 "05function2.c"
                                                info->p++;
                                            }
                                            else {
                                                # 592 "05function2.c"
                                                # 577 "05function2.c"
                                                if(_if_conditional216=*info->p==40,                                                _if_conditional216) {
                                                    # 578 "05function2.c"
                                                    info->p++;
                                                    # 579 "05function2.c"
                                                    brace_num_134++;
                                                }
                                                else {
                                                    # 592 "05function2.c"
                                                    # 581 "05function2.c"
                                                    if(_if_conditional217=*info->p==41,                                                    _if_conditional217) {
                                                        # 582 "05function2.c"
                                                        info->p++;
                                                        # 583 "05function2.c"
                                                        brace_num_134--;
                                                        # 588 "05function2.c"
                                                        # 585 "05function2.c"
                                                        if(_if_conditional218=brace_num_134==0,                                                        _if_conditional218) {
                                                            # 586 "05function2.c"
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        # 590 "05function2.c"
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 594 "05function2.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 624 "05function2.c"
                                    # 596 "05function2.c"
                                    if(_if_conditional219=strmemcmp(info->p,"__asm"),                                    _if_conditional219) {
                                        # 597 "05function2.c"
                                        info->p+=strlen("__asm");
                                        # 598 "05function2.c"
                                        skip_spaces_and_lf(info);
                                        # 600 "05function2.c"
                                        brace_num_135=0;
                                        # 619 "05function2.c"
                                        while(_while_condtional22=*info->p,                                        _while_condtional22) {
                                            # 617 "05function2.c"
                                            # 602 "05function2.c"
                                            if(_if_conditional220=*info->p==40,                                            _if_conditional220) {
                                                # 603 "05function2.c"
                                                info->p++;
                                                # 604 "05function2.c"
                                                brace_num_135++;
                                            }
                                            else {
                                                # 617 "05function2.c"
                                                # 606 "05function2.c"
                                                if(_if_conditional221=*info->p==41,                                                _if_conditional221) {
                                                    # 607 "05function2.c"
                                                    info->p++;
                                                    # 608 "05function2.c"
                                                    brace_num_135--;
                                                    # 613 "05function2.c"
                                                    # 610 "05function2.c"
                                                    if(_if_conditional222=brace_num_135==0,                                                    _if_conditional222) {
                                                        # 611 "05function2.c"
                                                        break;
                                                    }
                                                }
                                                else {
                                                    # 615 "05function2.c"
                                                    info->p++;
                                                }
                                            }
                                        }
                                        # 619 "05function2.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 622 "05function2.c"
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 626 "05function2.c"
    __result114__ = __result_obj__ = ((char*)(right_value161=buffer_to_string(asm_fun_name_130)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional23;
char* head_136;
int head_sline_137;
void* right_value162;
char* buf_138;
_Bool _if_conditional223;
void* right_value163;
struct sNode* node_139;
_Bool _while_condtional24;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_136, 0, sizeof(char*));
memset(&head_sline_137, 0, sizeof(int));
right_value162 = (void*)0;
memset(&buf_138, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&node_139, 0, sizeof(struct sNode*));
    # 671 "05function2.c"
    while(_while_condtional23=*info->p,    _while_condtional23) {
        # 632 "05function2.c"
        parse_sharp_v5(info);
        # 634 "05function2.c"
        head_136=info->p;
        # 635 "05function2.c"
        head_sline_137=info->sline;
        # 636 "05function2.c"
        buf_138=(char*)come_increment_ref_count(((char*)(right_value162=parse_word(info))));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 638 "05function2.c"
        parse_sharp_v5(info);
        # 646 "05function2.c"
        # 640 "05function2.c"
        if(_if_conditional223=block&&*info->p==125,        _if_conditional223) {
            # 641 "05function2.c"
            info->p++;
            # 642 "05function2.c"
            skip_spaces_and_lf(info);
            # 643 "05function2.c"
            buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        # 646 "05function2.c"
        node_139=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=top_level_v99(buf_138,head_136,head_sline_137,info))));
        if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 647 "05function2.c"
        parse_sharp_v5(info);
        # 653 "05function2.c"
        while(_while_condtional24=*info->p==59,        _while_condtional24) {
            # 650 "05function2.c"
            info->p++;
            # 651 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 653 "05function2.c"
        parse_sharp_v5(info);
        # 661 "05function2.c"
        # 655 "05function2.c"
        if(_if_conditional224=node_139!=((void*)0),        _if_conditional224) {
            # 660 "05function2.c"
            # 656 "05function2.c"
            if(_if_conditional225=!node_compile(node_139,info),            _if_conditional225) {
                # 657 "05function2.c"
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                # 658 "05function2.c"
                exit(2);
            }
        }
        # 661 "05function2.c"
        parse_sharp_v5(info);
        # 663 "05function2.c"
        skip_spaces_and_lf(info);
        # 670 "05function2.c"
        # 665 "05function2.c"
        if(_if_conditional226=block&&*info->p==125,        _if_conditional226) {
            # 666 "05function2.c"
            info->p++;
            # 667 "05function2.c"
            skip_spaces_and_lf(info);
            # 668 "05function2.c"
            buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* name_140;
void* right_value165;
void* right_value166;
struct sType* result_type_141;
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
struct sType* __list_values1___142[5];
void* right_value180;
void* right_value181;
struct list$1sTypeph* param_types_147;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
char* __list_values2___148[5];
void* right_value190;
void* right_value191;
struct list$1charph* param_names_153;
void* right_value192;
void* right_value193;
struct list$1charph* param_default_parametors_154;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
struct sFun* main_fun_155;
void* right_value207;
void* right_value208;
char* name_200;
void* right_value209;
void* right_value210;
struct sType* result_type_201;
void* right_value211;
void* right_value212;
struct sType* __list_values3___202[1];
void* right_value213;
void* right_value214;
struct list$1sTypeph* param_types_203;
void* right_value215;
char* __list_values4___204[1];
void* right_value216;
void* right_value217;
struct list$1charph* param_names_205;
void* right_value218;
void* right_value219;
struct list$1charph* param_default_parametors_206;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct sFun* main_fun_207;
void* right_value224;
void* right_value225;
char* name_208;
void* right_value226;
void* right_value227;
struct sType* result_type_209;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
struct sType* __list_values5___210[7];
void* right_value242;
void* right_value243;
struct list$1sTypeph* param_types_211;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
char* __list_values6___212[7];
void* right_value251;
void* right_value252;
struct list$1charph* param_names_213;
void* right_value253;
void* right_value254;
struct list$1charph* param_default_parametors_214;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
struct sFun* main_fun_215;
void* right_value259;
void* right_value260;
char* name_216;
void* right_value261;
void* right_value262;
struct sType* result_type_217;
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
struct sType* __list_values7___218[5];
void* right_value273;
void* right_value274;
struct list$1sTypeph* param_types_219;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
char* __list_values8___220[5];
void* right_value280;
void* right_value281;
struct list$1charph* param_names_221;
void* right_value282;
void* right_value283;
struct list$1charph* param_default_parametors_222;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
struct sFun* main_fun_223;
void* right_value288;
void* right_value289;
char* name_224;
void* right_value290;
void* right_value291;
struct sType* result_type_225;
void* right_value292;
void* right_value293;
struct sType* __list_values9___226[1];
void* right_value294;
void* right_value295;
struct list$1sTypeph* param_types_227;
void* right_value296;
char* __list_values10___228[1];
void* right_value297;
void* right_value298;
struct list$1charph* param_names_229;
void* right_value299;
void* right_value300;
struct list$1charph* param_default_parametors_230;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
struct sFun* main_fun_231;
void* right_value305;
void* right_value306;
char* name_232;
void* right_value307;
void* right_value308;
struct sType* result_type_233;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __list_values11___234[4];
void* right_value317;
void* right_value318;
struct list$1sTypeph* param_types_235;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
char* __list_values12___236[4];
void* right_value323;
void* right_value324;
struct list$1charph* param_names_237;
void* right_value325;
void* right_value326;
struct list$1charph* param_default_parametors_238;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
struct sFun* main_fun_239;
void* right_value334;
void* right_value335;
char* name_240;
void* right_value336;
void* right_value337;
struct sType* result_type_241;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sType* __list_values13___242[3];
void* right_value344;
void* right_value345;
struct list$1sTypeph* param_types_243;
void* right_value346;
void* right_value347;
void* right_value348;
char* __list_values14___244[3];
void* right_value349;
void* right_value350;
struct list$1charph* param_names_245;
void* right_value351;
void* right_value352;
struct list$1charph* param_default_parametors_246;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
struct sFun* main_fun_247;
void* right_value357;
void* right_value358;
char* name_248;
void* right_value359;
void* right_value360;
struct sType* result_type_249;
void* right_value361;
void* right_value362;
struct sType* __list_values15___250[1];
void* right_value363;
void* right_value364;
struct list$1sTypeph* param_types_251;
void* right_value365;
char* __list_values16___252[1];
void* right_value366;
void* right_value367;
struct list$1charph* param_names_253;
void* right_value368;
void* right_value369;
struct list$1charph* param_default_parametors_254;
void* right_value370;
void* right_value371;
void* right_value372;
void* right_value373;
struct sFun* main_fun_255;
void* right_value374;
void* right_value375;
char* name_256;
void* right_value376;
void* right_value377;
struct sType* result_type_257;
void* right_value378;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
struct sType* __list_values17___258[3];
void* right_value384;
void* right_value385;
struct list$1sTypeph* param_types_259;
void* right_value386;
void* right_value387;
void* right_value388;
char* __list_values18___260[3];
void* right_value389;
void* right_value390;
struct list$1charph* param_names_261;
void* right_value391;
void* right_value392;
struct list$1charph* param_default_parametors_262;
void* right_value393;
void* right_value394;
void* right_value395;
void* right_value396;
struct sFun* main_fun_263;
void* right_value397;
void* right_value398;
char* name_264;
void* right_value399;
void* right_value400;
struct sType* result_type_265;
void* right_value401;
void* right_value402;
struct list$1sTypeph* param_types_266;
void* right_value403;
void* right_value404;
struct list$1charph* param_names_267;
void* right_value405;
void* right_value406;
struct list$1charph* param_default_parametors_268;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sFun* main_fun_269;
void* right_value411;
void* right_value412;
char* name_270;
void* right_value413;
void* right_value414;
struct sType* result_type_271;
void* right_value415;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
void* right_value421;
void* right_value422;
struct sType* __list_values19___272[4];
void* right_value423;
void* right_value424;
struct list$1sTypeph* param_types_273;
void* right_value425;
void* right_value426;
void* right_value427;
void* right_value428;
char* __list_values20___274[4];
void* right_value429;
void* right_value430;
struct list$1charph* param_names_275;
void* right_value431;
void* right_value432;
struct list$1charph* param_default_parametors_276;
void* right_value433;
void* right_value434;
void* right_value435;
void* right_value436;
struct sFun* main_fun_277;
void* right_value437;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&name_140, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&result_type_141, 0, sizeof(struct sType*));
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
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&param_types_147, 0, sizeof(struct list$1sTypeph*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&param_names_153, 0, sizeof(struct list$1charph*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&param_default_parametors_154, 0, sizeof(struct list$1charph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&main_fun_155, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&name_200, 0, sizeof(char*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&result_type_201, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&param_types_203, 0, sizeof(struct list$1sTypeph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&param_names_205, 0, sizeof(struct list$1charph*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&param_default_parametors_206, 0, sizeof(struct list$1charph*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&main_fun_207, 0, sizeof(struct sFun*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&name_208, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&result_type_209, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
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
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&param_types_211, 0, sizeof(struct list$1sTypeph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&param_names_213, 0, sizeof(struct list$1charph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&param_default_parametors_214, 0, sizeof(struct list$1charph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&main_fun_215, 0, sizeof(struct sFun*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&name_216, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&result_type_217, 0, sizeof(struct sType*));
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
memset(&param_types_219, 0, sizeof(struct list$1sTypeph*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&param_names_221, 0, sizeof(struct list$1charph*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_default_parametors_222, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&main_fun_223, 0, sizeof(struct sFun*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&name_224, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&result_type_225, 0, sizeof(struct sType*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&param_types_227, 0, sizeof(struct list$1sTypeph*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&param_names_229, 0, sizeof(struct list$1charph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_default_parametors_230, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&main_fun_231, 0, sizeof(struct sFun*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&name_232, 0, sizeof(char*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&result_type_233, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_235, 0, sizeof(struct list$1sTypeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&param_names_237, 0, sizeof(struct list$1charph*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_default_parametors_238, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&main_fun_239, 0, sizeof(struct sFun*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&name_240, 0, sizeof(char*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&result_type_241, 0, sizeof(struct sType*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&param_types_243, 0, sizeof(struct list$1sTypeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
memset(&param_names_245, 0, sizeof(struct list$1charph*));
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_default_parametors_246, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&main_fun_247, 0, sizeof(struct sFun*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&name_248, 0, sizeof(char*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&result_type_249, 0, sizeof(struct sType*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_types_251, 0, sizeof(struct list$1sTypeph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&param_names_253, 0, sizeof(struct list$1charph*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&param_default_parametors_254, 0, sizeof(struct list$1charph*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&main_fun_255, 0, sizeof(struct sFun*));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&name_256, 0, sizeof(char*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&result_type_257, 0, sizeof(struct sType*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&param_types_259, 0, sizeof(struct list$1sTypeph*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&param_names_261, 0, sizeof(struct list$1charph*));
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&param_default_parametors_262, 0, sizeof(struct list$1charph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&main_fun_263, 0, sizeof(struct sFun*));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&name_264, 0, sizeof(char*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&result_type_265, 0, sizeof(struct sType*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&param_types_266, 0, sizeof(struct list$1sTypeph*));
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&param_names_267, 0, sizeof(struct list$1charph*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&param_default_parametors_268, 0, sizeof(struct list$1charph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&main_fun_269, 0, sizeof(struct sFun*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&name_270, 0, sizeof(char*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&result_type_271, 0, sizeof(struct sType*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&param_types_273, 0, sizeof(struct list$1sTypeph*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&param_names_275, 0, sizeof(struct list$1charph*));
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&param_default_parametors_276, 0, sizeof(struct list$1charph*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&main_fun_277, 0, sizeof(struct sFun*));
right_value437 = (void*)0;
    # 675 "05function2.c"
    skip_spaces_and_lf(info);
    # 676 "05function2.c"
    parse_sharp_v5(info);
    # 698 "05function2.c"
    {
        # 679 "05function2.c"
        name_140=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("come_calloc"))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 680 "05function2.c"
        result_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 681 "05function2.c"
        {__list_values1___142[0]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___142[1]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___142[2]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___142[3]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___142[4]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_147=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value180=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___142))));
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 682 "05function2.c"
        {__list_values2___148[0]=come_increment_ref_count(((char*)(right_value182=__builtin_string("count"))));
__list_values2___148[1]=come_increment_ref_count(((char*)(right_value183=__builtin_string("size"))));
__list_values2___148[2]=come_increment_ref_count(((char*)(right_value184=__builtin_string("sname"))));
__list_values2___148[3]=come_increment_ref_count(((char*)(right_value185=__builtin_string("sline"))));
__list_values2___148[4]=come_increment_ref_count(((char*)(right_value186=__builtin_string("class_name"))));
}        param_names_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value190=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___148))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 683 "05function2.c"
        param_default_parametors_154=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 684 "05function2.c"
        list$1charph_push_back(param_default_parametors_154,((void*)0));
        # 685 "05function2.c"
        list$1charph_push_back(param_default_parametors_154,((void*)0));
        # 686 "05function2.c"
        list$1charph_push_back(param_default_parametors_154,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("null")))));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 687 "05function2.c"
        list$1charph_push_back(param_default_parametors_154,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("0")))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 688 "05function2.c"
        list$1charph_push_back(param_default_parametors_154,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("null")))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 694 "05function2.c"
        main_fun_155=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value200=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value197=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "sFun")))),(char*)come_increment_ref_count(name_140),(struct sType*)come_increment_ref_count(result_type_141),(struct list$1sTypeph*)come_increment_ref_count(param_types_147),(struct list$1charph*)come_increment_ref_count(param_names_153),(struct list$1charph*)come_increment_ref_count(param_default_parametors_154),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 696 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(name_140)))),(struct sFun*)come_increment_ref_count(main_fun_155));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_140 = come_decrement_ref_count2(name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 713 "05function2.c"
    {
        # 699 "05function2.c"
        name_200=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("come_increment_ref_count"))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 700 "05function2.c"
        result_type_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 701 "05function2.c"
        {__list_values3___202[0]=come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_203=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___202))));
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 702 "05function2.c"
        {__list_values4___204[0]=come_increment_ref_count(((char*)(right_value215=__builtin_string("mem"))));
}        param_names_205=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___204))));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 703 "05function2.c"
        param_default_parametors_206=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 709 "05function2.c"
        main_fun_207=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value223=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "sFun")))),(char*)come_increment_ref_count(name_200),(struct sType*)come_increment_ref_count(result_type_201),(struct list$1sTypeph*)come_increment_ref_count(param_types_203),(struct list$1charph*)come_increment_ref_count(param_names_205),(struct list$1charph*)come_increment_ref_count(param_default_parametors_206),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 711 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(name_200)))),(struct sFun*)come_increment_ref_count(main_fun_207));
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_200 = come_decrement_ref_count2(name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 728 "05function2.c"
    {
        # 714 "05function2.c"
        name_208=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("come_call_finalizer"))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 715 "05function2.c"
        result_type_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 716 "05function2.c"
        {__list_values5___210[0]=come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___210[1]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___210[2]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___210[3]=come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___210[4]=come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___210[5]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___210[6]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_211=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value243=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value242=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___210))));
        come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 717 "05function2.c"
        {__list_values6___212[0]=come_increment_ref_count(((char*)(right_value244=__builtin_string("fun"))));
__list_values6___212[1]=come_increment_ref_count(((char*)(right_value245=__builtin_string("mem"))));
__list_values6___212[2]=come_increment_ref_count(((char*)(right_value246=__builtin_string("protocol_fun"))));
__list_values6___212[3]=come_increment_ref_count(((char*)(right_value247=__builtin_string("protocol_obj"))));
__list_values6___212[4]=come_increment_ref_count(((char*)(right_value248=__builtin_string("call_finalizer_only"))));
__list_values6___212[5]=come_increment_ref_count(((char*)(right_value249=__builtin_string("no_decrement"))));
__list_values6___212[6]=come_increment_ref_count(((char*)(right_value250=__builtin_string("no_free"))));
}        param_names_213=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value252=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value251=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___212))));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 718 "05function2.c"
        param_default_parametors_214=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 724 "05function2.c"
        main_fun_215=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value258=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value255=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "sFun")))),(char*)come_increment_ref_count(name_208),(struct sType*)come_increment_ref_count(result_type_209),(struct list$1sTypeph*)come_increment_ref_count(param_types_211),(struct list$1charph*)come_increment_ref_count(param_names_213),(struct list$1charph*)come_increment_ref_count(param_default_parametors_214),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 726 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name_208)))),(struct sFun*)come_increment_ref_count(main_fun_215));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_208 = come_decrement_ref_count2(name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 743 "05function2.c"
    {
        # 729 "05function2.c"
        name_216=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("come_decrement_ref_count"))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 730 "05function2.c"
        result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 731 "05function2.c"
        {__list_values7___218[0]=come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___218[1]=come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___218[2]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___218[3]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___218[4]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_219=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___218))));
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 732 "05function2.c"
        {__list_values8___220[0]=come_increment_ref_count(((char*)(right_value275=__builtin_string("mem"))));
__list_values8___220[1]=come_increment_ref_count(((char*)(right_value276=__builtin_string("protocol_fun"))));
__list_values8___220[2]=come_increment_ref_count(((char*)(right_value277=__builtin_string("protocol_obj"))));
__list_values8___220[3]=come_increment_ref_count(((char*)(right_value278=__builtin_string("no_decrement"))));
__list_values8___220[4]=come_increment_ref_count(((char*)(right_value279=__builtin_string("no_free"))));
}        param_names_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value281=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value280=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___220))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 733 "05function2.c"
        param_default_parametors_222=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 739 "05function2.c"
        main_fun_223=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value287=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value284=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "sFun")))),(char*)come_increment_ref_count(name_216),(struct sType*)come_increment_ref_count(result_type_217),(struct list$1sTypeph*)come_increment_ref_count(param_types_219),(struct list$1charph*)come_increment_ref_count(param_names_221),(struct list$1charph*)come_increment_ref_count(param_default_parametors_222),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 741 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(name_216)))),(struct sFun*)come_increment_ref_count(main_fun_223));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 758 "05function2.c"
    {
        # 744 "05function2.c"
        name_224=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("come_free_object"))));
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 745 "05function2.c"
        result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 746 "05function2.c"
        {__list_values9___226[0]=come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_227=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value295=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value294=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___226))));
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 747 "05function2.c"
        {__list_values10___228[0]=come_increment_ref_count(((char*)(right_value296=__builtin_string("mem"))));
}        param_names_229=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value298=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value297=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___228))));
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 748 "05function2.c"
        param_default_parametors_230=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 754 "05function2.c"
        main_fun_231=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value304=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value301=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "sFun")))),(char*)come_increment_ref_count(name_224),(struct sType*)come_increment_ref_count(result_type_225),(struct list$1sTypeph*)come_increment_ref_count(param_types_227),(struct list$1charph*)come_increment_ref_count(param_names_229),(struct list$1charph*)come_increment_ref_count(param_default_parametors_230),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 756 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(name_224)))),(struct sFun*)come_increment_ref_count(main_fun_231));
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 777 "05function2.c"
    {
        # 759 "05function2.c"
        name_232=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string("come_memdup"))));
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 760 "05function2.c"
        result_type_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 761 "05function2.c"
        {__list_values11___234[0]=come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___234[1]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___234[2]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___234[3]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_235=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___234))));
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 762 "05function2.c"
        {__list_values12___236[0]=come_increment_ref_count(((char*)(right_value319=__builtin_string("block"))));
__list_values12___236[1]=come_increment_ref_count(((char*)(right_value320=__builtin_string("sname"))));
__list_values12___236[2]=come_increment_ref_count(((char*)(right_value321=__builtin_string("sline"))));
__list_values12___236[3]=come_increment_ref_count(((char*)(right_value322=__builtin_string("class_name"))));
}        param_names_237=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___236))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 763 "05function2.c"
        param_default_parametors_238=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 764 "05function2.c"
        list$1charph_push_back(param_default_parametors_238,((void*)0));
        # 765 "05function2.c"
        list$1charph_push_back(param_default_parametors_238,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("null")))));
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 766 "05function2.c"
        list$1charph_push_back(param_default_parametors_238,(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("0")))));
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 767 "05function2.c"
        list$1charph_push_back(param_default_parametors_238,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("null")))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 773 "05function2.c"
        main_fun_239=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value333=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value330=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "sFun")))),(char*)come_increment_ref_count(name_232),(struct sType*)come_increment_ref_count(result_type_233),(struct list$1sTypeph*)come_increment_ref_count(param_types_235),(struct list$1charph*)come_increment_ref_count(param_names_237),(struct list$1charph*)come_increment_ref_count(param_default_parametors_238),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 775 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(name_232)))),(struct sFun*)come_increment_ref_count(main_fun_239));
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_232 = come_decrement_ref_count2(name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 792 "05function2.c"
    {
        # 778 "05function2.c"
        name_240=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string("memset"))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 779 "05function2.c"
        result_type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value336=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 780 "05function2.c"
        {__list_values13___242[0]=come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___242[1]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___242[2]=come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_243=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value345=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value344=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___242))));
        come_call_finalizer2(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 781 "05function2.c"
        {__list_values14___244[0]=come_increment_ref_count(((char*)(right_value346=__builtin_string("b"))));
__list_values14___244[1]=come_increment_ref_count(((char*)(right_value347=__builtin_string("c"))));
__list_values14___244[2]=come_increment_ref_count(((char*)(right_value348=__builtin_string("len"))));
}        param_names_245=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value350=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value349=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___244))));
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 782 "05function2.c"
        param_default_parametors_246=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value352=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 788 "05function2.c"
        main_fun_247=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value356=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value353=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "sFun")))),(char*)come_increment_ref_count(name_240),(struct sType*)come_increment_ref_count(result_type_241),(struct list$1sTypeph*)come_increment_ref_count(param_types_243),(struct list$1charph*)come_increment_ref_count(param_names_245),(struct list$1charph*)come_increment_ref_count(param_default_parametors_246),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 790 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string(name_240)))),(struct sFun*)come_increment_ref_count(main_fun_247));
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 807 "05function2.c"
    {
        # 793 "05function2.c"
        name_248=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string("__builtin_string"))));
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 794 "05function2.c"
        result_type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value359=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 795 "05function2.c"
        {__list_values15___250[0]=come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_251=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value364=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value363=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___250))));
        come_call_finalizer2(sType_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 796 "05function2.c"
        {__list_values16___252[0]=come_increment_ref_count(((char*)(right_value365=__builtin_string("str"))));
}        param_names_253=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value367=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___252))));
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 797 "05function2.c"
        param_default_parametors_254=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value368=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 803 "05function2.c"
        main_fun_255=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value373=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value370=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "sFun")))),(char*)come_increment_ref_count(name_248),(struct sType*)come_increment_ref_count(result_type_249),(struct list$1sTypeph*)come_increment_ref_count(param_types_251),(struct list$1charph*)come_increment_ref_count(param_names_253),(struct list$1charph*)come_increment_ref_count(param_default_parametors_254),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value371=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value372=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 805 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(name_248)))),(struct sFun*)come_increment_ref_count(main_fun_255));
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_248 = come_decrement_ref_count2(name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 823 "05function2.c"
    {
        # 808 "05function2.c"
        name_256=(char*)come_increment_ref_count(((char*)(right_value375=__builtin_string("come_heap_init"))));
        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 809 "05function2.c"
        result_type_257=(struct sType*)come_increment_ref_count(((struct sType*)(right_value377=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value376=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 810 "05function2.c"
        {__list_values17___258[0]=come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___258[1]=come_increment_ref_count(((struct sType*)(right_value381=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value380=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___258[2]=come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_259=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value385=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value384=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___258))));
        come_call_finalizer2(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 811 "05function2.c"
        {__list_values18___260[0]=come_increment_ref_count(((char*)(right_value386=xsprintf("come_malloc"))));
__list_values18___260[1]=come_increment_ref_count(((char*)(right_value387=xsprintf("come_debug"))));
__list_values18___260[2]=come_increment_ref_count(((char*)(right_value388=xsprintf("come_gc"))));
}        param_names_261=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___260))));
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 812 "05function2.c"
        param_default_parametors_262=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 813 "05function2.c"
        list$1charph_push_back(param_default_parametors_262,((void*)0));
        # 819 "05function2.c"
        main_fun_263=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value396=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value393=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "sFun")))),(char*)come_increment_ref_count(name_256),(struct sType*)come_increment_ref_count(result_type_257),(struct list$1sTypeph*)come_increment_ref_count(param_types_259),(struct list$1charph*)come_increment_ref_count(param_names_261),(struct list$1charph*)come_increment_ref_count(param_default_parametors_262),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value395=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 821 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value397=__builtin_string(name_256)))),(struct sFun*)come_increment_ref_count(main_fun_263));
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 838 "05function2.c"
    {
        # 824 "05function2.c"
        name_264=(char*)come_increment_ref_count(((char*)(right_value398=__builtin_string("come_heap_final"))));
        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 825 "05function2.c"
        result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value400=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value399=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 826 "05function2.c"
        param_types_266=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value402=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value401=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 827 "05function2.c"
        param_names_267=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 828 "05function2.c"
        param_default_parametors_268=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 834 "05function2.c"
        main_fun_269=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value410=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value407=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "sFun")))),(char*)come_increment_ref_count(name_264),(struct sType*)come_increment_ref_count(result_type_265),(struct list$1sTypeph*)come_increment_ref_count(param_types_266),(struct list$1charph*)come_increment_ref_count(param_names_267),(struct list$1charph*)come_increment_ref_count(param_default_parametors_268),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 836 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(name_264)))),(struct sFun*)come_increment_ref_count(main_fun_269));
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 854 "05function2.c"
    {
        # 839 "05function2.c"
        name_270=(char*)come_increment_ref_count(((char*)(right_value412=__builtin_string("come_null_check"))));
        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 840 "05function2.c"
        result_type_271=(struct sType*)come_increment_ref_count(((struct sType*)(right_value414=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value413=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 841 "05function2.c"
        {__list_values19___272[0]=come_increment_ref_count(((struct sType*)(right_value416=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value415=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___272[1]=come_increment_ref_count(((struct sType*)(right_value418=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___272[2]=come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___272[3]=come_increment_ref_count(((struct sType*)(right_value422=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_273=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value424=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value423=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),4,__list_values19___272))));
        come_call_finalizer2(sType_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 842 "05function2.c"
        {__list_values20___274[0]=come_increment_ref_count(((char*)(right_value425=__builtin_string("mem"))));
__list_values20___274[1]=come_increment_ref_count(((char*)(right_value426=__builtin_string("sname"))));
__list_values20___274[2]=come_increment_ref_count(((char*)(right_value427=__builtin_string("sline"))));
__list_values20___274[3]=come_increment_ref_count(((char*)(right_value428=__builtin_string("id"))));
}        param_names_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value430=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),4,__list_values20___274))));
        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 843 "05function2.c"
        param_default_parametors_276=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 849 "05function2.c"
        main_fun_277=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value436=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value433=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "sFun")))),(char*)come_increment_ref_count(name_270),(struct sType*)come_increment_ref_count(result_type_271),(struct list$1sTypeph*)come_increment_ref_count(param_types_273),(struct list$1charph*)come_increment_ref_count(param_names_275),(struct list$1charph*)come_increment_ref_count(param_default_parametors_276),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value434=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 851 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string(name_270)))),(struct sFun*)come_increment_ref_count(main_fun_277));
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_270 = come_decrement_ref_count2(name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 854 "05function2.c"
    transpile_toplevel((_Bool)0,info);
    # 856 "05function2.c"
    __result143__ = 0;
    return __result143__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_143;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_143, 0, sizeof(int));
            # 112 "./neo-c.h"
            self->head=((void*)0);
            # 113 "./neo-c.h"
            self->tail=((void*)0);
            # 114 "./neo-c.h"
            self->len=0;
            # 120 "./neo-c.h"
            for(            i_143=0;            i_143<num_value;            i_143++            ){
                # 117 "./neo-c.h"
                list$1sTypeph_push_back(self,values[i_143]);
            }
            # 120 "./neo-c.h"
            __result116__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result116__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional227;
void* right_value177;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj68;
_Bool _if_conditional228;
void* right_value178;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj69;
void* right_value179;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj70;
struct list$1sTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
right_value178 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
right_value179 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional227=self->len==0,                    _if_conditional227) {
                        # 226 "./neo-c.h"
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_144->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_144->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj68=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_144;
                        # 233 "./neo-c.h"
                        self->head=litem_144;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional228=self->len==1,                        _if_conditional228) {
                            # 236 "./neo-c.h"
                            litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value178=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_145->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_145->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj69=litem_145->item;
                            litem_145->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_145;
                            # 243 "./neo-c.h"
                            self->head->next=litem_145;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_146->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_146->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj70=litem_146->item;
                            litem_146->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_146;
                            # 253 "./neo-c.h"
                            self->tail=litem_146;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result115__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result115__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_149;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_149, 0, sizeof(int));
            # 112 "./neo-c.h"
            self->head=((void*)0);
            # 113 "./neo-c.h"
            self->tail=((void*)0);
            # 114 "./neo-c.h"
            self->len=0;
            # 120 "./neo-c.h"
            for(            i_149=0;            i_149<num_value;            i_149++            ){
                # 117 "./neo-c.h"
                list$1charph_push_back(self,values[i_149]);
            }
            # 120 "./neo-c.h"
            __result118__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value187;
struct list_item$1charph* litem_150;
char* __dec_obj71;
_Bool _if_conditional230;
void* right_value188;
struct list_item$1charph* litem_151;
char* __dec_obj72;
void* right_value189;
struct list_item$1charph* litem_152;
char* __dec_obj73;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
right_value188 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charph*));
right_value189 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1charph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional229=self->len==0,                    _if_conditional229) {
                        # 226 "./neo-c.h"
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value187=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_150->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_150->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj71=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_150;
                        # 233 "./neo-c.h"
                        self->head=litem_150;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional230=self->len==1,                        _if_conditional230) {
                            # 236 "./neo-c.h"
                            litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value188=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_151->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_151->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj72=litem_151->item;
                            litem_151->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_151;
                            # 243 "./neo-c.h"
                            self->head->next=litem_151;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_152->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_152->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj73=litem_152->item;
                            litem_152->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_152;
                            # 253 "./neo-c.h"
                            self->tail=litem_152;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result117__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result117__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional231;
unsigned int hash_173;
unsigned int it_174;
_Bool _while_condtional27;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool same_key_exist_191;
char* it2_194;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct map$2charphsFunph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_173, 0, sizeof(unsigned int));
memset(&it_174, 0, sizeof(unsigned int));
memset(&same_key_exist_191, 0, sizeof(_Bool));
memset(&it2_194, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional231=self->len*10>=self->size,            _if_conditional231) {
                # 1391 "./neo-c.h"
                map$2charphsFunph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_173=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_174=hash_173;
            # 1452 "./neo-c.h"
            while(_while_condtional27=(_Bool)1,            _while_condtional27) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional243=self->item_existance[it_174],                _if_conditional243) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional244=string_equals(self->keys[it_174],key),                    _if_conditional244) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional245=1,                        _if_conditional245) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_174]);
                            # 1403 "./neo-c.h"
                            self->keys[it_174] = come_decrement_ref_count2(self->keys[it_174], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_174]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_174]);
                            # 1408 "./neo-c.h"
                            self->keys[it_174]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional265=1,                        _if_conditional265) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sFun_finalize,self->items[it_174], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_174]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_174]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_174++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional266=it_174>=self->size,                    _if_conditional266) {
                        # 1423 "./neo-c.h"
                        it_174=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional267=it_174==hash_173,                        _if_conditional267) {
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
                    self->item_existance[it_174]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional268=1,                    _if_conditional268) {
                        # 1434 "./neo-c.h"
                        self->keys[it_174]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_174]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional269=1,                    _if_conditional269) {
                        # 1440 "./neo-c.h"
                        self->items[it_174]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_174]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_191=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_194=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_194=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional274=string_equals(it2_194,key),                _if_conditional274) {
                    # 1456 "./neo-c.h"
                    same_key_exist_191=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional275=!same_key_exist_191,            _if_conditional275) {
                # 1461 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1464 "./neo-c.h"
            __result142__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result142__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_156;
void* right_value201;
char** keys_157;
void* right_value202;
struct sFun** items_158;
void* right_value203;
_Bool* item_existance_159;
int len_160;
char* it_163;
struct sFun* default_value_166;
struct sFun* it2_169;
unsigned int hash_170;
int n_171;
_Bool _while_condtional26;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct sFun* default_value_172;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_156, 0, sizeof(int));
right_value201 = (void*)0;
memset(&keys_157, 0, sizeof(char**));
right_value202 = (void*)0;
memset(&items_158, 0, sizeof(struct sFun**));
right_value203 = (void*)0;
memset(&item_existance_159, 0, sizeof(_Bool*));
memset(&len_160, 0, sizeof(int));
memset(&it_163, 0, sizeof(char*));
memset(&default_value_166, 0, sizeof(struct sFun*));
memset(&it2_169, 0, sizeof(struct sFun*));
memset(&hash_170, 0, sizeof(unsigned int));
memset(&n_171, 0, sizeof(int));
memset(&default_value_172, 0, sizeof(struct sFun*));
                    # 1337 "./neo-c.h"
                    size_156=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_157=(char**)come_increment_ref_count(((char**)(right_value201=(char**)come_calloc(1, sizeof(char*)*(1*(size_156)), "./neo-c.h", 1338, "char*%"))));
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_158=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value202=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_156)), "./neo-c.h", 1339, "sFun*%"))));
                    come_call_finalizer2(sFun_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_159=(_Bool*)come_increment_ref_count(((_Bool*)(right_value203=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_156)), "./neo-c.h", 1340, "bool"))));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_160=0;
                    # 1377 "./neo-c.h"
                    for(                    it_163=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_163=map$2charphsFunph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_166,0,sizeof(struct sFun*));
                        # 1347 "./neo-c.h"
                        it2_169=map$2charphsFunph_at(self,it_163,default_value_166);
                        # 1348 "./neo-c.h"
                        hash_170=string_get_hash_key(it_163)%size_156;
                        # 1349 "./neo-c.h"
                        n_171=hash_170;
                        # 1375 "./neo-c.h"
                        while(_while_condtional26=(_Bool)1,                        _while_condtional26) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional240=item_existance_159[n_171],                            _if_conditional240) {
                                # 1354 "./neo-c.h"
                                n_171++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional241=n_171>=size_156,                                _if_conditional241) {
                                    # 1357 "./neo-c.h"
                                    n_171=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional242=n_171==hash_170,                                    _if_conditional242) {
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
                                item_existance_159[n_171]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_157[n_171]=it_163;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_158[n_171]=map$2charphsFunph_at(self,it_163,default_value_172);
                                # 1371 "./neo-c.h"
                                len_160++;
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
                    self->keys=keys_157;
                    # 1382 "./neo-c.h"
                    self->items=items_158;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_159;
                    # 1385 "./neo-c.h"
                    self->size=size_156;
                    # 1386 "./neo-c.h"
                    self->len=len_160;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional232;
char* result_161;
char* __result119__;
_Bool _if_conditional233;
char* __result120__;
char* result_162;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(char*));
memset(&result_162, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional232=self==((void*)0),                        _if_conditional232) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_161,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result119__ = __result_obj__ = result_161;
                            return __result119__;
                        }
                        # 1304 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./neo-c.h"
                        # 1306 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1307 "./neo-c.h"
                            __result120__ = __result_obj__ = self->key_list->it->item;
                            return __result120__;
                        }
                        # 1310 "./neo-c.h"
                        # 1311 "./neo-c.h"
                        memset(&result_162,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result121__ = __result_obj__ = result_162;
                        return __result121__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./neo-c.h"
                        __result122__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result122__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional234;
char* result_164;
char* __result123__;
_Bool _if_conditional235;
char* __result124__;
char* result_165;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(char*));
memset(&result_165, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional234=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional234) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_164,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result123__ = __result_obj__ = result_164;
                            return __result123__;
                        }
                        # 1321 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./neo-c.h"
                        # 1323 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1324 "./neo-c.h"
                            __result124__ = __result_obj__ = self->key_list->it->item;
                            return __result124__;
                        }
                        # 1327 "./neo-c.h"
                        # 1328 "./neo-c.h"
                        memset(&result_165,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result125__ = __result_obj__ = result_165;
                        return __result125__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional25;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sFun* __result126__;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_167=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_168=hash_167;
                            # 1251 "./neo-c.h"
                            while(_while_condtional25=(_Bool)1,                            _while_condtional25) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional236=self->item_existance[it_168],                                _if_conditional236) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional237=string_equals(self->keys[it_168],key),                                    _if_conditional237) {
                                        # 1234 "./neo-c.h"
                                        __result126__ = __result_obj__ = self->items[it_168];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result126__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_168++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional238=it_168>=self->size,                                    _if_conditional238) {
                                        # 1240 "./neo-c.h"
                                        it_168=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional239=it_168==hash_167,                                        _if_conditional239) {
                                            # 1243 "./neo-c.h"
                                            __result127__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result127__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./neo-c.h"
                                    __result128__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result128__;
                                }
                            }
                            # 1251 "./neo-c.h"
                            __result129__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result129__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_175;
struct list_item$1charp* it_176;
_Bool _while_condtional28;
_Bool _if_conditional246;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_175, 0, sizeof(int));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_175=0;
                                # 449 "./neo-c.h"
                                it_176=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional28=it_176!=((void*)0),                                _while_condtional28) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional246=string_equals(it_176->item,item),                                    _if_conditional246) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_175,it2_175+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_175++;
                                    # 457 "./neo-c.h"
                                    it_176=it_176->next;
                                }
                                # 460 "./neo-c.h"
                                __result133__ = __result_obj__ = self;
                                return __result133__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
int tmp_177;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct list$1charp* __result130__;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct list_item$1charp* it_180;
int i_181;
_Bool _while_condtional30;
_Bool _if_conditional255;
struct list_item$1charp* prev_it_182;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct list_item$1charp* it_183;
int i_184;
_Bool _while_condtional31;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct list_item$1charp* prev_it_185;
struct list_item$1charp* it_186;
struct list_item$1charp* head_prev_it_187;
struct list_item$1charp* tail_it_188;
int i_189;
_Bool _while_condtional32;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct list_item$1charp* prev_it_190;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_177, 0, sizeof(int));
memset(&it_180, 0, sizeof(struct list_item$1charp*));
memset(&i_181, 0, sizeof(int));
memset(&prev_it_182, 0, sizeof(struct list_item$1charp*));
memset(&it_183, 0, sizeof(struct list_item$1charp*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1charp*));
memset(&it_186, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_187, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_188, 0, sizeof(struct list_item$1charp*));
memset(&i_189, 0, sizeof(int));
memset(&prev_it_190, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional247=head<0,                                            _if_conditional247) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional248=tail<0,                                            _if_conditional248) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional249=head>tail,                                            _if_conditional249) {
                                                # 472 "./neo-c.h"
                                                tmp_177=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_177;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional250=head<0,                                            _if_conditional250) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional251=tail>self->len,                                            _if_conditional251) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional252=head==tail,                                            _if_conditional252) {
                                                # 486 "./neo-c.h"
                                                __result130__ = __result_obj__ = self;
                                                return __result130__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional253=head==0&&tail==self->len,                                            _if_conditional253) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional254=head==0,                                                _if_conditional254) {
                                                    # 494 "./neo-c.h"
                                                    it_180=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_181=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional30=it_180!=((void*)0),                                                    _while_condtional30) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional255=i_181<tail,                                                        _if_conditional255) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_182=it_180;
                                                            # 500 "./neo-c.h"
                                                            it_180=it_180->next;
                                                            # 501 "./neo-c.h"
                                                            i_181++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional256=i_181==tail,                                                            _if_conditional256) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_180;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_180=it_180->next;
                                                                # 514 "./neo-c.h"
                                                                i_181++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional257=tail==self->len,                                                    _if_conditional257) {
                                                        # 519 "./neo-c.h"
                                                        it_183=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_184=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional31=it_183!=((void*)0),                                                        _while_condtional31) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional258=i_184==head,                                                            _if_conditional258) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_183->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional259=i_184>=head,                                                            _if_conditional259) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_185=it_183;
                                                                # 530 "./neo-c.h"
                                                                it_183=it_183->next;
                                                                # 531 "./neo-c.h"
                                                                i_184++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_183=it_183->next;
                                                                # 539 "./neo-c.h"
                                                                i_184++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_186=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_187=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_188=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_189=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional32=it_186!=((void*)0),                                                        _while_condtional32) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional260=i_189==head,                                                            _if_conditional260) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_187=it_186->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional261=i_189==tail,                                                            _if_conditional261) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_188=it_186;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional262=i_189>=head&&i_189<tail,                                                            _if_conditional262) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_190=it_186;
                                                                # 563 "./neo-c.h"
                                                                it_186=it_186->next;
                                                                # 564 "./neo-c.h"
                                                                i_189++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_186=it_186->next;
                                                                # 572 "./neo-c.h"
                                                                i_189++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional263=head_prev_it_187!=((void*)0),                                                        _if_conditional263) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_187->next=tail_it_188;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional264=tail_it_188!=((void*)0),                                                        _if_conditional264) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_188->prev=head_prev_it_187;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./neo-c.h"
                                            __result132__ = __result_obj__ = self;
                                            return __result132__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_178;
_Bool _while_condtional29;
struct list_item$1charp* prev_it_179;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_179, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_178=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional29=it_178!=((void*)0),                                                    _while_condtional29) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_179=it_178;
                                                        # 436 "./neo-c.h"
                                                        it_178=it_178->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 441 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./neo-c.h"
                                                    self->len=0;
                                                    # 445 "./neo-c.h"
                                                    __result131__ = __result_obj__ = self;
                                                    return __result131__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional270;
char* result_192;
char* __result134__;
_Bool _if_conditional271;
char* __result135__;
char* result_193;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_192, 0, sizeof(char*));
memset(&result_193, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional270=self==((void*)0),                _if_conditional270) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_192,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result134__ = __result_obj__ = result_192;
                    return __result134__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result135__ = __result_obj__ = self->it->item;
                    return __result135__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_193,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result136__ = __result_obj__ = result_193;
                return __result136__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result137__ = self==((void*)0)||self->it==((void*)0);
                return __result137__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional272;
char* result_195;
char* __result138__;
_Bool _if_conditional273;
char* __result139__;
char* result_196;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(char*));
memset(&result_196, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional272=self==((void*)0)||self->it==((void*)0),                _if_conditional272) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_195,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result138__ = __result_obj__ = result_195;
                    return __result138__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result139__ = __result_obj__ = self->it->item;
                    return __result139__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_196,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result140__ = __result_obj__ = result_196;
                return __result140__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional276;
void* right_value204;
struct list_item$1charp* litem_197;
_Bool _if_conditional277;
void* right_value205;
struct list_item$1charp* litem_198;
void* right_value206;
struct list_item$1charp* litem_199;
struct list$1charp* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
right_value205 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
right_value206 = (void*)0;
memset(&litem_199, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional276=self->len==0,                    _if_conditional276) {
                        # 226 "./neo-c.h"
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value204=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_197->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_197->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_197->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_197;
                        # 233 "./neo-c.h"
                        self->head=litem_197;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional277=self->len==1,                        _if_conditional277) {
                            # 236 "./neo-c.h"
                            litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value205=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_198->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_198->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_198->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_198;
                            # 243 "./neo-c.h"
                            self->head->next=litem_198;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_199=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value206=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_199->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_199->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_199->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_199;
                            # 253 "./neo-c.h"
                            self->tail=litem_199;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result141__ = __result_obj__ = self;
                    return __result141__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_278;
_Bool is_type_name_flag_279;
int sline_280;
_Bool define_struct_nobody_281;
char* p_282;
int sline_283;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value438;
char* word_284;
_Bool _if_conditional280;
_Bool define_function_pointer_result_function_285;
_Bool define_variable_between_brace_286;
_Bool _if_conditional281;
char* p_287;
_Bool _if_conditional282;
void* right_value439;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_288;
char* fun_name_289;
_Bool err_290;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value440;
char* word_291;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool define_function_flag_292;
_Bool _if_conditional290;
char* p_293;
_Bool invalid_type_294;
_Bool _if_conditional291;
void* right_value441;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_295;
char* fun_name_296;
_Bool err_297;
_Bool _if_conditional292;
char* word_298;
_Bool _if_conditional293;
void* right_value442;
char* __dec_obj74;
_Bool _if_conditional294;
void* right_value443;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _while_condtional33;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value444;
char* __dec_obj77;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool define_variable_299;
_Bool _if_conditional303;
char* p_300;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value445;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_301;
char* fun_name_302;
_Bool err_303;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value446;
char* word_304;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value447;
char* word_305;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _while_condtional34;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value448;
char* word_306;
_Bool _if_conditional319;
_Bool _while_condtional36;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value449;
char* word_309;
void* right_value450;
void* right_value451;
struct sNode* node_310;
struct sNode* __result145__;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value452;
struct sNode* __result146__;
_Bool _if_conditional325;
char* header_head_311;
void* right_value453;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_312;
char* fun_name_313;
_Bool err_314;
_Bool _if_conditional326;
void* right_value454;
void* right_value455;
struct list$1sTypeph* param_types_315;
void* right_value456;
void* right_value457;
struct list$1charph* param_names_316;
_Bool _if_conditional327;
_Bool _while_condtional37;
void* right_value458;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_317;
char* param_name_318;
_Bool err_319;
_Bool _if_conditional328;
static int num_function_pointer_result_var_name_a_320=0;
void* right_value459;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value460;
void* right_value461;
struct list$1sTypeph* param_types2_321;
void* right_value462;
void* right_value463;
struct list$1charph* param_names2_322;
_Bool _if_conditional332;
_Bool _while_condtional38;
void* right_value464;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_323;
char* param_name_324;
_Bool err_325;
_Bool _if_conditional333;
static int num_function_pointer_result_var_name_b_326=0;
void* right_value465;
_Bool _if_conditional334;
_Bool _if_conditional335;
char* header_tail_327;
void* right_value466;
void* right_value467;
struct sType* result_type2_328;
void* right_value468;
void* right_value469;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value470;
struct list$1sTypeph* __dec_obj80;
void* right_value471;
struct list$1charph* __dec_obj81;
_Bool var_args_329;
void* right_value472;
void* right_value473;
struct buffer* header_buf_330;
void* right_value474;
void* right_value475;
struct list$1charph* param_default_parametors_331;
void* right_value476;
void* right_value477;
void* right_value478;
void* right_value479;
void* right_value480;
struct sFun* fun_332;
void* right_value481;
struct sFun* fun2_336;
_Bool _if_conditional340;
void* right_value482;
void* right_value483;
void* right_value484;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value519;
struct sNode* __result176__;
_Bool _if_conditional405;
void* right_value520;
struct sNode* __result177__;
_Bool _if_conditional406;
void* right_value521;
struct sNode* node_371;
char* source_tail_372;
void* right_value522;
void* right_value523;
struct buffer* header_373;
void* right_value524;
struct sNode* __result178__;
void* right_value525;
char* buf2_374;
void* right_value526;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_278, 0, sizeof(char*));
memset(&is_type_name_flag_279, 0, sizeof(_Bool));
memset(&sline_280, 0, sizeof(int));
memset(&define_struct_nobody_281, 0, sizeof(_Bool));
memset(&p_282, 0, sizeof(char*));
memset(&sline_283, 0, sizeof(int));
right_value438 = (void*)0;
memset(&word_284, 0, sizeof(char*));
memset(&define_function_pointer_result_function_285, 0, sizeof(_Bool));
memset(&define_variable_between_brace_286, 0, sizeof(_Bool));
memset(&p_287, 0, sizeof(char*));
right_value439 = (void*)0;
memset(&result_type_288, 0, sizeof(struct sType*));
memset(&fun_name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
memset(&result_type_288, 0, sizeof(struct sType*));
memset(&fun_name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
right_value440 = (void*)0;
memset(&word_291, 0, sizeof(char*));
memset(&define_function_flag_292, 0, sizeof(_Bool));
memset(&p_293, 0, sizeof(char*));
memset(&invalid_type_294, 0, sizeof(_Bool));
right_value441 = (void*)0;
memset(&result_type_295, 0, sizeof(struct sType*));
memset(&fun_name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
memset(&result_type_295, 0, sizeof(struct sType*));
memset(&fun_name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
memset(&word_298, 0, sizeof(char*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&define_variable_299, 0, sizeof(_Bool));
memset(&p_300, 0, sizeof(char*));
right_value445 = (void*)0;
memset(&result_type_301, 0, sizeof(struct sType*));
memset(&fun_name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
memset(&result_type_301, 0, sizeof(struct sType*));
memset(&fun_name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
right_value446 = (void*)0;
memset(&word_304, 0, sizeof(char*));
right_value447 = (void*)0;
memset(&word_305, 0, sizeof(char*));
right_value448 = (void*)0;
memset(&word_306, 0, sizeof(char*));
right_value449 = (void*)0;
memset(&word_309, 0, sizeof(char*));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
memset(&header_head_311, 0, sizeof(char*));
right_value453 = (void*)0;
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&param_types_315, 0, sizeof(struct list$1sTypeph*));
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&param_names_316, 0, sizeof(struct list$1charph*));
right_value458 = (void*)0;
memset(&param_type_317, 0, sizeof(struct sType*));
memset(&param_name_318, 0, sizeof(char*));
memset(&err_319, 0, sizeof(_Bool));
memset(&param_type_317, 0, sizeof(struct sType*));
memset(&param_name_318, 0, sizeof(char*));
memset(&err_319, 0, sizeof(_Bool));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&param_types2_321, 0, sizeof(struct list$1sTypeph*));
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&param_names2_322, 0, sizeof(struct list$1charph*));
right_value464 = (void*)0;
memset(&param_type_323, 0, sizeof(struct sType*));
memset(&param_name_324, 0, sizeof(char*));
memset(&err_325, 0, sizeof(_Bool));
memset(&param_type_323, 0, sizeof(struct sType*));
memset(&param_name_324, 0, sizeof(char*));
memset(&err_325, 0, sizeof(_Bool));
right_value465 = (void*)0;
memset(&header_tail_327, 0, sizeof(char*));
right_value466 = (void*)0;
right_value467 = (void*)0;
memset(&result_type2_328, 0, sizeof(struct sType*));
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&var_args_329, 0, sizeof(_Bool));
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&header_buf_330, 0, sizeof(struct buffer*));
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&param_default_parametors_331, 0, sizeof(struct list$1charph*));
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
memset(&fun_332, 0, sizeof(struct sFun*));
right_value481 = (void*)0;
memset(&fun2_336, 0, sizeof(struct sFun*));
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
memset(&node_371, 0, sizeof(struct sNode*));
memset(&source_tail_372, 0, sizeof(char*));
right_value522 = (void*)0;
right_value523 = (void*)0;
memset(&header_373, 0, sizeof(struct buffer*));
right_value524 = (void*)0;
right_value525 = (void*)0;
memset(&buf2_374, 0, sizeof(char*));
right_value526 = (void*)0;
    # 861 "05function2.c"
    source_head_278=info->p;
    # 863 "05function2.c"
    is_type_name_flag_279=is_type_name(buf,info);
    # 864 "05function2.c"
    sline_280=info->sline;
    # 868 "05function2.c"
    define_struct_nobody_281=(_Bool)0;
    # 888 "05function2.c"
    {
        # 870 "05function2.c"
        p_282=info->p;
        # 871 "05function2.c"
        sline_283=info->sline;
        # 883 "05function2.c"
        # 873 "05function2.c"
        if(_if_conditional278=charp_operator_equals(buf,"struct"),        _if_conditional278) {
            # 881 "05function2.c"
            # 874 "05function2.c"
            if(_if_conditional279=xisalpha(*info->p)||*info->p==95,            _if_conditional279) {
                # 875 "05function2.c"
                word_284=(char*)come_increment_ref_count(((char*)(right_value438=parse_word(info))));
                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 880 "05function2.c"
                # 877 "05function2.c"
                if(_if_conditional280=*info->p==59,                _if_conditional280) {
                    # 878 "05function2.c"
                    define_struct_nobody_281=(_Bool)1;
                }
                word_284 = come_decrement_ref_count2(word_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 883 "05function2.c"
        info->p=head;
        # 884 "05function2.c"
        info->sline=sline_283;
    }
    # 888 "05function2.c"
    define_function_pointer_result_function_285=(_Bool)0;
    # 889 "05function2.c"
    define_variable_between_brace_286=(_Bool)0;
    # 934 "05function2.c"
    # 890 "05function2.c"
    if(is_type_name_flag_279) {
        # 892 "05function2.c"
        p_287=info->p;
        # 893 "05function2.c"
        info->p=head;
        # 929 "05function2.c"
        # 895 "05function2.c"
        if(_if_conditional282=xisalpha(*info->p)||*info->p==95,        _if_conditional282) {
            # 896 "05function2.c"
            info->no_output_err=(_Bool)1;
            # 897 "05function2.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value439=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_288=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_289=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_290=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 898 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 927 "05function2.c"
            # 901 "05function2.c"
            if(_if_conditional285=*info->p==40,            _if_conditional285) {
                # 902 "05function2.c"
                info->p++;
                # 903 "05function2.c"
                skip_spaces_and_lf(info);
                # 926 "05function2.c"
                # 905 "05function2.c"
                if(_if_conditional286=*info->p!=42,                _if_conditional286) {
                    # 906 "05function2.c"
                    define_function_pointer_result_function_285=(_Bool)1;
                    # 925 "05function2.c"
                    # 908 "05function2.c"
                    if(_if_conditional287=xisalpha(*info->p)||*info->p==95,                    _if_conditional287) {
                        # 909 "05function2.c"
                        info->p++;
                        # 910 "05function2.c"
                        skip_spaces_and_lf(info);
                        # 912 "05function2.c"
                        word_291=(char*)come_increment_ref_count(((char*)(right_value440=parse_word(info))));
                        right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 924 "05function2.c"
                        # 914 "05function2.c"
                        if(_if_conditional288=!is_type_name(word_291,info)&&*info->p==41,                        _if_conditional288) {
                            # 915 "05function2.c"
                            info->p++;
                            # 916 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 923 "05function2.c"
                            # 918 "05function2.c"
                            if(_if_conditional289=*info->p==40,                            _if_conditional289) {
                            }
                            else {
                                # 921 "05function2.c"
                                define_variable_between_brace_286=(_Bool)1;
                            }
                        }
                        word_291 = come_decrement_ref_count2(word_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_289 = come_decrement_ref_count2(fun_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 929 "05function2.c"
        info->p=head;
        # 930 "05function2.c"
        info->sline=sline_280;
    }
    # 934 "05function2.c"
    define_function_flag_292=(_Bool)0;
    # 999 "05function2.c"
    # 935 "05function2.c"
    if(_if_conditional290=is_type_name_flag_279&&!define_function_pointer_result_function_285&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional290) {
        # 937 "05function2.c"
        p_293=info->p;
        # 938 "05function2.c"
        info->p=head;
        # 940 "05function2.c"
        invalid_type_294=(_Bool)0;
        # 941 "05function2.c"
        info->no_output_err=(_Bool)1;
        # 945 "05function2.c"
        # 942 "05function2.c"
        if(_if_conditional291=xisalpha(*info->p)||*info->p==95,        _if_conditional291) {
            # 943 "05function2.c"
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value441=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_295=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_296=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_297=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_296 = come_decrement_ref_count2(fun_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 945 "05function2.c"
        info->no_output_err=(_Bool)0;
        # 994 "05function2.c"
        # 947 "05function2.c"
        if(_if_conditional292=!info->define_struct,        _if_conditional292) {
            # 948 "05function2.c"
            info->define_struct=(_Bool)0;
            # 949 "05function2.c"
            word_298=((void*)0);
            # 960 "05function2.c"
            # 950 "05function2.c"
            if(_if_conditional293=xisalnum(*info->p)||*info->p==95,            _if_conditional293) {
                # 951 "05function2.c"
                __dec_obj74=word_298;
                word_298=(char*)come_increment_ref_count(((char*)(right_value442=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 956 "05function2.c"
                # 953 "05function2.c"
                if(_if_conditional294=string_operator_equals(word_298,"extern"),                _if_conditional294) {
                    # 954 "05function2.c"
                    __dec_obj75=word_298;
                    word_298=(char*)come_increment_ref_count(((char*)(right_value443=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 958 "05function2.c"
                __dec_obj76=word_298;
                word_298=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            # 960 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 992 "05function2.c"
            # 962 "05function2.c"
            if(word_298) {
                # 986 "05function2.c"
                # 963 "05function2.c"
                if(_if_conditional296=is_type_name(word_298,info),                _if_conditional296) {
                    # 968 "05function2.c"
                    while(_while_condtional33=*info->p==42,                    _while_condtional33) {
                        # 965 "05function2.c"
                        info->p++;
                        # 966 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 972 "05function2.c"
                    # 968 "05function2.c"
                    if(_if_conditional297=*info->p==91&&*(info->p+1)==93,                    _if_conditional297) {
                        # 969 "05function2.c"
                        info->p+=2;
                        # 970 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 976 "05function2.c"
                    # 972 "05function2.c"
                    if(_if_conditional298=*info->p==58,                    _if_conditional298) {
                        # 973 "05function2.c"
                        info->p++;
                        # 974 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 980 "05function2.c"
                    # 976 "05function2.c"
                    if(_if_conditional299=*info->p==58,                    _if_conditional299) {
                        # 977 "05function2.c"
                        info->p++;
                        # 978 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 983 "05function2.c"
                    # 980 "05function2.c"
                    if(_if_conditional300=xisalnum(*info->p)||*info->p==95,                    _if_conditional300) {
                        # 981 "05function2.c"
                        __dec_obj77=word_298;
                        word_298=(char*)come_increment_ref_count(((char*)(right_value444=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                # 991 "05function2.c"
                # 986 "05function2.c"
                if(_if_conditional301=strlen(word_298)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional301) {
                    # 990 "05function2.c"
                    # 987 "05function2.c"
                    if(is_type_name_flag_279) {
                        # 988 "05function2.c"
                        define_function_flag_292=(_Bool)1;
                    }
                }
            }
            word_298 = come_decrement_ref_count2(word_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 994 "05function2.c"
        info->p=p_293;
        # 995 "05function2.c"
        info->sline=sline_280;
    }
    # 999 "05function2.c"
    define_variable_299=(_Bool)1;
    # 1078 "05function2.c"
    # 1000 "05function2.c"
    if(_if_conditional303=is_type_name_flag_279&&!define_function_pointer_result_function_285,    _if_conditional303) {
        # 1002 "05function2.c"
        p_300=info->p;
        # 1003 "05function2.c"
        info->p=head;
        # 1009 "05function2.c"
        # 1005 "05function2.c"
        if(_if_conditional304=!is_type_name_flag_279,        _if_conditional304) {
            # 1006 "05function2.c"
            define_variable_299=(_Bool)0;
        }
        # 1050 "05function2.c"
        # 1009 "05function2.c"
        if(_if_conditional305=xisalpha(*info->p)||*info->p==95,        _if_conditional305) {
            # 1010 "05function2.c"
            info->no_output_err=(_Bool)1;
            # 1011 "05function2.c"
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value445=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_301=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_302=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_303=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1012 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 1048 "05function2.c"
            # 1014 "05function2.c"
            if(_if_conditional306=*info->p==40,            _if_conditional306) {
                # 1015 "05function2.c"
                info->p++;
                # 1016 "05function2.c"
                skip_spaces_and_lf(info);
                # 1047 "05function2.c"
                # 1018 "05function2.c"
                if(_if_conditional307=*info->p==42,                _if_conditional307) {
                    # 1019 "05function2.c"
                    info->p++;
                    # 1020 "05function2.c"
                    skip_spaces_and_lf(info);
                    # 1034 "05function2.c"
                    # 1022 "05function2.c"
                    if(_if_conditional308=xisalpha(*info->p)||*info->p==95,                    _if_conditional308) {
                        # 1023 "05function2.c"
                        word_304=(char*)come_increment_ref_count(((char*)(right_value446=parse_word(info))));
                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1033 "05function2.c"
                        # 1025 "05function2.c"
                        if(_if_conditional309=*info->p==41,                        _if_conditional309) {
                            # 1026 "05function2.c"
                            info->p++;
                            # 1027 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1032 "05function2.c"
                            # 1029 "05function2.c"
                            if(_if_conditional310=*info->p==40,                            _if_conditional310) {
                                # 1030 "05function2.c"
                                define_variable_299=(_Bool)1;
                            }
                        }
                        word_304 = come_decrement_ref_count2(word_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 1047 "05function2.c"
                    # 1035 "05function2.c"
                    if(_if_conditional311=xisalpha(*info->p)||*info->p==95,                    _if_conditional311) {
                        # 1036 "05function2.c"
                        word_305=(char*)come_increment_ref_count(((char*)(right_value447=parse_word(info))));
                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1046 "05function2.c"
                        # 1038 "05function2.c"
                        if(_if_conditional312=*info->p==41,                        _if_conditional312) {
                            # 1039 "05function2.c"
                            info->p++;
                            # 1040 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1045 "05function2.c"
                            # 1042 "05function2.c"
                            if(_if_conditional313=!is_type_name(word_305,info)&&*info->p!=40,                            _if_conditional313) {
                                # 1043 "05function2.c"
                                define_variable_299=(_Bool)1;
                            }
                        }
                        word_305 = come_decrement_ref_count2(word_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_302 = come_decrement_ref_count2(fun_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1071 "05function2.c"
        # 1050 "05function2.c"
        if(info->define_struct) {
            # 1051 "05function2.c"
            info->define_struct=(_Bool)0;
            # 1052 "05function2.c"
            define_variable_299=(_Bool)0;
        }
        else {
            # 1071 "05function2.c"
            # 1054 "05function2.c"
            if(define_variable_299) {
            }
            else {
                # 1061 "05function2.c"
                # 1057 "05function2.c"
                if(_if_conditional316=!(xisalpha(*info->p)||*info->p==95),                _if_conditional316) {
                    # 1058 "05function2.c"
                    define_variable_299=(_Bool)0;
                }
                # 1064 "05function2.c"
                while(_while_condtional34=xisalpha(*info->p)||*info->p==95,                _while_condtional34) {
                    # 1062 "05function2.c"
                    info->p++;
                }
                # 1064 "05function2.c"
                skip_spaces_and_lf(info);
                # 1069 "05function2.c"
                # 1066 "05function2.c"
                if(_if_conditional317=*info->p==40||*info->p==58,                _if_conditional317) {
                    # 1067 "05function2.c"
                    define_variable_299=(_Bool)0;
                }
            }
        }
        # 1071 "05function2.c"
        info->p=p_300;
        # 1072 "05function2.c"
        info->sline=sline_280;
    }
    else {
        # 1075 "05function2.c"
        define_variable_299=(_Bool)0;
    }
    # 1297 "05function2.c"
    # 1078 "05function2.c"
    if(_if_conditional318=charp_operator_equals(buf,"template"),    _if_conditional318) {
        # 1079 "05function2.c"
        word_306=(char*)come_increment_ref_count(((char*)(right_value448=parse_word(info))));
        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1122 "05function2.c"
        # 1081 "05function2.c"
        if(_if_conditional319=*info->p==60,        _if_conditional319) {
            # 1082 "05function2.c"
            info->p++;
            # 1083 "05function2.c"
            skip_spaces_and_lf(info);
            # 1085 "05function2.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1107 "05function2.c"
            while(_while_condtional36=(_Bool)1,            _while_condtional36) {
                # 1105 "05function2.c"
                # 1088 "05function2.c"
                if(_if_conditional320=*info->p==62,                _if_conditional320) {
                    # 1089 "05function2.c"
                    info->p++;
                    # 1090 "05function2.c"
                    skip_spaces_and_lf(info);
                    # 1091 "05function2.c"
                    break;
                }
                else {
                    # 1105 "05function2.c"
                    # 1093 "05function2.c"
                    if(_if_conditional321=*info->p==44,                    _if_conditional321) {
                        # 1094 "05function2.c"
                        info->p++;
                        # 1095 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 1105 "05function2.c"
                        # 1097 "05function2.c"
                        if(_if_conditional322=*info->p==0,                        _if_conditional322) {
                            # 1098 "05function2.c"
                            err_msg(info,"unexpected source end");
                            # 1099 "05function2.c"
                            exit(2);
                        }
                        else {
                            # 1102 "05function2.c"
                            word_309=(char*)come_increment_ref_count(((char*)(right_value449=parse_word(info))));
                            right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1103 "05function2.c"
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value450=string_clone(word_309)))));
                            right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_309 = come_decrement_ref_count2(word_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            # 1107 "05function2.c"
            node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=parse_function(info))));
            if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1109 "05function2.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1120 "05function2.c"
            __result145__ = __result_obj__ = node_310;
            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_306 = come_decrement_ref_count2(word_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result145__;
            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_306 = come_decrement_ref_count2(word_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1297 "05function2.c"
        # 1123 "05function2.c"
        if(define_struct_nobody_281) {
        }
        else {
            # 1297 "05function2.c"
            # 1125 "05function2.c"
            if(define_variable_between_brace_286) {
                # 1126 "05function2.c"
                info->p=head;
                # 1127 "05function2.c"
                info->sline=sline_280;
                # 1138 "05function2.c"
                __result146__ = __result_obj__ = ((struct sNode*)(right_value452=parse_global_variable(info)));
                if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result146__;
            }
            else {
                # 1297 "05function2.c"
                # 1140 "05function2.c"
                if(define_function_pointer_result_function_285) {
                    # 1141 "05function2.c"
                    header_head_311=info->p;
                    # 1142 "05function2.c"
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value453=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_312=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_313=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_314=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1274 "05function2.c"
                    # 1144 "05function2.c"
                    if(_if_conditional326=*info->p==40,                    _if_conditional326) {
                        # 1145 "05function2.c"
                        info->p++;
                        # 1146 "05function2.c"
                        skip_spaces_and_lf(info);
                        # 1148 "05function2.c"
                        param_types_315=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value455=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value454=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1148, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1149 "05function2.c"
                        param_names_316=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value457=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value456=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1149, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1185 "05function2.c"
                        # 1151 "05function2.c"
                        if(_if_conditional327=*info->p==41,                        _if_conditional327) {
                            # 1152 "05function2.c"
                            info->p++;
                            # 1153 "05function2.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 1183 "05function2.c"
                            while(_while_condtional37=(_Bool)1,                            _while_condtional37) {
                                # 1157 "05function2.c"
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value458=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_317=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_318=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_319=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 1164 "05function2.c"
                                # 1159 "05function2.c"
                                if(_if_conditional328=!err_319,                                _if_conditional328) {
                                    # 1160 "05function2.c"
                                    err_msg(info,"parse_type is failed");
                                    # 1161 "05function2.c"
                                    exit(2);
                                }
                                # 1164 "05function2.c"
                                list$1sTypeph_push_back(param_types_315,(struct sType*)come_increment_ref_count(param_type_317));
                                # 1166 "05function2.c"
                                # 1167 "05function2.c"
                                list$1charph_push_back(param_names_316,(char*)come_increment_ref_count(((char*)(right_value459=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_320)))));
                                right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1182 "05function2.c"
                                # 1169 "05function2.c"
                                if(_if_conditional329=*info->p==44,                                _if_conditional329) {
                                    # 1170 "05function2.c"
                                    info->p++;
                                    # 1171 "05function2.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1182 "05function2.c"
                                    # 1173 "05function2.c"
                                    if(_if_conditional330=*info->p==41,                                    _if_conditional330) {
                                        # 1174 "05function2.c"
                                        info->p++;
                                        # 1175 "05function2.c"
                                        skip_spaces_and_lf(info);
                                        # 1176 "05function2.c"
                                        come_call_finalizer2(sType_finalize,param_type_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_318 = come_decrement_ref_count2(param_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        # 1179 "05function2.c"
                                        err_msg(info,"require , or )");
                                        # 1180 "05function2.c"
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_318 = come_decrement_ref_count2(param_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        # 1185 "05function2.c"
                        expected_next_character(41,info);
                        # 1273 "05function2.c"
                        # 1187 "05function2.c"
                        if(_if_conditional331=*info->p==40,                        _if_conditional331) {
                            # 1188 "05function2.c"
                            info->p++;
                            # 1189 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1191 "05function2.c"
                            param_types2_321=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value461=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value460=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1191, "list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1192 "05function2.c"
                            param_names2_322=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value463=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value462=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1192, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1228 "05function2.c"
                            # 1194 "05function2.c"
                            if(_if_conditional332=*info->p==41,                            _if_conditional332) {
                                # 1195 "05function2.c"
                                info->p++;
                                # 1196 "05function2.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1226 "05function2.c"
                                while(_while_condtional38=(_Bool)1,                                _while_condtional38) {
                                    # 1200 "05function2.c"
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value464=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_323=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_324=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_325=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1207 "05function2.c"
                                    # 1202 "05function2.c"
                                    if(_if_conditional333=!err_325,                                    _if_conditional333) {
                                        # 1203 "05function2.c"
                                        err_msg(info,"parse_type is failed");
                                        # 1204 "05function2.c"
                                        exit(2);
                                    }
                                    # 1207 "05function2.c"
                                    list$1sTypeph_push_back(param_types2_321,(struct sType*)come_increment_ref_count(param_type_323));
                                    # 1209 "05function2.c"
                                    # 1210 "05function2.c"
                                    list$1charph_push_back(param_names2_322,(char*)come_increment_ref_count(((char*)(right_value465=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_326)))));
                                    right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1225 "05function2.c"
                                    # 1212 "05function2.c"
                                    if(_if_conditional334=*info->p==44,                                    _if_conditional334) {
                                        # 1213 "05function2.c"
                                        info->p++;
                                        # 1214 "05function2.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 1225 "05function2.c"
                                        # 1216 "05function2.c"
                                        if(_if_conditional335=*info->p==41,                                        _if_conditional335) {
                                            # 1217 "05function2.c"
                                            info->p++;
                                            # 1218 "05function2.c"
                                            skip_spaces_and_lf(info);
                                            # 1219 "05function2.c"
                                            come_call_finalizer2(sType_finalize,param_type_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_324 = come_decrement_ref_count2(param_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            # 1222 "05function2.c"
                                            err_msg(info,"require , or )");
                                            # 1223 "05function2.c"
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_324 = come_decrement_ref_count2(param_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            # 1228 "05function2.c"
                            header_tail_327=info->p;
                            # 1230 "05function2.c"
                            result_type2_328=(struct sType*)come_increment_ref_count(((struct sType*)(right_value467=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value466=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1230, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1232 "05function2.c"
                            __dec_obj79=result_type2_328->mResultType;
                            result_type2_328->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value469=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value468=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1232, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_312)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1233 "05function2.c"
                            __dec_obj80=result_type2_328->mParamTypes;
                            result_type2_328->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value470=list$1sTypephp_clone(param_types2_321))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1234 "05function2.c"
                            __dec_obj81=result_type2_328->mParamNames;
                            result_type2_328->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value471=list$1charphp_clone(param_names2_322))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1235 "05function2.c"
                            result_type2_328->mVarArgs=(_Bool)0;
                            # 1236 "05function2.c"
                            result_type2_328->mStatic=(_Bool)0;
                            # 1238 "05function2.c"
                            var_args_329=(_Bool)0;
                            # 1240 "05function2.c"
                            header_buf_330=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value473=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value472=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1240, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1241 "05function2.c"
                            buffer_append(header_buf_330,header_head_311,header_tail_327-header_head_311);
                            # 1242 "05function2.c"
                            buffer_append_char(header_buf_330,0);
                            # 1244 "05function2.c"
                            param_default_parametors_331=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value475=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value474=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1244, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1250 "05function2.c"
                            fun_332=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value480=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value476=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1246, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value477=__builtin_string(fun_name_313)))),(struct sType*)come_increment_ref_count(result_type2_328),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_316),(struct list$1charph*)come_increment_ref_count(param_default_parametors_331),(_Bool)1,var_args_329,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value478=buffer_to_string(header_buf_330)))),(char*)come_increment_ref_count(((char*)(right_value479=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1252 "05function2.c"
                            fun2_336=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value481=__builtin_string(fun_name_313))));
                            right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1257 "05function2.c"
                            # 1253 "05function2.c"
                            if(_if_conditional340=fun2_336==((void*)0)||fun2_336->mExternal,                            _if_conditional340) {
                                # 1255 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value482=string_clone(fun_name_313)))),(struct sFun*)come_increment_ref_count(fun_332));
                                right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1267 "05function2.c"
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1267, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value484=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value483=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1267, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_332),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result176__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_328, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_313 = come_decrement_ref_count2(fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result176__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_328, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1270 "05function2.c"
                            err_msg(info,"require (");
                            # 1271 "05function2.c"
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_313 = come_decrement_ref_count2(fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1297 "05function2.c"
                    # 1275 "05function2.c"
                    if(define_function_flag_292) {
                        # 1276 "05function2.c"
                        info->p=head;
                        # 1277 "05function2.c"
                        info->sline=sline_280;
                        # 1279 "05function2.c"
                        __result177__ = __result_obj__ = ((struct sNode*)(right_value520=parse_function(info)));
                        if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result177__;
                    }
                    else {
                        # 1297 "05function2.c"
                        # 1281 "05function2.c"
                        if(define_variable_299) {
                            # 1282 "05function2.c"
                            info->p=head;
                            # 1283 "05function2.c"
                            info->sline=sline_280;
                            # 1285 "05function2.c"
                            node_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=parse_global_variable(info))));
                            if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1287 "05function2.c"
                            source_tail_372=info->p;
                            # 1289 "05function2.c"
                            header_373=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value523=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value522=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1289, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1290 "05function2.c"
                            buffer_append(header_373,source_head_278,source_tail_372-source_head_278);
                            # 1292 "05function2.c"
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value524=buffer_to_string(header_373))));
                            right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1294 "05function2.c"
                            __result178__ = __result_obj__ = node_371;
                            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result178__;
                            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    # 1297 "05function2.c"
    info->p=head;
    # 1298 "05function2.c"
    info->sline=sline_280;
    # 1300 "05function2.c"
    buf2_374=(char*)come_increment_ref_count(((char*)(right_value525=parse_word(info))));
    right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1302 "05function2.c"
    __result179__ = __result_obj__ = ((struct sNode*)(right_value526=top_level_v98(buf2_374,head,head_sline,info)));
    buf2_374 = come_decrement_ref_count2(buf2_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result179__;
    buf2_374 = come_decrement_ref_count2(buf2_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional283=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional283) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional284=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional284) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_307;
_Bool _while_condtional35;
struct list_item$1charph* prev_it_308;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_307, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_308, 0, sizeof(struct list_item$1charph*));
                # 433 "./neo-c.h"
                it_307=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional35=it_307!=((void*)0),                _while_condtional35) {
                    # 435 "./neo-c.h"
                    prev_it_308=it_307;
                    # 436 "./neo-c.h"
                    it_307=it_307->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./neo-c.h"
                self->head=((void*)0);
                # 441 "./neo-c.h"
                self->tail=((void*)0);
                # 443 "./neo-c.h"
                self->len=0;
                # 445 "./neo-c.h"
                __result144__ = __result_obj__ = self;
                return __result144__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj78;
struct tuple1$1sTypeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1735 "./neo-c.h"
                                __dec_obj78=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1737 "./neo-c.h"
                                __result147__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result147__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_333;
unsigned int hash_334;
unsigned int it_335;
_Bool _while_condtional39;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct sFun* __result148__;
_Bool _if_conditional338;
_Bool _if_conditional339;
struct sFun* __result149__;
struct sFun* __result150__;
struct sFun* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_333, 0, sizeof(struct sFun*));
memset(&hash_334, 0, sizeof(unsigned int));
memset(&it_335, 0, sizeof(unsigned int));
                                # 1544 "./neo-c.h"
                                # 1545 "./neo-c.h"
                                memset(&default_value_333,0,sizeof(struct sFun*));
                                # 1547 "./neo-c.h"
                                hash_334=string_get_hash_key(((char*)key))%self->size;
                                # 1548 "./neo-c.h"
                                it_335=hash_334;
                                # 1572 "./neo-c.h"
                                while(_while_condtional39=(_Bool)1,                                _while_condtional39) {
                                    # 1570 "./neo-c.h"
                                    # 1551 "./neo-c.h"
                                    if(_if_conditional336=self->item_existance[it_335],                                    _if_conditional336) {
                                        # 1558 "./neo-c.h"
                                        # 1553 "./neo-c.h"
                                        if(_if_conditional337=string_equals(self->keys[it_335],key),                                        _if_conditional337) {
                                            # 1555 "./neo-c.h"
                                            __result148__ = __result_obj__ = self->items[it_335];
                                            come_call_finalizer2(sFun_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result148__;
                                        }
                                        # 1558 "./neo-c.h"
                                        it_335++;
                                        # 1566 "./neo-c.h"
                                        # 1560 "./neo-c.h"
                                        if(_if_conditional338=it_335>=self->size,                                        _if_conditional338) {
                                            # 1561 "./neo-c.h"
                                            it_335=0;
                                        }
                                        else {
                                            # 1566 "./neo-c.h"
                                            # 1563 "./neo-c.h"
                                            if(_if_conditional339=it_335==hash_334,                                            _if_conditional339) {
                                                # 1564 "./neo-c.h"
                                                __result149__ = __result_obj__ = default_value_333;
                                                come_call_finalizer2(sFun_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result149__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1568 "./neo-c.h"
                                        __result150__ = __result_obj__ = default_value_333;
                                        come_call_finalizer2(sFun_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result150__;
                                    }
                                }
                                # 1572 "./neo-c.h"
                                __result151__ = __result_obj__ = default_value_333;
                                come_call_finalizer2(sFun_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result151__;
                                come_call_finalizer2(sFun_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional345;
struct sFun* __result153__;
void* right_value486;
struct sFun* result_338;
_Bool _if_conditional346;
void* right_value487;
char* __dec_obj82;
_Bool _if_conditional347;
void* right_value488;
struct sType* __dec_obj83;
_Bool _if_conditional348;
void* right_value489;
struct list$1sTypeph* __dec_obj84;
_Bool _if_conditional349;
void* right_value490;
struct list$1charph* __dec_obj85;
_Bool _if_conditional350;
void* right_value491;
struct list$1charph* __dec_obj86;
_Bool _if_conditional351;
void* right_value492;
struct sType* __dec_obj87;
_Bool _if_conditional352;
void* right_value510;
struct sBlock* __dec_obj93;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value511;
struct buffer* __dec_obj94;
_Bool _if_conditional396;
void* right_value512;
struct buffer* __dec_obj95;
_Bool _if_conditional397;
void* right_value513;
struct buffer* __dec_obj96;
_Bool _if_conditional398;
void* right_value514;
struct buffer* __dec_obj97;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value515;
char* __dec_obj98;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value516;
char* __dec_obj99;
struct sFun* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value486 = (void*)0;
memset(&result_338, 0, sizeof(struct sFun*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
                                        # 3 "sFun_clone"
                                        # 2 "sFun_clone"
                                        if(_if_conditional345=self==(void*)0,                                        _if_conditional345) {
                                            # 2 "sFun_clone"
                                            __result153__ = __result_obj__ = (void*)0;
                                            return __result153__;
                                        }
                                        # 3 "sFun_clone"
                                        result_338=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value486=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sFun_clone"
                                        # 4 "sFun_clone"
                                        if(_if_conditional346=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional346) {
                                            # 4 "sFun_clone"
                                            __dec_obj82=result_338->mName;
                                            result_338->mName=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(self->mName))));
                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 6 "sFun_clone"
                                        # 5 "sFun_clone"
                                        if(_if_conditional347=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional347) {
                                            # 5 "sFun_clone"
                                            __dec_obj83=result_338->mResultType;
                                            result_338->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value488=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sFun_clone"
                                        # 6 "sFun_clone"
                                        if(_if_conditional348=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional348) {
                                            # 6 "sFun_clone"
                                            __dec_obj84=result_338->mParamTypes;
                                            result_338->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value489=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sFun_clone"
                                        # 7 "sFun_clone"
                                        if(_if_conditional349=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional349) {
                                            # 7 "sFun_clone"
                                            __dec_obj85=result_338->mParamNames;
                                            result_338->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value490=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sFun_clone"
                                        # 8 "sFun_clone"
                                        if(_if_conditional350=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional350) {
                                            # 8 "sFun_clone"
                                            __dec_obj86=result_338->mParamDefaultParametors;
                                            result_338->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value491=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 10 "sFun_clone"
                                        # 9 "sFun_clone"
                                        if(_if_conditional351=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional351) {
                                            # 9 "sFun_clone"
                                            __dec_obj87=result_338->mLambdaType;
                                            result_338->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value492=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 11 "sFun_clone"
                                        # 10 "sFun_clone"
                                        if(_if_conditional352=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional352) {
                                            # 10 "sFun_clone"
                                            __dec_obj93=result_338->mBlock;
                                            result_338->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value510=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 12 "sFun_clone"
                                        # 11 "sFun_clone"
                                        if(_if_conditional393=self!=((void*)0),                                        _if_conditional393) {
                                            # 11 "sFun_clone"
                                            result_338->mExternal=self->mExternal;
                                        }
                                        # 13 "sFun_clone"
                                        # 12 "sFun_clone"
                                        if(_if_conditional394=self!=((void*)0),                                        _if_conditional394) {
                                            # 12 "sFun_clone"
                                            result_338->mVarArgs=self->mVarArgs;
                                        }
                                        # 14 "sFun_clone"
                                        # 13 "sFun_clone"
                                        if(_if_conditional395=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional395) {
                                            # 13 "sFun_clone"
                                            __dec_obj94=result_338->mSource;
                                            result_338->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value511=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 15 "sFun_clone"
                                        # 14 "sFun_clone"
                                        if(_if_conditional396=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional396) {
                                            # 14 "sFun_clone"
                                            __dec_obj95=result_338->mSourceHead;
                                            result_338->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value512=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 16 "sFun_clone"
                                        # 15 "sFun_clone"
                                        if(_if_conditional397=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional397) {
                                            # 15 "sFun_clone"
                                            __dec_obj96=result_338->mSourceHead2;
                                            result_338->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value513=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 17 "sFun_clone"
                                        # 16 "sFun_clone"
                                        if(_if_conditional398=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional398) {
                                            # 16 "sFun_clone"
                                            __dec_obj97=result_338->mSourceDefer;
                                            result_338->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value514=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 18 "sFun_clone"
                                        # 17 "sFun_clone"
                                        if(_if_conditional399=self!=((void*)0),                                        _if_conditional399) {
                                            # 17 "sFun_clone"
                                            result_338->mStatic=self->mStatic;
                                        }
                                        # 19 "sFun_clone"
                                        # 18 "sFun_clone"
                                        if(_if_conditional400=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional400) {
                                            # 18 "sFun_clone"
                                            __dec_obj98=result_338->mComeHeader;
                                            result_338->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value515=string_clone(self->mComeHeader))));
                                            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 20 "sFun_clone"
                                        # 19 "sFun_clone"
                                        if(_if_conditional401=self!=((void*)0),                                        _if_conditional401) {
                                            # 19 "sFun_clone"
                                            result_338->mCloner=self->mCloner;
                                        }
                                        # 21 "sFun_clone"
                                        # 20 "sFun_clone"
                                        if(_if_conditional402=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional402) {
                                            # 20 "sFun_clone"
                                            __dec_obj99=result_338->mDeclareSName;
                                            result_338->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value516=string_clone(self->mDeclareSName))));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 21 "sFun_clone"
                                        __result174__ = __result_obj__ = result_338;
                                        come_call_finalizer2(sFun_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result174__;
                                        come_call_finalizer2(sFun_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional353;
struct sBlock* __result154__;
void* right_value493;
struct sBlock* result_339;
_Bool _if_conditional354;
void* right_value494;
struct list$1sNodeph* __dec_obj88;
_Bool _if_conditional355;
void* right_value509;
struct sVarTable* __dec_obj92;
struct sBlock* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value493 = (void*)0;
memset(&result_339, 0, sizeof(struct sBlock*));
right_value494 = (void*)0;
right_value509 = (void*)0;
                                                # 3 "sBlock_clone"
                                                # 2 "sBlock_clone"
                                                if(_if_conditional353=self==(void*)0,                                                _if_conditional353) {
                                                    # 2 "sBlock_clone"
                                                    __result154__ = __result_obj__ = (void*)0;
                                                    return __result154__;
                                                }
                                                # 3 "sBlock_clone"
                                                result_339=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value493=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sBlock_clone"
                                                # 4 "sBlock_clone"
                                                if(_if_conditional354=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional354) {
                                                    # 4 "sBlock_clone"
                                                    __dec_obj88=result_339->mNodes;
                                                    result_339->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value494=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                # 5 "sBlock_clone"
                                                if(_if_conditional355=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional355) {
                                                    # 5 "sBlock_clone"
                                                    __dec_obj92=result_339->mVarTable;
                                                    result_339->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value509=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                __result173__ = __result_obj__ = result_339;
                                                come_call_finalizer2(sBlock_finalize,result_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result173__;
                                                come_call_finalizer2(sBlock_finalize,result_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional356;
struct sVarTable* __result155__;
void* right_value495;
struct sVarTable* result_340;
_Bool _if_conditional357;
void* right_value508;
struct map$2charphsVarph* __dec_obj91;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
struct sVarTable* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value495 = (void*)0;
memset(&result_340, 0, sizeof(struct sVarTable*));
right_value508 = (void*)0;
                                                        # 3 "sVarTable_clone"
                                                        # 2 "sVarTable_clone"
                                                        if(_if_conditional356=self==(void*)0,                                                        _if_conditional356) {
                                                            # 2 "sVarTable_clone"
                                                            __result155__ = __result_obj__ = (void*)0;
                                                            return __result155__;
                                                        }
                                                        # 3 "sVarTable_clone"
                                                        result_340=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value495=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sVarTable_clone"
                                                        # 4 "sVarTable_clone"
                                                        if(_if_conditional357=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional357) {
                                                            # 4 "sVarTable_clone"
                                                            __dec_obj91=result_340->mVars;
                                                            result_340->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value508=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 6 "sVarTable_clone"
                                                        # 5 "sVarTable_clone"
                                                        if(_if_conditional390=self!=((void*)0),                                                        _if_conditional390) {
                                                            # 5 "sVarTable_clone"
                                                            result_340->mGlobal=self->mGlobal;
                                                        }
                                                        # 7 "sVarTable_clone"
                                                        # 6 "sVarTable_clone"
                                                        if(_if_conditional391=self!=((void*)0),                                                        _if_conditional391) {
                                                            # 6 "sVarTable_clone"
                                                            result_340->mParent=self->mParent;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        # 7 "sVarTable_clone"
                                                        if(_if_conditional392=self!=((void*)0),                                                        _if_conditional392) {
                                                            # 7 "sVarTable_clone"
                                                            result_340->mID=self->mID;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        __result172__ = __result_obj__ = result_340;
                                                        come_call_finalizer2(sVarTable_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result172__;
                                                        come_call_finalizer2(sVarTable_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional358;
struct map$2charphsVarph* __result156__;
void* right_value496;
void* right_value502;
struct map$2charphsVarph* result_346;
void* right_value503;
void* right_value504;
struct list$1charp* __dec_obj90;
char* it_349;
struct sVar* default_value_352;
struct sVar* it2_355;
struct map$2charphsVarph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value496 = (void*)0;
right_value502 = (void*)0;
memset(&result_346, 0, sizeof(struct map$2charphsVarph*));
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&it_349, 0, sizeof(char*));
memset(&default_value_352, 0, sizeof(struct sVar*));
memset(&it2_355, 0, sizeof(struct sVar*));
                                                                # 1181 "./neo-c.h"
                                                                # 1177 "./neo-c.h"
                                                                if(_if_conditional358=self==((void*)0),                                                                _if_conditional358) {
                                                                    # 1178 "./neo-c.h"
                                                                    __result156__ = __result_obj__ = ((void*)0);
                                                                    return __result156__;
                                                                }
                                                                # 1181 "./neo-c.h"
                                                                result_346=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value502=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value496=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1181, "map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1183 "./neo-c.h"
                                                                __dec_obj90=result_346->key_list;
                                                                result_346->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value504=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value503=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1183, "list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1194 "./neo-c.h"
                                                                for(                                                                it_349=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_349=map$2charphsVarph_next(self)                                                                ){
                                                                    # 1186 "./neo-c.h"
                                                                    # 1187 "./neo-c.h"
                                                                    memset(&default_value_352,0,sizeof(struct sVar*));
                                                                    # 1189 "./neo-c.h"
                                                                    it2_355=map$2charphsVarph_at(self,it_349,default_value_352);
                                                                    # 1191 "./neo-c.h"
                                                                    map$2charphsVarph_insert2(result_346,it_349,it2_355);
                                                                }
                                                                # 1194 "./neo-c.h"
                                                                __result171__ = __result_obj__ = result_346;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_346, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result171__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_346, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value497;
void* right_value498;
void* right_value499;
int i_341;
void* right_value500;
void* right_value501;
struct list$1charp* __dec_obj89;
struct map$2charphsVarph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&i_341, 0, sizeof(int));
right_value500 = (void*)0;
right_value501 = (void*)0;
                                                                    # 1087 "./neo-c.h"
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value497=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1087, "char*%"))));
                                                                    right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1088 "./neo-c.h"
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value498=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./neo-c.h", 1088, "sVar*%"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    # 1089 "./neo-c.h"
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value499=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1089, "bool"))));
                                                                    right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1096 "./neo-c.h"
                                                                    for(                                                                    i_341=0;                                                                    i_341<1024;                                                                    i_341++                                                                    ){
                                                                        # 1093 "./neo-c.h"
                                                                        self->item_existance[i_341]=(_Bool)0;
                                                                    }
                                                                    # 1096 "./neo-c.h"
                                                                    self->size=1024;
                                                                    # 1097 "./neo-c.h"
                                                                    self->len=0;
                                                                    # 1099 "./neo-c.h"
                                                                    __dec_obj89=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value501=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value500=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1099, "list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    # 1101 "./neo-c.h"
                                                                    self->it=0;
                                                                    # 1103 "./neo-c.h"
                                                                    __result158__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result158__;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sVar_finalize"
                                                                        # 0 "sVar_finalize"
                                                                        if(_if_conditional359=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional359) {
                                                                            # 0 "sVar_finalize"
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sVar_finalize"
                                                                        # 1 "sVar_finalize"
                                                                        if(_if_conditional360=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional360) {
                                                                            # 1 "sVar_finalize"
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sVar_finalize"
                                                                        # 2 "sVar_finalize"
                                                                        if(_if_conditional361=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional361) {
                                                                            # 2 "sVar_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 4 "sVar_finalize"
                                                                        # 3 "sVar_finalize"
                                                                        if(_if_conditional362=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional362) {
                                                                            # 3 "sVar_finalize"
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 104 "./neo-c.h"
                                                                        self->head=((void*)0);
                                                                        # 105 "./neo-c.h"
                                                                        self->tail=((void*)0);
                                                                        # 106 "./neo-c.h"
                                                                        self->len=0;
                                                                        # 108 "./neo-c.h"
                                                                        __result157__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result157__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_342;
_Bool _while_condtional40;
struct list_item$1charp* prev_it_343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_342, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_343, 0, sizeof(struct list_item$1charp*));
                                                                            # 123 "./neo-c.h"
                                                                            it_342=self->head;
                                                                            # 129 "./neo-c.h"
                                                                            while(_while_condtional40=it_342!=((void*)0),                                                                            _while_condtional40) {
                                                                                # 125 "./neo-c.h"
                                                                                prev_it_343=it_342;
                                                                                # 126 "./neo-c.h"
                                                                                it_342=it_342->next;
                                                                                # 127 "./neo-c.h"
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_344;
_Bool _if_conditional363;
_Bool _if_conditional364;
int i_345;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_344, 0, sizeof(int));
memset(&i_345, 0, sizeof(int));
                                                                        # 1137 "./neo-c.h"
                                                                        for(                                                                        i_344=0;                                                                        i_344<self->size;                                                                        i_344++                                                                        ){
                                                                            # 1136 "./neo-c.h"
                                                                            # 1131 "./neo-c.h"
                                                                            if(_if_conditional363=self->item_existance[i_344],                                                                            _if_conditional363) {
                                                                                # 1135 "./neo-c.h"
                                                                                # 1132 "./neo-c.h"
                                                                                if(_if_conditional364=1,                                                                                _if_conditional364) {
                                                                                    # 1133 "./neo-c.h"
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_344], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        # 1137 "./neo-c.h"
                                                                        come_free((char*)self->items);
                                                                        # 1146 "./neo-c.h"
                                                                        for(                                                                        i_345=0;                                                                        i_345<self->size;                                                                        i_345++                                                                        ){
                                                                            # 1145 "./neo-c.h"
                                                                            # 1140 "./neo-c.h"
                                                                            if(_if_conditional365=self->item_existance[i_345],                                                                            _if_conditional365) {
                                                                                # 1144 "./neo-c.h"
                                                                                # 1141 "./neo-c.h"
                                                                                if(_if_conditional366=1,                                                                                _if_conditional366) {
                                                                                    # 1142 "./neo-c.h"
                                                                                    self->keys[i_345] = come_decrement_ref_count2(self->keys[i_345], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional367;
char* result_347;
char* __result159__;
_Bool _if_conditional368;
char* __result160__;
char* result_348;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_347, 0, sizeof(char*));
memset(&result_348, 0, sizeof(char*));
                                                                    # 1304 "./neo-c.h"
                                                                    # 1299 "./neo-c.h"
                                                                    if(_if_conditional367=self==((void*)0),                                                                    _if_conditional367) {
                                                                        # 1300 "./neo-c.h"
                                                                        # 1301 "./neo-c.h"
                                                                        memset(&result_347,0,sizeof(char*));
                                                                        # 1302 "./neo-c.h"
                                                                        __result159__ = __result_obj__ = result_347;
                                                                        return __result159__;
                                                                    }
                                                                    # 1304 "./neo-c.h"
                                                                    self->key_list->it=self->key_list->head;
                                                                    # 1310 "./neo-c.h"
                                                                    # 1306 "./neo-c.h"
                                                                    if(self->key_list->it) {
                                                                        # 1307 "./neo-c.h"
                                                                        __result160__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result160__;
                                                                    }
                                                                    # 1310 "./neo-c.h"
                                                                    # 1311 "./neo-c.h"
                                                                    memset(&result_348,0,sizeof(char*));
                                                                    # 1312 "./neo-c.h"
                                                                    __result161__ = __result_obj__ = result_348;
                                                                    return __result161__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1333 "./neo-c.h"
                                                                    __result162__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result162__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional369;
char* result_350;
char* __result163__;
_Bool _if_conditional370;
char* __result164__;
char* result_351;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_350, 0, sizeof(char*));
memset(&result_351, 0, sizeof(char*));
                                                                    # 1321 "./neo-c.h"
                                                                    # 1316 "./neo-c.h"
                                                                    if(_if_conditional369=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional369) {
                                                                        # 1317 "./neo-c.h"
                                                                        # 1318 "./neo-c.h"
                                                                        memset(&result_350,0,sizeof(char*));
                                                                        # 1319 "./neo-c.h"
                                                                        __result163__ = __result_obj__ = result_350;
                                                                        return __result163__;
                                                                    }
                                                                    # 1321 "./neo-c.h"
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    # 1327 "./neo-c.h"
                                                                    # 1323 "./neo-c.h"
                                                                    if(self->key_list->it) {
                                                                        # 1324 "./neo-c.h"
                                                                        __result164__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result164__;
                                                                    }
                                                                    # 1327 "./neo-c.h"
                                                                    # 1328 "./neo-c.h"
                                                                    memset(&result_351,0,sizeof(char*));
                                                                    # 1329 "./neo-c.h"
                                                                    __result165__ = __result_obj__ = result_351;
                                                                    return __result165__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_353;
unsigned int it_354;
_Bool _while_condtional41;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct sVar* __result166__;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct sVar* __result167__;
struct sVar* __result168__;
struct sVar* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_353, 0, sizeof(unsigned int));
memset(&it_354, 0, sizeof(unsigned int));
                                                                        # 1226 "./neo-c.h"
                                                                        hash_353=string_get_hash_key(((char*)key))%self->size;
                                                                        # 1227 "./neo-c.h"
                                                                        it_354=hash_353;
                                                                        # 1251 "./neo-c.h"
                                                                        while(_while_condtional41=(_Bool)1,                                                                        _while_condtional41) {
                                                                            # 1249 "./neo-c.h"
                                                                            # 1230 "./neo-c.h"
                                                                            if(_if_conditional371=self->item_existance[it_354],                                                                            _if_conditional371) {
                                                                                # 1237 "./neo-c.h"
                                                                                # 1232 "./neo-c.h"
                                                                                if(_if_conditional372=string_equals(self->keys[it_354],key),                                                                                _if_conditional372) {
                                                                                    # 1234 "./neo-c.h"
                                                                                    __result166__ = __result_obj__ = self->items[it_354];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result166__;
                                                                                }
                                                                                # 1237 "./neo-c.h"
                                                                                it_354++;
                                                                                # 1245 "./neo-c.h"
                                                                                # 1239 "./neo-c.h"
                                                                                if(_if_conditional373=it_354>=self->size,                                                                                _if_conditional373) {
                                                                                    # 1240 "./neo-c.h"
                                                                                    it_354=0;
                                                                                }
                                                                                else {
                                                                                    # 1245 "./neo-c.h"
                                                                                    # 1242 "./neo-c.h"
                                                                                    if(_if_conditional374=it_354==hash_353,                                                                                    _if_conditional374) {
                                                                                        # 1243 "./neo-c.h"
                                                                                        __result167__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result167__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1247 "./neo-c.h"
                                                                                __result168__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result168__;
                                                                            }
                                                                        }
                                                                        # 1251 "./neo-c.h"
                                                                        __result169__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result169__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional375;
unsigned int hash_367;
int it_368;
_Bool _while_condtional43;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool same_key_exist_369;
char* it2_370;
_Bool _if_conditional387;
_Bool _if_conditional388;
struct map$2charphsVarph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_367, 0, sizeof(unsigned int));
memset(&it_368, 0, sizeof(int));
memset(&same_key_exist_369, 0, sizeof(_Bool));
memset(&it2_370, 0, sizeof(char*));
                                                                        # 1470 "./neo-c.h"
                                                                        # 1467 "./neo-c.h"
                                                                        if(_if_conditional375=self->len*2>=self->size,                                                                        _if_conditional375) {
                                                                            # 1468 "./neo-c.h"
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        # 1470 "./neo-c.h"
                                                                        hash_367=string_get_hash_key(key)%self->size;
                                                                        # 1471 "./neo-c.h"
                                                                        it_368=hash_367;
                                                                        # 1529 "./neo-c.h"
                                                                        while(_while_condtional43=(_Bool)1,                                                                        _while_condtional43) {
                                                                            # 1527 "./neo-c.h"
                                                                            # 1474 "./neo-c.h"
                                                                            if(_if_conditional379=self->item_existance[it_368],                                                                            _if_conditional379) {
                                                                                # 1497 "./neo-c.h"
                                                                                # 1476 "./neo-c.h"
                                                                                if(_if_conditional380=string_equals(self->keys[it_368],key),                                                                                _if_conditional380) {
                                                                                    # 1487 "./neo-c.h"
                                                                                    # 1478 "./neo-c.h"
                                                                                    if(_if_conditional381=1,                                                                                    _if_conditional381) {
                                                                                        # 1479 "./neo-c.h"
                                                                                        self->keys[it_368] = come_decrement_ref_count2(self->keys[it_368], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        # 1480 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_368]);
                                                                                        # 1481 "./neo-c.h"
                                                                                        self->keys[it_368]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        # 1484 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_368]);
                                                                                        # 1485 "./neo-c.h"
                                                                                        self->keys[it_368]=key;
                                                                                    }
                                                                                    # 1494 "./neo-c.h"
                                                                                    # 1487 "./neo-c.h"
                                                                                    if(_if_conditional382=1,                                                                                    _if_conditional382) {
                                                                                        # 1488 "./neo-c.h"
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_368], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        # 1489 "./neo-c.h"
                                                                                        self->items[it_368]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        # 1492 "./neo-c.h"
                                                                                        self->items[it_368]=item;
                                                                                    }
                                                                                    # 1494 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                # 1497 "./neo-c.h"
                                                                                it_368++;
                                                                                # 1507 "./neo-c.h"
                                                                                # 1499 "./neo-c.h"
                                                                                if(_if_conditional383=it_368>=self->size,                                                                                _if_conditional383) {
                                                                                    # 1500 "./neo-c.h"
                                                                                    it_368=0;
                                                                                }
                                                                                else {
                                                                                    # 1507 "./neo-c.h"
                                                                                    # 1502 "./neo-c.h"
                                                                                    if(_if_conditional384=it_368==hash_367,                                                                                    _if_conditional384) {
                                                                                        # 1503 "./neo-c.h"
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        # 1504 "./neo-c.h"
                                                                                        stackframe();
                                                                                        # 1505 "./neo-c.h"
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1509 "./neo-c.h"
                                                                                self->item_existance[it_368]=(_Bool)1;
                                                                                # 1516 "./neo-c.h"
                                                                                # 1510 "./neo-c.h"
                                                                                if(_if_conditional385=1,                                                                                _if_conditional385) {
                                                                                    # 1511 "./neo-c.h"
                                                                                    self->keys[it_368]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    # 1514 "./neo-c.h"
                                                                                    self->keys[it_368]=key;
                                                                                }
                                                                                # 1523 "./neo-c.h"
                                                                                # 1516 "./neo-c.h"
                                                                                if(_if_conditional386=1,                                                                                _if_conditional386) {
                                                                                    # 1517 "./neo-c.h"
                                                                                    self->items[it_368]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    # 1520 "./neo-c.h"
                                                                                    self->items[it_368]=item;
                                                                                }
                                                                                # 1523 "./neo-c.h"
                                                                                self->len++;
                                                                                # 1525 "./neo-c.h"
                                                                                break;
                                                                            }
                                                                        }
                                                                        # 1529 "./neo-c.h"
                                                                        same_key_exist_369=(_Bool)0;
                                                                        # 1537 "./neo-c.h"
                                                                        for(                                                                        it2_370=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_370=list$1charp_next(self->key_list)                                                                        ){
                                                                            # 1535 "./neo-c.h"
                                                                            # 1532 "./neo-c.h"
                                                                            if(_if_conditional387=string_equals(it2_370,key),                                                                            _if_conditional387) {
                                                                                # 1533 "./neo-c.h"
                                                                                same_key_exist_369=(_Bool)1;
                                                                            }
                                                                        }
                                                                        # 1541 "./neo-c.h"
                                                                        # 1537 "./neo-c.h"
                                                                        if(_if_conditional388=!same_key_exist_369,                                                                        _if_conditional388) {
                                                                            # 1538 "./neo-c.h"
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        # 1541 "./neo-c.h"
                                                                        __result170__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result170__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_356;
void* right_value505;
char** keys_357;
void* right_value506;
struct sVar** items_358;
void* right_value507;
_Bool* item_existance_359;
int len_360;
char* it_361;
struct sVar* default_value_362;
struct sVar* it2_363;
unsigned int hash_364;
int n_365;
_Bool _while_condtional42;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
struct sVar* default_value_366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_356, 0, sizeof(int));
right_value505 = (void*)0;
memset(&keys_357, 0, sizeof(char**));
right_value506 = (void*)0;
memset(&items_358, 0, sizeof(struct sVar**));
right_value507 = (void*)0;
memset(&item_existance_359, 0, sizeof(_Bool*));
memset(&len_360, 0, sizeof(int));
memset(&it_361, 0, sizeof(char*));
memset(&default_value_362, 0, sizeof(struct sVar*));
memset(&it2_363, 0, sizeof(struct sVar*));
memset(&hash_364, 0, sizeof(unsigned int));
memset(&n_365, 0, sizeof(int));
memset(&default_value_366, 0, sizeof(struct sVar*));
                                                                                # 1337 "./neo-c.h"
                                                                                size_356=self->size*10;
                                                                                # 1338 "./neo-c.h"
                                                                                keys_357=(char**)come_increment_ref_count(((char**)(right_value505=(char**)come_calloc(1, sizeof(char*)*(1*(size_356)), "./neo-c.h", 1338, "char*%"))));
                                                                                right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1339 "./neo-c.h"
                                                                                items_358=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value506=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_356)), "./neo-c.h", 1339, "sVar*%"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 1340 "./neo-c.h"
                                                                                item_existance_359=(_Bool*)come_increment_ref_count(((_Bool*)(right_value507=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_356)), "./neo-c.h", 1340, "bool"))));
                                                                                right_value507 = come_decrement_ref_count2(right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1342 "./neo-c.h"
                                                                                len_360=0;
                                                                                # 1377 "./neo-c.h"
                                                                                for(                                                                                it_361=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_361=map$2charphsVarph_next(self)                                                                                ){
                                                                                    # 1345 "./neo-c.h"
                                                                                    # 1346 "./neo-c.h"
                                                                                    memset(&default_value_362,0,sizeof(struct sVar*));
                                                                                    # 1347 "./neo-c.h"
                                                                                    it2_363=map$2charphsVarph_at(self,it_361,default_value_362);
                                                                                    # 1348 "./neo-c.h"
                                                                                    hash_364=string_get_hash_key(it_361)%size_356;
                                                                                    # 1349 "./neo-c.h"
                                                                                    n_365=hash_364;
                                                                                    # 1375 "./neo-c.h"
                                                                                    while(_while_condtional42=(_Bool)1,                                                                                    _while_condtional42) {
                                                                                        # 1374 "./neo-c.h"
                                                                                        # 1352 "./neo-c.h"
                                                                                        if(_if_conditional376=item_existance_359[n_365],                                                                                        _if_conditional376) {
                                                                                            # 1354 "./neo-c.h"
                                                                                            n_365++;
                                                                                            # 1364 "./neo-c.h"
                                                                                            # 1356 "./neo-c.h"
                                                                                            if(_if_conditional377=n_365>=size_356,                                                                                            _if_conditional377) {
                                                                                                # 1357 "./neo-c.h"
                                                                                                n_365=0;
                                                                                            }
                                                                                            else {
                                                                                                # 1364 "./neo-c.h"
                                                                                                # 1359 "./neo-c.h"
                                                                                                if(_if_conditional378=n_365==hash_364,                                                                                                _if_conditional378) {
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
                                                                                            item_existance_359[n_365]=(_Bool)1;
                                                                                            # 1367 "./neo-c.h"
                                                                                            keys_357[n_365]=it_361;
                                                                                            # 1368 "./neo-c.h"
                                                                                            # 1369 "./neo-c.h"
                                                                                            items_358[n_365]=map$2charphsVarph_at(self,it_361,default_value_366);
                                                                                            # 1371 "./neo-c.h"
                                                                                            len_360++;
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
                                                                                self->keys=keys_357;
                                                                                # 1382 "./neo-c.h"
                                                                                self->items=items_358;
                                                                                # 1383 "./neo-c.h"
                                                                                self->item_existance=item_existance_359;
                                                                                # 1385 "./neo-c.h"
                                                                                self->size=size_356;
                                                                                # 1386 "./neo-c.h"
                                                                                self->len=len_360;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional389;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "map$2charphsVarph_finalize"
                                                                # 0 "map$2charphsVarph_finalize"
                                                                if(_if_conditional389=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional389) {
                                                                    # 0 "map$2charphsVarph_finalize"
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_380;
struct sType* type_384;
struct sClass* generics_class_385;
void* right_value527;
_Bool generics_type_name_387;
void* right_value528;
_Bool mgenerics_type_name_388;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_380, 0, sizeof(struct sClass*));
memset(&type_384, 0, sizeof(struct sType*));
memset(&generics_class_385, 0, sizeof(struct sClass*));
right_value527 = (void*)0;
memset(&generics_type_name_387, 0, sizeof(_Bool));
right_value528 = (void*)0;
memset(&mgenerics_type_name_388, 0, sizeof(_Bool));
    # 1307 "05function2.c"
    klass_380=map$2charphsClassphp_operator_load_element(info->classes,buf);
    # 1308 "05function2.c"
    type_384=map$2charphsTypephp_operator_load_element(info->types,buf);
    # 1309 "05function2.c"
    generics_class_385=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    # 1310 "05function2.c"
    generics_type_name_387=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value527=__builtin_string(buf)))));
    right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1311 "05function2.c"
    mgenerics_type_name_388=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value528=__builtin_string(buf)))));
    right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1313 "05function2.c"
    __result190__ = generics_class_385||generics_type_name_387||mgenerics_type_name_388||klass_380||type_384||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result190__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_375;
unsigned int hash_376;
unsigned int it_377;
_Bool _while_condtional44;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sClass* __result180__;
_Bool _if_conditional415;
_Bool _if_conditional416;
struct sClass* __result181__;
struct sClass* __result182__;
struct sClass* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_375, 0, sizeof(struct sClass*));
memset(&hash_376, 0, sizeof(unsigned int));
memset(&it_377, 0, sizeof(unsigned int));
        # 1544 "./neo-c.h"
        # 1545 "./neo-c.h"
        memset(&default_value_375,0,sizeof(struct sClass*));
        # 1547 "./neo-c.h"
        hash_376=string_get_hash_key(((char*)key))%self->size;
        # 1548 "./neo-c.h"
        it_377=hash_376;
        # 1572 "./neo-c.h"
        while(_while_condtional44=(_Bool)1,        _while_condtional44) {
            # 1570 "./neo-c.h"
            # 1551 "./neo-c.h"
            if(_if_conditional407=self->item_existance[it_377],            _if_conditional407) {
                # 1558 "./neo-c.h"
                # 1553 "./neo-c.h"
                if(_if_conditional408=string_equals(self->keys[it_377],key),                _if_conditional408) {
                    # 1555 "./neo-c.h"
                    __result180__ = __result_obj__ = self->items[it_377];
                    come_call_finalizer2(sClass_finalize,default_value_375, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result180__;
                }
                # 1558 "./neo-c.h"
                it_377++;
                # 1566 "./neo-c.h"
                # 1560 "./neo-c.h"
                if(_if_conditional415=it_377>=self->size,                _if_conditional415) {
                    # 1561 "./neo-c.h"
                    it_377=0;
                }
                else {
                    # 1566 "./neo-c.h"
                    # 1563 "./neo-c.h"
                    if(_if_conditional416=it_377==hash_376,                    _if_conditional416) {
                        # 1564 "./neo-c.h"
                        __result181__ = __result_obj__ = default_value_375;
                        come_call_finalizer2(sClass_finalize,default_value_375, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result181__;
                    }
                }
            }
            else {
                # 1568 "./neo-c.h"
                __result182__ = __result_obj__ = default_value_375;
                come_call_finalizer2(sClass_finalize,default_value_375, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result182__;
            }
        }
        # 1572 "./neo-c.h"
        __result183__ = __result_obj__ = default_value_375;
        come_call_finalizer2(sClass_finalize,default_value_375, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result183__;
        come_call_finalizer2(sClass_finalize,default_value_375, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional409=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional409) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional410=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional410) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional414=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional414) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_378;
_Bool _while_condtional45;
struct list_item$1tuple2$2charphsTypephph* prev_it_379;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_378, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_379, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./neo-c.h"
                                it_378=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional45=it_378!=((void*)0),                                _while_condtional45) {
                                    # 125 "./neo-c.h"
                                    prev_it_379=it_378;
                                    # 126 "./neo-c.h"
                                    it_378=it_378->next;
                                    # 127 "./neo-c.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_379, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional411=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional411) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional412=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional412) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional413=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional413) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_381;
unsigned int hash_382;
unsigned int it_383;
_Bool _while_condtional46;
_Bool _if_conditional417;
_Bool _if_conditional418;
struct sType* __result184__;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct sType* __result185__;
struct sType* __result186__;
struct sType* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_381, 0, sizeof(struct sType*));
memset(&hash_382, 0, sizeof(unsigned int));
memset(&it_383, 0, sizeof(unsigned int));
        # 1544 "./neo-c.h"
        # 1545 "./neo-c.h"
        memset(&default_value_381,0,sizeof(struct sType*));
        # 1547 "./neo-c.h"
        hash_382=string_get_hash_key(((char*)key))%self->size;
        # 1548 "./neo-c.h"
        it_383=hash_382;
        # 1572 "./neo-c.h"
        while(_while_condtional46=(_Bool)1,        _while_condtional46) {
            # 1570 "./neo-c.h"
            # 1551 "./neo-c.h"
            if(_if_conditional417=self->item_existance[it_383],            _if_conditional417) {
                # 1558 "./neo-c.h"
                # 1553 "./neo-c.h"
                if(_if_conditional418=string_equals(self->keys[it_383],key),                _if_conditional418) {
                    # 1555 "./neo-c.h"
                    __result184__ = __result_obj__ = self->items[it_383];
                    come_call_finalizer2(sType_finalize,default_value_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result184__;
                }
                # 1558 "./neo-c.h"
                it_383++;
                # 1566 "./neo-c.h"
                # 1560 "./neo-c.h"
                if(_if_conditional419=it_383>=self->size,                _if_conditional419) {
                    # 1561 "./neo-c.h"
                    it_383=0;
                }
                else {
                    # 1566 "./neo-c.h"
                    # 1563 "./neo-c.h"
                    if(_if_conditional420=it_383==hash_382,                    _if_conditional420) {
                        # 1564 "./neo-c.h"
                        __result185__ = __result_obj__ = default_value_381;
                        come_call_finalizer2(sType_finalize,default_value_381, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result185__;
                    }
                }
            }
            else {
                # 1568 "./neo-c.h"
                __result186__ = __result_obj__ = default_value_381;
                come_call_finalizer2(sType_finalize,default_value_381, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result186__;
            }
        }
        # 1572 "./neo-c.h"
        __result187__ = __result_obj__ = default_value_381;
        come_call_finalizer2(sType_finalize,default_value_381, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result187__;
        come_call_finalizer2(sType_finalize,default_value_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_386;
_Bool _if_conditional421;
_Bool __result188__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_386, 0, sizeof(char*));
        # 746 "./neo-c.h"
        for(        it_386=list$1charph_begin(self);        !list$1charph_end(self);        it_386=list$1charph_next(self)        ){
            # 744 "./neo-c.h"
            # 741 "./neo-c.h"
            if(_if_conditional421=string_operator_equals(it_386,item),            _if_conditional421) {
                # 742 "./neo-c.h"
                __result188__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result188__;
            }
        }
        # 746 "./neo-c.h"
        __result189__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result189__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_389;
int caller_line_390;
char* caller_sname_391;
char* last_code_392;
char* __dec_obj102;
char* last_code2_393;
char* __dec_obj103;
char* last_code3_394;
char* __dec_obj104;
void* right_value529;
char* sname_top_395;
int sline_top_396;
_Bool _if_conditional422;
struct sFun* funX_397;
_Bool _if_conditional423;
_Bool __result191__;
void* right_value530;
struct sType* result_type_398;
void* right_value531;
void* right_value532;
struct list$1sTypeph* param_types_399;
struct list$1sTypeph* o2_saved_400;
struct sType* it_403;
void* right_value533;
void* right_value534;
struct sType* param_type_406;
void* right_value535;
void* right_value536;
struct list$1charph* param_names_407;
void* right_value537;
struct list$1charph* param_default_parametors_408;
char* p_409;
int sline_410;
char* sname_411;
char* head_412;
struct buffer* source_413;
void* right_value538;
struct buffer* __dec_obj105;
struct sType* generics_type_saved_414;
void* right_value539;
struct sType* __dec_obj106;
struct list$1charph* method_generics_type_names_415;
void* right_value540;
void* right_value541;
struct list$1charph* __dec_obj107;
struct list$1charph* o2_saved_416;
char* it_417;
void* right_value542;
void* right_value543;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
void* right_value544;
struct sBlock* block_418;
struct buffer* __dec_obj110;
char* __dec_obj111;
_Bool var_args_419;
void* right_value545;
void* right_value546;
void* right_value547;
void* right_value548;
void* right_value549;
struct sFun* fun_420;
void* right_value550;
void* right_value551;
void* right_value552;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value556;
struct sNode* node_422;
_Bool _if_conditional434;
_Bool __result201__;
struct sType* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
void* right_value557;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_389, 0, sizeof(struct sFun*));
memset(&caller_line_390, 0, sizeof(int));
memset(&caller_sname_391, 0, sizeof(char*));
memset(&last_code_392, 0, sizeof(char*));
memset(&last_code2_393, 0, sizeof(char*));
memset(&last_code3_394, 0, sizeof(char*));
right_value529 = (void*)0;
memset(&sname_top_395, 0, sizeof(char*));
memset(&sline_top_396, 0, sizeof(int));
memset(&funX_397, 0, sizeof(struct sFun*));
right_value530 = (void*)0;
memset(&result_type_398, 0, sizeof(struct sType*));
right_value531 = (void*)0;
right_value532 = (void*)0;
memset(&param_types_399, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_400, 0, sizeof(struct list$1sTypeph*));
memset(&it_403, 0, sizeof(struct sType*));
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&param_type_406, 0, sizeof(struct sType*));
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&param_names_407, 0, sizeof(struct list$1charph*));
right_value537 = (void*)0;
memset(&param_default_parametors_408, 0, sizeof(struct list$1charph*));
memset(&p_409, 0, sizeof(char*));
memset(&sline_410, 0, sizeof(int));
memset(&sname_411, 0, sizeof(char*));
memset(&head_412, 0, sizeof(char*));
memset(&source_413, 0, sizeof(struct buffer*));
right_value538 = (void*)0;
memset(&generics_type_saved_414, 0, sizeof(struct sType*));
right_value539 = (void*)0;
memset(&method_generics_type_names_415, 0, sizeof(struct list$1charph*));
right_value540 = (void*)0;
right_value541 = (void*)0;
memset(&o2_saved_416, 0, sizeof(struct list$1charph*));
memset(&it_417, 0, sizeof(char*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&block_418, 0, sizeof(struct sBlock*));
memset(&var_args_419, 0, sizeof(_Bool));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&fun_420, 0, sizeof(struct sFun*));
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value556 = (void*)0;
memset(&node_422, 0, sizeof(struct sNode*));
right_value557 = (void*)0;
    # 1318 "05function2.c"
    caller_fun_389=info->caller_fun;
    # 1319 "05function2.c"
    info->caller_fun=info->come_fun;
    # 1320 "05function2.c"
    caller_line_390=info->caller_line;
    # 1321 "05function2.c"
    info->caller_line=info->sline;
    # 1322 "05function2.c"
    caller_sname_391=info->caller_sname;
    # 1323 "05function2.c"
    info->caller_sname=info->sname;
    # 1325 "05function2.c"
    last_code_392=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1326 "05function2.c"
    __dec_obj102=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1327 "05function2.c"
    last_code2_393=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1328 "05function2.c"
    __dec_obj103=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1329 "05function2.c"
    last_code3_394=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1330 "05function2.c"
    __dec_obj104=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1332 "05function2.c"
    sname_top_395=(char*)come_increment_ref_count(((char*)(right_value529=__builtin_string(info->sname))));
    right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1333 "05function2.c"
    sline_top_396=info->sline;
    # 1338 "05function2.c"
    # 1335 "05function2.c"
    if(generics_type->mNoSolvedGenericsType->v1) {
        # 1336 "05function2.c"
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    # 1338 "05function2.c"
    funX_397=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1343 "05function2.c"
    # 1339 "05function2.c"
    if(funX_397) {
        # 1340 "05function2.c"
        __result191__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_392 = come_decrement_ref_count2(last_code_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_393 = come_decrement_ref_count2(last_code2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_394 = come_decrement_ref_count2(last_code3_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_395 = come_decrement_ref_count2(sname_top_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result191__;
    }
    # 1343 "05function2.c"
    result_type_398=(struct sType*)come_increment_ref_count(((struct sType*)(right_value530=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1345 "05function2.c"
    param_types_399=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value532=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value531=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1345, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1353 "05function2.c"
    for(    o2_saved_400=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_403=list$1sTypeph_begin((o2_saved_400));    !list$1sTypeph_end((o2_saved_400));    it_403=list$1sTypeph_next((o2_saved_400))    ){
        # 1347 "05function2.c"
        param_type_406=(struct sType*)come_increment_ref_count(((struct sType*)(right_value534=solve_generics(((struct sType*)(right_value533=sType_clone(it_403))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1349 "05function2.c"
        param_type_406->mFunctionParam=(_Bool)1;
        # 1351 "05function2.c"
        list$1sTypeph_add(param_types_399,(struct sType*)come_increment_ref_count(((struct sType*)(right_value535=sType_clone(param_type_406)))));
        come_call_finalizer2(sType_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1353 "05function2.c"
    param_names_407=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value536=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1355 "05function2.c"
    param_default_parametors_408=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value537=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1357 "05function2.c"
    p_409=info->p;
    # 1358 "05function2.c"
    sline_410=info->sline;
    # 1359 "05function2.c"
    sname_411=(char*)come_increment_ref_count(info->sname);
    # 1360 "05function2.c"
    head_412=info->head;
    # 1361 "05function2.c"
    source_413=(struct buffer*)come_increment_ref_count(info->source);
    # 1363 "05function2.c"
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value538=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1364 "05function2.c"
    info->p=info->source->buf;
    # 1365 "05function2.c"
    info->head=info->source->buf;
    # 1367 "05function2.c"
    generics_type_saved_414=(struct sType*)come_increment_ref_count(info->generics_type);
    # 1368 "05function2.c"
    __dec_obj106=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value539=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1370 "05function2.c"
    method_generics_type_names_415=info->method_generics_type_names;
    # 1372 "05function2.c"
    __dec_obj107=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value541=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value540=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1372, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1377 "05function2.c"
    for(    o2_saved_416=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_417=list$1charph_begin((o2_saved_416));    !list$1charph_end((o2_saved_416));    it_417=list$1charph_next((o2_saved_416))    ){
        # 1374 "05function2.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value542=string_clone(it_417)))));
        right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1377 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1378 "05function2.c"
    __dec_obj108=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value543=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1380 "05function2.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1381 "05function2.c"
    __dec_obj109=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1383 "05function2.c"
    block_418=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value544=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1385 "05function2.c"
    info->head=head_412;
    # 1386 "05function2.c"
    __dec_obj110=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_413);
    come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1387 "05function2.c"
    info->p=p_409;
    # 1388 "05function2.c"
    info->sline=sline_410;
    # 1389 "05function2.c"
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_411);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1391 "05function2.c"
    result_type_398->mInline=(_Bool)0;
    # 1393 "05function2.c"
    var_args_419=generics_fun->mVarArgs;
    # 1397 "05function2.c"
    fun_420=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value549=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value545=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1394, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_398),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value546=list$1sTypephp_clone(param_types_399)))),(struct list$1charph*)come_increment_ref_count(param_names_407),(struct list$1charph*)come_increment_ref_count(param_default_parametors_408),(_Bool)0,var_args_419,(struct sBlock*)come_increment_ref_count(block_418),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value547=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value548=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1399 "05function2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value550=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_420));
    right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1401 "05function2.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1401, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value552=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value551=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1401, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_420),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_422=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1407 "05function2.c"
    # 1403 "05function2.c"
    if(_if_conditional434=!node_compile(node_422,info),    _if_conditional434) {
        # 1405 "05function2.c"
        __result201__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_392 = come_decrement_ref_count2(last_code_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_393 = come_decrement_ref_count2(last_code2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_394 = come_decrement_ref_count2(last_code3_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_395 = come_decrement_ref_count2(sname_top_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_411 = come_decrement_ref_count2(sname_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_414, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result201__;
    }
    # 1407 "05function2.c"
    __dec_obj114=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_414);
    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1408 "05function2.c"
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1409 "05function2.c"
    __dec_obj115=method_generics_type_names_415;
    __dec_obj116=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_415);
    come_call_finalizer2(list$1charph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1411 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1413 "05function2.c"
    __dec_obj117=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value557=__builtin_string(sname_top_395))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1414 "05function2.c"
    info->sline=sline_top_396;
    # 1416 "05function2.c"
    __dec_obj118=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_392);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1417 "05function2.c"
    __dec_obj119=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_393);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1418 "05function2.c"
    __dec_obj120=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_394);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1420 "05function2.c"
    info->caller_fun=caller_fun_389;
    # 1421 "05function2.c"
    info->caller_line=caller_line_390;
    # 1422 "05function2.c"
    info->caller_sname=caller_sname_391;
    # 1424 "05function2.c"
    __result202__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_392 = come_decrement_ref_count2(last_code_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_393 = come_decrement_ref_count2(last_code2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_394 = come_decrement_ref_count2(last_code3_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_395 = come_decrement_ref_count2(sname_top_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_411 = come_decrement_ref_count2(sname_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_414, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result202__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_392 = come_decrement_ref_count2(last_code_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_393 = come_decrement_ref_count2(last_code2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_394 = come_decrement_ref_count2(last_code3_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_395 = come_decrement_ref_count2(sname_top_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_411 = come_decrement_ref_count2(sname_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_414, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional424;
struct sType* result_401;
struct sType* __result192__;
_Bool _if_conditional425;
struct sType* __result193__;
struct sType* result_402;
struct sType* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_401, 0, sizeof(struct sType*));
memset(&result_402, 0, sizeof(struct sType*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional424=self==((void*)0),        _if_conditional424) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_401,0,sizeof(struct sType*));
            # 288 "./neo-c.h"
            __result192__ = __result_obj__ = result_401;
            return __result192__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result193__ = __result_obj__ = self->it->item;
            return __result193__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_402,0,sizeof(struct sType*));
        # 298 "./neo-c.h"
        __result194__ = __result_obj__ = result_402;
        return __result194__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result195__ = self==((void*)0)||self->it==((void*)0);
        return __result195__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional426;
struct sType* result_404;
struct sType* __result196__;
_Bool _if_conditional427;
struct sType* __result197__;
struct sType* result_405;
struct sType* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_404, 0, sizeof(struct sType*));
memset(&result_405, 0, sizeof(struct sType*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional426=self==((void*)0)||self->it==((void*)0),        _if_conditional426) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_404,0,sizeof(struct sType*));
            # 305 "./neo-c.h"
            __result196__ = __result_obj__ = result_404;
            return __result196__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result197__ = __result_obj__ = self->it->item;
            return __result197__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_405,0,sizeof(struct sType*));
        # 316 "./neo-c.h"
        __result198__ = __result_obj__ = result_405;
        return __result198__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_423;
int caller_line_424;
char* caller_sname_425;
char* last_code_426;
char* __dec_obj121;
char* last_code2_427;
char* __dec_obj122;
char* last_code3_428;
char* __dec_obj123;
void* right_value558;
char* sname_top_429;
int sline_top_430;
struct sFun* funX_431;
_Bool _if_conditional435;
_Bool __result203__;
void* right_value559;
struct sType* result_type_432;
void* right_value560;
void* right_value561;
struct list$1sTypeph* param_types_433;
struct list$1sTypeph* o2_saved_434;
struct sType* it_435;
void* right_value562;
void* right_value563;
struct sType* param_type_436;
void* right_value564;
void* right_value565;
struct list$1charph* param_names_437;
void* right_value566;
struct list$1charph* param_default_parametors_438;
char* p_439;
int sline_440;
char* sname_441;
char* head_442;
struct buffer* source_443;
void* right_value567;
struct buffer* __dec_obj124;
struct list$1charph* method_generics_type_names_444;
void* right_value568;
void* right_value569;
struct list$1charph* __dec_obj125;
struct list$1charph* o2_saved_445;
char* it_446;
void* right_value570;
void* right_value571;
struct list$1charph* __dec_obj126;
char* __dec_obj127;
void* right_value572;
struct sBlock* block_447;
struct buffer* __dec_obj128;
char* __dec_obj129;
_Bool var_args_448;
void* right_value573;
void* right_value574;
void* right_value575;
void* right_value576;
void* right_value577;
struct sFun* fun_449;
void* right_value578;
void* right_value579;
void* right_value580;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value584;
struct sNode* node_451;
_Bool _if_conditional442;
_Bool __result206__;
struct list$1charph* __dec_obj132;
struct list$1charph* __dec_obj133;
void* right_value585;
char* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_423, 0, sizeof(struct sFun*));
memset(&caller_line_424, 0, sizeof(int));
memset(&caller_sname_425, 0, sizeof(char*));
memset(&last_code_426, 0, sizeof(char*));
memset(&last_code2_427, 0, sizeof(char*));
memset(&last_code3_428, 0, sizeof(char*));
right_value558 = (void*)0;
memset(&sname_top_429, 0, sizeof(char*));
memset(&sline_top_430, 0, sizeof(int));
memset(&funX_431, 0, sizeof(struct sFun*));
right_value559 = (void*)0;
memset(&result_type_432, 0, sizeof(struct sType*));
right_value560 = (void*)0;
right_value561 = (void*)0;
memset(&param_types_433, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_434, 0, sizeof(struct list$1sTypeph*));
memset(&it_435, 0, sizeof(struct sType*));
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&param_type_436, 0, sizeof(struct sType*));
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&param_names_437, 0, sizeof(struct list$1charph*));
right_value566 = (void*)0;
memset(&param_default_parametors_438, 0, sizeof(struct list$1charph*));
memset(&p_439, 0, sizeof(char*));
memset(&sline_440, 0, sizeof(int));
memset(&sname_441, 0, sizeof(char*));
memset(&head_442, 0, sizeof(char*));
memset(&source_443, 0, sizeof(struct buffer*));
right_value567 = (void*)0;
memset(&method_generics_type_names_444, 0, sizeof(struct list$1charph*));
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&o2_saved_445, 0, sizeof(struct list$1charph*));
memset(&it_446, 0, sizeof(char*));
right_value570 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&block_447, 0, sizeof(struct sBlock*));
memset(&var_args_448, 0, sizeof(_Bool));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&fun_449, 0, sizeof(struct sFun*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value584 = (void*)0;
memset(&node_451, 0, sizeof(struct sNode*));
right_value585 = (void*)0;
    # 1429 "05function2.c"
    caller_fun_423=info->caller_fun;
    # 1430 "05function2.c"
    info->caller_fun=info->come_fun;
    # 1431 "05function2.c"
    caller_line_424=info->caller_line;
    # 1432 "05function2.c"
    info->caller_line=info->sline;
    # 1433 "05function2.c"
    caller_sname_425=info->caller_sname;
    # 1434 "05function2.c"
    info->caller_sname=info->sname;
    # 1436 "05function2.c"
    last_code_426=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1437 "05function2.c"
    __dec_obj121=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1438 "05function2.c"
    last_code2_427=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1439 "05function2.c"
    __dec_obj122=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1440 "05function2.c"
    last_code3_428=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1441 "05function2.c"
    __dec_obj123=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1443 "05function2.c"
    sname_top_429=(char*)come_increment_ref_count(((char*)(right_value558=__builtin_string(info->sname))));
    right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1444 "05function2.c"
    sline_top_430=info->sline;
    # 1446 "05function2.c"
    funX_431=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1451 "05function2.c"
    # 1447 "05function2.c"
    if(funX_431) {
        # 1448 "05function2.c"
        __result203__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_426 = come_decrement_ref_count2(last_code_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_427 = come_decrement_ref_count2(last_code2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_428 = come_decrement_ref_count2(last_code3_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_429 = come_decrement_ref_count2(sname_top_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result203__;
    }
    # 1451 "05function2.c"
    result_type_432=(struct sType*)come_increment_ref_count(((struct sType*)(right_value559=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer2(sType_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1453 "05function2.c"
    param_types_433=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value561=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value560=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1453, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1461 "05function2.c"
    for(    o2_saved_434=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_435=list$1sTypeph_begin((o2_saved_434));    !list$1sTypeph_end((o2_saved_434));    it_435=list$1sTypeph_next((o2_saved_434))    ){
        # 1455 "05function2.c"
        param_type_436=(struct sType*)come_increment_ref_count(((struct sType*)(right_value563=solve_method_generics(((struct sType*)(right_value562=sType_clone(it_435))),info))));
        come_call_finalizer2(sType_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1457 "05function2.c"
        param_type_436->mFunctionParam=(_Bool)1;
        # 1459 "05function2.c"
        list$1sTypeph_add(param_types_433,(struct sType*)come_increment_ref_count(((struct sType*)(right_value564=sType_clone(param_type_436)))));
        come_call_finalizer2(sType_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_436, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1461 "05function2.c"
    param_names_437=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value565=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1463 "05function2.c"
    param_default_parametors_438=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value566=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1465 "05function2.c"
    p_439=info->p;
    # 1466 "05function2.c"
    sline_440=info->sline;
    # 1467 "05function2.c"
    sname_441=(char*)come_increment_ref_count(info->sname);
    # 1468 "05function2.c"
    head_442=info->head;
    # 1469 "05function2.c"
    source_443=(struct buffer*)come_increment_ref_count(info->source);
    # 1471 "05function2.c"
    __dec_obj124=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value567=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1472 "05function2.c"
    info->p=info->source->buf;
    # 1473 "05function2.c"
    info->head=info->source->buf;
    # 1475 "05function2.c"
    method_generics_type_names_444=info->method_generics_type_names;
    # 1477 "05function2.c"
    __dec_obj125=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value569=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value568=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1477, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1482 "05function2.c"
    for(    o2_saved_445=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_446=list$1charph_begin((o2_saved_445));    !list$1charph_end((o2_saved_445));    it_446=list$1charph_next((o2_saved_445))    ){
        # 1479 "05function2.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value570=string_clone(it_446)))));
        right_value570 = come_decrement_ref_count2(right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1482 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1483 "05function2.c"
    __dec_obj126=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value571=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1485 "05function2.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1486 "05function2.c"
    __dec_obj127=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1488 "05function2.c"
    block_447=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value572=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1490 "05function2.c"
    info->head=head_442;
    # 1491 "05function2.c"
    __dec_obj128=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_443);
    come_call_finalizer2(buffer_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1492 "05function2.c"
    info->p=p_439;
    # 1493 "05function2.c"
    info->sline=sline_440;
    # 1494 "05function2.c"
    __dec_obj129=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_441);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1496 "05function2.c"
    result_type_432->mInline=(_Bool)0;
    # 1498 "05function2.c"
    var_args_448=generics_fun->mVarArgs;
    # 1502 "05function2.c"
    fun_449=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value577=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value573=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1499, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_432),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value574=list$1sTypephp_clone(param_types_433)))),(struct list$1charph*)come_increment_ref_count(param_names_437),(struct list$1charph*)come_increment_ref_count(param_default_parametors_438),(_Bool)0,var_args_448,(struct sBlock*)come_increment_ref_count(block_447),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value575=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value576=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value576 = come_decrement_ref_count2(right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1504 "05function2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value578=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_449));
    right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1506 "05function2.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1506, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value580=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value579=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1506, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_449),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sFunNode_sline;
    _inf_value3->sname=(void*)sFunNode_sname;
    _inf_value3->terminated=(void*)sFunNode_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_451=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=_inf_value3)));
    come_call_finalizer2(sFunNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1512 "05function2.c"
    # 1508 "05function2.c"
    if(_if_conditional442=!node_compile(node_451,info),    _if_conditional442) {
        # 1510 "05function2.c"
        __result206__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_426 = come_decrement_ref_count2(last_code_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_427 = come_decrement_ref_count2(last_code2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_428 = come_decrement_ref_count2(last_code3_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_429 = come_decrement_ref_count2(sname_top_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_449, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result206__;
    }
    # 1512 "05function2.c"
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1513 "05function2.c"
    __dec_obj132=method_generics_type_names_444;
    __dec_obj133=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_444);
    come_call_finalizer2(list$1charph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1515 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1517 "05function2.c"
    __dec_obj134=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value585=__builtin_string(sname_top_429))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1518 "05function2.c"
    info->sline=sline_top_430;
    # 1520 "05function2.c"
    __dec_obj135=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_426);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1521 "05function2.c"
    __dec_obj136=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_427);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1522 "05function2.c"
    __dec_obj137=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_428);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1524 "05function2.c"
    info->caller_fun=caller_fun_423;
    # 1525 "05function2.c"
    info->caller_line=caller_line_424;
    # 1526 "05function2.c"
    info->caller_sname=caller_sname_425;
    # 1528 "05function2.c"
    __result207__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_426 = come_decrement_ref_count2(last_code_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_427 = come_decrement_ref_count2(last_code2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_428 = come_decrement_ref_count2(last_code3_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_429 = come_decrement_ref_count2(sname_top_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_449, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result207__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_426 = come_decrement_ref_count2(last_code_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_427 = come_decrement_ref_count2(last_code2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_428 = come_decrement_ref_count2(last_code3_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_429 = come_decrement_ref_count2(sname_top_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_449, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_452;
char* source_head_453;
void* right_value586;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_454;
char* var_name_455;
_Bool err_456;
_Bool _if_conditional443;
_Bool method_definition_457;
char* p_458;
int sline_459;
void* right_value587;
void* right_value588;
struct buffer* buf2_460;
_Bool _while_condtional47;
_Bool _while_condtional48;
_Bool _while_condtional49;
_Bool _while_condtional50;
_Bool _if_conditional444;
char* fun_name_461;
char* base_fun_name_462;
_Bool _if_conditional445;
void* right_value589;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_463;
char* name_464;
_Bool err_465;
_Bool _if_conditional446;
void* right_value590;
void* right_value591;
char* __dec_obj138;
_Bool _if_conditional447;
void* right_value592;
void* right_value593;
char* __dec_obj139;
void* right_value594;
char* __dec_obj140;
void* right_value595;
void* right_value596;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_466;
struct list$1charph* param_names_467;
struct list$1charph* param_default_parametors_468;
_Bool var_args_469;
char* header_tail_470;
void* right_value597;
void* right_value598;
struct buffer* header_buf_471;
int version_472;
_Bool _if_conditional451;
int n_473;
_Bool _while_condtional51;
_Bool _if_conditional452;
void* right_value599;
struct sBlock* block_474;
static int lambda_num_475=0;
void* right_value600;
char* fun_name_476;
void* right_value601;
void* right_value602;
void* right_value603;
void* right_value604;
void* right_value605;
struct sFun* fun_477;
void* right_value606;
struct sFun* fun2_478;
_Bool _if_conditional453;
void* right_value607;
void* right_value608;
void* right_value609;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value612;
struct sNode* __result210__;
_Bool _if_conditional460;
void* right_value613;
char* none_generics_name_480;
void* right_value614;
char* generics_sname_481;
int generics_sline_482;
void* right_value615;
char* block_483;
void* right_value616;
void* right_value617;
void* right_value618;
void* right_value619;
void* right_value620;
void* right_value621;
struct sGenericsFun* fun_484;
void* right_value622;
char* fun_name3_485;
void* right_value626;
struct sNode* __result225__;
_Bool _if_conditional483;
void* right_value627;
char* generics_sname_507;
int generics_sline_508;
void* right_value628;
char* block_509;
void* right_value629;
void* right_value630;
void* right_value631;
void* right_value632;
void* right_value633;
void* right_value634;
struct sGenericsFun* fun_510;
void* right_value635;
char* fun_name3_511;
void* right_value636;
struct sNode* __result226__;
_Bool _if_conditional484;
char* source_tail_512;
void* right_value637;
void* right_value638;
struct buffer* header_513;
void* right_value639;
void* right_value640;
struct sBlock* block_514;
_Bool static__515;
_Bool _if_conditional485;
_Bool _if_conditional486;
void* right_value641;
void* right_value642;
char* new_fun_name_516;
void* right_value643;
char* __dec_obj142;
void* right_value644;
void* right_value645;
void* right_value646;
void* right_value647;
void* right_value648;
void* right_value649;
struct sFun* fun_517;
void* right_value650;
struct sFun* fun2_518;
_Bool _if_conditional487;
void* right_value651;
void* right_value652;
void* right_value653;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value657;
struct sNode* __result229__;
_Bool _if_conditional494;
_Bool _if_conditional495;
void* right_value658;
char* new_fun_name_520;
void* right_value659;
char* __dec_obj145;
_Bool _if_conditional496;
void* right_value660;
void* right_value661;
void* right_value662;
void* right_value663;
void* right_value664;
struct sFun* fun_521;
void* right_value665;
struct sFun* fun2_522;
_Bool _if_conditional497;
void* right_value666;
char* source_tail_523;
void* right_value667;
void* right_value668;
struct buffer* header_524;
void* right_value669;
void* right_value670;
void* right_value671;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value675;
struct sNode* __result232__;
void* right_value676;
char* asm_fun_526;
_Bool _if_conditional504;
void* right_value677;
char* __dec_obj148;
void* right_value678;
void* right_value679;
void* right_value680;
void* right_value681;
void* right_value682;
struct sFun* fun_527;
void* right_value683;
struct sFun* fun2_528;
_Bool _if_conditional505;
void* right_value684;
char* source_tail_529;
void* right_value685;
void* right_value686;
struct buffer* header_530;
void* right_value687;
void* right_value688;
void* right_value689;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value693;
struct sNode* __result235__;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_452, 0, sizeof(char*));
memset(&source_head_453, 0, sizeof(char*));
right_value586 = (void*)0;
memset(&result_type_454, 0, sizeof(struct sType*));
memset(&var_name_455, 0, sizeof(char*));
memset(&err_456, 0, sizeof(_Bool));
memset(&result_type_454, 0, sizeof(struct sType*));
memset(&var_name_455, 0, sizeof(char*));
memset(&err_456, 0, sizeof(_Bool));
memset(&method_definition_457, 0, sizeof(_Bool));
memset(&p_458, 0, sizeof(char*));
memset(&sline_459, 0, sizeof(int));
right_value587 = (void*)0;
right_value588 = (void*)0;
memset(&buf2_460, 0, sizeof(struct buffer*));
memset(&fun_name_461, 0, sizeof(char*));
memset(&base_fun_name_462, 0, sizeof(char*));
right_value589 = (void*)0;
memset(&obj_type_463, 0, sizeof(struct sType*));
memset(&name_464, 0, sizeof(char*));
memset(&err_465, 0, sizeof(_Bool));
memset(&obj_type_463, 0, sizeof(struct sType*));
memset(&name_464, 0, sizeof(char*));
memset(&err_465, 0, sizeof(_Bool));
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&param_types_466, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_467, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_468, 0, sizeof(struct list$1charph*));
memset(&var_args_469, 0, sizeof(_Bool));
memset(&param_types_466, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_467, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_468, 0, sizeof(struct list$1charph*));
memset(&var_args_469, 0, sizeof(_Bool));
memset(&header_tail_470, 0, sizeof(char*));
right_value597 = (void*)0;
right_value598 = (void*)0;
memset(&header_buf_471, 0, sizeof(struct buffer*));
memset(&version_472, 0, sizeof(int));
memset(&n_473, 0, sizeof(int));
right_value599 = (void*)0;
memset(&block_474, 0, sizeof(struct sBlock*));
right_value600 = (void*)0;
memset(&fun_name_476, 0, sizeof(char*));
right_value601 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&fun_477, 0, sizeof(struct sFun*));
right_value606 = (void*)0;
memset(&fun2_478, 0, sizeof(struct sFun*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value612 = (void*)0;
right_value613 = (void*)0;
memset(&none_generics_name_480, 0, sizeof(char*));
right_value614 = (void*)0;
memset(&generics_sname_481, 0, sizeof(char*));
memset(&generics_sline_482, 0, sizeof(int));
right_value615 = (void*)0;
memset(&block_483, 0, sizeof(char*));
right_value616 = (void*)0;
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&fun_484, 0, sizeof(struct sGenericsFun*));
right_value622 = (void*)0;
memset(&fun_name3_485, 0, sizeof(char*));
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&generics_sname_507, 0, sizeof(char*));
memset(&generics_sline_508, 0, sizeof(int));
right_value628 = (void*)0;
memset(&block_509, 0, sizeof(char*));
right_value629 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
right_value634 = (void*)0;
memset(&fun_510, 0, sizeof(struct sGenericsFun*));
right_value635 = (void*)0;
memset(&fun_name3_511, 0, sizeof(char*));
right_value636 = (void*)0;
memset(&source_tail_512, 0, sizeof(char*));
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&header_513, 0, sizeof(struct buffer*));
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&block_514, 0, sizeof(struct sBlock*));
memset(&static__515, 0, sizeof(_Bool));
right_value641 = (void*)0;
right_value642 = (void*)0;
memset(&new_fun_name_516, 0, sizeof(char*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
memset(&fun_517, 0, sizeof(struct sFun*));
right_value650 = (void*)0;
memset(&fun2_518, 0, sizeof(struct sFun*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value657 = (void*)0;
right_value658 = (void*)0;
memset(&new_fun_name_520, 0, sizeof(char*));
right_value659 = (void*)0;
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&fun_521, 0, sizeof(struct sFun*));
right_value665 = (void*)0;
memset(&fun2_522, 0, sizeof(struct sFun*));
right_value666 = (void*)0;
memset(&source_tail_523, 0, sizeof(char*));
right_value667 = (void*)0;
right_value668 = (void*)0;
memset(&header_524, 0, sizeof(struct buffer*));
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&asm_fun_526, 0, sizeof(char*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value680 = (void*)0;
right_value681 = (void*)0;
right_value682 = (void*)0;
memset(&fun_527, 0, sizeof(struct sFun*));
right_value683 = (void*)0;
memset(&fun2_528, 0, sizeof(struct sFun*));
right_value684 = (void*)0;
memset(&source_tail_529, 0, sizeof(char*));
right_value685 = (void*)0;
right_value686 = (void*)0;
memset(&header_530, 0, sizeof(struct buffer*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value693 = (void*)0;
    # 1533 "05function2.c"
    header_head_452=info->p;
    # 1534 "05function2.c"
    source_head_453=info->p;
    # 1535 "05function2.c"
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value586=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_454=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_455=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_456=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1543 "05function2.c"
    # 1537 "05function2.c"
    if(_if_conditional443=!err_456,    _if_conditional443) {
        # 1538 "05function2.c"
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        # 1539 "05function2.c"
        exit(2);
    }
    # 1543 "05function2.c"
    method_definition_457=(_Bool)0;
    # 1576 "05function2.c"
    {
        # 1545 "05function2.c"
        p_458=info->p;
        # 1546 "05function2.c"
        sline_459=info->sline;
        # 1548 "05function2.c"
        buf2_460=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value588=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value587=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1548, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1553 "05function2.c"
        while(_while_condtional47=xisalnum(*info->p)||*info->p==95,        _while_condtional47) {
            # 1550 "05function2.c"
            buffer_append_char(buf2_460,*info->p);
            # 1551 "05function2.c"
            info->p++;
        }
        # 1553 "05function2.c"
        skip_spaces_and_lf(info);
        # 1559 "05function2.c"
        while(_while_condtional48=*info->p==91&&*(info->p+1)==93,        _while_condtional48) {
            # 1556 "05function2.c"
            info->p+=2;
            # 1557 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1563 "05function2.c"
        while(_while_condtional49=*info->p==42,        _while_condtional49) {
            # 1560 "05function2.c"
            info->p++;
            # 1561 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1568 "05function2.c"
        while(_while_condtional50=*info->p==37,        _while_condtional50) {
            # 1564 "05function2.c"
            info->p++;
            # 1565 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1572 "05function2.c"
        # 1568 "05function2.c"
        if(_if_conditional444=buffer_length(buf2_460)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional444) {
            # 1569 "05function2.c"
            method_definition_457=(_Bool)1;
        }
        # 1572 "05function2.c"
        info->p=p_458;
        # 1573 "05function2.c"
        info->sline=sline_459;
        come_call_finalizer2(buffer_finalize,buf2_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1576 "05function2.c"
    # 1577 "05function2.c"
    base_fun_name_462=((void*)0);
    # 1602 "05function2.c"
    # 1578 "05function2.c"
    if(method_definition_457) {
        # 1579 "05function2.c"
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value589=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_463=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_464=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_465=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1586 "05function2.c"
        # 1581 "05function2.c"
        if(_if_conditional446=!err_465,        _if_conditional446) {
            # 1582 "05function2.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1583 "05function2.c"
            exit(2);
        }
        # 1586 "05function2.c"
        expected_next_character(58,info);
        # 1587 "05function2.c"
        expected_next_character(58,info);
        # 1589 "05function2.c"
        base_fun_name_462=(char*)come_increment_ref_count(((char*)(right_value590=parse_word(info))));
        right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1590 "05function2.c"
        __dec_obj138=fun_name_461;
        fun_name_461=(char*)come_increment_ref_count(((char*)(right_value591=create_method_name(obj_type_463,(_Bool)0,base_fun_name_462,info,(_Bool)1))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1602 "05function2.c"
        # 1592 "05function2.c"
        if(info->impl_type) {
            # 1593 "05function2.c"
            base_fun_name_462=(char*)come_increment_ref_count(((char*)(right_value592=parse_word(info))));
            right_value592 = come_decrement_ref_count2(right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1595 "05function2.c"
            __dec_obj139=fun_name_461;
            fun_name_461=(char*)come_increment_ref_count(((char*)(right_value593=create_method_name(info->impl_type,(_Bool)0,base_fun_name_462,info,(_Bool)1))));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value593 = come_decrement_ref_count2(right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 1598 "05function2.c"
            __dec_obj140=fun_name_461;
            fun_name_461=(char*)come_increment_ref_count(((char*)(right_value594=parse_word(info))));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1599 "05function2.c"
            base_fun_name_462=(char*)come_increment_ref_count(((char*)(right_value595=__builtin_string(fun_name_461))));
            right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 1602 "05function2.c"
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value596=parse_params(info)));
    param_types_466=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_467=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_468=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_469=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1603 "05function2.c"
    header_tail_470=info->p;
    # 1605 "05function2.c"
    header_buf_471=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value598=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value597=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1605, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1607 "05function2.c"
    buffer_append(header_buf_471,header_head_452,header_tail_470-header_head_452);
    # 1608 "05function2.c"
    buffer_append_char(header_buf_471,0);
    # 1610 "05function2.c"
    version_472=0;
    # 1625 "05function2.c"
    # 1611 "05function2.c"
    if(_if_conditional451=strmemcmp(info->p,"version"),    _if_conditional451) {
        # 1612 "05function2.c"
        info->p+=strlen("version");
        # 1613 "05function2.c"
        skip_spaces_and_lf(info);
        # 1615 "05function2.c"
        n_473=0;
        # 1620 "05function2.c"
        while(_while_condtional51=xisdigit(*info->p),        _while_condtional51) {
            # 1617 "05function2.c"
            n_473=n_473*10+(*info->p-48);
            # 1618 "05function2.c"
            info->p++;
        }
        # 1620 "05function2.c"
        skip_spaces_and_lf(info);
        # 1622 "05function2.c"
        version_472=n_473;
    }
    # 1800 "05function2.c"
    # 1625 "05function2.c"
    if(_if_conditional452=charp_operator_equals(base_fun_name_462,"lambda"),    _if_conditional452) {
        # 1626 "05function2.c"
        block_474=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value599=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1628 "05function2.c"
        # 1629 "05function2.c"
        lambda_num_475++;
        # 1631 "05function2.c"
        fun_name_476=(char*)come_increment_ref_count(((char*)(right_value600=xsprintf("lambda%d",lambda_num_475))));
        right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1633 "05function2.c"
        result_type_454->mStatic=(_Bool)0;
        # 1638 "05function2.c"
        fun_477=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value605=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value601=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1635, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value602=__builtin_string(fun_name_476)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),(_Bool)0,var_args_469,(struct sBlock*)come_increment_ref_count(block_474),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value603=buffer_to_string(header_buf_471)))),(char*)come_increment_ref_count(((char*)(right_value604=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value602 = come_decrement_ref_count2(right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1640 "05function2.c"
        fun2_478=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value606=__builtin_string(fun_name_476))));
        right_value606 = come_decrement_ref_count2(right_value606, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1646 "05function2.c"
        # 1641 "05function2.c"
        if(_if_conditional453=fun2_478==((void*)0)||fun2_478->mExternal,        _if_conditional453) {
            # 1643 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value607=string_clone(fun_name_476)))),(struct sFun*)come_increment_ref_count(fun_477));
            right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1646 "05function2.c"
        base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        # 1647 "05function2.c"
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1647, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value609=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value608=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1647, "sLambdaNode")))),fun_477,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sLambdaNode_sline;
        _inf_value4->sname=(void*)sLambdaNode_sname;
        _inf_value4->terminated=(void*)sLambdaNode_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result210__ = __result_obj__ = ((struct sNode*)(right_value612=_inf_value4));
        come_call_finalizer2(sBlock_finalize,block_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_476 = come_decrement_ref_count2(fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_477, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result210__;
        come_call_finalizer2(sBlock_finalize,block_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_476 = come_decrement_ref_count2(fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_477, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1800 "05function2.c"
        # 1649 "05function2.c"
        if(_if_conditional460=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional460) {
            # 1650 "05function2.c"
            none_generics_name_480=(char*)come_increment_ref_count(((char*)(right_value613=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1652 "05function2.c"
            generics_sname_481=(char*)come_increment_ref_count(((char*)(right_value614=__builtin_string(info->sname))));
            right_value614 = come_decrement_ref_count2(right_value614, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1653 "05function2.c"
            generics_sline_482=info->sline;
            # 1655 "05function2.c"
            block_483=(char*)come_increment_ref_count(((char*)(right_value615=skip_block(info))));
            right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1657 "05function2.c"
            fun_484=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value621=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value616=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1657, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value617=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value618=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value619=__builtin_string(fun_name_461)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),var_args_469,(char*)come_increment_ref_count(block_483),info,(char*)come_increment_ref_count(((char*)(right_value620=__builtin_string(generics_sname_481)))),generics_sline_482))));
            come_call_finalizer2(sGenericsFun_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1659 "05function2.c"
            fun_name3_485=(char*)come_increment_ref_count(((char*)(right_value622=xsprintf("%s_%s",none_generics_name_480,base_fun_name_462))));
            right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1661 "05function2.c"
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value626=__builtin_string(fun_name3_485)))),(struct sGenericsFun*)come_increment_ref_count(fun_484));
            right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1663 "05function2.c"
            base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            # 1665 "05function2.c"
            __result225__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_480 = come_decrement_ref_count2(none_generics_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_481 = come_decrement_ref_count2(generics_sname_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_483 = come_decrement_ref_count2(block_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_485 = come_decrement_ref_count2(fun_name3_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result225__;
            none_generics_name_480 = come_decrement_ref_count2(none_generics_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_481 = come_decrement_ref_count2(generics_sname_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_483 = come_decrement_ref_count2(block_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_485 = come_decrement_ref_count2(fun_name3_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1800 "05function2.c"
            # 1667 "05function2.c"
            if(_if_conditional483=list$1charph_length(info->method_generics_type_names)>0,            _if_conditional483) {
                # 1668 "05function2.c"
                generics_sname_507=(char*)come_increment_ref_count(((char*)(right_value627=__builtin_string(info->sname))));
                right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1669 "05function2.c"
                generics_sline_508=info->sline;
                # 1671 "05function2.c"
                block_509=(char*)come_increment_ref_count(((char*)(right_value628=skip_block(info))));
                right_value628 = come_decrement_ref_count2(right_value628, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1673 "05function2.c"
                fun_510=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value634=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value629=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1673, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value630=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value631=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value632=__builtin_string(fun_name_461)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),var_args_469,(char*)come_increment_ref_count(block_509),info,(char*)come_increment_ref_count(((char*)(right_value633=__builtin_string(generics_sname_507)))),generics_sline_508))));
                come_call_finalizer2(sGenericsFun_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsFun_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1675 "05function2.c"
                fun_name3_511=(char*)come_increment_ref_count(((char*)(right_value635=charp_clone(base_fun_name_462))));
                right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1677 "05function2.c"
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value636=__builtin_string(fun_name3_511)))),(struct sGenericsFun*)come_increment_ref_count(fun_510));
                right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1679 "05function2.c"
                base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1681 "05function2.c"
                __result226__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_507 = come_decrement_ref_count2(generics_sname_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_509 = come_decrement_ref_count2(block_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,fun_510, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result226__;
                generics_sname_507 = come_decrement_ref_count2(generics_sname_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_509 = come_decrement_ref_count2(block_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,fun_510, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 1800 "05function2.c"
                # 1683 "05function2.c"
                if(_if_conditional484=*info->p==123,                _if_conditional484) {
                    # 1684 "05function2.c"
                    source_tail_512=info->p-1;
                    # 1686 "05function2.c"
                    header_513=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value638=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value637=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1686, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1687 "05function2.c"
                    buffer_append(header_513,source_head_453,source_tail_512-source_head_453);
                    # 1688 "05function2.c"
                    buffer_append_str(header_513,";\n");
                    # 1690 "05function2.c"
                    add_come_code_at_come_header(info,"%s",((char*)(right_value639=buffer_to_string(header_513))));
                    right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1692 "05function2.c"
                    block_514=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value640=parse_block(info,(_Bool)0))));
                    come_call_finalizer2(sBlock_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1695 "05function2.c"
                    static__515=(_Bool)0;
                    # 1701 "05function2.c"
                    # 1696 "05function2.c"
                    if(result_type_454->mStatic) {
                        # 1697 "05function2.c"
                        result_type_454->mStatic=(_Bool)0;
                        # 1698 "05function2.c"
                        static__515=(_Bool)1;
                    }
                    # 1706 "05function2.c"
                    # 1701 "05function2.c"
                    if(_if_conditional486=version_472>0,                    _if_conditional486) {
                        # 1702 "05function2.c"
                        new_fun_name_516=(char*)come_increment_ref_count(((char*)(right_value642=xsprintf("%s_v%d",((char*)(right_value641=__builtin_string(fun_name_461))),version_472))));
                        right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1703 "05function2.c"
                        __dec_obj142=fun_name_461;
                        fun_name_461=(char*)come_increment_ref_count(((char*)(right_value643=__builtin_string(new_fun_name_516))));
                        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_516 = come_decrement_ref_count2(new_fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 1713 "05function2.c"
                    fun_517=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value649=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value644=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1706, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value645=__builtin_string(fun_name_461)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),(_Bool)0,var_args_469,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value646=sBlock_clone(block_514)))),static__515,(char*)come_increment_ref_count(((char*)(right_value647=buffer_to_string(header_buf_471)))),(char*)come_increment_ref_count(((char*)(right_value648=__builtin_string(info->sname)))),info))));
                    come_call_finalizer2(sFun_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sBlock_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sFun_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1715 "05function2.c"
                    fun2_518=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value650=__builtin_string(fun_name_461))));
                    right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1722 "05function2.c"
                    # 1716 "05function2.c"
                    if(_if_conditional487=fun2_518==((void*)0)||fun2_518->mExternal,                    _if_conditional487) {
                        # 1718 "05function2.c"
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value651=string_clone(fun_name_461)))),(struct sFun*)come_increment_ref_count(fun_517));
                        right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1722 "05function2.c"
                    base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1723 "05function2.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1723, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value653=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value652=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1723, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_517),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sFunNode_finalize;
                    _inf_value5->clone=(void*)sFunNode_clone;
                    _inf_value5->compile=(void*)sFunNode_compile;
                    _inf_value5->sline=(void*)sFunNode_sline;
                    _inf_value5->sname=(void*)sFunNode_sname;
                    _inf_value5->terminated=(void*)sFunNode_terminated;
                    _inf_value5->kind=(void*)sFunNode_kind;
                    __result229__ = __result_obj__ = ((struct sNode*)(right_value657=_inf_value5));
                    come_call_finalizer2(buffer_finalize,header_513, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,block_514, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFun_finalize,fun_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFunNode_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sFunNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result229__;
                    come_call_finalizer2(buffer_finalize,header_513, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,block_514, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFun_finalize,fun_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1800 "05function2.c"
                    # 1725 "05function2.c"
                    if(_if_conditional494=xisalpha(*info->p)||*info->p==95||*info->p==59,                    _if_conditional494) {
                        # 1731 "05function2.c"
                        # 1726 "05function2.c"
                        if(_if_conditional495=version_472>0,                        _if_conditional495) {
                            # 1727 "05function2.c"
                            new_fun_name_520=(char*)come_increment_ref_count(((char*)(right_value658=xsprintf("%s_v%d",fun_name_461,version_472))));
                            right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1728 "05function2.c"
                            __dec_obj145=fun_name_461;
                            fun_name_461=(char*)come_increment_ref_count(((char*)(right_value659=__builtin_string(new_fun_name_520))));
                            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_520 = come_decrement_ref_count2(new_fun_name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 1794 "05function2.c"
                        # 1731 "05function2.c"
                        if(_if_conditional496=*info->p==59,                        _if_conditional496) {
                            # 1732 "05function2.c"
                            info->p++;
                            # 1733 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1735 "05function2.c"
                            result_type_454->mStatic=(_Bool)0;
                            # 1741 "05function2.c"
                            fun_521=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value664=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value660=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1737, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value661=__builtin_string(fun_name_461)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),(_Bool)1,var_args_469,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value662=buffer_to_string(header_buf_471)))),(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1743 "05function2.c"
                            fun2_522=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value665=__builtin_string(fun_name_461))));
                            right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1749 "05function2.c"
                            # 1744 "05function2.c"
                            if(_if_conditional497=fun2_522==((void*)0)||fun2_522->mExternal,                            _if_conditional497) {
                                # 1746 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value666=string_clone(fun_name_461)))),(struct sFun*)come_increment_ref_count(fun_521));
                                right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1749 "05function2.c"
                            base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1751 "05function2.c"
                            source_tail_523=info->p;
                            # 1753 "05function2.c"
                            header_524=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value668=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value667=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1753, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1754 "05function2.c"
                            buffer_append(header_524,source_head_453,source_tail_523-source_head_453);
                            # 1756 "05function2.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value669=buffer_to_string(header_524))));
                            right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1758 "05function2.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1758, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value671=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value670=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1758, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_521),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sFunNode_finalize;
                            _inf_value6->clone=(void*)sFunNode_clone;
                            _inf_value6->compile=(void*)sFunNode_compile;
                            _inf_value6->sline=(void*)sFunNode_sline;
                            _inf_value6->sname=(void*)sFunNode_sname;
                            _inf_value6->terminated=(void*)sFunNode_terminated;
                            _inf_value6->kind=(void*)sFunNode_kind;
                            __result232__ = __result_obj__ = ((struct sNode*)(right_value675=_inf_value6));
                            come_call_finalizer2(sFun_finalize,fun_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value675) { right_value675 = come_decrement_ref_count2(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result232__;
                            come_call_finalizer2(sFun_finalize,fun_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1761 "05function2.c"
                            asm_fun_526=(char*)come_increment_ref_count(((char*)(right_value676=parse_attribute(info))));
                            right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1767 "05function2.c"
                            # 1763 "05function2.c"
                            if(_if_conditional504=string_operator_not_equals(asm_fun_526,""),                            _if_conditional504) {
                                # 1764 "05function2.c"
                                __dec_obj148=fun_name_461;
                                fun_name_461=(char*)come_increment_ref_count(((char*)(right_value677=__builtin_string(asm_fun_526))));
                                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1767 "05function2.c"
                            expected_next_character(59,info);
                            # 1769 "05function2.c"
                            result_type_454->mStatic=(_Bool)0;
                            # 1775 "05function2.c"
                            fun_527=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value682=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value678=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1771, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value679=__builtin_string(fun_name_461)))),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),(_Bool)1,var_args_469,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value680=buffer_to_string(header_buf_471)))),(char*)come_increment_ref_count(((char*)(right_value681=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1777 "05function2.c"
                            fun2_528=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value683=__builtin_string(fun_name_461))));
                            right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1783 "05function2.c"
                            # 1778 "05function2.c"
                            if(_if_conditional505=fun2_528==((void*)0)||fun2_528->mExternal,                            _if_conditional505) {
                                # 1780 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value684=string_clone(fun_name_461)))),(struct sFun*)come_increment_ref_count(fun_527));
                                right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1783 "05function2.c"
                            base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1785 "05function2.c"
                            source_tail_529=info->p;
                            # 1787 "05function2.c"
                            header_530=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value686=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value685=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1787, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1788 "05function2.c"
                            buffer_append(header_530,source_head_453,source_tail_529-source_head_453);
                            # 1790 "05function2.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value687=buffer_to_string(header_530))));
                            right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1792 "05function2.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1792, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value689=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value688=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1792, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_527),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sFunNode_sline;
                            _inf_value7->sname=(void*)sFunNode_sname;
                            _inf_value7->terminated=(void*)sFunNode_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result235__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value7));
                            asm_fun_526 = come_decrement_ref_count2(asm_fun_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_527, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_530, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result235__;
                            asm_fun_526 = come_decrement_ref_count2(asm_fun_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_527, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_530, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 1796 "05function2.c"
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        # 1797 "05function2.c"
                        exit(2);
                    }
                }
            }
        }
    }
    # 1800 "05function2.c"
    base_fun_name_462 = come_decrement_ref_count2(base_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    # 1801 "05function2.c"
    __result236__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer2(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_455 = come_decrement_ref_count2(var_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_461 = come_decrement_ref_count2(fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional448=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional448) {
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional449=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional449) {
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional450=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional450) {
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional454;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sLambdaNode_finalize"
            # 0 "sLambdaNode_finalize"
            if(_if_conditional454=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional454) {
                # 0 "sLambdaNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional455;
struct sLambdaNode* __result208__;
void* right_value610;
struct sLambdaNode* result_479;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
void* right_value611;
char* __dec_obj141;
struct sLambdaNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value610 = (void*)0;
memset(&result_479, 0, sizeof(struct sLambdaNode*));
right_value611 = (void*)0;
            # 3 "sLambdaNode_clone"
            # 2 "sLambdaNode_clone"
            if(_if_conditional455=self==(void*)0,            _if_conditional455) {
                # 2 "sLambdaNode_clone"
                __result208__ = __result_obj__ = (void*)0;
                return __result208__;
            }
            # 3 "sLambdaNode_clone"
            result_479=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value610=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sLambdaNode_clone"
            # 4 "sLambdaNode_clone"
            if(_if_conditional456=self!=((void*)0),            _if_conditional456) {
                # 4 "sLambdaNode_clone"
                result_479->mFun=self->mFun;
            }
            # 6 "sLambdaNode_clone"
            # 5 "sLambdaNode_clone"
            if(_if_conditional457=self!=((void*)0),            _if_conditional457) {
                # 5 "sLambdaNode_clone"
                result_479->sline=self->sline;
            }
            # 7 "sLambdaNode_clone"
            # 6 "sLambdaNode_clone"
            if(_if_conditional458=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional458) {
                # 6 "sLambdaNode_clone"
                __dec_obj141=result_479->sname;
                result_479->sname=(char*)come_increment_ref_count(((char*)(right_value611=string_clone(self->sname))));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sLambdaNode_clone"
            __result209__ = __result_obj__ = result_479;
            come_call_finalizer2(sLambdaNode_finalize,result_479, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result209__;
            come_call_finalizer2(sLambdaNode_finalize,result_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional459;
int __result211__;
int __result212__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional459=self==((void*)0),            _if_conditional459) {
                # 365 "./neo-c.h"
                __result211__ = 0;
                return __result211__;
            }
            # 367 "./neo-c.h"
            __result212__ = self->len;
            return __result212__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional461;
unsigned int hash_503;
unsigned int it_504;
_Bool _while_condtional54;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool same_key_exist_505;
char* it2_506;
_Bool _if_conditional481;
_Bool _if_conditional482;
struct map$2charphsGenericsFunph* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_503, 0, sizeof(unsigned int));
memset(&it_504, 0, sizeof(unsigned int));
memset(&same_key_exist_505, 0, sizeof(_Bool));
memset(&it2_506, 0, sizeof(char*));
                # 1393 "./neo-c.h"
                # 1390 "./neo-c.h"
                if(_if_conditional461=self->len*10>=self->size,                _if_conditional461) {
                    # 1391 "./neo-c.h"
                    map$2charphsGenericsFunph_rehash(self);
                }
                # 1393 "./neo-c.h"
                hash_503=string_get_hash_key(key)%self->size;
                # 1394 "./neo-c.h"
                it_504=hash_503;
                # 1452 "./neo-c.h"
                while(_while_condtional54=(_Bool)1,                _while_condtional54) {
                    # 1450 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional473=self->item_existance[it_504],                    _if_conditional473) {
                        # 1420 "./neo-c.h"
                        # 1399 "./neo-c.h"
                        if(_if_conditional474=string_equals(self->keys[it_504],key),                        _if_conditional474) {
                            # 1410 "./neo-c.h"
                            # 1401 "./neo-c.h"
                            if(_if_conditional475=1,                            _if_conditional475) {
                                # 1402 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_504]);
                                # 1403 "./neo-c.h"
                                self->keys[it_504] = come_decrement_ref_count2(self->keys[it_504], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                # 1404 "./neo-c.h"
                                self->keys[it_504]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                # 1407 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_504]);
                                # 1408 "./neo-c.h"
                                self->keys[it_504]=key;
                            }
                            # 1417 "./neo-c.h"
                            # 1410 "./neo-c.h"
                            if(_if_conditional476=1,                            _if_conditional476) {
                                # 1411 "./neo-c.h"
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_504], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1412 "./neo-c.h"
                                self->items[it_504]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                # 1415 "./neo-c.h"
                                self->items[it_504]=item;
                            }
                            # 1417 "./neo-c.h"
                            break;
                        }
                        # 1420 "./neo-c.h"
                        it_504++;
                        # 1430 "./neo-c.h"
                        # 1422 "./neo-c.h"
                        if(_if_conditional477=it_504>=self->size,                        _if_conditional477) {
                            # 1423 "./neo-c.h"
                            it_504=0;
                        }
                        else {
                            # 1430 "./neo-c.h"
                            # 1425 "./neo-c.h"
                            if(_if_conditional478=it_504==hash_503,                            _if_conditional478) {
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
                        self->item_existance[it_504]=(_Bool)1;
                        # 1439 "./neo-c.h"
                        # 1433 "./neo-c.h"
                        if(_if_conditional479=1,                        _if_conditional479) {
                            # 1434 "./neo-c.h"
                            self->keys[it_504]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1437 "./neo-c.h"
                            self->keys[it_504]=key;
                        }
                        # 1446 "./neo-c.h"
                        # 1439 "./neo-c.h"
                        if(_if_conditional480=1,                        _if_conditional480) {
                            # 1440 "./neo-c.h"
                            self->items[it_504]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1443 "./neo-c.h"
                            self->items[it_504]=item;
                        }
                        # 1446 "./neo-c.h"
                        self->len++;
                        # 1448 "./neo-c.h"
                        break;
                    }
                }
                # 1452 "./neo-c.h"
                same_key_exist_505=(_Bool)0;
                # 1460 "./neo-c.h"
                for(                it2_506=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_506=list$1charp_next(self->key_list)                ){
                    # 1458 "./neo-c.h"
                    # 1455 "./neo-c.h"
                    if(_if_conditional481=string_equals(it2_506,key),                    _if_conditional481) {
                        # 1456 "./neo-c.h"
                        same_key_exist_505=(_Bool)1;
                    }
                }
                # 1464 "./neo-c.h"
                # 1460 "./neo-c.h"
                if(_if_conditional482=!same_key_exist_505,                _if_conditional482) {
                    # 1461 "./neo-c.h"
                    list$1charp_push_back(self->key_list,key);
                }
                # 1464 "./neo-c.h"
                __result224__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result224__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_486;
void* right_value623;
char** keys_487;
void* right_value624;
struct sGenericsFun** items_488;
void* right_value625;
_Bool* item_existance_489;
int len_490;
char* it_493;
struct sGenericsFun* default_value_496;
struct sGenericsFun* it2_499;
unsigned int hash_500;
int n_501;
_Bool _while_condtional53;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
struct sGenericsFun* default_value_502;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_486, 0, sizeof(int));
right_value623 = (void*)0;
memset(&keys_487, 0, sizeof(char**));
right_value624 = (void*)0;
memset(&items_488, 0, sizeof(struct sGenericsFun**));
right_value625 = (void*)0;
memset(&item_existance_489, 0, sizeof(_Bool*));
memset(&len_490, 0, sizeof(int));
memset(&it_493, 0, sizeof(char*));
memset(&default_value_496, 0, sizeof(struct sGenericsFun*));
memset(&it2_499, 0, sizeof(struct sGenericsFun*));
memset(&hash_500, 0, sizeof(unsigned int));
memset(&n_501, 0, sizeof(int));
memset(&default_value_502, 0, sizeof(struct sGenericsFun*));
                        # 1337 "./neo-c.h"
                        size_486=self->size*10;
                        # 1338 "./neo-c.h"
                        keys_487=(char**)come_increment_ref_count(((char**)(right_value623=(char**)come_calloc(1, sizeof(char*)*(1*(size_486)), "./neo-c.h", 1338, "char*%"))));
                        right_value623 = come_decrement_ref_count2(right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1339 "./neo-c.h"
                        items_488=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value624=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_486)), "./neo-c.h", 1339, "sGenericsFun*%"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1340 "./neo-c.h"
                        item_existance_489=(_Bool*)come_increment_ref_count(((_Bool*)(right_value625=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_486)), "./neo-c.h", 1340, "bool"))));
                        right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1342 "./neo-c.h"
                        len_490=0;
                        # 1377 "./neo-c.h"
                        for(                        it_493=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_493=map$2charphsGenericsFunph_next(self)                        ){
                            # 1345 "./neo-c.h"
                            # 1346 "./neo-c.h"
                            memset(&default_value_496,0,sizeof(struct sGenericsFun*));
                            # 1347 "./neo-c.h"
                            it2_499=map$2charphsGenericsFunph_at(self,it_493,default_value_496);
                            # 1348 "./neo-c.h"
                            hash_500=string_get_hash_key(it_493)%size_486;
                            # 1349 "./neo-c.h"
                            n_501=hash_500;
                            # 1375 "./neo-c.h"
                            while(_while_condtional53=(_Bool)1,                            _while_condtional53) {
                                # 1374 "./neo-c.h"
                                # 1352 "./neo-c.h"
                                if(_if_conditional470=item_existance_489[n_501],                                _if_conditional470) {
                                    # 1354 "./neo-c.h"
                                    n_501++;
                                    # 1364 "./neo-c.h"
                                    # 1356 "./neo-c.h"
                                    if(_if_conditional471=n_501>=size_486,                                    _if_conditional471) {
                                        # 1357 "./neo-c.h"
                                        n_501=0;
                                    }
                                    else {
                                        # 1364 "./neo-c.h"
                                        # 1359 "./neo-c.h"
                                        if(_if_conditional472=n_501==hash_500,                                        _if_conditional472) {
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
                                    item_existance_489[n_501]=(_Bool)1;
                                    # 1367 "./neo-c.h"
                                    keys_487[n_501]=it_493;
                                    # 1368 "./neo-c.h"
                                    # 1369 "./neo-c.h"
                                    items_488[n_501]=map$2charphsGenericsFunph_at(self,it_493,default_value_502);
                                    # 1371 "./neo-c.h"
                                    len_490++;
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
                        self->keys=keys_487;
                        # 1382 "./neo-c.h"
                        self->items=items_488;
                        # 1383 "./neo-c.h"
                        self->item_existance=item_existance_489;
                        # 1385 "./neo-c.h"
                        self->size=size_486;
                        # 1386 "./neo-c.h"
                        self->len=len_490;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional462;
char* result_491;
char* __result213__;
_Bool _if_conditional463;
char* __result214__;
char* result_492;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_491, 0, sizeof(char*));
memset(&result_492, 0, sizeof(char*));
                            # 1304 "./neo-c.h"
                            # 1299 "./neo-c.h"
                            if(_if_conditional462=self==((void*)0),                            _if_conditional462) {
                                # 1300 "./neo-c.h"
                                # 1301 "./neo-c.h"
                                memset(&result_491,0,sizeof(char*));
                                # 1302 "./neo-c.h"
                                __result213__ = __result_obj__ = result_491;
                                return __result213__;
                            }
                            # 1304 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1310 "./neo-c.h"
                            # 1306 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1307 "./neo-c.h"
                                __result214__ = __result_obj__ = self->key_list->it->item;
                                return __result214__;
                            }
                            # 1310 "./neo-c.h"
                            # 1311 "./neo-c.h"
                            memset(&result_492,0,sizeof(char*));
                            # 1312 "./neo-c.h"
                            __result215__ = __result_obj__ = result_492;
                            return __result215__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1333 "./neo-c.h"
                            __result216__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result216__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional464;
char* result_494;
char* __result217__;
_Bool _if_conditional465;
char* __result218__;
char* result_495;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_494, 0, sizeof(char*));
memset(&result_495, 0, sizeof(char*));
                            # 1321 "./neo-c.h"
                            # 1316 "./neo-c.h"
                            if(_if_conditional464=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional464) {
                                # 1317 "./neo-c.h"
                                # 1318 "./neo-c.h"
                                memset(&result_494,0,sizeof(char*));
                                # 1319 "./neo-c.h"
                                __result217__ = __result_obj__ = result_494;
                                return __result217__;
                            }
                            # 1321 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1327 "./neo-c.h"
                            # 1323 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1324 "./neo-c.h"
                                __result218__ = __result_obj__ = self->key_list->it->item;
                                return __result218__;
                            }
                            # 1327 "./neo-c.h"
                            # 1328 "./neo-c.h"
                            memset(&result_495,0,sizeof(char*));
                            # 1329 "./neo-c.h"
                            __result219__ = __result_obj__ = result_495;
                            return __result219__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_497;
unsigned int it_498;
_Bool _while_condtional52;
_Bool _if_conditional466;
_Bool _if_conditional467;
struct sGenericsFun* __result220__;
_Bool _if_conditional468;
_Bool _if_conditional469;
struct sGenericsFun* __result221__;
struct sGenericsFun* __result222__;
struct sGenericsFun* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_497, 0, sizeof(unsigned int));
memset(&it_498, 0, sizeof(unsigned int));
                                # 1226 "./neo-c.h"
                                hash_497=string_get_hash_key(((char*)key))%self->size;
                                # 1227 "./neo-c.h"
                                it_498=hash_497;
                                # 1251 "./neo-c.h"
                                while(_while_condtional52=(_Bool)1,                                _while_condtional52) {
                                    # 1249 "./neo-c.h"
                                    # 1230 "./neo-c.h"
                                    if(_if_conditional466=self->item_existance[it_498],                                    _if_conditional466) {
                                        # 1237 "./neo-c.h"
                                        # 1232 "./neo-c.h"
                                        if(_if_conditional467=string_equals(self->keys[it_498],key),                                        _if_conditional467) {
                                            # 1234 "./neo-c.h"
                                            __result220__ = __result_obj__ = self->items[it_498];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result220__;
                                        }
                                        # 1237 "./neo-c.h"
                                        it_498++;
                                        # 1245 "./neo-c.h"
                                        # 1239 "./neo-c.h"
                                        if(_if_conditional468=it_498>=self->size,                                        _if_conditional468) {
                                            # 1240 "./neo-c.h"
                                            it_498=0;
                                        }
                                        else {
                                            # 1245 "./neo-c.h"
                                            # 1242 "./neo-c.h"
                                            if(_if_conditional469=it_498==hash_497,                                            _if_conditional469) {
                                                # 1243 "./neo-c.h"
                                                __result221__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result221__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1247 "./neo-c.h"
                                        __result222__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result222__;
                                    }
                                }
                                # 1251 "./neo-c.h"
                                __result223__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result223__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_532;
char* __dec_obj151;
char* last_code2_533;
char* __dec_obj152;
char* last_code3_534;
char* __dec_obj153;
struct sClass* current_stack_frame_struct_535;
struct sFun* finalizer_536;
void* right_value694;
char* real_fun_name_537;
void* right_value695;
struct sType* type2_538;
struct sClass* klass_539;
_Bool _if_conditional512;
void* right_value696;
void* right_value697;
struct buffer* source_540;
struct list$1tuple2$2charphsTypephph* o2_saved_541;
struct tuple2$2charphsTypeph* it_544;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_547;
struct sType* field_type_548;
_Bool _if_conditional517;
_Bool _if_conditional518;
char* p_550;
int sline_551;
char* sname_552;
char* head_553;
struct buffer* source3_554;
struct buffer* __dec_obj154;
void* right_value698;
char* __dec_obj155;
void* right_value699;
struct sBlock* block_555;
void* right_value700;
void* right_value701;
struct sType* result_type_556;
void* right_value702;
char* name_557;
void* right_value703;
struct sType* self_type_558;
_Bool _if_conditional519;
struct sType* __list_values21___559[1];
void* right_value704;
void* right_value705;
struct list$1sTypeph* param_types_560;
void* right_value706;
char* __list_values22___561[1];
void* right_value707;
void* right_value708;
struct list$1charph* param_names_562;
void* right_value709;
void* right_value710;
struct list$1charph* param_default_parametors_563;
void* right_value711;
void* right_value712;
struct buffer* header_buf_564;
void* right_value713;
int i_565;
struct sType* param_type_566;
char* param_name_570;
void* right_value714;
_Bool _if_conditional523;
void* right_value715;
void* right_value716;
void* right_value717;
void* right_value718;
struct sFun* fun_571;
void* right_value719;
struct sFun* fun2_572;
_Bool _if_conditional524;
void* right_value720;
void* right_value721;
void* right_value722;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value726;
struct sNode* node_574;
_Bool _if_conditional531;
struct buffer* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
void* right_value727;
void* right_value728;
struct tuple2$2sFunpcharph* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_532, 0, sizeof(char*));
memset(&last_code2_533, 0, sizeof(char*));
memset(&last_code3_534, 0, sizeof(char*));
memset(&current_stack_frame_struct_535, 0, sizeof(struct sClass*));
memset(&finalizer_536, 0, sizeof(struct sFun*));
right_value694 = (void*)0;
memset(&real_fun_name_537, 0, sizeof(char*));
right_value695 = (void*)0;
memset(&type2_538, 0, sizeof(struct sType*));
memset(&klass_539, 0, sizeof(struct sClass*));
right_value696 = (void*)0;
right_value697 = (void*)0;
memset(&source_540, 0, sizeof(struct buffer*));
memset(&o2_saved_541, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_544, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_547, 0, sizeof(char*));
memset(&field_type_548, 0, sizeof(struct sType*));
memset(&name_547, 0, sizeof(char*));
memset(&field_type_548, 0, sizeof(struct sType*));
memset(&p_550, 0, sizeof(char*));
memset(&sline_551, 0, sizeof(int));
memset(&sname_552, 0, sizeof(char*));
memset(&head_553, 0, sizeof(char*));
memset(&source3_554, 0, sizeof(struct buffer*));
right_value698 = (void*)0;
right_value699 = (void*)0;
memset(&block_555, 0, sizeof(struct sBlock*));
right_value700 = (void*)0;
right_value701 = (void*)0;
memset(&result_type_556, 0, sizeof(struct sType*));
right_value702 = (void*)0;
memset(&name_557, 0, sizeof(char*));
right_value703 = (void*)0;
memset(&self_type_558, 0, sizeof(struct sType*));
right_value704 = (void*)0;
right_value705 = (void*)0;
memset(&param_types_560, 0, sizeof(struct list$1sTypeph*));
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&param_names_562, 0, sizeof(struct list$1charph*));
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&param_default_parametors_563, 0, sizeof(struct list$1charph*));
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&header_buf_564, 0, sizeof(struct buffer*));
right_value713 = (void*)0;
memset(&i_565, 0, sizeof(int));
memset(&param_type_566, 0, sizeof(struct sType*));
memset(&param_name_570, 0, sizeof(char*));
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value716 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&fun_571, 0, sizeof(struct sFun*));
right_value719 = (void*)0;
memset(&fun2_572, 0, sizeof(struct sFun*));
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value722 = (void*)0;
right_value726 = (void*)0;
memset(&node_574, 0, sizeof(struct sNode*));
right_value727 = (void*)0;
right_value728 = (void*)0;
    # 1806 "05function2.c"
    last_code_532=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1807 "05function2.c"
    __dec_obj151=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1808 "05function2.c"
    last_code2_533=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1809 "05function2.c"
    __dec_obj152=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1810 "05function2.c"
    last_code3_534=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1812 "05function2.c"
    __dec_obj153=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1814 "05function2.c"
    current_stack_frame_struct_535=info->current_stack_frame_struct;
    # 1815 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 1817 "05function2.c"
    finalizer_536=((void*)0);
    # 1819 "05function2.c"
    real_fun_name_537=(char*)come_increment_ref_count(((char*)(right_value694=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1821 "05function2.c"
    type2_538=(struct sType*)come_increment_ref_count(((struct sType*)(right_value695=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1823 "05function2.c"
    type=type2_538;
    # 1825 "05function2.c"
    klass_539=type->mClass;
    # 1932 "05function2.c"
    # 1827 "05function2.c"
    if(_if_conditional512=type->mPointerNum>0&&klass_539->mStruct,    _if_conditional512) {
        # 1828 "05function2.c"
        source_540=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value697=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value696=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1828, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1830 "05function2.c"
        buffer_append_char(source_540,123);
        # 1832 "05function2.c"
        klass_539=map$2charphsClassphp_operator_load_element(info->classes,klass_539->mName);
        # 1850 "05function2.c"
        for(        o2_saved_541=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_539->mFields)),it_544=list$1tuple2$2charphsTypephph_begin((o2_saved_541));        !list$1tuple2$2charphsTypephph_end((o2_saved_541));        it_544=list$1tuple2$2charphsTypephph_next((o2_saved_541))        ){
            # 1834 "05function2.c"
            multiple_assign_var10=it_544;
            name_547=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_548=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            # 1842 "05function2.c"
            # 1836 "05function2.c"
            if(_if_conditional517=string_operator_equals(type->mClass->mName,field_type_548->mClass->mName)&&type->mPointerNum==field_type_548->mPointerNum&&field_type_548->mHeap,            _if_conditional517) {
                # 1838 "05function2.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 1839 "05function2.c"
                exit(2);
            }
            # 1848 "05function2.c"
            # 1842 "05function2.c"
            if(field_type_548->mHeap) {
                # 1843 "05function2.c"
                char source2_549[1024];
                memset(&source2_549, 0, sizeof(char)                *(1024)                );
                # 1844 "05function2.c"
                snprintf(source2_549,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_547,name_547);
                # 1846 "05function2.c"
                buffer_append_str(source_540,source2_549);
            }
            name_547 = come_decrement_ref_count2(name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_548, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1850 "05function2.c"
        buffer_append_char(source_540,125);
        # 1852 "05function2.c"
        p_550=info->p;
        # 1853 "05function2.c"
        sline_551=info->sline;
        # 1854 "05function2.c"
        sname_552=(char*)come_increment_ref_count(info->sname);
        # 1855 "05function2.c"
        head_553=info->head;
        # 1856 "05function2.c"
        source3_554=(struct buffer*)come_increment_ref_count(info->source);
        # 1858 "05function2.c"
        __dec_obj154=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_540);
        come_call_finalizer2(buffer_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1859 "05function2.c"
        info->p=source_540->buf;
        # 1860 "05function2.c"
        info->head=source_540->buf;
        # 1862 "05function2.c"
        __dec_obj155=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value698=__builtin_string(real_fun_name_537))));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1863 "05function2.c"
        info->sline=0;
        # 1865 "05function2.c"
        block_555=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value699=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1867 "05function2.c"
        result_type_556=(struct sType*)come_increment_ref_count(((struct sType*)(right_value701=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value700=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1867, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1868 "05function2.c"
        name_557=(char*)come_increment_ref_count(((char*)(right_value702=string_clone(real_fun_name_537))));
        right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1869 "05function2.c"
        self_type_558=(struct sType*)come_increment_ref_count(((struct sType*)(right_value703=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1870 "05function2.c"
        self_type_558->mHeap=(_Bool)0;
        # 1874 "05function2.c"
        # 1871 "05function2.c"
        if(_if_conditional519=self_type_558->mPointerNum>1,        _if_conditional519) {
            # 1872 "05function2.c"
            self_type_558->mPointerNum=1;
        }
        # 1874 "05function2.c"
        {__list_values21___559[0]=come_increment_ref_count(self_type_558);
}        param_types_560=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value705=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value704=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1874, "struct list$1sTypeph")))),1,__list_values21___559))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1875 "05function2.c"
        {__list_values22___561[0]=come_increment_ref_count(((char*)(right_value706=__builtin_string("self"))));
}        param_names_562=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value708=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value707=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1875, "struct list$1charph")))),1,__list_values22___561))));
        right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1876 "05function2.c"
        param_default_parametors_563=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value710=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value709=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1876, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1877 "05function2.c"
        list$1charph_push_back(param_default_parametors_563,((void*)0));
        # 1879 "05function2.c"
        header_buf_564=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value712=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value711=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1879, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1881 "05function2.c"
        buffer_append_str(header_buf_564,((char*)(right_value713=make_come_type_name_string(result_type_556,info))));
        right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1882 "05function2.c"
        buffer_append_str(header_buf_564," ");
        # 1883 "05function2.c"
        buffer_append_str(header_buf_564,real_fun_name_537);
        # 1884 "05function2.c"
        buffer_append_str(header_buf_564,"(");
        # 1898 "05function2.c"
        for(        i_565=0;        i_565<list$1sTypeph_length(param_types_560);        i_565++        ){
            # 1887 "05function2.c"
            param_type_566=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_560,i_565), "05function2.c", 1887, 1));
            # 1888 "05function2.c"
            param_name_570=((char*)come_null_check(list$1charphp_operator_load_element(param_names_562,i_565), "05function2.c", 1888, 2));
            # 1890 "05function2.c"
            buffer_append_str(header_buf_564,((char*)(right_value714=make_come_type_name_string(param_type_566,info))));
            right_value714 = come_decrement_ref_count2(right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1891 "05function2.c"
            buffer_append_str(header_buf_564," ");
            # 1892 "05function2.c"
            buffer_append_str(header_buf_564,param_name_570);
            # 1897 "05function2.c"
            # 1894 "05function2.c"
            if(_if_conditional523=i_565!=list$1sTypeph_length(param_types_560)-1,            _if_conditional523) {
                # 1895 "05function2.c"
                buffer_append_str(header_buf_564,",");
            }
        }
        # 1898 "05function2.c"
        buffer_append_str(header_buf_564,")");
        # 1900 "05function2.c"
        result_type_556->mStatic=(_Bool)0;
        # 1908 "05function2.c"
        fun_571=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value718=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value715=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1902, "sFun")))),(char*)come_increment_ref_count(name_557),(struct sType*)come_increment_ref_count(result_type_556),(struct list$1sTypeph*)come_increment_ref_count(param_types_560),(struct list$1charph*)come_increment_ref_count(param_names_562),(struct list$1charph*)come_increment_ref_count(param_default_parametors_563),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_555),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value716=buffer_to_string(header_buf_564)))),(char*)come_increment_ref_count(((char*)(right_value717=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value716 = come_decrement_ref_count2(right_value716, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1910 "05function2.c"
        fun2_572=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value719=__builtin_string(fun_name))));
        right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1916 "05function2.c"
        # 1911 "05function2.c"
        if(_if_conditional524=fun2_572==((void*)0)||fun2_572->mExternal,        _if_conditional524) {
            # 1913 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value720=string_clone(name_557)))),(struct sFun*)come_increment_ref_count(fun_571));
            right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1916 "05function2.c"
        finalizer_536=fun_571;
        # 1918 "05function2.c"
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1918, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value722=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value721=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1918, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_571),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_574=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value726=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value726) { right_value726 = come_decrement_ref_count2(right_value726, ((struct sNode*)right_value726)->finalize, ((struct sNode*)right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1925 "05function2.c"
        # 1920 "05function2.c"
        if(_if_conditional531=!node_compile(node_574,info),        _if_conditional531) {
            # 1921 "05function2.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 1922 "05function2.c"
            exit(2);
        }
        # 1925 "05function2.c"
        __dec_obj158=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_554);
        come_call_finalizer2(buffer_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1926 "05function2.c"
        info->p=p_550;
        # 1927 "05function2.c"
        info->head=head_553;
        # 1928 "05function2.c"
        info->sline=sline_551;
        # 1929 "05function2.c"
        __dec_obj159=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_552);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_540, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_552 = come_decrement_ref_count2(sname_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_554, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_556, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_557 = come_decrement_ref_count2(name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_558, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_560, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_563, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_564, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_571, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_574) { node_574 = come_decrement_ref_count2(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1932 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_535;
    # 1934 "05function2.c"
    __dec_obj160=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_532);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1935 "05function2.c"
    __dec_obj161=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_533);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1936 "05function2.c"
    __dec_obj162=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_534);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1938 "05function2.c"
    __result251__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value728=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value727=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1938, "struct tuple2$2sFunpcharph")))),finalizer_536,(char*)come_increment_ref_count(real_fun_name_537))));
    last_code_532 = come_decrement_ref_count2(last_code_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_533 = come_decrement_ref_count2(last_code2_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_534 = come_decrement_ref_count2(last_code3_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_537 = come_decrement_ref_count2(real_fun_name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_538, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value727 = come_decrement_ref_count2(right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result251__;
    last_code_532 = come_decrement_ref_count2(last_code_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_533 = come_decrement_ref_count2(last_code2_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_534 = come_decrement_ref_count2(last_code3_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_537 = come_decrement_ref_count2(real_fun_name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_538, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional513;
struct tuple2$2charphsTypeph* result_542;
struct tuple2$2charphsTypeph* __result237__;
_Bool _if_conditional514;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_543;
struct tuple2$2charphsTypeph* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_542, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_543, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional513=self==((void*)0),            _if_conditional513) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_542,0,sizeof(struct tuple2$2charphsTypeph*));
                # 288 "./neo-c.h"
                __result237__ = __result_obj__ = result_542;
                return __result237__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result238__ = __result_obj__ = self->it->item;
                return __result238__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_543,0,sizeof(struct tuple2$2charphsTypeph*));
            # 298 "./neo-c.h"
            __result239__ = __result_obj__ = result_543;
            return __result239__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result240__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result240__ = self==((void*)0)||self->it==((void*)0);
            return __result240__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional515;
struct tuple2$2charphsTypeph* result_545;
struct tuple2$2charphsTypeph* __result241__;
_Bool _if_conditional516;
struct tuple2$2charphsTypeph* __result242__;
struct tuple2$2charphsTypeph* result_546;
struct tuple2$2charphsTypeph* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_545, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_546, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional515=self==((void*)0)||self->it==((void*)0),            _if_conditional515) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_545,0,sizeof(struct tuple2$2charphsTypeph*));
                # 305 "./neo-c.h"
                __result241__ = __result_obj__ = result_545;
                return __result241__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result242__ = __result_obj__ = self->it->item;
                return __result242__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_546,0,sizeof(struct tuple2$2charphsTypeph*));
            # 316 "./neo-c.h"
            __result243__ = __result_obj__ = result_546;
            return __result243__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional520;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional520=self==((void*)0),            _if_conditional520) {
                # 365 "./neo-c.h"
                __result244__ = 0;
                return __result244__;
            }
            # 367 "./neo-c.h"
            __result245__ = self->len;
            return __result245__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional521;
struct list_item$1charph* it_567;
int i_568;
_Bool _while_condtional55;
_Bool _if_conditional522;
char* __result246__;
char* default_value_569;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_567, 0, sizeof(struct list_item$1charph*));
memset(&i_568, 0, sizeof(int));
memset(&default_value_569, 0, sizeof(char*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional521=position<0,                _if_conditional521) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_567=self->head;
                # 687 "./neo-c.h"
                i_568=0;
                # 694 "./neo-c.h"
                while(_while_condtional55=it_567!=((void*)0),                _while_condtional55) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional522=position==i_568,                    _if_conditional522) {
                        # 690 "./neo-c.h"
                        __result246__ = __result_obj__ = it_567->item;
                        return __result246__;
                    }
                    # 692 "./neo-c.h"
                    it_567=it_567->next;
                    # 693 "./neo-c.h"
                    i_568++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_569,0,sizeof(char*));
                # 698 "./neo-c.h"
                __result247__ = __result_obj__ = default_value_569;
                default_value_569 = come_decrement_ref_count2(default_value_569, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result247__;
                default_value_569 = come_decrement_ref_count2(default_value_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj163;
struct tuple2$2sFunpcharph* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1767 "./neo-c.h"
        self->v1=v1;
        # 1768 "./neo-c.h"
        __dec_obj163=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1770 "./neo-c.h"
        __result250__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result250__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional532;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sFunpcharphp_finalize"
            # 0 "tuple2$2sFunpcharphp_finalize"
            if(_if_conditional532=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional532) {
                # 0 "tuple2$2sFunpcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_575;
char* __dec_obj164;
char* last_code2_576;
char* __dec_obj165;
char* last_code3_577;
char* __dec_obj166;
struct sClass* current_stack_frame_struct_578;
struct sFun* finalizer_579;
void* right_value729;
char* real_fun_name_580;
void* right_value730;
struct sType* type2_581;
struct sClass* klass_582;
_Bool _if_conditional533;
void* right_value731;
void* right_value732;
struct buffer* source_583;
struct list$1tuple2$2charphsTypephph* o2_saved_584;
struct tuple2$2charphsTypeph* it_585;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_586;
struct sType* field_type_587;
_Bool _if_conditional534;
_Bool _if_conditional535;
char* p_589;
int sline_590;
char* sname_591;
char* head_592;
struct buffer* source3_593;
struct buffer* __dec_obj167;
void* right_value733;
char* __dec_obj168;
void* right_value734;
struct sBlock* block_594;
void* right_value735;
void* right_value736;
struct sType* result_type_595;
void* right_value737;
char* name_596;
void* right_value738;
struct sType* self_type_597;
_Bool _if_conditional536;
struct sType* __list_values23___598[1];
void* right_value739;
void* right_value740;
struct list$1sTypeph* param_types_599;
void* right_value741;
char* __list_values24___600[1];
void* right_value742;
void* right_value743;
struct list$1charph* param_names_601;
void* right_value744;
void* right_value745;
struct list$1charph* param_default_parametors_602;
void* right_value746;
void* right_value747;
struct buffer* header_buf_603;
void* right_value748;
int i_604;
struct sType* param_type_605;
char* param_name_606;
void* right_value749;
_Bool _if_conditional537;
void* right_value750;
void* right_value751;
void* right_value752;
void* right_value753;
struct sFun* fun_607;
void* right_value754;
struct sFun* fun2_608;
_Bool _if_conditional538;
void* right_value755;
void* right_value756;
void* right_value757;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value761;
struct sNode* node_610;
_Bool _if_conditional545;
struct buffer* __dec_obj171;
char* __dec_obj172;
char* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
void* right_value762;
void* right_value763;
struct tuple2$2sFunpcharph* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_575, 0, sizeof(char*));
memset(&last_code2_576, 0, sizeof(char*));
memset(&last_code3_577, 0, sizeof(char*));
memset(&current_stack_frame_struct_578, 0, sizeof(struct sClass*));
memset(&finalizer_579, 0, sizeof(struct sFun*));
right_value729 = (void*)0;
memset(&real_fun_name_580, 0, sizeof(char*));
right_value730 = (void*)0;
memset(&type2_581, 0, sizeof(struct sType*));
memset(&klass_582, 0, sizeof(struct sClass*));
right_value731 = (void*)0;
right_value732 = (void*)0;
memset(&source_583, 0, sizeof(struct buffer*));
memset(&o2_saved_584, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_585, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_586, 0, sizeof(char*));
memset(&field_type_587, 0, sizeof(struct sType*));
memset(&name_586, 0, sizeof(char*));
memset(&field_type_587, 0, sizeof(struct sType*));
memset(&p_589, 0, sizeof(char*));
memset(&sline_590, 0, sizeof(int));
memset(&sname_591, 0, sizeof(char*));
memset(&head_592, 0, sizeof(char*));
memset(&source3_593, 0, sizeof(struct buffer*));
right_value733 = (void*)0;
right_value734 = (void*)0;
memset(&block_594, 0, sizeof(struct sBlock*));
right_value735 = (void*)0;
right_value736 = (void*)0;
memset(&result_type_595, 0, sizeof(struct sType*));
right_value737 = (void*)0;
memset(&name_596, 0, sizeof(char*));
right_value738 = (void*)0;
memset(&self_type_597, 0, sizeof(struct sType*));
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&param_types_599, 0, sizeof(struct list$1sTypeph*));
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
memset(&param_names_601, 0, sizeof(struct list$1charph*));
right_value744 = (void*)0;
right_value745 = (void*)0;
memset(&param_default_parametors_602, 0, sizeof(struct list$1charph*));
right_value746 = (void*)0;
right_value747 = (void*)0;
memset(&header_buf_603, 0, sizeof(struct buffer*));
right_value748 = (void*)0;
memset(&i_604, 0, sizeof(int));
memset(&param_type_605, 0, sizeof(struct sType*));
memset(&param_name_606, 0, sizeof(char*));
right_value749 = (void*)0;
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value752 = (void*)0;
right_value753 = (void*)0;
memset(&fun_607, 0, sizeof(struct sFun*));
right_value754 = (void*)0;
memset(&fun2_608, 0, sizeof(struct sFun*));
right_value755 = (void*)0;
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value761 = (void*)0;
memset(&node_610, 0, sizeof(struct sNode*));
right_value762 = (void*)0;
right_value763 = (void*)0;
    # 1943 "05function2.c"
    last_code_575=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1944 "05function2.c"
    __dec_obj164=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1945 "05function2.c"
    last_code2_576=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1946 "05function2.c"
    __dec_obj165=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1947 "05function2.c"
    last_code3_577=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1949 "05function2.c"
    __dec_obj166=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1951 "05function2.c"
    current_stack_frame_struct_578=info->current_stack_frame_struct;
    # 1952 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 1954 "05function2.c"
    finalizer_579=((void*)0);
    # 1956 "05function2.c"
    real_fun_name_580=(char*)come_increment_ref_count(((char*)(right_value729=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1958 "05function2.c"
    type2_581=(struct sType*)come_increment_ref_count(((struct sType*)(right_value730=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1960 "05function2.c"
    type=type2_581;
    # 1962 "05function2.c"
    klass_582=type->mClass;
    # 2069 "05function2.c"
    # 1964 "05function2.c"
    if(_if_conditional533=type->mPointerNum>0&&klass_582->mStruct,    _if_conditional533) {
        # 1965 "05function2.c"
        source_583=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value732=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value731=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1965, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value731, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1967 "05function2.c"
        buffer_append_char(source_583,123);
        # 1969 "05function2.c"
        klass_582=map$2charphsClassphp_operator_load_element(info->classes,klass_582->mName);
        # 1987 "05function2.c"
        for(        o2_saved_584=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_582->mFields)),it_585=list$1tuple2$2charphsTypephph_begin((o2_saved_584));        !list$1tuple2$2charphsTypephph_end((o2_saved_584));        it_585=list$1tuple2$2charphsTypephph_next((o2_saved_584))        ){
            # 1971 "05function2.c"
            multiple_assign_var11=it_585;
            name_586=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_587=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            # 1979 "05function2.c"
            # 1973 "05function2.c"
            if(_if_conditional534=string_operator_equals(type->mClass->mName,field_type_587->mClass->mName)&&type->mPointerNum==field_type_587->mPointerNum&&field_type_587->mHeap,            _if_conditional534) {
                # 1975 "05function2.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 1976 "05function2.c"
                exit(2);
            }
            # 1985 "05function2.c"
            # 1979 "05function2.c"
            if(field_type_587->mHeap) {
                # 1980 "05function2.c"
                char source2_588[1024];
                memset(&source2_588, 0, sizeof(char)                *(1024)                );
                # 1981 "05function2.c"
                snprintf(source2_588,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_586,name_586);
                # 1983 "05function2.c"
                buffer_append_str(source_583,source2_588);
            }
            name_586 = come_decrement_ref_count2(name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_587, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_584, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1987 "05function2.c"
        buffer_append_char(source_583,125);
        # 1989 "05function2.c"
        p_589=info->p;
        # 1990 "05function2.c"
        sline_590=info->sline;
        # 1991 "05function2.c"
        sname_591=(char*)come_increment_ref_count(info->sname);
        # 1992 "05function2.c"
        head_592=info->head;
        # 1993 "05function2.c"
        source3_593=(struct buffer*)come_increment_ref_count(info->source);
        # 1995 "05function2.c"
        __dec_obj167=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_583);
        come_call_finalizer2(buffer_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1996 "05function2.c"
        info->p=source_583->buf;
        # 1997 "05function2.c"
        info->head=source_583->buf;
        # 1999 "05function2.c"
        __dec_obj168=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value733=__builtin_string(real_fun_name_580))));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2000 "05function2.c"
        info->sline=0;
        # 2002 "05function2.c"
        block_594=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value734=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value734, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2004 "05function2.c"
        result_type_595=(struct sType*)come_increment_ref_count(((struct sType*)(right_value736=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value735=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2004, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2005 "05function2.c"
        name_596=(char*)come_increment_ref_count(((char*)(right_value737=string_clone(real_fun_name_580))));
        right_value737 = come_decrement_ref_count2(right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2006 "05function2.c"
        self_type_597=(struct sType*)come_increment_ref_count(((struct sType*)(right_value738=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2007 "05function2.c"
        self_type_597->mHeap=(_Bool)0;
        # 2011 "05function2.c"
        # 2008 "05function2.c"
        if(_if_conditional536=self_type_597->mPointerNum>1,        _if_conditional536) {
            # 2009 "05function2.c"
            self_type_597->mPointerNum=1;
        }
        # 2011 "05function2.c"
        {__list_values23___598[0]=come_increment_ref_count(self_type_597);
}        param_types_599=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value740=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value739=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2011, "struct list$1sTypeph")))),1,__list_values23___598))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2012 "05function2.c"
        {__list_values24___600[0]=come_increment_ref_count(((char*)(right_value741=__builtin_string("self"))));
}        param_names_601=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value743=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value742=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2012, "struct list$1charph")))),1,__list_values24___600))));
        right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2013 "05function2.c"
        param_default_parametors_602=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value745=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value744=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2013, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2014 "05function2.c"
        list$1charph_push_back(param_default_parametors_602,((void*)0));
        # 2016 "05function2.c"
        header_buf_603=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value747=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value746=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2016, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value747, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2018 "05function2.c"
        buffer_append_str(header_buf_603,((char*)(right_value748=make_come_type_name_string(result_type_595,info))));
        right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2019 "05function2.c"
        buffer_append_str(header_buf_603," ");
        # 2020 "05function2.c"
        buffer_append_str(header_buf_603,real_fun_name_580);
        # 2021 "05function2.c"
        buffer_append_str(header_buf_603,"(");
        # 2035 "05function2.c"
        for(        i_604=0;        i_604<list$1sTypeph_length(param_types_599);        i_604++        ){
            # 2024 "05function2.c"
            param_type_605=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_599,i_604), "05function2.c", 2024, 3));
            # 2025 "05function2.c"
            param_name_606=((char*)come_null_check(list$1charphp_operator_load_element(param_names_601,i_604), "05function2.c", 2025, 4));
            # 2027 "05function2.c"
            buffer_append_str(header_buf_603,((char*)(right_value749=make_come_type_name_string(param_type_605,info))));
            right_value749 = come_decrement_ref_count2(right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2028 "05function2.c"
            buffer_append_str(header_buf_603," ");
            # 2029 "05function2.c"
            buffer_append_str(header_buf_603,param_name_606);
            # 2034 "05function2.c"
            # 2031 "05function2.c"
            if(_if_conditional537=i_604!=list$1sTypeph_length(param_types_599)-1,            _if_conditional537) {
                # 2032 "05function2.c"
                buffer_append_str(header_buf_603,",");
            }
        }
        # 2035 "05function2.c"
        buffer_append_str(header_buf_603,")");
        # 2037 "05function2.c"
        result_type_595->mStatic=(_Bool)0;
        # 2045 "05function2.c"
        fun_607=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value753=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value750=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2039, "sFun")))),(char*)come_increment_ref_count(name_596),(struct sType*)come_increment_ref_count(result_type_595),(struct list$1sTypeph*)come_increment_ref_count(param_types_599),(struct list$1charph*)come_increment_ref_count(param_names_601),(struct list$1charph*)come_increment_ref_count(param_default_parametors_602),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_594),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value751=buffer_to_string(header_buf_603)))),(char*)come_increment_ref_count(((char*)(right_value752=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value751 = come_decrement_ref_count2(right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value752 = come_decrement_ref_count2(right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "05function2.c"
        fun2_608=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value754=__builtin_string(fun_name))));
        right_value754 = come_decrement_ref_count2(right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2053 "05function2.c"
        # 2048 "05function2.c"
        if(_if_conditional538=fun2_608==((void*)0)||fun2_608->mExternal,        _if_conditional538) {
            # 2050 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value755=string_clone(name_596)))),(struct sFun*)come_increment_ref_count(fun_607));
            right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2053 "05function2.c"
        finalizer_579=fun_607;
        # 2055 "05function2.c"
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2055, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value757=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value756=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2055, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_607),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_610=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value761=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value761) { right_value761 = come_decrement_ref_count2(right_value761, ((struct sNode*)right_value761)->finalize, ((struct sNode*)right_value761)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2062 "05function2.c"
        # 2057 "05function2.c"
        if(_if_conditional545=!node_compile(node_610,info),        _if_conditional545) {
            # 2058 "05function2.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 2059 "05function2.c"
            exit(2);
        }
        # 2062 "05function2.c"
        __dec_obj171=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_593);
        come_call_finalizer2(buffer_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2063 "05function2.c"
        info->p=p_589;
        # 2064 "05function2.c"
        info->head=head_592;
        # 2065 "05function2.c"
        info->sline=sline_590;
        # 2066 "05function2.c"
        __dec_obj172=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_591);
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_583, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_591 = come_decrement_ref_count2(sname_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_593, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_594, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_595, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_597, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_599, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_601, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_603, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_607, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2069 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_578;
    # 2071 "05function2.c"
    __dec_obj173=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_575);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2072 "05function2.c"
    __dec_obj174=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_576);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2073 "05function2.c"
    __dec_obj175=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_577);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2075 "05function2.c"
    __result254__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value763=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value762=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2075, "struct tuple2$2sFunpcharph")))),finalizer_579,(char*)come_increment_ref_count(real_fun_name_580))));
    last_code_575 = come_decrement_ref_count2(last_code_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_576 = come_decrement_ref_count2(last_code2_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_577 = come_decrement_ref_count2(last_code3_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_580 = come_decrement_ref_count2(real_fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_581, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value762 = come_decrement_ref_count2(right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result254__;
    last_code_575 = come_decrement_ref_count2(last_code_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_576 = come_decrement_ref_count2(last_code2_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_577 = come_decrement_ref_count2(last_code3_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_580 = come_decrement_ref_count2(real_fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_581, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_611;
char* __dec_obj176;
char* last_code2_612;
char* __dec_obj177;
char* last_code3_613;
char* __dec_obj178;
struct sClass* current_stack_frame_struct_614;
struct sFun* equaler_615;
void* right_value764;
char* real_fun_name_616;
void* right_value765;
struct sType* type2_617;
struct sClass* klass_618;
_Bool _if_conditional546;
void* right_value766;
void* right_value767;
struct buffer* source_619;
_Bool _if_conditional547;
char* name_620;
struct list$1tuple2$2charphsTypephph* o2_saved_622;
struct tuple2$2charphsTypeph* it_623;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_624;
struct sType* field_type_625;
_Bool _if_conditional548;
char* p_627;
int sline_628;
char* sname_629;
char* head_630;
struct buffer* source3_631;
struct buffer* __dec_obj179;
void* right_value768;
char* __dec_obj180;
void* right_value769;
struct sBlock* block_632;
void* right_value770;
void* right_value771;
struct sType* result_type_633;
void* right_value772;
char* name_634;
void* right_value773;
struct sType* left_type_635;
void* right_value774;
struct sType* right_type_636;
struct sType* __list_values25___637[2];
void* right_value775;
void* right_value776;
struct list$1sTypeph* param_types_638;
void* right_value777;
void* right_value778;
char* __list_values26___639[2];
void* right_value779;
void* right_value780;
struct list$1charph* param_names_640;
void* right_value781;
void* right_value782;
struct list$1charph* param_default_parametors_641;
void* right_value783;
void* right_value784;
struct buffer* header_buf_642;
void* right_value785;
int i_643;
struct sType* param_type_644;
char* param_name_645;
void* right_value786;
_Bool _if_conditional549;
void* right_value787;
void* right_value788;
void* right_value789;
void* right_value790;
struct sFun* fun_646;
void* right_value791;
struct sFun* fun2_647;
_Bool _if_conditional550;
void* right_value792;
void* right_value793;
void* right_value794;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value798;
struct sNode* node_649;
_Bool _if_conditional557;
struct buffer* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
char* __dec_obj186;
char* __dec_obj187;
void* right_value799;
void* right_value800;
struct tuple2$2sFunpcharph* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_611, 0, sizeof(char*));
memset(&last_code2_612, 0, sizeof(char*));
memset(&last_code3_613, 0, sizeof(char*));
memset(&current_stack_frame_struct_614, 0, sizeof(struct sClass*));
memset(&equaler_615, 0, sizeof(struct sFun*));
right_value764 = (void*)0;
memset(&real_fun_name_616, 0, sizeof(char*));
right_value765 = (void*)0;
memset(&type2_617, 0, sizeof(struct sType*));
memset(&klass_618, 0, sizeof(struct sClass*));
right_value766 = (void*)0;
right_value767 = (void*)0;
memset(&source_619, 0, sizeof(struct buffer*));
memset(&name_620, 0, sizeof(char*));
memset(&o2_saved_622, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_623, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_624, 0, sizeof(char*));
memset(&field_type_625, 0, sizeof(struct sType*));
memset(&name_624, 0, sizeof(char*));
memset(&field_type_625, 0, sizeof(struct sType*));
memset(&p_627, 0, sizeof(char*));
memset(&sline_628, 0, sizeof(int));
memset(&sname_629, 0, sizeof(char*));
memset(&head_630, 0, sizeof(char*));
memset(&source3_631, 0, sizeof(struct buffer*));
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&block_632, 0, sizeof(struct sBlock*));
right_value770 = (void*)0;
right_value771 = (void*)0;
memset(&result_type_633, 0, sizeof(struct sType*));
right_value772 = (void*)0;
memset(&name_634, 0, sizeof(char*));
right_value773 = (void*)0;
memset(&left_type_635, 0, sizeof(struct sType*));
right_value774 = (void*)0;
memset(&right_type_636, 0, sizeof(struct sType*));
right_value775 = (void*)0;
right_value776 = (void*)0;
memset(&param_types_638, 0, sizeof(struct list$1sTypeph*));
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value780 = (void*)0;
memset(&param_names_640, 0, sizeof(struct list$1charph*));
right_value781 = (void*)0;
right_value782 = (void*)0;
memset(&param_default_parametors_641, 0, sizeof(struct list$1charph*));
right_value783 = (void*)0;
right_value784 = (void*)0;
memset(&header_buf_642, 0, sizeof(struct buffer*));
right_value785 = (void*)0;
memset(&i_643, 0, sizeof(int));
memset(&param_type_644, 0, sizeof(struct sType*));
memset(&param_name_645, 0, sizeof(char*));
right_value786 = (void*)0;
right_value787 = (void*)0;
right_value788 = (void*)0;
right_value789 = (void*)0;
right_value790 = (void*)0;
memset(&fun_646, 0, sizeof(struct sFun*));
right_value791 = (void*)0;
memset(&fun2_647, 0, sizeof(struct sFun*));
right_value792 = (void*)0;
right_value793 = (void*)0;
right_value794 = (void*)0;
right_value798 = (void*)0;
memset(&node_649, 0, sizeof(struct sNode*));
right_value799 = (void*)0;
right_value800 = (void*)0;
    # 2080 "05function2.c"
    last_code_611=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2081 "05function2.c"
    __dec_obj176=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2082 "05function2.c"
    last_code2_612=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2083 "05function2.c"
    __dec_obj177=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2084 "05function2.c"
    last_code3_613=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2085 "05function2.c"
    __dec_obj178=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2087 "05function2.c"
    current_stack_frame_struct_614=info->current_stack_frame_struct;
    # 2088 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2089 "05function2.c"
    equaler_615=((void*)0);
    # 2091 "05function2.c"
    real_fun_name_616=(char*)come_increment_ref_count(((char*)(right_value764=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value764 = come_decrement_ref_count2(right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2093 "05function2.c"
    type2_617=(struct sType*)come_increment_ref_count(((struct sType*)(right_value765=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value765, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2095 "05function2.c"
    type=type2_617;
    # 2097 "05function2.c"
    klass_618=type->mClass;
    # 2211 "05function2.c"
    # 2099 "05function2.c"
    if(_if_conditional546=type->mPointerNum>0&&!klass_618->mNumber,    _if_conditional546) {
        # 2100 "05function2.c"
        source_619=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value767=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value766=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2100, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value766, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value767, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2102 "05function2.c"
        buffer_append_char(source_619,123);
        # 2128 "05function2.c"
        # 2104 "05function2.c"
        if(klass_618->mProtocol) {
            # 2105 "05function2.c"
            name_620="_protocol_obj";
            # 2106 "05function2.c"
            char source2_621[1024];
            memset(&source2_621, 0, sizeof(char)            *(1024)            );
            # 2107 "05function2.c"
            snprintf(source2_621,1024,"return left.%s.equals(right.%s);\n",name_620,name_620);
            # 2108 "05function2.c"
            buffer_append_str(source_619,source2_621);
        }
        else {
            # 2111 "05function2.c"
            klass_618=map$2charphsClassphp_operator_load_element(info->classes,klass_618->mName);
            # 2126 "05function2.c"
            for(            o2_saved_622=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_618->mFields)),it_623=list$1tuple2$2charphsTypephph_begin((o2_saved_622));            !list$1tuple2$2charphsTypephph_end((o2_saved_622));            it_623=list$1tuple2$2charphsTypephph_next((o2_saved_622))            ){
                # 2113 "05function2.c"
                multiple_assign_var12=it_623;
                name_624=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_625=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                # 2121 "05function2.c"
                # 2115 "05function2.c"
                if(_if_conditional548=string_operator_equals(type->mClass->mName,field_type_625->mClass->mName)&&type->mPointerNum==field_type_625->mPointerNum&&field_type_625->mHeap,                _if_conditional548) {
                    # 2117 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2118 "05function2.c"
                    exit(2);
                }
                # 2121 "05function2.c"
                char source2_626[1024];
                memset(&source2_626, 0, sizeof(char)                *(1024)                );
                # 2122 "05function2.c"
                snprintf(source2_626,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_624,name_624);
                # 2124 "05function2.c"
                buffer_append_str(source_619,source2_626);
                name_624 = come_decrement_ref_count2(name_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_625, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_622, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2128 "05function2.c"
        buffer_append_str(source_619,"return true;");
        # 2129 "05function2.c"
        buffer_append_char(source_619,125);
        # 2131 "05function2.c"
        p_627=info->p;
        # 2132 "05function2.c"
        sline_628=info->sline;
        # 2133 "05function2.c"
        sname_629=(char*)come_increment_ref_count(info->sname);
        # 2134 "05function2.c"
        head_630=info->head;
        # 2135 "05function2.c"
        source3_631=(struct buffer*)come_increment_ref_count(info->source);
        # 2137 "05function2.c"
        __dec_obj179=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_619);
        come_call_finalizer2(buffer_finalize,__dec_obj179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2138 "05function2.c"
        info->p=source_619->buf;
        # 2139 "05function2.c"
        info->head=source_619->buf;
        # 2141 "05function2.c"
        __dec_obj180=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value768=__builtin_string(real_fun_name_616))));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value768 = come_decrement_ref_count2(right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2142 "05function2.c"
        info->sline=0;
        # 2144 "05function2.c"
        block_632=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value769=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2146 "05function2.c"
        result_type_633=(struct sType*)come_increment_ref_count(((struct sType*)(right_value771=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value770=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2146, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2147 "05function2.c"
        name_634=(char*)come_increment_ref_count(((char*)(right_value772=string_clone(real_fun_name_616))));
        right_value772 = come_decrement_ref_count2(right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2148 "05function2.c"
        left_type_635=(struct sType*)come_increment_ref_count(((struct sType*)(right_value773=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2149 "05function2.c"
        left_type_635->mHeap=(_Bool)0;
        # 2150 "05function2.c"
        right_type_636=(struct sType*)come_increment_ref_count(((struct sType*)(right_value774=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value774, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2151 "05function2.c"
        right_type_636->mHeap=(_Bool)0;
        # 2152 "05function2.c"
        {__list_values25___637[0]=come_increment_ref_count(left_type_635);
__list_values25___637[1]=come_increment_ref_count(right_type_636);
}        param_types_638=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value776=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value775=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2152, "struct list$1sTypeph")))),2,__list_values25___637))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2153 "05function2.c"
        {__list_values26___639[0]=come_increment_ref_count(((char*)(right_value777=__builtin_string("left"))));
__list_values26___639[1]=come_increment_ref_count(((char*)(right_value778=__builtin_string("right"))));
}        param_names_640=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value780=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value779=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2153, "struct list$1charph")))),2,__list_values26___639))));
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2154 "05function2.c"
        param_default_parametors_641=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value782=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value781=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2154, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2155 "05function2.c"
        list$1charph_push_back(param_default_parametors_641,((void*)0));
        # 2156 "05function2.c"
        list$1charph_push_back(param_default_parametors_641,((void*)0));
        # 2158 "05function2.c"
        header_buf_642=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value784=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value783=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2158, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2160 "05function2.c"
        buffer_append_str(header_buf_642,((char*)(right_value785=make_come_type_name_string(result_type_633,info))));
        right_value785 = come_decrement_ref_count2(right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2161 "05function2.c"
        buffer_append_str(header_buf_642," ");
        # 2162 "05function2.c"
        buffer_append_str(header_buf_642,real_fun_name_616);
        # 2163 "05function2.c"
        buffer_append_str(header_buf_642,"(");
        # 2177 "05function2.c"
        for(        i_643=0;        i_643<list$1sTypeph_length(param_types_638);        i_643++        ){
            # 2166 "05function2.c"
            param_type_644=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_638,i_643), "05function2.c", 2166, 5));
            # 2167 "05function2.c"
            param_name_645=((char*)come_null_check(list$1charphp_operator_load_element(param_names_640,i_643), "05function2.c", 2167, 6));
            # 2169 "05function2.c"
            buffer_append_str(header_buf_642,((char*)(right_value786=make_come_type_name_string(param_type_644,info))));
            right_value786 = come_decrement_ref_count2(right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2170 "05function2.c"
            buffer_append_str(header_buf_642," ");
            # 2171 "05function2.c"
            buffer_append_str(header_buf_642,param_name_645);
            # 2176 "05function2.c"
            # 2173 "05function2.c"
            if(_if_conditional549=i_643!=list$1sTypeph_length(param_types_638)-1,            _if_conditional549) {
                # 2174 "05function2.c"
                buffer_append_str(header_buf_642,",");
            }
        }
        # 2177 "05function2.c"
        buffer_append_str(header_buf_642,")");
        # 2179 "05function2.c"
        result_type_633->mStatic=(_Bool)0;
        # 2187 "05function2.c"
        fun_646=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value790=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value787=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2181, "sFun")))),(char*)come_increment_ref_count(name_634),(struct sType*)come_increment_ref_count(result_type_633),(struct list$1sTypeph*)come_increment_ref_count(param_types_638),(struct list$1charph*)come_increment_ref_count(param_names_640),(struct list$1charph*)come_increment_ref_count(param_default_parametors_641),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_632),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value788=buffer_to_string(header_buf_642)))),(char*)come_increment_ref_count(((char*)(right_value789=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value788 = come_decrement_ref_count2(right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value789 = come_decrement_ref_count2(right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2189 "05function2.c"
        fun2_647=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value791=__builtin_string(fun_name))));
        right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2195 "05function2.c"
        # 2190 "05function2.c"
        if(_if_conditional550=fun2_647==((void*)0)||fun2_647->mExternal,        _if_conditional550) {
            # 2192 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value792=string_clone(name_634)))),(struct sFun*)come_increment_ref_count(fun_646));
            right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2195 "05function2.c"
        equaler_615=fun_646;
        # 2197 "05function2.c"
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2197, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value794=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value793=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2197, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_646),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_649=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value798=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value793, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value794, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value798) { right_value798 = come_decrement_ref_count2(right_value798, ((struct sNode*)right_value798)->finalize, ((struct sNode*)right_value798)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2204 "05function2.c"
        # 2199 "05function2.c"
        if(_if_conditional557=!node_compile(node_649,info),        _if_conditional557) {
            # 2200 "05function2.c"
            err_msg(info,"compiling error");
            # 2201 "05function2.c"
            exit(2);
        }
        # 2204 "05function2.c"
        __dec_obj183=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_631);
        come_call_finalizer2(buffer_finalize,__dec_obj183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2205 "05function2.c"
        info->p=p_627;
        # 2206 "05function2.c"
        info->head=head_630;
        # 2207 "05function2.c"
        info->sline=sline_628;
        # 2208 "05function2.c"
        __dec_obj184=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_629);
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_619, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_629 = come_decrement_ref_count2(sname_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_631, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_632, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_633, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_635, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_636, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_640, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_641, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_642, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_646, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2211 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_614;
    # 2213 "05function2.c"
    __dec_obj185=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_611);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2214 "05function2.c"
    __dec_obj186=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_612);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2215 "05function2.c"
    __dec_obj187=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_613);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2217 "05function2.c"
    __result257__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value800=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value799=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2217, "struct tuple2$2sFunpcharph")))),equaler_615,(char*)come_increment_ref_count(real_fun_name_616))));
    last_code_611 = come_decrement_ref_count2(last_code_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_612 = come_decrement_ref_count2(last_code2_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_613 = come_decrement_ref_count2(last_code3_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_616 = come_decrement_ref_count2(real_fun_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_617, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value800, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result257__;
    last_code_611 = come_decrement_ref_count2(last_code_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_612 = come_decrement_ref_count2(last_code2_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_613 = come_decrement_ref_count2(last_code3_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_616 = come_decrement_ref_count2(real_fun_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_617, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_650;
char* __dec_obj188;
char* last_code2_651;
char* __dec_obj189;
char* last_code3_652;
char* __dec_obj190;
struct sClass* current_stack_frame_struct_653;
struct sFun* equaler_654;
void* right_value801;
char* real_fun_name_655;
void* right_value802;
struct sType* type2_656;
struct sClass* klass_657;
_Bool _if_conditional558;
void* right_value803;
void* right_value804;
struct buffer* source_658;
_Bool _if_conditional559;
char* name_659;
int i_662;
struct list$1tuple2$2charphsTypephph* o2_saved_663;
struct tuple2$2charphsTypeph* it_664;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_665;
struct sType* field_type_666;
_Bool _if_conditional560;
_Bool _if_conditional562;
char* p_670;
int sline_671;
char* sname_672;
char* head_673;
struct buffer* source3_674;
struct buffer* __dec_obj191;
void* right_value805;
char* __dec_obj192;
void* right_value806;
struct sBlock* block_675;
void* right_value807;
void* right_value808;
struct sType* result_type_676;
void* right_value809;
char* name_677;
void* right_value810;
struct sType* left_type_678;
void* right_value811;
struct sType* right_type_679;
struct sType* __list_values27___680[2];
void* right_value812;
void* right_value813;
struct list$1sTypeph* param_types_681;
void* right_value814;
void* right_value815;
char* __list_values28___682[2];
void* right_value816;
void* right_value817;
struct list$1charph* param_names_683;
void* right_value818;
void* right_value819;
struct list$1charph* param_default_parametors_684;
void* right_value820;
void* right_value821;
struct buffer* header_buf_685;
void* right_value822;
int i_686;
struct sType* param_type_687;
char* param_name_688;
void* right_value823;
_Bool _if_conditional563;
void* right_value824;
void* right_value825;
void* right_value826;
void* right_value827;
struct sFun* fun_689;
void* right_value828;
struct sFun* fun2_690;
_Bool _if_conditional564;
void* right_value829;
void* right_value830;
void* right_value831;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value835;
struct sNode* node_692;
_Bool _if_conditional571;
struct buffer* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
void* right_value836;
void* right_value837;
struct tuple2$2sFunpcharph* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_650, 0, sizeof(char*));
memset(&last_code2_651, 0, sizeof(char*));
memset(&last_code3_652, 0, sizeof(char*));
memset(&current_stack_frame_struct_653, 0, sizeof(struct sClass*));
memset(&equaler_654, 0, sizeof(struct sFun*));
right_value801 = (void*)0;
memset(&real_fun_name_655, 0, sizeof(char*));
right_value802 = (void*)0;
memset(&type2_656, 0, sizeof(struct sType*));
memset(&klass_657, 0, sizeof(struct sClass*));
right_value803 = (void*)0;
right_value804 = (void*)0;
memset(&source_658, 0, sizeof(struct buffer*));
memset(&name_659, 0, sizeof(char*));
memset(&i_662, 0, sizeof(int));
memset(&o2_saved_663, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_664, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_665, 0, sizeof(char*));
memset(&field_type_666, 0, sizeof(struct sType*));
memset(&name_665, 0, sizeof(char*));
memset(&field_type_666, 0, sizeof(struct sType*));
memset(&p_670, 0, sizeof(char*));
memset(&sline_671, 0, sizeof(int));
memset(&sname_672, 0, sizeof(char*));
memset(&head_673, 0, sizeof(char*));
memset(&source3_674, 0, sizeof(struct buffer*));
right_value805 = (void*)0;
right_value806 = (void*)0;
memset(&block_675, 0, sizeof(struct sBlock*));
right_value807 = (void*)0;
right_value808 = (void*)0;
memset(&result_type_676, 0, sizeof(struct sType*));
right_value809 = (void*)0;
memset(&name_677, 0, sizeof(char*));
right_value810 = (void*)0;
memset(&left_type_678, 0, sizeof(struct sType*));
right_value811 = (void*)0;
memset(&right_type_679, 0, sizeof(struct sType*));
right_value812 = (void*)0;
right_value813 = (void*)0;
memset(&param_types_681, 0, sizeof(struct list$1sTypeph*));
right_value814 = (void*)0;
right_value815 = (void*)0;
right_value816 = (void*)0;
right_value817 = (void*)0;
memset(&param_names_683, 0, sizeof(struct list$1charph*));
right_value818 = (void*)0;
right_value819 = (void*)0;
memset(&param_default_parametors_684, 0, sizeof(struct list$1charph*));
right_value820 = (void*)0;
right_value821 = (void*)0;
memset(&header_buf_685, 0, sizeof(struct buffer*));
right_value822 = (void*)0;
memset(&i_686, 0, sizeof(int));
memset(&param_type_687, 0, sizeof(struct sType*));
memset(&param_name_688, 0, sizeof(char*));
right_value823 = (void*)0;
right_value824 = (void*)0;
right_value825 = (void*)0;
right_value826 = (void*)0;
right_value827 = (void*)0;
memset(&fun_689, 0, sizeof(struct sFun*));
right_value828 = (void*)0;
memset(&fun2_690, 0, sizeof(struct sFun*));
right_value829 = (void*)0;
right_value830 = (void*)0;
right_value831 = (void*)0;
right_value835 = (void*)0;
memset(&node_692, 0, sizeof(struct sNode*));
right_value836 = (void*)0;
right_value837 = (void*)0;
    # 2222 "05function2.c"
    last_code_650=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2223 "05function2.c"
    __dec_obj188=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2224 "05function2.c"
    last_code2_651=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2225 "05function2.c"
    __dec_obj189=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2226 "05function2.c"
    last_code3_652=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2227 "05function2.c"
    __dec_obj190=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2229 "05function2.c"
    current_stack_frame_struct_653=info->current_stack_frame_struct;
    # 2230 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2231 "05function2.c"
    equaler_654=((void*)0);
    # 2233 "05function2.c"
    real_fun_name_655=(char*)come_increment_ref_count(((char*)(right_value801=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value801 = come_decrement_ref_count2(right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2235 "05function2.c"
    type2_656=(struct sType*)come_increment_ref_count(((struct sType*)(right_value802=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value802, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2237 "05function2.c"
    type=type2_656;
    # 2239 "05function2.c"
    klass_657=type->mClass;
    # 2370 "05function2.c"
    # 2241 "05function2.c"
    if(_if_conditional558=type->mPointerNum>0&&!klass_657->mNumber,    _if_conditional558) {
        # 2242 "05function2.c"
        source_658=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value804=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value803=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2242, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value803, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value804, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2244 "05function2.c"
        buffer_append_char(source_658,123);
        # 2288 "05function2.c"
        # 2246 "05function2.c"
        if(klass_657->mProtocol) {
            # 2247 "05function2.c"
            name_659="_protocol_obj";
            # 2248 "05function2.c"
            char source2_660[1024];
            memset(&source2_660, 0, sizeof(char)            *(1024)            );
            # 2249 "05function2.c"
            snprintf(source2_660,1024,"return !left.%s.equals(right.%s);\n",name_659,name_659);
            # 2250 "05function2.c"
            buffer_append_str(source_658,source2_660);
        }
        else {
            # 2253 "05function2.c"
            char source2_661[1024];
            memset(&source2_661, 0, sizeof(char)            *(1024)            );
            # 2254 "05function2.c"
            snprintf(source2_661,1024,"return !(");
            # 2256 "05function2.c"
            buffer_append_str(source_658,source2_661);
            # 2258 "05function2.c"
            i_662=0;
            # 2259 "05function2.c"
            klass_657=map$2charphsClassphp_operator_load_element(info->classes,klass_657->mName);
            # 2286 "05function2.c"
            for(            o2_saved_663=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_657->mFields)),it_664=list$1tuple2$2charphsTypephph_begin((o2_saved_663));            !list$1tuple2$2charphsTypephph_end((o2_saved_663));            it_664=list$1tuple2$2charphsTypephph_next((o2_saved_663))            ){
                # 2261 "05function2.c"
                multiple_assign_var13=it_664;
                name_665=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_666=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                # 2269 "05function2.c"
                # 2263 "05function2.c"
                if(_if_conditional560=string_operator_equals(type->mClass->mName,field_type_666->mClass->mName)&&type->mPointerNum==field_type_666->mPointerNum&&field_type_666->mHeap,                _if_conditional560) {
                    # 2265 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2266 "05function2.c"
                    exit(2);
                }
                # 2269 "05function2.c"
                char source2_667[1024];
                memset(&source2_667, 0, sizeof(char)                *(1024)                );
                # 2270 "05function2.c"
                snprintf(source2_667,1024,"left.%s.equals(right.%s)",name_665,name_665);
                # 2271 "05function2.c"
                buffer_append_str(source_658,source2_667);
                # 2284 "05function2.c"
                # 2273 "05function2.c"
                if(_if_conditional562=i_662==list$1tuple2$2charphsTypephph_length(klass_657->mFields)-1,                _if_conditional562) {
                    # 2274 "05function2.c"
                    char source2_668[1024];
                    memset(&source2_668, 0, sizeof(char)                    *(1024)                    );
                    # 2275 "05function2.c"
                    snprintf(source2_668,1024,");");
                    # 2276 "05function2.c"
                    buffer_append_str(source_658,source2_668);
                }
                else {
                    # 2279 "05function2.c"
                    char source2_669[1024];
                    memset(&source2_669, 0, sizeof(char)                    *(1024)                    );
                    # 2280 "05function2.c"
                    snprintf(source2_669,1024," && ");
                    # 2281 "05function2.c"
                    buffer_append_str(source_658,source2_669);
                }
                # 2284 "05function2.c"
                i_662++;
                name_665 = come_decrement_ref_count2(name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_666, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_663, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2288 "05function2.c"
        buffer_append_char(source_658,125);
        # 2290 "05function2.c"
        p_670=info->p;
        # 2291 "05function2.c"
        sline_671=info->sline;
        # 2292 "05function2.c"
        sname_672=(char*)come_increment_ref_count(info->sname);
        # 2293 "05function2.c"
        head_673=info->head;
        # 2294 "05function2.c"
        source3_674=(struct buffer*)come_increment_ref_count(info->source);
        # 2296 "05function2.c"
        __dec_obj191=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_658);
        come_call_finalizer2(buffer_finalize,__dec_obj191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2297 "05function2.c"
        info->p=source_658->buf;
        # 2298 "05function2.c"
        info->head=source_658->buf;
        # 2300 "05function2.c"
        __dec_obj192=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value805=__builtin_string(real_fun_name_655))));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2301 "05function2.c"
        info->sline=0;
        # 2303 "05function2.c"
        block_675=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value806=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value806, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2305 "05function2.c"
        result_type_676=(struct sType*)come_increment_ref_count(((struct sType*)(right_value808=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value807=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2305, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value807, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2306 "05function2.c"
        name_677=(char*)come_increment_ref_count(((char*)(right_value809=string_clone(real_fun_name_655))));
        right_value809 = come_decrement_ref_count2(right_value809, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2307 "05function2.c"
        left_type_678=(struct sType*)come_increment_ref_count(((struct sType*)(right_value810=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2308 "05function2.c"
        left_type_678->mHeap=(_Bool)0;
        # 2309 "05function2.c"
        right_type_679=(struct sType*)come_increment_ref_count(((struct sType*)(right_value811=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value811, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2310 "05function2.c"
        right_type_679->mHeap=(_Bool)0;
        # 2311 "05function2.c"
        {__list_values27___680[0]=come_increment_ref_count(left_type_678);
__list_values27___680[1]=come_increment_ref_count(right_type_679);
}        param_types_681=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value813=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value812=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2311, "struct list$1sTypeph")))),2,__list_values27___680))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value812, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value813, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2312 "05function2.c"
        {__list_values28___682[0]=come_increment_ref_count(((char*)(right_value814=__builtin_string("left"))));
__list_values28___682[1]=come_increment_ref_count(((char*)(right_value815=__builtin_string("right"))));
}        param_names_683=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value817=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value816=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2312, "struct list$1charph")))),2,__list_values28___682))));
        right_value814 = come_decrement_ref_count2(right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value816, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value817, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2313 "05function2.c"
        param_default_parametors_684=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value819=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value818=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2313, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value818, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value819, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2314 "05function2.c"
        list$1charph_push_back(param_default_parametors_684,((void*)0));
        # 2315 "05function2.c"
        list$1charph_push_back(param_default_parametors_684,((void*)0));
        # 2317 "05function2.c"
        header_buf_685=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value821=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value820=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2317, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value820, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value821, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2319 "05function2.c"
        buffer_append_str(header_buf_685,((char*)(right_value822=make_come_type_name_string(result_type_676,info))));
        right_value822 = come_decrement_ref_count2(right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2320 "05function2.c"
        buffer_append_str(header_buf_685," ");
        # 2321 "05function2.c"
        buffer_append_str(header_buf_685,real_fun_name_655);
        # 2322 "05function2.c"
        buffer_append_str(header_buf_685,"(");
        # 2336 "05function2.c"
        for(        i_686=0;        i_686<list$1sTypeph_length(param_types_681);        i_686++        ){
            # 2325 "05function2.c"
            param_type_687=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_681,i_686), "05function2.c", 2325, 7));
            # 2326 "05function2.c"
            param_name_688=((char*)come_null_check(list$1charphp_operator_load_element(param_names_683,i_686), "05function2.c", 2326, 8));
            # 2328 "05function2.c"
            buffer_append_str(header_buf_685,((char*)(right_value823=make_come_type_name_string(param_type_687,info))));
            right_value823 = come_decrement_ref_count2(right_value823, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2329 "05function2.c"
            buffer_append_str(header_buf_685," ");
            # 2330 "05function2.c"
            buffer_append_str(header_buf_685,param_name_688);
            # 2335 "05function2.c"
            # 2332 "05function2.c"
            if(_if_conditional563=i_686!=list$1sTypeph_length(param_types_681)-1,            _if_conditional563) {
                # 2333 "05function2.c"
                buffer_append_str(header_buf_685,",");
            }
        }
        # 2336 "05function2.c"
        buffer_append_str(header_buf_685,")");
        # 2338 "05function2.c"
        result_type_676->mStatic=(_Bool)0;
        # 2346 "05function2.c"
        fun_689=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value827=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value824=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2340, "sFun")))),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1sTypeph*)come_increment_ref_count(param_types_681),(struct list$1charph*)come_increment_ref_count(param_names_683),(struct list$1charph*)come_increment_ref_count(param_default_parametors_684),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_675),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value825=buffer_to_string(header_buf_685)))),(char*)come_increment_ref_count(((char*)(right_value826=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value824, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value825 = come_decrement_ref_count2(right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value826 = come_decrement_ref_count2(right_value826, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2348 "05function2.c"
        fun2_690=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value828=__builtin_string(fun_name))));
        right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2354 "05function2.c"
        # 2349 "05function2.c"
        if(_if_conditional564=fun2_690==((void*)0)||fun2_690->mExternal,        _if_conditional564) {
            # 2351 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value829=string_clone(name_677)))),(struct sFun*)come_increment_ref_count(fun_689));
            right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2354 "05function2.c"
        equaler_654=fun_689;
        # 2356 "05function2.c"
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2356, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value831=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value830=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2356, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_689),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_692=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value835=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value830, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value831, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value835) { right_value835 = come_decrement_ref_count2(right_value835, ((struct sNode*)right_value835)->finalize, ((struct sNode*)right_value835)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2363 "05function2.c"
        # 2358 "05function2.c"
        if(_if_conditional571=!node_compile(node_692,info),        _if_conditional571) {
            # 2359 "05function2.c"
            err_msg(info,"compiling error");
            # 2360 "05function2.c"
            exit(2);
        }
        # 2363 "05function2.c"
        __dec_obj195=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_674);
        come_call_finalizer2(buffer_finalize,__dec_obj195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2364 "05function2.c"
        info->p=p_670;
        # 2365 "05function2.c"
        info->head=head_673;
        # 2366 "05function2.c"
        info->sline=sline_671;
        # 2367 "05function2.c"
        __dec_obj196=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_672);
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_658, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_672 = come_decrement_ref_count2(sname_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_674, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_675, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_676, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_678, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_679, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_681, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_683, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_684, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_685, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_689, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2370 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_653;
    # 2372 "05function2.c"
    __dec_obj197=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_650);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2373 "05function2.c"
    __dec_obj198=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_651);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2374 "05function2.c"
    __dec_obj199=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_652);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2376 "05function2.c"
    __result262__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value837=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value836=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2376, "struct tuple2$2sFunpcharph")))),equaler_654,(char*)come_increment_ref_count(real_fun_name_655))));
    last_code_650 = come_decrement_ref_count2(last_code_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_651 = come_decrement_ref_count2(last_code2_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_652 = come_decrement_ref_count2(last_code3_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_655 = come_decrement_ref_count2(real_fun_name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_656, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value836 = come_decrement_ref_count2(right_value836, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value837, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result262__;
    last_code_650 = come_decrement_ref_count2(last_code_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_651 = come_decrement_ref_count2(last_code2_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_652 = come_decrement_ref_count2(last_code3_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_655 = come_decrement_ref_count2(real_fun_name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_656, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional561;
int __result258__;
int __result259__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./neo-c.h"
                    # 364 "./neo-c.h"
                    if(_if_conditional561=self==((void*)0),                    _if_conditional561) {
                        # 365 "./neo-c.h"
                        __result258__ = 0;
                        return __result258__;
                    }
                    # 367 "./neo-c.h"
                    __result259__ = self->len;
                    return __result259__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_693;
char* __dec_obj200;
char* last_code2_694;
char* __dec_obj201;
char* last_code3_695;
char* __dec_obj202;
struct sClass* current_stack_frame_struct_696;
struct sFun* equaler_697;
void* right_value838;
char* real_fun_name_698;
void* right_value839;
struct sType* type2_699;
struct sClass* klass_700;
_Bool _if_conditional572;
void* right_value840;
void* right_value841;
struct buffer* source_701;
_Bool _if_conditional573;
char* name_702;
struct list$1tuple2$2charphsTypephph* o2_saved_704;
struct tuple2$2charphsTypeph* it_705;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_706;
struct sType* field_type_707;
_Bool _if_conditional574;
char* p_709;
int sline_710;
char* sname_711;
char* head_712;
struct buffer* source3_713;
struct buffer* __dec_obj203;
void* right_value842;
char* __dec_obj204;
void* right_value843;
struct sBlock* block_714;
void* right_value844;
void* right_value845;
struct sType* result_type_715;
void* right_value846;
char* name_716;
void* right_value847;
struct sType* left_type_717;
void* right_value848;
struct sType* right_type_718;
struct sType* __list_values29___719[2];
void* right_value849;
void* right_value850;
struct list$1sTypeph* param_types_720;
void* right_value851;
void* right_value852;
char* __list_values30___721[2];
void* right_value853;
void* right_value854;
struct list$1charph* param_names_722;
void* right_value855;
void* right_value856;
struct list$1charph* param_default_parametors_723;
void* right_value857;
void* right_value858;
struct buffer* header_buf_724;
void* right_value859;
int i_725;
struct sType* param_type_726;
char* param_name_727;
void* right_value860;
_Bool _if_conditional575;
void* right_value861;
void* right_value862;
void* right_value863;
void* right_value864;
struct sFun* fun_728;
void* right_value865;
struct sFun* fun2_729;
_Bool _if_conditional576;
void* right_value866;
void* right_value867;
void* right_value868;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value872;
struct sNode* node_731;
_Bool _if_conditional583;
struct buffer* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
char* __dec_obj210;
char* __dec_obj211;
void* right_value873;
void* right_value874;
struct tuple2$2sFunpcharph* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_693, 0, sizeof(char*));
memset(&last_code2_694, 0, sizeof(char*));
memset(&last_code3_695, 0, sizeof(char*));
memset(&current_stack_frame_struct_696, 0, sizeof(struct sClass*));
memset(&equaler_697, 0, sizeof(struct sFun*));
right_value838 = (void*)0;
memset(&real_fun_name_698, 0, sizeof(char*));
right_value839 = (void*)0;
memset(&type2_699, 0, sizeof(struct sType*));
memset(&klass_700, 0, sizeof(struct sClass*));
right_value840 = (void*)0;
right_value841 = (void*)0;
memset(&source_701, 0, sizeof(struct buffer*));
memset(&name_702, 0, sizeof(char*));
memset(&o2_saved_704, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_705, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_706, 0, sizeof(char*));
memset(&field_type_707, 0, sizeof(struct sType*));
memset(&name_706, 0, sizeof(char*));
memset(&field_type_707, 0, sizeof(struct sType*));
memset(&p_709, 0, sizeof(char*));
memset(&sline_710, 0, sizeof(int));
memset(&sname_711, 0, sizeof(char*));
memset(&head_712, 0, sizeof(char*));
memset(&source3_713, 0, sizeof(struct buffer*));
right_value842 = (void*)0;
right_value843 = (void*)0;
memset(&block_714, 0, sizeof(struct sBlock*));
right_value844 = (void*)0;
right_value845 = (void*)0;
memset(&result_type_715, 0, sizeof(struct sType*));
right_value846 = (void*)0;
memset(&name_716, 0, sizeof(char*));
right_value847 = (void*)0;
memset(&left_type_717, 0, sizeof(struct sType*));
right_value848 = (void*)0;
memset(&right_type_718, 0, sizeof(struct sType*));
right_value849 = (void*)0;
right_value850 = (void*)0;
memset(&param_types_720, 0, sizeof(struct list$1sTypeph*));
right_value851 = (void*)0;
right_value852 = (void*)0;
right_value853 = (void*)0;
right_value854 = (void*)0;
memset(&param_names_722, 0, sizeof(struct list$1charph*));
right_value855 = (void*)0;
right_value856 = (void*)0;
memset(&param_default_parametors_723, 0, sizeof(struct list$1charph*));
right_value857 = (void*)0;
right_value858 = (void*)0;
memset(&header_buf_724, 0, sizeof(struct buffer*));
right_value859 = (void*)0;
memset(&i_725, 0, sizeof(int));
memset(&param_type_726, 0, sizeof(struct sType*));
memset(&param_name_727, 0, sizeof(char*));
right_value860 = (void*)0;
right_value861 = (void*)0;
right_value862 = (void*)0;
right_value863 = (void*)0;
right_value864 = (void*)0;
memset(&fun_728, 0, sizeof(struct sFun*));
right_value865 = (void*)0;
memset(&fun2_729, 0, sizeof(struct sFun*));
right_value866 = (void*)0;
right_value867 = (void*)0;
right_value868 = (void*)0;
right_value872 = (void*)0;
memset(&node_731, 0, sizeof(struct sNode*));
right_value873 = (void*)0;
right_value874 = (void*)0;
    # 2381 "05function2.c"
    last_code_693=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2382 "05function2.c"
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2383 "05function2.c"
    last_code2_694=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2384 "05function2.c"
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2385 "05function2.c"
    last_code3_695=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2386 "05function2.c"
    __dec_obj202=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2388 "05function2.c"
    current_stack_frame_struct_696=info->current_stack_frame_struct;
    # 2389 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2390 "05function2.c"
    equaler_697=((void*)0);
    # 2392 "05function2.c"
    real_fun_name_698=(char*)come_increment_ref_count(((char*)(right_value838=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value838 = come_decrement_ref_count2(right_value838, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2394 "05function2.c"
    type2_699=(struct sType*)come_increment_ref_count(((struct sType*)(right_value839=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value839, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2396 "05function2.c"
    type=type2_699;
    # 2398 "05function2.c"
    klass_700=type->mClass;
    # 2512 "05function2.c"
    # 2400 "05function2.c"
    if(_if_conditional572=type->mPointerNum>0&&!klass_700->mNumber,    _if_conditional572) {
        # 2401 "05function2.c"
        source_701=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value841=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value840=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2401, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value840, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value841, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2403 "05function2.c"
        buffer_append_char(source_701,123);
        # 2429 "05function2.c"
        # 2405 "05function2.c"
        if(klass_700->mProtocol) {
            # 2406 "05function2.c"
            name_702="_protocol_obj";
            # 2407 "05function2.c"
            char source2_703[1024];
            memset(&source2_703, 0, sizeof(char)            *(1024)            );
            # 2408 "05function2.c"
            snprintf(source2_703,1024,"return left.%s.equals(right.%s);\n",name_702,name_702);
            # 2409 "05function2.c"
            buffer_append_str(source_701,source2_703);
        }
        else {
            # 2412 "05function2.c"
            klass_700=map$2charphsClassphp_operator_load_element(info->classes,klass_700->mName);
            # 2427 "05function2.c"
            for(            o2_saved_704=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_700->mFields)),it_705=list$1tuple2$2charphsTypephph_begin((o2_saved_704));            !list$1tuple2$2charphsTypephph_end((o2_saved_704));            it_705=list$1tuple2$2charphsTypephph_next((o2_saved_704))            ){
                # 2414 "05function2.c"
                multiple_assign_var14=it_705;
                name_706=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_707=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                # 2422 "05function2.c"
                # 2416 "05function2.c"
                if(_if_conditional574=string_operator_equals(type->mClass->mName,field_type_707->mClass->mName)&&type->mPointerNum==field_type_707->mPointerNum&&field_type_707->mHeap,                _if_conditional574) {
                    # 2418 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2419 "05function2.c"
                    exit(2);
                }
                # 2422 "05function2.c"
                char source2_708[1024];
                memset(&source2_708, 0, sizeof(char)                *(1024)                );
                # 2423 "05function2.c"
                snprintf(source2_708,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_706,name_706);
                # 2425 "05function2.c"
                buffer_append_str(source_701,source2_708);
                name_706 = come_decrement_ref_count2(name_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_707, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_704, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2429 "05function2.c"
        buffer_append_str(source_701,"return true;\n");
        # 2430 "05function2.c"
        buffer_append_char(source_701,125);
        # 2432 "05function2.c"
        p_709=info->p;
        # 2433 "05function2.c"
        sline_710=info->sline;
        # 2434 "05function2.c"
        sname_711=(char*)come_increment_ref_count(info->sname);
        # 2435 "05function2.c"
        head_712=info->head;
        # 2436 "05function2.c"
        source3_713=(struct buffer*)come_increment_ref_count(info->source);
        # 2438 "05function2.c"
        __dec_obj203=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_701);
        come_call_finalizer2(buffer_finalize,__dec_obj203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2439 "05function2.c"
        info->p=source_701->buf;
        # 2440 "05function2.c"
        info->head=source_701->buf;
        # 2442 "05function2.c"
        __dec_obj204=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value842=__builtin_string(real_fun_name_698))));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2443 "05function2.c"
        info->sline=0;
        # 2445 "05function2.c"
        block_714=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value843=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value843, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2447 "05function2.c"
        result_type_715=(struct sType*)come_increment_ref_count(((struct sType*)(right_value845=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value844=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2447, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value844, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value845, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2448 "05function2.c"
        name_716=(char*)come_increment_ref_count(((char*)(right_value846=string_clone(real_fun_name_698))));
        right_value846 = come_decrement_ref_count2(right_value846, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2449 "05function2.c"
        left_type_717=(struct sType*)come_increment_ref_count(((struct sType*)(right_value847=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value847, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2450 "05function2.c"
        left_type_717->mHeap=(_Bool)0;
        # 2451 "05function2.c"
        right_type_718=(struct sType*)come_increment_ref_count(((struct sType*)(right_value848=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value848, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2452 "05function2.c"
        right_type_718->mHeap=(_Bool)0;
        # 2453 "05function2.c"
        {__list_values29___719[0]=come_increment_ref_count(left_type_717);
__list_values29___719[1]=come_increment_ref_count(right_type_718);
}        param_types_720=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value850=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value849=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2453, "struct list$1sTypeph")))),2,__list_values29___719))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value849, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value850, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2454 "05function2.c"
        {__list_values30___721[0]=come_increment_ref_count(((char*)(right_value851=__builtin_string("left"))));
__list_values30___721[1]=come_increment_ref_count(((char*)(right_value852=__builtin_string("right"))));
}        param_names_722=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value854=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value853=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2454, "struct list$1charph")))),2,__list_values30___721))));
        right_value851 = come_decrement_ref_count2(right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value853, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value854, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2455 "05function2.c"
        param_default_parametors_723=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value856=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value855=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2455, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value855, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value856, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2456 "05function2.c"
        list$1charph_push_back(param_default_parametors_723,((void*)0));
        # 2457 "05function2.c"
        list$1charph_push_back(param_default_parametors_723,((void*)0));
        # 2459 "05function2.c"
        header_buf_724=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value858=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value857=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2459, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value857, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value858, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2461 "05function2.c"
        buffer_append_str(header_buf_724,((char*)(right_value859=make_come_type_name_string(result_type_715,info))));
        right_value859 = come_decrement_ref_count2(right_value859, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2462 "05function2.c"
        buffer_append_str(header_buf_724," ");
        # 2463 "05function2.c"
        buffer_append_str(header_buf_724,real_fun_name_698);
        # 2464 "05function2.c"
        buffer_append_str(header_buf_724,"(");
        # 2478 "05function2.c"
        for(        i_725=0;        i_725<list$1sTypeph_length(param_types_720);        i_725++        ){
            # 2467 "05function2.c"
            param_type_726=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_720,i_725), "05function2.c", 2467, 9));
            # 2468 "05function2.c"
            param_name_727=((char*)come_null_check(list$1charphp_operator_load_element(param_names_722,i_725), "05function2.c", 2468, 10));
            # 2470 "05function2.c"
            buffer_append_str(header_buf_724,((char*)(right_value860=make_come_type_name_string(param_type_726,info))));
            right_value860 = come_decrement_ref_count2(right_value860, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2471 "05function2.c"
            buffer_append_str(header_buf_724," ");
            # 2472 "05function2.c"
            buffer_append_str(header_buf_724,param_name_727);
            # 2477 "05function2.c"
            # 2474 "05function2.c"
            if(_if_conditional575=i_725!=list$1sTypeph_length(param_types_720)-1,            _if_conditional575) {
                # 2475 "05function2.c"
                buffer_append_str(header_buf_724,",");
            }
        }
        # 2478 "05function2.c"
        buffer_append_str(header_buf_724,")");
        # 2480 "05function2.c"
        result_type_715->mStatic=(_Bool)0;
        # 2488 "05function2.c"
        fun_728=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value864=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value861=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2482, "sFun")))),(char*)come_increment_ref_count(name_716),(struct sType*)come_increment_ref_count(result_type_715),(struct list$1sTypeph*)come_increment_ref_count(param_types_720),(struct list$1charph*)come_increment_ref_count(param_names_722),(struct list$1charph*)come_increment_ref_count(param_default_parametors_723),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_714),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value862=buffer_to_string(header_buf_724)))),(char*)come_increment_ref_count(((char*)(right_value863=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value861, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value862 = come_decrement_ref_count2(right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value863 = come_decrement_ref_count2(right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value864, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2490 "05function2.c"
        fun2_729=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value865=__builtin_string(fun_name))));
        right_value865 = come_decrement_ref_count2(right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2496 "05function2.c"
        # 2491 "05function2.c"
        if(_if_conditional576=fun2_729==((void*)0)||fun2_729->mExternal,        _if_conditional576) {
            # 2493 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value866=string_clone(name_716)))),(struct sFun*)come_increment_ref_count(fun_728));
            right_value866 = come_decrement_ref_count2(right_value866, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2496 "05function2.c"
        equaler_697=fun_728;
        # 2498 "05function2.c"
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2498, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value868=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value867=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2498, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_728),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_731=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value872=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value867, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value868, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value872) { right_value872 = come_decrement_ref_count2(right_value872, ((struct sNode*)right_value872)->finalize, ((struct sNode*)right_value872)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2505 "05function2.c"
        # 2500 "05function2.c"
        if(_if_conditional583=!node_compile(node_731,info),        _if_conditional583) {
            # 2501 "05function2.c"
            err_msg(info,"compiling error(X)");
            # 2502 "05function2.c"
            exit(2);
        }
        # 2505 "05function2.c"
        __dec_obj207=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_713);
        come_call_finalizer2(buffer_finalize,__dec_obj207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2506 "05function2.c"
        info->p=p_709;
        # 2507 "05function2.c"
        info->head=head_712;
        # 2508 "05function2.c"
        info->sline=sline_710;
        # 2509 "05function2.c"
        __dec_obj208=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_711);
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_701, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_711 = come_decrement_ref_count2(sname_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_713, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_714, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_715, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_716 = come_decrement_ref_count2(name_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_717, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_718, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_720, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_722, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_723, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_724, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_728, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2512 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_696;
    # 2514 "05function2.c"
    __dec_obj209=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_693);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2515 "05function2.c"
    __dec_obj210=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_694);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2516 "05function2.c"
    __dec_obj211=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_695);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2518 "05function2.c"
    __result265__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value874=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value873=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2518, "struct tuple2$2sFunpcharph")))),equaler_697,(char*)come_increment_ref_count(real_fun_name_698))));
    last_code_693 = come_decrement_ref_count2(last_code_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_694 = come_decrement_ref_count2(last_code2_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_695 = come_decrement_ref_count2(last_code3_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_698 = come_decrement_ref_count2(real_fun_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_699, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value873 = come_decrement_ref_count2(right_value873, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value874, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result265__;
    last_code_693 = come_decrement_ref_count2(last_code_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_694 = come_decrement_ref_count2(last_code2_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_695 = come_decrement_ref_count2(last_code3_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_698 = come_decrement_ref_count2(real_fun_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_699, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_732;
char* __dec_obj212;
char* last_code2_733;
char* __dec_obj213;
char* last_code3_734;
char* __dec_obj214;
struct sClass* current_stack_frame_struct_735;
struct sFun* cloner_736;
void* right_value875;
char* real_fun_name_737;
void* right_value876;
struct sType* type2_738;
struct sClass* klass_739;
_Bool _if_conditional584;
void* right_value877;
void* right_value878;
struct buffer* source_740;
void* right_value879;
void* right_value880;
_Bool _if_conditional585;
char* name_741;
struct list$1tuple2$2charphsTypephph* o2_saved_743;
struct tuple2$2charphsTypeph* it_744;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_745;
struct sType* field_type_746;
_Bool _if_conditional586;
_Bool _if_conditional587;
_Bool _if_conditional588;
struct list$1tuple2$2charphsTypephph* o2_saved_749;
struct tuple2$2charphsTypeph* it_750;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_751;
struct sType* field_type_752;
_Bool _if_conditional589;
_Bool _if_conditional590;
_Bool _if_conditional591;
void* right_value881;
char* p_756;
int sline_757;
char* sname_758;
struct buffer* source3_759;
char* head_760;
struct buffer* __dec_obj215;
void* right_value882;
char* __dec_obj216;
void* right_value883;
struct sBlock* block_761;
void* right_value884;
struct sType* result_type_762;
void* right_value885;
char* name_763;
void* right_value886;
struct sType* self_type_764;
struct sType* __list_values31___765[1];
void* right_value887;
void* right_value888;
struct list$1sTypeph* param_types_766;
void* right_value889;
char* __list_values32___767[1];
void* right_value890;
void* right_value891;
struct list$1charph* param_names_768;
void* right_value892;
void* right_value893;
struct list$1charph* param_default_parametors_769;
void* right_value894;
void* right_value895;
struct buffer* header_buf_770;
void* right_value896;
int i_771;
struct sType* param_type_772;
char* param_name_773;
void* right_value897;
_Bool _if_conditional592;
void* right_value898;
void* right_value899;
void* right_value900;
void* right_value901;
struct sFun* fun_774;
void* right_value902;
struct sFun* fun2_775;
_Bool _if_conditional593;
void* right_value903;
void* right_value904;
void* right_value905;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value909;
struct sNode* node_777;
_Bool _if_conditional600;
char* __dec_obj219;
struct buffer* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
void* right_value910;
void* right_value911;
struct tuple2$2sFunpcharph* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_732, 0, sizeof(char*));
memset(&last_code2_733, 0, sizeof(char*));
memset(&last_code3_734, 0, sizeof(char*));
memset(&current_stack_frame_struct_735, 0, sizeof(struct sClass*));
memset(&cloner_736, 0, sizeof(struct sFun*));
right_value875 = (void*)0;
memset(&real_fun_name_737, 0, sizeof(char*));
right_value876 = (void*)0;
memset(&type2_738, 0, sizeof(struct sType*));
memset(&klass_739, 0, sizeof(struct sClass*));
right_value877 = (void*)0;
right_value878 = (void*)0;
memset(&source_740, 0, sizeof(struct buffer*));
right_value879 = (void*)0;
right_value880 = (void*)0;
memset(&name_741, 0, sizeof(char*));
memset(&o2_saved_743, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_744, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_745, 0, sizeof(char*));
memset(&field_type_746, 0, sizeof(struct sType*));
memset(&name_745, 0, sizeof(char*));
memset(&field_type_746, 0, sizeof(struct sType*));
memset(&o2_saved_749, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_750, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_751, 0, sizeof(char*));
memset(&field_type_752, 0, sizeof(struct sType*));
memset(&name_751, 0, sizeof(char*));
memset(&field_type_752, 0, sizeof(struct sType*));
right_value881 = (void*)0;
memset(&p_756, 0, sizeof(char*));
memset(&sline_757, 0, sizeof(int));
memset(&sname_758, 0, sizeof(char*));
memset(&source3_759, 0, sizeof(struct buffer*));
memset(&head_760, 0, sizeof(char*));
right_value882 = (void*)0;
right_value883 = (void*)0;
memset(&block_761, 0, sizeof(struct sBlock*));
right_value884 = (void*)0;
memset(&result_type_762, 0, sizeof(struct sType*));
right_value885 = (void*)0;
memset(&name_763, 0, sizeof(char*));
right_value886 = (void*)0;
memset(&self_type_764, 0, sizeof(struct sType*));
right_value887 = (void*)0;
right_value888 = (void*)0;
memset(&param_types_766, 0, sizeof(struct list$1sTypeph*));
right_value889 = (void*)0;
right_value890 = (void*)0;
right_value891 = (void*)0;
memset(&param_names_768, 0, sizeof(struct list$1charph*));
right_value892 = (void*)0;
right_value893 = (void*)0;
memset(&param_default_parametors_769, 0, sizeof(struct list$1charph*));
right_value894 = (void*)0;
right_value895 = (void*)0;
memset(&header_buf_770, 0, sizeof(struct buffer*));
right_value896 = (void*)0;
memset(&i_771, 0, sizeof(int));
memset(&param_type_772, 0, sizeof(struct sType*));
memset(&param_name_773, 0, sizeof(char*));
right_value897 = (void*)0;
right_value898 = (void*)0;
right_value899 = (void*)0;
right_value900 = (void*)0;
right_value901 = (void*)0;
memset(&fun_774, 0, sizeof(struct sFun*));
right_value902 = (void*)0;
memset(&fun2_775, 0, sizeof(struct sFun*));
right_value903 = (void*)0;
right_value904 = (void*)0;
right_value905 = (void*)0;
right_value909 = (void*)0;
memset(&node_777, 0, sizeof(struct sNode*));
right_value910 = (void*)0;
right_value911 = (void*)0;
    # 2523 "05function2.c"
    last_code_732=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2524 "05function2.c"
    __dec_obj212=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2525 "05function2.c"
    last_code2_733=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2526 "05function2.c"
    __dec_obj213=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2527 "05function2.c"
    last_code3_734=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2528 "05function2.c"
    __dec_obj214=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2530 "05function2.c"
    current_stack_frame_struct_735=info->current_stack_frame_struct;
    # 2531 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2532 "05function2.c"
    cloner_736=((void*)0);
    # 2534 "05function2.c"
    real_fun_name_737=(char*)come_increment_ref_count(((char*)(right_value875=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value875 = come_decrement_ref_count2(right_value875, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2536 "05function2.c"
    type2_738=(struct sType*)come_increment_ref_count(((struct sType*)(right_value876=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value876, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2538 "05function2.c"
    type=type2_738;
    # 2540 "05function2.c"
    klass_739=type->mClass;
    # 2698 "05function2.c"
    # 2542 "05function2.c"
    if(_if_conditional584=type->mPointerNum>0&&!klass_739->mNumber,    _if_conditional584) {
        # 2543 "05function2.c"
        source_740=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value878=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value877=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2543, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value877, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value878, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2545 "05function2.c"
        buffer_append_str(source_740,"{\n");
        # 2546 "05function2.c"
        buffer_append_str(source_740,"if(self == (void*)0) { return (void*)0; }\n");
        # 2547 "05function2.c"
        buffer_append_str(source_740,((char*)(right_value880=xsprintf("var result = new %s;\n",((char*)(right_value879=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value879 = come_decrement_ref_count2(right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value880 = come_decrement_ref_count2(right_value880, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2615 "05function2.c"
        # 2550 "05function2.c"
        if(klass_739->mProtocol) {
            # 2551 "05function2.c"
            name_741="_protocol_obj";
            # 2552 "05function2.c"
            char source2_742[1024];
            memset(&source2_742, 0, sizeof(char)            *(1024)            );
            # 2553 "05function2.c"
            snprintf(source2_742,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            # 2555 "05function2.c"
            buffer_append_str(source_740,source2_742);
            # 2557 "05function2.c"
            klass_739=map$2charphsClassphp_operator_load_element(info->classes,klass_739->mName);
            # 2582 "05function2.c"
            for(            o2_saved_743=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_739->mFields)),it_744=list$1tuple2$2charphsTypephph_begin((o2_saved_743));            !list$1tuple2$2charphsTypephph_end((o2_saved_743));            it_744=list$1tuple2$2charphsTypephph_next((o2_saved_743))            ){
                # 2559 "05function2.c"
                multiple_assign_var15=it_744;
                name_745=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_746=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                # 2567 "05function2.c"
                # 2561 "05function2.c"
                if(_if_conditional586=string_operator_equals(type->mClass->mName,field_type_746->mClass->mName)&&type->mPointerNum==field_type_746->mPointerNum&&field_type_746->mHeap,                _if_conditional586) {
                    # 2563 "05function2.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2564 "05function2.c"
                    exit(2);
                }
                # 2581 "05function2.c"
                # 2567 "05function2.c"
                if(_if_conditional587=string_operator_equals(name_745,"_protocol_obj"),                _if_conditional587) {
                }
                else {
                    # 2581 "05function2.c"
                    # 2569 "05function2.c"
                    if(_if_conditional588=list$1sNodeph_length(field_type_746->mArrayNum)>0,                    _if_conditional588) {
                        # 2570 "05function2.c"
                        char source2_747[1024];
                        memset(&source2_747, 0, sizeof(char)                        *(1024)                        );
                        # 2571 "05function2.c"
                        snprintf(source2_747,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_745,name_745,name_745);
                        # 2573 "05function2.c"
                        buffer_append_str(source_740,source2_747);
                    }
                    else {
                        # 2576 "05function2.c"
                        char source2_748[1024];
                        memset(&source2_748, 0, sizeof(char)                        *(1024)                        );
                        # 2577 "05function2.c"
                        snprintf(source2_748,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_745,name_745);
                        # 2579 "05function2.c"
                        buffer_append_str(source_740,source2_748);
                    }
                }
                name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_746, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_743, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2584 "05function2.c"
            klass_739=map$2charphsClassphp_operator_load_element(info->classes,klass_739->mName);
            # 2613 "05function2.c"
            for(            o2_saved_749=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_739->mFields)),it_750=list$1tuple2$2charphsTypephph_begin((o2_saved_749));            !list$1tuple2$2charphsTypephph_end((o2_saved_749));            it_750=list$1tuple2$2charphsTypephph_next((o2_saved_749))            ){
                # 2586 "05function2.c"
                multiple_assign_var16=it_750;
                name_751=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_752=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                # 2594 "05function2.c"
                # 2588 "05function2.c"
                if(_if_conditional589=string_operator_equals(type->mClass->mName,field_type_752->mClass->mName)&&type->mPointerNum==field_type_752->mPointerNum&&field_type_752->mHeap,                _if_conditional589) {
                    # 2590 "05function2.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2591 "05function2.c"
                    exit(2);
                }
                # 2612 "05function2.c"
                # 2594 "05function2.c"
                if(field_type_752->mHeap) {
                    # 2595 "05function2.c"
                    char source2_753[1024];
                    memset(&source2_753, 0, sizeof(char)                    *(1024)                    );
                    # 2596 "05function2.c"
                    snprintf(source2_753,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_751,name_751,name_751);
                    # 2598 "05function2.c"
                    buffer_append_str(source_740,source2_753);
                }
                else {
                    # 2612 "05function2.c"
                    # 2600 "05function2.c"
                    if(_if_conditional591=list$1sNodeph_length(field_type_752->mArrayNum)>0,                    _if_conditional591) {
                        # 2601 "05function2.c"
                        char source2_754[1024];
                        memset(&source2_754, 0, sizeof(char)                        *(1024)                        );
                        # 2602 "05function2.c"
                        snprintf(source2_754,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_751,name_751,name_751);
                        # 2604 "05function2.c"
                        buffer_append_str(source_740,source2_754);
                    }
                    else {
                        # 2607 "05function2.c"
                        char source2_755[1024];
                        memset(&source2_755, 0, sizeof(char)                        *(1024)                        );
                        # 2608 "05function2.c"
                        snprintf(source2_755,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_751,name_751);
                        # 2610 "05function2.c"
                        buffer_append_str(source_740,source2_755);
                    }
                }
                name_751 = come_decrement_ref_count2(name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_752, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_749, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2615 "05function2.c"
        buffer_append_str(source_740,((char*)(right_value881=xsprintf("return result;"))));
        right_value881 = come_decrement_ref_count2(right_value881, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2616 "05function2.c"
        buffer_append_char(source_740,125);
        # 2618 "05function2.c"
        p_756=info->p;
        # 2619 "05function2.c"
        sline_757=info->sline;
        # 2620 "05function2.c"
        sname_758=(char*)come_increment_ref_count(info->sname);
        # 2621 "05function2.c"
        source3_759=(struct buffer*)come_increment_ref_count(info->source);
        # 2622 "05function2.c"
        head_760=info->head;
        # 2624 "05function2.c"
        __dec_obj215=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_740);
        come_call_finalizer2(buffer_finalize,__dec_obj215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2625 "05function2.c"
        info->p=info->source->buf;
        # 2626 "05function2.c"
        info->head=info->source->buf;
        # 2628 "05function2.c"
        __dec_obj216=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value882=__builtin_string(real_fun_name_737))));
        __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value882 = come_decrement_ref_count2(right_value882, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2629 "05function2.c"
        info->sline=1;
        # 2631 "05function2.c"
        block_761=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value883=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value883, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2633 "05function2.c"
        result_type_762=(struct sType*)come_increment_ref_count(((struct sType*)(right_value884=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value884, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2634 "05function2.c"
        name_763=(char*)come_increment_ref_count(((char*)(right_value885=string_clone(real_fun_name_737))));
        right_value885 = come_decrement_ref_count2(right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2635 "05function2.c"
        self_type_764=(struct sType*)come_increment_ref_count(((struct sType*)(right_value886=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value886, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2636 "05function2.c"
        self_type_764->mHeap=(_Bool)0;
        # 2637 "05function2.c"
        {__list_values31___765[0]=come_increment_ref_count(self_type_764);
}        param_types_766=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value888=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value887=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2637, "struct list$1sTypeph")))),1,__list_values31___765))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value887, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value888, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2638 "05function2.c"
        {__list_values32___767[0]=come_increment_ref_count(((char*)(right_value889=__builtin_string("self"))));
}        param_names_768=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value891=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value890=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2638, "struct list$1charph")))),1,__list_values32___767))));
        right_value889 = come_decrement_ref_count2(right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value890, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value891, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2639 "05function2.c"
        param_default_parametors_769=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value893=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value892=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2639, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value892, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value893, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2640 "05function2.c"
        list$1charph_push_back(param_default_parametors_769,((void*)0));
        # 2642 "05function2.c"
        header_buf_770=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value895=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value894=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2642, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value894, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value895, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2644 "05function2.c"
        buffer_append_str(header_buf_770,((char*)(right_value896=make_come_type_name_string(result_type_762,info))));
        right_value896 = come_decrement_ref_count2(right_value896, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2645 "05function2.c"
        buffer_append_str(header_buf_770," ");
        # 2646 "05function2.c"
        buffer_append_str(header_buf_770,real_fun_name_737);
        # 2647 "05function2.c"
        buffer_append_str(header_buf_770,"(");
        # 2661 "05function2.c"
        for(        i_771=0;        i_771<list$1sTypeph_length(param_types_766);        i_771++        ){
            # 2650 "05function2.c"
            param_type_772=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_766,i_771), "05function2.c", 2650, 11));
            # 2651 "05function2.c"
            param_name_773=((char*)come_null_check(list$1charphp_operator_load_element(param_names_768,i_771), "05function2.c", 2651, 12));
            # 2653 "05function2.c"
            buffer_append_str(header_buf_770,((char*)(right_value897=make_come_type_name_string(param_type_772,info))));
            right_value897 = come_decrement_ref_count2(right_value897, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2654 "05function2.c"
            buffer_append_str(header_buf_770," ");
            # 2655 "05function2.c"
            buffer_append_str(header_buf_770,param_name_773);
            # 2660 "05function2.c"
            # 2657 "05function2.c"
            if(_if_conditional592=i_771!=list$1sTypeph_length(param_types_766)-1,            _if_conditional592) {
                # 2658 "05function2.c"
                buffer_append_str(header_buf_770,",");
            }
        }
        # 2661 "05function2.c"
        buffer_append_str(header_buf_770,")");
        # 2663 "05function2.c"
        result_type_762->mStatic=(_Bool)0;
        # 2671 "05function2.c"
        fun_774=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value901=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value898=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2665, "sFun")))),(char*)come_increment_ref_count(name_763),(struct sType*)come_increment_ref_count(result_type_762),(struct list$1sTypeph*)come_increment_ref_count(param_types_766),(struct list$1charph*)come_increment_ref_count(param_names_768),(struct list$1charph*)come_increment_ref_count(param_default_parametors_769),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_761),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value899=buffer_to_string(header_buf_770)))),(char*)come_increment_ref_count(((char*)(right_value900=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value898, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value899 = come_decrement_ref_count2(right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value900 = come_decrement_ref_count2(right_value900, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value901, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2673 "05function2.c"
        fun_774->mCloner=(_Bool)1;
        # 2675 "05function2.c"
        fun2_775=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value902=__builtin_string(fun_name))));
        right_value902 = come_decrement_ref_count2(right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2680 "05function2.c"
        # 2676 "05function2.c"
        if(_if_conditional593=fun2_775==((void*)0)||fun2_775->mExternal,        _if_conditional593) {
            # 2677 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value903=string_clone(name_763)))),(struct sFun*)come_increment_ref_count(fun_774));
            right_value903 = come_decrement_ref_count2(right_value903, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2680 "05function2.c"
        cloner_736=fun_774;
        # 2682 "05function2.c"
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2682, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value905=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value904=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2682, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_774),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sFunNode_sline;
        _inf_value13->sname=(void*)sFunNode_sname;
        _inf_value13->terminated=(void*)sFunNode_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_777=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value909=_inf_value13)));
        come_call_finalizer2(sFunNode_finalize,right_value904, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value905, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value909) { right_value909 = come_decrement_ref_count2(right_value909, ((struct sNode*)right_value909)->finalize, ((struct sNode*)right_value909)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2689 "05function2.c"
        # 2684 "05function2.c"
        if(_if_conditional600=!node_compile(node_777,info),        _if_conditional600) {
            # 2685 "05function2.c"
            err_msg(info,"compiling error(Y)");
            # 2686 "05function2.c"
            exit(2);
        }
        # 2689 "05function2.c"
        __dec_obj219=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_758);
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 2690 "05function2.c"
        info->sline=sline_757;
        # 2692 "05function2.c"
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_759);
        come_call_finalizer2(buffer_finalize,__dec_obj220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2693 "05function2.c"
        info->p=p_756;
        # 2694 "05function2.c"
        info->head=head_760;
        # 2695 "05function2.c"
        info->sline=sline_757;
        come_call_finalizer2(buffer_finalize,source_740, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_758 = come_decrement_ref_count2(sname_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_759, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_761, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_762, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_763 = come_decrement_ref_count2(name_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_764, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_766, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_768, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_769, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_770, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_774, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_777) { node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2698 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_735;
    # 2700 "05function2.c"
    __dec_obj221=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_732);
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2701 "05function2.c"
    __dec_obj222=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_733);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2702 "05function2.c"
    __dec_obj223=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_734);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2704 "05function2.c"
    __result268__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value911=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value910=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2704, "struct tuple2$2sFunpcharph")))),cloner_736,(char*)come_increment_ref_count(real_fun_name_737))));
    last_code_732 = come_decrement_ref_count2(last_code_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_733 = come_decrement_ref_count2(last_code2_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_734 = come_decrement_ref_count2(last_code3_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_737 = come_decrement_ref_count2(real_fun_name_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_738, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value910 = come_decrement_ref_count2(right_value910, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value911, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result268__;
    last_code_732 = come_decrement_ref_count2(last_code_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_733 = come_decrement_ref_count2(last_code2_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_734 = come_decrement_ref_count2(last_code3_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_737 = come_decrement_ref_count2(real_fun_name_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_738, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional594;
_Bool _if_conditional595;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sFunNode_finalize"
            # 0 "sFunNode_finalize"
            if(_if_conditional594=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional594) {
                # 0 "sFunNode_finalize"
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sFunNode_finalize"
            # 1 "sFunNode_finalize"
            if(_if_conditional595=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional595) {
                # 1 "sFunNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional596;
struct sFunNode* __result266__;
void* right_value906;
struct sFunNode* result_776;
_Bool _if_conditional597;
void* right_value907;
struct sFun* __dec_obj217;
_Bool _if_conditional598;
_Bool _if_conditional599;
void* right_value908;
char* __dec_obj218;
struct sFunNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value906 = (void*)0;
memset(&result_776, 0, sizeof(struct sFunNode*));
right_value907 = (void*)0;
right_value908 = (void*)0;
            # 3 "sFunNode_clone"
            # 2 "sFunNode_clone"
            if(_if_conditional596=self==(void*)0,            _if_conditional596) {
                # 2 "sFunNode_clone"
                __result266__ = __result_obj__ = (void*)0;
                return __result266__;
            }
            # 3 "sFunNode_clone"
            result_776=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value906=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value906, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sFunNode_clone"
            # 4 "sFunNode_clone"
            if(_if_conditional597=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional597) {
                # 4 "sFunNode_clone"
                __dec_obj217=result_776->mFun;
                result_776->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value907=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value907, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 6 "sFunNode_clone"
            # 5 "sFunNode_clone"
            if(_if_conditional598=self!=((void*)0),            _if_conditional598) {
                # 5 "sFunNode_clone"
                result_776->sline=self->sline;
            }
            # 7 "sFunNode_clone"
            # 6 "sFunNode_clone"
            if(_if_conditional599=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional599) {
                # 6 "sFunNode_clone"
                __dec_obj218=result_776->sname;
                result_776->sname=(char*)come_increment_ref_count(((char*)(right_value908=string_clone(self->sname))));
                __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value908 = come_decrement_ref_count2(right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sFunNode_clone"
            __result267__ = __result_obj__ = result_776;
            come_call_finalizer2(sFunNode_finalize,result_776, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result267__;
            come_call_finalizer2(sFunNode_finalize,result_776, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

