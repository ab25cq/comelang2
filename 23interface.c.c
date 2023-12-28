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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info);

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info);

_Bool sInterfaceNode_terminated();

char* sInterfaceNode_kind();

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
void* right_value52;
struct sClass* __dec_obj34;
void* right_value53;
char* __dec_obj35;
struct sInterfaceNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
    __dec_obj1=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 13))->name;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 13))->name=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(name))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj34=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 14))->klass;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 14))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value52=sClass_clone(klass))));
    if(__dec_obj34) { come_call_finalizer(sClass_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 16))->sline=((struct sInfo*)come_null_check(info, "23interface.c", 16))->sline;
    __freed_obj__ = 0;
    __dec_obj35=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 17))->sname;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 17))->sname=(char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(((struct sInfo*)come_null_check(info, "23interface.c", 17))->sname))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct sClass* __result1__;
void* right_value1;
struct sClass* result_0;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* right_value2;
char* __dec_obj2;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
void* right_value50;
struct list$1tuple2$2charphsTypephph* __dec_obj32;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value51;
char* __dec_obj33;
struct sClass* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sClass*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result1__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result1__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value1=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
        if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional26=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional26) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional30=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional31=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional31) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional32=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 13))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional32) {
            __dec_obj2=((struct sClass*)come_null_check(result_0, "sClass_clone", 12))->mName;
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value2=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
            if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional34=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional34) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional35=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 16))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional35) {
            __dec_obj32=((struct sClass*)come_null_check(result_0, "sClass_clone", 15))->mFields;
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value50=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
            if(__dec_obj32) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 18))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            __dec_obj33=((struct sClass*)come_null_check(result_0, "sClass_clone", 17))->mDeclareSName;
            ((struct sClass*)come_null_check(result_0, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result30__ = __result_obj__ = result_0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
_Bool _if_conditional3;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional2=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional2) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional3=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional3) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional23=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional23) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_1;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_1, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_2, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_1=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_1!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_2=it_1;
                        __freed_obj__ = 0;
                        it_1=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_1, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_2 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional4=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional4) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional5=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional5) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional6=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional6) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional7) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional9) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional10) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional11) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional13) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional15) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional16) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional18) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional19) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional20) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional21) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional22) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional8=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional8) {
                                                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_3;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
                                                    it_3=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional2=it_3!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional2) {
                                                        prev_it_4=it_3;
                                                        __freed_obj__ = 0;
                                                        it_3=((struct list_item$1sTypeph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional12=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional12) {
                                                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_5;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
                                                    it_5=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional3=it_5!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional3) {
                                                        prev_it_6=it_5;
                                                        __freed_obj__ = 0;
                                                        it_5=((struct list_item$1sNodeph*)come_null_check(it_5, "./comelang2.h", 172))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional14=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional14) {
                                                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_7;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
                                                    it_7=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional4=it_7!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional4) {
                                                        prev_it_8=it_7;
                                                        __freed_obj__ = 0;
                                                        it_7=((struct list_item$1charph*)come_null_check(it_7, "./comelang2.h", 172))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional17=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional17) {
                                                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional36;
struct list$1tuple2$2charphsTypephph* __result2__;
void* right_value3;
void* right_value4;
struct list$1tuple2$2charphsTypephph* result_9;
struct list_item$1tuple2$2charphsTypephph* it_10;
_Bool _while_condtional5;
void* right_value49;
struct list$1tuple2$2charphsTypephph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_10, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value49, 0, sizeof(void*));
                if(_if_conditional36=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    __result2__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result2__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_9=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value4=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value3=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_10=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_10!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_9, "./comelang2.h", 192)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value49=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_10, "./comelang2.h", 192))->item)))));
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_10=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_10, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = result_9;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsTypephph* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result3__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result3__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional37;
void* right_value5;
struct list_item$1tuple2$2charphsTypephph* litem_11;
struct tuple2$2charphsTypeph* __dec_obj3;
_Bool _if_conditional40;
void* right_value6;
struct list_item$1tuple2$2charphsTypephph* litem_12;
struct tuple2$2charphsTypeph* __dec_obj4;
void* right_value7;
struct list_item$1tuple2$2charphsTypephph* litem_13;
struct tuple2$2charphsTypeph* __dec_obj5;
struct list$1tuple2$2charphsTypephph* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value7, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional37=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            litem_11=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value5=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 202))));
                            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_11, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_11, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj3=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_11, "./comelang2.h", 206))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_11, "./comelang2.h", 206))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj3) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_11;
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_11;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional40=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                litem_12=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value6=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212))));
                                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_12, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_12, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj4=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_12, "./comelang2.h", 216))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_12, "./comelang2.h", 216))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj4) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_12;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_12;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_13=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value7=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222))));
                                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_13, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_13, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj5=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_13, "./comelang2.h", 226))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_13, "./comelang2.h", 226))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj5) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_13;
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_13;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result4__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result4__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional38=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional38) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional39=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional39) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional41;
struct tuple2$2charphsTypeph* __result5__;
void* right_value8;
struct tuple2$2charphsTypeph* result_14;
_Bool _if_conditional42;
void* right_value9;
char* __dec_obj6;
_Bool _if_conditional43;
void* right_value48;
struct sType* __dec_obj31;
struct tuple2$2charphsTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
                        if(_if_conditional41=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            __result5__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result5__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_14=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value8=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                        if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional42=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional42) {
                            __dec_obj6=((struct tuple2$2charphsTypeph*)come_null_check(result_14, "tuple2$2charphsTypephp_clone", 4))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_14, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value9=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                            if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional43=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional43) {
                            __dec_obj31=((struct tuple2$2charphsTypeph*)come_null_check(result_14, "tuple2$2charphsTypephp_clone", 5))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_14, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                            if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result28__ = __result_obj__ = result_14;
                        if(result_14 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                        if(result_14 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional44;
struct sType* __result6__;
void* right_value10;
struct sType* result_15;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional50;
void* right_value16;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional53;
void* right_value17;
char* __dec_obj11;
_Bool _if_conditional54;
void* right_value24;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional58;
void* right_value32;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value33;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional73;
void* right_value40;
struct list$1charph* __dec_obj24;
_Bool _if_conditional77;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value44;
struct sNode* __dec_obj27;
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
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value45;
struct sNode* __dec_obj28;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value46;
char* __dec_obj29;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value47;
char* __dec_obj30;
struct sType* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct sType*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
                                if(_if_conditional44=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional44) {
                                    __result6__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result6__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_15=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional45=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional45) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional46) {
                                    __dec_obj8=((struct sType*)come_null_check(result_15, "sType_clone", 5))->mNoSolvedGenericsType;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional50) {
                                    __dec_obj10=((struct sType*)come_null_check(result_15, "sType_clone", 6))->mOriginalLoadVarType;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value16=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                    if(__dec_obj10) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional53) {
                                    __dec_obj11=((struct sType*)come_null_check(result_15, "sType_clone", 7))->mGenericsName;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value17=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional54) {
                                    __dec_obj15=((struct sType*)come_null_check(result_15, "sType_clone", 8))->mGenericsTypes;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                    if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    __dec_obj19=((struct sType*)come_null_check(result_15, "sType_clone", 9))->mArrayNum;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                    if(__dec_obj19) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional71=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional71) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional72) {
                                    __dec_obj20=((struct sType*)come_null_check(result_15, "sType_clone", 11))->mParamTypes;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value33=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                    if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional73) {
                                    __dec_obj24=((struct sType*)come_null_check(result_15, "sType_clone", 12))->mParamNames;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                    if(__dec_obj24) { come_call_finalizer(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional77) {
                                    __dec_obj26=((struct sType*)come_null_check(result_15, "sType_clone", 13))->mResultType;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                    if(__dec_obj26) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional80=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional80) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional81) {
                                    __dec_obj27=((struct sType*)come_null_check(result_15, "sType_clone", 15))->mAlignas;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional82=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional82) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional83=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional83) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional84=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional84) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional85=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional85) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional86=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional86) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional87=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional87) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional88=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional88) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional89=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional89) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional90=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional90) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional91=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional91) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional92=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional92) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional93=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional93) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional94=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional94) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional95=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional95) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional96=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional96) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional97=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional97) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional98=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional98) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional99=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional99) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional100=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional101=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional101) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional102=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional102) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional103=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional103) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional104=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional104) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional105) {
                                    __dec_obj28=((struct sType*)come_null_check(result_15, "sType_clone", 39))->mSizeNum;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional106=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional106) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional107=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional108=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional108) {
                                    __dec_obj29=((struct sType*)come_null_check(result_15, "sType_clone", 42))->mOriginalTypeName;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional109=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional109) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional110=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional110) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional111=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional112=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional112) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional113=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional113) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional114=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional114) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional115=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional116=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional116) {
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional117=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional117) {
                                    __dec_obj30=((struct sType*)come_null_check(result_15, "sType_clone", 51))->mAsmName;
                                    ((struct sType*)come_null_check(result_15, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result27__ = __result_obj__ = result_15;
                                if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result27__;
                                __freed_obj__ = 0;
                                if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional48=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional48) {
                                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional55;
struct list$1sTypeph* __result11__;
void* right_value18;
void* right_value19;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional6;
void* right_value23;
struct list$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
                                        if(_if_conditional55=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            __result11__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            return __result11__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_19=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional6=it_19!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional6) {
                                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_18, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value23=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_19, "./comelang2.h", 192))->item)))));
                                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_19=((struct list_item$1sTypeph*)come_null_check(it_19, "./comelang2.h", 194))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result14__ = __result_obj__ = result_18;
                                        if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result14__;
                                        __freed_obj__ = 0;
                                        if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                            __freed_obj__ = 0;
                                            __result12__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result12__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional56;
void* right_value20;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj12;
_Bool _if_conditional57;
void* right_value21;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj13;
void* right_value22;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj14;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                                                if(_if_conditional56=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional56) {
                                                    litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 204))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 205))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 206))->item;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_20;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_20;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional57=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional57) {
                                                        litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                                        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 215))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 216))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_21;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_21;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 225))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj14=((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 226))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_22;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_22;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                __freed_obj__ = 0;
                                                __result13__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result13__;
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
_Bool _if_conditional59;
struct list$1sNodeph* __result15__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional7;
void* right_value31;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
                                        if(_if_conditional59=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional59) {
                                            __result15__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            return __result15__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_24=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional7=it_24!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional7) {
                                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_23, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_24, "./comelang2.h", 192))->item)))));
                                            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                            it_24=((struct list_item$1sNodeph*)come_null_check(it_24, "./comelang2.h", 194))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result20__ = __result_obj__ = result_23;
                                        if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result20__;
                                        __freed_obj__ = 0;
                                        if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                            __freed_obj__ = 0;
                                            __result16__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result16__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional60;
void* right_value27;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj16;
_Bool _if_conditional61;
void* right_value28;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj17;
void* right_value29;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                                                if(_if_conditional60=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional60) {
                                                    litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 204))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 205))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 206))->item;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_25;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_25;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional61=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional61) {
                                                        litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 215))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 216))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_26;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_26;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 225))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj18=((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 226))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_27;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_27;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                __freed_obj__ = 0;
                                                __result17__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = 0;
                                                return __result17__;
                                                __freed_obj__ = 0;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional62;
struct sNode* __result18__;
void* right_value30;
struct sNode* result_28;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
struct sNode* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct sNode*));
                                                if(_if_conditional62=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional62) {
                                                    __result18__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result18__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                if(_if_conditional63=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional63) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional64=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional64) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional65=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional65) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional66=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional66) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional67=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional67) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional68=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional68) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional69=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional69) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional70=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional70) {
                                                    ((struct sNode*)come_null_check(result_28, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result19__ = __result_obj__ = result_28;
                                                if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = 0;
                                                return __result19__;
                                                __freed_obj__ = 0;
                                                if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional74;
struct list$1charph* __result21__;
void* right_value34;
void* right_value35;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional8;
void* right_value39;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
                                        if(_if_conditional74=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional74) {
                                            __result21__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            return __result21__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value35=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value34=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_30=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional8=it_30!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional8) {
                                            list$1charph_add(((struct list$1charph*)come_null_check(result_29, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value39=string_clone(((struct list_item$1charph*)come_null_check(it_30, "./comelang2.h", 192))->item)))));
                                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_30=((struct list_item$1charph*)come_null_check(it_30, "./comelang2.h", 194))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result24__ = __result_obj__ = result_29;
                                        if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result24__;
                                        __freed_obj__ = 0;
                                        if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                            __freed_obj__ = 0;
                                            __result22__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result22__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional75;
void* right_value36;
struct list_item$1charph* litem_31;
char* __dec_obj21;
_Bool _if_conditional76;
void* right_value37;
struct list_item$1charph* litem_32;
char* __dec_obj22;
void* right_value38;
struct list_item$1charph* litem_33;
char* __dec_obj23;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
                                                if(_if_conditional75=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional75) {
                                                    litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 204))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 205))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj21=((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 206))->item;
                                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_31;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_31;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional76=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional76) {
                                                        litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 215))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj22=((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 216))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_32;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_32;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 225))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj23=((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 226))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_33;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_33;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                __freed_obj__ = 0;
                                                __result23__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result23__;
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
_Bool _if_conditional78;
struct tuple1$1sTypeph* __result25__;
void* right_value41;
struct tuple1$1sTypeph* result_34;
_Bool _if_conditional79;
void* right_value42;
struct sType* __dec_obj25;
struct tuple1$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value42, 0, sizeof(void*));
                                        if(_if_conditional78=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional78) {
                                            __result25__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result25__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_34=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value41=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional79=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional79) {
                                            __dec_obj25=((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1;
                                            ((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                            if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result26__ = __result_obj__ = result_34;
                                        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result26__;
                                        __freed_obj__ = 0;
                                        if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 24))->sline;
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value54;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value54=__builtin_string(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 29))->sname)));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

_Bool sInterfaceNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result34__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}

char* sInterfaceNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value55;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((char*)(right_value55=__builtin_string("sInterfaceNode")));
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value56;
char* name_35;
struct sClass* klass_36;
void* right_value57;
void* right_value58;
struct buffer* buf_37;
void* right_value59;
struct list$1tuple2$2charphsTypephph* o2_saved_38;
struct tuple2$2charphsTypeph* it_41;
_Bool _for_condtionalA1;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_44;
struct sType* type_45;
void* right_value60;
void* right_value61;
void* right_value74;
void* right_value75;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&name_35, 0, sizeof(char*));
memset(&klass_36, 0, sizeof(struct sClass*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&buf_37, 0, sizeof(struct buffer*));
memset(&right_value59, 0, sizeof(void*));
memset(&o2_saved_38, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_41, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_44, 0, sizeof(char*));
memset(&type_45, 0, sizeof(struct sType*));
memset(&name_44, 0, sizeof(char*));
memset(&type_45, 0, sizeof(struct sType*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    name_35=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 44))->name))));
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_36=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 45))->klass;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(klass_36, "23interface.c", 46))->mProtocol=(_Bool)1;
    __freed_obj__ = 0;
    buf_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value58=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value57=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 48))))))));
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_37, "23interface.c", 50)),((char*)(right_value59=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(klass_36, "23interface.c", 50))->mName))));
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_38=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_36, "23interface.c", 61))->mFields)),it_41=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_38), "23interface.c", 61))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_38), "23interface.c", 61))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_41=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_38), "23interface.c", 61))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_41;
        name_44=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        type_45=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_37, "23interface.c", 56)),"    ");
        __freed_obj__ = 0;
        come_clear_stackframe();
        buffer_append_str(((struct buffer*)come_null_check(buf_37, "23interface.c", 57)),optional$2charphbool_value((come_push_stackframe("23interface.c", 57),((struct optional$2charphbool*)(right_value60=make_define_var(type_45,name_44,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_37, "23interface.c", 58)),";\n");
        __freed_obj__ = 0;
        if(name_44 && !__freed_obj__) { name_44 = come_decrement_ref_count(name_44, (void*)0, (void*)0, 0, 0, 0); }
        if(type_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_38 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_37, "23interface.c", 61)),"};\n");
    __freed_obj__ = 0;
    add_come_code_at_source_head(info,"%s",((char*)(right_value61=buffer_to_string(((struct buffer*)come_null_check(buf_37, "23interface.c", 63))))));
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 65))->classes, "23interface.c", 65)),(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string(name_35)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value75=sClass_clone(klass_36)))));
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result71__ = (_Bool)1;
    if(name_35 && !__freed_obj__) { name_35 = come_decrement_ref_count(name_35, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_37 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_37, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
    if(name_35 && !__freed_obj__) { name_35 = come_decrement_ref_count(name_35, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_37 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
struct tuple2$2charphsTypeph* result_39;
struct tuple2$2charphsTypeph* __result36__;
_Bool _if_conditional124;
struct tuple2$2charphsTypeph* __result37__;
struct tuple2$2charphsTypeph* result_40;
struct tuple2$2charphsTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_39, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_40, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional123=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            __freed_obj__ = 0;
            memset(&result_39,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = result_39;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional124=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional124) {
            __result37__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_40,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result38__ = __result_obj__ = result_40;
        __freed_obj__ = 0;
        return __result38__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result39__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result39__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
struct tuple2$2charphsTypeph* result_42;
struct tuple2$2charphsTypeph* __result40__;
_Bool _if_conditional126;
struct tuple2$2charphsTypeph* __result41__;
struct tuple2$2charphsTypeph* result_43;
struct tuple2$2charphsTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_42, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_43, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional125=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            __freed_obj__ = 0;
            memset(&result_42,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = result_42;
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional126=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional126) {
            __result41__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_43,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result42__ = __result_obj__ = result_43;
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
char* default_value_46;
char* __result43__;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_46, 0, sizeof(char*));
            if(_if_conditional127=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional127) {
                __freed_obj__ = 0;
                memset(&default_value_46,0,sizeof(char*));
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = default_value_46;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
            }
            else {
                __result44__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional128=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional128) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional129;
unsigned int hash_65;
unsigned int it_66;
_Bool _while_condtional11;
_Bool _if_conditional142;
void* right_value68;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool same_key_exist_83;
char* it2_86;
_Bool _for_condtionalA3;
void* right_value70;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct map$2charphsClassph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_65, 0, sizeof(unsigned int));
memset(&it_66, 0, sizeof(unsigned int));
memset(&right_value68, 0, sizeof(void*));
memset(&same_key_exist_83, 0, sizeof(_Bool));
memset(&it2_86, 0, sizeof(char*));
memset(&right_value70, 0, sizeof(void*));
        if(_if_conditional129=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional129) {
            map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_65=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_66=hash_65;
        __freed_obj__ = 0;
        while(_while_condtional11=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional142=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_66],            __freed_obj__ = 0, 
            _if_conditional142) {
                if(_if_conditional143=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value68=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_66], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                (right_value68 && right_value68 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional143) {
                    if(_if_conditional144=1,                    __freed_obj__ = 0, 
                    _if_conditional144) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_66]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_66] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_66] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_66], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_66]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_66]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_66]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional164=1,                    __freed_obj__ = 0, 
                    _if_conditional164) {
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_66] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_66], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_66]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_66]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_66++;
                __freed_obj__ = 0;
                if(_if_conditional165=it_66>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional165) {
                    it_66=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional166=it_66==hash_65,                    __freed_obj__ = 0, 
                    _if_conditional166) {
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
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_66]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional167=1,                __freed_obj__ = 0, 
                _if_conditional167) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_66]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_66]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional168=1,                __freed_obj__ = 0, 
                _if_conditional168) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_66]=(struct sClass*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_66]=item;
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
        same_key_exist_83=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_86=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        it2_86=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional173=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value70=string_equals(((char*)come_null_check(it2_86, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),            (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional173) {
                same_key_exist_83=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional174=!same_key_exist_83,        __freed_obj__ = 0, 
        _if_conditional174) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result70__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_47;
void* right_value62;
char** keys_48;
void* right_value63;
struct sClass** items_49;
void* right_value64;
_Bool* item_existance_50;
int len_51;
char* it_54;
_Bool _for_condtionalA2;
struct sClass* default_value_57;
void* right_value66;
struct sClass* it2_61;
unsigned int hash_62;
int n_63;
_Bool _while_condtional10;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* default_value_64;
void* right_value67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_47, 0, sizeof(int));
memset(&right_value62, 0, sizeof(void*));
memset(&keys_48, 0, sizeof(char**));
memset(&right_value63, 0, sizeof(void*));
memset(&items_49, 0, sizeof(struct sClass**));
memset(&right_value64, 0, sizeof(void*));
memset(&item_existance_50, 0, sizeof(_Bool*));
memset(&len_51, 0, sizeof(int));
memset(&it_54, 0, sizeof(char*));
memset(&default_value_57, 0, sizeof(struct sClass*));
memset(&right_value66, 0, sizeof(void*));
memset(&it2_61, 0, sizeof(struct sClass*));
memset(&hash_62, 0, sizeof(unsigned int));
memset(&n_63, 0, sizeof(int));
memset(&default_value_64, 0, sizeof(struct sClass*));
memset(&right_value67, 0, sizeof(void*));
                size_47=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_48=(char**)come_increment_ref_count(((char**)(right_value62=(char**)come_calloc(1, sizeof(char*)*(1*(size_47)), "./comelang2.h", 1370))));
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_49=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value63=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_47)), "./comelang2.h", 1371))));
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_50=(_Bool*)come_increment_ref_count(((_Bool*)(right_value64=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_47)), "./comelang2.h", 1372))));
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_51=0;
                __freed_obj__ = 0;
                for(
                it_54=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA2=                !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA2;                it_54=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_57,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    it2_61=((struct sClass*)(right_value66=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_54,default_value_57)));
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_62=string_get_hash_key(((char*)come_null_check(it_54, "./comelang2.h", 1380)))%size_47;
                    __freed_obj__ = 0;
                    n_63=hash_62;
                    __freed_obj__ = 0;
                    while(_while_condtional10=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        if(_if_conditional139=item_existance_50[n_63],                        __freed_obj__ = 0, 
                        _if_conditional139) {
                            n_63++;
                            __freed_obj__ = 0;
                            if(_if_conditional140=n_63>=size_47,                            __freed_obj__ = 0, 
                            _if_conditional140) {
                                n_63=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional141=n_63==hash_62,                                __freed_obj__ = 0, 
                                _if_conditional141) {
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
                            item_existance_50[n_63]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_48[n_63]=it_54;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_49[n_63]=((struct sClass*)(right_value67=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_54,default_value_64)));
                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_51++;
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
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_48;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_49;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_50;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_47;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_51;
                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional130;
char* result_52;
char* __result45__;
_Bool _if_conditional131;
char* __result46__;
char* result_53;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_52, 0, sizeof(char*));
memset(&result_53, 0, sizeof(char*));
                    if(_if_conditional130=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __freed_obj__ = 0;
                        memset(&result_52,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result45__ = __result_obj__ = result_52;
                        __freed_obj__ = 0;
                        return __result45__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional131=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional131) {
                        __result46__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result46__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_53,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result47__ = __result_obj__ = result_53;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result48__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional132;
char* result_55;
char* __result49__;
_Bool _if_conditional133;
char* __result50__;
char* result_56;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_55, 0, sizeof(char*));
memset(&result_56, 0, sizeof(char*));
                    if(_if_conditional132=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        __freed_obj__ = 0;
                        memset(&result_55,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result49__ = __result_obj__ = result_55;
                        __freed_obj__ = 0;
                        return __result49__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional133=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __result50__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result50__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_56,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result51__ = __result_obj__ = result_56;
                    __freed_obj__ = 0;
                    return __result51__;
                    __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_58;
unsigned int it_59;
_Bool _while_condtional9;
_Bool _if_conditional134;
void* right_value65;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional136;
struct sClass* __result54__;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result55__;
struct sClass* __result56__;
struct sClass* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_58, 0, sizeof(unsigned int));
memset(&it_59, 0, sizeof(unsigned int));
memset(&right_value65, 0, sizeof(void*));
                        hash_58=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_59=hash_58;
                        __freed_obj__ = 0;
                        while(_while_condtional9=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional9) {
                            if(_if_conditional134=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_59],                            __freed_obj__ = 0, 
                            _if_conditional134) {
                                if(_if_conditional136=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value65=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_59], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                (right_value65 && right_value65 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional136) {
                                    __result54__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_59];
                                    __freed_obj__ = 0;
                                    return __result54__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_59++;
                                __freed_obj__ = 0;
                                if(_if_conditional137=it_59>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional137) {
                                    it_59=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional138=it_59==hash_58,                                    __freed_obj__ = 0, 
                                    _if_conditional138) {
                                        __result55__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result55__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result56__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result56__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result57__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional135;
_Bool default_value_60;
_Bool __result52__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_60, 0, sizeof(_Bool));
                                    if(_if_conditional135=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional135) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_60,0,sizeof(_Bool));
                                        __freed_obj__ = 0;
                                        __result52__ = default_value_60;
                                        __freed_obj__ = 0;
                                        return __result52__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result53__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result53__;
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

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_67;
struct list_item$1charp* it_68;
_Bool _while_condtional12;
void* right_value69;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional145;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(int));
memset(&it_68, 0, sizeof(struct list_item$1charp*));
memset(&right_value69, 0, sizeof(void*));
                            it2_67=0;
                            __freed_obj__ = 0;
                            it_68=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional12=it_68!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional12) {
                                if(_if_conditional145=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value69=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_68, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value69 && right_value69 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional145) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_67,it2_67+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_67++;
                                __freed_obj__ = 0;
                                it_68=((struct list_item$1charp*)come_null_check(it_68, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result61__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result61__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
int tmp_69;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list$1charp* __result58__;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1charp* it_72;
int i_73;
_Bool _while_condtional14;
_Bool _if_conditional154;
struct list_item$1charp* prev_it_74;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* it_75;
int i_76;
_Bool _while_condtional15;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* prev_it_77;
struct list_item$1charp* it_78;
struct list_item$1charp* head_prev_it_79;
struct list_item$1charp* tail_it_80;
int i_81;
_Bool _while_condtional16;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list_item$1charp* prev_it_82;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list$1charp* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_69, 0, sizeof(int));
memset(&it_72, 0, sizeof(struct list_item$1charp*));
memset(&i_73, 0, sizeof(int));
memset(&prev_it_74, 0, sizeof(struct list_item$1charp*));
memset(&it_75, 0, sizeof(struct list_item$1charp*));
memset(&i_76, 0, sizeof(int));
memset(&prev_it_77, 0, sizeof(struct list_item$1charp*));
memset(&it_78, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_79, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_80, 0, sizeof(struct list_item$1charp*));
memset(&i_81, 0, sizeof(int));
memset(&prev_it_82, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional146=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional146) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional147=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional147) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional148=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional148) {
                                            tmp_69=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_69;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional149=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            __result58__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result58__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional153=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional153) {
                                                it_72=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_73=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_72!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    if(_if_conditional154=i_73<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional154) {
                                                        prev_it_74=it_72;
                                                        __freed_obj__ = 0;
                                                        it_72=((struct list_item$1charp*)come_null_check(it_72, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_73++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_74 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional155=i_73==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional155) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_72;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_72=((struct list_item$1charp*)come_null_check(it_72, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_73++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional156=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional156) {
                                                    it_75=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_76=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional15=it_75!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional15) {
                                                        if(_if_conditional157=i_76==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional157) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_75, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional158=i_76>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional158) {
                                                            prev_it_77=it_75;
                                                            __freed_obj__ = 0;
                                                            it_75=((struct list_item$1charp*)come_null_check(it_75, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_76++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_77 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_75=((struct list_item$1charp*)come_null_check(it_75, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_76++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_78=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_79=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_80=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_81=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_78!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        if(_if_conditional159=i_81==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional159) {
                                                            head_prev_it_79=((struct list_item$1charp*)come_null_check(it_78, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional160=i_81==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional160) {
                                                            tail_it_80=it_78;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional161=i_81>=head&&i_81<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional161) {
                                                            prev_it_82=it_78;
                                                            __freed_obj__ = 0;
                                                            it_78=((struct list_item$1charp*)come_null_check(it_78, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_81++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_82 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_78=((struct list_item$1charp*)come_null_check(it_78, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_81++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional162=head_prev_it_79!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional162) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_79, "./comelang2.h", 620))->next=tail_it_80;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional163=tail_it_80!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional163) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_80, "./comelang2.h", 623))->prev=head_prev_it_79;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result60__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result60__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_70;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_71;
struct list$1charp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_70, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_71, 0, sizeof(struct list_item$1charp*));
                                                it_70=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional13=it_70!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional13) {
                                                    prev_it_71=it_70;
                                                    __freed_obj__ = 0;
                                                    it_70=((struct list_item$1charp*)come_null_check(it_70, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_71 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result59__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result59__;
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
_Bool _if_conditional169;
char* result_84;
char* __result62__;
_Bool _if_conditional170;
char* __result63__;
char* result_85;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(char*));
memset(&result_85, 0, sizeof(char*));
            if(_if_conditional169=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional169) {
                __freed_obj__ = 0;
                memset(&result_84,0,sizeof(char*));
                __freed_obj__ = 0;
                __result62__ = __result_obj__ = result_84;
                __freed_obj__ = 0;
                return __result62__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional170=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional170) {
                __result63__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result63__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_85,0,sizeof(char*));
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = result_85;
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result65__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional171;
char* result_87;
char* __result66__;
_Bool _if_conditional172;
char* __result67__;
char* result_88;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_87, 0, sizeof(char*));
memset(&result_88, 0, sizeof(char*));
            if(_if_conditional171=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional171) {
                __freed_obj__ = 0;
                memset(&result_87,0,sizeof(char*));
                __freed_obj__ = 0;
                __result66__ = __result_obj__ = result_87;
                __freed_obj__ = 0;
                return __result66__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional172=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional172) {
                __result67__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result67__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_88,0,sizeof(char*));
            __freed_obj__ = 0;
            __result68__ = __result_obj__ = result_88;
            __freed_obj__ = 0;
            return __result68__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional175;
void* right_value71;
struct list_item$1charp* litem_89;
_Bool _if_conditional176;
void* right_value72;
struct list_item$1charp* litem_90;
void* right_value73;
struct list_item$1charp* litem_91;
struct list$1charp* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1charp*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1charp*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional175=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional175) {
                    litem_89=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value71=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_89, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_89, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_89, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_89;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_89;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional176=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional176) {
                        litem_90=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value72=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_90, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_90, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_90, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_90;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_90;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_91=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value73=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_91, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_91, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_91, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_91;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_91;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result69__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value76;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* result_type_93;
char* var_name_94;
_Bool err_95;
_Bool _if_conditional181;
void* right_value77;
char* fun_name_96;
void* right_value78;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_98;
struct list$1charph* param_names_99;
struct list$1charph* param_default_parametors_100;
_Bool var_args_101;
void* right_value85;
void* right_value86;
void* right_value93;
void* right_value94;
void* right_value95;
struct sType* type_118;
void* right_value99;
struct list$1sTypeph* __dec_obj48;
void* right_value103;
struct list$1charph* __dec_obj49;
void* right_value104;
void* right_value106;
void* right_value107;
struct tuple1$1sTypeph* __dec_obj51;
void* right_value108;
void* right_value111;
struct tuple2$2sTypephcharph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&result_type_93, 0, sizeof(struct sType*));
memset(&var_name_94, 0, sizeof(char*));
memset(&err_95, 0, sizeof(_Bool));
memset(&result_type_93, 0, sizeof(struct sType*));
memset(&var_name_94, 0, sizeof(char*));
memset(&err_95, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&param_types_98, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_99, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_100, 0, sizeof(struct list$1charph*));
memset(&var_args_101, 0, sizeof(_Bool));
memset(&param_types_98, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_99, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_100, 0, sizeof(struct list$1charph*));
memset(&var_args_101, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&type_118, 0, sizeof(struct sType*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    come_clear_stackframe();
    multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("23interface.c", 72),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value76=parse_type(info,(_Bool)0,(_Bool)1)))));
    result_type_93=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
    var_name_94=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
    err_95=multiple_assgin_var2->v3;
    come_pop_stackframe();
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional181=!err_95,    __freed_obj__ = 0, 
    _if_conditional181) {
        printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "23interface.c", 74))->sname,((struct sInfo*)come_null_check(info, "23interface.c", 74))->sline);
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    fun_name_96=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("23interface.c", 78),((struct optional$2charphbool*)(right_value77=parse_word(info))))));
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("23interface.c", 80),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value78=parse_params(info)))));
    param_types_98=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
    param_names_99=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
    param_default_parametors_100=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
    var_args_101=multiple_assgin_var3->v4;
    come_pop_stackframe();
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_insert(((struct list$1sTypeph*)come_null_check(param_types_98, "23interface.c", 82)),0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 82)))),"void*",(_Bool)0,info)))));
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1charph_insert(((struct list$1charph*)come_null_check(param_names_99, "23interface.c", 83)),0,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("self")))));
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 85)))),"lambda",(_Bool)0,info))));
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sType*)come_null_check(type_118, "23interface.c", 87))->mParamTypes;
    ((struct sType*)come_null_check(type_118, "23interface.c", 87))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(param_types_98))));
    if(__dec_obj48) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj49=((struct sType*)come_null_check(type_118, "23interface.c", 88))->mParamNames;
    ((struct sType*)come_null_check(type_118, "23interface.c", 88))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charphp_clone(param_names_99))));
    if(__dec_obj49) { come_call_finalizer(list$1charph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_118, "23interface.c", 89))->mVarArgs=var_args_101;
    __freed_obj__ = 0;
    __dec_obj51=((struct sType*)come_null_check(type_118, "23interface.c", 90))->mResultType;
    ((struct sType*)come_null_check(type_118, "23interface.c", 90))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value107=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value104=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 90)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(result_type_93))))))));
    if(__dec_obj51) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value111=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value108=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 92)))),(struct sType*)come_increment_ref_count(type_118),(char*)come_increment_ref_count(fun_name_96))));
    if(result_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_94 && !__freed_obj__) { var_name_94 = come_decrement_ref_count(var_name_94, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_96 && !__freed_obj__) { fun_name_96 = come_decrement_ref_count(fun_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_98 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_100 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(result_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_94 && !__freed_obj__) { var_name_94 = come_decrement_ref_count(var_name_94, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_96 && !__freed_obj__) { fun_name_96 = come_decrement_ref_count(fun_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_98 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_99 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_100 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional177;
struct tuple3$3sTypephcharphbool* default_value_92;
struct tuple3$3sTypephcharphbool* __result72__;
struct tuple3$3sTypephcharphbool* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_92, 0, sizeof(struct tuple3$3sTypephcharphbool*));
        if(_if_conditional177=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional177) {
            __freed_obj__ = 0;
            memset(&default_value_92,0,sizeof(struct tuple3$3sTypephcharphbool*));
            __freed_obj__ = 0;
            __result72__ = __result_obj__ = default_value_92;
            __freed_obj__ = 0;
            return __result72__;
            __freed_obj__ = 0;
        }
        else {
            __result73__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional178=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional178) {
            if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional179;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional179=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional180=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional180) {
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_97;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result74__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_97, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
        if(_if_conditional182=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional182) {
            __freed_obj__ = 0;
            memset(&default_value_97,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
            __freed_obj__ = 0;
            __result74__ = __result_obj__ = default_value_97;
            __freed_obj__ = 0;
            return __result74__;
            __freed_obj__ = 0;
        }
        else {
            __result75__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result75__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional183=self!=((void*)0)&&((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional183) {
            if(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional184=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional184) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional185=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional185) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional186=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 3))->v3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional186) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct list$1sTypeph* __result77__;
_Bool _if_conditional192;
void* right_value82;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj39;
_Bool _if_conditional193;
void* right_value83;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj40;
struct list_item$1sTypeph* it_107;
int i_108;
_Bool _while_condtional17;
_Bool _if_conditional194;
void* right_value84;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj41;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value83, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_107, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_108, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional187=position<0,        __freed_obj__ = 0, 
        _if_conditional187) {
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 416))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional188=position<0,        __freed_obj__ = 0, 
        _if_conditional188) {
            position=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional189=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 427))->len==0||position>=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 427))->len,        __freed_obj__ = 0, 
        _if_conditional189) {
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 423)),(struct sType*)come_increment_ref_count(item));
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional192=position==0,        __freed_obj__ = 0, 
        _if_conditional192) {
            litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 428))));
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_105, "./comelang2.h", 430))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_105, "./comelang2.h", 431))->next=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 431))->head;
            __freed_obj__ = 0;
            __dec_obj39=((struct list_item$1sTypeph*)come_null_check(litem_105, "./comelang2.h", 432))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_105, "./comelang2.h", 432))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 434))->head, "./comelang2.h", 434))->prev=litem_105;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 435))->head=litem_105;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 437))->len++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional193=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 473))->len==1,            __freed_obj__ = 0, 
            _if_conditional193) {
                litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 440))));
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_106, "./comelang2.h", 442))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 442))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_106, "./comelang2.h", 443))->next=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 443))->tail;
                __freed_obj__ = 0;
                __dec_obj40=((struct list_item$1sTypeph*)come_null_check(litem_106, "./comelang2.h", 444))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_106, "./comelang2.h", 444))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 446))->tail, "./comelang2.h", 446))->prev=litem_106;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 447))->head, "./comelang2.h", 447))->next=litem_106;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 449))->len++;
                __freed_obj__ = 0;
            }
            else {
                it_107=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 452))->head;
                __freed_obj__ = 0;
                i_108=0;
                __freed_obj__ = 0;
                while(_while_condtional17=it_107!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional17) {
                    if(_if_conditional194=position==i_108,                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 456))));
                        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 458))->prev=((struct list_item$1sTypeph*)come_null_check(it_107, "./comelang2.h", 458))->prev;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 459))->next=it_107;
                        __freed_obj__ = 0;
                        __dec_obj41=((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 460))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 460))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_107, "./comelang2.h", 462))->prev, "./comelang2.h", 462))->next=litem_109;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(it_107, "./comelang2.h", 463))->prev=litem_109;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 465))->len++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_107=((struct list_item$1sTypeph*)come_null_check(it_107, "./comelang2.h", 468))->next;
                    __freed_obj__ = 0;
                    i_108++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result78__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result78__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional190;
void* right_value79;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj36;
_Bool _if_conditional191;
void* right_value80;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj37;
void* right_value81;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj38;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional190=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional190) {
                    litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value79=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_102, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_102, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj36=((struct list_item$1sTypeph*)come_null_check(litem_102, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_102, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_102;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_102;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional191=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional191) {
                        litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value80=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_103, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_103, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj37=((struct list_item$1sTypeph*)come_null_check(litem_103, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_103, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_103;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_103;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value81=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_104, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_104, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj38=((struct list_item$1sTypeph*)come_null_check(litem_104, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_104, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_104;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_104;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result76__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct list$1charph* __result80__;
_Bool _if_conditional200;
void* right_value90;
struct list_item$1charph* litem_113;
char* __dec_obj45;
_Bool _if_conditional201;
void* right_value91;
struct list_item$1charph* litem_114;
char* __dec_obj46;
struct list_item$1charph* it_115;
int i_116;
_Bool _while_condtional18;
_Bool _if_conditional202;
void* right_value92;
struct list_item$1charph* litem_117;
char* __dec_obj47;
struct list$1charph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
memset(&it_115, 0, sizeof(struct list_item$1charph*));
memset(&i_116, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1charph*));
        if(_if_conditional195=position<0,        __freed_obj__ = 0, 
        _if_conditional195) {
            position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 416))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional196=position<0,        __freed_obj__ = 0, 
        _if_conditional196) {
            position=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional197=((struct list$1charph*)come_null_check(self, "./comelang2.h", 427))->len==0||position>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 427))->len,        __freed_obj__ = 0, 
        _if_conditional197) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 423)),(char*)come_increment_ref_count(item));
            __freed_obj__ = 0;
            __result80__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result80__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional200=position==0,        __freed_obj__ = 0, 
        _if_conditional200) {
            litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 428))));
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(litem_113, "./comelang2.h", 430))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(litem_113, "./comelang2.h", 431))->next=((struct list$1charph*)come_null_check(self, "./comelang2.h", 431))->head;
            __freed_obj__ = 0;
            __dec_obj45=((struct list_item$1charph*)come_null_check(litem_113, "./comelang2.h", 432))->item;
            ((struct list_item$1charph*)come_null_check(litem_113, "./comelang2.h", 432))->item=(char*)come_increment_ref_count(item);
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 434))->head, "./comelang2.h", 434))->prev=litem_113;
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 435))->head=litem_113;
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 437))->len++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional201=((struct list$1charph*)come_null_check(self, "./comelang2.h", 473))->len==1,            __freed_obj__ = 0, 
            _if_conditional201) {
                litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 440))));
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_114, "./comelang2.h", 442))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 442))->head;
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_114, "./comelang2.h", 443))->next=((struct list$1charph*)come_null_check(self, "./comelang2.h", 443))->tail;
                __freed_obj__ = 0;
                __dec_obj46=((struct list_item$1charph*)come_null_check(litem_114, "./comelang2.h", 444))->item;
                ((struct list_item$1charph*)come_null_check(litem_114, "./comelang2.h", 444))->item=(char*)come_increment_ref_count(item);
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 446))->tail, "./comelang2.h", 446))->prev=litem_114;
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 447))->head, "./comelang2.h", 447))->next=litem_114;
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 449))->len++;
                __freed_obj__ = 0;
            }
            else {
                it_115=((struct list$1charph*)come_null_check(self, "./comelang2.h", 452))->head;
                __freed_obj__ = 0;
                i_116=0;
                __freed_obj__ = 0;
                while(_while_condtional18=it_115!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional18) {
                    if(_if_conditional202=position==i_116,                    __freed_obj__ = 0, 
                    _if_conditional202) {
                        litem_117=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 456))));
                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 458))->prev=((struct list_item$1charph*)come_null_check(it_115, "./comelang2.h", 458))->prev;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 459))->next=it_115;
                        __freed_obj__ = 0;
                        __dec_obj47=((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 460))->item;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 460))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_115, "./comelang2.h", 462))->prev, "./comelang2.h", 462))->next=litem_117;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(it_115, "./comelang2.h", 463))->prev=litem_117;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 465))->len++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_115=((struct list_item$1charph*)come_null_check(it_115, "./comelang2.h", 468))->next;
                    __freed_obj__ = 0;
                    i_116++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result81__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result81__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional198;
void* right_value87;
struct list_item$1charph* litem_110;
char* __dec_obj42;
_Bool _if_conditional199;
void* right_value88;
struct list_item$1charph* litem_111;
char* __dec_obj43;
void* right_value89;
struct list_item$1charph* litem_112;
char* __dec_obj44;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
memset(&right_value88, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
memset(&right_value89, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional198=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional198) {
                    litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_110, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_110, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj42=((struct list_item$1charph*)come_null_check(litem_110, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_110, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_110;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_110;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional199=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional199) {
                        litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value88=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_111, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_111, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj43=((struct list_item$1charph*)come_null_check(litem_111, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_111, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_111;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_111;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value89=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_112, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_112, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj44=((struct list_item$1charph*)come_null_check(litem_112, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_112, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_112;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_112;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result79__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional203;
struct list$1sTypeph* __result82__;
void* right_value96;
void* right_value97;
struct list$1sTypeph* result_119;
struct list_item$1sTypeph* it_120;
_Bool _while_condtional19;
void* right_value98;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value98, 0, sizeof(void*));
        if(_if_conditional203=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            __result82__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result82__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_119=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value96=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_120=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional19=it_120!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional19) {
            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_119, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_120, "./comelang2.h", 192))->item)))));
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_120=((struct list_item$1sTypeph*)come_null_check(it_120, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result83__ = __result_obj__ = result_119;
        if(result_119 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result83__;
        __freed_obj__ = 0;
        if(result_119 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional204;
struct list$1charph* __result84__;
void* right_value100;
void* right_value101;
struct list$1charph* result_121;
struct list_item$1charph* it_122;
_Bool _while_condtional20;
void* right_value102;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct list$1charph*));
memset(&it_122, 0, sizeof(struct list_item$1charph*));
memset(&right_value102, 0, sizeof(void*));
        if(_if_conditional204=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional204) {
            __result84__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result84__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_121=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value100=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_122=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional20=it_122!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional20) {
            list$1charph_add(((struct list$1charph*)come_null_check(result_121, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value102=string_clone(((struct list_item$1charph*)come_null_check(it_122, "./comelang2.h", 192))->item)))));
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_122=((struct list_item$1charph*)come_null_check(it_122, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result85__ = __result_obj__ = result_121;
        if(result_121 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
        if(result_121 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value105;
struct sType* __dec_obj50;
struct tuple1$1sTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
        __dec_obj50=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(v1))));
        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result86__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value109;
struct sType* __dec_obj52;
void* right_value110;
char* __dec_obj53;
struct tuple2$2sTypephcharph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
        __dec_obj52=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(v1))));
        if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj53=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(v2))));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result87__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result87__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional205=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional205) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional206=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional207;
void* right_value112;
char* type_name_123;
struct sClass* klass_124;
void* right_value113;
_Bool _if_conditional208;
void* right_value114;
void* right_value115;
struct sClass* __dec_obj54;
void* right_value116;
void* right_value117;
struct sClass* __dec_obj55;
void* right_value118;
void* right_value119;
void* right_value120;
struct sType* voidp_126;
void* right_value124;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
struct sType* finalizer_130;
void* right_value131;
struct sType* __list_values1___131[1];
void* right_value132;
void* right_value133;
struct list$1sTypeph* __dec_obj61;
void* right_value134;
char* __list_values2___133[1];
void* right_value135;
void* right_value136;
struct list$1charph* __dec_obj62;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj63;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
struct sType* cloner_135;
void* right_value146;
struct sType* __list_values3___136[1];
void* right_value147;
void* right_value148;
struct list$1sTypeph* __dec_obj64;
void* right_value149;
char* __list_values4___137[1];
void* right_value150;
void* right_value151;
struct list$1charph* __dec_obj65;
void* right_value152;
void* right_value153;
void* right_value154;
struct tuple1$1sTypeph* __dec_obj66;
void* right_value155;
void* right_value156;
void* right_value157;
_Bool _while_condtional21;
void* right_value158;
struct tuple2$2sTypephcharph* multiple_assgin_var4;
struct sType* type2_138;
char* name_139;
void* right_value159;
void* right_value160;
void* right_value161;
_Bool _if_conditional212;
void* right_value162;
void* right_value163;
void* right_value164;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value169;
struct sNode* __result97__;
void* right_value170;
void* right_value171;
struct sNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&type_name_123, 0, sizeof(char*));
memset(&klass_124, 0, sizeof(struct sClass*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&voidp_126, 0, sizeof(struct sType*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&finalizer_130, 0, sizeof(struct sType*));
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
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&cloner_135, 0, sizeof(struct sType*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&type2_138, 0, sizeof(struct sType*));
memset(&name_139, 0, sizeof(char*));
memset(&type2_138, 0, sizeof(struct sType*));
memset(&name_139, 0, sizeof(char*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    if(_if_conditional207=string_operator_equals(buf,"interface")||string_operator_equals(buf,"protocol"),    __freed_obj__ = 0, 
    _if_conditional207) {
        come_clear_stackframe();
        type_name_123=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("23interface.c", 98),((struct optional$2charphbool*)(right_value112=parse_word(info))))));
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional208=((struct sClass*)(right_value113=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 108))->classes, "23interface.c", 108)),type_name_123,((void*)0))))==((void*)0),        (right_value113 && right_value113 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional208) {
            __dec_obj54=klass_124;
            klass_124=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value115=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value114=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 102)))),type_name_123,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            if(__dec_obj54) { come_call_finalizer(sClass_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj55=klass_124;
            klass_124=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value117=sClass_clone(((struct sClass*)(right_value116=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 105))->classes, "23interface.c", 105)),type_name_123,((void*)0))))))));
            if(__dec_obj55) { come_call_finalizer(sClass_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("23interface.c", 108),((struct optional$2intbool*)(right_value118=expected_next_character(123,info)))));
        come_pop_stackframe();
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        voidp_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value119=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 110)))),"void",(_Bool)0,info))));
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(voidp_126, "23interface.c", 111))->mPointerNum++;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_124, "23interface.c", 113))->mFields, "23interface.c", 113)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value128=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value124=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 113)))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_126))))));
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        finalizer_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 115)))),"lambda",(_Bool)0,info))));
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values1___131[0]=come_increment_ref_count(((struct sType*)(right_value131=sType_clone(voidp_126))));
}        __dec_obj61=((struct sType*)come_null_check(finalizer_130, "23interface.c", 117))->mParamTypes;
        ((struct sType*)come_null_check(finalizer_130, "23interface.c", 117))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value133=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 117)))),1,__list_values1___131))));
        if(__dec_obj61) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values2___133[0]=come_increment_ref_count(((char*)(right_value134=__builtin_string("self"))));
}        __dec_obj62=((struct sType*)come_null_check(finalizer_130, "23interface.c", 118))->mParamNames;
        ((struct sType*)come_null_check(finalizer_130, "23interface.c", 118))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 118)))),1,__list_values2___133))));
        if(__dec_obj62) { come_call_finalizer(list$1charph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(finalizer_130, "23interface.c", 119))->mVarArgs=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj63=((struct sType*)come_null_check(finalizer_130, "23interface.c", 120))->mResultType;
        ((struct sType*)come_null_check(finalizer_130, "23interface.c", 120))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 120)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 120)))),"void",(_Bool)0,info))))))));
        if(__dec_obj63) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_124, "23interface.c", 122))->mFields, "23interface.c", 122)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 122)))),(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_130))))));
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        cloner_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 124)))),"lambda",(_Bool)0,info))));
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values3___136[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_clone(voidp_126))));
}        __dec_obj64=((struct sType*)come_null_check(cloner_135, "23interface.c", 126))->mParamTypes;
        ((struct sType*)come_null_check(cloner_135, "23interface.c", 126))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 126)))),1,__list_values3___136))));
        if(__dec_obj64) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values4___137[0]=come_increment_ref_count(((char*)(right_value149=__builtin_string("self"))));
}        __dec_obj65=((struct sType*)come_null_check(cloner_135, "23interface.c", 127))->mParamNames;
        ((struct sType*)come_null_check(cloner_135, "23interface.c", 127))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 127)))),1,__list_values4___137))));
        if(__dec_obj65) { come_call_finalizer(list$1charph_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(cloner_135, "23interface.c", 128))->mVarArgs=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj66=((struct sType*)come_null_check(cloner_135, "23interface.c", 129))->mResultType;
        ((struct sType*)come_null_check(cloner_135, "23interface.c", 129))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value152=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 129)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(voidp_126))))))));
        if(__dec_obj66) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_124, "23interface.c", 131))->mFields, "23interface.c", 131)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value157=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 131)))),(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_135))))));
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        while(_while_condtional21=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional21) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            multiple_assgin_var4=((struct tuple2$2sTypephcharph*)(right_value158=parse_interface_function(info)));
            type2_138=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_139=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            optional$2intbool_value((come_push_stackframe("23interface.c", 136),((struct optional$2intbool*)(right_value159=expected_next_character(59,info)))));
            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_124, "23interface.c", 138))->mFields, "23interface.c", 138)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value161=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value160=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 138)))),(char*)come_increment_ref_count(name_139),(struct sType*)come_increment_ref_count(type2_138))))));
            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional212=*((struct sInfo*)come_null_check(info, "23interface.c", 147))->p==125,            __freed_obj__ = 0, 
            _if_conditional212) {
                ((struct sInfo*)come_null_check(info, "23interface.c", 143))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_139 && !__freed_obj__) { name_139 = come_decrement_ref_count(name_139, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_139 && !__freed_obj__) { name_139 = come_decrement_ref_count(name_139, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 150);
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value164=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value162=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 150)))),(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(type_name_123)))),(struct sClass*)come_increment_ref_count(klass_124),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sInterfaceNode_sline;
        _inf_value1->sname=(void*)sInterfaceNode_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result97__ = __result_obj__ = ((struct sNode*)(right_value169=_inf_value1));
        if(type_name_123 && !__freed_obj__) { type_name_123 = come_decrement_ref_count(type_name_123, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_124 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_124, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,voidp_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,finalizer_130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,cloner_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
        if(type_name_123 && !__freed_obj__) { type_name_123 = come_decrement_ref_count(type_name_123, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_124 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_124, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,voidp_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,finalizer_130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,cloner_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result98__ = __result_obj__ = ((struct sNode*)(right_value171=top_level_v1((char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional209;
int default_value_125;
int __result89__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_125, 0, sizeof(int));
            if(_if_conditional209=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                __freed_obj__ = 0;
                memset(&default_value_125,0,sizeof(int));
                __freed_obj__ = 0;
                __result89__ = default_value_125;
                __freed_obj__ = 0;
                return __result89__;
                __freed_obj__ = 0;
            }
            else {
                __result90__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result90__;
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

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional210;
void* right_value121;
struct list_item$1tuple2$2charphsTypephph* litem_127;
struct tuple2$2charphsTypeph* __dec_obj56;
_Bool _if_conditional211;
void* right_value122;
struct list_item$1tuple2$2charphsTypephph* litem_128;
struct tuple2$2charphsTypeph* __dec_obj57;
void* right_value123;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj58;
struct list$1tuple2$2charphsTypephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional210=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional210) {
                litem_127=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value121=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj56=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 276))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj56) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_127;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_127;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional211=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional211) {
                    litem_128=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value122=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj57=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 286))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj57) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_128;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_128;
                    __freed_obj__ = 0;
                }
                else {
                    litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value123=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj58=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 296))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj58) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_129;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_129;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result91__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result91__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value125;
char* __dec_obj59;
void* right_value126;
struct sType* __dec_obj60;
struct tuple2$2charphsTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
            __dec_obj59=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(v1))));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj60=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(v2))));
            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result92__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result92__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_132;
_Bool _for_condtionalA4;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_132, 0, sizeof(int));
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 160))->len=0;
            __freed_obj__ = 0;
            for(
            i_132=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_132<num_value ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_132++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 163)),values[i_132]);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result93__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_134;
_Bool _for_condtionalA5;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_134, 0, sizeof(int));
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->len=0;
            __freed_obj__ = 0;
            for(
            i_134=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_134<num_value ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_134++ ,            __freed_obj__ = 0, 
            0            ){
                list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 163)),values[i_134]);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result94__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result94__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional213=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->name!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name && !__freed_obj__) { ((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name = come_decrement_ref_count(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional214=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->klass!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->klass, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname && !__freed_obj__) { ((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname = come_decrement_ref_count(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional216;
struct sInterfaceNode* __result95__;
void* right_value165;
struct sInterfaceNode* result_140;
_Bool _if_conditional217;
void* right_value166;
char* __dec_obj67;
_Bool _if_conditional218;
void* right_value167;
struct sClass* __dec_obj68;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value168;
char* __dec_obj69;
struct sInterfaceNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct sInterfaceNode*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
            if(_if_conditional216=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional216) {
                __result95__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result95__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_140=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value165=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3))));
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5))->name!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                __dec_obj67=((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 4))->name;
                ((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value166=string_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 4))->name))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6))->klass!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                __dec_obj68=((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 5))->klass;
                ((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 5))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value167=sClass_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5))->klass))));
                if(__dec_obj68) { come_call_finalizer(sClass_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                ((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 6))->sline=((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                __dec_obj69=((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 7))->sname;
                ((struct sInterfaceNode*)come_null_check(result_140, "sInterfaceNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 7))->sname))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result96__ = __result_obj__ = result_140;
            if(result_140 && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result96__;
            __freed_obj__ = 0;
            if(result_140 && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

