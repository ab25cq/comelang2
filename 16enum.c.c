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
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sEnumNode
{
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    int sline;
    char* sname;
    _Bool mOutput;
    char* mDeclareSName;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
_Bool sEnumNode_terminated();

char* sEnumNode_kind();

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
void* right_value12;
struct list$1tuple2$2charphsNodephph* __dec_obj8;
void* right_value13;
char* __dec_obj9;
struct sEnumNode* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 18))->sline=((struct sInfo*)come_null_check(info, "16enum.c", 18))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sEnumNode*)come_null_check(self, "16enum.c", 19))->sname;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 19))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "16enum.c", 19))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct sEnumNode*)come_null_check(self, "16enum.c", 21))->mTypeName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 21))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(type_name))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj8=((struct sEnumNode*)come_null_check(self, "16enum.c", 22))->mElements;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 22))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value12=list$1tuple2$2charphsNodephphp_clone(elements))));
    if(__dec_obj8) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 24))->mOutput=output;
    __freed_obj__ = 0;
    __dec_obj9=((struct sEnumNode*)come_null_check(self, "16enum.c", 26))->mDeclareSName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 26))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(((struct sInfo*)come_null_check(info, "16enum.c", 26))->sname))));
    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct list$1tuple2$2charphsNodephph* __result1__;
void* right_value2;
void* right_value3;
struct list$1tuple2$2charphsNodephph* result_2;
struct list_item$1tuple2$2charphsNodephph* it_3;
_Bool _while_condtional2;
void* right_value11;
struct list$1tuple2$2charphsNodephph* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_3, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value11, 0, sizeof(void*));
        if(_if_conditional1=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            __result1__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result1__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_2=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value3=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value2=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_3=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional2=it_3!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional2) {
            list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_2, "./comelang2.h", 192)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value11=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_3, "./comelang2.h", 192))->item)))));
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_3=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_3, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result8__ = __result_obj__ = result_2;
        if(result_2 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result8__;
        __freed_obj__ = 0;
        if(result_2 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsNodephph* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result2__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result2__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsNodephph* it_0;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsNodephph* prev_it_1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_0, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_1, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_0=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional1=it_0!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional1) {
                    prev_it_1=it_0;
                    __freed_obj__ = 0;
                    it_0=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_0, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_1 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional2=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional2) {
                            if(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional3=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional3) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional4=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional4) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional5;
void* right_value4;
struct list_item$1tuple2$2charphsNodephph* litem_4;
struct tuple2$2charphsNodeph* __dec_obj3;
_Bool _if_conditional8;
void* right_value5;
struct list_item$1tuple2$2charphsNodephph* litem_5;
struct tuple2$2charphsNodeph* __dec_obj4;
void* right_value6;
struct list_item$1tuple2$2charphsNodephph* litem_6;
struct tuple2$2charphsNodeph* __dec_obj5;
struct list$1tuple2$2charphsNodephph* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&litem_4, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_5, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_6, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional5=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional5) {
                    litem_4=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value4=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 202))));
                    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj3=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 206))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_4, "./comelang2.h", 206))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_4;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_4;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional8=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional8) {
                        litem_5=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value5=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212))));
                        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj4=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 216))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_5, "./comelang2.h", 216))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj4) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_5;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_5;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_6=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value6=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222))));
                        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 226))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_6, "./comelang2.h", 226))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj5) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_6;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_6;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result3__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result3__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional6=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional6) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional7=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional7) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
struct tuple2$2charphsNodeph* __result4__;
void* right_value7;
struct tuple2$2charphsNodeph* result_7;
_Bool _if_conditional10;
void* right_value8;
char* __dec_obj6;
_Bool _if_conditional11;
void* right_value10;
struct sNode* __dec_obj7;
struct tuple2$2charphsNodeph* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
                if(_if_conditional9=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional9) {
                    __result4__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result4__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value7=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    __dec_obj6=((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 4))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value8=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 6))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    __dec_obj7=((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 5))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_7, "tuple2$2charphsNodephp_clone", 5))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value10=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2))));
                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
                    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, ((struct sNode*)right_value10)->finalize, ((struct sNode*)right_value10)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result7__ = __result_obj__ = result_7;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result7__;
                __freed_obj__ = 0;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
struct sNode* __result5__;
void* right_value9;
struct sNode* result_8;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
struct sNode* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sNode*));
                        if(_if_conditional12=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional12) {
                            __result5__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result5__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_8=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, ((struct sNode*)right_value9)->finalize, ((struct sNode*)right_value9)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(_if_conditional13=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional13) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional14=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional14) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional15=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional15) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional16=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional16) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional17=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional17) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional18=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional18) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional19=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional19) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional20=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional20) {
                            ((struct sNode*)come_null_check(result_8, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result6__ = __result_obj__ = result_8;
                        if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result6__;
                        __freed_obj__ = 0;
                        if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 0, 0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}

char* sEnumNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value14;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
    __result11__ = __result_obj__ = ((char*)(right_value14=__builtin_string("sEnumNode")));
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* type_name_9;
struct list$1tuple2$2charphsNodephph* elements_10;
void* right_value15;
void* right_value16;
struct buffer* buf_11;
_Bool _if_conditional25;
void* right_value17;
void* right_value18;
int i_12;
int n_13;
struct list$1tuple2$2charphsNodephph* o2_saved_14;
struct tuple2$2charphsNodeph* it_17;
_Bool _for_condtionalA1;
struct tuple2$2charphsNodeph* multiple_assgin_var1;
char* name_20;
struct sNode* value_21;
_Bool _if_conditional30;
_Bool _if_conditional31;
void* right_value19;
char* c_value_22;
void* right_value20;
void* right_value21;
_Bool _if_conditional48;
_Bool __result20__;
void* right_value22;
struct CVALUE* right_value_29;
void* right_value23;
void* right_value24;
void* right_value25;
_Bool _if_conditional51;
void* right_value26;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value27;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_9, 0, sizeof(char*));
memset(&elements_10, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&i_12, 0, sizeof(int));
memset(&n_13, 0, sizeof(int));
memset(&o2_saved_14, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_17, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_20, 0, sizeof(char*));
memset(&value_21, 0, sizeof(struct sNode*));
memset(&name_20, 0, sizeof(char*));
memset(&value_21, 0, sizeof(struct sNode*));
memset(&right_value19, 0, sizeof(void*));
memset(&c_value_22, 0, sizeof(char*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value_29, 0, sizeof(struct CVALUE*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
    type_name_9=(char*)come_increment_ref_count(((struct sEnumNode*)come_null_check(self, "16enum.c", 43))->mTypeName);
    __freed_obj__ = 0;
    elements_10=((struct sEnumNode*)come_null_check(self, "16enum.c", 44))->mElements;
    __freed_obj__ = 0;
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46))))))));
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional25=string_operator_equals(type_name_9,""),    __freed_obj__ = 0, 
    _if_conditional25) {
        buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 49)),((char*)(right_value17=xsprintf("enum { ",type_name_9))));
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 52)),((char*)(right_value18=xsprintf("enum %s { ",type_name_9))));
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    i_12=0;
    __freed_obj__ = 0;
    n_13=0;
    __freed_obj__ = 0;
    for(
    o2_saved_14=(elements_10),it_17=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_17=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_14), "16enum.c", 96))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_17;
        name_20=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        value_21=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional30=value_21==((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 61)),name_20);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 62)),"\n");
            __freed_obj__ = 0;
            if(_if_conditional31=i_12!=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_10, "16enum.c", 68)))-1,            __freed_obj__ = 0, 
            _if_conditional31) {
                buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 65)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            c_value_22=(char*)come_increment_ref_count(((char*)(right_value19=xsprintf("%d",n_13))));
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            add_variable_to_global_table_with_int_value(name_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70)))),"int",(_Bool)0,info)))),c_value_22,info);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(c_value_22 && !__freed_obj__) { c_value_22 = come_decrement_ref_count(c_value_22, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional48=!((struct sNode*)come_null_check(value_21, "16enum.c", 77))->compile(((struct sNode*)come_null_check(value_21, "16enum.c", 77))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional48) {
                __result20__ = (_Bool)0;
                if(name_20 && !__freed_obj__) { name_20 = come_decrement_ref_count(name_20, (void*)0, (void*)0, 0, 0, 0); }
                if(value_21 && !__freed_obj__) { value_21 = come_decrement_ref_count(value_21, ((struct sNode*)value_21)->finalize, ((struct sNode*)value_21)->_protocol_obj, 0, 0, 0); } 
                if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
                if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result20__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_29=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value22=get_value_from_stack(-1,info))));
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            add_variable_to_global_table_with_int_value(name_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value23=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80)))),"int",(_Bool)0,info)))),((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 80))->c_value,info);
            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 82)),((char*)(right_value25=xsprintf("%s=%s",name_20,((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 82))->c_value))));
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional51=i_12!=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_10, "16enum.c", 88)))-1,            __freed_obj__ = 0, 
            _if_conditional51) {
                buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 85)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 88)),"\n");
            __freed_obj__ = 0;
            n_13=atoi(((struct CVALUE*)come_null_check(right_value_29, "16enum.c", 90))->c_value);
            __freed_obj__ = 0;
            if(right_value_29 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        i_12++;
        __freed_obj__ = 0;
        n_13++;
        __freed_obj__ = 0;
        if(name_20 && !__freed_obj__) { name_20 = come_decrement_ref_count(name_20, (void*)0, (void*)0, 0, 0, 0); }
        if(value_21 && !__freed_obj__) { value_21 = come_decrement_ref_count(value_21, ((struct sNode*)value_21)->finalize, ((struct sNode*)value_21)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_11, "16enum.c", 96)),((char*)(right_value26=xsprintf("};\n",type_name_9))));
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional52=((struct sInfo*)come_null_check(info, "16enum.c", 106))->output_header_file&&string_operator_not_equals(((struct sEnumNode*)come_null_check(self, "16enum.c", 106))->mDeclareSName,((struct sInfo*)come_null_check(info, "16enum.c", 106))->base_sname),    __freed_obj__ = 0, 
    _if_conditional52) {
    }
    else {
        if(_if_conditional53=((struct sEnumNode*)come_null_check(self, "16enum.c", 104))->mOutput,        __freed_obj__ = 0, 
        _if_conditional53) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value27=buffer_to_string(((struct buffer*)come_null_check(buf_11, "16enum.c", 102))))));
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result21__ = (_Bool)1;
    if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
    if(type_name_9 && !__freed_obj__) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_11 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
struct tuple2$2charphsNodeph* result_15;
struct tuple2$2charphsNodeph* __result12__;
_Bool _if_conditional27;
struct tuple2$2charphsNodeph* __result13__;
struct tuple2$2charphsNodeph* result_16;
struct tuple2$2charphsNodeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_15, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_16, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional26=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional26) {
            __freed_obj__ = 0;
            memset(&result_15,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result12__ = __result_obj__ = result_15;
            __freed_obj__ = 0;
            return __result12__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional27=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional27) {
            __result13__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_16,0,sizeof(struct tuple2$2charphsNodeph*));
        __freed_obj__ = 0;
        __result14__ = __result_obj__ = result_16;
        __freed_obj__ = 0;
        return __result14__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result15__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result15__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
struct tuple2$2charphsNodeph* result_18;
struct tuple2$2charphsNodeph* __result16__;
_Bool _if_conditional29;
struct tuple2$2charphsNodeph* __result17__;
struct tuple2$2charphsNodeph* result_19;
struct tuple2$2charphsNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_18, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_19, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional28=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            __freed_obj__ = 0;
            memset(&result_18,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result16__ = __result_obj__ = result_18;
            __freed_obj__ = 0;
            return __result16__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional29=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional29) {
            __result17__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result17__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_19,0,sizeof(struct tuple2$2charphsNodeph*));
        __freed_obj__ = 0;
        __result18__ = __result_obj__ = result_19;
        __freed_obj__ = 0;
        return __result18__;
        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result19__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional32) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional35) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional38) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional41) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional43) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional44) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional46) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional47) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional33=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_23;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_23, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1sTypeph*));
                        it_23=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_23!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_24=it_23;
                            __freed_obj__ = 0;
                            it_23=((struct list_item$1sTypeph*)come_null_check(it_23, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_24 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional37=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_26, 0, sizeof(struct list_item$1sNodeph*));
                        it_25=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_25!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
                            prev_it_26=it_25;
                            __freed_obj__ = 0;
                            it_25=((struct list_item$1sNodeph*)come_null_check(it_25, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_26 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional39=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional39) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_27;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_28, 0, sizeof(struct list_item$1charph*));
                        it_27=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional5=it_27!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional5) {
                            prev_it_28=it_27;
                            __freed_obj__ = 0;
                            it_27=((struct list_item$1charph*)come_null_check(it_27, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_28 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional42=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional42) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional49;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional49=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional49) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional50=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional50) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = ((struct sEnumNode*)come_null_check(self, "16enum.c", 111))->sline;
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value28;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((char*)(right_value28=__builtin_string(((struct sEnumNode*)come_null_check(self, "16enum.c", 116))->sname)));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* klass_30;
_Bool output_31;
void* right_value30;
_Bool _if_conditional59;
void* right_value31;
void* right_value32;
struct sClass* __dec_obj10;
void* right_value44;
void* right_value95;
struct sClass* __dec_obj43;
void* right_value96;
void* right_value97;
void* right_value98;
struct list$1tuple2$2charphsNodephph* elements_106;
_Bool _while_condtional19;
void* right_value99;
char* element_name_108;
_Bool _if_conditional200;
_Bool no_comma_109;
void* right_value100;
struct sNode* element_value_110;
_Bool _if_conditional201;
void* right_value104;
void* right_value107;
_Bool _if_conditional204;
void* right_value108;
void* right_value109;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value110;
void* right_value111;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value117;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&output_31, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&elements_106, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value99, 0, sizeof(void*));
memset(&element_name_108, 0, sizeof(char*));
memset(&no_comma_109, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&element_value_110, 0, sizeof(struct sNode*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional59=((struct sClass*)(right_value30=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 133))->classes, "16enum.c", 133)),type_name,((void*)0))))==((void*)0),    (right_value30 && right_value30 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional59) {
        output_31=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj10=klass_30;
        klass_30=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value32=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value31=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 125)))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        if(__dec_obj10) { come_call_finalizer(sClass_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 126))->classes, "16enum.c", 126)),(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_30));
        __freed_obj__ = 0;
    }
    else {
        output_31=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj43=klass_30;
        klass_30=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value95=sClass_clone(((struct sClass*)(right_value44=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 130))->classes, "16enum.c", 130)),type_name,((void*)0))))))));
        if(__dec_obj43) { come_call_finalizer(sClass_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("16enum.c", 133),((struct optional$2intbool*)(right_value96=expected_next_character(123,info)))));
    come_pop_stackframe();
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    elements_106=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value98=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value97=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 135))))))));
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        element_name_108=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 140),((struct optional$2charphbool*)(right_value99=parse_word(info))))));
        come_pop_stackframe();
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional200=*((struct sInfo*)come_null_check(info, "16enum.c", 164))->p==61,        __freed_obj__ = 0, 
        _if_conditional200) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 145))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            no_comma_109=((struct sInfo*)come_null_check(info, "16enum.c", 148))->no_comma;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "16enum.c", 149))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            element_value_110=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=expression_v13(info))));
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "16enum.c", 152))->no_comma=no_comma_109;
            __freed_obj__ = 0;
            if(_if_conditional201=!((struct sInfo*)come_null_check(info, "16enum.c", 157))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional201) {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_106, "16enum.c", 155)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value107=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value104=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 155)))),(char*)come_increment_ref_count(element_name_108),(struct sNode*)come_increment_ref_count(element_value_110))))));
                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(element_value_110 && !__freed_obj__) { element_value_110 = come_decrement_ref_count(element_value_110, ((struct sNode*)element_value_110)->finalize, ((struct sNode*)element_value_110)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional204=!((struct sInfo*)come_null_check(info, "16enum.c", 162))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional204) {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_106, "16enum.c", 160)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value109=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value108=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 160)))),(char*)come_increment_ref_count(element_name_108),((void*)0))))));
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional205=*((struct sInfo*)come_null_check(info, "16enum.c", 171))->p==44,        __freed_obj__ = 0, 
        _if_conditional205) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 167))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional206=*((struct sInfo*)come_null_check(info, "16enum.c", 178))->p==125,        __freed_obj__ = 0, 
        _if_conditional206) {
            ((struct sInfo*)come_null_check(info, "16enum.c", 174))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(element_name_108 && !__freed_obj__) { element_name_108 = come_decrement_ref_count(element_name_108, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(element_name_108 && !__freed_obj__) { element_name_108 = come_decrement_ref_count(element_name_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 180);
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value111=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value110=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 180)))),(char*)come_increment_ref_count(type_name),elements_106,output_31,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result86__ = __result_obj__ = ((struct sNode*)(right_value117=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_30 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_106 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_30 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_106 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_32;
unsigned int it_33;
_Bool _while_condtional6;
_Bool _if_conditional54;
void* right_value29;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional56;
struct sClass* __result26__;
_Bool _if_conditional57;
_Bool _if_conditional58;
struct sClass* __result27__;
struct sClass* __result28__;
struct sClass* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_32, 0, sizeof(unsigned int));
memset(&it_33, 0, sizeof(unsigned int));
memset(&right_value29, 0, sizeof(void*));
        hash_32=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
        __freed_obj__ = 0;
        it_33=hash_32;
        __freed_obj__ = 0;
        while(_while_condtional6=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional6) {
            if(_if_conditional54=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_33],            __freed_obj__ = 0, 
            _if_conditional54) {
                if(_if_conditional56=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value29=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_33], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional56) {
                    __result26__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_33];
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_33++;
                __freed_obj__ = 0;
                if(_if_conditional57=it_33>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                __freed_obj__ = 0, 
                _if_conditional57) {
                    it_33=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional58=it_33==hash_32,                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        __result27__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result28__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result28__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result29__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result29__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional55;
_Bool default_value_34;
_Bool __result24__;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_34, 0, sizeof(_Bool));
                    if(_if_conditional55=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional55) {
                        __freed_obj__ = 0;
                        memset(&default_value_34,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result24__ = default_value_34;
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result25__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result25__;
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

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional60=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_35;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_35, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_35=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_35!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    prev_it_36=it_35;
                    __freed_obj__ = 0;
                    it_35=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_35, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_36 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional62=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional62) {
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional63=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional63) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional64=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional64) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional66;
unsigned int hash_52;
unsigned int it_53;
_Bool _while_condtional9;
_Bool _if_conditional74;
void* right_value38;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool same_key_exist_70;
char* it2_73;
_Bool _for_condtionalA3;
void* right_value40;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct map$2charphsClassph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_52, 0, sizeof(unsigned int));
memset(&it_53, 0, sizeof(unsigned int));
memset(&right_value38, 0, sizeof(void*));
memset(&same_key_exist_70, 0, sizeof(_Bool));
memset(&it2_73, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
            if(_if_conditional66=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional66) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_52=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_53=hash_52;
            __freed_obj__ = 0;
            while(_while_condtional9=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional74=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_53],                __freed_obj__ = 0, 
                _if_conditional74) {
                    if(_if_conditional75=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value38=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_53], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    (right_value38 && right_value38 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional75) {
                        if(_if_conditional76=1,                        __freed_obj__ = 0, 
                        _if_conditional76) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_53]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_53], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_53]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_53]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_53]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional96=1,                        __freed_obj__ = 0, 
                        _if_conditional96) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_53] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_53], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_53]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_53]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_53++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_53>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional97) {
                        it_53=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional98=it_53==hash_52,                        __freed_obj__ = 0, 
                        _if_conditional98) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_53]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional99=1,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_53]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_53]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional100=1,                    __freed_obj__ = 0, 
                    _if_conditional100) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_53]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_53]=item;
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
            same_key_exist_70=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_73=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA3;            it2_73=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional105=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value40=string_equals(((char*)come_null_check(it2_73, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional105) {
                    same_key_exist_70=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=!same_key_exist_70,            __freed_obj__ = 0, 
            _if_conditional106) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result49__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result49__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_37;
void* right_value33;
char** keys_38;
void* right_value34;
struct sClass** items_39;
void* right_value35;
_Bool* item_existance_40;
int len_41;
char* it_44;
_Bool _for_condtionalA2;
struct sClass* default_value_47;
void* right_value36;
struct sClass* it2_48;
unsigned int hash_49;
int n_50;
_Bool _while_condtional8;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct sClass* default_value_51;
void* right_value37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_37, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&keys_38, 0, sizeof(char**));
memset(&right_value34, 0, sizeof(void*));
memset(&items_39, 0, sizeof(struct sClass**));
memset(&right_value35, 0, sizeof(void*));
memset(&item_existance_40, 0, sizeof(_Bool*));
memset(&len_41, 0, sizeof(int));
memset(&it_44, 0, sizeof(char*));
memset(&default_value_47, 0, sizeof(struct sClass*));
memset(&right_value36, 0, sizeof(void*));
memset(&it2_48, 0, sizeof(struct sClass*));
memset(&hash_49, 0, sizeof(unsigned int));
memset(&n_50, 0, sizeof(int));
memset(&default_value_51, 0, sizeof(struct sClass*));
memset(&right_value37, 0, sizeof(void*));
                    size_37=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_38=(char**)come_increment_ref_count(((char**)(right_value33=(char**)come_calloc(1, sizeof(char*)*(1*(size_37)), "./comelang2.h", 1370))));
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_39=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value34=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_37)), "./comelang2.h", 1371))));
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_40=(_Bool*)come_increment_ref_count(((_Bool*)(right_value35=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_37)), "./comelang2.h", 1372))));
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_41=0;
                    __freed_obj__ = 0;
                    for(
                    it_44=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA2=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA2;                    it_44=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_47,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_48=((struct sClass*)(right_value36=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_44,default_value_47)));
                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_49=string_get_hash_key(((char*)come_null_check(it_44, "./comelang2.h", 1380)))%size_37;
                        __freed_obj__ = 0;
                        n_50=hash_49;
                        __freed_obj__ = 0;
                        while(_while_condtional8=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional8) {
                            if(_if_conditional71=item_existance_40[n_50],                            __freed_obj__ = 0, 
                            _if_conditional71) {
                                n_50++;
                                __freed_obj__ = 0;
                                if(_if_conditional72=n_50>=size_37,                                __freed_obj__ = 0, 
                                _if_conditional72) {
                                    n_50=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional73=n_50==hash_49,                                    __freed_obj__ = 0, 
                                    _if_conditional73) {
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
                                item_existance_40[n_50]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_38[n_50]=it_44;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_39[n_50]=((struct sClass*)(right_value37=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_44,default_value_51)));
                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_41++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_38;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_39;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_40;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_37;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_41;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional67;
char* result_42;
char* __result30__;
_Bool _if_conditional68;
char* __result31__;
char* result_43;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_42, 0, sizeof(char*));
memset(&result_43, 0, sizeof(char*));
                        if(_if_conditional67=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional67) {
                            __freed_obj__ = 0;
                            memset(&result_42,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result30__ = __result_obj__ = result_42;
                            __freed_obj__ = 0;
                            return __result30__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional68=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional68) {
                            __result31__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result31__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_43,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result32__ = __result_obj__ = result_43;
                        __freed_obj__ = 0;
                        return __result32__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result33__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result33__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional69;
char* result_45;
char* __result34__;
_Bool _if_conditional70;
char* __result35__;
char* result_46;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_45, 0, sizeof(char*));
memset(&result_46, 0, sizeof(char*));
                        if(_if_conditional69=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional69) {
                            __freed_obj__ = 0;
                            memset(&result_45,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result34__ = __result_obj__ = result_45;
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional70=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional70) {
                            __result35__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result35__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_46,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result36__ = __result_obj__ = result_46;
                        __freed_obj__ = 0;
                        return __result36__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_54;
struct list_item$1charp* it_55;
_Bool _while_condtional10;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional77;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct list_item$1charp*));
memset(&right_value39, 0, sizeof(void*));
                                it2_54=0;
                                __freed_obj__ = 0;
                                it_55=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional10=it_55!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional10) {
                                    if(_if_conditional77=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_55, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional77) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_54,it2_54+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_54++;
                                    __freed_obj__ = 0;
                                    it_55=((struct list_item$1charp*)come_null_check(it_55, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result40__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result40__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
int tmp_56;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result37__;
_Bool _if_conditional84;
_Bool _if_conditional85;
struct list_item$1charp* it_59;
int i_60;
_Bool _while_condtional12;
_Bool _if_conditional86;
struct list_item$1charp* prev_it_61;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list_item$1charp* it_62;
int i_63;
_Bool _while_condtional13;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct list_item$1charp* prev_it_64;
struct list_item$1charp* it_65;
struct list_item$1charp* head_prev_it_66;
struct list_item$1charp* tail_it_67;
int i_68;
_Bool _while_condtional14;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* prev_it_69;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct list$1charp* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_56, 0, sizeof(int));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&i_60, 0, sizeof(int));
memset(&prev_it_61, 0, sizeof(struct list_item$1charp*));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
memset(&i_63, 0, sizeof(int));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
memset(&it_65, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_66, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_67, 0, sizeof(struct list_item$1charp*));
memset(&i_68, 0, sizeof(int));
memset(&prev_it_69, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional78=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional78) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional79=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional79) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional80=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional80) {
                                                tmp_56=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_56;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional81=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional81) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional82=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional82) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional83=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional83) {
                                                __result37__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result37__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional84=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional84) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional85=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional85) {
                                                    it_59=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_60=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional12=it_59!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional12) {
                                                        if(_if_conditional86=i_60<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional86) {
                                                            prev_it_61=it_59;
                                                            __freed_obj__ = 0;
                                                            it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_60++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_61 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional87=i_60==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional87) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_59;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_60++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional88=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional88) {
                                                        it_62=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_63=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional13=it_62!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional13) {
                                                            if(_if_conditional89=i_63==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional89) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional90=i_63>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional90) {
                                                                prev_it_64=it_62;
                                                                __freed_obj__ = 0;
                                                                it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_63++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_64 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_63++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_65=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_66=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_67=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_68=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional14=it_65!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional14) {
                                                            if(_if_conditional91=i_68==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional91) {
                                                                head_prev_it_66=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional92=i_68==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional92) {
                                                                tail_it_67=it_65;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional93=i_68>=head&&i_68<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional93) {
                                                                prev_it_69=it_65;
                                                                __freed_obj__ = 0;
                                                                it_65=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_68++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_69 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_65=((struct list_item$1charp*)come_null_check(it_65, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_68++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional94=head_prev_it_66!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional94) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_66, "./comelang2.h", 620))->next=tail_it_67;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional95=tail_it_67!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional95) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_67, "./comelang2.h", 623))->prev=head_prev_it_66;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result39__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result39__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_57;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_58;
struct list$1charp* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_57, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
                                                    it_57=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional11=it_57!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional11) {
                                                        prev_it_58=it_57;
                                                        __freed_obj__ = 0;
                                                        it_57=((struct list_item$1charp*)come_null_check(it_57, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result38__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result38__;
                                                    __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional101;
char* result_71;
char* __result41__;
_Bool _if_conditional102;
char* __result42__;
char* result_72;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
                if(_if_conditional101=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    __freed_obj__ = 0;
                    memset(&result_71,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result41__ = __result_obj__ = result_71;
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional102=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional102) {
                    __result42__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result42__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_72,0,sizeof(char*));
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = result_72;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result44__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional103;
char* result_74;
char* __result45__;
_Bool _if_conditional104;
char* __result46__;
char* result_75;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_74, 0, sizeof(char*));
memset(&result_75, 0, sizeof(char*));
                if(_if_conditional103=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    __freed_obj__ = 0;
                    memset(&result_74,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result45__ = __result_obj__ = result_74;
                    __freed_obj__ = 0;
                    return __result45__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional104=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional104) {
                    __result46__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_75,0,sizeof(char*));
                __freed_obj__ = 0;
                __result47__ = __result_obj__ = result_75;
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional107;
void* right_value41;
struct list_item$1charp* litem_76;
_Bool _if_conditional108;
void* right_value42;
struct list_item$1charp* litem_77;
void* right_value43;
struct list_item$1charp* litem_78;
struct list$1charp* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1charp*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional107=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        litem_76=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value41=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_76, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_76;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_76;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional108=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional108) {
                            litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value42=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_77;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_77;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_78=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value43=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_78;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_78;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result48__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional109;
struct sClass* __result50__;
void* right_value45;
struct sClass* result_79;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value46;
char* __dec_obj11;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value93;
struct list$1tuple2$2charphsTypephph* __dec_obj41;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value94;
char* __dec_obj42;
struct sClass* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct sClass*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
            if(_if_conditional109=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional109) {
                __result50__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_79=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value45=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional110=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional110) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional111=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional112=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional112) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional113=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional113) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional114=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional115=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional116=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional116) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional117=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional118=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 13))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                __dec_obj11=((struct sClass*)come_null_check(result_79, "sClass_clone", 12))->mName;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional120=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional120) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional121=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 16))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __dec_obj41=((struct sClass*)come_null_check(result_79, "sClass_clone", 15))->mFields;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value93=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
                if(__dec_obj41) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 18))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                __dec_obj42=((struct sClass*)come_null_check(result_79, "sClass_clone", 17))->mDeclareSName;
                ((struct sClass*)come_null_check(result_79, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = result_79;
            if(result_79 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
            if(result_79 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional122;
struct list$1tuple2$2charphsTypephph* __result51__;
void* right_value47;
void* right_value48;
struct list$1tuple2$2charphsTypephph* result_80;
struct list_item$1tuple2$2charphsTypephph* it_81;
_Bool _while_condtional15;
void* right_value92;
struct list$1tuple2$2charphsTypephph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_81, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value92, 0, sizeof(void*));
                    if(_if_conditional122=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional122) {
                        __result51__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result51__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_80=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value48=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value47=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_81=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_81!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_80, "./comelang2.h", 192)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value92=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_81, "./comelang2.h", 192))->item)))));
                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_81=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_81, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result76__ = __result_obj__ = result_80;
                    if(result_80 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                    if(result_80 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsTypephph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result52__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result52__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
void* right_value49;
struct list_item$1tuple2$2charphsTypephph* litem_82;
struct tuple2$2charphsTypeph* __dec_obj12;
_Bool _if_conditional126;
void* right_value50;
struct list_item$1tuple2$2charphsTypephph* litem_83;
struct tuple2$2charphsTypeph* __dec_obj13;
void* right_value51;
struct list_item$1tuple2$2charphsTypephph* litem_84;
struct tuple2$2charphsTypeph* __dec_obj14;
struct list$1tuple2$2charphsTypephph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional123=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional123) {
                                litem_82=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value49=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 202))));
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 206))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_82, "./comelang2.h", 206))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_82;
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_82;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional126=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional126) {
                                    litem_83=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value50=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212))));
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj13=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 216))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_83, "./comelang2.h", 216))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj13) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_83;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_83;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_84=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value51=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222))));
                                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 226))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_84, "./comelang2.h", 226))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_84;
                                    __freed_obj__ = 0;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_84;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result53__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result53__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional124=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional124) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional125=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional125) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
struct tuple2$2charphsTypeph* __result54__;
void* right_value52;
struct tuple2$2charphsTypeph* result_85;
_Bool _if_conditional128;
void* right_value53;
char* __dec_obj15;
_Bool _if_conditional129;
void* right_value91;
struct sType* __dec_obj40;
struct tuple2$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
                            if(_if_conditional127=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional127) {
                                __result54__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result54__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_85=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value52=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional128=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional128) {
                                __dec_obj15=((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 4))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional129=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional129) {
                                __dec_obj40=((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 5))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_85, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                                if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result75__ = __result_obj__ = result_85;
                            if(result_85 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                            if(result_85 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional130;
struct sType* __result55__;
void* right_value54;
struct sType* result_86;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional136;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional139;
void* right_value61;
char* __dec_obj20;
_Bool _if_conditional140;
void* right_value68;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional144;
void* right_value75;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional148;
_Bool _if_conditional149;
void* right_value76;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional150;
void* right_value83;
struct list$1charph* __dec_obj33;
_Bool _if_conditional154;
void* right_value86;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value87;
struct sNode* __dec_obj36;
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
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value88;
struct sNode* __dec_obj37;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value89;
char* __dec_obj38;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value90;
char* __dec_obj39;
struct sType* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
                                    if(_if_conditional130=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional130) {
                                        __result55__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result55__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional131=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional131) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional132=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional132) {
                                        __dec_obj17=((struct sType*)come_null_check(result_86, "sType_clone", 5))->mNoSolvedGenericsType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                        if(__dec_obj17) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional136=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional136) {
                                        __dec_obj19=((struct sType*)come_null_check(result_86, "sType_clone", 6))->mOriginalLoadVarType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                        if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional139=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional139) {
                                        __dec_obj20=((struct sType*)come_null_check(result_86, "sType_clone", 7))->mGenericsName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional140=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional140) {
                                        __dec_obj24=((struct sType*)come_null_check(result_86, "sType_clone", 8))->mGenericsTypes;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value68=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                        if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional144=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional144) {
                                        __dec_obj28=((struct sType*)come_null_check(result_86, "sType_clone", 9))->mArrayNum;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value75=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                        if(__dec_obj28) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional148=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional148) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional149=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional149) {
                                        __dec_obj29=((struct sType*)come_null_check(result_86, "sType_clone", 11))->mParamTypes;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value76=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                        if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional150) {
                                        __dec_obj33=((struct sType*)come_null_check(result_86, "sType_clone", 12))->mParamNames;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value83=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional154) {
                                        __dec_obj35=((struct sType*)come_null_check(result_86, "sType_clone", 13))->mResultType;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value86=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                        if(__dec_obj35) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional157=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional157) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional158=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional158) {
                                        __dec_obj36=((struct sType*)come_null_check(result_86, "sType_clone", 15))->mAlignas;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0); }
                                        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional159=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional159) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional160=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional160) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional161=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional161) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional162=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional162) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional163=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional163) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional164=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional164) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional165=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional165) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional166=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional166) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional167=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional167) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional168=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional168) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional169=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional169) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional170=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional170) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional171=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional171) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional172=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional172) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional173=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional173) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional174=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional174) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional175=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional175) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional176=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional176) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional177=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional177) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional178=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional178) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional179=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional179) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional180=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional180) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional181=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional181) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional182=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional182) {
                                        __dec_obj37=((struct sType*)come_null_check(result_86, "sType_clone", 39))->mSizeNum;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
                                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional183=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional183) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional184=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional184) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional185=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional185) {
                                        __dec_obj38=((struct sType*)come_null_check(result_86, "sType_clone", 42))->mOriginalTypeName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional186=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional186) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional187=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional187) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional188=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional188) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional189=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional189) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional190=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional190) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional191=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional191) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional192=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional192) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional193=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional193) {
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional194=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional194) {
                                        __dec_obj39=((struct sType*)come_null_check(result_86, "sType_clone", 51))->mAsmName;
                                        ((struct sType*)come_null_check(result_86, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value90=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result74__ = __result_obj__ = result_86;
                                    if(result_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result74__;
                                    __freed_obj__ = 0;
                                    if(result_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional134=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional134) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
struct list$1sTypeph* __result60__;
void* right_value62;
void* right_value63;
struct list$1sTypeph* result_89;
struct list_item$1sTypeph* it_90;
_Bool _while_condtional16;
void* right_value67;
struct list$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct list$1sTypeph*));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value67, 0, sizeof(void*));
                                            if(_if_conditional141=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional141) {
                                                __result60__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result60__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_89=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value62=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_90=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional16=it_90!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional16) {
                                                list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_89, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_90, "./comelang2.h", 192))->item)))));
                                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                it_90=((struct list_item$1sTypeph*)come_null_check(it_90, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result63__ = __result_obj__ = result_89;
                                            if(result_89 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result63__;
                                            __freed_obj__ = 0;
                                            if(result_89 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result61__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result61__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional142;
void* right_value64;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj21;
_Bool _if_conditional143;
void* right_value65;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj22;
void* right_value66;
struct list_item$1sTypeph* litem_93;
struct sType* __dec_obj23;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value65, 0, sizeof(void*));
memset(&litem_92, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value66, 0, sizeof(void*));
memset(&litem_93, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional142=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional142) {
                                                        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value64=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_91;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_91;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional143=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional143) {
                                                            litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value65=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_92;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_92;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_93=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value66=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                                            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_93, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_93;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_93;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result62__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result62__;
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
_Bool _if_conditional145;
struct list$1sNodeph* __result64__;
void* right_value69;
void* right_value70;
struct list$1sNodeph* result_94;
struct list_item$1sNodeph* it_95;
_Bool _while_condtional17;
void* right_value74;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&result_94, 0, sizeof(struct list$1sNodeph*));
memset(&it_95, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value74, 0, sizeof(void*));
                                            if(_if_conditional145=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional145) {
                                                __result64__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result64__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_94=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value69=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_95=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional17=it_95!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional17) {
                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_94, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_95, "./comelang2.h", 192))->item)))));
                                                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                it_95=((struct list_item$1sNodeph*)come_null_check(it_95, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result67__ = __result_obj__ = result_94;
                                            if(result_94 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_94, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result67__;
                                            __freed_obj__ = 0;
                                            if(result_94 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_94, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result65__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result65__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional146;
void* right_value71;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj25;
_Bool _if_conditional147;
void* right_value72;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj26;
void* right_value73;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_98, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional146=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional146) {
                                                        litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value71=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj25=((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_96, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_96;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_96;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional147=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional147) {
                                                            litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value72=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj26=((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_97, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_97;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_97;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value73=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj27=((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(litem_98, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_98;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_98;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result66__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                    __freed_obj__ = 0;
                                                    return __result66__;
                                                    __freed_obj__ = 0;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
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
_Bool _if_conditional151;
struct list$1charph* __result68__;
void* right_value77;
void* right_value78;
struct list$1charph* result_99;
struct list_item$1charph* it_100;
_Bool _while_condtional18;
void* right_value82;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct list$1charph*));
memset(&it_100, 0, sizeof(struct list_item$1charph*));
memset(&right_value82, 0, sizeof(void*));
                                            if(_if_conditional151=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional151) {
                                                __result68__ = __result_obj__ = ((void*)0);
                                                __freed_obj__ = 0;
                                                return __result68__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_99=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value77=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_100=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                            __freed_obj__ = 0;
                                            while(_while_condtional18=it_100!=((void*)0),                                            __freed_obj__ = 0, 
                                            _while_condtional18) {
                                                list$1charph_add(((struct list$1charph*)come_null_check(result_99, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value82=string_clone(((struct list_item$1charph*)come_null_check(it_100, "./comelang2.h", 192))->item)))));
                                                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                it_100=((struct list_item$1charph*)come_null_check(it_100, "./comelang2.h", 194))->next;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result71__ = __result_obj__ = result_99;
                                            if(result_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result71__;
                                            __freed_obj__ = 0;
                                            if(result_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                __freed_obj__ = 0;
                                                __result69__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result69__;
                                                __freed_obj__ = 0;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
void* right_value79;
struct list_item$1charph* litem_101;
char* __dec_obj30;
_Bool _if_conditional153;
void* right_value80;
struct list_item$1charph* litem_102;
char* __dec_obj31;
void* right_value81;
struct list_item$1charph* litem_103;
char* __dec_obj32;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1charph*));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1charph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional152=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional152) {
                                                        litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 204))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 205))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj30=((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 206))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_101, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_101;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_101;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional153=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional153) {
                                                            litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 215))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj31=((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 216))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_102, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_102;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_102;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value81=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 225))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj32=((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 226))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_103, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_103;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_103;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                    __freed_obj__ = 0;
                                                    __result70__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result70__;
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
_Bool _if_conditional155;
struct tuple1$1sTypeph* __result72__;
void* right_value84;
struct tuple1$1sTypeph* result_104;
_Bool _if_conditional156;
void* right_value85;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&result_104, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value85, 0, sizeof(void*));
                                            if(_if_conditional155=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional155) {
                                                __result72__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result72__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_104=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value84=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional156=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional156) {
                                                __dec_obj34=((struct tuple1$1sTypeph*)come_null_check(result_104, "tuple1$1sTypephp_clone", 4))->v1;
                                                ((struct tuple1$1sTypeph*)come_null_check(result_104, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                                if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result73__ = __result_obj__ = result_104;
                                            if(result_104 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result73__;
                                            __freed_obj__ = 0;
                                            if(result_104 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional197;
int default_value_105;
int __result78__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_105, 0, sizeof(int));
        if(_if_conditional197=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            __freed_obj__ = 0;
            memset(&default_value_105,0,sizeof(int));
            __freed_obj__ = 0;
            __result78__ = default_value_105;
            __freed_obj__ = 0;
            return __result78__;
            __freed_obj__ = 0;
        }
        else {
            __result79__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result79__;
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

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional198;
char* default_value_107;
char* __result80__;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_107, 0, sizeof(char*));
            if(_if_conditional198=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                __freed_obj__ = 0;
                memset(&default_value_107,0,sizeof(char*));
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = default_value_107;
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
            }
            else {
                __result81__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional199=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional202;
void* right_value101;
struct list_item$1tuple2$2charphsNodephph* litem_111;
struct tuple2$2charphsNodeph* __dec_obj44;
_Bool _if_conditional203;
void* right_value102;
struct list_item$1tuple2$2charphsNodephph* litem_112;
struct tuple2$2charphsNodeph* __dec_obj45;
void* right_value103;
struct list_item$1tuple2$2charphsNodephph* litem_113;
struct tuple2$2charphsNodeph* __dec_obj46;
struct list$1tuple2$2charphsNodephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional202=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional202) {
                        litem_111=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value101=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 272))));
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj44=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 276))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_111, "./comelang2.h", 276))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj44) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_111;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_111;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional203=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional203) {
                            litem_112=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value102=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282))));
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj45=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 286))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_112, "./comelang2.h", 286))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_112;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_112;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_113=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value103=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292))));
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj46=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 296))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_113, "./comelang2.h", 296))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_113;
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_113;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result82__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result82__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value105;
char* __dec_obj47;
void* right_value106;
struct sNode* __dec_obj48;
struct tuple2$2charphsNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
                    __dec_obj47=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(v1))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj48=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(v2))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    __result83__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional218;
char* type_name_115;
_Bool _if_conditional219;
void* right_value118;
char* __dec_obj53;
void* right_value119;
char* __dec_obj54;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
struct list$1tuple2$2charphsNodephph* elements_116;
_Bool _while_condtional20;
void* right_value125;
char* element_name_117;
_Bool _if_conditional220;
_Bool no_comma_118;
void* right_value126;
struct sNode* element_value_119;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value131;
void* right_value132;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value138;
struct sNode* __result89__;
void* right_value139;
void* right_value140;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_115, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&elements_116, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value125, 0, sizeof(void*));
memset(&element_name_117, 0, sizeof(char*));
memset(&no_comma_118, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&element_value_119, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    if(_if_conditional218=string_operator_equals(buf,"enum"),    __freed_obj__ = 0, 
    _if_conditional218) {
        type_name_115=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional219=*((struct sInfo*)come_null_check(info, "16enum.c", 196))->p==123,        __freed_obj__ = 0, 
        _if_conditional219) {
            __dec_obj53=type_name_115;
            type_name_115=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(""))));
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            __dec_obj54=type_name_115;
            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 191),((struct optional$2charphbool*)(right_value119=parse_word(info))))));
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 193))->classes, "16enum.c", 193)),(char*)come_increment_ref_count(type_name_115),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value121=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value120=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 193)))),type_name_115,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("16enum.c", 196),((struct optional$2intbool*)(right_value122=expected_next_character(123,info)))));
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        elements_116=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value124=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value123=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 198))))))));
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        while(_while_condtional20=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional20) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            element_name_117=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("16enum.c", 202),((struct optional$2charphbool*)(right_value125=parse_word(info))))));
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional220=*((struct sInfo*)come_null_check(info, "16enum.c", 220))->p==61,            __freed_obj__ = 0, 
            _if_conditional220) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 206))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_118=((struct sInfo*)come_null_check(info, "16enum.c", 209))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "16enum.c", 210))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                element_value_119=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=expression_v13(info))));
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "16enum.c", 213))->no_comma=no_comma_118;
                __freed_obj__ = 0;
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_116, "16enum.c", 215)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value128=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value127=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 215)))),(char*)come_increment_ref_count(element_name_117),(struct sNode*)come_increment_ref_count(element_value_119))))));
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(element_value_119 && !__freed_obj__) { element_value_119 = come_decrement_ref_count(element_value_119, ((struct sNode*)element_value_119)->finalize, ((struct sNode*)element_value_119)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_116, "16enum.c", 218)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value130=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value129=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 218)))),(char*)come_increment_ref_count(element_name_117),((void*)0))))));
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional221=*((struct sInfo*)come_null_check(info, "16enum.c", 226))->p==44,            __freed_obj__ = 0, 
            _if_conditional221) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 223))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional222=*((struct sInfo*)come_null_check(info, "16enum.c", 233))->p==125,            __freed_obj__ = 0, 
            _if_conditional222) {
                ((struct sInfo*)come_null_check(info, "16enum.c", 229))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(element_name_117 && !__freed_obj__) { element_name_117 = come_decrement_ref_count(element_name_117, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(element_name_117 && !__freed_obj__) { element_name_117 = come_decrement_ref_count(element_name_117, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 235);
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value132=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value131=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 235)))),(char*)come_increment_ref_count(type_name_115),elements_116,(_Bool)1,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result89__ = __result_obj__ = ((struct sNode*)(right_value138=_inf_value2));
        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_116 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_116, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result89__;
        __freed_obj__ = 0;
        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_116 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = ((struct sNode*)(right_value140=top_level_v95((char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional223=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0))->mTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->mElements!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mElements && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1))->mElements, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 4))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName && !__freed_obj__) { ((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName = come_decrement_ref_count(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional227;
struct sEnumNode* __result87__;
void* right_value133;
struct sEnumNode* result_120;
_Bool _if_conditional228;
void* right_value134;
char* __dec_obj55;
_Bool _if_conditional229;
void* right_value135;
struct list$1tuple2$2charphsNodephph* __dec_obj56;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value136;
char* __dec_obj57;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value137;
char* __dec_obj58;
struct sEnumNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sEnumNode*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
            if(_if_conditional227=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional227) {
                __result87__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_120=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value133=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3))));
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5))->mTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                __dec_obj55=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 4))->mTypeName;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 4))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value134=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 4))->mTypeName))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional229=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6))->mElements!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
                __dec_obj56=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 5))->mElements;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 5))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value135=list$1tuple2$2charphsNodephphp_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5))->mElements))));
                if(__dec_obj56) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional230=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 6))->sline=((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional231=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional231) {
                __dec_obj57=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 7))->sname;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 7))->sname))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional232=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional232) {
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 8))->mOutput=((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 8))->mOutput;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional233=self!=((void*)0)&&((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 10))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional233) {
                __dec_obj58=((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 9))->mDeclareSName;
                ((struct sEnumNode*)come_null_check(result_120, "sEnumNode_clone", 9))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value137=string_clone(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 9))->mDeclareSName))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result88__ = __result_obj__ = result_120;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
            if(result_120 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

