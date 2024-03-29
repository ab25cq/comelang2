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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}




_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value48;
struct sType* generics_type_29;
_Bool _if_conditional93;
struct sType* __dec_obj29;
struct sClass* klass_30;
char* class_name_31;
char* fun_name2_32;
struct sFun* operator_fun_33;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value49;
char* none_generics_name_34;
void* right_value50;
struct sType* obj_type_35;
void* right_value51;
char* __dec_obj30;
void* right_value52;
char* fun_name3_36;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional110;
void* right_value53;
_Bool _if_conditional111;
_Bool __result33__;
void* right_value54;
char* __dec_obj31;
int i_43;
void* right_value55;
char* new_fun_name_44;
_Bool _if_conditional131;
void* right_value56;
char* __dec_obj32;
_Bool _if_conditional132;
_Bool result_45;
_Bool _if_conditional133;
void* right_value57;
struct CVALUE* come_value_46;
char* left_value2_47;
void* right_value58;
void* right_value59;
_Bool _if_conditional138;
void* right_value60;
char* __dec_obj33;
void* right_value61;
char* __dec_obj34;
char* middle_value2_51;
void* right_value62;
void* right_value63;
_Bool _if_conditional139;
void* right_value64;
char* __dec_obj35;
void* right_value65;
char* __dec_obj36;
char* right_value2_52;
void* right_value66;
void* right_value67;
_Bool _if_conditional140;
void* right_value68;
char* __dec_obj37;
void* right_value69;
char* __dec_obj38;
void* right_value70;
void* right_value71;
void* right_value72;
void* right_value73;
void* right_value74;
char* __dec_obj39;
void* right_value75;
struct sType* result_type1_53;
void* right_value76;
struct sType* result_type2_54;
void* right_value77;
struct sType* __dec_obj40;
_Bool _if_conditional141;
void* right_value78;
char* __dec_obj41;
void* right_value79;
char* __dec_obj42;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&fun_name2_32, 0, sizeof(char*));
memset(&operator_fun_33, 0, sizeof(struct sFun*));
right_value49 = (void*)0;
memset(&none_generics_name_34, 0, sizeof(char*));
right_value50 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_39, 0, sizeof(struct sGenericsFun*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&i_43, 0, sizeof(int));
right_value55 = (void*)0;
memset(&new_fun_name_44, 0, sizeof(char*));
right_value56 = (void*)0;
memset(&result_45, 0, sizeof(_Bool));
right_value57 = (void*)0;
memset(&come_value_46, 0, sizeof(struct CVALUE*));
memset(&left_value2_47, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
memset(&middle_value2_51, 0, sizeof(char*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&right_value2_52, 0, sizeof(char*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_type1_53, 0, sizeof(struct sType*));
right_value76 = (void*)0;
memset(&result_type2_54, 0, sizeof(struct sType*));
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type_29->mNoSolvedGenericsType->v1) {
        __dec_obj29=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_33=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional95=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional95) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value49=get_none_generics_name(type->mClass->mName))));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj30=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value51=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_39=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(generics_fun_39) {
            if(_if_conditional111=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(fun_name2_32)))),generics_fun_39,obj_type_35,info),            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional111) {
                __result33__ = (_Bool)0;
                none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result33__;
            }
        }
        operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32);
        none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj31=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value54=create_method_name(type,(_Bool)0,fun_name,info))));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_43=128-1;        i_43>=1;        i_43--        ){
            new_fun_name_44=(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("%s_v%d",fun_name2_32,i_43))));
            right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_44);
            if(operator_fun_33) {
                __dec_obj32=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(new_fun_name_44))));
                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_44 = come_decrement_ref_count2(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_44 = come_decrement_ref_count2(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional132=operator_fun_33==((void*)0),        _if_conditional132) {
            operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32);
        }
    }
    result_45=(_Bool)0;
    if(operator_fun_33) {
        come_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional138=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional138) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj33=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s",left_value->c_value))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj34=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(left_value->c_value))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value63=xsprintf("\%s is assigned to",((char*)(right_value62=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional139=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)->mHeap&&middle_value->type->mHeap,        _if_conditional139) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1),middle_value->type,middle_value,info);
            __dec_obj35=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value64=xsprintf("%s",middle_value->c_value))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj36=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(middle_value->c_value))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value67=xsprintf("\%s is assigned to",((char*)(right_value66=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional140=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)->mHeap&&right_value->type->mHeap,        _if_conditional140) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2),right_value->type,right_value,info);
            __dec_obj37=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",right_value->c_value))));
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj38=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(right_value->c_value))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj39=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value70=string_to_string(fun_name2_32))),((char*)(right_value71=string_to_string(left_value2_47))),((char*)(right_value72=string_to_string(middle_value2_51))),((char*)(right_value73=string_to_string(right_value2_52)))))));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type1_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(operator_fun_33->mResultType))));
        come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=solve_generics(result_type1_53,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj40=come_value_46->type;
        come_value_46->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(result_type2_54))));
        come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_46->var=((void*)0);
        if(result_type2_54->mHeap) {
            __dec_obj41=come_value_46->c_value;
            come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value78=append_object_to_right_values(come_value_46->c_value,(struct sType*)come_increment_ref_count(result_type2_54),info))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj42=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value79=append_stackframe(come_value_46->c_value,come_value_46->type,info))));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_46->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_46));
        result_45=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_47 = come_decrement_ref_count2(left_value2_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_51 = come_decrement_ref_count2(middle_value2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_52 = come_decrement_ref_count2(right_value2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type1_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result41__ = result_45;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result10__;
void* right_value13;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value20;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional28;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional32;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value25;
char* __dec_obj13;
_Bool _if_conditional34;
void* right_value26;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional35;
void* right_value34;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* right_value35;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
void* right_value42;
struct list$1charph* __dec_obj23;
_Bool _if_conditional54;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value44;
struct sNode* __dec_obj25;
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
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value45;
struct sNode* __dec_obj26;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value46;
char* __dec_obj27;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value47;
char* __dec_obj28;
struct sType* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value20 = (void*)0;
right_value23 = (void*)0;
right_value24 = (void*)0;
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional24) {
            __dec_obj9=result_5->mMultipleTypes;
            result_5->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional28) {
            __dec_obj11=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional32) {
            __dec_obj12=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional33) {
            __dec_obj13=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value25=string_clone(self->mGenericsName))));
            __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional34) {
            __dec_obj14=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional35) {
            __dec_obj18=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0),        _if_conditional48) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional49=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional49) {
            __dec_obj19=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional50) {
            __dec_obj23=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional56=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional56) {
            __dec_obj25=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mException=self->mException;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional80=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional80) {
            __dec_obj26=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional83=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional83) {
            __dec_obj27=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional92=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional92) {
            __dec_obj28=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result27__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result27__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional11) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional13) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional19) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional20) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional21) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional22) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional7=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional7) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional14) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct list$1sTypeph* __result11__;
void* right_value14;
void* right_value15;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional4;
void* right_value19;
struct list$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_12, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
                if(_if_conditional25=self==((void*)0),                _if_conditional25) {
                    __result11__ = __result_obj__ = ((void*)0);
                    return __result11__;
                }
                result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value15=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_13=self->head;
                while(_while_condtional4=it_13!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_12,(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_clone(it_13->item)))));
                    come_call_finalizer2(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_13=it_13->next;
                }
                __result14__ = __result_obj__ = result_12;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result12__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result12__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional26;
void* right_value16;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj6;
_Bool _if_conditional27;
void* right_value17;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj7;
void* right_value18;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj8;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
right_value17 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value18 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional26=self->len==0,                        _if_conditional26) {
                            litem_14=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value16=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_14->prev=((void*)0);
                            litem_14->next=((void*)0);
                            __dec_obj6=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_14;
                            self->head=litem_14;
                        }
                        else {
                            if(_if_conditional27=self->len==1,                            _if_conditional27) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value17=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_15->prev=self->head;
                                litem_15->next=((void*)0);
                                __dec_obj7=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_15;
                                self->head->next=litem_15;
                            }
                            else {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->tail;
                                litem_16->next=((void*)0);
                                __dec_obj8=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_16;
                                self->tail=litem_16;
                            }
                        }
                        self->len++;
                        __result13__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result13__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
struct tuple1$1sTypeph* __result15__;
void* right_value21;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional31;
void* right_value22;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
right_value22 = (void*)0;
                if(_if_conditional29=self==(void*)0,                _if_conditional29) {
                    __result15__ = __result_obj__ = (void*)0;
                    return __result15__;
                }
                result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional31) {
                    __dec_obj10=result_17->v1;
                    result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result16__ = __result_obj__ = result_17;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result16__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct list$1sNodeph* __result17__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    __result17__ = __result_obj__ = ((void*)0);
                    return __result17__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_19->item)))));
                    if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result22__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result22__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result18__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result18__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value29;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional38;
void* right_value30;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value31;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj15=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj16=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj17=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result19__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result19__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional39;
struct sNode* __result20__;
void* right_value32;
struct sNode* result_23;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
struct sNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional39=self==(void*)0,                        _if_conditional39) {
                            __result20__ = __result_obj__ = (void*)0;
                            return __result20__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional40=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional40) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_23->kind=self->kind;
                        }
                        __result21__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result21__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1charph* __result23__;
void* right_value36;
void* right_value37;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    __result23__ = __result_obj__ = ((void*)0);
                    return __result23__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_25->item)))));
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result26__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result26__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result24__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result24__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value38;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional53;
void* right_value39;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value40;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional52=self->len==0,                        _if_conditional52) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj20=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional53=self->len==1,                            _if_conditional53) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj21=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj22=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result25__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result25__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
        __result28__ = self->len;
        return __result28__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sGenericsFun* __result29__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
struct sGenericsFun* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional96=self->item_existance[it_38],                _if_conditional96) {
                    if(_if_conditional97=string_equals(self->keys[it_38],key),                    _if_conditional97) {
                        __result29__ = __result_obj__ = self->items[it_38];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result29__;
                    }
                    it_38++;
                    if(_if_conditional108=it_38>=self->size,                    _if_conditional108) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional109=it_38==hash_37,                        _if_conditional109) {
                            __result30__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result30__;
                        }
                    }
                }
                else {
                    __result31__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result31__;
                }
            }
            __result32__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result32__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional98=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional98) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional99) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional100) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional101) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional104) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional105) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional106) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional107) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional8;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sFun* __result34__;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct sFun* __result35__;
struct sFun* __result36__;
struct sFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
            memset(&default_value_40,0,sizeof(struct sFun*));
            hash_41=string_get_hash_key(((char*)key))%self->size;
            it_42=hash_41;
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional112=self->item_existance[it_42],                _if_conditional112) {
                    if(_if_conditional113=string_equals(self->keys[it_42],key),                    _if_conditional113) {
                        __result34__ = __result_obj__ = self->items[it_42];
                        come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result34__;
                    }
                    it_42++;
                    if(_if_conditional129=it_42>=self->size,                    _if_conditional129) {
                        it_42=0;
                    }
                    else {
                        if(_if_conditional130=it_42==hash_41,                        _if_conditional130) {
                            __result35__ = __result_obj__ = default_value_40;
                            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result35__;
                        }
                    }
                }
                else {
                    __result36__ = __result_obj__ = default_value_40;
                    come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result36__;
                }
            }
            __result37__ = __result_obj__ = default_value_40;
            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result37__;
            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional114=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional114) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional115=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional115) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional116) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional117) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional118=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional118) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional119=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional119) {
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional123) {
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional124) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional125) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional127) {
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional128=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional128) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional121=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional121) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional122=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional122) {
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional134=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional134) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional135=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional135) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional136;
struct list_item$1sTypeph* it_48;
int i_49;
_Bool _while_condtional9;
_Bool _if_conditional137;
struct sType* __result38__;
struct sType* default_value_50;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_49, 0, sizeof(int));
memset(&default_value_50, 0, sizeof(struct sType*));
            if(_if_conditional136=position<0,            _if_conditional136) {
                position+=self->len;
            }
            it_48=self->head;
            i_49=0;
            while(_while_condtional9=it_48!=((void*)0),            _while_condtional9) {
                if(_if_conditional137=position==i_49,                _if_conditional137) {
                    __result38__ = __result_obj__ = it_48->item;
                    return __result38__;
                }
                it_48=it_48->next;
                i_49++;
            }
            memset(&default_value_50,0,sizeof(struct sType*));
            __result39__ = __result_obj__ = default_value_50;
            come_call_finalizer2(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result39__;
            come_call_finalizer2(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value80;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj43;
_Bool _if_conditional144;
void* right_value81;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj44;
void* right_value82;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj45;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value81 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value82 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional142=self->len==0,            _if_conditional142) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value80=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_55->prev=((void*)0);
                litem_55->next=((void*)0);
                __dec_obj43=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_55;
                self->head=litem_55;
            }
            else {
                if(_if_conditional144=self->len==1,                _if_conditional144) {
                    litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value81=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_56->prev=self->head;
                    litem_56->next=((void*)0);
                    __dec_obj44=litem_56->item;
                    litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_56;
                    self->head->next=litem_56;
                }
                else {
                    litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value82=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_57->prev=self->tail;
                    litem_57->next=((void*)0);
                    __dec_obj45=litem_57->item;
                    litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_57;
                    self->tail=litem_57;
                }
            }
            self->len++;
            __result40__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result40__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional143=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional143) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value83;
char* __dec_obj46;
void* right_value84;
struct sNode* __dec_obj47;
void* right_value85;
struct sNode* __dec_obj48;
void* right_value86;
char* __dec_obj49;
struct sStoreFieldNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(left))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj48=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(right))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result42__ = __result_obj__ = self;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = (_Bool)0;
    return __result43__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
void* right_value87;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value87=__builtin_string("sStoreFieldNode")));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_58;
struct sNode* right_59;
void* right_value88;
char* name_60;
_Bool _if_conditional149;
_Bool __result45__;
void* right_value89;
struct CVALUE* left_value_61;
_Bool _if_conditional150;
_Bool __result46__;
void* right_value90;
struct CVALUE* right_value_62;
struct sType* right_type_63;
struct sType* left_type_64;
void* right_value91;
struct sType* left_type2_65;
struct sClass* klass_66;
struct sType* field_type_72;
int index_73;
char* child_field_name_74;
_Bool _if_conditional161;
_Bool __result51__;
struct list$1tuple2$2charphsTypephph* o2_saved_75;
struct tuple2$2charphsTypeph* field_78;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_81;
struct sType* field_type2_82;
_Bool _if_conditional166;
void* right_value92;
struct sType* __dec_obj50;
_Bool _if_conditional167;
struct list$1tuple2$2charphsTypephph* o2_saved_83;
struct tuple2$2charphsTypeph* field_84;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_85;
struct sType* field_type2_86;
struct sClass* klass2_87;
struct list$1tuple2$2charphsTypephph* o2_saved_88;
struct tuple2$2charphsTypeph* field2_89;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_90;
struct sType* field_type3_91;
_Bool _if_conditional168;
void* right_value93;
char* __dec_obj51;
void* right_value94;
struct sType* __dec_obj52;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value95;
struct sType* __dec_obj53;
_Bool _if_conditional171;
_Bool __result60__;
void* right_value96;
struct CVALUE* come_value_92;
void* right_value97;
void* right_value98;
void* right_value99;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool __result61__;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value100;
char* c_value_93;
void* right_value101;
char* __dec_obj54;
void* right_value102;
char* c_value_94;
void* right_value103;
char* __dec_obj55;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value104;
char* c_value_95;
void* right_value105;
char* __dec_obj56;
void* right_value106;
char* c_value_96;
void* right_value107;
char* __dec_obj57;
void* right_value108;
char* __dec_obj58;
_Bool __result62__;
int right_value_id_97;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value109;
char* c_value_98;
void* right_value110;
char* __dec_obj59;
void* right_value111;
char* c_value_99;
void* right_value112;
char* __dec_obj60;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value113;
char* c_value_100;
void* right_value114;
char* __dec_obj61;
void* right_value115;
char* c_value_101;
void* right_value116;
char* __dec_obj62;
_Bool __result63__;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value117;
char* __dec_obj63;
void* right_value118;
char* __dec_obj64;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value119;
char* __dec_obj65;
void* right_value120;
char* __dec_obj66;
_Bool __result64__;
void* right_value121;
struct sType* __dec_obj67;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_58, 0, sizeof(struct sNode*));
memset(&right_59, 0, sizeof(struct sNode*));
right_value88 = (void*)0;
memset(&name_60, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&left_value_61, 0, sizeof(struct CVALUE*));
right_value90 = (void*)0;
memset(&right_value_62, 0, sizeof(struct CVALUE*));
memset(&right_type_63, 0, sizeof(struct sType*));
memset(&left_type_64, 0, sizeof(struct sType*));
right_value91 = (void*)0;
memset(&left_type2_65, 0, sizeof(struct sType*));
memset(&klass_66, 0, sizeof(struct sClass*));
memset(&field_type_72, 0, sizeof(struct sType*));
memset(&index_73, 0, sizeof(int));
memset(&child_field_name_74, 0, sizeof(char*));
memset(&o2_saved_75, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
right_value92 = (void*)0;
memset(&o2_saved_83, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_84, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_85, 0, sizeof(char*));
memset(&field_type2_86, 0, sizeof(struct sType*));
memset(&field_name_85, 0, sizeof(char*));
memset(&field_type2_86, 0, sizeof(struct sType*));
memset(&klass2_87, 0, sizeof(struct sClass*));
memset(&o2_saved_88, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_89, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_90, 0, sizeof(char*));
memset(&field_type3_91, 0, sizeof(struct sType*));
memset(&field_name2_90, 0, sizeof(char*));
memset(&field_type3_91, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&c_value_93, 0, sizeof(char*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&c_value_94, 0, sizeof(char*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&c_value_95, 0, sizeof(char*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&c_value_96, 0, sizeof(char*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&right_value_id_97, 0, sizeof(int));
right_value109 = (void*)0;
memset(&c_value_98, 0, sizeof(char*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&c_value_99, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&c_value_100, 0, sizeof(char*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&c_value_101, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
    left_58=self->mLeft;
    right_59=self->mRight;
    name_60=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(self->mName))));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional149=!node_compile(left_58,info),    _if_conditional149) {
        __result45__ = (_Bool)0;
        name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result45__;
    }
    left_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional150=!node_compile(right_59,info),    _if_conditional150) {
        __result46__ = (_Bool)0;
        name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result46__;
    }
    right_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_63=right_value_62->type;
    left_type_64=left_value_61->type;
    left_type2_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=solve_generics(left_type_64,left_type_64,info))));
    come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_66=left_type2_65->mClass;
    klass_66=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName);
    field_type_72=((void*)0);
    index_73=0;
    child_field_name_74=((void*)0);
    klass_66=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName);
    if(_if_conditional161=klass_66->mFields==((void*)0),    _if_conditional161) {
        err_msg(info,"%s fields are null",klass_66->mName);
        __result51__ = (_Bool)0;
        name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result51__;
    }
    for(    o2_saved_75=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_66->mFields)),field_78=list$1tuple2$2charphsTypephph_begin((o2_saved_75));    !list$1tuple2$2charphsTypephph_end((o2_saved_75));    field_78=list$1tuple2$2charphsTypephph_next((o2_saved_75))    ){
        multiple_assign_var1=field_78;
        field_name_81=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_82=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional166=string_operator_equals(field_name_81,name_60),        _if_conditional166) {
            __dec_obj50=field_type_72;
            field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(field_type2_82))));
            come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            field_name_81 = come_decrement_ref_count2(field_name_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_73++;
        field_name_81 = come_decrement_ref_count2(field_name_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional167=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),    _if_conditional167) {
        index_73=0;
        for(        o2_saved_83=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_66->mFields)),field_84=list$1tuple2$2charphsTypephph_begin((o2_saved_83));        !list$1tuple2$2charphsTypephph_end((o2_saved_83));        field_84=list$1tuple2$2charphsTypephph_next((o2_saved_83))        ){
            multiple_assign_var2=field_84;
            field_name_85=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_86=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_87=field_type2_86->mClass;
            for(            o2_saved_88=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_87->mFields)),field2_89=list$1tuple2$2charphsTypephph_begin((o2_saved_88));            !list$1tuple2$2charphsTypephph_end((o2_saved_88));            field2_89=list$1tuple2$2charphsTypephph_next((o2_saved_88))            ){
                multiple_assign_var3=field2_89;
                field_name2_90=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_91=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional168=string_operator_equals(field_name2_90,name_60),                _if_conditional168) {
                    __dec_obj51=child_field_name_74;
                    child_field_name_74=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(field_name_85))));
                    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj52=field_type_72;
                    field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(field_type3_91))));
                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    field_name2_90 = come_decrement_ref_count2(field_name2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_90 = come_decrement_ref_count2(field_name2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_74) {
                field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional170=string_operator_equals(field_name_85,name_60),            _if_conditional170) {
                __dec_obj53=field_type_72;
                field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(field_type2_86))));
                come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_73++;
            field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional171=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),        _if_conditional171) {
            err_msg(info,"field not found(%s) in %s(1)",name_60,klass_66->mName);
            __result60__ = (_Bool)0;
            name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result60__;
        }
    }
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 232, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    check_assign_type(((char*)(right_value98=xsprintf("\%s is assigned to",((char*)(right_value97=string_to_string(name_60)))))),field_type_72,right_type_63,right_value_62,(_Bool)0,(_Bool)1,info);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_type_63=((struct sType*)(right_value99=sType_clone(right_value_62->type)));
    come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional172=field_type_72->mHeap&&!right_value_62->type->mHeap,    _if_conditional172) {
        if(_if_conditional173=string_operator_equals(right_value_62->type->mClass->mName,"void")&&right_value_62->type->mPointerNum==1,        _if_conditional173) {
        }
        else {
            if(_if_conditional174=!right_value_62->type->mDelegate&&!right_value_62->type->mShare&&!gComeGC,            _if_conditional174) {
                err_msg(info,"require right value as heap object(%s)(1)",name_60);
                printf("right type is %s pointer num %d heap %d\n",right_value_62->type->mClass->mName,right_value_62->type->mPointerNum,right_value_62->type->mHeap);
                __result61__ = (_Bool)0;
                name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result61__;
            }
        }
    }
    if(_if_conditional175=field_type_72->mHeap&&right_type_63->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0,    _if_conditional175) {
        if(_if_conditional176=left_value_61->type->mPointerNum==1,        _if_conditional176) {
            if(child_field_name_74) {
                c_value_93=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_72,c_value_93,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj54=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_93 = come_decrement_ref_count2(c_value_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_94=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_72,c_value_94,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj55=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_94 = come_decrement_ref_count2(c_value_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional178=left_value_61->type->mPointerNum==0,            _if_conditional178) {
                if(child_field_name_74) {
                    c_value_95=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_72,c_value_95,info,(_Bool)0);
                    std_move(field_type_72,right_type_63,right_value_62,info);
                    __dec_obj56=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_95 = come_decrement_ref_count2(c_value_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_96=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_72,c_value_96,info,(_Bool)0);
                    __dec_obj57=right_value_62->c_value;
                    right_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value107=increment_ref_count_object(right_value_62->type,right_value_62->c_value,info))));
                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj58=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_96 = come_decrement_ref_count2(c_value_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                __result62__ = (_Bool)0;
                name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result62__;
            }
        }
        right_value_id_97=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_62->c_value));
        if(_if_conditional180=right_value_id_97!=-1,        _if_conditional180) {
            remove_object_from_right_values(right_value_id_97,info);
        }
    }
    else {
        if(_if_conditional181=field_type_72->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0&&string_operator_equals(right_type_63->mClass->mName,"void"),        _if_conditional181) {
            if(_if_conditional182=left_value_61->type->mPointerNum==1,            _if_conditional182) {
                if(child_field_name_74) {
                    c_value_98=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_72,c_value_98,info,(_Bool)0);
                    __dec_obj59=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_98 = come_decrement_ref_count2(c_value_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_72,c_value_99,info,(_Bool)0);
                    __dec_obj60=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_99 = come_decrement_ref_count2(c_value_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(_if_conditional184=left_value_61->type->mPointerNum==0,                _if_conditional184) {
                    if(child_field_name_74) {
                        c_value_100=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_72,c_value_100,info,(_Bool)0);
                        __dec_obj61=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_100 = come_decrement_ref_count2(c_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_101=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_72,c_value_101,info,(_Bool)0);
                        __dec_obj62=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_101 = come_decrement_ref_count2(c_value_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result63__ = (_Bool)0;
                    name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result63__;
                }
            }
        }
        else {
            if(_if_conditional186=left_value_61->type->mPointerNum==1,            _if_conditional186) {
                if(child_field_name_74) {
                    __dec_obj63=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj64=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional188=left_value_61->type->mPointerNum==0,                _if_conditional188) {
                    if(child_field_name_74) {
                        __dec_obj65=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        __dec_obj66=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result64__ = (_Bool)0;
                    name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result64__;
                }
            }
        }
    }
    __dec_obj67=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(field_type_72))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_92->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    __result65__ = (_Bool)1;
    name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result65__;
    name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_67;
unsigned int hash_68;
unsigned int it_69;
_Bool _while_condtional10;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct sClass* __result47__;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct sClass* __result48__;
struct sClass* __result49__;
struct sClass* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_67, 0, sizeof(struct sClass*));
memset(&hash_68, 0, sizeof(unsigned int));
memset(&it_69, 0, sizeof(unsigned int));
        memset(&default_value_67,0,sizeof(struct sClass*));
        hash_68=string_get_hash_key(((char*)key))%self->size;
        it_69=hash_68;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional151=self->item_existance[it_69],            _if_conditional151) {
                if(_if_conditional152=string_equals(self->keys[it_69],key),                _if_conditional152) {
                    __result47__ = __result_obj__ = self->items[it_69];
                    come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result47__;
                }
                it_69++;
                if(_if_conditional159=it_69>=self->size,                _if_conditional159) {
                    it_69=0;
                }
                else {
                    if(_if_conditional160=it_69==hash_68,                    _if_conditional160) {
                        __result48__ = __result_obj__ = default_value_67;
                        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                    }
                }
            }
            else {
                __result49__ = __result_obj__ = default_value_67;
                come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result49__;
            }
        }
        __result50__ = __result_obj__ = default_value_67;
        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result50__;
        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional153=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional153) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional154=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional154) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional158=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional158) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_70;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_70, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_71, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_70=self->head;
                                while(_while_condtional11=it_70!=((void*)0),                                _while_condtional11) {
                                    prev_it_71=it_70;
                                    it_70=it_70->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional155=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional155) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional156=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional156) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional157=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional157) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result52__;
_Bool _if_conditional163;
struct tuple2$2charphsTypeph* __result53__;
struct tuple2$2charphsTypeph* result_77;
struct tuple2$2charphsTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_77, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional162=self==((void*)0),        _if_conditional162) {
            memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
            __result52__ = __result_obj__ = result_76;
            return __result52__;
        }
        self->it=self->head;
        if(self->it) {
            __result53__ = __result_obj__ = self->it->item;
            return __result53__;
        }
        memset(&result_77,0,sizeof(struct tuple2$2charphsTypeph*));
        __result54__ = __result_obj__ = result_77;
        return __result54__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        __result55__ = self==((void*)0)||self->it==((void*)0);
        return __result55__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional164;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result56__;
_Bool _if_conditional165;
struct tuple2$2charphsTypeph* __result57__;
struct tuple2$2charphsTypeph* result_80;
struct tuple2$2charphsTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_80, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional164=self==((void*)0)||self->it==((void*)0),        _if_conditional164) {
            memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
            __result56__ = __result_obj__ = result_79;
            return __result56__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result57__ = __result_obj__ = self->it->item;
            return __result57__;
        }
        memset(&result_80,0,sizeof(struct tuple2$2charphsTypeph*));
        __result58__ = __result_obj__ = result_80;
        return __result58__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
        __result59__ = self->len;
        return __result59__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = self->sline;
    return __result66__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __dec_obj68;
void* right_value124;
struct sNode* __dec_obj69;
struct sNullCheckNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
    __result68__ = __result_obj__ = self;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result68__;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = (_Bool)0;
    return __result69__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
void* right_value125;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value125=__builtin_string("sNullCheckNode")));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_102;
_Bool _if_conditional192;
_Bool __result71__;
void* right_value126;
struct CVALUE* left_value_103;
_Bool _if_conditional193;
void* right_value127;
char* method_name_104;
_Bool _if_conditional198;
struct sType* obj_type_107;
_Bool _if_conditional199;
struct sType* obj_type2_108;
void* right_value128;
void* right_value129;
char* __dec_obj70;
struct sFun* fun_109;
_Bool _if_conditional200;
_Bool __result76__;
void* right_value130;
struct sType* type_110;
void* right_value131;
struct CVALUE* come_value_111;
void* right_value132;
char* __dec_obj71;
void* right_value133;
struct sType* __dec_obj72;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value134;
struct CVALUE* come_value_112;
void* right_value135;
void* right_value136;
char* __dec_obj73;
void* right_value137;
struct sType* __dec_obj74;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_102, 0, sizeof(struct sNode*));
right_value126 = (void*)0;
memset(&left_value_103, 0, sizeof(struct CVALUE*));
right_value127 = (void*)0;
memset(&method_name_104, 0, sizeof(char*));
memset(&obj_type_107, 0, sizeof(struct sType*));
memset(&obj_type2_108, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&fun_109, 0, sizeof(struct sFun*));
right_value130 = (void*)0;
memset(&type_110, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    left_102=self->mLeft;
    if(_if_conditional192=!node_compile(left_102,info),    _if_conditional192) {
        __result71__ = (_Bool)0;
        return __result71__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value126=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional193=!self->mOnlyNullCecker&&left_value_103->type->mNoSolvedGenericsType&&left_value_103->type->mNoSolvedGenericsType->v1&&left_value_103->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_103->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional193) {
        method_name_104=(char*)come_increment_ref_count(((char*)(right_value127=create_method_name(left_value_103->type,(_Bool)0,"expect",info))));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional198=map$2charphsFunph_at(info->funcs,method_name_104,((void*)0))==((void*)0),        _if_conditional198) {
            obj_type_107=left_value_103->type->mNoSolvedGenericsType->v1;
            if(_if_conditional199=list$1sTypeph_length(obj_type_107->mGenericsTypes)>0,            _if_conditional199) {
                obj_type2_108=left_value_103->type;
                __dec_obj70=method_name_104;
                method_name_104=(char*)come_increment_ref_count(((char*)(right_value129=make_generics_function(obj_type2_108,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string("expect")))),info))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_103->type->mClass->mName);
                exit(1);
            }
        }
        fun_109=map$2charphsFunphp_operator_load_element(info->funcs,method_name_104);
        if(_if_conditional200=fun_109==((void*)0),        _if_conditional200) {
            err_msg(info,"function not found(%s)",method_name_104);
            __result76__ = (_Bool)1;
            method_name_104 = come_decrement_ref_count2(method_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result76__;
        }
        type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=solve_generics(fun_109->mResultType,left_value_103->type,info))));
        come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 430, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_111->c_value;
        come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s(%s)",method_name_104,left_value_103->c_value))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_111->type;
        come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type_110))));
        come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_111->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        add_come_last_code(info,"%s;\n",come_value_111->c_value);
        method_name_104 = come_decrement_ref_count2(method_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional201=!gComeDebug,        _if_conditional201) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
        }
        else {
            if(_if_conditional202=left_value_103->type->mPointerNum>0,            _if_conditional202) {
                come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 444, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj73=come_value_112->c_value;
                come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value135=make_type_name_string(left_value_103->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_103->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj74=come_value_112->type;
                come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(left_value_103->type))));
                come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_112->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
                add_come_last_code(info,"%s;\n",come_value_112->c_value);
                come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
            }
        }
    }
    __result77__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional12;
_Bool _if_conditional194;
_Bool _if_conditional195;
struct sFun* __result72__;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sFun* __result73__;
struct sFun* __result74__;
struct sFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
            hash_105=string_get_hash_key(((char*)key))%self->size;
            it_106=hash_105;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional194=self->item_existance[it_106],                _if_conditional194) {
                    if(_if_conditional195=string_equals(self->keys[it_106],key),                    _if_conditional195) {
                        __result72__ = __result_obj__ = self->items[it_106];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_106++;
                    if(_if_conditional196=it_106>=self->size,                    _if_conditional196) {
                        it_106=0;
                    }
                    else {
                        if(_if_conditional197=it_106==hash_105,                        _if_conditional197) {
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self->sline;
    return __result78__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value138=__builtin_string(self->sname)));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value139;
char* __dec_obj75;
void* right_value140;
struct sNode* __dec_obj76;
void* right_value141;
struct sNode* __dec_obj77;
void* right_value142;
struct sNode* __dec_obj78;
struct sRangeCheckNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=sNode_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj77=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(begin))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj78=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(end))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result80__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = (_Bool)0;
    return __result81__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value143;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sRangeCheckNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_113;
_Bool _if_conditional207;
_Bool __result83__;
void* right_value144;
struct CVALUE* left_value_114;
struct sNode* begin_115;
_Bool _if_conditional208;
_Bool __result84__;
void* right_value145;
struct CVALUE* begin_value_116;
struct sNode* end_117;
_Bool _if_conditional209;
_Bool __result85__;
void* right_value146;
struct CVALUE* end_value_118;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value147;
struct CVALUE* come_value_119;
void* right_value148;
void* right_value149;
char* __dec_obj79;
void* right_value150;
struct sType* __dec_obj80;
void* right_value151;
struct CVALUE* come_value_120;
void* right_value152;
void* right_value153;
char* __dec_obj81;
void* right_value154;
struct sType* __dec_obj82;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_113, 0, sizeof(struct sNode*));
right_value144 = (void*)0;
memset(&left_value_114, 0, sizeof(struct CVALUE*));
memset(&begin_115, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
memset(&begin_value_116, 0, sizeof(struct CVALUE*));
memset(&end_117, 0, sizeof(struct sNode*));
right_value146 = (void*)0;
memset(&end_value_118, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
memset(&come_value_119, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    left_113=self->mLeft;
    if(_if_conditional207=!node_compile(left_113,info),    _if_conditional207) {
        __result83__ = (_Bool)0;
        return __result83__;
    }
    left_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    begin_115=self->mBegin;
    if(_if_conditional208=!node_compile(begin_115,info),    _if_conditional208) {
        __result84__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    begin_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    end_117=self->mEnd;
    if(_if_conditional209=!node_compile(end_117,info),    _if_conditional209) {
        __result85__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result85__;
    }
    end_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional210=left_value_114->type->mPointerNum>0,    _if_conditional210) {
        if(_if_conditional211=!gComeDebug,        _if_conditional211) {
            come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 534, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj79=come_value_119->c_value;
            come_value_119->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("(*((%s)%s))",((char*)(right_value148=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value))));
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_114->type->mPointerNum--;
            __dec_obj80=come_value_119->type;
            come_value_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_value_114->type))));
            come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_119->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
            add_come_last_code(info,"%s;\n",come_value_119->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 547, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj81=come_value_120->c_value;
            come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value152=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value,begin_value_116->c_value,end_value_118->c_value,info->sname,info->sline))));
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_114->type->mPointerNum--;
            __dec_obj82=come_value_120->type;
            come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_value_114->type))));
            come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_120->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
            add_come_last_code(info,"%s;\n",come_value_120->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_114));
    }
    __result86__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = self->sline;
    return __result87__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value156;
void* right_value157;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value163;
struct sNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value163 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 578, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value157=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value156=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 578, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result91__ = __result_obj__ = ((struct sNode*)(right_value163=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result91__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __dec_obj87;
void* right_value165;
struct sNode* __dec_obj88;
void* right_value166;
char* __dec_obj89;
struct sLoadFieldNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj89=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(name))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result92__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value167;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sLoadFieldNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_122;
void* right_value168;
char* name_123;
_Bool _if_conditional225;
_Bool __result95__;
void* right_value169;
struct CVALUE* left_value_124;
struct sType* left_type_125;
void* right_value170;
struct sType* left_type2_126;
struct sClass* klass_127;
struct sType* field_type_128;
int index_129;
char* child_field_name_130;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* field_132;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_133;
struct sType* field_type2_134;
_Bool _if_conditional226;
void* right_value171;
struct sType* __dec_obj90;
_Bool _if_conditional227;
struct list$1tuple2$2charphsTypephph* o2_saved_135;
struct tuple2$2charphsTypeph* field_136;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_137;
struct sType* field_type2_138;
struct sClass* klass2_139;
struct list$1tuple2$2charphsTypephph* o2_saved_140;
struct tuple2$2charphsTypeph* field2_141;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_142;
struct sType* field_type3_143;
_Bool _if_conditional228;
void* right_value172;
char* __dec_obj91;
void* right_value173;
struct sType* __dec_obj92;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value174;
struct sType* __dec_obj93;
_Bool _if_conditional231;
_Bool __result96__;
void* right_value175;
struct CVALUE* come_value_144;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value176;
char* __dec_obj94;
void* right_value177;
char* __dec_obj95;
_Bool _if_conditional234;
void* right_value178;
char* __dec_obj96;
void* right_value179;
char* __dec_obj97;
void* right_value180;
struct sType* __dec_obj98;
_Bool _if_conditional235;
_Bool __result97__;
_Bool _if_conditional236;
void* right_value181;
struct sType* __dec_obj99;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_122, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
memset(&name_123, 0, sizeof(char*));
right_value169 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&left_type_125, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&left_type2_126, 0, sizeof(struct sType*));
memset(&klass_127, 0, sizeof(struct sClass*));
memset(&field_type_128, 0, sizeof(struct sType*));
memset(&index_129, 0, sizeof(int));
memset(&child_field_name_130, 0, sizeof(char*));
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
right_value171 = (void*)0;
memset(&o2_saved_135, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_136, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&klass2_139, 0, sizeof(struct sClass*));
memset(&o2_saved_140, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_141, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_142, 0, sizeof(char*));
memset(&field_type3_143, 0, sizeof(struct sType*));
memset(&field_name2_142, 0, sizeof(char*));
memset(&field_type3_143, 0, sizeof(struct sType*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
    left_122=self->mLeft;
    name_123=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(self->mName))));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional225=!node_compile(left_122,info),    _if_conditional225) {
        __result95__ = (_Bool)0;
        name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result95__;
    }
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_125=left_value_124->type;
    left_type2_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=solve_generics(left_type_125,left_type_125,info))));
    come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_127=left_type2_126->mClass;
    klass_127=map$2charphsClassphp_operator_load_element(info->classes,klass_127->mName);
    field_type_128=((void*)0);
    index_129=0;
    child_field_name_130=((void*)0);
    klass_127=map$2charphsClassphp_operator_load_element(info->classes,klass_127->mName);
    for(    o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_127->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131));    !list$1tuple2$2charphsTypephph_end((o2_saved_131));    field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131))    ){
        multiple_assign_var4=field_132;
        field_name_133=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional226=string_operator_equals(field_name_133,name_123),        _if_conditional226) {
            __dec_obj90=field_type_128;
            field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(field_type2_134))));
            come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_129++;
        field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional227=index_129==list$1tuple2$2charphsTypephph_length(klass_127->mFields),    _if_conditional227) {
        index_129=0;
        for(        o2_saved_135=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_127->mFields)),field_136=list$1tuple2$2charphsTypephph_begin((o2_saved_135));        !list$1tuple2$2charphsTypephph_end((o2_saved_135));        field_136=list$1tuple2$2charphsTypephph_next((o2_saved_135))        ){
            multiple_assign_var5=field_136;
            field_name_137=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_138=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_139=field_type2_138->mClass;
            for(            o2_saved_140=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_139->mFields)),field2_141=list$1tuple2$2charphsTypephph_begin((o2_saved_140));            !list$1tuple2$2charphsTypephph_end((o2_saved_140));            field2_141=list$1tuple2$2charphsTypephph_next((o2_saved_140))            ){
                multiple_assign_var6=field2_141;
                field_name2_142=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_143=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional228=string_operator_equals(field_name2_142,name_123),                _if_conditional228) {
                    __dec_obj91=child_field_name_130;
                    child_field_name_130=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(field_name_137))));
                    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj92=field_type_128;
                    field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(field_type3_143))));
                    come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    field_name2_142 = come_decrement_ref_count2(field_name2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_142 = come_decrement_ref_count2(field_name2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_130) {
                field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional230=string_operator_equals(field_name_137,name_123),            _if_conditional230) {
                __dec_obj93=field_type_128;
                field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(field_type2_138))));
                come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_129++;
            field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional231=index_129==list$1tuple2$2charphsTypephph_length(klass_127->mFields),        _if_conditional231) {
            err_msg(info,"field not found(%s) in %s(2)",name_123,klass_127->mName);
            __result96__ = (_Bool)0;
            name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result96__;
        }
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 680, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional232=left_value_124->type->mPointerNum>0,    _if_conditional232) {
        if(child_field_name_130) {
            __dec_obj94=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s->%s.%s",left_value_124->c_value,child_field_name_130,name_123))));
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj95=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s->%s",left_value_124->c_value,name_123))));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        if(child_field_name_130) {
            __dec_obj96=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s.%s",left_value_124->c_value,child_field_name_130,name_123))));
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj97=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s.%s",left_value_124->c_value,name_123))));
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __dec_obj98=come_value_144->type;
    come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(field_type_128))));
    come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_144->var=((void*)0);
    if(_if_conditional235=field_type_128==((void*)0),    _if_conditional235) {
        err_msg(info,"no field(%s)\n",name_123);
        __result97__ = (_Bool)0;
        name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    if(_if_conditional236=list$1sNodeph_length(come_value_144->type->mArrayNum)==1,    _if_conditional236) {
        __dec_obj99=come_value_144->type->mOriginalLoadVarType->v1;
        come_value_144->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(come_value_144->type))));
        come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_144->type->mArrayNum);
        come_value_144->type->mPointerNum++;
        come_value_144->type->mOriginalTypeNamePointerNum=come_value_144->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
    __result100__ = (_Bool)1;
    name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result100__;
    name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        __result98__ = self->len;
        return __result98__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_145;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_146;
struct list$1sNodeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_146, 0, sizeof(struct list_item$1sNodeph*));
            it_145=self->head;
            while(_while_condtional13=it_145!=((void*)0),            _while_condtional13) {
                prev_it_146=it_145;
                it_145=it_145->next;
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result99__ = __result_obj__ = self;
            return __result99__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self->sline;
    return __result101__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value182;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self->sname)));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* __dec_obj100;
void* right_value184;
struct sNode* __dec_obj101;
void* right_value185;
struct sNode* __dec_obj102;
void* right_value186;
struct list$1sNodeph* __dec_obj103;
struct sStoreArrayNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
    self->sline=info->sline;
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(info->sname))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj101=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value184=sNode_clone(left))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj102=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(right))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj103=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value186=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result103__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = (_Bool)0;
    return __result104__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value187;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sStoreArrayNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_147;
struct sNode* right_148;
struct list$1sNodeph* array_num_nodes_149;
_Bool _if_conditional241;
_Bool __result106__;
void* right_value188;
struct CVALUE* left_value_150;
struct sType* left_type_151;
void* right_value189;
void* right_value190;
struct list$1CVALUEph* array_num_154;
struct list$1sNodeph* o2_saved_155;
struct sNode* it_158;
_Bool _if_conditional246;
_Bool __result115__;
void* right_value191;
struct CVALUE* c_value_161;
_Bool _if_conditional247;
_Bool __result116__;
void* right_value192;
struct CVALUE* right_value_162;
struct sType* right_type_163;
struct sClass* klass_164;
void* right_value193;
struct sType* type_165;
char* fun_name_166;
_Bool calling_fun_167;
_Bool _if_conditional248;
_Bool _if_conditional251;
void* right_value194;
struct CVALUE* come_value_171;
_Bool _if_conditional252;
int i_172;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value195;
void* right_value196;
struct buffer* buf_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_189;
void* right_value197;
void* right_value198;
char* left_value_code_192;
void* right_value199;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value200;
char* __dec_obj104;
_Bool _if_conditional279;
void* right_value201;
char* __dec_obj105;
_Bool __result129__;
int right_value_id_193;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value202;
char* __dec_obj106;
_Bool _if_conditional282;
void* right_value203;
char* __dec_obj107;
_Bool __result130__;
void* right_value204;
struct sType* result_type_194;
void* right_value205;
void* right_value206;
struct list$1sNodeph* __dec_obj108;
struct sType* __dec_obj109;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_147, 0, sizeof(struct sNode*));
memset(&right_148, 0, sizeof(struct sNode*));
memset(&array_num_nodes_149, 0, sizeof(struct list$1sNodeph*));
right_value188 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&left_type_151, 0, sizeof(struct sType*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&array_num_154, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_155, 0, sizeof(struct list$1sNodeph*));
memset(&it_158, 0, sizeof(struct sNode*));
right_value191 = (void*)0;
memset(&c_value_161, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
memset(&right_value_162, 0, sizeof(struct CVALUE*));
memset(&right_type_163, 0, sizeof(struct sType*));
memset(&klass_164, 0, sizeof(struct sClass*));
right_value193 = (void*)0;
memset(&type_165, 0, sizeof(struct sType*));
memset(&fun_name_166, 0, sizeof(char*));
memset(&calling_fun_167, 0, sizeof(_Bool));
right_value194 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
memset(&i_172, 0, sizeof(int));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&buf_185, 0, sizeof(struct buffer*));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_189, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&left_value_code_192, 0, sizeof(char*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&right_value_id_193, 0, sizeof(int));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&result_type_194, 0, sizeof(struct sType*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    left_147=self->mLeft;
    right_148=self->mRight;
    array_num_nodes_149=self->mArrayNum;
    if(_if_conditional241=!node_compile(left_147,info),    _if_conditional241) {
        __result106__ = (_Bool)0;
        return __result106__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_151=left_value_150->type;
    array_num_154=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value190=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value189=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 778, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_155=(array_num_nodes_149),it_158=list$1sNodeph_begin((o2_saved_155));    !list$1sNodeph_end((o2_saved_155));    it_158=list$1sNodeph_next((o2_saved_155))    ){
        if(_if_conditional246=!node_compile(it_158,info),        _if_conditional246) {
            __result115__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
        c_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_154,(struct CVALUE*)come_increment_ref_count(c_value_161));
        come_call_finalizer2(CVALUE_finalize,c_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional247=!node_compile(right_148,info),    _if_conditional247) {
        __result116__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result116__;
    }
    right_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_163=right_value_162->type;
    klass_164=left_value_150->type->mClass;
    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_value_150->type))));
    come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_166="operator_store_element";
    if(self->mQuote) {
        calling_fun_167=(_Bool)0;
    }
    else {
        calling_fun_167=operator_overload_fun2(type_165,fun_name_166,left_value_150,list$1CVALUEphp_operator_load_element(array_num_154,0),right_value_162,info);
    }
    if(_if_conditional251=!calling_fun_167,    _if_conditional251) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 814, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional252=list$1sNodeph_length(left_type_151->mArrayNum)>0,        _if_conditional252) {
            for(            i_172=0;            i_172<list$1CVALUEph_length(array_num_154);            i_172++            ){
                list$1sNodeph_delete(left_type_151->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional271=left_type_151->mPointerNum>0,            _if_conditional271) {
                left_type_151->mPointerNum-=list$1CVALUEph_length(array_num_154);
                if(_if_conditional272=left_type_151->mPointerNum<0,                _if_conditional272) {
                    left_type_151->mPointerNum=0;
                }
            }
        }
        buf_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value196=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value195=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 835, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_185,left_value_150->c_value);
        for(        o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((array_num_154)),it_189=list$1CVALUEph_begin((o2_saved_186));        !list$1CVALUEph_end((o2_saved_186));        it_189=list$1CVALUEph_next((o2_saved_186))        ){
            buffer_append_str(buf_185,((char*)(right_value197=xsprintf("[%s]",it_189->c_value))));
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_192=(char*)come_increment_ref_count(((char*)(right_value198=buffer_to_string(buf_185))));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value199=xsprintf("array is assinged to"))),left_type_151,right_type_163,right_value_162,(_Bool)0,(_Bool)1,info);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional277=left_type_151->mHeap&&right_type_163->mHeap&&left_type_151->mPointerNum>0&&right_type_163->mPointerNum>0,        _if_conditional277) {
            if(_if_conditional278=left_value_150->type->mPointerNum>=1,            _if_conditional278) {
                decrement_ref_count_object(left_type_151,left_value_code_192,info,(_Bool)0);
                std_move(left_type_151,right_type_163,right_value_162,info);
                __dec_obj104=come_value_171->c_value;
                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional279=left_value_150->type->mPointerNum==0,                _if_conditional279) {
                    decrement_ref_count_object(left_type_151,left_value_code_192,info,(_Bool)0);
                    std_move(left_type_151,right_type_163,right_value_162,info);
                    __dec_obj105=come_value_171->c_value;
                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_192,left_value_150->type->mPointerNum);
                    __result129__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result129__;
                }
            }
            right_value_id_193=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_162->c_value));
            if(_if_conditional280=right_value_id_193!=-1,            _if_conditional280) {
                remove_object_from_right_values(right_value_id_193,info);
            }
        }
        else {
            if(_if_conditional281=left_value_150->type->mPointerNum>=1,            _if_conditional281) {
                __dec_obj106=come_value_171->c_value;
                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional282=left_value_150->type->mPointerNum==0,                _if_conditional282) {
                    __dec_obj107=come_value_171->c_value;
                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_192,left_value_150->type->mPointerNum);
                    __result130__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result130__;
                }
            }
        }
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(left_type_151))));
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj108=result_type_194->mArrayNum;
        result_type_194->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value206=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value205=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 881, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj109=come_value_171->type;
        come_value_171->type=(struct sType*)come_increment_ref_count(result_type_194);
        come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_value_171->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
        add_come_last_code(info,"%s;\n",come_value_171->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result131__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result131__;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result107__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result107__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_152;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_152, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1CVALUEph*));
            it_152=self->head;
            while(_while_condtional14=it_152!=((void*)0),            _while_condtional14) {
                prev_it_153=it_152;
                it_152=it_152->next;
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional242;
struct sNode* result_156;
struct sNode* __result108__;
_Bool _if_conditional243;
struct sNode* __result109__;
struct sNode* result_157;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct sNode*));
memset(&result_157, 0, sizeof(struct sNode*));
        if(_if_conditional242=self==((void*)0),        _if_conditional242) {
            memset(&result_156,0,sizeof(struct sNode*));
            __result108__ = __result_obj__ = result_156;
            return __result108__;
        }
        self->it=self->head;
        if(self->it) {
            __result109__ = __result_obj__ = self->it->item;
            return __result109__;
        }
        memset(&result_157,0,sizeof(struct sNode*));
        __result110__ = __result_obj__ = result_157;
        return __result110__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
        __result111__ = self==((void*)0)||self->it==((void*)0);
        return __result111__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional244;
struct sNode* result_159;
struct sNode* __result112__;
_Bool _if_conditional245;
struct sNode* __result113__;
struct sNode* result_160;
struct sNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct sNode*));
memset(&result_160, 0, sizeof(struct sNode*));
        if(_if_conditional244=self==((void*)0)||self->it==((void*)0),        _if_conditional244) {
            memset(&result_159,0,sizeof(struct sNode*));
            __result112__ = __result_obj__ = result_159;
            return __result112__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result113__ = __result_obj__ = self->it->item;
            return __result113__;
        }
        memset(&result_160,0,sizeof(struct sNode*));
        __result114__ = __result_obj__ = result_160;
        return __result114__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional249;
struct list_item$1CVALUEph* it_168;
int i_169;
_Bool _while_condtional15;
_Bool _if_conditional250;
struct CVALUE* __result117__;
struct CVALUE* default_value_170;
struct CVALUE* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_169, 0, sizeof(int));
memset(&default_value_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional249=position<0,            _if_conditional249) {
                position+=self->len;
            }
            it_168=self->head;
            i_169=0;
            while(_while_condtional15=it_168!=((void*)0),            _while_condtional15) {
                if(_if_conditional250=position==i_169,                _if_conditional250) {
                    __result117__ = __result_obj__ = it_168->item;
                    return __result117__;
                }
                it_168=it_168->next;
                i_169++;
            }
            memset(&default_value_170,0,sizeof(struct CVALUE*));
            __result118__ = __result_obj__ = default_value_170;
            come_call_finalizer2(CVALUE_finalize,default_value_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer2(CVALUE_finalize,default_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
                __result119__ = self->len;
                return __result119__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
int tmp_173;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct list$1sNodeph* __result120__;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list_item$1sNodeph* it_174;
int i_175;
_Bool _while_condtional16;
_Bool _if_conditional261;
struct list_item$1sNodeph* prev_it_176;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct list_item$1sNodeph* it_177;
int i_178;
_Bool _while_condtional17;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct list_item$1sNodeph* prev_it_179;
struct list_item$1sNodeph* it_180;
struct list_item$1sNodeph* head_prev_it_181;
struct list_item$1sNodeph* tail_it_182;
int i_183;
_Bool _while_condtional18;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct list$1sNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_173, 0, sizeof(int));
memset(&it_174, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_177, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_178, 0, sizeof(int));
memset(&prev_it_179, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_180, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_181, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional253=head<0,                    _if_conditional253) {
                        head+=self->len;
                    }
                    if(_if_conditional254=tail<0,                    _if_conditional254) {
                        tail+=self->len+1;
                    }
                    if(_if_conditional255=head>tail,                    _if_conditional255) {
                        tmp_173=tail;
                        tail=head;
                        head=tmp_173;
                    }
                    if(_if_conditional256=head<0,                    _if_conditional256) {
                        head=0;
                    }
                    if(_if_conditional257=tail>self->len,                    _if_conditional257) {
                        tail=self->len;
                    }
                    if(_if_conditional258=head==tail,                    _if_conditional258) {
                        __result120__ = __result_obj__ = self;
                        return __result120__;
                    }
                    if(_if_conditional259=head==0&&tail==self->len,                    _if_conditional259) {
                        list$1sNodeph_reset(self);
                    }
                    else {
                        if(_if_conditional260=head==0,                        _if_conditional260) {
                            it_174=self->head;
                            i_175=0;
                            while(_while_condtional16=it_174!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional261=i_175<tail,                                _if_conditional261) {
                                    prev_it_176=it_174;
                                    it_174=it_174->next;
                                    i_175++;
                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->len--;
                                }
                                else {
                                    if(_if_conditional262=i_175==tail,                                    _if_conditional262) {
                                        self->head=it_174;
                                        self->head->prev=((void*)0);
                                        break;
                                    }
                                    else {
                                        it_174=it_174->next;
                                        i_175++;
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional263=tail==self->len,                            _if_conditional263) {
                                it_177=self->head;
                                i_178=0;
                                while(_while_condtional17=it_177!=((void*)0),                                _while_condtional17) {
                                    if(_if_conditional264=i_178==head,                                    _if_conditional264) {
                                        self->tail=it_177->prev;
                                        self->tail->next=((void*)0);
                                    }
                                    if(_if_conditional265=i_178>=head,                                    _if_conditional265) {
                                        prev_it_179=it_177;
                                        it_177=it_177->next;
                                        i_178++;
                                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->len--;
                                    }
                                    else {
                                        it_177=it_177->next;
                                        i_178++;
                                    }
                                }
                            }
                            else {
                                it_180=self->head;
                                head_prev_it_181=((void*)0);
                                tail_it_182=((void*)0);
                                i_183=0;
                                while(_while_condtional18=it_180!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional266=i_183==head,                                    _if_conditional266) {
                                        head_prev_it_181=it_180->prev;
                                    }
                                    if(_if_conditional267=i_183==tail,                                    _if_conditional267) {
                                        tail_it_182=it_180;
                                    }
                                    if(_if_conditional268=i_183>=head&&i_183<tail,                                    _if_conditional268) {
                                        prev_it_184=it_180;
                                        it_180=it_180->next;
                                        i_183++;
                                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->len--;
                                    }
                                    else {
                                        it_180=it_180->next;
                                        i_183++;
                                    }
                                }
                                if(_if_conditional269=head_prev_it_181!=((void*)0),                                _if_conditional269) {
                                    head_prev_it_181->next=tail_it_182;
                                }
                                if(_if_conditional270=tail_it_182!=((void*)0),                                _if_conditional270) {
                                    tail_it_182->prev=head_prev_it_181;
                                }
                            }
                        }
                    }
                    __result121__ = __result_obj__ = self;
                    return __result121__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct CVALUE* result_187;
struct CVALUE* __result122__;
_Bool _if_conditional274;
struct CVALUE* __result123__;
struct CVALUE* result_188;
struct CVALUE* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_187, 0, sizeof(struct CVALUE*));
memset(&result_188, 0, sizeof(struct CVALUE*));
            if(_if_conditional273=self==((void*)0),            _if_conditional273) {
                memset(&result_187,0,sizeof(struct CVALUE*));
                __result122__ = __result_obj__ = result_187;
                return __result122__;
            }
            self->it=self->head;
            if(self->it) {
                __result123__ = __result_obj__ = self->it->item;
                return __result123__;
            }
            memset(&result_188,0,sizeof(struct CVALUE*));
            __result124__ = __result_obj__ = result_188;
            return __result124__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
            __result125__ = self==((void*)0)||self->it==((void*)0);
            return __result125__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional275;
struct CVALUE* result_190;
struct CVALUE* __result126__;
_Bool _if_conditional276;
struct CVALUE* __result127__;
struct CVALUE* result_191;
struct CVALUE* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct CVALUE*));
memset(&result_191, 0, sizeof(struct CVALUE*));
            if(_if_conditional275=self==((void*)0)||self->it==((void*)0),            _if_conditional275) {
                memset(&result_190,0,sizeof(struct CVALUE*));
                __result126__ = __result_obj__ = result_190;
                return __result126__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result127__ = __result_obj__ = self->it->item;
                return __result127__;
            }
            memset(&result_191,0,sizeof(struct CVALUE*));
            __result128__ = __result_obj__ = result_191;
            return __result128__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = self->sline;
    return __result132__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result133__ = __result_obj__ = ((char*)(right_value207=__builtin_string(self->sname)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value208;
char* __dec_obj110;
void* right_value209;
struct list$1sNodeph* __dec_obj111;
void* right_value210;
struct sNode* __dec_obj112;
struct sLoadArrayNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
    self->sline=info->sline;
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(info->sname))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj111=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value209=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNode_clone(left))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result134__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result134__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = (_Bool)0;
    return __result135__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value211;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
    __result136__ = __result_obj__ = ((char*)(right_value211=__builtin_string("sLoadArrayNode")));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_195;
struct list$1sNodeph* array_num_nodes_196;
_Bool _if_conditional286;
_Bool __result137__;
void* right_value212;
struct CVALUE* left_value_197;
void* right_value213;
struct sType* left_type_198;
void* right_value214;
void* right_value215;
struct list$1CVALUEph* array_num_199;
struct list$1sNodeph* o2_saved_200;
struct sNode* it_201;
_Bool _if_conditional287;
_Bool __result138__;
void* right_value216;
struct CVALUE* c_value_202;
void* right_value217;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct sType* var_type_206;
_Bool _if_conditional290;
void* right_value218;
struct sType* result_type_207;
_Bool _if_conditional291;
struct sType* __dec_obj113;
_Bool _if_conditional292;
int n_208;
_Bool _if_conditional293;
void* right_value219;
struct sType* __dec_obj114;
_Bool _if_conditional294;
void* right_value220;
struct sType* __dec_obj115;
_Bool _if_conditional295;
int i_209;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value221;
struct CVALUE* come_value_210;
void* right_value222;
void* right_value223;
struct buffer* buf_211;
void* right_value224;
struct sType* result_type2_212;
void* right_value225;
void* right_value226;
struct list$1CVALUEph* o2_saved_213;
struct CVALUE* it_214;
void* right_value227;
void* right_value228;
int i_215;
struct list$1sNodeph* o2_saved_216;
struct sNode* it_217;
_Bool _if_conditional300;
void* right_value229;
struct CVALUE* come_value_218;
void* right_value230;
_Bool _if_conditional301;
void* right_value231;
void* right_value232;
char* left_value_code_219;
void* right_value233;
char* __dec_obj116;
void* right_value234;
struct sType* __dec_obj117;
void* right_value235;
struct CVALUE* come_value_220;
void* right_value236;
void* right_value237;
struct buffer* buf_221;
struct list$1CVALUEph* o2_saved_222;
struct CVALUE* it_223;
void* right_value238;
void* right_value239;
char* left_value_code_224;
void* right_value240;
char* __dec_obj118;
void* right_value241;
struct sType* result_type_225;
_Bool _if_conditional302;
struct sType* __dec_obj119;
_Bool _if_conditional303;
int n_226;
_Bool _if_conditional304;
void* right_value242;
struct sType* __dec_obj120;
_Bool _if_conditional305;
void* right_value243;
struct sType* __dec_obj121;
_Bool _if_conditional306;
int i_227;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value244;
struct sType* __dec_obj122;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_195, 0, sizeof(struct sNode*));
memset(&array_num_nodes_196, 0, sizeof(struct list$1sNodeph*));
right_value212 = (void*)0;
memset(&left_value_197, 0, sizeof(struct CVALUE*));
right_value213 = (void*)0;
memset(&left_type_198, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&array_num_199, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_200, 0, sizeof(struct list$1sNodeph*));
memset(&it_201, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&c_value_202, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
memset(&var_type_206, 0, sizeof(struct sType*));
right_value218 = (void*)0;
memset(&result_type_207, 0, sizeof(struct sType*));
memset(&n_208, 0, sizeof(int));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&i_209, 0, sizeof(int));
right_value221 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&buf_211, 0, sizeof(struct buffer*));
right_value224 = (void*)0;
memset(&result_type2_212, 0, sizeof(struct sType*));
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&o2_saved_213, 0, sizeof(struct list$1CVALUEph*));
memset(&it_214, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&i_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1sNodeph*));
memset(&it_217, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&come_value_218, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&left_value_code_219, 0, sizeof(char*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&buf_221, 0, sizeof(struct buffer*));
memset(&o2_saved_222, 0, sizeof(struct list$1CVALUEph*));
memset(&it_223, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&left_value_code_224, 0, sizeof(char*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&result_type_225, 0, sizeof(struct sType*));
memset(&n_226, 0, sizeof(int));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&i_227, 0, sizeof(int));
right_value244 = (void*)0;
    left_195=self->mLeft;
    array_num_nodes_196=self->mArrayNum;
    if(_if_conditional286=!node_compile(left_195,info),    _if_conditional286) {
        __result137__ = (_Bool)0;
        return __result137__;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(left_value_197->type))));
    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value215=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value214=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 950, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_200=(array_num_nodes_196),it_201=list$1sNodeph_begin((o2_saved_200));    !list$1sNodeph_end((o2_saved_200));    it_201=list$1sNodeph_next((o2_saved_200))    ){
        if(_if_conditional287=!node_compile(it_201,info),        _if_conditional287) {
            __result138__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result138__;
        }
        c_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_199,(struct CVALUE*)come_increment_ref_count(c_value_202));
        come_call_finalizer2(CVALUE_finalize,c_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(left_value_197->type))));
    come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_204="operator_load_element";
    if(self->mQuote) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_197,list$1CVALUEphp_operator_load_element(array_num_199,0),info);
    }
    if(_if_conditional289=!calling_fun_205,    _if_conditional289) {
        var_type_206=left_value_197->var->mType;
        if(_if_conditional290=list$1sNodeph_length(var_type_206->mArrayNum)>0,        _if_conditional290) {
            result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(left_type_198))));
            come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(result_type_207->mOriginalLoadVarType->v1) {
                __dec_obj113=result_type_207;
                result_type_207=(struct sType*)come_increment_ref_count(result_type_207->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional292=list$1sNodeph_length(result_type_207->mArrayNum)>0,            _if_conditional292) {
                n_208=list$1sNodeph_length(result_type_207->mArrayNum)-list$1CVALUEph_length(array_num_199);
                if(_if_conditional293=n_208==0,                _if_conditional293) {
                    __dec_obj114=result_type_207;
                    result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(left_type_198))));
                    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(left_type_198->mOriginalLoadVarType->v1) {
                        __dec_obj115=result_type_207;
                        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_type_198->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_207->mArrayNum);
                }
                else {
                    if(_if_conditional295=n_208>0,                    _if_conditional295) {
                        for(                        i_209=0;                        i_209<n_208;                        i_209++                        ){
                            list$1sNodeph_delete(result_type_207->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional296=n_208<0,                        _if_conditional296) {
                            list$1sNodeph_reset(result_type_207->mArrayNum);
                            result_type_207->mPointerNum+=n_208;
                            if(_if_conditional297=result_type_207->mPointerNum<0,                            _if_conditional297) {
                                result_type_207->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional298=result_type_207->mPointerNum>0,                _if_conditional298) {
                    result_type_207->mPointerNum-=list$1CVALUEph_length(array_num_199);
                    if(_if_conditional299=result_type_207->mPointerNum<0,                    _if_conditional299) {
                        result_type_207->mPointerNum=0;
                    }
                }
            }
            come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1017, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buf_211=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1019, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(result_type_207))));
            come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_212->mPointerNum++;
            buffer_append_str(buf_211,((char*)(right_value226=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value225=make_type_name_string(result_type2_212,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_197->c_value))));
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_213=(struct list$1CVALUEph*)come_increment_ref_count((array_num_199)),it_214=list$1CVALUEph_begin((o2_saved_213));            !list$1CVALUEph_end((o2_saved_213));            it_214=list$1CVALUEph_next((o2_saved_213))            ){
                buffer_append_str(buf_211,((char*)(right_value227=xsprintf("[%s]",it_214->c_value))));
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_211,((char*)(right_value228=xsprintf(",%s,%s+",left_value_197->c_value,left_value_197->c_value))));
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_215=0;
            for(            o2_saved_216=(struct list$1sNodeph*)come_increment_ref_count((var_type_206->mArrayNum)),it_217=list$1sNodeph_begin((o2_saved_216));            !list$1sNodeph_end((o2_saved_216));            it_217=list$1sNodeph_next((o2_saved_216))            ){
                if(_if_conditional300=!node_compile(it_217,info),                _if_conditional300) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_211,((char*)(right_value230=xsprintf("%s",come_value_218->c_value))));
                right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional301=i_215!=list$1sNodeph_length(var_type_206->mArrayNum)-1,                _if_conditional301) {
                    buffer_append_str(buf_211,"*");
                }
                i_215++;
                come_call_finalizer2(CVALUE_finalize,come_value_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_211,((char*)(right_value231=xsprintf(", \"%s\", %d)",info->sname,info->sline))));
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_code_219=(char*)come_increment_ref_count(((char*)(right_value232=buffer_to_string(buf_211))));
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj116=come_value_210->c_value;
            come_value_210->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s",left_value_code_219))));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj117=come_value_210->type;
            come_value_210->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(result_type_207))));
            come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_210->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_210));
            add_come_last_code(info,"%s;\n",come_value_210->c_value);
            come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_219 = come_decrement_ref_count2(left_value_code_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1063, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buf_221=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value237=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1065, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_221,left_value_197->c_value);
            for(            o2_saved_222=(struct list$1CVALUEph*)come_increment_ref_count((array_num_199)),it_223=list$1CVALUEph_begin((o2_saved_222));            !list$1CVALUEph_end((o2_saved_222));            it_223=list$1CVALUEph_next((o2_saved_222))            ){
                buffer_append_str(buf_221,((char*)(right_value238=xsprintf("[%s]",it_223->c_value))));
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_224=(char*)come_increment_ref_count(((char*)(right_value239=buffer_to_string(buf_221))));
            right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj118=come_value_220->c_value;
            come_value_220->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s",left_value_code_224))));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(left_type_198))));
            come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(result_type_225->mOriginalLoadVarType->v1) {
                __dec_obj119=result_type_225;
                result_type_225=(struct sType*)come_increment_ref_count(result_type_225->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional303=list$1sNodeph_length(result_type_225->mArrayNum)>0,            _if_conditional303) {
                n_226=list$1sNodeph_length(result_type_225->mArrayNum)-list$1CVALUEph_length(array_num_199);
                if(_if_conditional304=n_226==0,                _if_conditional304) {
                    __dec_obj120=result_type_225;
                    result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_type_198))));
                    come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(left_type_198->mOriginalLoadVarType->v1) {
                        __dec_obj121=result_type_225;
                        result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(left_type_198->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_225->mArrayNum);
                }
                else {
                    if(_if_conditional306=n_226>0,                    _if_conditional306) {
                        for(                        i_227=0;                        i_227<n_226;                        i_227++                        ){
                            list$1sNodeph_delete(result_type_225->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional307=n_226<0,                        _if_conditional307) {
                            list$1sNodeph_reset(result_type_225->mArrayNum);
                            result_type_225->mPointerNum+=n_226;
                            if(_if_conditional308=result_type_225->mPointerNum<0,                            _if_conditional308) {
                                result_type_225->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional309=result_type_225->mPointerNum>0,                _if_conditional309) {
                    result_type_225->mPointerNum-=list$1CVALUEph_length(array_num_199);
                    if(_if_conditional310=result_type_225->mPointerNum<0,                    _if_conditional310) {
                        result_type_225->mPointerNum=0;
                    }
                }
            }
            __dec_obj122=come_value_220->type;
            come_value_220->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(result_type_225))));
            come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_220->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_220));
            add_come_last_code(info,"%s;\n",come_value_220->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_224 = come_decrement_ref_count2(left_value_code_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result139__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result139__;
    come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = self->sline;
    return __result140__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value246;
char* __dec_obj123;
void* right_value247;
struct list$1sNodeph* __dec_obj124;
void* right_value248;
struct sNode* __dec_obj125;
struct sLoadRangeArrayNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
    self->sline=info->sline;
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value247=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(left))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result142__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value249;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
    __result144__ = __result_obj__ = ((char*)(right_value249=__builtin_string("sLoadRangeArrayNode")));
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_228;
struct list$1sNodeph* array_num_nodes_229;
_Bool _if_conditional314;
_Bool __result145__;
void* right_value250;
struct CVALUE* left_value_230;
void* right_value251;
struct sType* left_type_231;
void* right_value252;
void* right_value253;
struct list$1CVALUEph* array_num_232;
struct list$1sNodeph* o2_saved_233;
struct sNode* it_234;
_Bool _if_conditional315;
_Bool __result146__;
void* right_value254;
struct CVALUE* c_value_235;
void* right_value255;
struct sType* type_236;
char* fun_name_237;
_Bool calling_fun_238;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value256;
struct CVALUE* come_value_239;
void* right_value257;
void* right_value258;
struct buffer* buf_240;
struct list$1CVALUEph* o2_saved_241;
struct CVALUE* it_242;
void* right_value259;
void* right_value260;
char* left_value_code_243;
void* right_value261;
char* __dec_obj126;
void* right_value262;
struct sType* result_type_244;
_Bool _if_conditional318;
struct sType* __dec_obj127;
_Bool _if_conditional319;
int n_245;
_Bool _if_conditional320;
void* right_value263;
struct sType* __dec_obj128;
_Bool _if_conditional321;
void* right_value264;
struct sType* __dec_obj129;
_Bool _if_conditional322;
int i_246;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value265;
struct sType* __dec_obj130;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_228, 0, sizeof(struct sNode*));
memset(&array_num_nodes_229, 0, sizeof(struct list$1sNodeph*));
right_value250 = (void*)0;
memset(&left_value_230, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
memset(&left_type_231, 0, sizeof(struct sType*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&array_num_232, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_233, 0, sizeof(struct list$1sNodeph*));
memset(&it_234, 0, sizeof(struct sNode*));
right_value254 = (void*)0;
memset(&c_value_235, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
memset(&type_236, 0, sizeof(struct sType*));
memset(&fun_name_237, 0, sizeof(char*));
memset(&calling_fun_238, 0, sizeof(_Bool));
right_value256 = (void*)0;
memset(&come_value_239, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&buf_240, 0, sizeof(struct buffer*));
memset(&o2_saved_241, 0, sizeof(struct list$1CVALUEph*));
memset(&it_242, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&left_value_code_243, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&result_type_244, 0, sizeof(struct sType*));
memset(&n_245, 0, sizeof(int));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&i_246, 0, sizeof(int));
right_value265 = (void*)0;
    left_228=self->mLeft;
    array_num_nodes_229=self->mArrayNum;
    if(_if_conditional314=!node_compile(left_228,info),    _if_conditional314) {
        __result145__ = (_Bool)0;
        return __result145__;
    }
    left_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(left_value_230->type))));
    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_232=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value253=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value252=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1186, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_233=(array_num_nodes_229),it_234=list$1sNodeph_begin((o2_saved_233));    !list$1sNodeph_end((o2_saved_233));    it_234=list$1sNodeph_next((o2_saved_233))    ){
        if(_if_conditional315=!node_compile(it_234,info),        _if_conditional315) {
            __result146__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result146__;
        }
        c_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_232,(struct CVALUE*)come_increment_ref_count(c_value_235));
        come_call_finalizer2(CVALUE_finalize,c_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(left_value_230->type))));
    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_237="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_238=(_Bool)0;
    }
    else {
        calling_fun_238=operator_overload_fun2(type_236,fun_name_237,left_value_230,list$1CVALUEphp_operator_load_element(array_num_232,0),list$1CVALUEphp_operator_load_element(array_num_232,1),info);
    }
    if(_if_conditional317=!calling_fun_238,    _if_conditional317) {
        come_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1211, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buf_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1213, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_240,left_value_230->c_value);
        for(        o2_saved_241=(struct list$1CVALUEph*)come_increment_ref_count((array_num_232)),it_242=list$1CVALUEph_begin((o2_saved_241));        !list$1CVALUEph_end((o2_saved_241));        it_242=list$1CVALUEph_next((o2_saved_241))        ){
            buffer_append_str(buf_240,((char*)(right_value259=xsprintf("[%s]",it_242->c_value))));
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_243=(char*)come_increment_ref_count(((char*)(right_value260=buffer_to_string(buf_240))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj126=come_value_239->c_value;
        come_value_239->c_value=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("%s",left_value_code_243))));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_clone(left_type_231))));
        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(result_type_244->mOriginalLoadVarType->v1) {
            __dec_obj127=result_type_244;
            result_type_244=(struct sType*)come_increment_ref_count(result_type_244->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional319=list$1sNodeph_length(result_type_244->mArrayNum)>0,        _if_conditional319) {
            n_245=list$1sNodeph_length(result_type_244->mArrayNum)-list$1CVALUEph_length(array_num_232);
            if(_if_conditional320=n_245==0,            _if_conditional320) {
                __dec_obj128=result_type_244;
                result_type_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_type_231))));
                come_call_finalizer2(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(left_type_231->mOriginalLoadVarType->v1) {
                    __dec_obj129=result_type_244;
                    result_type_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_type_231->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_244->mArrayNum);
            }
            else {
                if(_if_conditional322=n_245>0,                _if_conditional322) {
                    for(                    i_246=0;                    i_246<n_245;                    i_246++                    ){
                        list$1sNodeph_delete(result_type_244->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional323=n_245<0,                    _if_conditional323) {
                        list$1sNodeph_reset(result_type_244->mArrayNum);
                        result_type_244->mPointerNum+=n_245;
                        if(_if_conditional324=result_type_244->mPointerNum<0,                        _if_conditional324) {
                            result_type_244->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional325=result_type_244->mPointerNum>0,            _if_conditional325) {
                result_type_244->mPointerNum-=list$1CVALUEph_length(array_num_232);
                if(_if_conditional326=result_type_244->mPointerNum<0,                _if_conditional326) {
                    result_type_244->mPointerNum=0;
                }
            }
        }
        __dec_obj130=come_value_239->type;
        come_value_239->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(result_type_244))));
        come_call_finalizer2(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_239->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
        add_come_last_code(info,"%s;\n",come_value_239->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_243 = come_decrement_ref_count2(left_value_code_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result147__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result147__;
    come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self->sline;
    return __result148__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value266;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value266=__builtin_string(self->sname)));
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result150__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result151__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result151__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_247;
char* p_248;
int sline_249;
_Bool _if_conditional327;
_Bool no_comma_250;
_Bool no_output_err_251;
_Bool no_output_come_code_252;
void* right_value267;
struct sNode* exp_253;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool quote_254;
_Bool _if_conditional330;
void* right_value268;
void* right_value269;
struct list$1sNodeph* array_num_255;
void* right_value270;
struct sNode* node2_256;
_Bool _if_conditional333;
void* right_value274;
struct sNode* node3_260;
void* right_value275;
void* right_value276;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value281;
struct sNode* __dec_obj137;
_Bool _if_conditional343;
_Bool quote_262;
_Bool _if_conditional344;
_Bool range_263;
void* right_value282;
void* right_value283;
struct list$1sNodeph* array_num_264;
_Bool _while_condtional20;
_Bool range_array2_265;
char* p_266;
int sline_267;
_Bool _if_conditional345;
_Bool no_comma_268;
_Bool no_output_err_269;
_Bool no_output_come_code_270;
void* right_value284;
struct sNode* exp_271;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value285;
struct sNode* node2_272;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value286;
struct sNode* right_node_273;
void* right_value287;
void* right_value288;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value294;
struct sNode* __dec_obj142;
void* right_value295;
void* right_value296;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value301;
struct sNode* __dec_obj146;
_Bool _if_conditional371;
_Bool no_comma_276;
void* right_value302;
struct sNode* begin_277;
void* right_value303;
struct sNode* end_278;
void* right_value304;
void* right_value305;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value311;
struct sNode* __dec_obj151;
_Bool _if_conditional382;
void* right_value312;
void* right_value313;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value317;
struct sNode* __dec_obj154;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value318;
void* right_value319;
void* right_value320;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value324;
struct sNode* __dec_obj157;
void* right_value325;
char* field_name_282;
_Bool parse_method_generics_type_283;
char* p_284;
int sline_285;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value326;
char* word_286;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value327;
struct sNode* right_node_287;
void* right_value328;
void* right_value329;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value335;
struct sNode* __dec_obj162;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value336;
void* right_value337;
struct sNode* __dec_obj163;
_Bool _if_conditional415;
void* right_value338;
void* right_value339;
struct sNode* __dec_obj164;
void* right_value340;
void* right_value341;
struct sNode* __dec_obj165;
void* right_value342;
void* right_value343;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value348;
struct sNode* __dec_obj169;
void* right_value349;
struct sNode* node2_290;
_Bool _if_conditional424;
struct sNode* __dec_obj170;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_247, 0, sizeof(_Bool));
memset(&p_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
memset(&no_comma_250, 0, sizeof(_Bool));
memset(&no_output_err_251, 0, sizeof(_Bool));
memset(&no_output_come_code_252, 0, sizeof(_Bool));
right_value267 = (void*)0;
memset(&exp_253, 0, sizeof(struct sNode*));
memset(&quote_254, 0, sizeof(_Bool));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&array_num_255, 0, sizeof(struct list$1sNodeph*));
right_value270 = (void*)0;
memset(&node2_256, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&node3_260, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value281 = (void*)0;
memset(&quote_262, 0, sizeof(_Bool));
memset(&range_263, 0, sizeof(_Bool));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&array_num_264, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_265, 0, sizeof(_Bool));
memset(&p_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
memset(&no_comma_268, 0, sizeof(_Bool));
memset(&no_output_err_269, 0, sizeof(_Bool));
memset(&no_output_come_code_270, 0, sizeof(_Bool));
right_value284 = (void*)0;
memset(&exp_271, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&node2_272, 0, sizeof(struct sNode*));
right_value286 = (void*)0;
memset(&right_node_273, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value301 = (void*)0;
memset(&no_comma_276, 0, sizeof(_Bool));
right_value302 = (void*)0;
memset(&begin_277, 0, sizeof(struct sNode*));
right_value303 = (void*)0;
memset(&end_278, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&field_name_282, 0, sizeof(char*));
memset(&parse_method_generics_type_283, 0, sizeof(_Bool));
memset(&p_284, 0, sizeof(char*));
memset(&sline_285, 0, sizeof(int));
right_value326 = (void*)0;
memset(&word_286, 0, sizeof(char*));
right_value327 = (void*)0;
memset(&right_node_287, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&node2_290, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_247=(_Bool)0;
        {
            p_248=info->p;
            sline_249=info->sline;
            if(_if_conditional327=*info->p==91,            _if_conditional327) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_250=info->no_comma;
                no_output_err_251=info->no_output_err;
                no_output_come_code_252=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=expression_v13(info))));
                if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_250;
                info->no_output_err=no_output_err_251;
                info->no_output_come_code=no_output_come_code_252;
                if(_if_conditional328=*info->p==46&&*(info->p+1)==46,                _if_conditional328) {
                    range_array_247=(_Bool)1;
                }
                if(exp_253) { exp_253 = come_decrement_ref_count2(exp_253, ((struct sNode*)exp_253)->finalize, ((struct sNode*)exp_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_248;
            info->sline=sline_249;
        }
        if(_if_conditional329=range_array_247&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional329) {
            quote_254=*info->p==92;
            if(quote_254) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_255=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value269=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value268=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1339, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
            if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_255,(struct sNode*)come_increment_ref_count(node2_256));
            if(_if_conditional333=*info->p==46&&*(info->p+1)==46,            _if_conditional333) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
                if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_255,(struct sNode*)come_increment_ref_count(node3_260));
                expected_next_character(93,info);
                if(node3_260) { node3_260 = come_decrement_ref_count2(node3_260, ((struct sNode*)node3_260)->finalize, ((struct sNode*)node3_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1360, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value276=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value275=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1360, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_255),quote_254,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj137=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=_inf_value2)));
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_256) { node2_256 = come_decrement_ref_count2(node2_256, ((struct sNode*)node2_256)->finalize, ((struct sNode*)node2_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional343=!range_array_247&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional343) {
                quote_262=*info->p==92;
                if(quote_262) {
                    info->p++;
                }
                range_263=(_Bool)0;
                array_num_264=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value283=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value282=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1369, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_265=(_Bool)0;
                    {
                        p_266=info->p;
                        sline_267=info->sline;
                        if(_if_conditional345=*info->p==91,                        _if_conditional345) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_268=info->no_comma;
                            no_output_err_269=info->no_output_err;
                            no_output_come_code_270=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
                            if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_268;
                            info->no_output_err=no_output_err_269;
                            info->no_output_come_code=no_output_come_code_270;
                            if(_if_conditional346=*info->p==46&&*(info->p+1)==46,                            _if_conditional346) {
                                range_array2_265=(_Bool)1;
                            }
                            if(exp_271) { exp_271 = come_decrement_ref_count2(exp_271, ((struct sNode*)exp_271)->finalize, ((struct sNode*)exp_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_266;
                        info->sline=sline_267;
                    }
                    if(range_array2_265) {
                        break;
                    }
                    else {
                        if(_if_conditional348=*info->p==91,                        _if_conditional348) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=expression_v13(info))));
                            if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_264,(struct sNode*)come_increment_ref_count(node2_272));
                            if(_if_conditional349=*info->p==93,                            _if_conditional349) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_272) { node2_272 = come_decrement_ref_count2(node2_272, ((struct sNode*)node2_272)->finalize, ((struct sNode*)node2_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional350=*info->p==61&&*(info->p+1)!=61,                _if_conditional350) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=expression_v13(info))));
                    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1437, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value288=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value287=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1437, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_273),(struct list$1sNodeph*)come_increment_ref_count(array_num_264),quote_262,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj142=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=_inf_value3)));
                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_273) { right_node_273 = come_decrement_ref_count2(right_node_273, ((struct sNode*)right_node_273)->finalize, ((struct sNode*)right_node_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1440, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value296=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value295=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1440, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_264),quote_262,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj146=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=_inf_value4)));
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional371=*info->p==33&&*(info->p+1)==123,                _if_conditional371) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_276=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=expression_v13(info))));
                    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_276;
                    expected_next_character(44,info);
                    end_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_v13(info))));
                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1460, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value305=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value304=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1460, "sRangeCheckNode")))),node,begin_277,end_278,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj151=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=_inf_value5)));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_277) { begin_277 = come_decrement_ref_count2(begin_277, ((struct sNode*)begin_277)->finalize, ((struct sNode*)begin_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_278) { end_278 = come_decrement_ref_count2(end_278, ((struct sNode*)end_278)->finalize, ((struct sNode*)end_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional382=*info->p==33&&*(info->p+1)!=61,                    _if_conditional382) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1468, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value313=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value312=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1468, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj154=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=_inf_value6)));
                        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(_if_conditional390=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional390) {
                            if(_if_conditional391=*info->p==46,                            _if_conditional391) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1480, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value320=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value318=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1480, "sNullCheckNode")))),((struct sNode*)(right_value319=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value7->clone=(void*)sNullCheckNode_clone;
                            _inf_value7->compile=(void*)sNullCheckNode_compile;
                            _inf_value7->sline=(void*)sNullCheckNode_sline;
                            _inf_value7->sname=(void*)sNullCheckNode_sname;
                            _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value7->kind=(void*)sNullCheckNode_kind;
                            __dec_obj157=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=_inf_value7)));
                            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullCheckNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            come_call_finalizer2(sNullCheckNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            parse_sharp_v5(info);
                            field_name_282=(char*)come_increment_ref_count(((char*)(right_value325=parse_word(info))));
                            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            parse_sharp_v5(info);
                            parse_method_generics_type_283=(_Bool)0;
                            {
                                p_284=info->p;
                                sline_285=info->sline;
                                if(_if_conditional399=*info->p==60,                                _if_conditional399) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional400=xisalpha(*info->p)||*info->p==95,                                    _if_conditional400) {
                                        word_286=(char*)come_increment_ref_count(((char*)(right_value326=parse_word(info))));
                                        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional401=is_type_name(word_286,info),                                        _if_conditional401) {
                                            parse_method_generics_type_283=(_Bool)1;
                                        }
                                        word_286 = come_decrement_ref_count2(word_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                                info->p=p_284;
                                info->sline=sline_285;
                            }
                            if(_if_conditional402=*info->p==61&&*(info->p+1)!=61,                            _if_conditional402) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=expression_v13(info))));
                                if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1518, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value329=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value328=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1518, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_287),(char*)come_increment_ref_count(field_name_282),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                _inf_value8->sline=(void*)sStoreFieldNode_sline;
                                _inf_value8->sname=(void*)sStoreFieldNode_sname;
                                _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj162=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=_inf_value8)));
                                if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(right_node_287) { right_node_287 = come_decrement_ref_count2(right_node_287, ((struct sNode*)right_node_287)->finalize, ((struct sNode*)right_node_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional413=*info->p==40||*info->p==123||parse_method_generics_type_283||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional413) {
                                    if(_if_conditional414=string_operator_equals(field_name_282,"if"),                                    _if_conditional414) {
                                        __dec_obj163=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(node)))),info))));
                                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    else {
                                        if(_if_conditional415=string_operator_equals(field_name_282,"elif"),                                        _if_conditional415) {
                                            __dec_obj164=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(node)))),info))));
                                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            __dec_obj165=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_282),info))));
                                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                    }
                                }
                                else {
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value343=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value342=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1532, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_282),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value9->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value9->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj169=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=_inf_value9)));
                                    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                            field_name_282 = come_decrement_ref_count2(field_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            node2_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional424=node2_290==((void*)0),                            _if_conditional424) {
                                if(node2_290) { node2_290 = come_decrement_ref_count2(node2_290, ((struct sNode*)node2_290)->finalize, ((struct sNode*)node2_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                break;
                            }
                            __dec_obj170=node;
                            node=(struct sNode*)come_increment_ref_count(node2_290);
                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node2_290) { node2_290 = come_decrement_ref_count2(node2_290, ((struct sNode*)node2_290)->finalize, ((struct sNode*)node2_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    __result169__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result169__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional331;
void* right_value271;
struct list_item$1sNodeph* litem_257;
struct sNode* __dec_obj131;
_Bool _if_conditional332;
void* right_value272;
struct list_item$1sNodeph* litem_258;
struct sNode* __dec_obj132;
void* right_value273;
struct list_item$1sNodeph* litem_259;
struct sNode* __dec_obj133;
struct list$1sNodeph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1sNodeph*));
right_value272 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1sNodeph*));
right_value273 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional331=self->len==0,                _if_conditional331) {
                    litem_257=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_257->prev=((void*)0);
                    litem_257->next=((void*)0);
                    __dec_obj131=litem_257->item;
                    litem_257->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_257;
                    self->head=litem_257;
                }
                else {
                    if(_if_conditional332=self->len==1,                    _if_conditional332) {
                        litem_258=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_258->prev=self->head;
                        litem_258->next=((void*)0);
                        __dec_obj132=litem_258->item;
                        litem_258->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_258;
                        self->head->next=litem_258;
                    }
                    else {
                        litem_259=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_259->prev=self->tail;
                        litem_259->next=((void*)0);
                        __dec_obj133=litem_259->item;
                        litem_259->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_259;
                        self->tail=litem_259;
                    }
                }
                self->len++;
                __result152__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result152__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional334=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional334) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional335=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional335) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional336=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional336) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional337;
struct sLoadRangeArrayNode* __result153__;
void* right_value277;
struct sLoadRangeArrayNode* result_261;
_Bool _if_conditional338;
void* right_value278;
struct sNode* __dec_obj134;
_Bool _if_conditional339;
void* right_value279;
struct list$1sNodeph* __dec_obj135;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
void* right_value280;
char* __dec_obj136;
struct sLoadRangeArrayNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
memset(&result_261, 0, sizeof(struct sLoadRangeArrayNode*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
                if(_if_conditional337=self==(void*)0,                _if_conditional337) {
                    __result153__ = __result_obj__ = (void*)0;
                    return __result153__;
                }
                result_261=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value277=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional338=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional338) {
                    __dec_obj134=result_261->mLeft;
                    result_261->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(self->mLeft))));
                    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional339=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional339) {
                    __dec_obj135=result_261->mArrayNum;
                    result_261->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value279=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional340=self!=((void*)0),                _if_conditional340) {
                    result_261->mQuote=self->mQuote;
                }
                if(_if_conditional341=self!=((void*)0),                _if_conditional341) {
                    result_261->sline=self->sline;
                }
                if(_if_conditional342=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional342) {
                    __dec_obj136=result_261->sname;
                    result_261->sname=(char*)come_increment_ref_count(((char*)(right_value280=string_clone(self->sname))));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result154__ = __result_obj__ = result_261;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result154__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional351=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional351) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional352=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional352) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional353=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional353) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional354) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sStoreArrayNode* __result155__;
void* right_value289;
struct sStoreArrayNode* result_274;
_Bool _if_conditional356;
void* right_value290;
struct sNode* __dec_obj138;
_Bool _if_conditional357;
void* right_value291;
struct sNode* __dec_obj139;
_Bool _if_conditional358;
void* right_value292;
struct list$1sNodeph* __dec_obj140;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value293;
char* __dec_obj141;
struct sStoreArrayNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
memset(&result_274, 0, sizeof(struct sStoreArrayNode*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
                        if(_if_conditional355=self==(void*)0,                        _if_conditional355) {
                            __result155__ = __result_obj__ = (void*)0;
                            return __result155__;
                        }
                        result_274=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value289=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional356) {
                            __dec_obj138=result_274->mLeft;
                            result_274->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(self->mLeft))));
                            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional357=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional357) {
                            __dec_obj139=result_274->mRight;
                            result_274->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(self->mRight))));
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional358=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional358) {
                            __dec_obj140=result_274->mArrayNum;
                            result_274->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value292=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional359=self!=((void*)0),                        _if_conditional359) {
                            result_274->mQuote=self->mQuote;
                        }
                        if(_if_conditional360=self!=((void*)0),                        _if_conditional360) {
                            result_274->sline=self->sline;
                        }
                        if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional361) {
                            __dec_obj141=result_274->sname;
                            result_274->sname=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(self->sname))));
                            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result156__ = __result_obj__ = result_274;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result156__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional362=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional362) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional363=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional363) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional364=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional364) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional365;
struct sLoadArrayNode* __result157__;
void* right_value297;
struct sLoadArrayNode* result_275;
_Bool _if_conditional366;
void* right_value298;
struct sNode* __dec_obj143;
_Bool _if_conditional367;
void* right_value299;
struct list$1sNodeph* __dec_obj144;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value300;
char* __dec_obj145;
struct sLoadArrayNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&result_275, 0, sizeof(struct sLoadArrayNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
                        if(_if_conditional365=self==(void*)0,                        _if_conditional365) {
                            __result157__ = __result_obj__ = (void*)0;
                            return __result157__;
                        }
                        result_275=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value297=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional366=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional366) {
                            __dec_obj143=result_275->mLeft;
                            result_275->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(self->mLeft))));
                            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional367=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional367) {
                            __dec_obj144=result_275->mArrayNum;
                            result_275->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value299=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional368=self!=((void*)0),                        _if_conditional368) {
                            result_275->mQuote=self->mQuote;
                        }
                        if(_if_conditional369=self!=((void*)0),                        _if_conditional369) {
                            result_275->sline=self->sline;
                        }
                        if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional370) {
                            __dec_obj145=result_275->sname;
                            result_275->sname=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(self->sname))));
                            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result158__ = __result_obj__ = result_275;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result158__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional372=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional372) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional373=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional373) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional374=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional374) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional375=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional375) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional376;
struct sRangeCheckNode* __result159__;
void* right_value306;
struct sRangeCheckNode* result_279;
_Bool _if_conditional377;
void* right_value307;
struct sNode* __dec_obj147;
_Bool _if_conditional378;
void* right_value308;
struct sNode* __dec_obj148;
_Bool _if_conditional379;
void* right_value309;
struct sNode* __dec_obj149;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value310;
char* __dec_obj150;
struct sRangeCheckNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&result_279, 0, sizeof(struct sRangeCheckNode*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
                        if(_if_conditional376=self==(void*)0,                        _if_conditional376) {
                            __result159__ = __result_obj__ = (void*)0;
                            return __result159__;
                        }
                        result_279=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value306=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional377=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional377) {
                            __dec_obj147=result_279->mLeft;
                            result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(self->mLeft))));
                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional378=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional378) {
                            __dec_obj148=result_279->mBegin;
                            result_279->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(self->mBegin))));
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional379=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional379) {
                            __dec_obj149=result_279->mEnd;
                            result_279->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(self->mEnd))));
                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional380=self!=((void*)0),                        _if_conditional380) {
                            result_279->sline=self->sline;
                        }
                        if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional381) {
                            __dec_obj150=result_279->sname;
                            result_279->sname=(char*)come_increment_ref_count(((char*)(right_value310=string_clone(self->sname))));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result160__ = __result_obj__ = result_279;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result160__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional392) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional393) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional394;
struct sNullCheckNode* __result163__;
void* right_value321;
struct sNullCheckNode* result_281;
_Bool _if_conditional395;
void* right_value322;
struct sNode* __dec_obj155;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value323;
char* __dec_obj156;
struct sNullCheckNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
memset(&result_281, 0, sizeof(struct sNullCheckNode*));
right_value322 = (void*)0;
right_value323 = (void*)0;
                                if(_if_conditional394=self==(void*)0,                                _if_conditional394) {
                                    __result163__ = __result_obj__ = (void*)0;
                                    return __result163__;
                                }
                                result_281=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value321=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                come_call_finalizer2(sNullCheckNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional395=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional395) {
                                    __dec_obj155=result_281->mLeft;
                                    result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(self->mLeft))));
                                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional396=self!=((void*)0),                                _if_conditional396) {
                                    result_281->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional397=self!=((void*)0),                                _if_conditional397) {
                                    result_281->sline=self->sline;
                                }
                                if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional398) {
                                    __dec_obj156=result_281->sname;
                                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->sname))));
                                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result164__ = __result_obj__ = result_281;
                                come_call_finalizer2(sNullCheckNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                                come_call_finalizer2(sNullCheckNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional403) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional404=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional404) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional405=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional405) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional406=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional406) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional407;
struct sStoreFieldNode* __result165__;
void* right_value330;
struct sStoreFieldNode* result_288;
_Bool _if_conditional408;
void* right_value331;
struct sNode* __dec_obj158;
_Bool _if_conditional409;
void* right_value332;
struct sNode* __dec_obj159;
_Bool _if_conditional410;
void* right_value333;
char* __dec_obj160;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value334;
char* __dec_obj161;
struct sStoreFieldNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
memset(&result_288, 0, sizeof(struct sStoreFieldNode*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
                                    if(_if_conditional407=self==(void*)0,                                    _if_conditional407) {
                                        __result165__ = __result_obj__ = (void*)0;
                                        return __result165__;
                                    }
                                    result_288=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value330=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional408=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional408) {
                                        __dec_obj158=result_288->mLeft;
                                        result_288->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(self->mLeft))));
                                        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional409=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional409) {
                                        __dec_obj159=result_288->mRight;
                                        result_288->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=sNode_clone(self->mRight))));
                                        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional410=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional410) {
                                        __dec_obj160=result_288->mName;
                                        result_288->mName=(char*)come_increment_ref_count(((char*)(right_value333=string_clone(self->mName))));
                                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional411=self!=((void*)0),                                    _if_conditional411) {
                                        result_288->sline=self->sline;
                                    }
                                    if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional412) {
                                        __dec_obj161=result_288->sname;
                                        result_288->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->sname))));
                                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result166__ = __result_obj__ = result_288;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result166__;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional416=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional416) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional417=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional417) {
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional418) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional419;
struct sLoadFieldNode* __result167__;
void* right_value344;
struct sLoadFieldNode* result_289;
_Bool _if_conditional420;
void* right_value345;
struct sNode* __dec_obj166;
_Bool _if_conditional421;
void* right_value346;
char* __dec_obj167;
_Bool _if_conditional422;
_Bool _if_conditional423;
void* right_value347;
char* __dec_obj168;
struct sLoadFieldNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
memset(&result_289, 0, sizeof(struct sLoadFieldNode*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
                                        if(_if_conditional419=self==(void*)0,                                        _if_conditional419) {
                                            __result167__ = __result_obj__ = (void*)0;
                                            return __result167__;
                                        }
                                        result_289=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value344=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional420=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional420) {
                                            __dec_obj166=result_289->mLeft;
                                            result_289->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(self->mLeft))));
                                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional421=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional421) {
                                            __dec_obj167=result_289->mName;
                                            result_289->mName=(char*)come_increment_ref_count(((char*)(right_value346=string_clone(self->mName))));
                                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional422=self!=((void*)0),                                        _if_conditional422) {
                                            result_289->sline=self->sline;
                                        }
                                        if(_if_conditional423=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional423) {
                                            __dec_obj168=result_289->sname;
                                            result_289->sname=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(self->sname))));
                                            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result168__ = __result_obj__ = result_289;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_289, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result168__;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

