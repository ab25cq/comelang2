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
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
int gRightValueNum=0;
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sGenericsFunpbool
{
    struct sGenericsFun* v1;
    _Bool v2;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

static char* optional$2charphbool_expect(struct optional$2charphbool* self);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2);
static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self);
static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self);
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
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* result_24;
_Bool _if_conditional87;
struct sType* __result19__;
_Bool _if_conditional88;
struct sType* __result21__;
struct sClass* klass_25;
_Bool _if_conditional89;
void* right_value35;
struct sType* result_type_26;
void* right_value36;
void* right_value38;
struct tuple1$1sTypeph* __dec_obj24;
void* right_value39;
void* right_value40;
struct list$1sTypeph* new_param_types_27;
struct list$1sTypeph* o2_saved_28;
struct sType* it_31;
_Bool _for_condtionalA1;
void* right_value41;
struct sType* new_param_type_34;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional96;
int generics_number_38;
_Bool _if_conditional97;
void* right_value49;
struct sClass* klass2_43;
int generics_number2_44;
_Bool _if_conditional102;
void* right_value50;
struct list$1sNodeph* array_num_45;
_Bool immutable__46;
int pointer_num_47;
_Bool heap_48;
_Bool no_heap_49;
_Bool no_calling_destructor_50;
_Bool exception__51;
void* right_value51;
void* right_value52;
struct sType* __dec_obj30;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional109;
struct list$1sTypeph* o2_saved_54;
struct sType* it_55;
_Bool _for_condtionalA2;
void* right_value53;
struct sType* type_56;
void* right_value54;
_Bool _if_conditional110;
void* right_value55;
char* new_name_57;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct sType*));
memset(&klass_25, 0, sizeof(struct sClass*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_type_26, 0, sizeof(struct sType*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&new_param_types_27, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_28, 0, sizeof(struct list$1sTypeph*));
memset(&it_31, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&new_param_type_34, 0, sizeof(struct sType*));
memset(&generics_number_38, 0, sizeof(int));
memset(&right_value49, 0, sizeof(void*));
memset(&klass2_43, 0, sizeof(struct sClass*));
memset(&generics_number2_44, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&array_num_45, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__46, 0, sizeof(_Bool));
memset(&pointer_num_47, 0, sizeof(int));
memset(&heap_48, 0, sizeof(_Bool));
memset(&no_heap_49, 0, sizeof(_Bool));
memset(&no_calling_destructor_50, 0, sizeof(_Bool));
memset(&exception__51, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&o2_saved_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&new_name_57, 0, sizeof(char*));
    result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional87=generics_type==((void*)0),    __freed_obj__ = 0, 
    _if_conditional87) {
        __result19__ = __result_obj__ = result_24;
        if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result19__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional88=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 13))->mGenericsTypes, "04heap.c", 13)))==0,    __freed_obj__ = 0, 
    _if_conditional88) {
        __result21__ = __result_obj__ = result_24;
        if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result21__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_25=((struct sType*)come_null_check(type, "04heap.c", 13))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional89=string_operator_equals(((struct sClass*)come_null_check(klass_25, "04heap.c", 96))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional89) {
        result_type_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 16))->mResultType, "04heap.c", 16))->v1,generics_type,info))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=((struct sType*)come_null_check(result_24, "04heap.c", 18))->mResultType;
        ((struct sType*)come_null_check(result_24, "04heap.c", 18))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value38=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value36=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 18)))),(struct sType*)come_increment_ref_count(result_type_26)))));
        if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        new_param_types_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "04heap.c", 20))))))));
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_28=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 28))->mParamTypes)),it_31=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_31=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_28), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0        ){
            new_param_type_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=solve_generics(it_31,generics_type,info))));
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(new_param_types_27, "04heap.c", 25)),(struct sType*)come_increment_ref_count(new_param_type_34));
            __freed_obj__ = 0;
            if(new_param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_28 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj28=((struct sType*)come_null_check(result_24, "04heap.c", 28))->mParamTypes;
        ((struct sType*)come_null_check(result_24, "04heap.c", 28))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(new_param_types_27);
        if(__dec_obj28) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(result_type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_param_types_27 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,new_param_types_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional96=((struct sClass*)come_null_check(klass_25, "04heap.c", 96))->mGenerics,        __freed_obj__ = 0, 
        _if_conditional96) {
            generics_number_38=((struct sClass*)come_null_check(klass_25, "04heap.c", 31))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional97=generics_number_38>=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes, "04heap.c", 39))),            __freed_obj__ = 0, 
            _if_conditional97) {
                err_msg(info,"invalid generics parametor number");
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            klass2_43=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 39),((struct optional$2sTypephbool*)(right_value49=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes,generics_number_38))))), "04heap.c", 39))->mClass;
            come_pop_stackframe();
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            generics_number2_44=((struct sClass*)come_null_check(klass2_43, "04heap.c", 41))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional102=generics_number_38!=generics_number2_44,            __freed_obj__ = 0, 
            _if_conditional102) {
                array_num_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value50=list$1sNodephp_clone(((struct sType*)come_null_check(type, "04heap.c", 45))->mArrayNum))));
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                immutable__46=((struct sType*)come_null_check(type, "04heap.c", 46))->mImmutable;
                __freed_obj__ = 0;
                pointer_num_47=((struct sType*)come_null_check(type, "04heap.c", 47))->mPointerNum;
                __freed_obj__ = 0;
                heap_48=((struct sType*)come_null_check(type, "04heap.c", 48))->mHeap;
                __freed_obj__ = 0;
                no_heap_49=((struct sType*)come_null_check(type, "04heap.c", 50))->mNoHeap;
                __freed_obj__ = 0;
                no_calling_destructor_50=((struct sType*)come_null_check(type, "04heap.c", 51))->mNoCallingDestructor;
                __freed_obj__ = 0;
                exception__51=((struct sType*)come_null_check(type, "04heap.c", 52))->mException;
                __freed_obj__ = 0;
                come_clear_stackframe();
                __dec_obj30=result_24;
                result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 54),((struct optional$2sTypephbool*)(right_value51=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 54))->mGenericsTypes,generics_number_38)))))))));
                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional103=heap_48,                __freed_obj__ = 0, 
                _if_conditional103) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 57))->mHeap=heap_48;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=exception__51,                __freed_obj__ = 0, 
                _if_conditional104) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 60))->mException=exception__51;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=no_heap_49,                __freed_obj__ = 0, 
                _if_conditional105) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 63))->mNoHeap=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(result_24, "04heap.c", 64))->mHeap=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional106=no_calling_destructor_50,                __freed_obj__ = 0, 
                _if_conditional106) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 67))->mNoCallingDestructor=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional107=immutable__46,                __freed_obj__ = 0, 
                _if_conditional107) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 70))->mImmutable=immutable__46;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(array_num_45, "04heap.c", 76)))>0,                __freed_obj__ = 0, 
                _if_conditional108) {
                    __dec_obj31=((struct sType*)come_null_check(result_24, "04heap.c", 73))->mArrayNum;
                    ((struct sType*)come_null_check(result_24, "04heap.c", 73))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_45);
                    if(__dec_obj31) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=pointer_num_47>0,                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_24, "04heap.c", 77))->mPointerNum+=pointer_num_47;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_45 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_45, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_24, "04heap.c", 82))->mGenericsTypes, "04heap.c", 82)));
            __freed_obj__ = 0;
            for(
            o2_saved_54=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 88))->mGenericsTypes)),it_55=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_54), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_54), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            it_55=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_54), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            0            ){
                type_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(it_55,generics_type,info))));
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_24, "04heap.c", 85))->mGenericsTypes, "04heap.c", 85)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(type_56)))));
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_54 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_54, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional110=!output_generics_struct(result_24,generics_type,info),            __freed_obj__ = 0, 
            _if_conditional110) {
                new_name_57=(char*)come_increment_ref_count(((char*)(right_value55=create_generics_name(type,info))));
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                printf("output generics is failed(%s)",new_name_57);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
                if(new_name_57 && !__freed_obj__) { new_name_57 = come_decrement_ref_count(new_name_57, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result38__ = __result_obj__ = result_24;
    if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
    if(result_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result20__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result20__;
        __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value37;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
            __dec_obj23=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(v1))));
            if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result22__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result22__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional90;
struct sType* result_29;
struct sType* __result23__;
_Bool _if_conditional91;
struct sType* __result24__;
struct sType* result_30;
struct sType* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sType*));
memset(&result_30, 0, sizeof(struct sType*));
            if(_if_conditional90=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                __freed_obj__ = 0;
                memset(&result_29,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result23__ = __result_obj__ = result_29;
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional91=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional91) {
                __result24__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result24__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_30,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result25__ = __result_obj__ = result_30;
            __freed_obj__ = 0;
            return __result25__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result26__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result26__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
struct sType* result_32;
struct sType* __result27__;
_Bool _if_conditional93;
struct sType* __result28__;
struct sType* result_33;
struct sType* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_32, 0, sizeof(struct sType*));
memset(&result_33, 0, sizeof(struct sType*));
            if(_if_conditional92=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                __freed_obj__ = 0;
                memset(&result_32,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result27__ = __result_obj__ = result_32;
                __freed_obj__ = 0;
                return __result27__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional93=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional93) {
                __result28__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result28__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_33,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result29__ = __result_obj__ = result_33;
            __freed_obj__ = 0;
            return __result29__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional94;
void* right_value42;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj25;
_Bool _if_conditional95;
void* right_value43;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj26;
void* right_value44;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj27;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional94=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional94) {
                    litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value42=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj25=((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_35;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_35;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional95=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional95) {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value43=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj26=((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_36, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_36;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_36;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value44=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj27=((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_37, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_37;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_37;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result30__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional98;
struct list_item$1sTypeph* it_39;
int i_40;
_Bool _while_condtional7;
_Bool _if_conditional99;
void* right_value45;
void* right_value46;
struct optional$2sTypephbool* __result32__;
struct sType* default_value_41;
void* right_value47;
void* right_value48;
struct optional$2sTypephbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_40, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&default_value_41, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
                if(_if_conditional98=position<0,                __freed_obj__ = 0, 
                _if_conditional98) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_39=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_40=0;
                __freed_obj__ = 0;
                while(_while_condtional7=it_39!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    if(_if_conditional99=position==i_40,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        __result32__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value46=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value45=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result32__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_39=((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_40++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_41,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result33__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value48=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value47=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_41),(_Bool)0))));
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj29;
struct optional$2sTypephbool* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj29=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result31__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result31__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional100=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional101;
struct sType* default_value_42;
struct sType* __result34__;
struct sType* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_42, 0, sizeof(struct sType*));
                if(_if_conditional101=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    __freed_obj__ = 0;
                    memset(&default_value_42,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result34__ = __result_obj__ = default_value_42;
                    __freed_obj__ = 0;
                    return __result34__;
                    __freed_obj__ = 0;
                }
                else {
                    __result35__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result36__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_52;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_53;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sTypeph*));
                it_52=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_52!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    prev_it_53=it_52;
                    __freed_obj__ = 0;
                    it_52=((struct list_item$1sTypeph*)come_null_check(it_52, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_53 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result37__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value56;
struct sType* result_58;
_Bool _if_conditional111;
void* right_value57;
struct sType* __dec_obj32;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&result_58, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
    result_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(type))));
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional111=generics_type,    __freed_obj__ = 0, 
    _if_conditional111) {
        __dec_obj32=result_58;
        result_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=solve_generics(result_58,generics_type,info))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result39__ = __result_obj__ = result_58;
    if(result_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_58, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
    if(result_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
_Bool __freed_obj__;
char* p_59;
_Bool _if_conditional112;
_Bool _while_condtional9;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
int n_60;
_Bool _while_condtional10;
int __result40__;
int __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_59, 0, sizeof(char*));
memset(&n_60, 0, sizeof(int));
    p_59=obj;
    __freed_obj__ = 0;
    if(_if_conditional112=*p_59==40,    __freed_obj__ = 0, 
    _if_conditional112) {
        p_59++;
        __freed_obj__ = 0;
        while(_while_condtional9=*p_59!=41,        __freed_obj__ = 0, 
        _while_condtional9) {
            p_59++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_59++;
        __freed_obj__ = 0;
        if(_if_conditional113=*p_59==40,        __freed_obj__ = 0, 
        _if_conditional113) {
            p_59++;
            __freed_obj__ = 0;
            if(_if_conditional114=memcmp(p_59,"right_value",strlen("right_value"))==0,            __freed_obj__ = 0, 
            _if_conditional114) {
                p_59+=strlen("right_value");
                __freed_obj__ = 0;
                if(_if_conditional115=xisdigit(*p_59),                __freed_obj__ = 0, 
                _if_conditional115) {
                    n_60=0;
                    __freed_obj__ = 0;
                    while(_while_condtional10=xisdigit(*p_59),                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        n_60=n_60*10+*p_59-48;
                        __freed_obj__ = 0;
                        p_59++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result40__ = n_60;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result40__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result41__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
void* right_value58;
char* __result42__;
void* right_value59;
struct sRightValueObject* new_value_61;
struct sType* __dec_obj33;
void* right_value60;
char* __dec_obj34;
void* right_value61;
char* __dec_obj35;
void* right_value65;
char* buf_65;
void* right_value66;
void* right_value67;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&new_value_61, 0, sizeof(struct sRightValueObject*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&buf_65, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    if(_if_conditional116=((struct sInfo*)come_null_check(info, "04heap.c", 145))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional116) {
        __result42__ = __result_obj__ = ((char*)(right_value58=__builtin_string("")));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    new_value_61=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value59=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 145))));
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj33=((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 146))->mType;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 146))->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 147))->mFreed=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 148))->mID=gRightValueNum;
    __freed_obj__ = 0;
    __dec_obj34=((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 149))->mVarName;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 149))->mVarName=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj35=((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 150))->mFunName;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 150))->mFunName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 150))->come_fun, "04heap.c", 150))->mName))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 151))->mBlockLevel=((struct sInfo*)come_null_check(info, "04heap.c", 151))->block_level;
    __freed_obj__ = 0;
    list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 153))->right_value_objects, "04heap.c", 153)),(struct sRightValueObject*)come_increment_ref_count(new_value_61));
    __freed_obj__ = 0;
    buf_65=(char*)come_increment_ref_count(((char*)(right_value65=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf_65);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result46__ = __result_obj__ = ((char*)come_null_check(((char*)(right_value67=xsprintf("((%s)(%s=%s))",optional$2charphbool_value((come_push_stackframe("04heap.c", 159),((struct optional$2charphbool*)(right_value66=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))))),((struct sRightValueObject*)come_null_check(new_value_61, "04heap.c", 159))->mVarName,obj))), "04heap.c", 159));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_61 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_65 && !__freed_obj__) { buf_65 = come_decrement_ref_count(buf_65, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result46__;
    come_pop_stackframe();
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_61 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_65 && !__freed_obj__) { buf_65 = come_decrement_ref_count(buf_65, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional117=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional117) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional120;
void* right_value62;
struct list_item$1sRightValueObjectph* litem_62;
struct sRightValueObject* __dec_obj36;
_Bool _if_conditional122;
void* right_value63;
struct list_item$1sRightValueObjectph* litem_63;
struct sRightValueObject* __dec_obj37;
void* right_value64;
struct list_item$1sRightValueObjectph* litem_64;
struct sRightValueObject* __dec_obj38;
struct list$1sRightValueObjectph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional120=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional120) {
            litem_62=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value62=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 272))));
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_62, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_62, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj36=((struct list_item$1sRightValueObjectph*)come_null_check(litem_62, "./comelang2.h", 276))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_62, "./comelang2.h", 276))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj36) { come_call_finalizer(sRightValueObject_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_62;
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 279))->head=litem_62;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional122=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional122) {
                litem_63=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value63=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 282))));
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 284))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj37=((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 286))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_63, "./comelang2.h", 286))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj37) { come_call_finalizer(sRightValueObject_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_63;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_63;
                __freed_obj__ = 0;
            }
            else {
                litem_64=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value64=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 292))));
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 294))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj38=((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 296))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_64, "./comelang2.h", 296))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj38) { come_call_finalizer(sRightValueObject_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_64;
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_64;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result43__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result43__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional121=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional121) {
                    if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
char* default_value_66;
char* __result44__;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_66, 0, sizeof(char*));
        if(_if_conditional123=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            __freed_obj__ = 0;
            memset(&default_value_66,0,sizeof(char*));
            __freed_obj__ = 0;
            __result44__ = __result_obj__ = default_value_66;
            __freed_obj__ = 0;
            return __result44__;
            __freed_obj__ = 0;
        }
        else {
            __result45__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional124=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int i_67;
struct list$1sRightValueObjectph* o2_saved_68;
struct sRightValueObject* it_71;
_Bool _for_condtionalA3;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_67, 0, sizeof(int));
memset(&o2_saved_68, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_71, 0, sizeof(struct sRightValueObject*));
    i_67=0;
    __freed_obj__ = 0;
    for(
    o2_saved_68=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 172))->right_value_objects)),it_71=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_68), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_68), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_71=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_68), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional129=((struct sRightValueObject*)come_null_check(it_71, "04heap.c", 169))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional129) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_67++;
        __freed_obj__ = 0;
    }
    if(o2_saved_68 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 172))->right_value_objects, "04heap.c", 172)),i_67,i_67+1);
    __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
struct sRightValueObject* result_69;
struct sRightValueObject* __result47__;
_Bool _if_conditional126;
struct sRightValueObject* __result48__;
struct sRightValueObject* result_70;
struct sRightValueObject* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(struct sRightValueObject*));
memset(&result_70, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional125=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            __freed_obj__ = 0;
            memset(&result_69,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result47__ = __result_obj__ = result_69;
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional126=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional126) {
            __result48__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result48__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_70,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = result_70;
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result50__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result50__;
        __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
struct sRightValueObject* result_72;
struct sRightValueObject* __result51__;
_Bool _if_conditional128;
struct sRightValueObject* __result52__;
struct sRightValueObject* result_73;
struct sRightValueObject* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(struct sRightValueObject*));
memset(&result_73, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional127=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional127) {
            __freed_obj__ = 0;
            memset(&result_72,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = result_72;
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional128=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional128) {
            __result52__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result52__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_73,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result53__ = __result_obj__ = result_73;
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_74;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_74, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_74=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_74!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_75=it_74;
            __freed_obj__ = 0;
            it_74=((struct list_item$1sRightValueObjectph*)come_null_check(it_74, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_75 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_75, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int tmp_76;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct list$1sRightValueObjectph* __result54__;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct list_item$1sRightValueObjectph* it_79;
int i_80;
_Bool _while_condtional13;
_Bool _if_conditional138;
struct list_item$1sRightValueObjectph* prev_it_81;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct list_item$1sRightValueObjectph* it_82;
int i_83;
_Bool _while_condtional14;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list_item$1sRightValueObjectph* prev_it_84;
struct list_item$1sRightValueObjectph* it_85;
struct list_item$1sRightValueObjectph* head_prev_it_86;
struct list_item$1sRightValueObjectph* tail_it_87;
int i_88;
_Bool _while_condtional15;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list_item$1sRightValueObjectph* prev_it_89;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct list$1sRightValueObjectph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_76, 0, sizeof(int));
memset(&it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_80, 0, sizeof(int));
memset(&prev_it_81, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_83, 0, sizeof(int));
memset(&prev_it_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_88, 0, sizeof(int));
memset(&prev_it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional130=head<0,        __freed_obj__ = 0, 
        _if_conditional130) {
            head+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 508))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional131=tail<0,        __freed_obj__ = 0, 
        _if_conditional131) {
            tail+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 511))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional132=head>tail,        __freed_obj__ = 0, 
        _if_conditional132) {
            tmp_76=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_76;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional133=head<0,        __freed_obj__ = 0, 
        _if_conditional133) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional134=tail>((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 528))->len,        __freed_obj__ = 0, 
        _if_conditional134) {
            tail=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 525))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional135=head==tail,        __freed_obj__ = 0, 
        _if_conditional135) {
            __result54__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result54__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,        __freed_obj__ = 0, 
        _if_conditional136) {
            list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 534)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional137=head==0,            __freed_obj__ = 0, 
            _if_conditional137) {
                it_79=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 537))->head;
                __freed_obj__ = 0;
                i_80=0;
                __freed_obj__ = 0;
                while(_while_condtional13=it_79!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional13) {
                    if(_if_conditional138=i_80<tail,                    __freed_obj__ = 0, 
                    _if_conditional138) {
                        prev_it_81=it_79;
                        __freed_obj__ = 0;
                        it_79=((struct list_item$1sRightValueObjectph*)come_null_check(it_79, "./comelang2.h", 543))->next;
                        __freed_obj__ = 0;
                        i_80++;
                        __freed_obj__ = 0;
                        if(prev_it_81 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 548))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional139=i_80==tail,                        __freed_obj__ = 0, 
                        _if_conditional139) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 551))->head=it_79;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_79=((struct list_item$1sRightValueObjectph*)come_null_check(it_79, "./comelang2.h", 556))->next;
                            __freed_obj__ = 0;
                            i_80++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional140=tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,                __freed_obj__ = 0, 
                _if_conditional140) {
                    it_82=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 562))->head;
                    __freed_obj__ = 0;
                    i_83=0;
                    __freed_obj__ = 0;
                    while(_while_condtional14=it_82!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional141=i_83==head,                        __freed_obj__ = 0, 
                        _if_conditional141) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 566))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional142=i_83>=head,                        __freed_obj__ = 0, 
                        _if_conditional142) {
                            prev_it_84=it_82;
                            __freed_obj__ = 0;
                            it_82=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 573))->next;
                            __freed_obj__ = 0;
                            i_83++;
                            __freed_obj__ = 0;
                            if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 578))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_82=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 581))->next;
                            __freed_obj__ = 0;
                            i_83++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_85=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 587))->head;
                    __freed_obj__ = 0;
                    head_prev_it_86=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_87=((void*)0);
                    __freed_obj__ = 0;
                    i_88=0;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_85!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        if(_if_conditional143=i_88==head,                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            head_prev_it_86=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 596))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional144=i_88==tail,                        __freed_obj__ = 0, 
                        _if_conditional144) {
                            tail_it_87=it_85;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional145=i_88>=head&&i_88<tail,                        __freed_obj__ = 0, 
                        _if_conditional145) {
                            prev_it_89=it_85;
                            __freed_obj__ = 0;
                            it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 606))->next;
                            __freed_obj__ = 0;
                            i_88++;
                            __freed_obj__ = 0;
                            if(prev_it_89 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 611))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 614))->next;
                            __freed_obj__ = 0;
                            i_88++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional146=head_prev_it_86!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional146) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_86, "./comelang2.h", 620))->next=tail_it_87;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional147=tail_it_87!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional147) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_87, "./comelang2.h", 623))->prev=head_prev_it_86;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_77;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_78;
struct list$1sRightValueObjectph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_77=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional12=it_77!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional12) {
                    prev_it_78=it_77;
                    __freed_obj__ = 0;
                    it_77=((struct list_item$1sRightValueObjectph*)come_null_check(it_77, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_78 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result55__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* klass_90;
void* right_value68;
char* type_name_91;
void* right_value69;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_90, 0, sizeof(struct sClass*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_name_91, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
    klass_90=((struct sType*)come_null_check(type, "04heap.c", 177))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_91=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 179),((struct optional$2charphbool*)(right_value68=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result58__ = __result_obj__ = ((char*)(right_value69=xsprintf("(%s)come_increment_ref_count(%s)",type_name_91,obj)));
    if(type_name_91 && !__freed_obj__) { type_name_91 = come_decrement_ref_count(type_name_91, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
    if(type_name_91 && !__freed_obj__) { type_name_91 = come_decrement_ref_count(type_name_91, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional148;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional148=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional148) {
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
        __result57__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* stack_saved_92;
struct list$1sRightValueObjectph* right_value_objects_93;
struct sClass* klass_94;
static int dec_num_95=0;
void* right_value70;
char* name_96;
void* right_value71;
_Bool no_decrement_97;
_Bool no_free_98;
_Bool _if_conditional149;
void* right_value72;
char* c_value_99;
struct sClass* klass_100;
char* class_name_101;
char* fun_name_102;
void* right_value73;
struct sType* type2_103;
void* right_value74;
char* fun_name2_104;
struct sFun* finalizer_105;
_Bool _if_conditional150;
void* right_value84;
_Bool _if_conditional157;
void* right_value85;
char* none_generics_name_111;
void* right_value86;
char* generics_fun_name_112;
void* right_value96;
struct sGenericsFun* generics_fun_117;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value97;
int i_118;
_Bool _for_condtionalA4;
void* right_value98;
char* new_fun_name_119;
void* right_value99;
_Bool _if_conditional165;
void* right_value100;
char* __dec_obj39;
_Bool _if_conditional166;
void* right_value101;
_Bool _if_conditional167;
void* right_value102;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_120;
char* new_fun_name_121;
char* __dec_obj40;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value103;
char* type_name_122;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value104;
_Bool _if_conditional173;
void* right_value105;
char* type_name_123;
void* right_value106;
void* right_value107;
struct list$1sRightValueObjectph* __dec_obj41;
struct list$1CVALUEph* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_92, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_93, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_94, 0, sizeof(struct sClass*));
memset(&right_value70, 0, sizeof(void*));
memset(&name_96, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&no_decrement_97, 0, sizeof(_Bool));
memset(&no_free_98, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&klass_100, 0, sizeof(struct sClass*));
memset(&class_name_101, 0, sizeof(char*));
memset(&fun_name_102, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&type2_103, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&fun_name2_104, 0, sizeof(char*));
memset(&finalizer_105, 0, sizeof(struct sFun*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&none_generics_name_111, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&generics_fun_name_112, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&generics_fun_117, 0, sizeof(struct sGenericsFun*));
memset(&right_value97, 0, sizeof(void*));
memset(&i_118, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&new_fun_name_119, 0, sizeof(char*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_120, 0, sizeof(struct sFun*));
memset(&new_fun_name_121, 0, sizeof(char*));
memset(&fun_120, 0, sizeof(struct sFun*));
memset(&new_fun_name_121, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&type_name_122, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&type_name_123, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    stack_saved_92=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 186))->stack);
    __freed_obj__ = 0;
    right_value_objects_93=((struct sInfo*)come_null_check(info, "04heap.c", 187))->right_value_objects;
    __freed_obj__ = 0;
    klass_94=((struct sType*)come_null_check(type, "04heap.c", 189))->mClass;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    name_96=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("__dec_obj%d",++dec_num_95))));
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 194),((struct optional$2charphbool*)(right_value71=make_define_var(type,name_96,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code(info,"%s=%s;\n",name_96,obj);
    __freed_obj__ = 0;
    obj=name_96;
    __freed_obj__ = 0;
    no_decrement_97=(_Bool)0;
    __freed_obj__ = 0;
    no_free_98=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional149=((struct sType*)come_null_check(type, "04heap.c", 286))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional149) {
        c_value_99=(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(obj))));
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        klass_100=((struct sType*)come_null_check(type, "04heap.c", 205))->mClass;
        __freed_obj__ = 0;
        class_name_101=((struct sClass*)come_null_check(klass_100, "04heap.c", 207))->mName;
        __freed_obj__ = 0;
        fun_name_102="finalize";
        __freed_obj__ = 0;
        type2_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(type))));
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_103, "04heap.c", 212))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        fun_name2_104=(char*)come_increment_ref_count(((char*)(right_value74=create_method_name(type,(_Bool)0,fun_name_102,info))));
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        finalizer_105=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional150=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 253))->mGenericsTypes, "04heap.c", 253)))>0,        __freed_obj__ = 0, 
        _if_conditional150) {
            come_clear_stackframe();
            finalizer_105=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 218),((struct optional$2sFunpbool*)(right_value84=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 218))->funcs,fun_name2_104)))));
            come_pop_stackframe();
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional157=finalizer_105==((void*)0),            __freed_obj__ = 0, 
            _if_conditional157) {
                none_generics_name_111=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_103, "04heap.c", 221))->mClass, "04heap.c", 221))->mName))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                generics_fun_name_112=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s_%s",none_generics_name_111,fun_name_102))));
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                generics_fun_117=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 224),((struct optional$2sGenericsFunpbool*)(right_value96=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 224))->generics_funcs,generics_fun_name_112)))));
                come_pop_stackframe();
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional163=generics_fun_117,                __freed_obj__ = 0, 
                _if_conditional163) {
                    if(_if_conditional164=!create_generics_fun((char*)come_increment_ref_count(fun_name2_104),generics_fun_117,type,info),                    __freed_obj__ = 0, 
                    _if_conditional164) {
                        printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 229))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 229))->sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_105=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 232),((struct optional$2sFunpbool*)(right_value97=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 232))->funcs,fun_name2_104)))));
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(none_generics_name_111 && !__freed_obj__) { none_generics_name_111 = come_decrement_ref_count(none_generics_name_111, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_112 && !__freed_obj__) { generics_fun_name_112 = come_decrement_ref_count(generics_fun_name_112, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            __freed_obj__ = 0;
            for(
            i_118=128-1 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_118>=1 ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_118-- ,            __freed_obj__ = 0, 
            0            ){
                new_fun_name_119=(char*)come_increment_ref_count(((char*)(right_value98=xsprintf("%s_v%d",fun_name2_104,i_118))));
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                finalizer_105=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 240),((struct optional$2sFunpbool*)(right_value99=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 240))->funcs,new_fun_name_119)))));
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional165=finalizer_105,                __freed_obj__ = 0, 
                _if_conditional165) {
                    __dec_obj39=fun_name2_104;
                    fun_name2_104=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(new_fun_name_119))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(new_fun_name_119 && !__freed_obj__) { new_fun_name_119 = come_decrement_ref_count(new_fun_name_119, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(new_fun_name_119 && !__freed_obj__) { new_fun_name_119 = come_decrement_ref_count(new_fun_name_119, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional166=finalizer_105==((void*)0),            __freed_obj__ = 0, 
            _if_conditional166) {
                come_clear_stackframe();
                finalizer_105=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 249),((struct optional$2sFunpbool*)(right_value101=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 249))->funcs,fun_name2_104)))));
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional167=finalizer_105==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 262))->mClass, "04heap.c", 262))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 262))->mClass, "04heap.c", 262))->mNumber,        __freed_obj__ = 0, 
        _if_conditional167) {
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value102=create_finalizer_automatically(type,fun_name_102,info)));
            fun_120=multiple_assgin_var1->v1;
            new_fun_name_121=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj40=fun_name2_104;
            fun_name2_104=(char*)come_increment_ref_count(new_fun_name_121);
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            finalizer_105=fun_120;
            __freed_obj__ = 0;
            if(new_fun_name_121 && !__freed_obj__) { new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional169=finalizer_105!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional169) {
            if(_if_conditional170=((struct sClass*)come_null_check(klass_100, "04heap.c", 274))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 274))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional170) {
                come_clear_stackframe();
                type_name_122=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 264),((struct optional$2charphbool*)(right_value103=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional171=c_value_99,                __freed_obj__ = 0, 
                _if_conditional171) {
                    add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_99,fun_name2_104,c_value_99,type_name_122,c_value_99,type_name_122,c_value_99,((struct sType*)come_null_check(type, "04heap.c", 266))->mAllocaValue,no_decrement_97,no_free_98,force_delete_);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type_name_122 && !__freed_obj__) { type_name_122 = come_decrement_ref_count(type_name_122, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional172=c_value_99,                __freed_obj__ = 0, 
                _if_conditional172) {
                    add_come_last_code2(info,((char*)(right_value104=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_99,fun_name2_104,c_value_99,((struct sType*)come_null_check(type, "04heap.c", 271))->mAllocaValue,no_decrement_97,no_free_98,force_delete_))));
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional173=((struct sClass*)come_null_check(klass_100, "04heap.c", 283))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 283))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional173) {
                come_clear_stackframe();
                type_name_123=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 277),((struct optional$2charphbool*)(right_value105=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                add_come_last_code2(info,((char*)(right_value106=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_96,name_96,name_96,type_name_123,name_96,type_name_123,name_96))));
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(type_name_123 && !__freed_obj__) { type_name_123 = come_decrement_ref_count(type_name_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                add_come_last_code2(info,((char*)(right_value107=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_96,name_96,name_96))));
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_104 && !__freed_obj__) { fun_name2_104 = come_decrement_ref_count(fun_name2_104, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj41=((struct sInfo*)come_null_check(info, "04heap.c", 286))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 286))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_93);
    if(__dec_obj41) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj42=((struct sInfo*)come_null_check(info, "04heap.c", 287))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 287))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_92);
    if(__dec_obj42) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_92 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_96 && !__freed_obj__) { name_96 = come_decrement_ref_count(name_96, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_106;
unsigned int hash_107;
unsigned int it_108;
_Bool _while_condtional16;
_Bool _if_conditional151;
void* right_value75;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional153;
void* right_value76;
void* right_value77;
struct optional$2sFunpbool* __result62__;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value78;
void* right_value79;
struct optional$2sFunpbool* __result63__;
void* right_value80;
void* right_value81;
struct optional$2sFunpbool* __result64__;
void* right_value82;
void* right_value83;
struct optional$2sFunpbool* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_106, 0, sizeof(struct sFun*));
memset(&hash_107, 0, sizeof(unsigned int));
memset(&it_108, 0, sizeof(unsigned int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_106,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_107=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_108=hash_107;
                __freed_obj__ = 0;
                while(_while_condtional16=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional16) {
                    if(_if_conditional151=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_108],                    __freed_obj__ = 0, 
                    _if_conditional151) {
                        if(_if_conditional153=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value75=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_108], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional153) {
                            __result62__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value77=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value76=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_108],(_Bool)1)));
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result62__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_108++;
                        __freed_obj__ = 0;
                        if(_if_conditional154=it_108>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional154) {
                            it_108=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional155=it_108==hash_107,                            __freed_obj__ = 0, 
                            _if_conditional155) {
                                __result63__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value79=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value78=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_106,(_Bool)0))));
                                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result63__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result64__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value81=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value80=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_106,(_Bool)0))));
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result64__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result65__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value83=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value82=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_106,(_Bool)0))));
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result65__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
_Bool default_value_109;
_Bool __result59__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_109, 0, sizeof(_Bool));
                            if(_if_conditional152=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional152) {
                                __freed_obj__ = 0;
                                memset(&default_value_109,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result59__ = default_value_109;
                                __freed_obj__ = 0;
                                return __result59__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result60__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result60__;
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

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result61__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result61__;
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
_Bool _if_conditional156;
struct sFun* default_value_110;
struct sFun* __result66__;
struct sFun* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_110, 0, sizeof(struct sFun*));
                if(_if_conditional156=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional156) {
                    __freed_obj__ = 0;
                    memset(&default_value_110,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result66__ = __result_obj__ = default_value_110;
                    __freed_obj__ = 0;
                    return __result66__;
                    __freed_obj__ = 0;
                }
                else {
                    __result67__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result67__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sGenericsFun* default_value_113;
unsigned int hash_114;
unsigned int it_115;
_Bool _while_condtional17;
_Bool _if_conditional158;
void* right_value87;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional159;
void* right_value88;
void* right_value89;
struct optional$2sGenericsFunpbool* __result69__;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value90;
void* right_value91;
struct optional$2sGenericsFunpbool* __result70__;
void* right_value92;
void* right_value93;
struct optional$2sGenericsFunpbool* __result71__;
void* right_value94;
void* right_value95;
struct optional$2sGenericsFunpbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_113, 0, sizeof(struct sGenericsFun*));
memset(&hash_114, 0, sizeof(unsigned int));
memset(&it_115, 0, sizeof(unsigned int));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_113,0,sizeof(struct sGenericsFun*));
                    __freed_obj__ = 0;
                    hash_114=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                    __freed_obj__ = 0;
                    it_115=hash_114;
                    __freed_obj__ = 0;
                    while(_while_condtional17=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional17) {
                        if(_if_conditional158=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_115],                        __freed_obj__ = 0, 
                        _if_conditional158) {
                            if(_if_conditional159=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value87=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_115], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                            (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __freed_obj__ = 0, 
                            _if_conditional159) {
                                __result69__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value89=optional$2sGenericsFunpbool_initialize((struct optional$2sGenericsFunpbool*)come_increment_ref_count(((struct optional$2sGenericsFunpbool*)(right_value88=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_115],(_Bool)1)));
                                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result69__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_115++;
                            __freed_obj__ = 0;
                            if(_if_conditional160=it_115>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                            __freed_obj__ = 0, 
                            _if_conditional160) {
                                it_115=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional161=it_115==hash_114,                                __freed_obj__ = 0, 
                                _if_conditional161) {
                                    __result70__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1601))),default_value_113,(_Bool)0))));
                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result70__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result71__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sGenericsFunpbool*)(right_value93=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value92=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1605))),default_value_113,(_Bool)0))));
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result71__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result72__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sGenericsFunpbool*)(right_value95=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value94=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1609))),default_value_113,(_Bool)0))));
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sGenericsFunpbool* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result68__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result68__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional162;
struct sGenericsFun* default_value_116;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_116, 0, sizeof(struct sGenericsFun*));
                    if(_if_conditional162=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional162) {
                        __freed_obj__ = 0;
                        memset(&default_value_116,0,sizeof(struct sGenericsFun*));
                        __freed_obj__ = 0;
                        __result73__ = __result_obj__ = default_value_116;
                        __freed_obj__ = 0;
                        return __result73__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result74__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result74__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional168=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional168) {
                    if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_124;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_124, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_125, 0, sizeof(struct list_item$1CVALUEph*));
        it_124=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional18=it_124!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional18) {
            prev_it_125=it_124;
            __freed_obj__ = 0;
            it_124=((struct list_item$1CVALUEph*)come_null_check(it_124, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_125 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional174;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional174=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional174) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional175;
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional175=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional175) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional176=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional176) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* stack_saved_126;
struct list$1sRightValueObjectph* right_value_objects_127;
struct sType* type_before_128;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value108;
char* c_value_129;
struct sClass* klass_130;
char* class_name_131;
char* fun_name_132;
void* right_value109;
struct sType* type2_133;
void* right_value110;
char* fun_name2_134;
struct sFun* finalizer_135;
_Bool _if_conditional180;
void* right_value111;
_Bool _if_conditional181;
void* right_value112;
char* none_generics_name_136;
void* right_value113;
char* generics_fun_name_137;
void* right_value114;
struct sGenericsFun* generics_fun_138;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value115;
int i_139;
_Bool _for_condtionalA5;
void* right_value116;
char* new_fun_name_140;
void* right_value117;
_Bool _if_conditional184;
void* right_value118;
char* __dec_obj43;
_Bool _if_conditional185;
void* right_value119;
_Bool _if_conditional186;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_141;
char* new_fun_name_142;
char* __dec_obj44;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value121;
char* type_name_143;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value122;
void* right_value123;
_Bool _if_conditional196;
void* right_value124;
void* right_value125;
_Bool _if_conditional197;
struct list$1tuple2$2charphsTypephph* o2_saved_144;
struct tuple2$2charphsTypeph* it_147;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_150;
struct sType* field_type_151;
_Bool _if_conditional202;
void* right_value126;
void* right_value127;
char* obj_152;
_Bool _if_conditional206;
struct list$1tuple2$2charphsTypephph* o2_saved_155;
struct tuple2$2charphsTypeph* it_156;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_157;
struct sType* field_type_158;
_Bool _if_conditional207;
void* right_value128;
void* right_value129;
char* obj_159;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value130;
char* type_name_160;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value131;
char* c_value_161;
struct sClass* klass_162;
char* class_name_163;
char* fun_name_164;
void* right_value132;
struct sType* type2_165;
void* right_value133;
char* fun_name2_166;
struct sFun* finalizer_167;
_Bool _if_conditional218;
void* right_value134;
_Bool _if_conditional219;
void* right_value135;
char* none_generics_name_168;
void* right_value136;
char* generics_fun_name_169;
void* right_value137;
struct sGenericsFun* generics_fun_170;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value138;
int i_171;
_Bool _for_condtionalA8;
void* right_value139;
char* new_fun_name_172;
void* right_value140;
_Bool _if_conditional222;
void* right_value141;
char* __dec_obj45;
_Bool _if_conditional223;
void* right_value142;
_Bool _if_conditional224;
void* right_value143;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_173;
char* new_fun_name_174;
char* __dec_obj46;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value144;
char* type_name_175;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value145;
void* right_value146;
_Bool _if_conditional234;
void* right_value147;
void* right_value148;
_Bool _if_conditional235;
struct list$1tuple2$2charphsTypephph* o2_saved_176;
struct tuple2$2charphsTypeph* it_177;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_178;
struct sType* field_type_179;
_Bool _if_conditional236;
void* right_value149;
void* right_value150;
char* obj_180;
_Bool _if_conditional237;
struct list$1tuple2$2charphsTypephph* o2_saved_181;
struct tuple2$2charphsTypeph* it_182;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_183;
struct sType* field_type_184;
_Bool _if_conditional238;
void* right_value151;
void* right_value152;
char* obj_185;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value153;
char* type_name_186;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct list$1sRightValueObjectph* __dec_obj47;
struct list$1CVALUEph* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_126, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_127, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_128, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&c_value_129, 0, sizeof(char*));
memset(&klass_130, 0, sizeof(struct sClass*));
memset(&class_name_131, 0, sizeof(char*));
memset(&fun_name_132, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&type2_133, 0, sizeof(struct sType*));
memset(&right_value110, 0, sizeof(void*));
memset(&fun_name2_134, 0, sizeof(char*));
memset(&finalizer_135, 0, sizeof(struct sFun*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&none_generics_name_136, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&generics_fun_name_137, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
memset(&generics_fun_138, 0, sizeof(struct sGenericsFun*));
memset(&right_value115, 0, sizeof(void*));
memset(&i_139, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&new_fun_name_140, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_141, 0, sizeof(struct sFun*));
memset(&new_fun_name_142, 0, sizeof(char*));
memset(&fun_141, 0, sizeof(struct sFun*));
memset(&new_fun_name_142, 0, sizeof(char*));
memset(&right_value121, 0, sizeof(void*));
memset(&type_name_143, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_150, 0, sizeof(char*));
memset(&field_type_151, 0, sizeof(struct sType*));
memset(&name_150, 0, sizeof(char*));
memset(&field_type_151, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&obj_152, 0, sizeof(char*));
memset(&o2_saved_155, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_156, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_157, 0, sizeof(char*));
memset(&field_type_158, 0, sizeof(struct sType*));
memset(&name_157, 0, sizeof(char*));
memset(&field_type_158, 0, sizeof(struct sType*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&obj_159, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
memset(&type_name_160, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&c_value_161, 0, sizeof(char*));
memset(&klass_162, 0, sizeof(struct sClass*));
memset(&class_name_163, 0, sizeof(char*));
memset(&fun_name_164, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&type2_165, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&fun_name2_166, 0, sizeof(char*));
memset(&finalizer_167, 0, sizeof(struct sFun*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&none_generics_name_168, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
memset(&generics_fun_name_169, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&generics_fun_170, 0, sizeof(struct sGenericsFun*));
memset(&right_value138, 0, sizeof(void*));
memset(&i_171, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&new_fun_name_172, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&fun_173, 0, sizeof(struct sFun*));
memset(&new_fun_name_174, 0, sizeof(char*));
memset(&fun_173, 0, sizeof(struct sFun*));
memset(&new_fun_name_174, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&type_name_175, 0, sizeof(char*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&o2_saved_176, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_177, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_178, 0, sizeof(char*));
memset(&field_type_179, 0, sizeof(struct sType*));
memset(&name_178, 0, sizeof(char*));
memset(&field_type_179, 0, sizeof(struct sType*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&obj_180, 0, sizeof(char*));
memset(&o2_saved_181, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_182, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_183, 0, sizeof(char*));
memset(&field_type_184, 0, sizeof(struct sType*));
memset(&name_183, 0, sizeof(char*));
memset(&field_type_184, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&obj_185, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&type_name_186, 0, sizeof(char*));
    stack_saved_126=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack);
    __freed_obj__ = 0;
    right_value_objects_127=((struct sInfo*)come_null_check(info, "04heap.c", 293))->right_value_objects;
    __freed_obj__ = 0;
    type_before_128=type;
    __freed_obj__ = 0;
    if(_if_conditional177=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 302))->mNoSolvedGenericsType, "04heap.c", 302))->v1,    __freed_obj__ = 0, 
    _if_conditional177) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 299))->mNoSolvedGenericsType, "04heap.c", 299))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional178=((struct sType*)come_null_check(type, "04heap.c", 651))->mPointerNum>0||((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 651))->mClass, "04heap.c", 651))->mProtocol||list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 651))->mGenericsTypes, "04heap.c", 651)))>0||(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 651))->come_fun, "04heap.c", 651))->mCloner&&ret_value),    __freed_obj__ = 0, 
    _if_conditional178) {
        if(_if_conditional179=force_delete_,        __freed_obj__ = 0, 
        _if_conditional179) {
            c_value_129=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(obj))));
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            klass_130=((struct sType*)come_null_check(type, "04heap.c", 306))->mClass;
            __freed_obj__ = 0;
            class_name_131=((struct sClass*)come_null_check(klass_130, "04heap.c", 308))->mName;
            __freed_obj__ = 0;
            fun_name_132="force_finalize";
            __freed_obj__ = 0;
            type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type))));
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_133, "04heap.c", 313))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_134=(char*)come_increment_ref_count(((char*)(right_value110=create_method_name(type,(_Bool)0,fun_name_132,info))));
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            finalizer_135=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional180=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 354))->mGenericsTypes, "04heap.c", 354)))>0,            __freed_obj__ = 0, 
            _if_conditional180) {
                come_clear_stackframe();
                finalizer_135=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 319),((struct optional$2sFunpbool*)(right_value111=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 319))->funcs,fun_name2_134)))));
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional181=finalizer_135==((void*)0),                __freed_obj__ = 0, 
                _if_conditional181) {
                    none_generics_name_136=(char*)come_increment_ref_count(((char*)(right_value112=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_133, "04heap.c", 322))->mClass, "04heap.c", 322))->mName))));
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    generics_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s_%s",none_generics_name_136,fun_name_132))));
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_138=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 325),((struct optional$2sGenericsFunpbool*)(right_value114=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 325))->generics_funcs,generics_fun_name_137)))));
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional182=generics_fun_138,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                        if(_if_conditional183=!create_generics_fun((char*)come_increment_ref_count(fun_name2_134),generics_fun_138,type,info),                        __freed_obj__ = 0, 
                        _if_conditional183) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 330))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 330))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_135=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 333),((struct optional$2sFunpbool*)(right_value115=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 333))->funcs,fun_name2_134)))));
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_136 && !__freed_obj__) { none_generics_name_136 = come_decrement_ref_count(none_generics_name_136, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_137 && !__freed_obj__) { generics_fun_name_137 = come_decrement_ref_count(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_139=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA5=                i_139>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA5;                i_139-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_140=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s_v%d",fun_name2_134,i_139))));
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_135=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 341),((struct optional$2sFunpbool*)(right_value117=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 341))->funcs,new_fun_name_140)))));
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional184=finalizer_135,                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        __dec_obj43=fun_name2_134;
                        fun_name2_134=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(new_fun_name_140))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(new_fun_name_140 && !__freed_obj__) { new_fun_name_140 = come_decrement_ref_count(new_fun_name_140, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_140 && !__freed_obj__) { new_fun_name_140 = come_decrement_ref_count(new_fun_name_140, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional185=finalizer_135==((void*)0),                __freed_obj__ = 0, 
                _if_conditional185) {
                    come_clear_stackframe();
                    finalizer_135=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 350),((struct optional$2sFunpbool*)(right_value119=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 350))->funcs,fun_name2_134)))));
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional186=finalizer_135==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 363))->mClass, "04heap.c", 363))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 363))->mClass, "04heap.c", 363))->mNumber,            __freed_obj__ = 0, 
            _if_conditional186) {
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value120=create_force_finalizer_automatically(type,fun_name_132,info)));
                fun_141=multiple_assgin_var2->v1;
                new_fun_name_142=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj44=fun_name2_134;
                fun_name2_134=(char*)come_increment_ref_count(new_fun_name_142);
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_135=fun_141;
                __freed_obj__ = 0;
                if(new_fun_name_142 && !__freed_obj__) { new_fun_name_142 = come_decrement_ref_count(new_fun_name_142, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional187=finalizer_135!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional187) {
                if(_if_conditional188=((struct sClass*)come_null_check(klass_130, "04heap.c", 405))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 405))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional188) {
                    come_clear_stackframe();
                    type_name_143=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 365),((struct optional$2charphbool*)(right_value121=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional189=c_value_129,                    __freed_obj__ = 0, 
                    _if_conditional189) {
                        if(_if_conditional190=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional190) {
                            if(_if_conditional191=comma,                            __freed_obj__ = 0, 
                            _if_conditional191) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_129,c_value_129,fun_name2_134,c_value_129,type_name_143,c_value_129,type_name_143,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 369))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_129,c_value_129,fun_name2_134,c_value_129,type_name_143,c_value_129,type_name_143,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 372))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional192=comma,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_129,fun_name2_134,c_value_129,type_name_143,c_value_129,type_name_143,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 377))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_129,fun_name2_134,c_value_129,type_name_143,c_value_129,type_name_143,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 380))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_143 && !__freed_obj__) { type_name_143 = come_decrement_ref_count(type_name_143, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional193=c_value_129,                    __freed_obj__ = 0, 
                    _if_conditional193) {
                        if(_if_conditional194=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                            if(_if_conditional195=comma,                            __freed_obj__ = 0, 
                            _if_conditional195) {
                                add_come_code(info,((char*)(right_value122=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_129,c_value_129,fun_name2_134,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 389))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value123=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_129,c_value_129,fun_name2_134,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 392))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional196=comma,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                add_come_code(info,((char*)(right_value124=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_129,fun_name2_134,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 397))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value125=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_129,fun_name2_134,c_value_129,((struct sType*)come_null_check(type, "04heap.c", 400))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional197=((struct sClass*)come_null_check(klass_130, "04heap.c", 431))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 431))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional197) {
                    for(
                    o2_saved_144=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_130, "04heap.c", 417))->mFields)),it_147=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_147=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var3=it_147;
                        name_150=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_151=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional202=((struct sType*)come_null_check(field_type_151, "04heap.c", 416))->mHeap&&((struct sType*)come_null_check(field_type_151, "04heap.c", 416))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            come_clear_stackframe();
                            obj_152=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 413),((struct optional$2charphbool*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_129,name_150))));
                            come_pop_stackframe();
                            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            free_object(field_type_151,obj_152,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_152 && !__freed_obj__) { obj_152 = come_decrement_ref_count(obj_152, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_150 && !__freed_obj__) { name_150 = come_decrement_ref_count(name_150, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional206=((struct sClass*)come_null_check(klass_130, "04heap.c", 431))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 431))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        for(
                        o2_saved_155=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_130, "04heap.c", 428))->mFields)),it_156=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_155), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA7=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_155), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA7;                        it_156=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_155), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var4=it_156;
                            name_157=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_158=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional207=((struct sType*)come_null_check(field_type_158, "04heap.c", 427))->mHeap&&((struct sType*)come_null_check(field_type_158, "04heap.c", 427))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional207) {
                                come_clear_stackframe();
                                obj_159=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 424),((struct optional$2charphbool*)(right_value128=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_129,name_157))));
                                come_pop_stackframe();
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                free_object(field_type_158,obj_159,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_159 && !__freed_obj__) { obj_159 = come_decrement_ref_count(obj_159, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_157 && !__freed_obj__) { name_157 = come_decrement_ref_count(name_157, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_155 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional208=!((struct sType*)come_null_check(type, "04heap.c", 474))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional208) {
                    if(_if_conditional209=((struct sClass*)come_null_check(klass_130, "04heap.c", 473))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 473))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional209) {
                        if(_if_conditional210=c_value_129,                        __freed_obj__ = 0, 
                        _if_conditional210) {
                            come_clear_stackframe();
                            type_name_160=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 434),((struct optional$2charphbool*)(right_value130=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional211=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional211) {
                                if(_if_conditional212=comma,                                __freed_obj__ = 0, 
                                _if_conditional212) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_129,c_value_129,c_value_129,c_value_129,type_name_160,c_value_129,type_name_160,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_129,c_value_129,c_value_129,c_value_129,type_name_160,c_value_129,type_name_160,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional213=comma,                                __freed_obj__ = 0, 
                                _if_conditional213) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_129,c_value_129,c_value_129,type_name_160,c_value_129,type_name_160,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_129,c_value_129,c_value_129,type_name_160,c_value_129,type_name_160,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_160 && !__freed_obj__) { type_name_160 = come_decrement_ref_count(type_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional214=c_value_129,                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            if(_if_conditional215=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional215) {
                                if(_if_conditional216=comma,                                __freed_obj__ = 0, 
                                _if_conditional216) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_129,c_value_129,c_value_129,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_129,c_value_129,c_value_129,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional217=comma,                                __freed_obj__ = 0, 
                                _if_conditional217) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_129,c_value_129,c_value_129,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_129,c_value_129,c_value_129,no_decrement,no_free,force_delete_);
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
            if(c_value_129 && !__freed_obj__) { c_value_129 = come_decrement_ref_count(c_value_129, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_134 && !__freed_obj__) { fun_name2_134 = come_decrement_ref_count(fun_name2_134, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            c_value_161=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(obj))));
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            klass_162=((struct sType*)come_null_check(type, "04heap.c", 479))->mClass;
            __freed_obj__ = 0;
            class_name_163=((struct sClass*)come_null_check(klass_162, "04heap.c", 481))->mName;
            __freed_obj__ = 0;
            fun_name_164="finalize";
            __freed_obj__ = 0;
            type2_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type))));
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_165, "04heap.c", 486))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_166=(char*)come_increment_ref_count(((char*)(right_value133=create_method_name(type,(_Bool)0,fun_name_164,info))));
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            finalizer_167=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional218=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 527))->mGenericsTypes, "04heap.c", 527)))>0,            __freed_obj__ = 0, 
            _if_conditional218) {
                come_clear_stackframe();
                finalizer_167=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 492),((struct optional$2sFunpbool*)(right_value134=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 492))->funcs,fun_name2_166)))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional219=finalizer_167==((void*)0),                __freed_obj__ = 0, 
                _if_conditional219) {
                    none_generics_name_168=(char*)come_increment_ref_count(((char*)(right_value135=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_165, "04heap.c", 495))->mClass, "04heap.c", 495))->mName))));
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    generics_fun_name_169=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("%s_%s",none_generics_name_168,fun_name_164))));
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_170=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 498),((struct optional$2sGenericsFunpbool*)(right_value137=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 498))->generics_funcs,generics_fun_name_169)))));
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional220=generics_fun_170,                    __freed_obj__ = 0, 
                    _if_conditional220) {
                        if(_if_conditional221=!create_generics_fun((char*)come_increment_ref_count(fun_name2_166),generics_fun_170,type,info),                        __freed_obj__ = 0, 
                        _if_conditional221) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 503))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 503))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_167=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 506),((struct optional$2sFunpbool*)(right_value138=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 506))->funcs,fun_name2_166)))));
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_168 && !__freed_obj__) { none_generics_name_168 = come_decrement_ref_count(none_generics_name_168, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_169 && !__freed_obj__) { generics_fun_name_169 = come_decrement_ref_count(generics_fun_name_169, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_171=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA8=                i_171>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA8;                i_171-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_172=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s_v%d",fun_name2_166,i_171))));
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_167=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 514),((struct optional$2sFunpbool*)(right_value140=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 514))->funcs,new_fun_name_172)))));
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional222=finalizer_167,                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        __dec_obj45=fun_name2_166;
                        fun_name2_166=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(new_fun_name_172))));
                        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(new_fun_name_172 && !__freed_obj__) { new_fun_name_172 = come_decrement_ref_count(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_172 && !__freed_obj__) { new_fun_name_172 = come_decrement_ref_count(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional223=finalizer_167==((void*)0),                __freed_obj__ = 0, 
                _if_conditional223) {
                    come_clear_stackframe();
                    finalizer_167=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 523),((struct optional$2sFunpbool*)(right_value142=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 523))->funcs,fun_name2_166)))));
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=finalizer_167==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 536))->mClass, "04heap.c", 536))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 536))->mClass, "04heap.c", 536))->mNumber,            __freed_obj__ = 0, 
            _if_conditional224) {
                multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value143=create_finalizer_automatically(type,fun_name_164,info)));
                fun_173=multiple_assgin_var5->v1;
                new_fun_name_174=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj46=fun_name2_166;
                fun_name2_166=(char*)come_increment_ref_count(new_fun_name_174);
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_167=fun_173;
                __freed_obj__ = 0;
                if(new_fun_name_174 && !__freed_obj__) { new_fun_name_174 = come_decrement_ref_count(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional225=finalizer_167!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(_if_conditional226=((struct sClass*)come_null_check(klass_162, "04heap.c", 578))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 578))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional226) {
                    come_clear_stackframe();
                    type_name_175=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 538),((struct optional$2charphbool*)(right_value144=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional227=c_value_161,                    __freed_obj__ = 0, 
                    _if_conditional227) {
                        if(_if_conditional228=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional228) {
                            if(_if_conditional229=comma,                            __freed_obj__ = 0, 
                            _if_conditional229) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_161,c_value_161,fun_name2_166,c_value_161,type_name_175,c_value_161,type_name_175,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 542))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_161,c_value_161,fun_name2_166,c_value_161,type_name_175,c_value_161,type_name_175,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 545))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional230=comma,                            __freed_obj__ = 0, 
                            _if_conditional230) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_161,fun_name2_166,c_value_161,type_name_175,c_value_161,type_name_175,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 550))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_161,fun_name2_166,c_value_161,type_name_175,c_value_161,type_name_175,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 553))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_175 && !__freed_obj__) { type_name_175 = come_decrement_ref_count(type_name_175, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional231=c_value_161,                    __freed_obj__ = 0, 
                    _if_conditional231) {
                        if(_if_conditional232=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional232) {
                            if(_if_conditional233=comma,                            __freed_obj__ = 0, 
                            _if_conditional233) {
                                add_come_code(info,((char*)(right_value145=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_161,c_value_161,fun_name2_166,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 562))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value146=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_161,c_value_161,fun_name2_166,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 565))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional234=comma,                            __freed_obj__ = 0, 
                            _if_conditional234) {
                                add_come_code(info,((char*)(right_value147=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_161,fun_name2_166,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 570))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value148=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_161,fun_name2_166,c_value_161,((struct sType*)come_null_check(type, "04heap.c", 573))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional235=((struct sClass*)come_null_check(klass_162, "04heap.c", 604))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 604))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional235) {
                    for(
                    o2_saved_176=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_162, "04heap.c", 590))->mFields)),it_177=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_176), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA9=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_176), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA9;                    it_177=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_176), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var6=it_177;
                        name_178=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_179=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional236=((struct sType*)come_null_check(field_type_179, "04heap.c", 589))->mHeap&&((struct sType*)come_null_check(field_type_179, "04heap.c", 589))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            come_clear_stackframe();
                            obj_180=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 586),((struct optional$2charphbool*)(right_value149=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_161,name_178))));
                            come_pop_stackframe();
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            free_object(field_type_179,obj_180,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_180 && !__freed_obj__) { obj_180 = come_decrement_ref_count(obj_180, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_178 && !__freed_obj__) { name_178 = come_decrement_ref_count(name_178, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_176 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional237=((struct sClass*)come_null_check(klass_162, "04heap.c", 604))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 604))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional237) {
                        for(
                        o2_saved_181=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_162, "04heap.c", 601))->mFields)),it_182=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_181), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_181), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_182=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_181), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var7=it_182;
                            name_183=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_184=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional238=((struct sType*)come_null_check(field_type_184, "04heap.c", 600))->mHeap&&((struct sType*)come_null_check(field_type_184, "04heap.c", 600))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional238) {
                                come_clear_stackframe();
                                obj_185=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 597),((struct optional$2charphbool*)(right_value151=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_161,name_183))));
                                come_pop_stackframe();
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                free_object(field_type_184,obj_185,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_185 && !__freed_obj__) { obj_185 = come_decrement_ref_count(obj_185, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_183 && !__freed_obj__) { name_183 = come_decrement_ref_count(name_183, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_184 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_181 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional239=!((struct sType*)come_null_check(type, "04heap.c", 647))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional239) {
                    if(_if_conditional240=((struct sClass*)come_null_check(klass_162, "04heap.c", 646))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 646))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional240) {
                        if(_if_conditional241=c_value_161,                        __freed_obj__ = 0, 
                        _if_conditional241) {
                            come_clear_stackframe();
                            type_name_186=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 607),((struct optional$2charphbool*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional242=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional242) {
                                if(_if_conditional243=comma,                                __freed_obj__ = 0, 
                                _if_conditional243) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_161,c_value_161,c_value_161,c_value_161,type_name_186,c_value_161,type_name_186,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_161,c_value_161,c_value_161,c_value_161,type_name_186,c_value_161,type_name_186,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional244=comma,                                __freed_obj__ = 0, 
                                _if_conditional244) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_161,c_value_161,c_value_161,type_name_186,c_value_161,type_name_186,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_161,c_value_161,c_value_161,type_name_186,c_value_161,type_name_186,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_186 && !__freed_obj__) { type_name_186 = come_decrement_ref_count(type_name_186, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional245=c_value_161,                        __freed_obj__ = 0, 
                        _if_conditional245) {
                            if(_if_conditional246=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional246) {
                                if(_if_conditional247=comma,                                __freed_obj__ = 0, 
                                _if_conditional247) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_161,c_value_161,c_value_161,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_161,c_value_161,c_value_161,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional248=comma,                                __freed_obj__ = 0, 
                                _if_conditional248) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_161,c_value_161,c_value_161,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_161,c_value_161,c_value_161,no_decrement,no_free,force_delete_);
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
            if(c_value_161 && !__freed_obj__) { c_value_161 = come_decrement_ref_count(c_value_161, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_165, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_166 && !__freed_obj__) { fun_name2_166 = come_decrement_ref_count(fun_name2_166, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj47=((struct sInfo*)come_null_check(info, "04heap.c", 651))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 651))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_127);
    if(__dec_obj47) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sInfo*)come_null_check(info, "04heap.c", 652))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 652))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_126);
    if(__dec_obj48) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_126 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional198;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result75__;
_Bool _if_conditional199;
struct tuple2$2charphsTypeph* __result76__;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional198=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional198) {
                            __freed_obj__ = 0;
                            memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result75__ = __result_obj__ = result_145;
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional199=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional199) {
                            __result76__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result76__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result77__ = __result_obj__ = result_146;
                        __freed_obj__ = 0;
                        return __result77__;
                        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result78__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result78__;
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional200;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result79__;
_Bool _if_conditional201;
struct tuple2$2charphsTypeph* __result80__;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional200=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional200) {
                            __freed_obj__ = 0;
                            memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result79__ = __result_obj__ = result_148;
                            __freed_obj__ = 0;
                            return __result79__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional201=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional201) {
                            __result80__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result80__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result81__ = __result_obj__ = result_149;
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_153;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_154;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_153, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_154, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_153=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_153!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            prev_it_154=it_153;
                            __freed_obj__ = 0;
                            it_153=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_153, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_154 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional203=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional203) {
                                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional204=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional204) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional205=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional205) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value154;
struct sType* type2_187;
_Bool _if_conditional249;
char* result_188;
struct sType* result_type_189;
struct list$1CVALUEph* stack_saved_190;
struct list$1sRightValueObjectph* right_value_objects_191;
void* right_value155;
char* c_value_192;
struct sClass* klass_193;
char* class_name_194;
char* fun_name_195;
struct sFun* cloner_196;
char* fun_name2_197;
_Bool _if_conditional250;
void* right_value156;
char* none_generics_name_198;
void* right_value157;
struct sType* obj_type_199;
void* right_value158;
char* __dec_obj49;
void* right_value159;
char* fun_name3_200;
void* right_value161;
struct sGenericsFun* generics_fun_203;
_Bool _if_conditional264;
void* right_value162;
_Bool _if_conditional265;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value169;
struct tuple2$2sTypephcharph* __result87__;
void* right_value170;
void* right_value171;
char* __dec_obj52;
int i_204;
_Bool _for_condtionalA11;
void* right_value172;
char* new_fun_name_205;
void* right_value173;
_Bool _if_conditional268;
void* right_value174;
char* __dec_obj53;
_Bool _if_conditional269;
void* right_value175;
_Bool _if_conditional270;
void* right_value176;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_206;
char* new_fun_name_207;
char* __dec_obj54;
_Bool _if_conditional271;
void* right_value177;
char* __dec_obj55;
struct sType* __dec_obj56;
void* right_value178;
struct sType* __dec_obj57;
void* right_value179;
char* type_name_208;
void* right_value180;
char* __dec_obj58;
void* right_value181;
struct sType* __dec_obj59;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
void* right_value182;
void* right_value183;
struct tuple2$2sTypephcharph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&type2_187, 0, sizeof(struct sType*));
memset(&result_188, 0, sizeof(char*));
memset(&result_type_189, 0, sizeof(struct sType*));
memset(&stack_saved_190, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_191, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_192, 0, sizeof(char*));
memset(&klass_193, 0, sizeof(struct sClass*));
memset(&class_name_194, 0, sizeof(char*));
memset(&fun_name_195, 0, sizeof(char*));
memset(&cloner_196, 0, sizeof(struct sFun*));
memset(&fun_name2_197, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&none_generics_name_198, 0, sizeof(char*));
memset(&right_value157, 0, sizeof(void*));
memset(&obj_type_199, 0, sizeof(struct sType*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&fun_name3_200, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&generics_fun_203, 0, sizeof(struct sGenericsFun*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&i_204, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&new_fun_name_205, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_206, 0, sizeof(struct sFun*));
memset(&new_fun_name_207, 0, sizeof(char*));
memset(&fun_206, 0, sizeof(struct sFun*));
memset(&new_fun_name_207, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&type_name_208, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    type2_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type))));
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional249=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 662))->mNoSolvedGenericsType, "04heap.c", 662))->v1,    __freed_obj__ = 0, 
    _if_conditional249) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 659))->mNoSolvedGenericsType, "04heap.c", 659))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_188=((void*)0);
    __freed_obj__ = 0;
    result_type_189=((void*)0);
    __freed_obj__ = 0;
    stack_saved_190=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 664))->stack);
    __freed_obj__ = 0;
    right_value_objects_191=((struct sInfo*)come_null_check(info, "04heap.c", 665))->right_value_objects;
    __freed_obj__ = 0;
    c_value_192=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(obj))));
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_193=((struct sType*)come_null_check(type, "04heap.c", 669))->mClass;
    __freed_obj__ = 0;
    class_name_194=((struct sClass*)come_null_check(klass_193, "04heap.c", 671))->mName;
    __freed_obj__ = 0;
    fun_name_195="clone";
    __freed_obj__ = 0;
    cloner_196=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional250=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 714))->mGenericsTypes, "04heap.c", 714)))>0,    __freed_obj__ = 0, 
    _if_conditional250) {
        none_generics_name_198=(char*)come_increment_ref_count(((char*)(right_value156=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 678))->mClass, "04heap.c", 678))->mName))));
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 680))->generics_type,info))));
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj49=fun_name2_197;
        fun_name2_197=(char*)come_increment_ref_count(((char*)(right_value158=create_method_name(obj_type_199,(_Bool)0,fun_name_195,info))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_200=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s_%s",none_generics_name_198,fun_name_195))));
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_203=((struct sGenericsFun*)(right_value161=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 685))->generics_funcs, "04heap.c", 685)),fun_name3_200,((void*)0))));
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional264=generics_fun_203,        __freed_obj__ = 0, 
        _if_conditional264) {
            if(_if_conditional265=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(fun_name2_197)))),generics_fun_203,obj_type_199,info),            (right_value162 && right_value162 != __result_obj__ && !__freed_obj__) ? right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional265) {
                __result87__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value169=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value166=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 689)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 689)))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("")))))));
                if(none_generics_name_198 && !__freed_obj__) { none_generics_name_198 = come_decrement_ref_count(none_generics_name_198, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_200 && !__freed_obj__) { fun_name3_200 = come_decrement_ref_count(fun_name3_200, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_188 && !__freed_obj__) { result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_190 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_192 && !__freed_obj__) { c_value_192 = come_decrement_ref_count(c_value_192, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_197 && !__freed_obj__) { fun_name2_197 = come_decrement_ref_count(fun_name2_197, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_196=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 693),((struct optional$2sFunpbool*)(right_value170=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 693))->funcs,fun_name2_197)))));
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_198 && !__freed_obj__) { none_generics_name_198 = come_decrement_ref_count(none_generics_name_198, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_200 && !__freed_obj__) { fun_name3_200 = come_decrement_ref_count(fun_name3_200, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj52=fun_name2_197;
        fun_name2_197=(char*)come_increment_ref_count(((char*)(right_value171=create_method_name(type,(_Bool)0,fun_name_195,info))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_204=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        i_204>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA11;        i_204-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_205=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s_v%d",fun_name2_197,i_204))));
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_196=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 701),((struct optional$2sFunpbool*)(right_value173=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 701))->funcs,new_fun_name_205)))));
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional268=cloner_196,            __freed_obj__ = 0, 
            _if_conditional268) {
                __dec_obj53=fun_name2_197;
                fun_name2_197=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(new_fun_name_205))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_205 && !__freed_obj__) { new_fun_name_205 = come_decrement_ref_count(new_fun_name_205, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_205 && !__freed_obj__) { new_fun_name_205 = come_decrement_ref_count(new_fun_name_205, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional269=cloner_196==((void*)0),        __freed_obj__ = 0, 
        _if_conditional269) {
            come_clear_stackframe();
            cloner_196=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 710),((struct optional$2sFunpbool*)(right_value175=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 710))->funcs,fun_name2_197)))));
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional270=cloner_196==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 723))->mClass, "04heap.c", 723))->mNumber,    __freed_obj__ = 0, 
    _if_conditional270) {
        multiple_assgin_var8=((struct tuple2$2sFunpcharph*)(right_value176=create_cloner_automatically(type,fun_name_195,info)));
        fun_206=multiple_assgin_var8->v1;
        new_fun_name_207=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj54=fun_name2_197;
        fun_name2_197=(char*)come_increment_ref_count(new_fun_name_207);
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_196=fun_206;
        __freed_obj__ = 0;
        if(new_fun_name_207 && !__freed_obj__) { new_fun_name_207 = come_decrement_ref_count(new_fun_name_207, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional271=cloner_196!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional271) {
        __dec_obj55=result_188;
        result_188=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s(%s)",fun_name2_197,c_value_192))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj56=result_type_189;
        result_type_189=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(cloner_196, "04heap.c", 725))->mResultType);
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj57=result_type_189;
        result_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=solve_generics(result_type_189,type,info))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        ((struct sType*)come_null_check(type2_187, "04heap.c", 729))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_208=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 730),((struct optional$2charphbool*)(right_value179=make_type_name_string(type2_187,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj58=result_188;
        result_188=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_208,c_value_192,((struct sInfo*)come_null_check(info, "04heap.c", 731))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 731))->sline))));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj59=result_type_189;
        result_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(type_name_208 && !__freed_obj__) { type_name_208 = come_decrement_ref_count(type_name_208, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj60=((struct sInfo*)come_null_check(info, "04heap.c", 735))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 735))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_191);
    if(__dec_obj60) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj61=((struct sInfo*)come_null_check(info, "04heap.c", 736))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 736))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_190);
    if(__dec_obj61) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value183=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value182=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 738)))),(struct sType*)come_increment_ref_count(result_type_189),(char*)come_increment_ref_count(result_188))));
    if(type2_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_188 && !__freed_obj__) { result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_190 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_192 && !__freed_obj__) { c_value_192 = come_decrement_ref_count(c_value_192, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_197 && !__freed_obj__) { fun_name2_197 = come_decrement_ref_count(fun_name2_197, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(type2_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_188 && !__freed_obj__) { result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_190 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_192 && !__freed_obj__) { c_value_192 = come_decrement_ref_count(c_value_192, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_197 && !__freed_obj__) { fun_name2_197 = come_decrement_ref_count(fun_name2_197, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_201;
unsigned int it_202;
_Bool _while_condtional20;
_Bool _if_conditional251;
void* right_value160;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional252;
struct sGenericsFun* __result82__;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct sGenericsFun* __result83__;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&it_202, 0, sizeof(unsigned int));
memset(&right_value160, 0, sizeof(void*));
            hash_201=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_202=hash_201;
            __freed_obj__ = 0;
            while(_while_condtional20=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional251=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_202],                __freed_obj__ = 0, 
                _if_conditional251) {
                    if(_if_conditional252=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value160=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_202], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value160 && right_value160 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional252) {
                        __result82__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_202];
                        __freed_obj__ = 0;
                        return __result82__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_202++;
                    __freed_obj__ = 0;
                    if(_if_conditional253=it_202>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        it_202=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional254=it_202==hash_201,                        __freed_obj__ = 0, 
                        _if_conditional254) {
                            __result83__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result83__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result84__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result85__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result85__;
            __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional255=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional255) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional256=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional256) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional257=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional257) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional258=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional258) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional259=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional260=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional261=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional261) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional262=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional262) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional263=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional263) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value167;
struct sType* __dec_obj50;
void* right_value168;
char* __dec_obj51;
struct tuple2$2sTypephcharph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
                    __dec_obj50=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(v1))));
                    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj51=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(v2))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __result86__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result86__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional266=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional266) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional267=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional267) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional272;
char* result_209;
struct list$1CVALUEph* stack_saved_210;
struct list$1sRightValueObjectph* right_value_objects_211;
struct sClass* klass_212;
char* class_name_213;
char* fun_name_214;
void* right_value184;
struct sType* type2_215;
struct sFun* cloner_216;
char* fun_name2_217;
_Bool _if_conditional273;
void* right_value185;
char* none_generics_name_218;
void* right_value186;
struct sType* obj_type_219;
void* right_value187;
char* __dec_obj62;
void* right_value188;
char* fun_name3_220;
void* right_value189;
struct sGenericsFun* generics_fun_221;
_Bool _if_conditional274;
void* right_value190;
_Bool _if_conditional275;
_Bool __result89__;
void* right_value191;
void* right_value192;
char* __dec_obj63;
int i_222;
_Bool _for_condtionalA12;
void* right_value193;
char* new_fun_name_223;
void* right_value194;
_Bool _if_conditional276;
void* right_value195;
char* __dec_obj64;
_Bool _if_conditional277;
void* right_value196;
_Bool _if_conditional278;
void* right_value197;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_224;
char* new_fun_name_225;
char* __dec_obj65;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_209, 0, sizeof(char*));
memset(&stack_saved_210, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_211, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_212, 0, sizeof(struct sClass*));
memset(&class_name_213, 0, sizeof(char*));
memset(&fun_name_214, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&type2_215, 0, sizeof(struct sType*));
memset(&cloner_216, 0, sizeof(struct sFun*));
memset(&fun_name2_217, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&none_generics_name_218, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_219, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&fun_name3_220, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
memset(&generics_fun_221, 0, sizeof(struct sGenericsFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&i_222, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&new_fun_name_223, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&fun_224, 0, sizeof(struct sFun*));
memset(&new_fun_name_225, 0, sizeof(char*));
memset(&fun_224, 0, sizeof(struct sFun*));
memset(&new_fun_name_225, 0, sizeof(char*));
    if(_if_conditional272=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 746))->mNoSolvedGenericsType, "04heap.c", 746))->v1,    __freed_obj__ = 0, 
    _if_conditional272) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 744))->mNoSolvedGenericsType, "04heap.c", 744))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_209=((void*)0);
    __freed_obj__ = 0;
    stack_saved_210=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 747))->stack);
    __freed_obj__ = 0;
    right_value_objects_211=((struct sInfo*)come_null_check(info, "04heap.c", 748))->right_value_objects;
    __freed_obj__ = 0;
    klass_212=((struct sType*)come_null_check(type, "04heap.c", 750))->mClass;
    __freed_obj__ = 0;
    class_name_213=((struct sClass*)come_null_check(klass_212, "04heap.c", 752))->mName;
    __freed_obj__ = 0;
    fun_name_214="equals";
    __freed_obj__ = 0;
    type2_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(type))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_215, "04heap.c", 757))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_216=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional273=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 798))->mGenericsTypes, "04heap.c", 798)))>0,    __freed_obj__ = 0, 
    _if_conditional273) {
        none_generics_name_218=(char*)come_increment_ref_count(((char*)(right_value185=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 762))->mClass, "04heap.c", 762))->mName))));
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 764))->generics_type,info))));
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj62=fun_name2_217;
        fun_name2_217=(char*)come_increment_ref_count(((char*)(right_value187=create_method_name(obj_type_219,(_Bool)0,fun_name_214,info))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_220=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s_%s",none_generics_name_218,fun_name_214))));
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_221=((struct sGenericsFun*)(right_value189=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 769))->generics_funcs, "04heap.c", 769)),fun_name3_220,((void*)0))));
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional274=generics_fun_221,        __freed_obj__ = 0, 
        _if_conditional274) {
            if(_if_conditional275=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(fun_name2_217)))),generics_fun_221,obj_type_219,info),            (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional275) {
                __result89__ = (_Bool)0;
                if(none_generics_name_218 && !__freed_obj__) { none_generics_name_218 = come_decrement_ref_count(none_generics_name_218, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_220 && !__freed_obj__) { fun_name3_220 = come_decrement_ref_count(fun_name3_220, (void*)0, (void*)0, 0, 0, 0); }
                if(result_209 && !__freed_obj__) { result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_217 && !__freed_obj__) { fun_name2_217 = come_decrement_ref_count(fun_name2_217, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result89__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_216=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 777),((struct optional$2sFunpbool*)(right_value191=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 777))->funcs,fun_name2_217)))));
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_218 && !__freed_obj__) { none_generics_name_218 = come_decrement_ref_count(none_generics_name_218, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_220 && !__freed_obj__) { fun_name3_220 = come_decrement_ref_count(fun_name3_220, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj63=fun_name2_217;
        fun_name2_217=(char*)come_increment_ref_count(((char*)(right_value192=create_method_name(type,(_Bool)0,fun_name_214,info))));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_222=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_222>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_222-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_223=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_217,i_222))));
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_216=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 785),((struct optional$2sFunpbool*)(right_value194=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 785))->funcs,new_fun_name_223)))));
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional276=cloner_216,            __freed_obj__ = 0, 
            _if_conditional276) {
                __dec_obj64=fun_name2_217;
                fun_name2_217=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(new_fun_name_223))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_223 && !__freed_obj__) { new_fun_name_223 = come_decrement_ref_count(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_223 && !__freed_obj__) { new_fun_name_223 = come_decrement_ref_count(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional277=cloner_216==((void*)0),        __freed_obj__ = 0, 
        _if_conditional277) {
            come_clear_stackframe();
            cloner_216=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 794),((struct optional$2sFunpbool*)(right_value196=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 794))->funcs,fun_name2_217)))));
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional278=cloner_216==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 806))->mClass, "04heap.c", 806))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 806))->mClass, "04heap.c", 806))->mNumber,    __freed_obj__ = 0, 
    _if_conditional278) {
        multiple_assgin_var9=((struct tuple2$2sFunpcharph*)(right_value197=create_equals_automatically(type,fun_name_214,info)));
        fun_224=multiple_assgin_var9->v1;
        new_fun_name_225=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj65=fun_name2_217;
        fun_name2_217=(char*)come_increment_ref_count(new_fun_name_225);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_216=fun_224;
        __freed_obj__ = 0;
        if(new_fun_name_225 && !__freed_obj__) { new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj66=((struct sInfo*)come_null_check(info, "04heap.c", 806))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 806))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_211);
    if(__dec_obj66) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj67=((struct sInfo*)come_null_check(info, "04heap.c", 807))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 807))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_210);
    if(__dec_obj67) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result90__ = (_Bool)1;
    if(result_209 && !__freed_obj__) { result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_217 && !__freed_obj__) { fun_name2_217 = come_decrement_ref_count(fun_name2_217, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
    if(result_209 && !__freed_obj__) { result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_210 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_217 && !__freed_obj__) { fun_name2_217 = come_decrement_ref_count(fun_name2_217, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional279;
char* result_226;
struct list$1CVALUEph* stack_saved_227;
struct list$1sRightValueObjectph* right_value_objects_228;
struct sClass* klass_229;
char* class_name_230;
char* fun_name_231;
void* right_value198;
struct sType* type2_232;
struct sFun* cloner_233;
char* fun_name2_234;
_Bool _if_conditional280;
void* right_value199;
char* none_generics_name_235;
void* right_value200;
struct sType* obj_type_236;
void* right_value201;
char* __dec_obj68;
void* right_value202;
char* fun_name3_237;
void* right_value203;
struct sGenericsFun* generics_fun_238;
_Bool _if_conditional281;
void* right_value204;
_Bool _if_conditional282;
_Bool __result91__;
void* right_value205;
void* right_value206;
char* __dec_obj69;
int i_239;
_Bool _for_condtionalA13;
void* right_value207;
char* new_fun_name_240;
void* right_value208;
_Bool _if_conditional283;
void* right_value209;
char* __dec_obj70;
_Bool _if_conditional284;
void* right_value210;
_Bool _if_conditional285;
void* right_value211;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_241;
char* new_fun_name_242;
char* __dec_obj71;
struct list$1sRightValueObjectph* __dec_obj72;
struct list$1CVALUEph* __dec_obj73;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_226, 0, sizeof(char*));
memset(&stack_saved_227, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_228, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_229, 0, sizeof(struct sClass*));
memset(&class_name_230, 0, sizeof(char*));
memset(&fun_name_231, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_232, 0, sizeof(struct sType*));
memset(&cloner_233, 0, sizeof(struct sFun*));
memset(&fun_name2_234, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
memset(&none_generics_name_235, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&obj_type_236, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&fun_name3_237, 0, sizeof(char*));
memset(&right_value203, 0, sizeof(void*));
memset(&generics_fun_238, 0, sizeof(struct sGenericsFun*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&i_239, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&new_fun_name_240, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_241, 0, sizeof(struct sFun*));
memset(&new_fun_name_242, 0, sizeof(char*));
memset(&fun_241, 0, sizeof(struct sFun*));
memset(&new_fun_name_242, 0, sizeof(char*));
    if(_if_conditional279=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 817))->mNoSolvedGenericsType, "04heap.c", 817))->v1,    __freed_obj__ = 0, 
    _if_conditional279) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 815))->mNoSolvedGenericsType, "04heap.c", 815))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_226=((void*)0);
    __freed_obj__ = 0;
    stack_saved_227=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 818))->stack);
    __freed_obj__ = 0;
    right_value_objects_228=((struct sInfo*)come_null_check(info, "04heap.c", 819))->right_value_objects;
    __freed_obj__ = 0;
    klass_229=((struct sType*)come_null_check(type, "04heap.c", 821))->mClass;
    __freed_obj__ = 0;
    class_name_230=((struct sClass*)come_null_check(klass_229, "04heap.c", 823))->mName;
    __freed_obj__ = 0;
    fun_name_231="operator_equals";
    __freed_obj__ = 0;
    type2_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_232, "04heap.c", 828))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_233=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional280=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 869))->mGenericsTypes, "04heap.c", 869)))>0,    __freed_obj__ = 0, 
    _if_conditional280) {
        none_generics_name_235=(char*)come_increment_ref_count(((char*)(right_value199=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 833))->mClass, "04heap.c", 833))->mName))));
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 835))->generics_type,info))));
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj68=fun_name2_234;
        fun_name2_234=(char*)come_increment_ref_count(((char*)(right_value201=create_method_name(obj_type_236,(_Bool)0,fun_name_231,info))));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_237=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_%s",none_generics_name_235,fun_name_231))));
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_238=((struct sGenericsFun*)(right_value203=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 840))->generics_funcs, "04heap.c", 840)),fun_name3_237,((void*)0))));
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional281=generics_fun_238,        __freed_obj__ = 0, 
        _if_conditional281) {
            if(_if_conditional282=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(fun_name2_234)))),generics_fun_238,obj_type_236,info),            (right_value204 && right_value204 != __result_obj__ && !__freed_obj__) ? right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional282) {
                __result91__ = (_Bool)0;
                if(none_generics_name_235 && !__freed_obj__) { none_generics_name_235 = come_decrement_ref_count(none_generics_name_235, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_237 && !__freed_obj__) { fun_name3_237 = come_decrement_ref_count(fun_name3_237, (void*)0, (void*)0, 0, 0, 0); }
                if(result_226 && !__freed_obj__) { result_226 = come_decrement_ref_count(result_226, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_227, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_232, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_234 && !__freed_obj__) { fun_name2_234 = come_decrement_ref_count(fun_name2_234, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result91__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_233=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 848),((struct optional$2sFunpbool*)(right_value205=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 848))->funcs,fun_name2_234)))));
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_235 && !__freed_obj__) { none_generics_name_235 = come_decrement_ref_count(none_generics_name_235, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_237 && !__freed_obj__) { fun_name3_237 = come_decrement_ref_count(fun_name3_237, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj69=fun_name2_234;
        fun_name2_234=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name(type,(_Bool)0,fun_name_231,info))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_239=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_239>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_239-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_240=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("%s_v%d",fun_name2_234,i_239))));
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_233=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 856),((struct optional$2sFunpbool*)(right_value208=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 856))->funcs,new_fun_name_240)))));
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional283=cloner_233,            __freed_obj__ = 0, 
            _if_conditional283) {
                __dec_obj70=fun_name2_234;
                fun_name2_234=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(new_fun_name_240))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_240 && !__freed_obj__) { new_fun_name_240 = come_decrement_ref_count(new_fun_name_240, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_240 && !__freed_obj__) { new_fun_name_240 = come_decrement_ref_count(new_fun_name_240, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional284=cloner_233==((void*)0),        __freed_obj__ = 0, 
        _if_conditional284) {
            come_clear_stackframe();
            cloner_233=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 865),((struct optional$2sFunpbool*)(right_value210=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 865))->funcs,fun_name2_234)))));
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional285=cloner_233==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 877))->mClass, "04heap.c", 877))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 877))->mClass, "04heap.c", 877))->mNumber,    __freed_obj__ = 0, 
    _if_conditional285) {
        multiple_assgin_var10=((struct tuple2$2sFunpcharph*)(right_value211=create_operator_equals_automatically(type,fun_name_231,info)));
        fun_241=multiple_assgin_var10->v1;
        new_fun_name_242=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj71=fun_name2_234;
        fun_name2_234=(char*)come_increment_ref_count(new_fun_name_242);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_233=fun_241;
        __freed_obj__ = 0;
        if(new_fun_name_242 && !__freed_obj__) { new_fun_name_242 = come_decrement_ref_count(new_fun_name_242, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj72=((struct sInfo*)come_null_check(info, "04heap.c", 877))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 877))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_228);
    if(__dec_obj72) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj73=((struct sInfo*)come_null_check(info, "04heap.c", 878))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 878))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_227);
    if(__dec_obj73) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result92__ = (_Bool)1;
    if(result_226 && !__freed_obj__) { result_226 = come_decrement_ref_count(result_226, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_234 && !__freed_obj__) { fun_name2_234 = come_decrement_ref_count(fun_name2_234, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(result_226 && !__freed_obj__) { result_226 = come_decrement_ref_count(result_226, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_234 && !__freed_obj__) { fun_name2_234 = come_decrement_ref_count(fun_name2_234, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional286;
char* result_243;
struct list$1CVALUEph* stack_saved_244;
struct list$1sRightValueObjectph* right_value_objects_245;
struct sClass* klass_246;
char* class_name_247;
char* fun_name_248;
void* right_value212;
struct sType* type2_249;
struct sFun* cloner_250;
char* fun_name2_251;
_Bool _if_conditional287;
void* right_value213;
char* none_generics_name_252;
void* right_value214;
struct sType* obj_type_253;
void* right_value215;
char* __dec_obj74;
void* right_value216;
char* fun_name3_254;
void* right_value217;
struct sGenericsFun* generics_fun_255;
_Bool _if_conditional288;
void* right_value218;
_Bool _if_conditional289;
_Bool __result93__;
void* right_value219;
void* right_value220;
char* __dec_obj75;
int i_256;
_Bool _for_condtionalA14;
void* right_value221;
char* new_fun_name_257;
void* right_value222;
_Bool _if_conditional290;
void* right_value223;
char* __dec_obj76;
_Bool _if_conditional291;
void* right_value224;
_Bool _if_conditional292;
void* right_value225;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_258;
char* new_fun_name_259;
char* __dec_obj77;
struct list$1sRightValueObjectph* __dec_obj78;
struct list$1CVALUEph* __dec_obj79;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_243, 0, sizeof(char*));
memset(&stack_saved_244, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_245, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_246, 0, sizeof(struct sClass*));
memset(&class_name_247, 0, sizeof(char*));
memset(&fun_name_248, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&type2_249, 0, sizeof(struct sType*));
memset(&cloner_250, 0, sizeof(struct sFun*));
memset(&fun_name2_251, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&none_generics_name_252, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&obj_type_253, 0, sizeof(struct sType*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&fun_name3_254, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&generics_fun_255, 0, sizeof(struct sGenericsFun*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&i_256, 0, sizeof(int));
memset(&right_value221, 0, sizeof(void*));
memset(&new_fun_name_257, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&fun_258, 0, sizeof(struct sFun*));
memset(&new_fun_name_259, 0, sizeof(char*));
memset(&fun_258, 0, sizeof(struct sFun*));
memset(&new_fun_name_259, 0, sizeof(char*));
    if(_if_conditional286=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 888))->mNoSolvedGenericsType, "04heap.c", 888))->v1,    __freed_obj__ = 0, 
    _if_conditional286) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 886))->mNoSolvedGenericsType, "04heap.c", 886))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_243=((void*)0);
    __freed_obj__ = 0;
    stack_saved_244=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 889))->stack);
    __freed_obj__ = 0;
    right_value_objects_245=((struct sInfo*)come_null_check(info, "04heap.c", 890))->right_value_objects;
    __freed_obj__ = 0;
    klass_246=((struct sType*)come_null_check(type, "04heap.c", 892))->mClass;
    __freed_obj__ = 0;
    class_name_247=((struct sClass*)come_null_check(klass_246, "04heap.c", 894))->mName;
    __freed_obj__ = 0;
    fun_name_248="operator_not_equals";
    __freed_obj__ = 0;
    type2_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(type))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_249, "04heap.c", 899))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_250=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional287=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 940))->mGenericsTypes, "04heap.c", 940)))>0,    __freed_obj__ = 0, 
    _if_conditional287) {
        none_generics_name_252=(char*)come_increment_ref_count(((char*)(right_value213=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 904))->mClass, "04heap.c", 904))->mName))));
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 906))->generics_type,info))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj74=fun_name2_251;
        fun_name2_251=(char*)come_increment_ref_count(((char*)(right_value215=create_method_name(obj_type_253,(_Bool)0,fun_name_248,info))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_254=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s_%s",none_generics_name_252,fun_name_248))));
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_255=((struct sGenericsFun*)(right_value217=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 911))->generics_funcs, "04heap.c", 911)),fun_name3_254,((void*)0))));
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional288=generics_fun_255,        __freed_obj__ = 0, 
        _if_conditional288) {
            if(_if_conditional289=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(fun_name2_251)))),generics_fun_255,obj_type_253,info),            (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional289) {
                __result93__ = (_Bool)0;
                if(none_generics_name_252 && !__freed_obj__) { none_generics_name_252 = come_decrement_ref_count(none_generics_name_252, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_253 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_254 && !__freed_obj__) { fun_name3_254 = come_decrement_ref_count(fun_name3_254, (void*)0, (void*)0, 0, 0, 0); }
                if(result_243 && !__freed_obj__) { result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_244 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_244, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_251 && !__freed_obj__) { fun_name2_251 = come_decrement_ref_count(fun_name2_251, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_250=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 919),((struct optional$2sFunpbool*)(right_value219=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 919))->funcs,fun_name2_251)))));
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_252 && !__freed_obj__) { none_generics_name_252 = come_decrement_ref_count(none_generics_name_252, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_253 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_253, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_254 && !__freed_obj__) { fun_name3_254 = come_decrement_ref_count(fun_name3_254, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj75=fun_name2_251;
        fun_name2_251=(char*)come_increment_ref_count(((char*)(right_value220=create_method_name(type,(_Bool)0,fun_name_248,info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_256=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        i_256>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA14;        i_256-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_257=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s_v%d",fun_name2_251,i_256))));
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_250=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 927),((struct optional$2sFunpbool*)(right_value222=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 927))->funcs,new_fun_name_257)))));
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional290=cloner_250,            __freed_obj__ = 0, 
            _if_conditional290) {
                __dec_obj76=fun_name2_251;
                fun_name2_251=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(new_fun_name_257))));
                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_257 && !__freed_obj__) { new_fun_name_257 = come_decrement_ref_count(new_fun_name_257, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_257 && !__freed_obj__) { new_fun_name_257 = come_decrement_ref_count(new_fun_name_257, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional291=cloner_250==((void*)0),        __freed_obj__ = 0, 
        _if_conditional291) {
            come_clear_stackframe();
            cloner_250=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 936),((struct optional$2sFunpbool*)(right_value224=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 936))->funcs,fun_name2_251)))));
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional292=cloner_250==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 948))->mClass, "04heap.c", 948))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 948))->mClass, "04heap.c", 948))->mNumber,    __freed_obj__ = 0, 
    _if_conditional292) {
        multiple_assgin_var11=((struct tuple2$2sFunpcharph*)(right_value225=create_operator_not_equals_automatically(type,fun_name_248,info)));
        fun_258=multiple_assgin_var11->v1;
        new_fun_name_259=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj77=fun_name2_251;
        fun_name2_251=(char*)come_increment_ref_count(new_fun_name_259);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_250=fun_258;
        __freed_obj__ = 0;
        if(new_fun_name_259 && !__freed_obj__) { new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj78=((struct sInfo*)come_null_check(info, "04heap.c", 948))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 948))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_245);
    if(__dec_obj78) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj79=((struct sInfo*)come_null_check(info, "04heap.c", 949))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 949))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_244);
    if(__dec_obj79) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result94__ = (_Bool)1;
    if(result_243 && !__freed_obj__) { result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_244 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_251 && !__freed_obj__) { fun_name2_251 = come_decrement_ref_count(fun_name2_251, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(result_243 && !__freed_obj__) { result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_244 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_251 && !__freed_obj__) { fun_name2_251 = come_decrement_ref_count(fun_name2_251, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
_Bool free_right_value_260;
struct list$1sRightValueObjectph* right_value_objects_261;
int n_262;
struct list$1sRightValueObjectph* o2_saved_263;
struct sRightValueObject* it_264;
_Bool _for_condtionalA15;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value226;
struct sType* type_265;
void* right_value227;
struct sType* __dec_obj80;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_260, 0, sizeof(_Bool));
memset(&right_value_objects_261, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_262, 0, sizeof(int));
memset(&o2_saved_263, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_264, 0, sizeof(struct sRightValueObject*));
memset(&right_value226, 0, sizeof(void*));
memset(&type_265, 0, sizeof(struct sType*));
memset(&right_value227, 0, sizeof(void*));
    free_right_value_260=(_Bool)0;
    __freed_obj__ = 0;
    right_value_objects_261=((struct sInfo*)come_null_check(info, "04heap.c", 957))->right_value_objects;
    __freed_obj__ = 0;
    n_262=0;
    __freed_obj__ = 0;
    for(
    o2_saved_263=(right_value_objects_261),it_264=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_263), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_263), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    it_264=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_263), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional293=it_264&&!((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 992))->mFreed,        __freed_obj__ = 0, 
        _if_conditional293) {
            if(_if_conditional294=string_operator_equals(((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 990))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 990))->come_fun, "04heap.c", 990))->mName)&&((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 990))->mBlockLevel==((struct sInfo*)come_null_check(info, "04heap.c", 990))->block_level,            __freed_obj__ = 0, 
            _if_conditional294) {
                type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 963))->mType))));
                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj80=type_265;
                type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=solve_type(type_265,((struct sInfo*)come_null_check(info, "04heap.c", 965))->generics_type,((struct sInfo*)come_null_check(info, "04heap.c", 965))->method_generics_types,info))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional295=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional295) {
                    if(_if_conditional296=comma,                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_262,((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 969))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_262,((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 972))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                free_object(type_265,((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 976))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional297=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional297) {
                    if(_if_conditional298=comma,                    __freed_obj__ = 0, 
                    _if_conditional298) {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_262,((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 980))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_262,((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 983))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sRightValueObject*)come_null_check(it_264, "04heap.c", 987))->mFreed=(_Bool)1;
                __freed_obj__ = 0;
                free_right_value_260=(_Bool)1;
                __freed_obj__ = 0;
                if(type_265 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_265, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_262++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional299=comma,    __freed_obj__ = 0, 
    _if_conditional299) {
        add_come_code(info,"__freed_obj__ = 0, \n");
        __freed_obj__ = 0;
    }
    else {
        add_come_code(info,"__freed_obj__ = 0;\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sRightValueObjectph* o2_saved_266;
struct sRightValueObject* it_267;
_Bool _for_condtionalA16;
_Bool _if_conditional300;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_266, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_267, 0, sizeof(struct sRightValueObject*));
    for(
    o2_saved_266=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 1011))->right_value_objects)),it_267=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_266), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_266), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    it_267=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_266), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional300=((struct sRightValueObject*)come_null_check(it_267, "04heap.c", 1009))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional300) {
            __result95__ = (_Bool)1;
            if(o2_saved_266 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result95__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_266 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_266, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result96__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
struct sVarTable* it_268;
_Bool _while_condtional21;
void* right_value237;
struct sVar* var__273;
_Bool _if_conditional306;
struct sVar* __result104__;
struct sVar* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_268, 0, sizeof(struct sVarTable*));
memset(&right_value237, 0, sizeof(void*));
memset(&var__273, 0, sizeof(struct sVar*));
    it_268=table;
    __freed_obj__ = 0;
    while(_while_condtional21=it_268,    __freed_obj__ = 0, 
    _while_condtional21) {
        come_clear_stackframe();
        var__273=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1020),((struct optional$2sVarpbool*)(right_value237=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(it_268, "04heap.c", 1020))->mVars,name)))));
        come_pop_stackframe();
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional306=var__273,        __freed_obj__ = 0, 
        _if_conditional306) {
            __result104__ = __result_obj__ = var__273;
            __freed_obj__ = 0;
            return __result104__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_268=((struct sVarTable*)come_null_check(it_268, "04heap.c", 1026))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* default_value_269;
unsigned int hash_270;
unsigned int it_271;
_Bool _while_condtional22;
_Bool _if_conditional301;
void* right_value228;
struct optional$2boolbool* __exception_result_var_b3;
_Bool _if_conditional302;
void* right_value229;
void* right_value230;
struct optional$2sVarpbool* __result98__;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value231;
void* right_value232;
struct optional$2sVarpbool* __result99__;
void* right_value233;
void* right_value234;
struct optional$2sVarpbool* __result100__;
void* right_value235;
void* right_value236;
struct optional$2sVarpbool* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_269, 0, sizeof(struct sVar*));
memset(&hash_270, 0, sizeof(unsigned int));
memset(&it_271, 0, sizeof(unsigned int));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_269,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_270=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_271=hash_270;
            __freed_obj__ = 0;
            while(_while_condtional22=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional22) {
                if(_if_conditional301=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_271],                __freed_obj__ = 0, 
                _if_conditional301) {
                    if(_if_conditional302=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b3=((struct optional$2boolbool*)(right_value228=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_271], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b3)),                    (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional302) {
                        __result98__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value230=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value229=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_271],(_Bool)1)));
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result98__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_271++;
                    __freed_obj__ = 0;
                    if(_if_conditional303=it_271>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional303) {
                        it_271=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional304=it_271==hash_270,                        __freed_obj__ = 0, 
                        _if_conditional304) {
                            __result99__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value232=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value231=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_269,(_Bool)0))));
                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result99__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result100__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value234=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value233=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_269,(_Bool)0))));
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result100__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value236=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value235=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_269,(_Bool)0))));
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sVarpbool* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result97__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result97__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional305;
struct sVar* default_value_272;
struct sVar* __result102__;
struct sVar* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_272, 0, sizeof(struct sVar*));
            if(_if_conditional305=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional305) {
                __freed_obj__ = 0;
                memset(&default_value_272,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result102__ = __result_obj__ = default_value_272;
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            else {
                __result103__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct map$2charphsVarph* o2_saved_274;
char* it_277;
_Bool _for_condtionalA17;
void* right_value238;
struct sVar* p_280;
struct sType* type_281;
struct sClass* klass_282;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value239;
char* c_value_283;
void* right_value240;
struct sType* type2_284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_274, 0, sizeof(struct map$2charphsVarph*));
memset(&it_277, 0, sizeof(char*));
memset(&right_value238, 0, sizeof(void*));
memset(&p_280, 0, sizeof(struct sVar*));
memset(&type_281, 0, sizeof(struct sType*));
memset(&klass_282, 0, sizeof(struct sClass*));
memset(&right_value239, 0, sizeof(void*));
memset(&c_value_283, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&type2_284, 0, sizeof(struct sType*));
    for(
    o2_saved_274=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(table, "04heap.c", 1058))->mVars)),it_277=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_274), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_274), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_277=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_274), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        p_280=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1035),((struct optional$2sVarpbool*)(right_value238=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(table, "04heap.c", 1035))->mVars,it_277)))));
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_281=((struct sVar*)come_null_check(p_280, "04heap.c", 1036))->mType;
        __freed_obj__ = 0;
        klass_282=((struct sType*)come_null_check(type_281, "04heap.c", 1037))->mClass;
        __freed_obj__ = 0;
        if(_if_conditional311=ret_value!=((void*)0)&&((struct sVar*)come_null_check(p_280, "04heap.c", 1057))->mCValueName!=((void*)0)&&string_operator_equals(((struct sVar*)come_null_check(p_280, "04heap.c", 1057))->mCValueName,((struct sVar*)come_null_check(ret_value, "04heap.c", 1057))->mCValueName)&&((struct sType*)come_null_check(type_281, "04heap.c", 1057))->mHeap,        __freed_obj__ = 0, 
        _if_conditional311) {
            free_object(((struct sVar*)come_null_check(p_280, "04heap.c", 1041))->mType,((struct sVar*)come_null_check(p_280, "04heap.c", 1041))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional312=((struct sType*)come_null_check(type_281, "04heap.c", 1057))->mHeap&&((struct sVar*)come_null_check(p_280, "04heap.c", 1057))->mCValueName,            __freed_obj__ = 0, 
            _if_conditional312) {
                if(_if_conditional313=((struct sType*)come_null_check(type_281, "04heap.c", 1050))->mFunctionParam,                __freed_obj__ = 0, 
                _if_conditional313) {
                    free_object(((struct sVar*)come_null_check(p_280, "04heap.c", 1045))->mType,((struct sVar*)come_null_check(p_280, "04heap.c", 1045))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                else {
                    free_object(((struct sVar*)come_null_check(p_280, "04heap.c", 1048))->mType,((struct sVar*)come_null_check(p_280, "04heap.c", 1048))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional314=((struct sClass*)come_null_check(klass_282, "04heap.c", 1057))->mStruct&&((struct sVar*)come_null_check(p_280, "04heap.c", 1057))->mCValueName&&((struct sType*)come_null_check(type_281, "04heap.c", 1057))->mAllocaValue&&!((struct sType*)come_null_check(type_281, "04heap.c", 1057))->mNoCallingDestructor,                __freed_obj__ = 0, 
                _if_conditional314) {
                    c_value_283=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("(&%s)",((struct sVar*)come_null_check(p_280, "04heap.c", 1052))->mCValueName))));
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    type2_284=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(type_281))));
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type2_284, "04heap.c", 1054))->mPointerNum++;
                    __freed_obj__ = 0;
                    free_object(type2_284,c_value_283,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                    if(c_value_283 && !__freed_obj__) { c_value_283 = come_decrement_ref_count(c_value_283, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_284 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_284, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_274 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_274, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional307;
char* result_275;
char* __result106__;
_Bool _if_conditional308;
char* __result107__;
char* result_276;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_275, 0, sizeof(char*));
memset(&result_276, 0, sizeof(char*));
        if(_if_conditional307=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional307) {
            __freed_obj__ = 0;
            memset(&result_275,0,sizeof(char*));
            __freed_obj__ = 0;
            __result106__ = __result_obj__ = result_275;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
        __freed_obj__ = 0;
        if(_if_conditional308=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,        __freed_obj__ = 0, 
        _if_conditional308) {
            __result107__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_276,0,sizeof(char*));
        __freed_obj__ = 0;
        __result108__ = __result_obj__ = result_276;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result109__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional309;
char* result_278;
char* __result110__;
_Bool _if_conditional310;
char* __result111__;
char* result_279;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_278, 0, sizeof(char*));
memset(&result_279, 0, sizeof(char*));
        if(_if_conditional309=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional309) {
            __freed_obj__ = 0;
            memset(&result_278,0,sizeof(char*));
            __freed_obj__ = 0;
            __result110__ = __result_obj__ = result_278;
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
        __freed_obj__ = 0;
        if(_if_conditional310=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,        __freed_obj__ = 0, 
        _if_conditional310) {
            __result111__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_279,0,sizeof(char*));
        __freed_obj__ = 0;
        __result112__ = __result_obj__ = result_279;
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_285;
_Bool _for_condtionalA18;
_Bool _if_conditional315;
_Bool _if_conditional316;
int i_286;
_Bool _for_condtionalA19;
_Bool _if_conditional321;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_285, 0, sizeof(int));
memset(&i_286, 0, sizeof(int));
        for(
        i_285=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_285<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_285++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional315=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_285],            __freed_obj__ = 0, 
            _if_conditional315) {
                if(_if_conditional316=1,                __freed_obj__ = 0, 
                _if_conditional316) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_285] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_285], (void*)0, (void*)0, 0, 0, 0, 0); }
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
        i_286=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_286<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_286++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional321=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_286],            __freed_obj__ = 0, 
            _if_conditional321) {
                if(_if_conditional322=1,                __freed_obj__ = 0, 
                _if_conditional322) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_286] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_286] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_286], (void*)0, (void*)0, 0, 0, 0); }
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

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional317=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional318=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional319=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional320=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_287;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_287, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_288, 0, sizeof(struct list_item$1charp*));
            it_287=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_287!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                prev_it_288=it_287;
                __freed_obj__ = 0;
                it_287=((struct list_item$1charp*)come_null_check(it_287, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_288 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_288, (void*)0, (void*)0, 0, 0, 0, 0); }
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

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool __freed_obj__;
struct sVarTable* it_289;
_Bool _if_conditional323;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_289, 0, sizeof(struct sVarTable*));
    it_289=((struct sInfo*)come_null_check(info, "04heap.c", 1062))->lv_table;
    __freed_obj__ = 0;
    if(_if_conditional323=it_289==((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1075))->come_fun, "04heap.c", 1075))->mBlock, "04heap.c", 1075))->mVarTable,    __freed_obj__ = 0, 
    _if_conditional323) {
        free_objects(it_289,ret_value,info);
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional24=it_289!=((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1073))->come_fun, "04heap.c", 1073))->mBlock, "04heap.c", 1073))->mVarTable,        __freed_obj__ = 0, 
        _while_condtional24) {
            free_objects(it_289,ret_value,info);
            __freed_obj__ = 0;
            it_289=((struct sVarTable*)come_null_check(it_289, "04heap.c", 1071))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_289,ret_value,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* ret_value_290;
struct sVarTable* current_loop_vtable_291;
_Bool _if_conditional324;
struct sVarTable* it_292;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_290, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_291, 0, sizeof(struct sVarTable*));
memset(&it_292, 0, sizeof(struct sVarTable*));
    ret_value_290=((void*)0);
    __freed_obj__ = 0;
    current_loop_vtable_291=((struct sInfo*)come_null_check(info, "04heap.c", 1081))->current_loop_vtable;
    __freed_obj__ = 0;
    if(_if_conditional324=current_loop_vtable_291!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional324) {
        it_292=((struct sInfo*)come_null_check(info, "04heap.c", 1084))->lv_table;
        __freed_obj__ = 0;
        while(_while_condtional25=it_292!=current_loop_vtable_291,        __freed_obj__ = 0, 
        _while_condtional25) {
            free_objects(it_292,ret_value_290,info);
            __freed_obj__ = 0;
            it_292=((struct sVarTable*)come_null_check(it_292, "04heap.c", 1088))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_292,ret_value_290,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
char* __result113__;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
char* __result114__;
_Bool _if_conditional328;
static int n_293=0;
void* right_value249;
char* var_name_294;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
char* __result115__;
static int n_295=0;
void* right_value257;
char* var_name_296;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
char* __result116__;
_Bool _if_conditional329;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
char* result_297;
char* __result117__;
void* right_value269;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&var_name_294, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&var_name_296, 0, sizeof(char*));
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
memset(&result_297, 0, sizeof(char*));
memset(&right_value269, 0, sizeof(void*));
    if(_if_conditional325=((struct sInfo*)come_null_check(info, "04heap.c", 1134))->without_semicolon,    __freed_obj__ = 0, 
    _if_conditional325) {
        if(_if_conditional326=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1123))->mClass, "04heap.c", 1123))->mName,"void")&&((struct sType*)come_null_check(type, "04heap.c", 1123))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional326) {
            if(_if_conditional327=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1104))->come_fun, "04heap.c", 1104))->mResultType, "04heap.c", 1104))->mException,            __freed_obj__ = 0, 
            _if_conditional327) {
                __result113__ = __result_obj__ = ((char*)(right_value244=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s, come_pop_stackframe())",((char*)(right_value241=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sname))),((char*)(right_value242=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sline))),((char*)(right_value243=charp_to_string(c_value))))));
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result113__;
                __freed_obj__ = 0;
            }
            else {
                __result114__ = __result_obj__ = ((char*)(right_value248=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value245=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1102))->sname))),((char*)(right_value246=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1102))->sline))),((char*)(right_value247=charp_to_string(c_value))))));
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result114__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional328=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1122))->come_fun, "04heap.c", 1122))->mResultType, "04heap.c", 1122))->mException,            __freed_obj__ = 0, 
            _if_conditional328) {
                __freed_obj__ = 0;
                ++n_293;
                __freed_obj__ = 0;
                var_name_294=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("__exception_result_var_a%d",n_293))));
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1111),((struct optional$2charphbool*)(right_value250=make_define_var(type,var_name_294,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __result115__ = __result_obj__ = ((char*)(right_value256=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value251=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1112))->sname))),((char*)(right_value252=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1112))->sline))),((char*)(right_value253=string_to_string(var_name_294))),((char*)(right_value254=charp_to_string(c_value))),((char*)(right_value255=string_to_string(var_name_294))))));
                if(var_name_294 && !__freed_obj__) { var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
                if(var_name_294 && !__freed_obj__) { var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                __freed_obj__ = 0;
                ++n_295;
                __freed_obj__ = 0;
                var_name_296=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("__exception_result_var_b%d",n_295))));
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1119),((struct optional$2charphbool*)(right_value258=make_define_var(type,var_name_296,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __result116__ = __result_obj__ = ((char*)(right_value264=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value259=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1120))->sname))),((char*)(right_value260=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1120))->sline))),((char*)(right_value261=string_to_string(var_name_296))),((char*)(right_value262=charp_to_string(c_value))),((char*)(right_value263=string_to_string(var_name_296))))));
                if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
                if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional329=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->come_fun, "04heap.c", 1128))->mResultType, "04heap.c", 1128))->mException,        __freed_obj__ = 0, 
        _if_conditional329) {
            add_come_code(info,"come_clear_stackframe();\n");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_297=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s)",((char*)(right_value265=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->sname))),((char*)(right_value266=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->sline))),((char*)(right_value267=charp_to_string(c_value)))))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        add_come_last_code2(info,"come_pop_stackframe();\n");
        __freed_obj__ = 0;
        __result117__ = __result_obj__ = result_297;
        if(result_297 && !__freed_obj__) { result_297 = come_decrement_ref_count(result_297, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result117__;
        __freed_obj__ = 0;
        if(result_297 && !__freed_obj__) { result_297 = come_decrement_ref_count(result_297, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result118__ = __result_obj__ = ((char*)(right_value269=__builtin_string(c_value)));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

