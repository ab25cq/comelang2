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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
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
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

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
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

// body function

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* generics_type_24;
_Bool _if_conditional87;
struct sType* __dec_obj23;
struct sClass* klass_25;
char* class_name_26;
char* fun_name2_27;
struct sFun* operator_fun_28;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value35;
char* none_generics_name_29;
void* right_value36;
struct sType* obj_type_30;
void* right_value37;
char* __dec_obj24;
void* right_value38;
char* fun_name3_31;
void* right_value40;
struct sGenericsFun* generics_fun_35;
_Bool _if_conditional104;
void* right_value41;
_Bool _if_conditional105;
_Bool __result26__;
void* right_value51;
void* right_value52;
char* __dec_obj25;
int i_40;
_Bool _for_condtionalA1;
void* right_value53;
char* new_fun_name_41;
void* right_value54;
_Bool _if_conditional111;
void* right_value55;
char* __dec_obj26;
_Bool _if_conditional112;
void* right_value56;
_Bool result_42;
_Bool _if_conditional113;
void* right_value57;
struct CVALUE* come_value_43;
char* left_value2_44;
void* right_value58;
void* right_value59;
void* right_value64;
void* right_value65;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
char* __dec_obj28;
_Bool _if_conditional123;
void* right_value66;
char* __dec_obj29;
_Bool _if_conditional124;
void* right_value67;
char* __dec_obj30;
void* right_value68;
char* __dec_obj31;
_Bool _if_conditional125;
void* right_value69;
char* __dec_obj32;
void* right_value70;
char* __dec_obj33;
void* right_value71;
char* __dec_obj34;
char* middle_value2_49;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
char* __dec_obj35;
_Bool _if_conditional129;
void* right_value76;
char* __dec_obj36;
_Bool _if_conditional130;
void* right_value77;
char* __dec_obj37;
void* right_value78;
char* __dec_obj38;
_Bool _if_conditional131;
void* right_value79;
char* __dec_obj39;
void* right_value80;
char* __dec_obj40;
void* right_value81;
char* __dec_obj41;
char* right_value2_50;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __dec_obj42;
_Bool _if_conditional135;
void* right_value86;
char* __dec_obj43;
_Bool _if_conditional136;
void* right_value87;
char* __dec_obj44;
void* right_value88;
char* __dec_obj45;
_Bool _if_conditional137;
void* right_value89;
char* __dec_obj46;
void* right_value90;
char* __dec_obj47;
void* right_value91;
char* __dec_obj48;
void* right_value92;
char* __dec_obj49;
void* right_value93;
struct sType* result_type1_51;
void* right_value94;
struct sType* result_type2_52;
void* right_value95;
struct sType* __dec_obj50;
_Bool _if_conditional138;
void* right_value96;
char* __dec_obj51;
_Bool _if_conditional139;
void* right_value97;
char* __dec_obj52;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&generics_type_24, 0, sizeof(struct sType*));
memset(&klass_25, 0, sizeof(struct sClass*));
memset(&class_name_26, 0, sizeof(char*));
memset(&fun_name2_27, 0, sizeof(char*));
memset(&operator_fun_28, 0, sizeof(struct sFun*));
memset(&right_value35, 0, sizeof(void*));
memset(&none_generics_name_29, 0, sizeof(char*));
memset(&right_value36, 0, sizeof(void*));
memset(&obj_type_30, 0, sizeof(struct sType*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&fun_name3_31, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&generics_fun_35, 0, sizeof(struct sGenericsFun*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&i_40, 0, sizeof(int));
memset(&right_value53, 0, sizeof(void*));
memset(&new_fun_name_41, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&result_42, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_43, 0, sizeof(struct CVALUE*));
memset(&left_value2_44, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&middle_value2_49, 0, sizeof(char*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value2_50, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&result_type1_51, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_type2_52, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
    generics_type_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional87=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "18field.c", 11))->mNoSolvedGenericsType, "18field.c", 11))->v1,    __freed_obj__ = 0, 
    _if_conditional87) {
        __dec_obj23=generics_type_24;
        generics_type_24=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "18field.c", 8))->mNoSolvedGenericsType, "18field.c", 8))->v1);
        if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_25=((struct sType*)come_null_check(type, "18field.c", 11))->mClass;
    __freed_obj__ = 0;
    class_name_26=((struct sClass*)come_null_check(klass_25, "18field.c", 12))->mName;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    operator_fun_28=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional88=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21))->mNoSolvedGenericsType, "18field.c", 21))->v1,    __freed_obj__ = 0, 
    _if_conditional88) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18))->mNoSolvedGenericsType, "18field.c", 18))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional89=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 58))->mGenericsTypes, "18field.c", 58)))>0,    __freed_obj__ = 0, 
    _if_conditional89) {
        none_generics_name_29=(char*)come_increment_ref_count(((char*)(right_value35=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22))->mClass, "18field.c", 22))->mName))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(type,((struct sInfo*)come_null_check(info, "18field.c", 24))->generics_type,info))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value37=create_method_name(obj_type_30,(_Bool)0,fun_name,info))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_31=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("%s_%s",none_generics_name_29,fun_name))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_35=((struct sGenericsFun*)(right_value40=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29))->generics_funcs, "18field.c", 29)),fun_name3_31,((void*)0))));
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional104=generics_fun_35,        __freed_obj__ = 0, 
        _if_conditional104) {
            if(_if_conditional105=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(fun_name2_27)))),generics_fun_35,obj_type_30,info),            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional105) {
                __result26__ = (_Bool)0;
                if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 37),((struct optional$2sFunpbool*)(right_value51=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 37))->funcs,fun_name2_27)))));
        come_pop_stackframe();
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj25=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value52=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_40=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_40>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_40-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_41=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("%s_v%d",fun_name2_27,i_40))));
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 45),((struct optional$2sFunpbool*)(right_value54=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 45))->funcs,new_fun_name_41)))));
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional111=operator_fun_28,            __freed_obj__ = 0, 
            _if_conditional111) {
                __dec_obj26=fun_name2_27;
                fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(new_fun_name_41))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_41 && !__freed_obj__) { new_fun_name_41 = come_decrement_ref_count(new_fun_name_41, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_41 && !__freed_obj__) { new_fun_name_41 = come_decrement_ref_count(new_fun_name_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional112=operator_fun_28==((void*)0),        __freed_obj__ = 0, 
        _if_conditional112) {
            come_clear_stackframe();
            operator_fun_28=optional$2sFunpbool_value((come_push_stackframe("18field.c", 54),((struct optional$2sFunpbool*)(right_value56=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 54))->funcs,fun_name2_27)))));
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_42=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional113=operator_fun_28,    __freed_obj__ = 0, 
    _if_conditional113) {
        come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61))));
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 63),((struct optional$2sTypephbool*)(right_value64=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 63))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "18field.c", 63))->type,left_value,(_Bool)0,info);
        come_pop_stackframe();
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional120=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 95),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value65=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 95))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "18field.c", 95))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 95))->type, "18field.c", 95))->mHeap,        (right_value65 && right_value65 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional120) {
            if(_if_conditional121=((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->var,            __freed_obj__ = 0, 
            _if_conditional121) {
                if(_if_conditional122=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional122) {
                    __dec_obj28=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName=((void*)0);
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional123=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional123) {
                        __dec_obj29=((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value=(char*)come_increment_ref_count(((char*)(right_value66=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value,info))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional124=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional124) {
                            __dec_obj30=((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value=(char*)come_increment_ref_count(((char*)(right_value67=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value,info))));
                            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj31=((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value=(char*)come_increment_ref_count(((char*)(right_value68=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value,info))));
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional125=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 89))->type, "18field.c", 89))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional125) {
                }
                else {
                    __dec_obj32=((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value=(char*)come_increment_ref_count(((char*)(right_value69=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value,info))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj33=left_value2_44;
            left_value2_44=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_44;
            left_value2_44=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(((struct CVALUE*)come_null_check(left_value, "18field.c", 93))->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 96),((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 96))->mParamTypes,1))))),((struct CVALUE*)come_null_check(middle_value, "18field.c", 96))->type,middle_value,(_Bool)0,info);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional126=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 128),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 128))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "18field.c", 128))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 128))->type, "18field.c", 128))->mHeap,        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional126) {
            if(_if_conditional127=((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->var,            __freed_obj__ = 0, 
            _if_conditional127) {
                if(_if_conditional128=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional128) {
                    __dec_obj35=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName=((void*)0);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional129=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional129) {
                        __dec_obj36=((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value;
                        ((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value,info))));
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional130=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional130) {
                            __dec_obj37=((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value,info))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj38=((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value,info))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional131=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 122))->type, "18field.c", 122))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional131) {
                }
                else {
                    __dec_obj39=((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value;
                    ((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value,info))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj40=middle_value2_49;
            middle_value2_49=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s",((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->c_value))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj41=middle_value2_49;
            middle_value2_49=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(((struct CVALUE*)come_null_check(middle_value, "18field.c", 126))->c_value))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_27)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 129),((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 129))->mParamTypes,2))))),((struct CVALUE*)come_null_check(right_value, "18field.c", 129))->type,right_value,(_Bool)0,info);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional132=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 162),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 162))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_a4)), "18field.c", 162))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 162))->type, "18field.c", 162))->mHeap,        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional132) {
            if(_if_conditional133=((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->var,            __freed_obj__ = 0, 
            _if_conditional133) {
                if(_if_conditional134=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional134) {
                    __dec_obj42=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName=((void*)0);
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional135=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        __dec_obj43=((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value,info))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional136=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            __dec_obj44=((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value,info))));
                            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj45=((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value=(char*)come_increment_ref_count(((char*)(right_value88=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value,info))));
                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional137=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 155))->type, "18field.c", 155))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional137) {
                }
                else {
                    __dec_obj46=((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value=(char*)come_increment_ref_count(((char*)(right_value89=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value,info))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj47=right_value2_50;
            right_value2_50=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj48=right_value2_50;
            right_value2_50=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(((struct CVALUE*)come_null_check(right_value, "18field.c", 159))->c_value))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj49=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 162))->c_value;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s(%s,%s,%s)",fun_name2_27,left_value2_44,middle_value2_49,right_value2_50))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type1_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 164))->mResultType))));
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type2_52=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=solve_generics(result_type1_51,generics_type_24,info))));
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj50=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 168))->type;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 168))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(result_type2_52))));
        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 169))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional138=((struct sType*)come_null_check(result_type2_52, "18field.c", 175))->mHeap,        __freed_obj__ = 0, 
        _if_conditional138) {
            __dec_obj51=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value;
            ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value=(char*)come_increment_ref_count(((char*)(right_value96=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_43, "18field.c", 172))->c_value,(struct sType*)come_increment_ref_count(result_type2_52),info))));
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional139=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_28, "18field.c", 179))->mResultType, "18field.c", 179))->mException,        __freed_obj__ = 0, 
        _if_conditional139) {
            __dec_obj52=((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value;
            ((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value=(char*)come_increment_ref_count(((char*)(right_value97=append_exception_value(((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->c_value,((struct CVALUE*)come_null_check(come_value_43, "18field.c", 176))->type,info))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_43, "18field.c", 179))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 181))->stack, "18field.c", 181)),(struct CVALUE*)come_increment_ref_count(come_value_43));
        __freed_obj__ = 0;
        result_42=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_43 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_44 && !__freed_obj__) { left_value2_44 = come_decrement_ref_count(left_value2_44, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_49 && !__freed_obj__) { middle_value2_49 = come_decrement_ref_count(middle_value2_49, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_50 && !__freed_obj__) { right_value2_50 = come_decrement_ref_count(right_value2_50, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result40__ = result_42;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_27 && !__freed_obj__) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct sType* __result1__;
void* right_value0;
struct sType* result_0;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value3;
struct tuple1$1sTypeph* __dec_obj2;
_Bool _if_conditional23;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional24;
void* right_value5;
char* __dec_obj4;
_Bool _if_conditional25;
void* right_value12;
struct list$1sTypeph* __dec_obj8;
_Bool _if_conditional29;
void* right_value20;
struct list$1sNodeph* __dec_obj12;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional44;
void* right_value28;
struct list$1charph* __dec_obj17;
_Bool _if_conditional48;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value30;
struct sNode* __dec_obj19;
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
void* right_value31;
struct sNode* __dec_obj20;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value32;
char* __dec_obj21;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value33;
char* __dec_obj22;
struct sType* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result1__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result1__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            __dec_obj2=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj8=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj12=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional42=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional42) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional43) {
            __dec_obj13=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj17=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional50) {
            __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result18__ = __result_obj__ = result_0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result18__;
        __freed_obj__ = 0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
_Bool _if_conditional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional2=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional2) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional4=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional4) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional5) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional13) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional16) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional3=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional3) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_1;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_1, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_2, 0, sizeof(struct list_item$1sTypeph*));
                    it_1=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_1!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_2=it_1;
                        __freed_obj__ = 0;
                        it_1=((struct list_item$1sTypeph*)come_null_check(it_1, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_2 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional7=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional7) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_3;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sNodeph*));
                    it_3=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_3!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_4=it_3;
                        __freed_obj__ = 0;
                        it_3=((struct list_item$1sNodeph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional9=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional9) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_5;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*));
                    it_5=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_5!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_6=it_5;
                        __freed_obj__ = 0;
                        it_5=((struct list_item$1charph*)come_null_check(it_5, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional12=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional12) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
struct tuple1$1sTypeph* __result2__;
void* right_value1;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional22;
void* right_value2;
struct sType* __dec_obj1;
struct tuple1$1sTypeph* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(_if_conditional20=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional20) {
                    __result2__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result2__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __dec_obj1=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result3__ = __result_obj__ = result_7;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result3__;
                __freed_obj__ = 0;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional21=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
struct list$1sTypeph* __result4__;
void* right_value6;
void* right_value7;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value11;
struct list$1sTypeph* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
                if(_if_conditional26=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __result4__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result4__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value6=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result7__ = __result_obj__ = result_8;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result7__;
                __freed_obj__ = 0;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result5__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result5__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional27;
void* right_value8;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj5;
_Bool _if_conditional28;
void* right_value9;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj6;
void* right_value10;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj7;
struct list$1sTypeph* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional27=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional27) {
                            litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional28) {
                                litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_12;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_12;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result6__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result6__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
struct list$1sNodeph* __result8__;
void* right_value13;
void* right_value14;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value19;
struct list$1sNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result8__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result8__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value13=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result13__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result13__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result9__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result9__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional31;
void* right_value15;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
_Bool _if_conditional32;
void* right_value16;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
void* right_value17;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result10__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result10__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional33;
struct sNode* __result11__;
void* right_value18;
struct sNode* result_18;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
struct sNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                        if(_if_conditional33=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            __result11__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result11__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(_if_conditional34=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional34) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional35=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional36=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional37=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result12__ = __result_obj__ = result_18;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result12__;
                        __freed_obj__ = 0;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional45;
struct list$1charph* __result14__;
void* right_value22;
void* right_value23;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value27;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
                if(_if_conditional45=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    __result14__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result17__ = __result_obj__ = result_19;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional46;
void* right_value24;
struct list_item$1charph* litem_21;
char* __dec_obj14;
_Bool _if_conditional47;
void* right_value25;
struct list_item$1charph* litem_22;
char* __dec_obj15;
void* right_value26;
struct list_item$1charph* litem_23;
char* __dec_obj16;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional46=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional46) {
                            litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_23;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_23;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result16__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result19__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result19__;
        __freed_obj__ = 0;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_32;
unsigned int it_33;
_Bool _while_condtional7;
_Bool _if_conditional90;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional92;
struct sGenericsFun* __result22__;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct sGenericsFun* __result23__;
struct sGenericsFun* __result24__;
struct sGenericsFun* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_32, 0, sizeof(unsigned int));
memset(&it_33, 0, sizeof(unsigned int));
memset(&right_value39, 0, sizeof(void*));
            hash_32=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_33=hash_32;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional90=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_33],                __freed_obj__ = 0, 
                _if_conditional90) {
                    if(_if_conditional92=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_33], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional92) {
                        __result22__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_33];
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_33++;
                    __freed_obj__ = 0;
                    if(_if_conditional93=it_33>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional93) {
                        it_33=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional94=it_33==hash_32,                        __freed_obj__ = 0, 
                        _if_conditional94) {
                            __result23__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result23__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result24__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result24__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result25__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result25__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional91;
_Bool default_value_34;
_Bool __result20__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_34, 0, sizeof(_Bool));
                        if(_if_conditional91=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional91) {
                            __freed_obj__ = 0;
                            memset(&default_value_34,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result20__ = default_value_34;
                            __freed_obj__ = 0;
                            return __result20__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result21__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result21__;
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

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional95=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_36;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional8;
_Bool _if_conditional106;
void* right_value42;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional107;
void* right_value43;
void* right_value44;
struct optional$2sFunpbool* __result28__;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value45;
void* right_value46;
struct optional$2sFunpbool* __result29__;
void* right_value47;
void* right_value48;
struct optional$2sFunpbool* __result30__;
void* right_value49;
void* right_value50;
struct optional$2sFunpbool* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_36, 0, sizeof(struct sFun*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_36,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_37=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional106=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional106) {
                    if(_if_conditional107=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value42=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_38], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value42 && right_value42 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        __result28__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value44=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value43=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_38],(_Bool)1)));
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional108=it_38>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional108) {
                        it_38=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional109=it_38==hash_37,                        __freed_obj__ = 0, 
                        _if_conditional109) {
                            __result29__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value46=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value45=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_36,(_Bool)0))));
                            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result30__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value48=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value47=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_36,(_Bool)0))));
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result31__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value50=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value49=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_36,(_Bool)0))));
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result27__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result27__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional110;
struct sFun* default_value_39;
struct sFun* __result32__;
struct sFun* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(struct sFun*));
            if(_if_conditional110=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional110) {
                __freed_obj__ = 0;
                memset(&default_value_39,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result32__ = __result_obj__ = default_value_39;
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            else {
                __result33__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional114;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional114=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional115=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
struct list_item$1sTypeph* it_45;
int i_46;
_Bool _while_condtional9;
_Bool _if_conditional117;
void* right_value60;
void* right_value61;
struct optional$2sTypephbool* __result35__;
struct sType* default_value_47;
void* right_value62;
void* right_value63;
struct optional$2sTypephbool* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_46, 0, sizeof(int));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&default_value_47, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            if(_if_conditional116=position<0,            __freed_obj__ = 0, 
            _if_conditional116) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_45=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_46=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_45!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional117=position==i_46,                __freed_obj__ = 0, 
                _if_conditional117) {
                    __result35__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value61=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value60=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_45=((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_46++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_47,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value63=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value62=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_47),(_Bool)0))));
            if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
            if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj27;
struct optional$2sTypephbool* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj27=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result34__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional118=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional118) {
                                if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional119;
struct sType* default_value_48;
struct sType* __result37__;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_48, 0, sizeof(struct sType*));
            if(_if_conditional119=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                __freed_obj__ = 0;
                memset(&default_value_48,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result37__ = __result_obj__ = default_value_48;
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
            }
            else {
                __result38__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional140;
void* right_value98;
struct list_item$1CVALUEph* litem_53;
struct CVALUE* __dec_obj53;
_Bool _if_conditional142;
void* right_value99;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj54;
void* right_value100;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional140=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional140) {
                litem_53=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj53=((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 276))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_53, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj53) { come_call_finalizer(CVALUE_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_53;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_53;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional142=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional142) {
                    litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj54=((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 286))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_54, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj54) { come_call_finalizer(CVALUE_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_54;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_54;
                    __freed_obj__ = 0;
                }
                else {
                    litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj55=((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 296))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_55, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj55) { come_call_finalizer(CVALUE_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_55;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_55;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result39__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional141=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional141) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value101;
char* __dec_obj56;
void* right_value102;
struct sNode* __dec_obj57;
void* right_value103;
struct sNode* __dec_obj58;
void* right_value104;
char* __dec_obj59;
struct sStoreFieldNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 201))->sline=((struct sInfo*)come_null_check(info, "18field.c", 201))->sline;
    __freed_obj__ = 0;
    __dec_obj56=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 202))->sname))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj57=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj58=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj59=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(name))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result41__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
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

char* sStoreFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value105;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_56;
struct sNode* right_57;
void* right_value106;
char* name_58;
_Bool _if_conditional147;
_Bool __result44__;
void* right_value107;
struct CVALUE* left_value_59;
_Bool _if_conditional148;
_Bool __result45__;
void* right_value108;
struct CVALUE* right_value_60;
struct sType* right_type_61;
struct sType* left_type_62;
void* right_value109;
struct sType* left_type2_63;
struct sClass* klass_64;
void* right_value119;
struct sType* field_type_69;
int index_70;
char* child_field_name_71;
void* right_value120;
_Bool _if_conditional154;
_Bool __result53__;
struct list$1tuple2$2charphsTypephph* o2_saved_72;
struct tuple2$2charphsTypeph* field_75;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_78;
struct sType* field_type2_79;
_Bool _if_conditional159;
void* right_value121;
struct sType* __dec_obj60;
_Bool _if_conditional163;
struct list$1tuple2$2charphsTypephph* o2_saved_82;
struct tuple2$2charphsTypeph* field_83;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_84;
struct sType* field_type2_85;
struct sClass* klass2_86;
struct list$1tuple2$2charphsTypephph* o2_saved_87;
struct tuple2$2charphsTypeph* field2_88;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_89;
struct sType* field_type3_90;
_Bool _if_conditional164;
void* right_value122;
char* __dec_obj61;
void* right_value123;
struct sType* __dec_obj62;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value124;
struct sType* __dec_obj63;
_Bool _if_conditional167;
_Bool __result62__;
void* right_value125;
struct CVALUE* come_value_91;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool __result63__;
void* right_value126;
void* right_value127;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value128;
char* c_value_92;
_Bool _if_conditional174;
_Bool _if_conditional175;
char* __dec_obj64;
_Bool _if_conditional176;
void* right_value129;
char* __dec_obj65;
_Bool _if_conditional177;
void* right_value130;
char* __dec_obj66;
void* right_value131;
char* __dec_obj67;
_Bool _if_conditional178;
void* right_value132;
char* __dec_obj68;
void* right_value133;
char* __dec_obj69;
void* right_value134;
char* c_value_93;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __dec_obj70;
_Bool _if_conditional181;
void* right_value135;
char* __dec_obj71;
_Bool _if_conditional182;
void* right_value136;
char* __dec_obj72;
void* right_value137;
char* __dec_obj73;
_Bool _if_conditional183;
void* right_value138;
char* __dec_obj74;
void* right_value139;
char* __dec_obj75;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value140;
char* c_value_94;
_Bool _if_conditional186;
_Bool _if_conditional187;
char* __dec_obj76;
_Bool _if_conditional188;
void* right_value141;
char* __dec_obj77;
_Bool _if_conditional189;
void* right_value142;
char* __dec_obj78;
void* right_value143;
char* __dec_obj79;
_Bool _if_conditional190;
void* right_value144;
char* __dec_obj80;
void* right_value145;
char* __dec_obj81;
void* right_value146;
char* c_value_95;
void* right_value147;
char* __dec_obj82;
void* right_value148;
char* __dec_obj83;
_Bool __result64__;
int right_value_id_96;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value149;
char* c_value_97;
void* right_value150;
char* __dec_obj84;
void* right_value151;
char* c_value_98;
void* right_value152;
char* __dec_obj85;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value153;
char* c_value_99;
void* right_value154;
char* __dec_obj86;
void* right_value155;
char* c_value_100;
void* right_value156;
char* __dec_obj87;
_Bool __result65__;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value157;
char* __dec_obj88;
void* right_value158;
char* __dec_obj89;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value159;
char* __dec_obj90;
void* right_value160;
char* __dec_obj91;
_Bool __result66__;
void* right_value161;
struct sType* __dec_obj92;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_56, 0, sizeof(struct sNode*));
memset(&right_57, 0, sizeof(struct sNode*));
memset(&right_value106, 0, sizeof(void*));
memset(&name_58, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_60, 0, sizeof(struct CVALUE*));
memset(&right_type_61, 0, sizeof(struct sType*));
memset(&left_type_62, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&left_type2_63, 0, sizeof(struct sType*));
memset(&klass_64, 0, sizeof(struct sClass*));
memset(&right_value119, 0, sizeof(void*));
memset(&field_type_69, 0, sizeof(struct sType*));
memset(&index_70, 0, sizeof(int));
memset(&child_field_name_71, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&o2_saved_72, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_75, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_78, 0, sizeof(char*));
memset(&field_type2_79, 0, sizeof(struct sType*));
memset(&field_name_78, 0, sizeof(char*));
memset(&field_type2_79, 0, sizeof(struct sType*));
memset(&right_value121, 0, sizeof(void*));
memset(&o2_saved_82, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_83, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_84, 0, sizeof(char*));
memset(&field_type2_85, 0, sizeof(struct sType*));
memset(&field_name_84, 0, sizeof(char*));
memset(&field_type2_85, 0, sizeof(struct sType*));
memset(&klass2_86, 0, sizeof(struct sClass*));
memset(&o2_saved_87, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_88, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_89, 0, sizeof(char*));
memset(&field_type3_90, 0, sizeof(struct sType*));
memset(&field_name2_89, 0, sizeof(char*));
memset(&field_type3_90, 0, sizeof(struct sType*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&come_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&c_value_92, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&c_value_93, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&c_value_94, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&c_value_95, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_id_96, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&c_value_97, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&c_value_98, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    left_56=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 223))->mLeft;
    __freed_obj__ = 0;
    right_57=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 224))->mRight;
    __freed_obj__ = 0;
    name_58=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 225))->mName))));
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional147=!((struct sNode*)come_null_check(left_56, "18field.c", 231))->compile(((struct sNode*)come_null_check(left_56, "18field.c", 231))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional147) {
        __result44__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional148=!((struct sNode*)come_null_check(right_57, "18field.c", 238))->compile(((struct sNode*)come_null_check(right_57, "18field.c", 238))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional148) {
        __result45__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result45__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_61=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 241))->type;
    __freed_obj__ = 0;
    left_type_62=((struct CVALUE*)come_null_check(left_value_59, "18field.c", 243))->type;
    __freed_obj__ = 0;
    left_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=solve_generics(left_type_62,left_type_62,info))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_64=((struct sType*)come_null_check(left_type2_63, "18field.c", 247))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_64=optional$2sClasspbool_value((come_push_stackframe("18field.c", 248),((struct optional$2sClasspbool*)(right_value119=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 248))->classes,((struct sClass*)come_null_check(klass_64, "18field.c", 248))->mName)))));
    come_pop_stackframe();
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_69=((void*)0);
    __freed_obj__ = 0;
    index_70=0;
    __freed_obj__ = 0;
    child_field_name_71=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_64=optional$2sClasspbool_value((come_push_stackframe("18field.c", 253),((struct optional$2sClasspbool*)(right_value120=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 253))->classes,((struct sClass*)come_null_check(klass_64, "18field.c", 253))->mName)))));
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional154=((struct sClass*)come_null_check(klass_64, "18field.c", 260))->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional154) {
        err_msg(info,"%s fields are null",((struct sClass*)come_null_check(klass_64, "18field.c", 256))->mName);
        __freed_obj__ = 0;
        __result53__ = (_Bool)0;
        if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    o2_saved_72=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_64, "18field.c", 271))->mFields)),field_75=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    field_75=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_72), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_75;
        field_name_78=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_79=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional159=string_operator_equals(field_name_78,name_58),        __freed_obj__ = 0, 
        _if_conditional159) {
            __dec_obj60=field_type_69;
            field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(field_type2_79))));
            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_78 && !__freed_obj__) { field_name_78 = come_decrement_ref_count(field_name_78, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_70++;
        __freed_obj__ = 0;
        if(field_name_78 && !__freed_obj__) { field_name_78 = come_decrement_ref_count(field_name_78, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional163=index_70==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_64, "18field.c", 306))->mFields, "18field.c", 306))),    __freed_obj__ = 0, 
    _if_conditional163) {
        index_70=0;
        __freed_obj__ = 0;
        for(
        o2_saved_82=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_64, "18field.c", 300))->mFields)),field_83=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        field_83=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_82), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_83;
            field_name_84=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_85=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_86=((struct sType*)come_null_check(field_type2_85, "18field.c", 276))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_86, "18field.c", 288))->mFields)),field2_88=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            field2_88=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_88;
                field_name2_89=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_90=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional164=string_operator_equals(field_name2_89,name_58),                __freed_obj__ = 0, 
                _if_conditional164) {
                    __dec_obj61=child_field_name_71;
                    child_field_name_71=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(field_name_84))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj62=field_type_69;
                    field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(field_type3_90))));
                    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_89 && !__freed_obj__) { field_name2_89 = come_decrement_ref_count(field_name2_89, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_89 && !__freed_obj__) { field_name2_89 = come_decrement_ref_count(field_name2_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_90, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_87 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional165=child_field_name_71,            __freed_obj__ = 0, 
            _if_conditional165) {
                if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional166=string_operator_equals(field_name_84,name_58),            __freed_obj__ = 0, 
            _if_conditional166) {
                __dec_obj63=field_type_69;
                field_type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(field_type2_85))));
                if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_70++;
            __freed_obj__ = 0;
            if(field_name_84 && !__freed_obj__) { field_name_84 = come_decrement_ref_count(field_name_84, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_82 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional167=index_70==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_64, "18field.c", 304))->mFields, "18field.c", 304))),        __freed_obj__ = 0, 
        _if_conditional167) {
            err_msg(info,"field not found(%s) in %s(1)",name_58,((struct sClass*)come_null_check(klass_64, "18field.c", 301))->mName);
            __freed_obj__ = 0;
            __result62__ = (_Bool)0;
            if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result62__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 306))));
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional168=((struct sType*)come_null_check(field_type_69, "18field.c", 320))->mHeap&&!((struct sType*)come_null_check(right_type_61, "18field.c", 320))->mHeap,    __freed_obj__ = 0, 
    _if_conditional168) {
        if(_if_conditional169=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_61, "18field.c", 318))->mClass, "18field.c", 318))->mName,"void")&&((struct sType*)come_null_check(right_type_61, "18field.c", 318))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional169) {
        }
        else {
            if(_if_conditional170=!((struct sType*)come_null_check(right_type_61, "18field.c", 317))->mDelegate&&!((struct sType*)come_null_check(right_type_61, "18field.c", 317))->mShare,            __freed_obj__ = 0, 
            _if_conditional170) {
                err_msg(info,"require right value as heap object(%s)",name_58);
                __freed_obj__ = 0;
                __result63__ = (_Bool)0;
                if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result63__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    check_assign_type(((char*)(right_value127=xsprintf("\%s is assigned to",((char*)(right_value126=string_to_string(name_58)))))),field_type_69,right_type_61,right_value_60,(_Bool)0,info);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional171=((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional171) {
        if(_if_conditional172=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional172) {
            if(_if_conditional173=child_field_name_71,            __freed_obj__ = 0, 
            _if_conditional173) {
                c_value_92=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 325))->c_value,child_field_name_71,name_58))));
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_69,c_value_92,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional174=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 352))->var,                __freed_obj__ = 0, 
                _if_conditional174) {
                    if(_if_conditional175=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        __dec_obj64=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 329))->var, "18field.c", 329))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 329))->var, "18field.c", 329))->mCValueName=((void*)0);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional176=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional176) {
                            __dec_obj65=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value=(char*)come_increment_ref_count(((char*)(right_value129=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 332))->c_value,info))));
                            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional177=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional177) {
                                __dec_obj66=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value=(char*)come_increment_ref_count(((char*)(right_value130=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 335))->c_value,info))));
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj67=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value=(char*)come_increment_ref_count(((char*)(right_value131=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 338))->c_value,info))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional178=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 351))->type, "18field.c", 351))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional178) {
                    }
                    else {
                        __dec_obj68=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value=(char*)come_increment_ref_count(((char*)(right_value132=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 349))->c_value,info))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj69=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 352))->c_value;
                ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 352))->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 352))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 352))->c_value))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_92 && !__freed_obj__) { c_value_92 = come_decrement_ref_count(c_value_92, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_93=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 355))->c_value,name_58))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_69,c_value_93,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional179=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 382))->var,                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 359))->var, "18field.c", 359))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 359))->var, "18field.c", 359))->mCValueName=((void*)0);
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            __dec_obj71=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 362))->c_value,info))));
                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional182=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional182) {
                                __dec_obj72=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value=(char*)come_increment_ref_count(((char*)(right_value136=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 365))->c_value,info))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj73=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value=(char*)come_increment_ref_count(((char*)(right_value137=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 368))->c_value,info))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional183=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 381))->type, "18field.c", 381))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                    }
                    else {
                        __dec_obj74=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value=(char*)come_increment_ref_count(((char*)(right_value138=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 379))->c_value,info))));
                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj75=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 382))->c_value;
                ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 382))->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 382))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 382))->c_value))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_93 && !__freed_obj__) { c_value_93 = come_decrement_ref_count(c_value_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional184=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional184) {
                if(_if_conditional185=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional185) {
                    c_value_94=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 387))->c_value,child_field_name_71,name_58))));
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_94,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional186=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 414))->var,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        if(_if_conditional187=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional187) {
                            __dec_obj76=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 391))->var, "18field.c", 391))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 391))->var, "18field.c", 391))->mCValueName=((void*)0);
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional188=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional188) {
                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value=(char*)come_increment_ref_count(((char*)(right_value141=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 394))->c_value,info))));
                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional189=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional189) {
                                    __dec_obj78=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value=(char*)come_increment_ref_count(((char*)(right_value142=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 397))->c_value,info))));
                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj79=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 400))->c_value,info))));
                                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional190=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 413))->type, "18field.c", 413))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional190) {
                        }
                        else {
                            __dec_obj80=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value=(char*)come_increment_ref_count(((char*)(right_value144=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 411))->c_value,info))));
                            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj81=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 414))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 414))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 414))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 414))->c_value))));
                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_94 && !__freed_obj__) { c_value_94 = come_decrement_ref_count(c_value_94, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_95=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 417))->c_value,name_58))));
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_95,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj82=((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value;
                    ((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->type,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 419))->c_value,info))));
                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj83=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 420))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 420))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 420))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 420))->c_value))));
                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_95 && !__freed_obj__) { c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 424))->type, "18field.c", 424))->mPointerNum);
                __freed_obj__ = 0;
                __result64__ = (_Bool)0;
                if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result64__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        right_value_id_96=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_60, "18field.c", 427))->c_value));
        __freed_obj__ = 0;
        if(_if_conditional191=right_value_id_96!=-1,        __freed_obj__ = 0, 
        _if_conditional191) {
            remove_object_from_right_values(right_value_id_96,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional192=((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_69, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_61, "18field.c", 487))->mClass, "18field.c", 487))->mName,"void"),        __freed_obj__ = 0, 
        _if_conditional192) {
            if(_if_conditional193=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional193) {
                if(_if_conditional194=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional194) {
                    c_value_97=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 437))->c_value,child_field_name_71,name_58))));
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_97,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj84=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 439))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 439))->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 439))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 439))->c_value))));
                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_98=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 442))->c_value,name_58))));
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_69,c_value_98,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj85=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 444))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 444))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 444))->c_value))));
                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_98 && !__freed_obj__) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional195=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional195) {
                    if(_if_conditional196=child_field_name_71,                    __freed_obj__ = 0, 
                    _if_conditional196) {
                        c_value_99=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 449))->c_value,child_field_name_71,name_58))));
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_69,c_value_99,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj86=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 451))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 451))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 451))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 451))->c_value))));
                        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_100=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 454))->c_value,name_58))));
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_69,c_value_100,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj87=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 456))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 456))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 456))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 456))->c_value))));
                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 460))->type, "18field.c", 460))->mPointerNum);
                    __freed_obj__ = 0;
                    __result65__ = (_Bool)0;
                    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result65__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional197=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                if(_if_conditional198=child_field_name_71,                __freed_obj__ = 0, 
                _if_conditional198) {
                    __dec_obj88=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 467))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 467))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 467))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 467))->c_value))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj89=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 470))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 470))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 470))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 470))->c_value))));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional199=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    if(_if_conditional200=child_field_name_71,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        __dec_obj90=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 475))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 475))->c_value,child_field_name_71,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 475))->c_value))));
                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj91=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 478))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 478))->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_59, "18field.c", 478))->c_value,name_58,((struct CVALUE*)come_null_check(right_value_60, "18field.c", 478))->c_value))));
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_58,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_59, "18field.c", 482))->type, "18field.c", 482))->mPointerNum);
                    __freed_obj__ = 0;
                    __result66__ = (_Bool)0;
                    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result66__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj92=((struct CVALUE*)come_null_check(come_value_91, "18field.c", 487))->type;
    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 487))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(field_type_69))));
    if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_91, "18field.c", 488))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 490))->stack, "18field.c", 490)),(struct CVALUE*)come_increment_ref_count(come_value_91));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_91, "18field.c", 492))->c_value);
    __freed_obj__ = 0;
    __result67__ = (_Bool)1;
    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
    if(name_58 && !__freed_obj__) { name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_71 && !__freed_obj__) { child_field_name_71 = come_decrement_ref_count(child_field_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
_Bool _while_condtional10;
_Bool _if_conditional149;
void* right_value110;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional150;
void* right_value111;
void* right_value112;
struct optional$2sClasspbool* __result47__;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value113;
void* right_value114;
struct optional$2sClasspbool* __result48__;
void* right_value115;
void* right_value116;
struct optional$2sClasspbool* __result49__;
void* right_value117;
void* right_value118;
struct optional$2sClasspbool* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_65, 0, sizeof(struct sClass*));
memset(&hash_66, 0, sizeof(unsigned int));
memset(&it_67, 0, sizeof(unsigned int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_65,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_66=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
        __freed_obj__ = 0;
        it_67=hash_66;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional149=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_67],            __freed_obj__ = 0, 
            _if_conditional149) {
                if(_if_conditional150=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value110=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_67], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional150) {
                    __result47__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value112=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value111=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_67],(_Bool)1)));
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_67++;
                __freed_obj__ = 0;
                if(_if_conditional151=it_67>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                __freed_obj__ = 0, 
                _if_conditional151) {
                    it_67=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional152=it_67==hash_66,                    __freed_obj__ = 0, 
                    _if_conditional152) {
                        __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value114=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value113=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_65,(_Bool)0))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result48__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result49__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value116=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value115=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_65,(_Bool)0))));
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result50__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value118=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value117=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_65,(_Bool)0))));
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result50__;
        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result46__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result46__;
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
_Bool _if_conditional153;
struct sClass* default_value_68;
struct sClass* __result51__;
struct sClass* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_68, 0, sizeof(struct sClass*));
        if(_if_conditional153=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional153) {
            __freed_obj__ = 0;
            memset(&default_value_68,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = default_value_68;
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
        }
        else {
            __result52__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result52__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional155;
struct tuple2$2charphsTypeph* result_73;
struct tuple2$2charphsTypeph* __result54__;
_Bool _if_conditional156;
struct tuple2$2charphsTypeph* __result55__;
struct tuple2$2charphsTypeph* result_74;
struct tuple2$2charphsTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_74, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional155=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional155) {
            __freed_obj__ = 0;
            memset(&result_73,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result54__ = __result_obj__ = result_73;
            __freed_obj__ = 0;
            return __result54__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional156=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional156) {
            __result55__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result55__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_74,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = result_74;
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result57__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional157;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result58__;
_Bool _if_conditional158;
struct tuple2$2charphsTypeph* __result59__;
struct tuple2$2charphsTypeph* result_77;
struct tuple2$2charphsTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_77, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional157=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            __freed_obj__ = 0;
            memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result58__ = __result_obj__ = result_76;
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional158=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional158) {
            __result59__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result59__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_77,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result60__ = __result_obj__ = result_77;
        __freed_obj__ = 0;
        return __result60__;
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_80;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_80, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_80=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_80!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_81=it_80;
            __freed_obj__ = 0;
            it_80=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_80, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_81 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional160=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional161=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional161) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional162=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional162) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result61__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 499))->sline;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value162;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value162=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 504))->sname)));
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value163;
char* __dec_obj93;
void* right_value164;
struct sNode* __dec_obj94;
struct sNullCheckNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 519))->sline=((struct sInfo*)come_null_check(info, "18field.c", 519))->sline;
    __freed_obj__ = 0;
    __dec_obj93=((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 520))->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj94=((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 523))->mOnlyNullCecker=only_null_checker;
    __freed_obj__ = 0;
    __result70__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value165;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sNullCheckNode")));
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_101;
_Bool _if_conditional203;
_Bool __result73__;
void* right_value166;
struct CVALUE* left_value_102;
_Bool _if_conditional204;
void* right_value167;
char* method_name_103;
void* right_value169;
_Bool _if_conditional209;
struct sType* obj_type_106;
_Bool _if_conditional225;
struct sType* obj_type2_107;
void* right_value170;
void* right_value171;
char* __dec_obj95;
void* right_value172;
struct sFun* fun_108;
_Bool _if_conditional226;
_Bool __result78__;
void* right_value173;
struct sType* type_109;
void* right_value174;
struct CVALUE* come_value_110;
void* right_value175;
char* __dec_obj96;
void* right_value176;
struct sType* __dec_obj97;
_Bool _if_conditional227;
void* right_value177;
struct CVALUE* come_value_111;
void* right_value178;
void* right_value179;
char* __dec_obj98;
void* right_value180;
struct sType* __dec_obj99;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_101, 0, sizeof(struct sNode*));
memset(&right_value166, 0, sizeof(void*));
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&method_name_103, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&obj_type_106, 0, sizeof(struct sType*));
memset(&obj_type2_107, 0, sizeof(struct sType*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&fun_108, 0, sizeof(struct sFun*));
memset(&right_value173, 0, sizeof(void*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&come_value_111, 0, sizeof(struct CVALUE*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
    left_101=((struct sNullCheckNode*)come_null_check(self, "18field.c", 540))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional203=!((struct sNode*)come_null_check(left_101, "18field.c", 546))->compile(((struct sNode*)come_null_check(left_101, "18field.c", 546))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional203) {
        __result73__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional204=!((struct sNullCheckNode*)come_null_check(self, "18field.c", 598))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass, "18field.c", 598))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional204) {
        method_name_103=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 550))->type,(_Bool)0,"expect",info))));
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional209=((struct sFun*)(right_value169=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs, "18field.c", 564)),method_name_103,((void*)0))))==((void*)0),        (right_value169 && right_value169 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional209) {
            obj_type_106=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 553))->type, "18field.c", 553))->mNoSolvedGenericsType, "18field.c", 553))->v1;
            __freed_obj__ = 0;
            if(_if_conditional225=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_106, "18field.c", 562))->mGenericsTypes, "18field.c", 562)))>0,            __freed_obj__ = 0, 
            _if_conditional225) {
                obj_type2_107=((struct CVALUE*)come_null_check(left_value_102, "18field.c", 555))->type;
                __freed_obj__ = 0;
                __dec_obj95=method_name_103;
                method_name_103=(char*)come_increment_ref_count(((char*)(right_value171=make_generics_function(obj_type2_107,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("expect")))),info))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 559))->type, "18field.c", 559))->mClass, "18field.c", 559))->mName);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        fun_108=optional$2sFunpbool_value((come_push_stackframe("18field.c", 564),((struct optional$2sFunpbool*)(right_value172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs,method_name_103)))));
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional226=fun_108==((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            err_msg(info,"function not found(%s)",method_name_103);
            __freed_obj__ = 0;
            __result78__ = (_Bool)1;
            if(method_name_103 && !__freed_obj__) { method_name_103 = come_decrement_ref_count(method_name_103, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result78__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(((struct sFun*)come_null_check(fun_108, "18field.c", 571))->mResultType,((struct CVALUE*)come_null_check(left_value_102, "18field.c", 571))->type,info))));
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573))));
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value_110, "18field.c", 575))->c_value;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 575))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s(%s)",method_name_103,((struct CVALUE*)come_null_check(left_value_102, "18field.c", 575))->c_value))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj97=((struct CVALUE*)come_null_check(come_value_110, "18field.c", 576))->type;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 576))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type_109))));
        if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_110, "18field.c", 577))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 579))->stack, "18field.c", 579)),(struct CVALUE*)come_increment_ref_count(come_value_110));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_110, "18field.c", 581))->c_value);
        __freed_obj__ = 0;
        if(method_name_103 && !__freed_obj__) { method_name_103 = come_decrement_ref_count(method_name_103, (void*)0, (void*)0, 0, 0, 0); }
        if(type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional227=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 598))->type, "18field.c", 598))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional227) {
            come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 584))));
            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj98=((struct CVALUE*)come_null_check(come_value_111, "18field.c", 586))->c_value;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 586))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect((come_push_stackframe("18field.c", 586),((struct optional$2charphbool*)(right_value178=make_type_name_string(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 586))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct CVALUE*)come_null_check(left_value_102, "18field.c", 586))->c_value,((struct sInfo*)come_null_check(info, "18field.c", 586))->sname,((struct sInfo*)come_null_check(info, "18field.c", 586))->sline))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj99=((struct CVALUE*)come_null_check(come_value_111, "18field.c", 587))->type;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 587))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(((struct CVALUE*)come_null_check(left_value_102, "18field.c", 587))->type))));
            if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_111, "18field.c", 588))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 590))->stack, "18field.c", 590)),(struct CVALUE*)come_increment_ref_count(come_value_111));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_111, "18field.c", 592))->c_value);
            __freed_obj__ = 0;
            if(come_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 595))->stack, "18field.c", 595)),(struct CVALUE*)come_increment_ref_count(left_value_102));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result80__ = (_Bool)1;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_104;
unsigned int it_105;
_Bool _while_condtional12;
_Bool _if_conditional205;
void* right_value168;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional206;
struct sFun* __result74__;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sFun* __result75__;
struct sFun* __result76__;
struct sFun* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_104, 0, sizeof(unsigned int));
memset(&it_105, 0, sizeof(unsigned int));
memset(&right_value168, 0, sizeof(void*));
            hash_104=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_105=hash_104;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional205=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_105],                __freed_obj__ = 0, 
                _if_conditional205) {
                    if(_if_conditional206=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value168=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_105], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                    (right_value168 && right_value168 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result74__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_105];
                        __freed_obj__ = 0;
                        return __result74__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_105++;
                    __freed_obj__ = 0;
                    if(_if_conditional207=it_105>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        it_105=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional208=it_105==hash_104,                        __freed_obj__ = 0, 
                        _if_conditional208) {
                            __result75__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result76__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional210=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional211=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional211) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional212=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional212) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional213=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional222=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional222) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional217=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional217) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional218=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional218) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional228;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional228=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional228) {
                    puts("Exception: at");
                    __freed_obj__ = 0;
                    come_show_stackframe();
                    __freed_obj__ = 0;
                    puts("abort.");
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result79__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional229=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional229) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = ((struct sNullCheckNode*)come_null_check(self, "18field.c", 603))->sline;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value181;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(right_value181=__builtin_string(((struct sNullCheckNode*)come_null_check(self, "18field.c", 608))->sname)));
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value182;
char* __dec_obj100;
void* right_value183;
struct sNode* __dec_obj101;
struct sExceptionGetValueNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 621))->sline=((struct sInfo*)come_null_check(info, "18field.c", 621))->sline;
    __freed_obj__ = 0;
    __dec_obj100=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 622))->sname))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj101=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(left))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result83__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value184;
struct CVALUE* left_value_112;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value185;
char* method_name_113;
void* right_value186;
_Bool _if_conditional234;
struct sType* obj_type_114;
_Bool _if_conditional235;
struct sType* obj_type2_115;
void* right_value187;
void* right_value188;
char* __dec_obj102;
void* right_value189;
struct sFun* fun_116;
_Bool _if_conditional236;
_Bool __result85__;
void* right_value190;
struct sType* type_117;
void* right_value191;
struct CVALUE* come_value_118;
void* right_value192;
char* __dec_obj103;
void* right_value193;
struct sType* __dec_obj104;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&left_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&method_name_113, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_114, 0, sizeof(struct sType*));
memset(&obj_type2_115, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&fun_116, 0, sizeof(struct sFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    left_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional232=left_value_112==((void*)0),    __freed_obj__ = 0, 
    _if_conditional232) {
    }
    else {
        if(_if_conditional233=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass, "18field.c", 681))->mName,"optional"),        __freed_obj__ = 0, 
        _if_conditional233) {
            method_name_113=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 642))->type,(_Bool)0,"expect",info))));
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional234=((struct sFun*)(right_value186=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs, "18field.c", 656)),method_name_113,((void*)0))))==((void*)0),            (right_value186 && right_value186 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional234) {
                obj_type_114=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 645))->type, "18field.c", 645))->mNoSolvedGenericsType, "18field.c", 645))->v1;
                __freed_obj__ = 0;
                if(_if_conditional235=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_114, "18field.c", 654))->mGenericsTypes, "18field.c", 654)))>0,                __freed_obj__ = 0, 
                _if_conditional235) {
                    obj_type2_115=((struct CVALUE*)come_null_check(left_value_112, "18field.c", 647))->type;
                    __freed_obj__ = 0;
                    __dec_obj102=method_name_113;
                    method_name_113=(char*)come_increment_ref_count(((char*)(right_value188=make_generics_function(obj_type2_115,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("value")))),info))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "18field.c", 651))->type, "18field.c", 651))->mClass, "18field.c", 651))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_116=optional$2sFunpbool_value((come_push_stackframe("18field.c", 656),((struct optional$2sFunpbool*)(right_value189=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs,method_name_113)))));
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional236=fun_116==((void*)0),            __freed_obj__ = 0, 
            _if_conditional236) {
                err_msg(info,"function not found(%s)",method_name_113);
                __freed_obj__ = 0;
                __result85__ = (_Bool)1;
                if(method_name_113 && !__freed_obj__) { method_name_113 = come_decrement_ref_count(method_name_113, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(((struct sFun*)come_null_check(fun_116, "18field.c", 663))->mResultType,((struct CVALUE*)come_null_check(left_value_112, "18field.c", 663))->type,info))));
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 665))));
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj103=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 667))->c_value;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 667))->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s(%s)",method_name_113,((struct CVALUE*)come_null_check(left_value_112, "18field.c", 667))->c_value))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj104=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 668))->type;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 668))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(type_117))));
            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 669))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 671))->stack, "18field.c", 671)),(struct CVALUE*)come_increment_ref_count(come_value_118));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_118, "18field.c", 673))->c_value);
            __freed_obj__ = 0;
            if(method_name_113 && !__freed_obj__) { method_name_113 = come_decrement_ref_count(method_name_113, (void*)0, (void*)0, 0, 0, 0); }
            if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 676))->stack, "18field.c", 676)),(struct CVALUE*)come_increment_ref_count(left_value_112));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(left_value_112, "18field.c", 678))->c_value);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result86__ = (_Bool)1;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value194;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
    __result87__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_119;
_Bool _if_conditional237;
_Bool __result88__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_119, 0, sizeof(struct sNode*));
    left_119=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 691))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional237=!((struct sNode*)come_null_check(left_119, "18field.c", 697))->compile(((struct sNode*)come_null_check(left_119, "18field.c", 697))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional237) {
        __result88__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result88__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result89__ = compiletime_get_exception_value(info);
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 702))->sline;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value195;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result91__ = __result_obj__ = ((char*)(right_value195=__builtin_string(((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 707))->sname)));
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value196;
void* right_value197;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value203;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 712);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value197=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value196=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 712)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result94__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value204;
char* __dec_obj109;
void* right_value205;
struct sNode* __dec_obj110;
void* right_value206;
char* __dec_obj111;
struct sLoadFieldNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 726))->sline=((struct sInfo*)come_null_check(info, "18field.c", 726))->sline;
    __freed_obj__ = 0;
    __dec_obj109=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 727))->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj110=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj111=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(name))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value207;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_121;
void* right_value208;
char* name_122;
_Bool _if_conditional251;
_Bool __result98__;
void* right_value209;
struct CVALUE* left_value_123;
struct sType* left_type_124;
void* right_value210;
struct sType* left_type2_125;
struct sClass* klass_126;
void* right_value211;
struct sType* field_type_127;
int index_128;
char* child_field_name_129;
void* right_value212;
struct list$1tuple2$2charphsTypephph* o2_saved_130;
struct tuple2$2charphsTypeph* field_131;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_132;
struct sType* field_type2_133;
_Bool _if_conditional252;
void* right_value213;
struct sType* __dec_obj112;
_Bool _if_conditional253;
struct list$1tuple2$2charphsTypephph* o2_saved_134;
struct tuple2$2charphsTypeph* field_135;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_136;
struct sType* field_type2_137;
struct sClass* klass2_138;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* field2_140;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_141;
struct sType* field_type3_142;
_Bool _if_conditional254;
void* right_value214;
char* __dec_obj113;
void* right_value215;
struct sType* __dec_obj114;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value216;
struct sType* __dec_obj115;
_Bool _if_conditional257;
_Bool __result99__;
void* right_value217;
struct CVALUE* come_value_143;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value218;
char* __dec_obj116;
void* right_value219;
char* __dec_obj117;
_Bool _if_conditional260;
void* right_value220;
char* __dec_obj118;
void* right_value221;
char* __dec_obj119;
void* right_value222;
struct sType* __dec_obj120;
_Bool _if_conditional261;
void* right_value223;
struct sType* __dec_obj121;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_121, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&name_122, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&left_value_123, 0, sizeof(struct CVALUE*));
memset(&left_type_124, 0, sizeof(struct sType*));
memset(&right_value210, 0, sizeof(void*));
memset(&left_type2_125, 0, sizeof(struct sType*));
memset(&klass_126, 0, sizeof(struct sClass*));
memset(&right_value211, 0, sizeof(void*));
memset(&field_type_127, 0, sizeof(struct sType*));
memset(&index_128, 0, sizeof(int));
memset(&child_field_name_129, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&o2_saved_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_131, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_132, 0, sizeof(char*));
memset(&field_type2_133, 0, sizeof(struct sType*));
memset(&field_name_132, 0, sizeof(char*));
memset(&field_type2_133, 0, sizeof(struct sType*));
memset(&right_value213, 0, sizeof(void*));
memset(&o2_saved_134, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_135, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_136, 0, sizeof(char*));
memset(&field_type2_137, 0, sizeof(struct sType*));
memset(&field_name_136, 0, sizeof(char*));
memset(&field_type2_137, 0, sizeof(struct sType*));
memset(&klass2_138, 0, sizeof(struct sClass*));
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_140, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_141, 0, sizeof(char*));
memset(&field_type3_142, 0, sizeof(struct sType*));
memset(&field_name2_141, 0, sizeof(char*));
memset(&field_type3_142, 0, sizeof(struct sType*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
    left_121=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 747))->mLeft;
    __freed_obj__ = 0;
    name_122=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 748))->mName))));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional251=!((struct sNode*)come_null_check(left_121, "18field.c", 754))->compile(((struct sNode*)come_null_check(left_121, "18field.c", 754))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result98__ = (_Bool)0;
        if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_124=((struct CVALUE*)come_null_check(left_value_123, "18field.c", 757))->type;
    __freed_obj__ = 0;
    left_type2_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(left_type_124,left_type_124,info))));
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_126=((struct sType*)come_null_check(left_type2_125, "18field.c", 761))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_126=optional$2sClasspbool_value((come_push_stackframe("18field.c", 762),((struct optional$2sClasspbool*)(right_value211=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 762))->classes,((struct sClass*)come_null_check(klass_126, "18field.c", 762))->mName)))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_127=((void*)0);
    __freed_obj__ = 0;
    index_128=0;
    __freed_obj__ = 0;
    child_field_name_129=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_126=optional$2sClasspbool_value((come_push_stackframe("18field.c", 767),((struct optional$2sClasspbool*)(right_value212=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 767))->classes,((struct sClass*)come_null_check(klass_126, "18field.c", 767))->mName)))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_126, "18field.c", 779))->mFields)),field_131=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    field_131=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_130), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_131;
        field_name_132=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_133=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional252=string_operator_equals(field_name_132,name_122),        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj112=field_type_127;
            field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(field_type2_133))));
            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_132 && !__freed_obj__) { field_name_132 = come_decrement_ref_count(field_name_132, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_128++;
        __freed_obj__ = 0;
        if(field_name_132 && !__freed_obj__) { field_name_132 = come_decrement_ref_count(field_name_132, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_130 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional253=index_128==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_126, "18field.c", 814))->mFields, "18field.c", 814))),    __freed_obj__ = 0, 
    _if_conditional253) {
        index_128=0;
        __freed_obj__ = 0;
        for(
        o2_saved_134=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_126, "18field.c", 808))->mFields)),field_135=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        field_135=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_134), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_135;
            field_name_136=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_137=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_138=((struct sType*)come_null_check(field_type2_137, "18field.c", 784))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_138, "18field.c", 796))->mFields)),field2_140=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            field2_140=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_140;
                field_name2_141=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_142=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional254=string_operator_equals(field_name2_141,name_122),                __freed_obj__ = 0, 
                _if_conditional254) {
                    __dec_obj113=child_field_name_129;
                    child_field_name_129=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(field_name_136))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj114=field_type_127;
                    field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(field_type3_142))));
                    if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_141 && !__freed_obj__) { field_name2_141 = come_decrement_ref_count(field_name2_141, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_141 && !__freed_obj__) { field_name2_141 = come_decrement_ref_count(field_name2_141, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional255=child_field_name_129,            __freed_obj__ = 0, 
            _if_conditional255) {
                if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional256=string_operator_equals(field_name_136,name_122),            __freed_obj__ = 0, 
            _if_conditional256) {
                __dec_obj115=field_type_127;
                field_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(field_type2_137))));
                if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_128++;
            __freed_obj__ = 0;
            if(field_name_136 && !__freed_obj__) { field_name_136 = come_decrement_ref_count(field_name_136, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_137, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_134 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_134, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional257=index_128==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_126, "18field.c", 812))->mFields, "18field.c", 812))),        __freed_obj__ = 0, 
        _if_conditional257) {
            err_msg(info,"field not found(%s) in %s(2)",name_122,((struct sClass*)come_null_check(klass_126, "18field.c", 809))->mName);
            __freed_obj__ = 0;
            __result99__ = (_Bool)0;
            if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result99__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 814))));
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional258=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_123, "18field.c", 832))->type, "18field.c", 832))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional258) {
        if(_if_conditional259=child_field_name_129,        __freed_obj__ = 0, 
        _if_conditional259) {
            __dec_obj116=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 818))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 818))->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 818))->c_value,child_field_name_129,name_122))));
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj117=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 821))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 821))->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 821))->c_value,name_122))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional260=child_field_name_129,        __freed_obj__ = 0, 
        _if_conditional260) {
            __dec_obj118=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 826))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 826))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 826))->c_value,child_field_name_129,name_122))));
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj119=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 829))->c_value;
            ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 829))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_123, "18field.c", 829))->c_value,name_122))));
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj120=((struct CVALUE*)come_null_check(come_value_143, "18field.c", 832))->type;
    ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 832))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type_127))));
    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_143, "18field.c", 833))->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional261=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 843))->type, "18field.c", 843))->mArrayNum, "18field.c", 843)))==1,    __freed_obj__ = 0, 
    _if_conditional261) {
        __dec_obj121=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 836))->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 838))->type, "18field.c", 838))->mArrayNum, "18field.c", 838)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 839))->type, "18field.c", 839))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 840))->type, "18field.c", 840))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_143, "18field.c", 840))->type, "18field.c", 840))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 843))->stack, "18field.c", 843)),(struct CVALUE*)come_increment_ref_count(come_value_143));
    __freed_obj__ = 0;
    __result102__ = (_Bool)1;
    if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
    if(name_122 && !__freed_obj__) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_129 && !__freed_obj__) { child_field_name_129 = come_decrement_ref_count(child_field_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result100__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_144;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_145;
struct list$1sNodeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_144, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_145, 0, sizeof(struct list_item$1sNodeph*));
            it_144=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_144!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_145=it_144;
                __freed_obj__ = 0;
                it_144=((struct list_item$1sNodeph*)come_null_check(it_144, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_145 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 850))->sline;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value224;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value224, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value224=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 855))->sname)));
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value225;
char* __dec_obj122;
void* right_value226;
struct sNode* __dec_obj123;
void* right_value227;
struct sNode* __dec_obj124;
void* right_value228;
struct list$1sNodeph* __dec_obj125;
struct sStoreArrayNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 871))->sline=((struct sInfo*)come_null_check(info, "18field.c", 871))->sline;
    __freed_obj__ = 0;
    __dec_obj122=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 872))->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj123=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj124=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj125=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value228=list$1sNodephp_clone(array_num))));
    if(__dec_obj125) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->mQuote=quote;
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value229;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_146;
struct sNode* right_147;
struct list$1sNodeph* array_num_nodes_148;
_Bool _if_conditional266;
_Bool __result108__;
void* right_value230;
struct CVALUE* left_value_149;
struct sType* left_type_150;
void* right_value231;
void* right_value232;
struct list$1CVALUEph* array_num_153;
struct list$1sNodeph* o2_saved_154;
struct sNode* it_157;
_Bool _for_condtionalA8;
_Bool _if_conditional271;
_Bool __result117__;
void* right_value233;
struct CVALUE* c_value_160;
_Bool _if_conditional272;
_Bool __result118__;
void* right_value234;
struct CVALUE* right_value_161;
struct sType* right_type_162;
struct sClass* klass_163;
void* right_value235;
struct sType* type_164;
char* fun_name_165;
_Bool calling_fun_166;
_Bool _if_conditional273;
void* right_value240;
_Bool _if_conditional278;
void* right_value241;
struct CVALUE* come_value_171;
_Bool _if_conditional279;
int i_172;
_Bool _for_condtionalA9;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value242;
void* right_value243;
struct buffer* buf_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_189;
_Bool _for_condtionalA10;
void* right_value244;
void* right_value245;
char* left_value_code_192;
void* right_value246;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
char* __dec_obj127;
_Bool _if_conditional308;
void* right_value247;
char* __dec_obj128;
_Bool _if_conditional309;
void* right_value248;
char* __dec_obj129;
void* right_value249;
char* __dec_obj130;
_Bool _if_conditional310;
void* right_value250;
char* __dec_obj131;
void* right_value251;
char* __dec_obj132;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
char* __dec_obj133;
_Bool _if_conditional314;
void* right_value252;
char* __dec_obj134;
_Bool _if_conditional315;
void* right_value253;
char* __dec_obj135;
void* right_value254;
char* __dec_obj136;
_Bool _if_conditional316;
void* right_value255;
char* __dec_obj137;
void* right_value256;
char* __dec_obj138;
_Bool __result134__;
int right_value_id_193;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value257;
char* __dec_obj139;
_Bool _if_conditional319;
void* right_value258;
char* __dec_obj140;
_Bool __result135__;
void* right_value259;
struct sType* result_type_194;
void* right_value260;
void* right_value261;
struct list$1sNodeph* __dec_obj141;
struct sType* __dec_obj142;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_146, 0, sizeof(struct sNode*));
memset(&right_147, 0, sizeof(struct sNode*));
memset(&array_num_nodes_148, 0, sizeof(struct list$1sNodeph*));
memset(&right_value230, 0, sizeof(void*));
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&left_type_150, 0, sizeof(struct sType*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&array_num_153, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_154, 0, sizeof(struct list$1sNodeph*));
memset(&it_157, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&c_value_160, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value_161, 0, sizeof(struct CVALUE*));
memset(&right_type_162, 0, sizeof(struct sType*));
memset(&klass_163, 0, sizeof(struct sClass*));
memset(&right_value235, 0, sizeof(void*));
memset(&type_164, 0, sizeof(struct sType*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&calling_fun_166, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&come_value_171, 0, sizeof(struct CVALUE*));
memset(&i_172, 0, sizeof(int));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&buf_185, 0, sizeof(struct buffer*));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_189, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&left_value_code_192, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value_id_193, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    left_146=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 894))->mLeft;
    __freed_obj__ = 0;
    right_147=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 895))->mRight;
    __freed_obj__ = 0;
    array_num_nodes_148=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 896))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional266=!((struct sNode*)come_null_check(left_146, "18field.c", 902))->compile(((struct sNode*)come_null_check(left_146, "18field.c", 902))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional266) {
        __result108__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_150=((struct CVALUE*)come_null_check(left_value_149, "18field.c", 905))->type;
    __freed_obj__ = 0;
    array_num_153=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value232=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 907))))))));
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_154=(array_num_nodes_148),it_157=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_157=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_154), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional271=!((struct sNode*)come_null_check(it_157, "18field.c", 914))->compile(((struct sNode*)come_null_check(it_157, "18field.c", 914))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional271) {
            __result117__ = (_Bool)0;
            if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 917)),(struct CVALUE*)come_increment_ref_count(c_value_160));
        __freed_obj__ = 0;
        if(c_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional272=!((struct sNode*)come_null_check(right_147, "18field.c", 924))->compile(((struct sNode*)come_null_check(right_147, "18field.c", 924))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional272) {
        __result118__ = (_Bool)0;
        if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result118__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_162=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 927))->type;
    __freed_obj__ = 0;
    klass_163=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 929))->type, "18field.c", 929))->mClass;
    __freed_obj__ = 0;
    type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 931))->type))));
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_165="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 942))->mQuote,    __freed_obj__ = 0, 
    _if_conditional273) {
        calling_fun_166=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_166=operator_overload_fun2(type_164,fun_name_165,left_value_149,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 939),((struct optional$2CVALUEphbool*)(right_value240=list$1CVALUEphp_operator_load_element(array_num_153,0))))),right_value_161,info);
        come_pop_stackframe();
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional278=!calling_fun_166,    __freed_obj__ = 0, 
    _if_conditional278) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 943))));
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional279=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_150, "18field.c", 964))->mArrayNum, "18field.c", 964)))>0,        __freed_obj__ = 0, 
        _if_conditional279) {
            for(
            i_172=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            i_172<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 955))) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            i_172++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_150, "18field.c", 953))->mArrayNum, "18field.c", 953)),-1,-1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional298=((struct sType*)come_null_check(left_type_150, "18field.c", 964))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional298) {
                ((struct sType*)come_null_check(left_type_150, "18field.c", 957))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_153, "18field.c", 957)));
                __freed_obj__ = 0;
                if(_if_conditional299=((struct sType*)come_null_check(left_type_150, "18field.c", 962))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional299) {
                    ((struct sType*)come_null_check(left_type_150, "18field.c", 960))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value242=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 964))))))));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_185, "18field.c", 966)),((struct CVALUE*)come_null_check(left_value_149, "18field.c", 966))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((array_num_153)),it_189=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_189=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_185, "18field.c", 969)),((char*)(right_value244=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_189, "18field.c", 969))->c_value))));
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_186 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_192=(char*)come_increment_ref_count(((char*)(right_value245=buffer_to_string(((struct buffer*)come_null_check(buf_185, "18field.c", 972))))));
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value246=xsprintf("array is assinged to"))),left_type_150,right_type_162,right_value_161,(_Bool)0,info);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional304=((struct sType*)come_null_check(left_type_150, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(right_type_162, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(left_type_150, "18field.c", 1057))->mPointerNum>0&&((struct sType*)come_null_check(right_type_162, "18field.c", 1057))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional304) {
            if(_if_conditional305=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional305) {
                decrement_ref_count_object(left_type_150,left_value_code_192,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional306=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1004))->var,                __freed_obj__ = 0, 
                _if_conditional306) {
                    if(_if_conditional307=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        __dec_obj127=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 981))->var, "18field.c", 981))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 981))->var, "18field.c", 981))->mCValueName=((void*)0);
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional308=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            __dec_obj128=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value247=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 984))->c_value,info))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional309=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional309) {
                                __dec_obj129=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value=(char*)come_increment_ref_count(((char*)(right_value248=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 987))->c_value,info))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj130=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value=(char*)come_increment_ref_count(((char*)(right_value249=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 990))->c_value,info))));
                                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional310=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1003))->type, "18field.c", 1003))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional310) {
                    }
                    else {
                        __dec_obj131=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value=(char*)come_increment_ref_count(((char*)(right_value250=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1001))->c_value,info))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj132=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1004))->c_value;
                ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1004))->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1004))->c_value))));
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional311=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional311) {
                    decrement_ref_count_object(left_type_150,left_value_code_192,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional312=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1033))->var,                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        if(_if_conditional313=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName=((void*)0);
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional314=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj134=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value=(char*)come_increment_ref_count(((char*)(right_value252=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1013))->c_value,info))));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional315=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional315) {
                                    __dec_obj135=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value=(char*)come_increment_ref_count(((char*)(right_value253=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1016))->c_value,info))));
                                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj136=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value=(char*)come_increment_ref_count(((char*)(right_value254=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1019))->c_value,info))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional316=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1032))->type, "18field.c", 1032))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional316) {
                        }
                        else {
                            __dec_obj137=((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value=(char*)come_increment_ref_count(((char*)(right_value255=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->type,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1030))->c_value,info))));
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj138=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1033))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1033))->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1033))->c_value))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_192,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1036))->type, "18field.c", 1036))->mPointerNum);
                    __freed_obj__ = 0;
                    __result134__ = (_Bool)0;
                    if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result134__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_id_193=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1039))->c_value));
            __freed_obj__ = 0;
            if(_if_conditional317=right_value_id_193!=-1,            __freed_obj__ = 0, 
            _if_conditional317) {
                remove_object_from_right_values(right_value_id_193,info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional318=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional318) {
                __dec_obj139=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1047))->c_value;
                ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1047))->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1047))->c_value))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional319=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional319) {
                    __dec_obj140=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1050))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1050))->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s=%s",left_value_code_192,((struct CVALUE*)come_null_check(right_value_161, "18field.c", 1050))->c_value))));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_192,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "18field.c", 1053))->type, "18field.c", 1053))->mPointerNum);
                    __freed_obj__ = 0;
                    __result135__ = (_Bool)0;
                    if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result135__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(left_type_150))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj141=((struct sType*)come_null_check(result_type_194, "18field.c", 1058))->mArrayNum;
        ((struct sType*)come_null_check(result_type_194, "18field.c", 1058))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1058))))))));
        if(__dec_obj141) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj142=((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1059))->type;
        ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1059))->type=(struct sType*)come_increment_ref_count(result_type_194);
        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1060))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1062))->stack, "18field.c", 1062)),(struct CVALUE*)come_increment_ref_count(come_value_171));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_171, "18field.c", 1064))->c_value);
        __freed_obj__ = 0;
        if(come_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_192 && !__freed_obj__) { left_value_code_192 = come_decrement_ref_count(left_value_code_192, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result136__ = (_Bool)1;
    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
    if(left_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_153 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result109__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_151;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_151, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1CVALUEph*));
            it_151=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_151!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_152=it_151;
                __freed_obj__ = 0;
                it_151=((struct list_item$1CVALUEph*)come_null_check(it_151, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_152 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional267;
struct sNode* result_155;
struct sNode* __result110__;
_Bool _if_conditional268;
struct sNode* __result111__;
struct sNode* result_156;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_155, 0, sizeof(struct sNode*));
memset(&result_156, 0, sizeof(struct sNode*));
        if(_if_conditional267=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional267) {
            __freed_obj__ = 0;
            memset(&result_155,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result110__ = __result_obj__ = result_155;
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional268=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional268) {
            __result111__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_156,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result112__ = __result_obj__ = result_156;
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result113__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional269;
struct sNode* result_158;
struct sNode* __result114__;
_Bool _if_conditional270;
struct sNode* __result115__;
struct sNode* result_159;
struct sNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_158, 0, sizeof(struct sNode*));
memset(&result_159, 0, sizeof(struct sNode*));
        if(_if_conditional269=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional269) {
            __freed_obj__ = 0;
            memset(&result_158,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = result_158;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional270=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional270) {
            __result115__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result115__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_159,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result116__ = __result_obj__ = result_159;
        __freed_obj__ = 0;
        return __result116__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional274;
struct list_item$1CVALUEph* it_167;
int i_168;
_Bool _while_condtional15;
_Bool _if_conditional275;
void* right_value236;
void* right_value237;
struct optional$2CVALUEphbool* __result120__;
struct CVALUE* default_value_169;
void* right_value238;
void* right_value239;
struct optional$2CVALUEphbool* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_167, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_168, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&default_value_169, 0, sizeof(struct CVALUE*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
            if(_if_conditional274=position<0,            __freed_obj__ = 0, 
            _if_conditional274) {
                position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_167=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_168=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_167!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional275=position==i_168,                __freed_obj__ = 0, 
                _if_conditional275) {
                    __result120__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value237=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value236=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_167, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result120__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_167=((struct list_item$1CVALUEph*)come_null_check(it_167, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_168++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_169,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value239=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value238=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_169),(_Bool)0))));
            if(default_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
            if(default_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj126;
struct optional$2CVALUEphbool* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj126=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj126) { come_call_finalizer(CVALUE_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result119__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result119__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional276=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional276) {
                                if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional277;
struct CVALUE* default_value_170;
struct CVALUE* __result122__;
struct CVALUE* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional277=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional277) {
                __freed_obj__ = 0;
                memset(&default_value_170,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result122__ = __result_obj__ = default_value_170;
                __freed_obj__ = 0;
                return __result122__;
                __freed_obj__ = 0;
            }
            else {
                __result123__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result124__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result124__;
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
int tmp_173;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct list$1sNodeph* __result125__;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct list_item$1sNodeph* it_174;
int i_175;
_Bool _while_condtional16;
_Bool _if_conditional288;
struct list_item$1sNodeph* prev_it_176;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list_item$1sNodeph* it_177;
int i_178;
_Bool _while_condtional17;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list_item$1sNodeph* prev_it_179;
struct list_item$1sNodeph* it_180;
struct list_item$1sNodeph* head_prev_it_181;
struct list_item$1sNodeph* tail_it_182;
int i_183;
_Bool _while_condtional18;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1sNodeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                    if(_if_conditional280=head<0,                    __freed_obj__ = 0, 
                    _if_conditional280) {
                        head+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 508))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional281=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        tail+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 511))->len+1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional282=head>tail,                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        tmp_173=tail;
                        __freed_obj__ = 0;
                        tail=head;
                        __freed_obj__ = 0;
                        head=tmp_173;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional283=head<0,                    __freed_obj__ = 0, 
                    _if_conditional283) {
                        head=0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional284=tail>((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 528))->len,                    __freed_obj__ = 0, 
                    _if_conditional284) {
                        tail=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 525))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional285=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional285) {
                        __result125__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result125__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional286=head==0&&tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 534)));
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional287=head==0,                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            it_174=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 537))->head;
                            __freed_obj__ = 0;
                            i_175=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_174!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional288=i_175<tail,                                __freed_obj__ = 0, 
                                _if_conditional288) {
                                    prev_it_176=it_174;
                                    __freed_obj__ = 0;
                                    it_174=((struct list_item$1sNodeph*)come_null_check(it_174, "./comelang2.h", 543))->next;
                                    __freed_obj__ = 0;
                                    i_175++;
                                    __freed_obj__ = 0;
                                    if(prev_it_176 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 548))->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional289=i_175==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional289) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 551))->head=it_174;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_174=((struct list_item$1sNodeph*)come_null_check(it_174, "./comelang2.h", 556))->next;
                                        __freed_obj__ = 0;
                                        i_175++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional290=tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                            __freed_obj__ = 0, 
                            _if_conditional290) {
                                it_177=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 562))->head;
                                __freed_obj__ = 0;
                                i_178=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_177!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional291=i_178==head,                                    __freed_obj__ = 0, 
                                    _if_conditional291) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 566))->prev;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional292=i_178>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional292) {
                                        prev_it_179=it_177;
                                        __freed_obj__ = 0;
                                        it_177=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 573))->next;
                                        __freed_obj__ = 0;
                                        i_178++;
                                        __freed_obj__ = 0;
                                        if(prev_it_179 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 578))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_177=((struct list_item$1sNodeph*)come_null_check(it_177, "./comelang2.h", 581))->next;
                                        __freed_obj__ = 0;
                                        i_178++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_180=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 587))->head;
                                __freed_obj__ = 0;
                                head_prev_it_181=((void*)0);
                                __freed_obj__ = 0;
                                tail_it_182=((void*)0);
                                __freed_obj__ = 0;
                                i_183=0;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_180!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional293=i_183==head,                                    __freed_obj__ = 0, 
                                    _if_conditional293) {
                                        head_prev_it_181=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 596))->prev;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional294=i_183==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional294) {
                                        tail_it_182=it_180;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional295=i_183>=head&&i_183<tail,                                    __freed_obj__ = 0, 
                                    _if_conditional295) {
                                        prev_it_184=it_180;
                                        __freed_obj__ = 0;
                                        it_180=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 606))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                        if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 611))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_180=((struct list_item$1sNodeph*)come_null_check(it_180, "./comelang2.h", 614))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional296=head_prev_it_181!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional296) {
                                    ((struct list_item$1sNodeph*)come_null_check(head_prev_it_181, "./comelang2.h", 620))->next=tail_it_182;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional297=tail_it_182!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional297) {
                                    ((struct list_item$1sNodeph*)come_null_check(tail_it_182, "./comelang2.h", 623))->prev=head_prev_it_181;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result126__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result126__;
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional300;
struct CVALUE* result_187;
struct CVALUE* __result127__;
_Bool _if_conditional301;
struct CVALUE* __result128__;
struct CVALUE* result_188;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_187, 0, sizeof(struct CVALUE*));
memset(&result_188, 0, sizeof(struct CVALUE*));
            if(_if_conditional300=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional300) {
                __freed_obj__ = 0;
                memset(&result_187,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result127__ = __result_obj__ = result_187;
                __freed_obj__ = 0;
                return __result127__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional301=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional301) {
                __result128__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result128__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_188,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result129__ = __result_obj__ = result_188;
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result130__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result130__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional302;
struct CVALUE* result_190;
struct CVALUE* __result131__;
_Bool _if_conditional303;
struct CVALUE* __result132__;
struct CVALUE* result_191;
struct CVALUE* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_190, 0, sizeof(struct CVALUE*));
memset(&result_191, 0, sizeof(struct CVALUE*));
            if(_if_conditional302=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional302) {
                __freed_obj__ = 0;
                memset(&result_190,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result131__ = __result_obj__ = result_190;
                __freed_obj__ = 0;
                return __result131__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional303=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional303) {
                __result132__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result132__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_191,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result133__ = __result_obj__ = result_191;
            __freed_obj__ = 0;
            return __result133__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1072))->sline;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value262;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
    __result138__ = __result_obj__ = ((char*)(right_value262=__builtin_string(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1077))->sname)));
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value263;
char* __dec_obj143;
void* right_value264;
struct list$1sNodeph* __dec_obj144;
void* right_value265;
struct sNode* __dec_obj145;
struct sLoadArrayNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1092))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1092))->sline;
    __freed_obj__ = 0;
    __dec_obj143=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1093))->sname))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj144=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=list$1sNodephp_clone(array_num))));
    if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj145=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->mQuote=quote;
    __freed_obj__ = 0;
    __result139__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value266;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
    __result141__ = __result_obj__ = ((char*)(right_value266=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_195;
struct list$1sNodeph* array_num_nodes_196;
_Bool _if_conditional323;
_Bool __result142__;
void* right_value267;
struct CVALUE* left_value_197;
void* right_value268;
struct sType* left_type_198;
void* right_value269;
void* right_value270;
struct list$1CVALUEph* array_num_199;
struct list$1sNodeph* o2_saved_200;
struct sNode* it_201;
_Bool _for_condtionalA11;
_Bool _if_conditional324;
_Bool __result143__;
void* right_value271;
struct CVALUE* c_value_202;
void* right_value272;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional325;
void* right_value273;
_Bool _if_conditional326;
void* right_value274;
struct CVALUE* come_value_206;
void* right_value275;
void* right_value276;
struct buffer* buf_207;
struct list$1CVALUEph* o2_saved_208;
struct CVALUE* it_209;
_Bool _for_condtionalA12;
void* right_value277;
void* right_value278;
char* left_value_code_210;
void* right_value279;
char* __dec_obj146;
void* right_value280;
struct sType* result_type_211;
_Bool _if_conditional327;
struct sType* __dec_obj147;
_Bool _if_conditional328;
int n_212;
_Bool _if_conditional329;
void* right_value281;
struct sType* __dec_obj148;
_Bool _if_conditional330;
void* right_value282;
struct sType* __dec_obj149;
_Bool _if_conditional331;
int i_213;
_Bool _for_condtionalA13;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value283;
struct sType* __dec_obj150;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_195, 0, sizeof(struct sNode*));
memset(&array_num_nodes_196, 0, sizeof(struct list$1sNodeph*));
memset(&right_value267, 0, sizeof(void*));
memset(&left_value_197, 0, sizeof(struct CVALUE*));
memset(&right_value268, 0, sizeof(void*));
memset(&left_type_198, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&array_num_199, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_200, 0, sizeof(struct list$1sNodeph*));
memset(&it_201, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&c_value_202, 0, sizeof(struct CVALUE*));
memset(&right_value272, 0, sizeof(void*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&come_value_206, 0, sizeof(struct CVALUE*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&buf_207, 0, sizeof(struct buffer*));
memset(&o2_saved_208, 0, sizeof(struct list$1CVALUEph*));
memset(&it_209, 0, sizeof(struct CVALUE*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&left_value_code_210, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&result_type_211, 0, sizeof(struct sType*));
memset(&n_212, 0, sizeof(int));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&i_213, 0, sizeof(int));
memset(&right_value283, 0, sizeof(void*));
    left_195=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1115))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_196=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1116))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional323=!((struct sNode*)come_null_check(left_195, "18field.c", 1122))->compile(((struct sNode*)come_null_check(left_195, "18field.c", 1122))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional323) {
        __result142__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result142__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1125))->type))));
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    array_num_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value270=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value269=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1127))))))));
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_200=(array_num_nodes_196),it_201=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    it_201=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_200), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional324=!((struct sNode*)come_null_check(it_201, "18field.c", 1134))->compile(((struct sNode*)come_null_check(it_201, "18field.c", 1134))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional324) {
            __result143__ = (_Bool)0;
            if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1137)),(struct CVALUE*)come_increment_ref_count(c_value_202));
        __freed_obj__ = 0;
        if(c_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1140))->type))));
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_204="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional325=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1151))->mQuote,    __freed_obj__ = 0, 
    _if_conditional325) {
        calling_fun_205=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_197,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1148),((struct optional$2CVALUEphbool*)(right_value273=list$1CVALUEphp_operator_load_element(array_num_199,0))))),info);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional326=!calling_fun_205,    __freed_obj__ = 0, 
    _if_conditional326) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1152))));
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buf_207=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1154))))))));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_207, "18field.c", 1156)),((struct CVALUE*)come_null_check(left_value_197, "18field.c", 1156))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_208=(struct list$1CVALUEph*)come_increment_ref_count((array_num_199)),it_209=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_209=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_208), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_207, "18field.c", 1159)),((char*)(right_value277=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_209, "18field.c", 1159))->c_value))));
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_208, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_210=(char*)come_increment_ref_count(((char*)(right_value278=buffer_to_string(((struct buffer*)come_null_check(buf_207, "18field.c", 1162))))));
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj146=((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1164))->c_value;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1164))->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s",left_value_code_210))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_198))));
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional327=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1172))->mOriginalLoadVarType, "18field.c", 1172))->v1,        __freed_obj__ = 0, 
        _if_conditional327) {
            __dec_obj147=result_type_211;
            result_type_211=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1169))->mOriginalLoadVarType, "18field.c", 1169))->v1);
            if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional328=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1206))->mArrayNum, "18field.c", 1206)))>0,        __freed_obj__ = 0, 
        _if_conditional328) {
            n_212=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1173))->mArrayNum, "18field.c", 1173)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1173)));
            __freed_obj__ = 0;
            if(_if_conditional329=n_212==0,            __freed_obj__ = 0, 
            _if_conditional329) {
                __dec_obj148=result_type_211;
                result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_198))));
                if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional330=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_198, "18field.c", 1180))->mOriginalLoadVarType, "18field.c", 1180))->v1,                __freed_obj__ = 0, 
                _if_conditional330) {
                    __dec_obj149=result_type_211;
                    result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_198, "18field.c", 1178))->mOriginalLoadVarType, "18field.c", 1178))->v1))));
                    if(__dec_obj149) { come_call_finalizer(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1180))->mArrayNum, "18field.c", 1180)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional331=n_212>0,                __freed_obj__ = 0, 
                _if_conditional331) {
                    for(
                    i_213=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA13=                    i_213<n_212 ,                    __freed_obj__ = 0, 
                    _for_condtionalA13;                    i_213++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1184))->mArrayNum, "18field.c", 1184)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional332=n_212<0,                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_211, "18field.c", 1188))->mArrayNum, "18field.c", 1188)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_211, "18field.c", 1189))->mPointerNum+=n_212;
                        __freed_obj__ = 0;
                        if(_if_conditional333=((struct sType*)come_null_check(result_type_211, "18field.c", 1194))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional333) {
                            ((struct sType*)come_null_check(result_type_211, "18field.c", 1192))->mPointerNum=0;
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
            if(_if_conditional334=((struct sType*)come_null_check(result_type_211, "18field.c", 1204))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional334) {
                ((struct sType*)come_null_check(result_type_211, "18field.c", 1198))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_199, "18field.c", 1198)));
                __freed_obj__ = 0;
                if(_if_conditional335=((struct sType*)come_null_check(result_type_211, "18field.c", 1203))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional335) {
                    ((struct sType*)come_null_check(result_type_211, "18field.c", 1201))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj150=((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1206))->type;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1206))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(result_type_211))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1207))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1209))->stack, "18field.c", 1209)),(struct CVALUE*)come_increment_ref_count(come_value_206));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_206, "18field.c", 1211))->c_value);
        __freed_obj__ = 0;
        if(come_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_207 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_210 && !__freed_obj__) { left_value_code_210 = come_decrement_ref_count(left_value_code_210, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result144__ = (_Bool)1;
    if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
    if(left_value_197 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1219))->sline;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value284;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
    __result146__ = __result_obj__ = ((char*)(right_value284=__builtin_string(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1224))->sname)));
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value285;
char* __dec_obj151;
void* right_value286;
struct list$1sNodeph* __dec_obj152;
void* right_value287;
struct sNode* __dec_obj153;
struct sLoadRangeArrayNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1239))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1239))->sline;
    __freed_obj__ = 0;
    __dec_obj151=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1240))->sname;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1240))->sname=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1240))->sname))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj152=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1242))->mArrayNum;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1242))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value286=list$1sNodephp_clone(array_num))));
    if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj153=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1244))->mLeft;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1244))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->mQuote=quote;
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value288;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value288, 0, sizeof(void*));
    __result149__ = __result_obj__ = ((char*)(right_value288=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_214;
struct list$1sNodeph* array_num_nodes_215;
_Bool _if_conditional339;
_Bool __result150__;
void* right_value289;
struct CVALUE* left_value_216;
void* right_value290;
struct sType* left_type_217;
void* right_value291;
void* right_value292;
struct list$1CVALUEph* array_num_218;
struct list$1sNodeph* o2_saved_219;
struct sNode* it_220;
_Bool _for_condtionalA14;
_Bool _if_conditional340;
_Bool __result151__;
void* right_value293;
struct CVALUE* c_value_221;
void* right_value294;
struct sType* type_222;
char* fun_name_223;
_Bool calling_fun_224;
_Bool _if_conditional341;
void* right_value295;
void* right_value296;
_Bool _if_conditional342;
void* right_value297;
struct CVALUE* come_value_225;
void* right_value298;
void* right_value299;
struct buffer* buf_226;
struct list$1CVALUEph* o2_saved_227;
struct CVALUE* it_228;
_Bool _for_condtionalA15;
void* right_value300;
void* right_value301;
char* left_value_code_229;
void* right_value302;
char* __dec_obj154;
void* right_value303;
struct sType* result_type_230;
_Bool _if_conditional343;
struct sType* __dec_obj155;
_Bool _if_conditional344;
int n_231;
_Bool _if_conditional345;
void* right_value304;
struct sType* __dec_obj156;
_Bool _if_conditional346;
void* right_value305;
struct sType* __dec_obj157;
_Bool _if_conditional347;
int i_232;
_Bool _for_condtionalA16;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value306;
struct sType* __dec_obj158;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_214, 0, sizeof(struct sNode*));
memset(&array_num_nodes_215, 0, sizeof(struct list$1sNodeph*));
memset(&right_value289, 0, sizeof(void*));
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_value290, 0, sizeof(void*));
memset(&left_type_217, 0, sizeof(struct sType*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&array_num_218, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_219, 0, sizeof(struct list$1sNodeph*));
memset(&it_220, 0, sizeof(struct sNode*));
memset(&right_value293, 0, sizeof(void*));
memset(&c_value_221, 0, sizeof(struct CVALUE*));
memset(&right_value294, 0, sizeof(void*));
memset(&type_222, 0, sizeof(struct sType*));
memset(&fun_name_223, 0, sizeof(char*));
memset(&calling_fun_224, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&come_value_225, 0, sizeof(struct CVALUE*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&buf_226, 0, sizeof(struct buffer*));
memset(&o2_saved_227, 0, sizeof(struct list$1CVALUEph*));
memset(&it_228, 0, sizeof(struct CVALUE*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&left_value_code_229, 0, sizeof(char*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&result_type_230, 0, sizeof(struct sType*));
memset(&n_231, 0, sizeof(int));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&i_232, 0, sizeof(int));
memset(&right_value306, 0, sizeof(void*));
    left_214=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1262))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_215=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1263))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional339=!((struct sNode*)come_null_check(left_214, "18field.c", 1269))->compile(((struct sNode*)come_null_check(left_214, "18field.c", 1269))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional339) {
        __result150__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(((struct CVALUE*)come_null_check(left_value_216, "18field.c", 1272))->type))));
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    array_num_218=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value292=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value291=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1274))))))));
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_219=(array_num_nodes_215),it_220=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_219), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_219), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_220=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_219), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional340=!((struct sNode*)come_null_check(it_220, "18field.c", 1281))->compile(((struct sNode*)come_null_check(it_220, "18field.c", 1281))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional340) {
            __result151__ = (_Bool)0;
            if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_218, "18field.c", 1284)),(struct CVALUE*)come_increment_ref_count(c_value_221));
        __freed_obj__ = 0;
        if(c_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(((struct CVALUE*)come_null_check(left_value_216, "18field.c", 1287))->type))));
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_223="operator_load_range_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional341=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1298))->mQuote,    __freed_obj__ = 0, 
    _if_conditional341) {
        calling_fun_224=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        come_clear_stackframe();
        calling_fun_224=operator_overload_fun2(type_222,fun_name_223,left_value_216,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1295),((struct optional$2CVALUEphbool*)(right_value295=list$1CVALUEphp_operator_load_element(array_num_218,0))))),optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1295),((struct optional$2CVALUEphbool*)(right_value296=list$1CVALUEphp_operator_load_element(array_num_218,1))))),info);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional342=!calling_fun_224,    __freed_obj__ = 0, 
    _if_conditional342) {
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1299))));
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buf_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1301))))))));
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_226, "18field.c", 1303)),((struct CVALUE*)come_null_check(left_value_216, "18field.c", 1303))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_227=(struct list$1CVALUEph*)come_increment_ref_count((array_num_218)),it_228=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_227), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_227), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_228=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_227), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_226, "18field.c", 1306)),((char*)(right_value300=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_228, "18field.c", 1306))->c_value))));
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_229=(char*)come_increment_ref_count(((char*)(right_value301=buffer_to_string(((struct buffer*)come_null_check(buf_226, "18field.c", 1309))))));
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj154=((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1311))->c_value;
        ((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1311))->c_value=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("%s",left_value_code_229))));
        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0,0); }
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_type_217))));
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional343=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1319))->mOriginalLoadVarType, "18field.c", 1319))->v1,        __freed_obj__ = 0, 
        _if_conditional343) {
            __dec_obj155=result_type_230;
            result_type_230=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1316))->mOriginalLoadVarType, "18field.c", 1316))->v1);
            if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional344=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1353))->mArrayNum, "18field.c", 1353)))>0,        __freed_obj__ = 0, 
        _if_conditional344) {
            n_231=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1320))->mArrayNum, "18field.c", 1320)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_218, "18field.c", 1320)));
            __freed_obj__ = 0;
            if(_if_conditional345=n_231==0,            __freed_obj__ = 0, 
            _if_conditional345) {
                __dec_obj156=result_type_230;
                result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_217))));
                if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional346=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_217, "18field.c", 1327))->mOriginalLoadVarType, "18field.c", 1327))->v1,                __freed_obj__ = 0, 
                _if_conditional346) {
                    __dec_obj157=result_type_230;
                    result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_217, "18field.c", 1325))->mOriginalLoadVarType, "18field.c", 1325))->v1))));
                    if(__dec_obj157) { come_call_finalizer(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1327))->mArrayNum, "18field.c", 1327)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional347=n_231>0,                __freed_obj__ = 0, 
                _if_conditional347) {
                    for(
                    i_232=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA16=                    i_232<n_231 ,                    __freed_obj__ = 0, 
                    _for_condtionalA16;                    i_232++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1331))->mArrayNum, "18field.c", 1331)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional348=n_231<0,                    __freed_obj__ = 0, 
                    _if_conditional348) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_230, "18field.c", 1335))->mArrayNum, "18field.c", 1335)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_230, "18field.c", 1336))->mPointerNum+=n_231;
                        __freed_obj__ = 0;
                        if(_if_conditional349=((struct sType*)come_null_check(result_type_230, "18field.c", 1341))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional349) {
                            ((struct sType*)come_null_check(result_type_230, "18field.c", 1339))->mPointerNum=0;
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
            if(_if_conditional350=((struct sType*)come_null_check(result_type_230, "18field.c", 1351))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional350) {
                ((struct sType*)come_null_check(result_type_230, "18field.c", 1345))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_218, "18field.c", 1345)));
                __freed_obj__ = 0;
                if(_if_conditional351=((struct sType*)come_null_check(result_type_230, "18field.c", 1350))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional351) {
                    ((struct sType*)come_null_check(result_type_230, "18field.c", 1348))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj158=((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1353))->type;
        ((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1353))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(result_type_230))));
        if(__dec_obj158) { come_call_finalizer(sType_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1354))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1356))->stack, "18field.c", 1356)),(struct CVALUE*)come_increment_ref_count(come_value_225));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_225, "18field.c", 1358))->c_value);
        __freed_obj__ = 0;
        if(come_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_226, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_229 && !__freed_obj__) { left_value_code_229 = come_decrement_ref_count(left_value_code_229, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result152__ = (_Bool)1;
    if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
    if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1366))->sline;
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value307;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
    __result154__ = __result_obj__ = ((char*)(right_value307=__builtin_string(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1371))->sname)));
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result155__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    __freed_obj__ = 0;
    exit(2);
    __freed_obj__ = 0;
    __result156__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional352;
char* p_233;
int sline_234;
_Bool _if_conditional353;
void* right_value308;
char* word_235;
_Bool _if_conditional354;
void* right_value309;
void* right_value310;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value314;
struct sNode* __dec_obj161;
void* right_value315;
void* right_value316;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value320;
struct sNode* __dec_obj164;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value321;
void* right_value322;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value326;
struct sNode* __dec_obj167;
struct sNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_233, 0, sizeof(char*));
memset(&sline_234, 0, sizeof(int));
memset(&right_value308, 0, sizeof(void*));
memset(&word_235, 0, sizeof(char*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
    if(_if_conditional352=(*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional352) {
        p_233=((struct sInfo*)come_null_check(info, "18field.c", 1390))->p;
        __freed_obj__ = 0;
        sline_234=((struct sInfo*)come_null_check(info, "18field.c", 1391))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "18field.c", 1393))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional353=xisalpha(*((struct sInfo*)come_null_check(info, "18field.c", 1416))->p)||*((struct sInfo*)come_null_check(info, "18field.c", 1416))->p==95,        __freed_obj__ = 0, 
        _if_conditional353) {
            come_clear_stackframe();
            word_235=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1397),((struct optional$2charphbool*)(right_value308=parse_word(info))))));
            come_pop_stackframe();
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional354=(string_operator_equals(word_235,"expect")||string_operator_equals(word_235,"value")||string_operator_equals(word_235,"catch"))&&(*((struct sInfo*)come_null_check(info, "18field.c", 1409))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1409))->p==123),            __freed_obj__ = 0, 
            _if_conditional354) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1400))->p=p_233;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1401))->sline=sline_234;
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "18field.c", 1404))->p=p_233;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1405))->sline=sline_234;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1407);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value310=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value309=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1407)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj161=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=_inf_value2)));
                if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0); }
                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_235 && !__freed_obj__) { word_235 = come_decrement_ref_count(word_235, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "18field.c", 1411))->p=p_233;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1412))->sline=sline_234;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1414);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value316=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value315=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1414)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj164=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=_inf_value3)));
            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0); }
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional367=*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional367) {
        }
        else {
            if(_if_conditional368=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional368) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1422);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value322=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value321=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1422)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj167=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=_inf_value4)));
                if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result163__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional369=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional369) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional370=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional370) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional371;
struct sExceptionGetValueNode* __result161__;
void* right_value323;
struct sExceptionGetValueNode* result_238;
_Bool _if_conditional372;
void* right_value324;
struct sNode* __dec_obj165;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value325;
char* __dec_obj166;
struct sExceptionGetValueNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&result_238, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                    if(_if_conditional371=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional371) {
                        __result161__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result161__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_238=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value323=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional372=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional372) {
                        __dec_obj165=((struct sExceptionGetValueNode*)come_null_check(result_238, "sExceptionGetValueNode_clone", 4))->mLeft;
                        ((struct sExceptionGetValueNode*)come_null_check(result_238, "sExceptionGetValueNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft))));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional373=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional373) {
                        ((struct sExceptionGetValueNode*)come_null_check(result_238, "sExceptionGetValueNode_clone", 5))->sline=((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional374=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 7))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional374) {
                        __dec_obj166=((struct sExceptionGetValueNode*)come_null_check(result_238, "sExceptionGetValueNode_clone", 6))->sname;
                        ((struct sExceptionGetValueNode*)come_null_check(result_238, "sExceptionGetValueNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname))));
                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result162__ = __result_obj__ = result_238;
                    if(result_238 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_238, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result162__;
                    __freed_obj__ = 0;
                    if(result_238 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_238, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _while_condtional19;
_Bool _if_conditional375;
_Bool quote_239;
_Bool _if_conditional376;
_Bool range_240;
void* right_value327;
void* right_value328;
struct list$1sNodeph* array_num_241;
_Bool _while_condtional20;
_Bool _if_conditional377;
void* right_value329;
struct sNode* node_242;
_Bool _if_conditional380;
void* right_value333;
struct sNode* node2_246;
void* right_value334;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value335;
void* right_value336;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value341;
struct sNode* __dec_obj174;
_Bool _if_conditional393;
void* right_value342;
struct sNode* right_node_249;
void* right_value343;
void* right_value344;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value350;
struct sNode* __dec_obj179;
void* right_value351;
void* right_value352;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value357;
struct sNode* __dec_obj183;
void* right_value358;
struct sNode* __dec_obj184;
_Bool _if_conditional414;
void* right_value359;
void* right_value360;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value364;
struct sNode* __dec_obj187;
_Bool _if_conditional422;
_Bool _if_conditional423;
void* right_value365;
void* right_value366;
void* right_value367;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value371;
struct sNode* __dec_obj190;
void* right_value372;
char* field_name_254;
_Bool _if_conditional431;
void* right_value373;
struct sNode* right_node_255;
void* right_value374;
void* right_value375;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* right_value381;
struct sNode* __dec_obj195;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value382;
void* right_value383;
struct sNode* __dec_obj196;
_Bool _if_conditional444;
void* right_value384;
void* right_value385;
struct sNode* __dec_obj197;
void* right_value386;
void* right_value387;
struct sNode* __dec_obj198;
void* right_value388;
void* right_value389;
struct sNode* _inf_value11;
struct sLoadFieldNode* _inf_obj_value11;
void* right_value394;
struct sNode* __dec_obj202;
void* right_value395;
struct sNode* node2_258;
_Bool _if_conditional453;
struct sNode* __dec_obj203;
struct sNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&quote_239, 0, sizeof(_Bool));
memset(&range_240, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&array_num_241, 0, sizeof(struct list$1sNodeph*));
memset(&right_value329, 0, sizeof(void*));
memset(&node_242, 0, sizeof(struct sNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&node2_246, 0, sizeof(struct sNode*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_node_249, 0, sizeof(struct sNode*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&field_name_254, 0, sizeof(char*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_node_255, 0, sizeof(struct sNode*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&node2_258, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional375=*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==91,        __freed_obj__ = 0, 
        _if_conditional375) {
            quote_239=*((struct sInfo*)come_null_check(info, "18field.c", 1432))->p==92;
            __freed_obj__ = 0;
            if(_if_conditional376=quote_239,            __freed_obj__ = 0, 
            _if_conditional376) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1434))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            range_240=(_Bool)0;
            __freed_obj__ = 0;
            array_num_241=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value328=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value327=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1438))))))));
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional20=1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional377=*((struct sInfo*)come_null_check(info, "18field.c", 1480))->p==91,                __freed_obj__ = 0, 
                _if_conditional377) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1441))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    node_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_241, "18field.c", 1448)),(struct sNode*)come_increment_ref_count(node_242));
                    __freed_obj__ = 0;
                    if(_if_conditional380=*((struct sInfo*)come_null_check(info, "18field.c", 1476))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1476))->p+1)==46,                    __freed_obj__ = 0, 
                    _if_conditional380) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1451))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        node2_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_v13(info))));
                        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_241, "18field.c", 1458)),(struct sNode*)come_increment_ref_count(node2_246));
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        optional$2intbool_value((come_push_stackframe("18field.c", 1460),((struct optional$2intbool*)(right_value334=expected_next_character(93,info)))));
                        come_pop_stackframe();
                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        range_240=(_Bool)1;
                        __freed_obj__ = 0;
                        if(node2_246 && !__freed_obj__) { node2_246 = come_decrement_ref_count(node2_246, ((struct sNode*)node2_246)->finalize, ((struct sNode*)node2_246)->_protocol_obj, 0, 0, 0); } 
                        if(node_242 && !__freed_obj__) { node_242 = come_decrement_ref_count(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                        if(node2_246 && !__freed_obj__) { node2_246 = come_decrement_ref_count(node2_246, ((struct sNode*)node2_246)->finalize, ((struct sNode*)node2_246)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional382=*((struct sInfo*)come_null_check(info, "18field.c", 1475))->p==93,                        __freed_obj__ = 0, 
                        _if_conditional382) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1468))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        else {
                            err_msg(info,"require ] character");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(node_242 && !__freed_obj__) { node_242 = come_decrement_ref_count(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional383=range_240,            __freed_obj__ = 0, 
            _if_conditional383) {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1483);
                _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value336=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value335=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1483)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_241),quote_239,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
                _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
                _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
                _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
                _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
                _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
                __dec_obj174=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=_inf_value5)));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional393=*((struct sInfo*)come_null_check(info, "18field.c", 1504))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1504))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional393) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1488))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_node_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_v13(info))));
                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1497);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value344=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value343=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1497)))),node,(struct sNode*)come_increment_ref_count(right_node_249),(struct list$1sNodeph*)come_increment_ref_count(array_num_241),quote_239,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj179=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=_inf_value6)));
                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(right_node_249 && !__freed_obj__) { right_node_249 = come_decrement_ref_count(right_node_249, ((struct sNode*)right_node_249)->finalize, ((struct sNode*)right_node_249)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1500);
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value352=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value351=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1500)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_241),quote_239,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj183=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=_inf_value7)));
                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0); }
                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    __dec_obj184=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(array_num_241 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_241, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional414=*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional414) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1506))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1511);
                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value360=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value359=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1511)))),node,(_Bool)0,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                _inf_value8->clone=(void*)sNullCheckNode_clone;
                _inf_value8->compile=(void*)sNullCheckNode_compile;
                _inf_value8->sline=(void*)sNullCheckNode_sline;
                _inf_value8->sname=(void*)sNullCheckNode_sname;
                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                _inf_value8->kind=(void*)sNullCheckNode_kind;
                __dec_obj187=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=_inf_value8)));
                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional422=(*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)==62),                __freed_obj__ = 0, 
                _if_conditional422) {
                    if(_if_conditional423=*((struct sInfo*)come_null_check(info, "18field.c", 1523))->p==46,                    __freed_obj__ = 0, 
                    _if_conditional423) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1515))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1519))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1523);
                    _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value367=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value365=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1523)))),((struct sNode*)(right_value366=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value9->clone=(void*)sNullCheckNode_clone;
                    _inf_value9->compile=(void*)sNullCheckNode_compile;
                    _inf_value9->sline=(void*)sNullCheckNode_sline;
                    _inf_value9->sname=(void*)sNullCheckNode_sname;
                    _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                    _inf_value9->kind=(void*)sNullCheckNode_kind;
                    __dec_obj190=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value9)));
                    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    field_name_254=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1527),((struct optional$2charphbool*)(right_value372=parse_word(info))))));
                    come_pop_stackframe();
                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional431=*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+1)!=61,                    __freed_obj__ = 0, 
                    _if_conditional431) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1532))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        right_node_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=expression_v13(info))));
                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1539);
                        _inf_obj_value10=come_increment_ref_count(((struct sStoreFieldNode*)(right_value375=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value374=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1539)))),node,(struct sNode*)come_increment_ref_count(right_node_255),(char*)come_increment_ref_count(field_name_254),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                        _inf_value10->clone=(void*)sStoreFieldNode_clone;
                        _inf_value10->compile=(void*)sStoreFieldNode_compile;
                        _inf_value10->sline=(void*)sStoreFieldNode_sline;
                        _inf_value10->sname=(void*)sStoreFieldNode_sname;
                        _inf_value10->terminated=(void*)sStoreFieldNode_terminated;
                        _inf_value10->kind=(void*)sStoreFieldNode_kind;
                        __dec_obj195=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value10)));
                        if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0); }
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(right_node_255 && !__freed_obj__) { right_node_255 = come_decrement_ref_count(right_node_255, ((struct sNode*)right_node_255)->finalize, ((struct sNode*)right_node_255)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional442=*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==123||(*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+2)==40),                        __freed_obj__ = 0, 
                        _if_conditional442) {
                            if(_if_conditional443=string_operator_equals(field_name_254,"if"),                            __freed_obj__ = 0, 
                            _if_conditional443) {
                                __dec_obj196=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=sNode_clone(node)))),info))));
                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                                if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional444=string_operator_equals(field_name_254,"elif"),                                __freed_obj__ = 0, 
                                _if_conditional444) {
                                    __dec_obj197=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(node)))),info))));
                                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0); }
                                    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj198=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_254),info))));
                                    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0); }
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1553);
                            _inf_obj_value11=come_increment_ref_count(((struct sLoadFieldNode*)(right_value389=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value388=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1553)))),node,(char*)come_increment_ref_count(field_name_254),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sLoadFieldNode_finalize;
                            _inf_value11->clone=(void*)sLoadFieldNode_clone;
                            _inf_value11->compile=(void*)sLoadFieldNode_compile;
                            _inf_value11->sline=(void*)sLoadFieldNode_sline;
                            _inf_value11->sname=(void*)sLoadFieldNode_sname;
                            _inf_value11->terminated=(void*)sLoadFieldNode_terminated;
                            _inf_value11->kind=(void*)sLoadFieldNode_kind;
                            __dec_obj202=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=_inf_value11)));
                            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(field_name_254 && !__freed_obj__) { field_name_254 = come_decrement_ref_count(field_name_254, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    node2_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(_if_conditional453=node2_258==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional453) {
                        if(node2_258 && !__freed_obj__) { node2_258 = come_decrement_ref_count(node2_258, ((struct sNode*)node2_258)->finalize, ((struct sNode*)node2_258)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj203=node;
                    node=(struct sNode*)come_increment_ref_count(node2_258);
                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    if(node2_258 && !__freed_obj__) { node2_258 = come_decrement_ref_count(node2_258, ((struct sNode*)node2_258)->finalize, ((struct sNode*)node2_258)->_protocol_obj, 0, 0, 0); } 
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result181__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result181__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional378;
void* right_value330;
struct list_item$1sNodeph* litem_243;
struct sNode* __dec_obj168;
_Bool _if_conditional379;
void* right_value331;
struct list_item$1sNodeph* litem_244;
struct sNode* __dec_obj169;
void* right_value332;
struct list_item$1sNodeph* litem_245;
struct sNode* __dec_obj170;
struct list$1sNodeph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value330, 0, sizeof(void*));
memset(&litem_243, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value331, 0, sizeof(void*));
memset(&litem_244, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value332, 0, sizeof(void*));
memset(&litem_245, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional378=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional378) {
                            litem_243=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value330=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_243, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_243, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj168=((struct list_item$1sNodeph*)come_null_check(litem_243, "./comelang2.h", 276))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_243, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_243;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_243;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional379=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional379) {
                                litem_244=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value331=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_244, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_244, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj169=((struct list_item$1sNodeph*)come_null_check(litem_244, "./comelang2.h", 286))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_244, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_244;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_244;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_245=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value332=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_245, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_245, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj170=((struct list_item$1sNodeph*)come_null_check(litem_245, "./comelang2.h", 296))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_245, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_245;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_245;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result164__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result164__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional381;
int default_value_247;
int __result165__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_247, 0, sizeof(int));
                            if(_if_conditional381=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional381) {
                                __freed_obj__ = 0;
                                memset(&default_value_247,0,sizeof(int));
                                __freed_obj__ = 0;
                                __result165__ = default_value_247;
                                __freed_obj__ = 0;
                                return __result165__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result166__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result166__;
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

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional384=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional385=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional386=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional386) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional387;
struct sLoadRangeArrayNode* __result167__;
void* right_value337;
struct sLoadRangeArrayNode* result_248;
_Bool _if_conditional388;
void* right_value338;
struct sNode* __dec_obj171;
_Bool _if_conditional389;
void* right_value339;
struct list$1sNodeph* __dec_obj172;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value340;
char* __dec_obj173;
struct sLoadRangeArrayNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value337, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
                    if(_if_conditional387=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional387) {
                        __result167__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result167__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_248=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value337=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional388=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        __dec_obj171=((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 4))->mLeft;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4))->mLeft))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional389=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional389) {
                        __dec_obj172=((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 5))->mArrayNum;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value339=list$1sNodephp_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mArrayNum))));
                        if(__dec_obj172) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional390=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional390) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 6))->mQuote=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional391=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional391) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 7))->sline=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional392=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional392) {
                        __dec_obj173=((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 8))->sname;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_248, "sLoadRangeArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8))->sname))));
                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result168__ = __result_obj__ = result_248;
                    if(result_248 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result168__;
                    __freed_obj__ = 0;
                    if(result_248 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional394=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional394) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional395=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional395) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional396=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional396) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional397=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 4))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional397) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional398;
struct sStoreArrayNode* __result169__;
void* right_value345;
struct sStoreArrayNode* result_250;
_Bool _if_conditional399;
void* right_value346;
struct sNode* __dec_obj175;
_Bool _if_conditional400;
void* right_value347;
struct sNode* __dec_obj176;
_Bool _if_conditional401;
void* right_value348;
struct list$1sNodeph* __dec_obj177;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value349;
char* __dec_obj178;
struct sStoreArrayNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value345, 0, sizeof(void*));
memset(&result_250, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
                        if(_if_conditional398=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional398) {
                            __result169__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result169__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_250=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value345=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional399=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            __dec_obj175=((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 4))->mLeft;
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            __dec_obj176=((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 5))->mRight;
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight))));
                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional401=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional401) {
                            __dec_obj177=((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 6))->mArrayNum;
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 6))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value348=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum))));
                            if(__dec_obj177) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional402=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional402) {
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 7))->mQuote=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional403=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional403) {
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 8))->sline=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional404=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 10))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional404) {
                            __dec_obj178=((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 9))->sname;
                            ((struct sStoreArrayNode*)come_null_check(result_250, "sStoreArrayNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname))));
                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result170__ = __result_obj__ = result_250;
                        if(result_250 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result170__;
                        __freed_obj__ = 0;
                        if(result_250 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional405=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional405) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional406=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional406) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional407=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional407) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional408;
struct sLoadArrayNode* __result171__;
void* right_value353;
struct sLoadArrayNode* result_251;
_Bool _if_conditional409;
void* right_value354;
struct sNode* __dec_obj180;
_Bool _if_conditional410;
void* right_value355;
struct list$1sNodeph* __dec_obj181;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value356;
char* __dec_obj182;
struct sLoadArrayNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value353, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
                        if(_if_conditional408=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional408) {
                            __result171__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result171__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_251=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value353=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional409=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional409) {
                            __dec_obj180=((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 4))->mLeft;
                            ((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional410=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional410) {
                            __dec_obj181=((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 5))->mArrayNum;
                            ((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value355=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum))));
                            if(__dec_obj181) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj181, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional411=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional411) {
                            ((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 6))->mQuote=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional412=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional412) {
                            ((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 7))->sline=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional413=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            __dec_obj182=((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 8))->sname;
                            ((struct sLoadArrayNode*)come_null_check(result_251, "sLoadArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname))));
                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result172__ = __result_obj__ = result_251;
                        if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result172__;
                        __freed_obj__ = 0;
                        if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional424;
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional424=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional425=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional425) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional426;
struct sNullCheckNode* __result175__;
void* right_value368;
struct sNullCheckNode* result_253;
_Bool _if_conditional427;
void* right_value369;
struct sNode* __dec_obj188;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
void* right_value370;
char* __dec_obj189;
struct sNullCheckNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sNullCheckNode*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                        if(_if_conditional426=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            __result175__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result175__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_253=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value368=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional427=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            __dec_obj188=((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 4))->mLeft;
                            ((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional428=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional428) {
                            ((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 5))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mOnlyNullCecker;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional429=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional429) {
                            ((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 6))->sline=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional430=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            __dec_obj189=((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 7))->sname;
                            ((struct sNullCheckNode*)come_null_check(result_253, "sNullCheckNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result176__ = __result_obj__ = result_253;
                        if(result_253 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result176__;
                        __freed_obj__ = 0;
                        if(result_253 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional432=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional432) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional433=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional433) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional434=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional434) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional435=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 4))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional435) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional436;
struct sStoreFieldNode* __result177__;
void* right_value376;
struct sStoreFieldNode* result_256;
_Bool _if_conditional437;
void* right_value377;
struct sNode* __dec_obj191;
_Bool _if_conditional438;
void* right_value378;
struct sNode* __dec_obj192;
_Bool _if_conditional439;
void* right_value379;
char* __dec_obj193;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value380;
char* __dec_obj194;
struct sStoreFieldNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
                            if(_if_conditional436=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional436) {
                                __result177__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result177__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_256=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value376=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional437=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional437) {
                                __dec_obj191=((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 4))->mLeft;
                                ((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional438=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional438) {
                                __dec_obj192=((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 5))->mRight;
                                ((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional439=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional439) {
                                __dec_obj193=((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 6))->mName;
                                ((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 6))->mName=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName))));
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional440=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional440) {
                                ((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 7))->sline=((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional441=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional441) {
                                __dec_obj194=((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 8))->sname;
                                ((struct sStoreFieldNode*)come_null_check(result_256, "sStoreFieldNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname))));
                                if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result178__ = __result_obj__ = result_256;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result178__;
                            __freed_obj__ = 0;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional445=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional445) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional446=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional446) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional447=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional447) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional448;
struct sLoadFieldNode* __result179__;
void* right_value390;
struct sLoadFieldNode* result_257;
_Bool _if_conditional449;
void* right_value391;
struct sNode* __dec_obj199;
_Bool _if_conditional450;
void* right_value392;
char* __dec_obj200;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value393;
char* __dec_obj201;
struct sLoadFieldNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value390, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
                                if(_if_conditional448=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional448) {
                                    __result179__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result179__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_257=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value390=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional449=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional449) {
                                    __dec_obj199=((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 4))->mLeft;
                                    ((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft))));
                                    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional450=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional450) {
                                    __dec_obj200=((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 5))->mName;
                                    ((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 5))->mName=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName))));
                                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional451=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional451) {
                                    ((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional452=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional452) {
                                    __dec_obj201=((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 7))->sname;
                                    ((struct sLoadFieldNode*)come_null_check(result_257, "sLoadFieldNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname))));
                                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result180__ = __result_obj__ = result_257;
                                if(result_257 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result180__;
                                __freed_obj__ = 0;
                                if(result_257 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 0, 0); }
}

