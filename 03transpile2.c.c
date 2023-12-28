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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
void show_type(struct sType* type, struct sInfo* info);

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
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
static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

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
_Bool output_source_file_v3(struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
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

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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

void come_init_v3(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
void* right_value1;
struct buffer* buf_0;
char* class_name_1;
_Bool _if_conditional1;
_Bool _if_conditional2;
void* right_value2;
void* right_value3;
void* right_value4;
struct optional$2charphbool* __result2__;
void* right_value5;
struct CVALUE* come_value_2;
void* right_value6;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value7;
char* result_type_str_9;
int j_10;
struct list$1sTypeph* o2_saved_11;
struct sType* it_14;
_Bool _for_condtionalA1;
void* right_value8;
char* param_type_str_17;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value9;
void* right_value10;
void* right_value11;
struct optional$2charphbool* __result12__;
_Bool _if_conditional51;
int i_18;
_Bool _for_condtionalA2;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value12;
void* right_value13;
void* right_value14;
struct optional$2charphbool* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&buf_0, 0, sizeof(struct buffer*));
memset(&class_name_1, 0, sizeof(char*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&come_value_2, 0, sizeof(struct CVALUE*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_type_str_9, 0, sizeof(char*));
memset(&j_10, 0, sizeof(int));
memset(&o2_saved_11, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct sType*));
memset(&right_value8, 0, sizeof(void*));
memset(&param_type_str_17, 0, sizeof(char*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&i_18, 0, sizeof(int));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    buf_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    class_name_1=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 17))->mClass, "03transpile2.c", 17))->mName;
    __freed_obj__ = 0;
    if(_if_conditional1=((struct sType*)come_null_check(type, "03transpile2.c", 31))->mAlignas,    __freed_obj__ = 0, 
    _if_conditional1) {
        if(_if_conditional2=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional2) {
            printf("_Alignas error\n");
            __freed_obj__ = 0;
            __result2__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 22), ((struct optional$2charphbool*)(right_value4=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value3=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 22))),(char*)come_increment_ref_count(((char*)(right_value2=__builtin_string("")))),(_Bool)0))));
            if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result2__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_2=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value5=get_value_from_stack(-1,info))));
        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 28)),((char*)(right_value6=xsprintf("_Alignas(%s) ",((struct CVALUE*)come_null_check(come_value_2, "03transpile2.c", 28))->c_value))));
        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_2 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_2, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional22=((struct sType*)come_null_check(type, "03transpile2.c", 35))->mStatic&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mStruct&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mUnion,    __freed_obj__ = 0, 
    _if_conditional22) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 32)),"static ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional23=((struct sType*)come_null_check(type, "03transpile2.c", 39))->mConstant,    __freed_obj__ = 0, 
    _if_conditional23) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 36)),"const ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional24=((struct sType*)come_null_check(type, "03transpile2.c", 44))->mUnsigned,    __freed_obj__ = 0, 
    _if_conditional24) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 40)),"unsigned ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional25=((struct sType*)come_null_check(type, "03transpile2.c", 48))->mShort,    __freed_obj__ = 0, 
    _if_conditional25) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 45)),"short ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional26=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"va_list"),    __freed_obj__ = 0, 
    _if_conditional26) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 49)),"va_list");
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional27=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"__builtin_va_list"),        __freed_obj__ = 0, 
        _if_conditional27) {
            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 52)),"__builtin_va_list");
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional28=charp_operator_equals(class_name_1,"__builtin_va_list"),            __freed_obj__ = 0, 
            _if_conditional28) {
                if(_if_conditional29=in_header,                __freed_obj__ = 0, 
                _if_conditional29) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 56)),class_name_1);
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 59)),"va_list");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional30=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mStruct,                __freed_obj__ = 0, 
                _if_conditional30) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 63)),"struct ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 64)),class_name_1);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional31=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mUnion,                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 67)),"union ");
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 68)),class_name_1);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional32=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mEnum,                        __freed_obj__ = 0, 
                        _if_conditional32) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 71)),"enum ");
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 72)),class_name_1);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional33=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLongLong,                            __freed_obj__ = 0, 
                            _if_conditional33) {
                                if(_if_conditional34=charp_operator_equals(class_name_1,"int"),                                __freed_obj__ = 0, 
                                _if_conditional34) {
                                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 76)),"long long int");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional35=charp_operator_equals(class_name_1,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional35) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 79)),"long long");
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional36=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLong,                                __freed_obj__ = 0, 
                                _if_conditional36) {
                                    if(_if_conditional37=charp_operator_equals(class_name_1,"int"),                                    __freed_obj__ = 0, 
                                    _if_conditional37) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 84)),"long int");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional38=charp_operator_equals(class_name_1,"long"),                                        __freed_obj__ = 0, 
                                        _if_conditional38) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 87)),"long long");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional39=charp_operator_equals(class_name_1,"double"),                                            __freed_obj__ = 0, 
                                            _if_conditional39) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 90)),"long double");
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional40=charp_operator_equals(class_name_1,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional40) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 94)),"long");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional41=charp_operator_equals(class_name_1,"__uint128_t"),                                        __freed_obj__ = 0, 
                                        _if_conditional41) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 97)),"__uint128_t");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional42=charp_operator_equals(class_name_1,"bool"),                                            __freed_obj__ = 0, 
                                            _if_conditional42) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 100)),"_Bool");
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional43=charp_operator_equals(class_name_1,"lambda"),                                                __freed_obj__ = 0, 
                                                _if_conditional43) {
                                                    result_type_str_9=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 103),((struct optional$2charphbool*)(right_value7=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 103))->mResultType, "03transpile2.c", 103))->v1,in_header,(_Bool)0,(_Bool)0,info))))));
                                                    come_pop_stackframe();
                                                    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 104)),result_type_str_9);
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 105))," (*)(");
                                                    __freed_obj__ = 0;
                                                    j_10=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    o2_saved_11=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 118))->mParamTypes)),it_14=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_11), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_11), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA1;                                                    it_14=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_11), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        param_type_str_17=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 109),((struct optional$2charphbool*)(right_value8=make_type_name_string(it_14,in_header,(_Bool)0,(_Bool)0,info))))));
                                                        come_pop_stackframe();
                                                        if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 111)),param_type_str_17);
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional49=j_10!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 116))->mParamTypes, "03transpile2.c", 116)))-1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional49) {
                                                            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 114)),",");
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        j_10++;
                                                        __freed_obj__ = 0;
                                                        if(param_type_str_17 && !__freed_obj__) { param_type_str_17 = come_decrement_ref_count(param_type_str_17, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_11 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 118)),")");
                                                    __freed_obj__ = 0;
                                                    if(result_type_str_9 && !__freed_obj__) { result_type_str_9 = come_decrement_ref_count(result_type_str_9, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    if(_if_conditional50=class_name_1==((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional50) {
                                                        err_msg(info,"class name is null");
                                                        __freed_obj__ = 0;
                                                        __result12__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 123), ((struct optional$2charphbool*)(right_value11=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value10=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 123))),(char*)come_increment_ref_count(((char*)(right_value9=__builtin_string("")))),(_Bool)0))));
                                                        if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
                                                        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
                                                        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result12__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 125)),class_name_1);
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
    if(_if_conditional51=((struct sType*)come_null_check(type, "03transpile2.c", 134))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_1,"lambda")&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional51) {
        for(
        i_18=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_18<((struct sType*)come_null_check(type, "03transpile2.c", 132))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_18++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 130)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional52=array_cast_pointer&&list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mArrayNum, "03transpile2.c", 138)))>0&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional52) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 135)),"*");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional53=((struct sType*)come_null_check(type, "03transpile2.c", 142))->mRestrict,    __freed_obj__ = 0, 
    _if_conditional53) {
        buffer_append_str(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 139)),"restrict");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = ((struct optional$2charphbool*)(right_value14=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value13=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 142)))),(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(((struct buffer*)come_null_check(buf_0, "03transpile2.c", 142)))))),(_Bool)1)));
    if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
    if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj1;
struct optional$2charphbool* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj1=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result1__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result1__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional3=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional3) {
                        if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional4=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional4) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional5=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional5) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional6) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional8) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional9) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional10) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional12) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional14) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional15) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional17) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional19) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional20) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional7) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_3;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
                            it_3=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional1=it_3!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional1) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional11) {
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_5;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
                            it_5=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional2=it_5!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional2) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional13) {
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_7;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
                            it_7=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional3=it_7!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional3) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional16) {
                                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional44;
char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional44=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                                                        __freed_obj__ = 0, 
                                                        _if_conditional44) {
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
                                                        __result3__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                                                        __freed_obj__ = 0;
                                                        return __result3__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional45;
struct sType* result_12;
struct sType* __result4__;
_Bool _if_conditional46;
struct sType* __result5__;
struct sType* result_13;
struct sType* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_12, 0, sizeof(struct sType*));
memset(&result_13, 0, sizeof(struct sType*));
                                                        if(_if_conditional45=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional45) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_12,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result4__ = __result_obj__ = result_12;
                                                            __freed_obj__ = 0;
                                                            return __result4__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional46=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional46) {
                                                            __result5__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                                            __freed_obj__ = 0;
                                                            return __result5__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_13,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result6__ = __result_obj__ = result_13;
                                                        __freed_obj__ = 0;
                                                        return __result6__;
                                                        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result7__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result7__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional47;
struct sType* result_15;
struct sType* __result8__;
_Bool _if_conditional48;
struct sType* __result9__;
struct sType* result_16;
struct sType* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_15, 0, sizeof(struct sType*));
memset(&result_16, 0, sizeof(struct sType*));
                                                        if(_if_conditional47=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional47) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_15,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result8__ = __result_obj__ = result_15;
                                                            __freed_obj__ = 0;
                                                            return __result8__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional48=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional48) {
                                                            __result9__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                                            __freed_obj__ = 0;
                                                            return __result9__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_16,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result10__ = __result_obj__ = result_16;
                                                        __freed_obj__ = 0;
                                                        return __result10__;
                                                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            __result11__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                                            __freed_obj__ = 0;
                                                            return __result11__;
                                                            __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result13__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result13__;
        __freed_obj__ = 0;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
void* right_value16;
struct buffer* buf_19;
char* class_name_20;
_Bool _if_conditional54;
int i_21;
_Bool _for_condtionalA3;
void* right_value21;
struct sType* gtype_26;
void* right_value22;
_Bool _if_conditional59;
_Bool _if_conditional60;
int i_27;
_Bool _for_condtionalA4;
_Bool _if_conditional61;
void* right_value23;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_19, 0, sizeof(struct buffer*));
memset(&class_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
memset(&gtype_26, 0, sizeof(struct sType*));
memset(&right_value22, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    buf_19=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    class_name_20=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 149))->mClass, "03transpile2.c", 149))->mName;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 151)),class_name_20);
    __freed_obj__ = 0;
    if(_if_conditional54=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 168))->mGenericsTypes, "03transpile2.c", 168)))>0,    __freed_obj__ = 0, 
    _if_conditional54) {
        buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 154)),"<");
        __freed_obj__ = 0;
        for(
        i_21=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_21<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 165))->mGenericsTypes, "03transpile2.c", 165))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_21++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            gtype_26=optional$2sTypephbool_value((come_push_stackframe("03transpile2.c", 156),((struct optional$2sTypephbool*)(right_value21=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(type, "03transpile2.c", 156))->mGenericsTypes,i_21)))));
            come_pop_stackframe();
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 158)),((char*)(right_value22=make_come_type_name_string(gtype_26,info))));
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional59=i_21!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 163))->mGenericsTypes, "03transpile2.c", 163)))-1,            __freed_obj__ = 0, 
            _if_conditional59) {
                buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 161)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 165)),">");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional60=((struct sType*)come_null_check(type, "03transpile2.c", 174))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_20,"lambda"),    __freed_obj__ = 0, 
    _if_conditional60) {
        for(
        i_27=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        i_27<((struct sType*)come_null_check(type, "03transpile2.c", 172))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA4;        i_27++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 170)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional61=((struct sType*)come_null_check(type, "03transpile2.c", 178))->mHeap,    __freed_obj__ = 0, 
    _if_conditional61) {
        buffer_append_str(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 175)),"%");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result20__ = __result_obj__ = ((char*)(right_value23=buffer_to_string(((struct buffer*)come_null_check(buf_19, "03transpile2.c", 178)))));
    if(buf_19 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
    if(buf_19 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional55;
struct list_item$1sTypeph* it_22;
int i_23;
_Bool _while_condtional4;
_Bool _if_conditional56;
void* right_value17;
void* right_value18;
struct optional$2sTypephbool* __result16__;
struct sType* default_value_24;
void* right_value19;
void* right_value20;
struct optional$2sTypephbool* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_23, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&default_value_24, 0, sizeof(struct sType*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
                if(_if_conditional55=position<0,                __freed_obj__ = 0, 
                _if_conditional55) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_22=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_23=0;
                __freed_obj__ = 0;
                while(_while_condtional4=it_22!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    if(_if_conditional56=position==i_23,                    __freed_obj__ = 0, 
                    _if_conditional56) {
                        __result16__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value18=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value17=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_22, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_22=((struct list_item$1sTypeph*)come_null_check(it_22, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_23++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_24,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result17__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value20=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value19=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_24),(_Bool)0))));
                if(default_value_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
                if(default_value_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj2;
struct optional$2sTypephbool* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj2=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result15__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result15__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional57=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional57) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional58;
struct sType* default_value_25;
struct sType* __result18__;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_25, 0, sizeof(struct sType*));
                if(_if_conditional58=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional58) {
                    __freed_obj__ = 0;
                    memset(&default_value_25,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result18__ = __result_obj__ = default_value_25;
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
                }
                else {
                    __result19__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result19__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    come_clear_stackframe();
    puts(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 183),((struct optional$2charphbool*)(right_value24=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
}

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
void* right_value26;
struct buffer* buf_28;
_Bool _if_conditional62;
void* right_value27;
void* right_value28;
void* right_value29;
struct optional$2charphbool* __result21__;
_Bool _if_conditional63;
void* right_value30;
int i_29;
struct list$1sTypeph* o2_saved_30;
struct sType* it_31;
_Bool _for_condtionalA5;
void* right_value31;
_Bool _if_conditional64;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
struct optional$2charphbool* __result22__;
void* right_value36;
void* right_value37;
int i_32;
struct list$1sTypeph* o2_saved_33;
struct sType* it_34;
_Bool _for_condtionalA6;
void* right_value38;
_Bool _if_conditional65;
void* right_value39;
void* right_value40;
void* right_value41;
struct optional$2charphbool* __result23__;
void* right_value42;
void* right_value43;
void* right_value44;
struct optional$2charphbool* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_28, 0, sizeof(struct buffer*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
memset(&o2_saved_30, 0, sizeof(struct list$1sTypeph*));
memset(&it_31, 0, sizeof(struct sType*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&i_32, 0, sizeof(int));
memset(&o2_saved_33, 0, sizeof(struct list$1sTypeph*));
memset(&it_34, 0, sizeof(struct sType*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
    buf_28=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional62=((struct sType*)come_null_check(type, "03transpile2.c", 194))->mResultType==((void*)0),    __freed_obj__ = 0, 
    _if_conditional62) {
        err_msg(info,"invalid lambda type");
        __freed_obj__ = 0;
        __result21__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 191), ((struct optional$2charphbool*)(right_value29=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value28=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 191))),(char*)come_increment_ref_count(((char*)(right_value27=__builtin_string("")))),(_Bool)0))));
        if(buf_28 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result21__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional63=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1, "03transpile2.c", 230))->mClass, "03transpile2.c", 230))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional63) {
        buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 196)),((char*)(right_value30=xsprintf("(*%s)(",var_name))));
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_29=0;
        __freed_obj__ = 0;
        for(
        o2_saved_30=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 208))->mParamTypes)),it_31=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_30), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_30), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        _for_condtionalA5;        it_31=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_30), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 200)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 200),((struct optional$2charphbool*)(right_value31=make_type_name_string(it_31,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional64=i_29!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 205))->mParamTypes, "03transpile2.c", 205)))-1,            __freed_obj__ = 0, 
            _if_conditional64) {
                buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 202)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_29++;
            __freed_obj__ = 0;
        }
        if(o2_saved_30 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 208)),")");
        __freed_obj__ = 0;
        __result22__ = __result_obj__ = ((struct optional$2charphbool*)(right_value35=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value34=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 210)))),(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 210),((struct optional$2charphbool*)(right_value33=make_lambda_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 210))->mResultType, "03transpile2.c", 210))->v1,((char*)(right_value32=buffer_to_string(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 210))))),info)))))),(_Bool)1)));
        if(buf_28 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result22__;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 213)),((char*)(right_value37=xsprintf("%s (*%s)(",optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 213),((struct optional$2charphbool*)(right_value36=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 213))->mResultType, "03transpile2.c", 213))->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))))),var_name))));
        come_pop_stackframe();
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_32=0;
        __freed_obj__ = 0;
        for(
        o2_saved_33=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 225))->mParamTypes)),it_34=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_33), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_33), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it_34=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_33), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 217)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 217),((struct optional$2charphbool*)(right_value38=make_type_name_string(it_34,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional65=i_32!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 222))->mParamTypes, "03transpile2.c", 222)))-1,            __freed_obj__ = 0, 
            _if_conditional65) {
                buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 219)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_32++;
            __freed_obj__ = 0;
        }
        if(o2_saved_33 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 225)),")");
        __freed_obj__ = 0;
        __result23__ = __result_obj__ = ((struct optional$2charphbool*)(right_value41=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value40=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 227)))),(char*)come_increment_ref_count(((char*)(right_value39=buffer_to_string(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 227)))))),(_Bool)1)));
        if(buf_28 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result23__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result24__ = __result_obj__ = ((struct optional$2charphbool*)(right_value44=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value43=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 230)))),(char*)come_increment_ref_count(((char*)(right_value42=buffer_to_string(((struct buffer*)come_null_check(buf_28, "03transpile2.c", 230)))))),(_Bool)1)));
    if(buf_28 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
    if(buf_28 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value45;
void* right_value46;
struct buffer* buf_35;
_Bool _if_conditional66;
void* right_value47;
char* str_36;
_Bool _if_conditional67;
void* right_value48;
char* str_37;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value49;
void* right_value50;
void* right_value51;
struct optional$2charphbool* __result25__;
void* right_value52;
struct CVALUE* come_value_38;
void* right_value53;
char* type_str_39;
void* right_value54;
void* right_value55;
_Bool _if_conditional70;
void* right_value56;
_Bool _if_conditional71;
void* right_value57;
_Bool _if_conditional72;
void* right_value58;
char* type_str_40;
_Bool _if_conditional73;
void* right_value59;
_Bool _if_conditional74;
void* right_value60;
char* type_str_41;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list$1sNodeph* o2_saved_42;
struct sNode* it_45;
_Bool _for_condtionalA7;
_Bool _if_conditional81;
void* right_value61;
void* right_value62;
void* right_value63;
struct optional$2charphbool* __result33__;
void* right_value64;
struct CVALUE* cvalue_48;
void* right_value65;
_Bool _if_conditional82;
void* right_value66;
void* right_value67;
char* type_str_49;
_Bool _if_conditional83;
void* right_value68;
void* right_value69;
void* right_value70;
struct optional$2charphbool* __result34__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value71;
void* right_value72;
void* right_value73;
void* right_value74;
struct optional$2charphbool* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&buf_35, 0, sizeof(struct buffer*));
memset(&right_value47, 0, sizeof(void*));
memset(&str_36, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&str_37, 0, sizeof(char*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&come_value_38, 0, sizeof(struct CVALUE*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_str_39, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&type_str_40, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&type_str_41, 0, sizeof(char*));
memset(&o2_saved_42, 0, sizeof(struct list$1sNodeph*));
memset(&it_45, 0, sizeof(struct sNode*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&cvalue_48, 0, sizeof(struct CVALUE*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&type_str_49, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
    buf_35=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional66=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda")&&((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName,""),    __freed_obj__ = 0, 
    _if_conditional66) {
        str_36=(char*)come_increment_ref_count(((char*)(right_value47=header_lambda(type,(char*)come_increment_ref_count(((struct sType*)come_null_check(type, "03transpile2.c", 240))->mAsmName),info))));
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 242)),str_36);
        __freed_obj__ = 0;
        if(str_36 && !__freed_obj__) { str_36 = come_decrement_ref_count(str_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional67=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional67) {
            str_37=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 245),((struct optional$2charphbool*)(right_value48=make_lambda_type_name_string(type,name,info))))));
            come_pop_stackframe();
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 247)),str_37);
            __freed_obj__ = 0;
            if(str_37 && !__freed_obj__) { str_37 = come_decrement_ref_count(str_37, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional68=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                if(_if_conditional69=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional69) {
                    err_msg(info,"invalid bit field number");
                    __freed_obj__ = 0;
                    __result25__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 252), ((struct optional$2charphbool*)(right_value51=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value50=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 252))),(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string("")))),(_Bool)0))));
                    if(buf_35 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_38=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                type_str_39=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 258),((struct optional$2charphbool*)(right_value53=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 259)),((char*)(right_value54=xsprintf("%s ",type_str_39))));
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 260)),((char*)(right_value55=xsprintf("%s:%s",name,((struct CVALUE*)come_null_check(come_value_38, "03transpile2.c", 260))->c_value))));
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional70=((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional70) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 263)),((char*)(right_value56=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 263))->mAsmName))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional71=((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional71) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 267)),((char*)(right_value57=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 267))->mAsmName))));
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(come_value_38 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_38, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_39 && !__freed_obj__) { type_str_39 = come_decrement_ref_count(type_str_39, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional72=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mOmitArrayNum,                __freed_obj__ = 0, 
                _if_conditional72) {
                    type_str_40=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 271),((struct optional$2charphbool*)(right_value58=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 273)),type_str_40);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 275))," ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 276)),name);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 278)),"[]");
                    __freed_obj__ = 0;
                    if(_if_conditional73=((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName,""),                    __freed_obj__ = 0, 
                    _if_conditional73) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 281)),((char*)(right_value59=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 281))->mAsmName))));
                        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_str_40 && !__freed_obj__) { type_str_40 = come_decrement_ref_count(type_str_40, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional74=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mArrayNum, "03transpile2.c", 336)))>0,                    __freed_obj__ = 0, 
                    _if_conditional74) {
                        type_str_41=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 285),((struct optional$2charphbool*)(right_value60=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 287)),type_str_41);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 289))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional75=((struct sType*)come_null_check(type, "03transpile2.c", 293))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional75) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 291)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 293)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional76=((struct sType*)come_null_check(type, "03transpile2.c", 298))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional76) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 295)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        for(
                        o2_saved_42=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 309))->mArrayNum)),it_45=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_42), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA7=                        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_42), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA7;                        it_45=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_42), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional81=!((struct sNode*)come_null_check(it_45, "03transpile2.c", 303))->compile(((struct sNode*)come_null_check(it_45, "03transpile2.c", 303))->_protocol_obj,info),                            __freed_obj__ = 0, 
                            _if_conditional81) {
                                err_msg(info,"invalid array number");
                                __freed_obj__ = 0;
                                __result33__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 301), ((struct optional$2charphbool*)(right_value63=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value62=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 301))),(char*)come_increment_ref_count(((char*)(right_value61=__builtin_string("")))),(_Bool)0))));
                                if(o2_saved_42 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_41 && !__freed_obj__) { type_str_41 = come_decrement_ref_count(type_str_41, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_35 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result33__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            cvalue_48=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=get_value_from_stack(-1,info))));
                            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            dec_stack_ptr(1,info);
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 306)),((char*)(right_value65=xsprintf("[%s]",((struct CVALUE*)come_null_check(cvalue_48, "03transpile2.c", 306))->c_value))));
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(cvalue_48 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_42 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional82=((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional82) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 310)),((char*)(right_value66=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 310))->mAsmName))));
                            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_41 && !__freed_obj__) { type_str_41 = come_decrement_ref_count(type_str_41, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        type_str_49=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 314),((struct optional$2charphbool*)(right_value67=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional83=string_operator_equals(type_str_49,""),                        __freed_obj__ = 0, 
                        _if_conditional83) {
                            __result34__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 317), ((struct optional$2charphbool*)(right_value70=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value69=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 317))),(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string("")))),(_Bool)0))));
                            if(type_str_49 && !__freed_obj__) { type_str_49 = come_decrement_ref_count(type_str_49, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_35 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 320)),type_str_49);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 322))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional84=((struct sType*)come_null_check(type, "03transpile2.c", 326))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional84) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 324)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 326)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional85=((struct sType*)come_null_check(type, "03transpile2.c", 331))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional85) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 328)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional86=((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional86) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 332)),((char*)(right_value71=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 332))->mAsmName))));
                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_49 && !__freed_obj__) { type_str_49 = come_decrement_ref_count(type_str_49, (void*)0, (void*)0, 0, 0, 0); }
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
    __result35__ = __result_obj__ = ((struct optional$2charphbool*)(right_value74=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value73=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value72=buffer_to_string(((struct buffer*)come_null_check(buf_35, "03transpile2.c", 336)))))),(_Bool)1)));
    if(buf_35 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
    if(buf_35 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional77;
struct sNode* result_43;
struct sNode* __result26__;
_Bool _if_conditional78;
struct sNode* __result27__;
struct sNode* result_44;
struct sNode* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_43, 0, sizeof(struct sNode*));
memset(&result_44, 0, sizeof(struct sNode*));
                            if(_if_conditional77=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional77) {
                                __freed_obj__ = 0;
                                memset(&result_43,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result26__ = __result_obj__ = result_43;
                                __freed_obj__ = 0;
                                return __result26__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional78=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,                            __freed_obj__ = 0, 
                            _if_conditional78) {
                                __result27__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                __freed_obj__ = 0;
                                return __result27__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_44,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result28__ = __result_obj__ = result_44;
                            __freed_obj__ = 0;
                            return __result28__;
                            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result29__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional79;
struct sNode* result_46;
struct sNode* __result30__;
_Bool _if_conditional80;
struct sNode* __result31__;
struct sNode* result_47;
struct sNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(struct sNode*));
memset(&result_47, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional79) {
                                __freed_obj__ = 0;
                                memset(&result_46,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result30__ = __result_obj__ = result_46;
                                __freed_obj__ = 0;
                                return __result30__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional80=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,                            __freed_obj__ = 0, 
                            _if_conditional80) {
                                __result31__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                __freed_obj__ = 0;
                                return __result31__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_47,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result32__ = __result_obj__ = result_47;
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value75;
void* right_value76;
struct buffer* output_50;
_Bool _if_conditional87;
void* right_value77;
void* right_value78;
struct buffer* output2_51;
int i_52;
struct list$1sTypeph* o2_saved_53;
struct sType* it_54;
_Bool _for_condtionalA8;
void* right_value83;
char* name_58;
void* right_value84;
char* str_59;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value85;
void* right_value86;
char* str_60;
void* right_value87;
_Bool _if_conditional92;
void* right_value122;
struct sType* base_result_type_79;
void* right_value123;
void* right_value124;
struct list$1sNodeph* __dec_obj25;
void* right_value125;
char* result_type_str_80;
int i_81;
struct list$1sTypeph* o2_saved_82;
struct sType* it_83;
_Bool _for_condtionalA9;
void* right_value126;
char* name_84;
void* right_value127;
char* str_85;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value132;
struct sNode* node_90;
_Bool _if_conditional169;
void* right_value133;
void* right_value134;
void* right_value135;
char* __result61__;
void* right_value136;
struct CVALUE* cvalue_91;
void* right_value137;
void* right_value138;
void* right_value139;
char* result_type_str_92;
int i_93;
struct list$1sTypeph* o2_saved_94;
struct sType* it_95;
_Bool _for_condtionalA10;
void* right_value140;
char* name_96;
void* right_value141;
char* str_97;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&output_50, 0, sizeof(struct buffer*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&output2_51, 0, sizeof(struct buffer*));
memset(&i_52, 0, sizeof(int));
memset(&o2_saved_53, 0, sizeof(struct list$1sTypeph*));
memset(&it_54, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&name_58, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&str_59, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&str_60, 0, sizeof(char*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&base_result_type_79, 0, sizeof(struct sType*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&result_type_str_80, 0, sizeof(char*));
memset(&i_81, 0, sizeof(int));
memset(&o2_saved_82, 0, sizeof(struct list$1sTypeph*));
memset(&it_83, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&name_84, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&str_85, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&node_90, 0, sizeof(struct sNode*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&cvalue_91, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&result_type_str_92, 0, sizeof(char*));
memset(&i_93, 0, sizeof(int));
memset(&o2_saved_94, 0, sizeof(struct list$1sTypeph*));
memset(&it_95, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&name_96, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&str_97, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    output_50=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional87=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mResultType,    __freed_obj__ = 0, 
    _if_conditional87) {
        output2_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 345)),((struct sFun*)come_null_check(fun, "03transpile2.c", 345))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 346)),"(");
        __freed_obj__ = 0;
        i_52=0;
        __freed_obj__ = 0;
        for(
        o2_saved_53=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 366))->mParamTypes)),it_54=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_53), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_53), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        _for_condtionalA8;        it_54=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_53), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_58=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 350),((struct optional$2charphbool*)(right_value83=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 350))->mParamNames,i_52)))));
            come_pop_stackframe();
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_59=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 352),((struct optional$2charphbool*)(right_value84=make_define_var(it_54,name_58,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 353)),str_59);
            __freed_obj__ = 0;
            if(_if_conditional90=i_52==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 364))->mParamTypes, "03transpile2.c", 364)))-1,            __freed_obj__ = 0, 
            _if_conditional90) {
                if(_if_conditional91=((struct sFun*)come_null_check(fun, "03transpile2.c", 359))->mVarArgs,                __freed_obj__ = 0, 
                _if_conditional91) {
                    buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 357)),", ...");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 361)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_52++;
            __freed_obj__ = 0;
            if(str_59 && !__freed_obj__) { str_59 = come_decrement_ref_count(str_59, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_53 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 366)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_60=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 368),((struct optional$2charphbool*)(right_value86=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 368))->mResultType,((char*)(right_value85=buffer_to_string(((struct buffer*)come_null_check(output2_51, "03transpile2.c", 368))))),info))))));
        come_pop_stackframe();
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 370)),str_60);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 374))->module, "03transpile2.c", 374))->mSourceHead, "03transpile2.c", 374)),((char*)(right_value87=buffer_to_string(((struct buffer*)come_null_check(output_50, "03transpile2.c", 374))))));
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 375))->module, "03transpile2.c", 375))->mSourceHead, "03transpile2.c", 375)),";\n");
        __freed_obj__ = 0;
        if(output2_51 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_60 && !__freed_obj__) { str_60 = come_decrement_ref_count(str_60, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional92=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mArrayNum, "03transpile2.c", 455)))>0,        __freed_obj__ = 0, 
        _if_conditional92) {
            base_result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 378))->mResultType))));
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj25=((struct sType*)come_null_check(base_result_type_79, "03transpile2.c", 379))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_79, "03transpile2.c", 379))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value123=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj25) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_80=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 381),((struct optional$2charphbool*)(right_value125=make_type_name_string(base_result_type_79,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 383)),result_type_str_80);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 384))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 386)),((struct sFun*)come_null_check(fun, "03transpile2.c", 386))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 387)),"(");
            __freed_obj__ = 0;
            i_81=0;
            __freed_obj__ = 0;
            for(
            o2_saved_82=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mParamTypes)),it_83=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_82), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_82), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            it_83=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_82), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_84=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 391),((struct optional$2charphbool*)(right_value126=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 391))->mParamNames,i_81)))));
                come_pop_stackframe();
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_85=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 393),((struct optional$2charphbool*)(right_value127=make_define_var(it_83,name_84,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 394)),str_85);
                __freed_obj__ = 0;
                if(_if_conditional163=i_81==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 405))->mParamTypes, "03transpile2.c", 405)))-1,                __freed_obj__ = 0, 
                _if_conditional163) {
                    if(_if_conditional164=((struct sFun*)come_null_check(fun, "03transpile2.c", 400))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional164) {
                        buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 398)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 402)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_81++;
                __freed_obj__ = 0;
                if(str_85 && !__freed_obj__) { str_85 = come_decrement_ref_count(str_85, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_82 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_90=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 408),((struct optional$2sNodephbool*)(right_value132=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mResultType, "03transpile2.c", 408))->mArrayNum,0)))));
            come_pop_stackframe();
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional169=!((struct sNode*)come_null_check(node_90, "03transpile2.c", 414))->compile(((struct sNode*)come_null_check(node_90, "03transpile2.c", 414))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional169) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result61__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 412), ((struct optional$2charphbool*)(right_value135=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value134=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 412))),(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_80 && !__freed_obj__) { result_type_str_80 = come_decrement_ref_count(result_type_str_80, (void*)0, (void*)0, 0, 0, 0); }
                if(output_50 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result61__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))));
            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 417)),((char*)(right_value137=xsprintf("))[%s]",((struct CVALUE*)come_null_check(cvalue_91, "03transpile2.c", 417))->c_value))));
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 419))->module, "03transpile2.c", 419))->mSourceHead, "03transpile2.c", 419)),((char*)(right_value138=buffer_to_string(((struct buffer*)come_null_check(output_50, "03transpile2.c", 419))))));
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 420))->module, "03transpile2.c", 420))->mSourceHead, "03transpile2.c", 420)),";\n");
            __freed_obj__ = 0;
            if(base_result_type_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_79, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_80 && !__freed_obj__) { result_type_str_80 = come_decrement_ref_count(result_type_str_80, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_91, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_92=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 423),((struct optional$2charphbool*)(right_value139=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 423))->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 425)),result_type_str_92);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 426))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 428)),((struct sFun*)come_null_check(fun, "03transpile2.c", 428))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 429)),"(");
            __freed_obj__ = 0;
            i_93=0;
            __freed_obj__ = 0;
            for(
            o2_saved_94=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 449))->mParamTypes)),it_95=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_94), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA10=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_94), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            _for_condtionalA10;            it_95=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_94), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_96=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 433),((struct optional$2charphbool*)(right_value140=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 433))->mParamNames,i_93)))));
                come_pop_stackframe();
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_97=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 435),((struct optional$2charphbool*)(right_value141=make_define_var(it_95,name_96,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 436)),str_97);
                __freed_obj__ = 0;
                if(_if_conditional170=i_93==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 446))->mParamTypes, "03transpile2.c", 446)))-1,                __freed_obj__ = 0, 
                _if_conditional170) {
                    if(_if_conditional171=((struct sFun*)come_null_check(fun, "03transpile2.c", 442))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional171) {
                        buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 440)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 444)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_93++;
                __freed_obj__ = 0;
                if(str_97 && !__freed_obj__) { str_97 = come_decrement_ref_count(str_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_94 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_94, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 449)),")");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 451))->module, "03transpile2.c", 451))->mSourceHead, "03transpile2.c", 451)),((char*)(right_value142=buffer_to_string(((struct buffer*)come_null_check(output_50, "03transpile2.c", 451))))));
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 452))->module, "03transpile2.c", 452))->mSourceHead, "03transpile2.c", 452)),";\n");
            __freed_obj__ = 0;
            if(result_type_str_92 && !__freed_obj__) { result_type_str_92 = come_decrement_ref_count(result_type_str_92, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 455)),"{\n");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 457)),((char*)(right_value143=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 457))->mSourceHead, "03transpile2.c", 457))))));
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 458)),((char*)(right_value144=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 458))->mSourceHead2, "03transpile2.c", 458))))));
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 459)),((char*)(right_value145=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 459))->mSource, "03transpile2.c", 459))))));
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_50, "03transpile2.c", 461)),"}\n");
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = ((char*)(right_value146=buffer_to_string(((struct buffer*)come_null_check(output_50, "03transpile2.c", 463)))));
    if(output_50 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
    if(output_50 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_50, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional88;
struct list_item$1charph* it_55;
int i_56;
_Bool _while_condtional5;
_Bool _if_conditional89;
void* right_value79;
void* right_value80;
struct optional$2charphbool* __result36__;
char* default_value_57;
void* right_value81;
void* right_value82;
struct optional$2charphbool* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&i_56, 0, sizeof(int));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&default_value_57, 0, sizeof(char*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
                if(_if_conditional88=position<0,                __freed_obj__ = 0, 
                _if_conditional88) {
                    position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_55=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_56=0;
                __freed_obj__ = 0;
                while(_while_condtional5=it_55!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    if(_if_conditional89=position==i_56,                    __freed_obj__ = 0, 
                    _if_conditional89) {
                        __result36__ = __result_obj__ = ((struct optional$2charphbool*)(right_value80=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value79=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_55, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result36__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_55=((struct list_item$1charph*)come_null_check(it_55, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_56++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_57,0,sizeof(char*));
                __freed_obj__ = 0;
                __result37__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value82=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value81=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_57),(_Bool)0))));
                if(default_value_57 && !__freed_obj__) { default_value_57 = come_decrement_ref_count(default_value_57, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
                if(default_value_57 && !__freed_obj__) { default_value_57 = come_decrement_ref_count(default_value_57, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional93;
struct sType* __result38__;
void* right_value88;
struct sType* result_61;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional99;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj5;
_Bool _if_conditional100;
void* right_value93;
char* __dec_obj6;
_Bool _if_conditional101;
void* right_value100;
struct list$1sTypeph* __dec_obj10;
_Bool _if_conditional105;
void* right_value108;
struct list$1sNodeph* __dec_obj14;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value109;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional120;
void* right_value116;
struct list$1charph* __dec_obj19;
_Bool _if_conditional124;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value118;
struct sNode* __dec_obj21;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
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
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value119;
struct sNode* __dec_obj22;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value120;
char* __dec_obj23;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value121;
char* __dec_obj24;
struct sType* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&result_61, 0, sizeof(struct sType*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
                if(_if_conditional93=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional93) {
                    __result38__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result38__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional94=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional94) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional95=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional95) {
                    __dec_obj4=((struct sType*)come_null_check(result_61, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional99=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    __dec_obj5=((struct sType*)come_null_check(result_61, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj5) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional100) {
                    __dec_obj6=((struct sType*)come_null_check(result_61, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    __dec_obj10=((struct sType*)come_null_check(result_61, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj10) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    __dec_obj14=((struct sType*)come_null_check(result_61, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj14) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional118=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional118) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional119=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional119) {
                    __dec_obj15=((struct sType*)come_null_check(result_61, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional120=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional120) {
                    __dec_obj19=((struct sType*)come_null_check(result_61, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj19) { come_call_finalizer(list$1charph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional124=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional124) {
                    __dec_obj20=((struct sType*)come_null_check(result_61, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj20) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional125=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional125) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional126=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional126) {
                    __dec_obj21=((struct sType*)come_null_check(result_61, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional127=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional127) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional128=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional128) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional129=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional129) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional130=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional130) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional131=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional131) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional132=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional132) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional133=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional133) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional134=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional134) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional135=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional135) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional136=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional136) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional137=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional137) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional138=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional138) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional139=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional139) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional140=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional140) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional141=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional141) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional142=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional142) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional143=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional143) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional144=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional144) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional145=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional145) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional146=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional146) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional147=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional148=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional148) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional149=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional149) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional150) {
                    __dec_obj22=((struct sType*)come_null_check(result_61, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional151=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional151) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional152=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional152) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional153=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional153) {
                    __dec_obj23=((struct sType*)come_null_check(result_61, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional154=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional154) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional155=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional155) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional156=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional156) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional157=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional157) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional158=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional158) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional159=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional159) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional160=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional161=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    ((struct sType*)come_null_check(result_61, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional162=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional162) {
                    __dec_obj24=((struct sType*)come_null_check(result_61, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_61, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result55__ = __result_obj__ = result_61;
                if(result_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
                if(result_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_61, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional96;
struct tuple1$1sTypeph* __result39__;
void* right_value89;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional98;
void* right_value90;
struct sType* __dec_obj3;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value90, 0, sizeof(void*));
                        if(_if_conditional96=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional96) {
                            __result39__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result39__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional98=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional98) {
                            __dec_obj3=((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result40__ = __result_obj__ = result_62;
                        if(result_62 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                        if(result_62 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional97) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional102;
struct list$1sTypeph* __result41__;
void* right_value94;
void* right_value95;
struct list$1sTypeph* result_63;
struct list_item$1sTypeph* it_64;
_Bool _while_condtional6;
void* right_value99;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct list$1sTypeph*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value99, 0, sizeof(void*));
                        if(_if_conditional102=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __result41__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_63=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value94=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_64=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional6=it_64!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional6) {
                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_63, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_64, "./comelang2.h", 192))->item)))));
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            it_64=((struct list_item$1sTypeph*)come_null_check(it_64, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result44__ = __result_obj__ = result_63;
                        if(result_63 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result44__;
                        __freed_obj__ = 0;
                        if(result_63 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result42__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result42__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional103;
void* right_value96;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj7;
_Bool _if_conditional104;
void* right_value97;
struct list_item$1sTypeph* litem_66;
struct sType* __dec_obj8;
void* right_value98;
struct list_item$1sTypeph* litem_67;
struct sType* __dec_obj9;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional103=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional103) {
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_65, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_65, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_65, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_65, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_65;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_65;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional104=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional104) {
                                        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_66, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_66, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_66, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_66, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_66;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_66;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_67, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_67, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_67, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_67, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_67;
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_67;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result43__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result43__;
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
_Bool _if_conditional106;
struct list$1sNodeph* __result45__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_68;
struct list_item$1sNodeph* it_69;
_Bool _while_condtional7;
void* right_value107;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct list$1sNodeph*));
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value107, 0, sizeof(void*));
                        if(_if_conditional106=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional106) {
                            __result45__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result45__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_68=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_69=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional7=it_69!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional7) {
                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_68, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_69, "./comelang2.h", 192))->item)))));
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            it_69=((struct list_item$1sNodeph*)come_null_check(it_69, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result50__ = __result_obj__ = result_68;
                        if(result_68 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result50__;
                        __freed_obj__ = 0;
                        if(result_68 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result46__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result46__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional107;
void* right_value103;
struct list_item$1sNodeph* litem_70;
struct sNode* __dec_obj11;
_Bool _if_conditional108;
void* right_value104;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj12;
void* right_value105;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj13;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional107=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    litem_70=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_70;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_70;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional108=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional108) {
                                        litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_71;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_71;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_72;
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_72;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result47__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result47__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional109;
struct sNode* __result48__;
void* right_value106;
struct sNode* result_73;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sNode* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&result_73, 0, sizeof(struct sNode*));
                                if(_if_conditional109=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional109) {
                                    __result48__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result48__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_73=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                if(_if_conditional110=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional110) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional111=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional112=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional112) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional113=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional113) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional114=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional114) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional115=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional116=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional116) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional117=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional117) {
                                    ((struct sNode*)come_null_check(result_73, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result49__ = __result_obj__ = result_73;
                                if(result_73 && !__freed_obj__) { result_73 = come_decrement_ref_count(result_73, ((struct sNode*)result_73)->finalize, ((struct sNode*)result_73)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result49__;
                                __freed_obj__ = 0;
                                if(result_73 && !__freed_obj__) { result_73 = come_decrement_ref_count(result_73, ((struct sNode*)result_73)->finalize, ((struct sNode*)result_73)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional121;
struct list$1charph* __result51__;
void* right_value110;
void* right_value111;
struct list$1charph* result_74;
struct list_item$1charph* it_75;
_Bool _while_condtional8;
void* right_value115;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct list$1charph*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&right_value115, 0, sizeof(void*));
                        if(_if_conditional121=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional121) {
                            __result51__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result51__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_74=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_75=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional8=it_75!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional8) {
                            list$1charph_add(((struct list$1charph*)come_null_check(result_74, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value115=string_clone(((struct list_item$1charph*)come_null_check(it_75, "./comelang2.h", 192))->item)))));
                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            it_75=((struct list_item$1charph*)come_null_check(it_75, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result54__ = __result_obj__ = result_74;
                        if(result_74 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result54__;
                        __freed_obj__ = 0;
                        if(result_74 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result52__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result52__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional122;
void* right_value112;
struct list_item$1charph* litem_76;
char* __dec_obj16;
_Bool _if_conditional123;
void* right_value113;
struct list_item$1charph* litem_77;
char* __dec_obj17;
void* right_value114;
struct list_item$1charph* litem_78;
char* __dec_obj18;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional122=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional122) {
                                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_76, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_76, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_76, "./comelang2.h", 206))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_76, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_76;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_76;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional123=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional123) {
                                        litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_77, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_77, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj17=((struct list_item$1charph*)come_null_check(litem_77, "./comelang2.h", 216))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_77, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_77;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_77;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_78, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_78, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj18=((struct list_item$1charph*)come_null_check(litem_78, "./comelang2.h", 226))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_78, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_78;
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_78;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result53__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result53__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional165;
struct list_item$1sNodeph* it_86;
int i_87;
_Bool _while_condtional9;
_Bool _if_conditional166;
void* right_value128;
void* right_value129;
struct optional$2sNodephbool* __result57__;
struct sNode* default_value_88;
void* right_value130;
void* right_value131;
struct optional$2sNodephbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_86, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_87, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sNode*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
                if(_if_conditional165=position<0,                __freed_obj__ = 0, 
                _if_conditional165) {
                    position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_86=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_87=0;
                __freed_obj__ = 0;
                while(_while_condtional9=it_86!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional166=position==i_87,                    __freed_obj__ = 0, 
                    _if_conditional166) {
                        __result57__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value129=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value128=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 742)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_86, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_86=((struct list_item$1sNodeph*)come_null_check(it_86, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_87++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_88,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result58__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sNodephbool*)(right_value131=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value130=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 750))),(struct sNode*)come_increment_ref_count(default_value_88),(_Bool)0))));
                if(default_value_88 && !__freed_obj__) { default_value_88 = come_decrement_ref_count(default_value_88, ((struct sNode*)default_value_88)->finalize, ((struct sNode*)default_value_88)->_protocol_obj, 0, 0, 0); } 
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result58__;
                __freed_obj__ = 0;
                if(default_value_88 && !__freed_obj__) { default_value_88 = come_decrement_ref_count(default_value_88, ((struct sNode*)default_value_88)->finalize, ((struct sNode*)default_value_88)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj26;
struct optional$2sNodephbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj26=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result56__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result56__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional167=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional167) {
                                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional168;
struct sNode* default_value_89;
struct sNode* __result59__;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_89, 0, sizeof(struct sNode*));
                if(_if_conditional168=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional168) {
                    __freed_obj__ = 0;
                    memset(&default_value_89,0,sizeof(struct sNode*));
                    __freed_obj__ = 0;
                    __result59__ = __result_obj__ = default_value_89;
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
                }
                else {
                    __result60__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result60__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value147;
void* right_value148;
struct buffer* output_98;
_Bool _if_conditional172;
void* right_value149;
void* right_value150;
struct buffer* output2_99;
int i_100;
struct list$1sTypeph* o2_saved_101;
struct sType* it_102;
_Bool _for_condtionalA11;
void* right_value151;
char* name_103;
void* right_value152;
char* str_104;
_Bool _if_conditional173;
void* right_value153;
void* right_value154;
char* str_105;
_Bool _if_conditional174;
void* right_value155;
struct sType* base_result_type_106;
void* right_value156;
void* right_value157;
struct list$1sNodeph* __dec_obj27;
void* right_value158;
char* result_type_str_107;
int i_108;
struct list$1sTypeph* o2_saved_109;
struct sType* it_110;
_Bool _for_condtionalA12;
void* right_value159;
char* name_111;
void* right_value160;
char* str_112;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value161;
struct sNode* node_113;
_Bool _if_conditional177;
void* right_value162;
void* right_value163;
void* right_value164;
char* __result63__;
void* right_value165;
struct CVALUE* cvalue_114;
void* right_value166;
void* right_value167;
char* result_type_str_115;
int i_116;
struct list$1sTypeph* o2_saved_117;
struct sType* it_118;
_Bool _for_condtionalA13;
void* right_value168;
char* name_119;
void* right_value169;
char* str_120;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value170;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&output_98, 0, sizeof(struct buffer*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&output2_99, 0, sizeof(struct buffer*));
memset(&i_100, 0, sizeof(int));
memset(&o2_saved_101, 0, sizeof(struct list$1sTypeph*));
memset(&it_102, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&name_103, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&str_104, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&str_105, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&base_result_type_106, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&result_type_str_107, 0, sizeof(char*));
memset(&i_108, 0, sizeof(int));
memset(&o2_saved_109, 0, sizeof(struct list$1sTypeph*));
memset(&it_110, 0, sizeof(struct sType*));
memset(&right_value159, 0, sizeof(void*));
memset(&name_111, 0, sizeof(char*));
memset(&right_value160, 0, sizeof(void*));
memset(&str_112, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&node_113, 0, sizeof(struct sNode*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&cvalue_114, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&result_type_str_115, 0, sizeof(char*));
memset(&i_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1sTypeph*));
memset(&it_118, 0, sizeof(struct sType*));
memset(&right_value168, 0, sizeof(void*));
memset(&name_119, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&str_120, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
    output_98=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional172=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mResultType,    __freed_obj__ = 0, 
    _if_conditional172) {
        output2_99=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 473)),((struct sFun*)come_null_check(fun, "03transpile2.c", 473))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 474)),"(");
        __freed_obj__ = 0;
        i_100=0;
        __freed_obj__ = 0;
        for(
        o2_saved_101=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 488))->mParamTypes)),it_102=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_101), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_101), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_102=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_101), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_103=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 478),((struct optional$2charphbool*)(right_value151=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 478))->mParamNames,i_100)))));
            come_pop_stackframe();
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_104=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 480),((struct optional$2charphbool*)(right_value152=make_define_var(it_102,name_103,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 481)),str_104);
            __freed_obj__ = 0;
            if(_if_conditional173=i_100!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 486))->mParamTypes, "03transpile2.c", 486)))-1,            __freed_obj__ = 0, 
            _if_conditional173) {
                buffer_append_str(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 484)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_100++;
            __freed_obj__ = 0;
            if(str_104 && !__freed_obj__) { str_104 = come_decrement_ref_count(str_104, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_101 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_101, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 488)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_105=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 490),((struct optional$2charphbool*)(right_value154=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 490))->mResultType,((char*)(right_value153=buffer_to_string(((struct buffer*)come_null_check(output2_99, "03transpile2.c", 490))))),info))))));
        come_pop_stackframe();
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 492)),str_105);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 493)),";\n");
        __freed_obj__ = 0;
        if(output2_99 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_99, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_105 && !__freed_obj__) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional174=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mArrayNum, "03transpile2.c", 565)))>0,        __freed_obj__ = 0, 
        _if_conditional174) {
            base_result_type_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 496))->mResultType))));
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj27=((struct sType*)come_null_check(base_result_type_106, "03transpile2.c", 497))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_106, "03transpile2.c", 497))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value157=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value156=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj27) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_107=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 499),((struct optional$2charphbool*)(right_value158=make_type_name_string(base_result_type_106,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 501)),result_type_str_107);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 502))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 504)),((struct sFun*)come_null_check(fun, "03transpile2.c", 504))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 505)),"(");
            __freed_obj__ = 0;
            i_108=0;
            __freed_obj__ = 0;
            for(
            o2_saved_109=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mParamTypes)),it_110=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA12=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            _for_condtionalA12;            it_110=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_111=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 509),((struct optional$2charphbool*)(right_value159=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 509))->mParamNames,i_108)))));
                come_pop_stackframe();
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_112=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 511),((struct optional$2charphbool*)(right_value160=make_define_var(it_110,name_111,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 512)),str_112);
                __freed_obj__ = 0;
                if(_if_conditional175=i_108==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 522))->mParamTypes, "03transpile2.c", 522)))-1,                __freed_obj__ = 0, 
                _if_conditional175) {
                    if(_if_conditional176=((struct sFun*)come_null_check(fun, "03transpile2.c", 518))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional176) {
                        buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 516)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 520)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_108++;
                __freed_obj__ = 0;
                if(str_112 && !__freed_obj__) { str_112 = come_decrement_ref_count(str_112, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_113=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 525),((struct optional$2sNodephbool*)(right_value161=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mResultType, "03transpile2.c", 525))->mArrayNum,0)))));
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional177=!((struct sNode*)come_null_check(node_113, "03transpile2.c", 530))->compile(((struct sNode*)come_null_check(node_113, "03transpile2.c", 530))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional177) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result63__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 528), ((struct optional$2charphbool*)(right_value164=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value163=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 528))),(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_106 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_107 && !__freed_obj__) { result_type_str_107 = come_decrement_ref_count(result_type_str_107, (void*)0, (void*)0, 0, 0, 0); }
                if(output_98 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result63__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=get_value_from_stack(-1,info))));
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 533)),((char*)(right_value166=xsprintf("))[%s];\n",((struct CVALUE*)come_null_check(cvalue_114, "03transpile2.c", 533))->c_value))));
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(base_result_type_106 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_106, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_107 && !__freed_obj__) { result_type_str_107 = come_decrement_ref_count(result_type_str_107, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_115=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 536),((struct optional$2charphbool*)(right_value167=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 536))->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 538)),result_type_str_115);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 539))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 541)),((struct sFun*)come_null_check(fun, "03transpile2.c", 541))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 542)),"(");
            __freed_obj__ = 0;
            i_116=0;
            __freed_obj__ = 0;
            for(
            o2_saved_117=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 562))->mParamTypes)),it_118=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA13=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            _for_condtionalA13;            it_118=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_119=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 546),((struct optional$2charphbool*)(right_value168=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 546))->mParamNames,i_116)))));
                come_pop_stackframe();
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_120=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 548),((struct optional$2charphbool*)(right_value169=make_define_var(it_118,name_119,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 549)),str_120);
                __freed_obj__ = 0;
                if(_if_conditional178=i_116==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 559))->mParamTypes, "03transpile2.c", 559)))-1,                __freed_obj__ = 0, 
                _if_conditional178) {
                    if(_if_conditional179=((struct sFun*)come_null_check(fun, "03transpile2.c", 555))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 553)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 557)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_116++;
                __freed_obj__ = 0;
                if(str_120 && !__freed_obj__) { str_120 = come_decrement_ref_count(str_120, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_98, "03transpile2.c", 562)),");\n");
            __freed_obj__ = 0;
            if(result_type_str_115 && !__freed_obj__) { result_type_str_115 = come_decrement_ref_count(result_type_str_115, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = ((char*)(right_value170=buffer_to_string(((struct buffer*)come_null_check(output_98, "03transpile2.c", 565)))));
    if(output_98 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
    if(output_98 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_98, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value171;
void* right_value172;
struct buffer* output_121;
void* right_value173;
char* result_type_str_122;
int i_123;
struct list$1sTypeph* o2_saved_124;
struct sType* it_125;
_Bool _for_condtionalA14;
void* right_value174;
char* name_126;
void* right_value175;
char* str_127;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value176;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&output_121, 0, sizeof(struct buffer*));
memset(&right_value173, 0, sizeof(void*));
memset(&result_type_str_122, 0, sizeof(char*));
memset(&i_123, 0, sizeof(int));
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_125, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&name_126, 0, sizeof(char*));
memset(&right_value175, 0, sizeof(void*));
memset(&str_127, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
    output_121=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    result_type_str_122=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 572),((struct optional$2charphbool*)(right_value173=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 572))->mResultType, "03transpile2.c", 572))->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 574)),result_type_str_122);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 575))," ");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 577)),name);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 578)),"(");
    __freed_obj__ = 0;
    i_123=0;
    __freed_obj__ = 0;
    for(
    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(lambda_type, "03transpile2.c", 598))->mParamTypes)),it_125=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_125=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        name_126=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 582),((struct optional$2charphbool*)(right_value174=list$1charphp_operator_load_element(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 582))->mParamNames,i_123)))));
        come_pop_stackframe();
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_127=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 584),((struct optional$2charphbool*)(right_value175=make_define_var(it_125,name_126,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 585)),str_127);
        __freed_obj__ = 0;
        if(_if_conditional180=i_123==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 595))->mParamTypes, "03transpile2.c", 595)))-1,        __freed_obj__ = 0, 
        _if_conditional180) {
            if(_if_conditional181=((struct sType*)come_null_check(lambda_type, "03transpile2.c", 591))->mVarArgs,            __freed_obj__ = 0, 
            _if_conditional181) {
                buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 589)),", ...");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 593)),", ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_123++;
        __freed_obj__ = 0;
        if(str_127 && !__freed_obj__) { str_127 = come_decrement_ref_count(str_127, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_124 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_121, "03transpile2.c", 598)),");\n");
    __freed_obj__ = 0;
    __result65__ = __result_obj__ = ((char*)(right_value176=buffer_to_string(((struct buffer*)come_null_check(output_121, "03transpile2.c", 600)))));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_121 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_122 && !__freed_obj__) { result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_121 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_122 && !__freed_obj__) { result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
char* msg2_128;
va_list args_129;
int len_130;
_Bool _if_conditional183;
int i_131;
_Bool _for_condtionalA15;
void* right_value177;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_128, 0, sizeof(char*));
memset(&args_129, 0, sizeof(va_list));
memset(&len_130, 0, sizeof(int));
memset(&i_131, 0, sizeof(int));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    if(_if_conditional182=((struct sInfo*)come_null_check(info, "03transpile2.c", 609))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional182) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_129,msg);
    __freed_obj__ = 0;
    len_130=vasprintf(&msg2_128,msg,args_129);
    __freed_obj__ = 0;
    __builtin_va_end(args_129);
    __freed_obj__ = 0;
    if(_if_conditional183=((struct sInfo*)come_null_check(info, "03transpile2.c", 628))->come_fun,    __freed_obj__ = 0, 
    _if_conditional183) {
        __freed_obj__ = 0;
        for(
        i_131=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        i_131<((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->block_level ,        __freed_obj__ = 0, 
        _for_condtionalA15;        i_131++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 619))->come_fun, "03transpile2.c", 619))->mSource, "03transpile2.c", 619)),"    ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->come_fun, "03transpile2.c", 622))->mSource, "03transpile2.c", 622)),((char*)(right_value177=xsprintf("%s",msg2_128))));
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 625))->module, "03transpile2.c", 625))->mSourceHead, "03transpile2.c", 625)),((char*)(right_value178=xsprintf("%s",msg2_128))));
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_128);
    __freed_obj__ = 0;
    if((&args_129) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_129), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional184;
char* msg2_132;
va_list args_133;
int len_134;
void* right_value179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_132, 0, sizeof(char*));
memset(&args_133, 0, sizeof(va_list));
memset(&len_134, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
    if(_if_conditional184=((struct sInfo*)come_null_check(info, "03transpile2.c", 636))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional184) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_133,msg);
    __freed_obj__ = 0;
    len_134=vasprintf(&msg2_132,msg,args_133);
    __freed_obj__ = 0;
    __builtin_va_end(args_133);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 643))->module, "03transpile2.c", 643))->mSourceHead, "03transpile2.c", 643)),((char*)(right_value179=xsprintf("%s",msg2_132))));
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_132);
    __freed_obj__ = 0;
    if((&args_133) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_133), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value180;
char* name_135;
void* right_value181;
void* right_value182;
struct sType* result_type_136;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
struct sType* __list_values1___137[2];
void* right_value190;
void* right_value191;
struct list$1sTypeph* param_types_142;
void* right_value192;
void* right_value193;
char* __list_values2___143[2];
void* right_value197;
void* right_value198;
struct list$1charph* param_names_148;
void* right_value199;
void* right_value200;
struct list$1charph* param_default_parametors_149;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
struct sFun* main_fun_150;
void* right_value217;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&name_135, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&result_type_136, 0, sizeof(struct sType*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&param_types_142, 0, sizeof(struct list$1sTypeph*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&param_names_148, 0, sizeof(struct list$1charph*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&param_default_parametors_149, 0, sizeof(struct list$1charph*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&main_fun_150, 0, sizeof(struct sFun*));
memset(&right_value217, 0, sizeof(void*));
    name_135=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("main"))));
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    {__list_values1___137[0]=come_increment_ref_count(((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___137[1]=come_increment_ref_count(((struct sType*)(right_value186=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value185=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_142=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value191=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value190=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___137))));
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    {__list_values2___143[0]=come_increment_ref_count(((char*)(right_value192=__builtin_string("argc"))));
__list_values2___143[1]=come_increment_ref_count(((char*)(right_value193=__builtin_string("argv"))));
}    param_names_148=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value198=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value197=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___143))));
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    param_default_parametors_149=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value199=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    main_fun_150=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value204=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value201=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 660)))),(char*)come_increment_ref_count(name_135),(struct sType*)come_increment_ref_count(result_type_136),(struct list$1sTypeph*)come_increment_ref_count(param_types_142),(struct list$1charph*)come_increment_ref_count(param_names_148),(struct list$1charph*)come_increment_ref_count(param_default_parametors_149),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("")))),info))));
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsFunph_insert(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 662))->funcs, "03transpile2.c", 662)),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name_135)))),(struct sFun*)come_increment_ref_count(main_fun_150));
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code(info,"#include <stdio.h>\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 666))->come_fun=main_fun_150;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 668))->block_level++;
    __freed_obj__ = 0;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    __freed_obj__ = 0;
    add_come_code(info,"return 0;\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 671))->block_level--;
    __freed_obj__ = 0;
    __result96__ = 0;
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_142 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_148 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_149 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_150 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_142 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_148 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_149 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_150 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_138;
_Bool _for_condtionalA16;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_138, 0, sizeof(int));
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 160))->len=0;
        __freed_obj__ = 0;
        for(
        i_138=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_138<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_138++ ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 163)),values[i_138]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result67__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional185;
void* right_value187;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj28;
_Bool _if_conditional186;
void* right_value188;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj29;
void* right_value189;
struct list_item$1sTypeph* litem_141;
struct sType* __dec_obj30;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value187, 0, sizeof(void*));
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value188, 0, sizeof(void*));
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value189, 0, sizeof(void*));
memset(&litem_141, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional185=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional185) {
                    litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value187=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj28=((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_139;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_139;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional186=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value188=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_140, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_140, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj29=((struct list_item$1sTypeph*)come_null_check(litem_140, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_140, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_140;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_140;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_141=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value189=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_141, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_141, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj30=((struct list_item$1sTypeph*)come_null_check(litem_141, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_141, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_141;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_141;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result66__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result66__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_144;
_Bool _for_condtionalA17;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_144, 0, sizeof(int));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->len=0;
        __freed_obj__ = 0;
        for(
        i_144=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        i_144<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA17;        i_144++ ,        __freed_obj__ = 0, 
        0        ){
            list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 163)),values[i_144]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result69__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional187;
void* right_value194;
struct list_item$1charph* litem_145;
char* __dec_obj31;
_Bool _if_conditional188;
void* right_value195;
struct list_item$1charph* litem_146;
char* __dec_obj32;
void* right_value196;
struct list_item$1charph* litem_147;
char* __dec_obj33;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&right_value195, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1charph*));
memset(&right_value196, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional187=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional187) {
                    litem_145=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj31=((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_145, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_145;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_145;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional188=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional188) {
                        litem_146=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj32=((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_146, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_146;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_146;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj33=((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_147, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_147;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_147;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result68__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result68__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional189=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional189) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional190=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional190) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional191=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional191) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional192=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional192) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional193=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional193) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional194=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional194) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional195=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional195) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional198=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional200=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional200) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional201=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional201) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional202=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional202) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional196=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional196) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional197=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional197) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional204;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional12;
_Bool _if_conditional217;
void* right_value211;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool same_key_exist_187;
char* it2_190;
_Bool _for_condtionalA19;
void* right_value213;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsFunph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
memset(&right_value211, 0, sizeof(void*));
memset(&same_key_exist_187, 0, sizeof(_Bool));
memset(&it2_190, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
        if(_if_conditional204=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional204) {
            map$2charphsFunph_rehash(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_169=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_170=hash_169;
        __freed_obj__ = 0;
        while(_while_condtional12=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional12) {
            if(_if_conditional217=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_170],            __freed_obj__ = 0, 
            _if_conditional217) {
                if(_if_conditional218=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value211=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_170], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                (right_value211 && right_value211 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional218) {
                    if(_if_conditional219=1,                    __freed_obj__ = 0, 
                    _if_conditional219) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_170]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_170] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_170] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_170], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_170]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_170]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_170]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional239=1,                    __freed_obj__ = 0, 
                    _if_conditional239) {
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1442))->items[it_170] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1442))->items[it_170], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1443))->items[it_170]=(struct sFun*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1446))->items[it_170]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_170++;
                __freed_obj__ = 0;
                if(_if_conditional240=it_170>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional240) {
                    it_170=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional241=it_170==hash_169,                    __freed_obj__ = 0, 
                    _if_conditional241) {
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
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_170]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional242=1,                __freed_obj__ = 0, 
                _if_conditional242) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_170]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_170]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional243=1,                __freed_obj__ = 0, 
                _if_conditional243) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1470))->items[it_170]=(struct sFun*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1473))->items[it_170]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_187=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_190=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA19;        it2_190=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional248=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value213=string_equals(((char*)come_null_check(it2_190, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),            (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional248) {
                same_key_exist_187=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional249=!same_key_exist_187,        __freed_obj__ = 0, 
        _if_conditional249) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result95__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_151;
void* right_value205;
char** keys_152;
void* right_value206;
struct sFun** items_153;
void* right_value207;
_Bool* item_existance_154;
int len_155;
char* it_158;
_Bool _for_condtionalA18;
struct sFun* default_value_161;
void* right_value209;
struct sFun* it2_165;
unsigned int hash_166;
int n_167;
_Bool _while_condtional11;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* default_value_168;
void* right_value210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_151, 0, sizeof(int));
memset(&right_value205, 0, sizeof(void*));
memset(&keys_152, 0, sizeof(char**));
memset(&right_value206, 0, sizeof(void*));
memset(&items_153, 0, sizeof(struct sFun**));
memset(&right_value207, 0, sizeof(void*));
memset(&item_existance_154, 0, sizeof(_Bool*));
memset(&len_155, 0, sizeof(int));
memset(&it_158, 0, sizeof(char*));
memset(&default_value_161, 0, sizeof(struct sFun*));
memset(&right_value209, 0, sizeof(void*));
memset(&it2_165, 0, sizeof(struct sFun*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&n_167, 0, sizeof(int));
memset(&default_value_168, 0, sizeof(struct sFun*));
memset(&right_value210, 0, sizeof(void*));
                size_151=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_152=(char**)come_increment_ref_count(((char**)(right_value205=(char**)come_calloc(1, sizeof(char*)*(1*(size_151)), "./comelang2.h", 1370))));
                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_153=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value206=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_151)), "./comelang2.h", 1371))));
                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_154=(_Bool*)come_increment_ref_count(((_Bool*)(right_value207=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_151)), "./comelang2.h", 1372))));
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_155=0;
                __freed_obj__ = 0;
                for(
                it_158=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA18=                !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA18;                it_158=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_161,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    it2_165=((struct sFun*)(right_value209=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1379)),it_158,default_value_161)));
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_166=string_get_hash_key(((char*)come_null_check(it_158, "./comelang2.h", 1380)))%size_151;
                    __freed_obj__ = 0;
                    n_167=hash_166;
                    __freed_obj__ = 0;
                    while(_while_condtional11=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional11) {
                        if(_if_conditional214=item_existance_154[n_167],                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            n_167++;
                            __freed_obj__ = 0;
                            if(_if_conditional215=n_167>=size_151,                            __freed_obj__ = 0, 
                            _if_conditional215) {
                                n_167=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional216=n_167==hash_166,                                __freed_obj__ = 0, 
                                _if_conditional216) {
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
                            item_existance_154[n_167]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_152[n_167]=it_158;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_153[n_167]=((struct sFun*)(right_value210=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1400)),it_158,default_value_168)));
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_155++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_152;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))->items=items_153;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_154;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1416))->size=size_151;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1417))->len=len_155;
                __freed_obj__ = 0;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional205;
char* result_156;
char* __result70__;
_Bool _if_conditional206;
char* __result71__;
char* result_157;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        __freed_obj__ = 0;
                        memset(&result_156,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result70__ = __result_obj__ = result_156;
                        __freed_obj__ = 0;
                        return __result70__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional206=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result71__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result71__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_157,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result72__ = __result_obj__ = result_157;
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result73__ = self==((void*)0)||((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result73__;
                    __freed_obj__ = 0;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional207;
char* result_159;
char* __result74__;
_Bool _if_conditional208;
char* __result75__;
char* result_160;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional207=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        __freed_obj__ = 0;
                        memset(&result_159,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result74__ = __result_obj__ = result_159;
                        __freed_obj__ = 0;
                        return __result74__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional208=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional208) {
                        __result75__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result75__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_160,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result76__ = __result_obj__ = result_160;
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_162;
unsigned int it_163;
_Bool _while_condtional10;
_Bool _if_conditional209;
void* right_value208;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional211;
struct sFun* __result79__;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_162, 0, sizeof(unsigned int));
memset(&it_163, 0, sizeof(unsigned int));
memset(&right_value208, 0, sizeof(void*));
                        hash_162=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_163=hash_162;
                        __freed_obj__ = 0;
                        while(_while_condtional10=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional10) {
                            if(_if_conditional209=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_163],                            __freed_obj__ = 0, 
                            _if_conditional209) {
                                if(_if_conditional211=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value208=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_163], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                (right_value208 && right_value208 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional211) {
                                    __result79__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_163];
                                    __freed_obj__ = 0;
                                    return __result79__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_163++;
                                __freed_obj__ = 0;
                                if(_if_conditional212=it_163>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional212) {
                                    it_163=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional213=it_163==hash_162,                                    __freed_obj__ = 0, 
                                    _if_conditional213) {
                                        __result80__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result80__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result81__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result81__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result82__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result82__;
                        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional210;
_Bool default_value_164;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_164, 0, sizeof(_Bool));
                                    if(_if_conditional210=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional210) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_164,0,sizeof(_Bool));
                                        __freed_obj__ = 0;
                                        __result77__ = default_value_164;
                                        __freed_obj__ = 0;
                                        return __result77__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result78__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result78__;
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
int it2_171;
struct list_item$1charp* it_172;
_Bool _while_condtional13;
void* right_value212;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional220;
struct list$1charp* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_171, 0, sizeof(int));
memset(&it_172, 0, sizeof(struct list_item$1charp*));
memset(&right_value212, 0, sizeof(void*));
                            it2_171=0;
                            __freed_obj__ = 0;
                            it_172=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional13=it_172!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional13) {
                                if(_if_conditional220=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value212=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_172, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value212 && right_value212 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_171,it2_171+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_171++;
                                __freed_obj__ = 0;
                                it_172=((struct list_item$1charp*)come_null_check(it_172, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result86__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result86__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int tmp_173;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1charp* __result83__;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_176;
int i_177;
_Bool _while_condtional15;
_Bool _if_conditional229;
struct list_item$1charp* prev_it_178;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional16;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_181;
struct list_item$1charp* it_182;
struct list_item$1charp* head_prev_it_183;
struct list_item$1charp* tail_it_184;
int i_185;
_Bool _while_condtional17;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_186;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_173, 0, sizeof(int));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&i_177, 0, sizeof(int));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_183, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_184, 0, sizeof(struct list_item$1charp*));
memset(&i_185, 0, sizeof(int));
memset(&prev_it_186, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional221=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional221) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional222=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional222) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional223=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional223) {
                                            tmp_173=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_173;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional224=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional224) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional225=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional225) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional226=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional226) {
                                            __result83__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result83__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional227=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional227) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional228=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional228) {
                                                it_176=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_177=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_176!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    if(_if_conditional229=i_177<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional229) {
                                                        prev_it_178=it_176;
                                                        __freed_obj__ = 0;
                                                        it_176=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_177++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_178 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional230=i_177==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional230) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_176;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_176=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_177++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional231=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional231) {
                                                    it_179=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_180=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_179!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        if(_if_conditional232=i_180==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional232) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_179, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional233=i_180>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional233) {
                                                            prev_it_181=it_179;
                                                            __freed_obj__ = 0;
                                                            it_179=((struct list_item$1charp*)come_null_check(it_179, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_180++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_179=((struct list_item$1charp*)come_null_check(it_179, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_180++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_182=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_183=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_184=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_185=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_182!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional234=i_185==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional234) {
                                                            head_prev_it_183=((struct list_item$1charp*)come_null_check(it_182, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional235=i_185==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional235) {
                                                            tail_it_184=it_182;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional236=i_185>=head&&i_185<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional236) {
                                                            prev_it_186=it_182;
                                                            __freed_obj__ = 0;
                                                            it_182=((struct list_item$1charp*)come_null_check(it_182, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_185++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_186 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_182=((struct list_item$1charp*)come_null_check(it_182, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_185++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional237=head_prev_it_183!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional237) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_183, "./comelang2.h", 620))->next=tail_it_184;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional238=tail_it_184!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional238) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_184, "./comelang2.h", 623))->prev=head_prev_it_183;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result85__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result85__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_174;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_175;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_175, 0, sizeof(struct list_item$1charp*));
                                                it_174=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_174!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    prev_it_175=it_174;
                                                    __freed_obj__ = 0;
                                                    it_174=((struct list_item$1charp*)come_null_check(it_174, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_175 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_175, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result84__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result84__;
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
_Bool _if_conditional244;
char* result_188;
char* __result87__;
_Bool _if_conditional245;
char* __result88__;
char* result_189;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_188, 0, sizeof(char*));
memset(&result_189, 0, sizeof(char*));
            if(_if_conditional244=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional244) {
                __freed_obj__ = 0;
                memset(&result_188,0,sizeof(char*));
                __freed_obj__ = 0;
                __result87__ = __result_obj__ = result_188;
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional245=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional245) {
                __result88__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result88__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_189,0,sizeof(char*));
            __freed_obj__ = 0;
            __result89__ = __result_obj__ = result_189;
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result90__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional246;
char* result_191;
char* __result91__;
_Bool _if_conditional247;
char* __result92__;
char* result_192;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            if(_if_conditional246=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional246) {
                __freed_obj__ = 0;
                memset(&result_191,0,sizeof(char*));
                __freed_obj__ = 0;
                __result91__ = __result_obj__ = result_191;
                __freed_obj__ = 0;
                return __result91__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional247=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional247) {
                __result92__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result92__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_192,0,sizeof(char*));
            __freed_obj__ = 0;
            __result93__ = __result_obj__ = result_192;
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional250;
void* right_value214;
struct list_item$1charp* litem_193;
_Bool _if_conditional251;
void* right_value215;
struct list_item$1charp* litem_194;
void* right_value216;
struct list_item$1charp* litem_195;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1charp*));
memset(&right_value215, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1charp*));
memset(&right_value216, 0, sizeof(void*));
memset(&litem_195, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional250=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional250) {
                    litem_193=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_193, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_193, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_193, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_193;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_193;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional251=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional251) {
                        litem_194=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_194, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_194, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_194, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_194;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_194;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_195=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value216=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_195;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_195;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result94__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result94__;
                __freed_obj__ = 0;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value218;
char* output_file_name_196;
struct _IO_FILE* f_197;
void* right_value219;
struct map$2charphsFunph* o2_saved_198;
char* it_199;
_Bool _for_condtionalA20;
void* right_value220;
void* right_value230;
struct sFun* it2_204;
void* right_value231;
char* header_205;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct map$2charphsFunph* o2_saved_210;
char* it_211;
_Bool _for_condtionalA23;
void* right_value232;
void* right_value233;
struct sFun* it2_212;
void* right_value234;
char* header_213;
_Bool _if_conditional265;
void* right_value235;
char* output_214;
_Bool _if_conditional266;
void* right_value236;
char* output_215;
_Bool _if_conditional267;
_Bool _if_conditional268;
struct map$2charphsFunph* o2_saved_216;
char* it_217;
_Bool _for_condtionalA24;
void* right_value237;
struct sFun* it2_218;
_Bool _if_conditional269;
void* right_value238;
char* output_219;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&output_file_name_196, 0, sizeof(char*));
memset(&f_197, 0, sizeof(struct _IO_FILE*));
memset(&right_value219, 0, sizeof(void*));
memset(&o2_saved_198, 0, sizeof(struct map$2charphsFunph*));
memset(&it_199, 0, sizeof(char*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&it2_204, 0, sizeof(struct sFun*));
memset(&right_value231, 0, sizeof(void*));
memset(&header_205, 0, sizeof(char*));
memset(&o2_saved_210, 0, sizeof(struct map$2charphsFunph*));
memset(&it_211, 0, sizeof(char*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&it2_212, 0, sizeof(struct sFun*));
memset(&right_value234, 0, sizeof(void*));
memset(&header_213, 0, sizeof(char*));
memset(&right_value235, 0, sizeof(void*));
memset(&output_214, 0, sizeof(char*));
memset(&right_value236, 0, sizeof(void*));
memset(&output_215, 0, sizeof(char*));
memset(&o2_saved_216, 0, sizeof(struct map$2charphsFunph*));
memset(&it_217, 0, sizeof(char*));
memset(&right_value237, 0, sizeof(void*));
memset(&it2_218, 0, sizeof(struct sFun*));
memset(&right_value238, 0, sizeof(void*));
memset(&output_219, 0, sizeof(char*));
    output_file_name_196=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "03transpile2.c", 679))->sname))));
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    f_197=fopen(output_file_name_196,"w");
    __freed_obj__ = 0;
    fprintf(f_197,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_197,"%s\n",((char*)(right_value219=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 684))->module, "03transpile2.c", 684))->mSourceHead, "03transpile2.c", 684))))));
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_197,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_198=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 704))->funcs)),it_199=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_198), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA20=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_198), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    _for_condtionalA20;    it_199=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_198), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_204=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 688),((struct optional$2sFunpbool*)(right_value230=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 688))->funcs,((char*)(right_value220=__builtin_string(it_199))))))));
        come_pop_stackframe();
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_205=(char*)come_increment_ref_count(((char*)(right_value231=header_function(it2_204,info))));
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional257=((struct sFun*)come_null_check(it2_204, "03transpile2.c", 702))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_204, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,        __freed_obj__ = 0, 
        _if_conditional257) {
        }
        else {
            if(_if_conditional258=((struct sFun*)come_null_check(it2_204, "03transpile2.c", 702))->mStatic,            __freed_obj__ = 0, 
            _if_conditional258) {
                fprintf(f_197,"static %s",header_205);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional259=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_204, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,                __freed_obj__ = 0, 
                _if_conditional259) {
                }
                else {
                    if(_if_conditional260=string_operator_not_equals(it_199,"__builtin_va_start")&&string_operator_not_equals(it_199,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional260) {
                        fprintf(f_197,"%s\n",header_205,it_199);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_205 && !__freed_obj__) { header_205 = come_decrement_ref_count(header_205, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_198 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_197,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_210=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 724))->funcs)),it_211=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_210), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA23=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_210), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    _for_condtionalA23;    it_211=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_210), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_212=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 706),((struct optional$2sFunpbool*)(right_value233=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 706))->funcs,((char*)(right_value232=__builtin_string(it_211))))))));
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_213=(char*)come_increment_ref_count(((char*)(right_value234=header_function(it2_212,info))));
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional265=((struct sFun*)come_null_check(it2_212, "03transpile2.c", 722))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_212, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,        __freed_obj__ = 0, 
        _if_conditional265) {
            output_214=(char*)come_increment_ref_count(((char*)(right_value235=output_function(it2_212,info))));
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fprintf(f_197,"static inline %s",output_214);
            __freed_obj__ = 0;
            if(output_214 && !__freed_obj__) { output_214 = come_decrement_ref_count(output_214, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional266=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_212, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,            __freed_obj__ = 0, 
            _if_conditional266) {
                output_215=(char*)come_increment_ref_count(((char*)(right_value236=output_function(it2_212,info))));
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                fprintf(f_197,"static inline %s",output_215);
                __freed_obj__ = 0;
                if(output_215 && !__freed_obj__) { output_215 = come_decrement_ref_count(output_215, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional267=((struct sFun*)come_null_check(it2_212, "03transpile2.c", 722))->mStatic,                __freed_obj__ = 0, 
                _if_conditional267) {
                }
                else {
                    if(_if_conditional268=string_operator_not_equals(it_211,"__builtin_va_start")&&string_operator_not_equals(it_211,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional268) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_213 && !__freed_obj__) { header_213 = come_decrement_ref_count(header_213, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_210 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_197,"\n");
    __freed_obj__ = 0;
    fprintf(f_197,"// body function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_216=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 748))->funcs)),it_217=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_216), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA24=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_216), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    _for_condtionalA24;    it_217=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_216), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_218=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 728),((struct optional$2sFunpbool*)(right_value237=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 728))->funcs,it_217)))));
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional269=!((struct sFun*)come_null_check(it2_218, "03transpile2.c", 746))->mExternal,        __freed_obj__ = 0, 
        _if_conditional269) {
            output_219=(char*)come_increment_ref_count(((char*)(right_value238=output_function(it2_218,info))));
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional270=((struct sFun*)come_null_check(it2_218, "03transpile2.c", 744))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_218, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,            __freed_obj__ = 0, 
            _if_conditional270) {
            }
            else {
                if(_if_conditional271=((struct sFun*)come_null_check(it2_218, "03transpile2.c", 744))->mStatic,                __freed_obj__ = 0, 
                _if_conditional271) {
                    fprintf(f_197,"static %s",output_219);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional272=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_218, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,                    __freed_obj__ = 0, 
                    _if_conditional272) {
                    }
                    else {
                        fprintf(f_197,"%s",output_219);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            fprintf(f_197,"\n");
            __freed_obj__ = 0;
            if(output_219 && !__freed_obj__) { output_219 = come_decrement_ref_count(output_219, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_216 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fclose(f_197);
    __freed_obj__ = 0;
    __result104__ = (_Bool)1;
    if(output_file_name_196 && !__freed_obj__) { output_file_name_196 = come_decrement_ref_count(output_file_name_196, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
    if(output_file_name_196 && !__freed_obj__) { output_file_name_196 = come_decrement_ref_count(output_file_name_196, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_200;
unsigned int hash_201;
unsigned int it_202;
_Bool _while_condtional18;
_Bool _if_conditional252;
void* right_value221;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional253;
void* right_value222;
void* right_value223;
struct optional$2sFunpbool* __result98__;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value224;
void* right_value225;
struct optional$2sFunpbool* __result99__;
void* right_value226;
void* right_value227;
struct optional$2sFunpbool* __result100__;
void* right_value228;
void* right_value229;
struct optional$2sFunpbool* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_200, 0, sizeof(struct sFun*));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&it_202, 0, sizeof(unsigned int));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_200,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_201=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_202=hash_201;
            __freed_obj__ = 0;
            while(_while_condtional18=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional18) {
                if(_if_conditional252=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_202],                __freed_obj__ = 0, 
                _if_conditional252) {
                    if(_if_conditional253=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value221=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_202], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value221 && right_value221 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        __result98__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value223=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value222=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_202],(_Bool)1)));
                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result98__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_202++;
                    __freed_obj__ = 0;
                    if(_if_conditional254=it_202>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional254) {
                        it_202=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional255=it_202==hash_201,                        __freed_obj__ = 0, 
                        _if_conditional255) {
                            __result99__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value225=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value224=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_200,(_Bool)0))));
                            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result99__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result100__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value227=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value226=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_200,(_Bool)0))));
                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result100__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value229=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value228=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_200,(_Bool)0))));
            if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result97__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result97__;
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
_Bool _if_conditional256;
struct sFun* default_value_203;
struct sFun* __result102__;
struct sFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_203, 0, sizeof(struct sFun*));
            if(_if_conditional256=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional256) {
                __freed_obj__ = 0;
                memset(&default_value_203,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result102__ = __result_obj__ = default_value_203;
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            else {
                __result103__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_206;
_Bool _for_condtionalA21;
_Bool _if_conditional261;
_Bool _if_conditional262;
int i_207;
_Bool _for_condtionalA22;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_206, 0, sizeof(int));
memset(&i_207, 0, sizeof(int));
        for(
        i_206=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA21=        i_206<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,        __freed_obj__ = 0, 
        _for_condtionalA21;        i_206++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional261=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_206],            __freed_obj__ = 0, 
            _if_conditional261) {
                if(_if_conditional262=1,                __freed_obj__ = 0, 
                _if_conditional262) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_206] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_206], (void*)0, (void*)0, 0, 0, 0, 0); }
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
        i_207=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_207<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_207++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional263=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_207],            __freed_obj__ = 0, 
            _if_conditional263) {
                if(_if_conditional264=1,                __freed_obj__ = 0, 
                _if_conditional264) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_207] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_207] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_207], (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_208;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_208, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_209, 0, sizeof(struct list_item$1charp*));
            it_208=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional19=it_208!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional19) {
                prev_it_209=it_208;
                __freed_obj__ = 0;
                it_208=((struct list_item$1charp*)come_null_check(it_208, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_209 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_209, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* output_file_name_220;
struct _IO_FILE* f_221;
_Bool _if_conditional273;
void* right_value239;
struct map$2charphsFunph* o2_saved_222;
char* it_223;
_Bool _for_condtionalA25;
void* right_value240;
void* right_value241;
struct sFun* it2_224;
void* right_value242;
char* header_225;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct map$2charphsFunph* o2_saved_226;
char* it_227;
_Bool _for_condtionalA26;
void* right_value243;
void* right_value244;
struct sFun* it2_228;
void* right_value245;
char* header_229;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value246;
char* output_230;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value247;
char* output_231;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_220, 0, sizeof(char*));
memset(&f_221, 0, sizeof(struct _IO_FILE*));
memset(&right_value239, 0, sizeof(void*));
memset(&o2_saved_222, 0, sizeof(struct map$2charphsFunph*));
memset(&it_223, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&it2_224, 0, sizeof(struct sFun*));
memset(&right_value242, 0, sizeof(void*));
memset(&header_225, 0, sizeof(char*));
memset(&o2_saved_226, 0, sizeof(struct map$2charphsFunph*));
memset(&it_227, 0, sizeof(char*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&it2_228, 0, sizeof(struct sFun*));
memset(&right_value245, 0, sizeof(void*));
memset(&header_229, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&output_230, 0, sizeof(char*));
memset(&right_value247, 0, sizeof(void*));
memset(&output_231, 0, sizeof(char*));
    output_file_name_220=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "03transpile2.c", 756))->output_file_name);
    __freed_obj__ = 0;
    f_221=fopen(output_file_name_220,"a");
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->num_source_files==0&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional273) {
        fprintf(f_221,"#ifndef __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_221,"#define __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_221,"#include <comelang2.h>\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fprintf(f_221,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_221,"%s\n",((char*)(right_value239=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 767))->module, "03transpile2.c", 767))->mSourceHead, "03transpile2.c", 767))))));
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_221,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_222=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 788))->funcs)),it_223=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_222), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA25=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_222), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    _for_condtionalA25;    it_223=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_222), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_224=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 771),((struct optional$2sFunpbool*)(right_value241=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 771))->funcs,((char*)(right_value240=__builtin_string(it_223))))))));
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_225=(char*)come_increment_ref_count(((char*)(right_value242=header_function(it2_224,info))));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional274=((struct sFun*)come_null_check(it2_224, "03transpile2.c", 786))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_224, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,        __freed_obj__ = 0, 
        _if_conditional274) {
        }
        else {
            if(_if_conditional275=((struct sFun*)come_null_check(it2_224, "03transpile2.c", 786))->mStatic,            __freed_obj__ = 0, 
            _if_conditional275) {
            }
            else {
                if(_if_conditional276=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_224, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,                __freed_obj__ = 0, 
                _if_conditional276) {
                }
                else {
                    if(_if_conditional277=string_operator_not_equals(it_223,"__builtin_va_start")&&string_operator_not_equals(it_223,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional277) {
                        if(_if_conditional278=string_operator_equals(((struct sFun*)come_null_check(it2_224, "03transpile2.c", 785))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 785))->base_sname),                        __freed_obj__ = 0, 
                        _if_conditional278) {
                            fprintf(f_221,"%s\n",header_225,it_223);
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
        if(header_225 && !__freed_obj__) { header_225 = come_decrement_ref_count(header_225, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_222 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_221,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_226=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 812))->funcs)),it_227=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_226), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA26=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_226), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    _for_condtionalA26;    it_227=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_226), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_228=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 790),((struct optional$2sFunpbool*)(right_value244=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 790))->funcs,((char*)(right_value243=__builtin_string(it_227))))))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_229=(char*)come_increment_ref_count(((char*)(right_value245=header_function(it2_228,info))));
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional279=((struct sFun*)come_null_check(it2_228, "03transpile2.c", 810))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_228, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,        __freed_obj__ = 0, 
        _if_conditional279) {
            if(_if_conditional280=string_operator_equals(((struct sFun*)come_null_check(it2_228, "03transpile2.c", 799))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 799))->base_sname),            __freed_obj__ = 0, 
            _if_conditional280) {
                output_230=(char*)come_increment_ref_count(((char*)(right_value246=output_function(it2_228,info))));
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                fprintf(f_221,"static inline %s",output_230);
                __freed_obj__ = 0;
                if(output_230 && !__freed_obj__) { output_230 = come_decrement_ref_count(output_230, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional281=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_228, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,            __freed_obj__ = 0, 
            _if_conditional281) {
                if(_if_conditional282=string_operator_equals(((struct sFun*)come_null_check(it2_228, "03transpile2.c", 805))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 805))->base_sname),                __freed_obj__ = 0, 
                _if_conditional282) {
                    output_231=(char*)come_increment_ref_count(((char*)(right_value247=output_function(it2_228,info))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    fprintf(f_221,"static inline %s",output_231);
                    __freed_obj__ = 0;
                    if(output_231 && !__freed_obj__) { output_231 = come_decrement_ref_count(output_231, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional283=((struct sFun*)come_null_check(it2_228, "03transpile2.c", 810))->mStatic,                __freed_obj__ = 0, 
                _if_conditional283) {
                }
                else {
                    if(_if_conditional284=string_operator_not_equals(it_227,"__builtin_va_start")&&string_operator_not_equals(it_227,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional284) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_229 && !__freed_obj__) { header_229 = come_decrement_ref_count(header_229, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_226 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_221,"\n");
    __freed_obj__ = 0;
    if(_if_conditional285=((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->num_source_files==((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->max_source_files-1&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional285) {
        fprintf(f_221,"#endif\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fclose(f_221);
    __freed_obj__ = 0;
    __result105__ = (_Bool)1;
    if(output_file_name_220 && !__freed_obj__) { output_file_name_220 = come_decrement_ref_count(output_file_name_220, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(output_file_name_220 && !__freed_obj__) { output_file_name_220 = come_decrement_ref_count(output_file_name_220, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional286;
char* msg2_232;
va_list args_233;
int len_234;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_232, 0, sizeof(char*));
memset(&args_233, 0, sizeof(va_list));
memset(&len_234, 0, sizeof(int));
    if(_if_conditional286=((struct sInfo*)come_null_check(info, "03transpile2.c", 828))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional286) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_233,code);
    __freed_obj__ = 0;
    len_234=vasprintf(&msg2_232,code,args_233);
    __freed_obj__ = 0;
    __builtin_va_end(args_233);
    __freed_obj__ = 0;
    if(_if_conditional287=((struct sInfo*)come_null_check(info, "03transpile2.c", 839))->come_fun,    __freed_obj__ = 0, 
    _if_conditional287) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 836))->come_fun, "03transpile2.c", 836))->mSourceHead, "03transpile2.c", 836)),msg2_232);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_232);
    __freed_obj__ = 0;
    if((&args_233) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_233), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional288;
char* msg2_235;
va_list args_236;
int len_237;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_235, 0, sizeof(char*));
memset(&args_236, 0, sizeof(va_list));
memset(&len_237, 0, sizeof(int));
    if(_if_conditional288=((struct sInfo*)come_null_check(info, "03transpile2.c", 847))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional288) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_236,code);
    __freed_obj__ = 0;
    len_237=vasprintf(&msg2_235,code,args_236);
    __freed_obj__ = 0;
    __builtin_va_end(args_236);
    __freed_obj__ = 0;
    if(_if_conditional289=((struct sInfo*)come_null_check(info, "03transpile2.c", 858))->come_fun,    __freed_obj__ = 0, 
    _if_conditional289) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 855))->come_fun, "03transpile2.c", 855))->mSourceHead2, "03transpile2.c", 855)),msg2_235);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_235);
    __freed_obj__ = 0;
    if((&args_236) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_236), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
char* __dec_obj34;
_Bool _if_conditional292;
char* __dec_obj35;
_Bool _if_conditional293;
char* __dec_obj36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional290=((struct sInfo*)come_null_check(info, "03transpile2.c", 866))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional290) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional291=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 870))->module, "03transpile2.c", 870))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional291) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 867))->module, "03transpile2.c", 867))->mLastCode);
        __freed_obj__ = 0;
        __dec_obj34=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode=((void*)0);
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional292=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 874))->module, "03transpile2.c", 874))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional292) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 871))->module, "03transpile2.c", 871))->mLastCode2);
        __freed_obj__ = 0;
        __dec_obj35=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2=((void*)0);
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional293=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 878))->module, "03transpile2.c", 878))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional293) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 875))->module, "03transpile2.c", 875))->mLastCode3);
        __freed_obj__ = 0;
        __dec_obj36=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3=((void*)0);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value248;
char* __dec_obj37;
_Bool _if_conditional296;
void* right_value249;
char* __dec_obj38;
_Bool _if_conditional297;
void* right_value250;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    if(_if_conditional294=((struct sInfo*)come_null_check(info, "03transpile2.c", 885))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional294) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional295=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 889))->module, "03transpile2.c", 889))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional295) {
        add_come_code(info,"%s ,",((char*)(right_value248=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 886))->module, "03transpile2.c", 886))->mLastCode, "03transpile2.c", 886)),0,-3))));
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj37=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional296=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 893))->module, "03transpile2.c", 893))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional296) {
        add_come_code(info,"%s ,",((char*)(right_value249=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 890))->module, "03transpile2.c", 890))->mLastCode2, "03transpile2.c", 890)),0,-3))));
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj38=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional297=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 897))->module, "03transpile2.c", 897))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional297) {
        add_come_code(info,"%s ,",((char*)(right_value250=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 894))->module, "03transpile2.c", 894))->mLastCode3, "03transpile2.c", 894)),0,-3))));
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj39=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional298;
char* msg2_238;
va_list args_239;
int len_240;
void* right_value251;
char* __dec_obj40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_238, 0, sizeof(char*));
memset(&args_239, 0, sizeof(va_list));
memset(&len_240, 0, sizeof(int));
memset(&right_value251, 0, sizeof(void*));
    if(_if_conditional298=((struct sInfo*)come_null_check(info, "03transpile2.c", 904))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional298) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_239,msg);
    __freed_obj__ = 0;
    len_240=vasprintf(&msg2_238,msg,args_239);
    __freed_obj__ = 0;
    __builtin_va_end(args_239);
    __freed_obj__ = 0;
    __dec_obj40=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s",msg2_238))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_238);
    __freed_obj__ = 0;
    if((&args_239) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_239), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional299;
char* msg2_241;
va_list args_242;
int len_243;
void* right_value252;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_241, 0, sizeof(char*));
memset(&args_242, 0, sizeof(va_list));
memset(&len_243, 0, sizeof(int));
memset(&right_value252, 0, sizeof(void*));
    if(_if_conditional299=((struct sInfo*)come_null_check(info, "03transpile2.c", 921))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional299) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_242,msg);
    __freed_obj__ = 0;
    len_243=vasprintf(&msg2_241,msg,args_242);
    __freed_obj__ = 0;
    __builtin_va_end(args_242);
    __freed_obj__ = 0;
    __dec_obj41=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("%s",msg2_241))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_241);
    __freed_obj__ = 0;
    if((&args_242) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_242), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional300;
char* msg2_244;
va_list args_245;
int len_246;
void* right_value253;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_244, 0, sizeof(char*));
memset(&args_245, 0, sizeof(va_list));
memset(&len_246, 0, sizeof(int));
memset(&right_value253, 0, sizeof(void*));
    if(_if_conditional300=((struct sInfo*)come_null_check(info, "03transpile2.c", 938))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional300) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_245,msg);
    __freed_obj__ = 0;
    len_246=vasprintf(&msg2_244,msg,args_245);
    __freed_obj__ = 0;
    __builtin_va_end(args_245);
    __freed_obj__ = 0;
    __dec_obj42=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s",msg2_244))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_244);
    __freed_obj__ = 0;
    if((&args_245) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_245), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    list$1CVALUEph_delete(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 952))->stack, "03transpile2.c", 952)),-value,-1);
    __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
int tmp_247;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list$1CVALUEph* __result106__;
_Bool _if_conditional307;
_Bool _if_conditional309;
struct list_item$1CVALUEph* it_250;
int i_251;
_Bool _while_condtional21;
_Bool _if_conditional310;
struct list_item$1CVALUEph* prev_it_252;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct list_item$1CVALUEph* it_253;
int i_254;
_Bool _while_condtional22;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct list_item$1CVALUEph* prev_it_255;
struct list_item$1CVALUEph* it_256;
struct list_item$1CVALUEph* head_prev_it_257;
struct list_item$1CVALUEph* tail_it_258;
int i_259;
_Bool _while_condtional23;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct list_item$1CVALUEph* prev_it_260;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct list$1CVALUEph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_247, 0, sizeof(int));
memset(&it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_251, 0, sizeof(int));
memset(&prev_it_252, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_254, 0, sizeof(int));
memset(&prev_it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_259, 0, sizeof(int));
memset(&prev_it_260, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional301=head<0,        __freed_obj__ = 0, 
        _if_conditional301) {
            head+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 508))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional302=tail<0,        __freed_obj__ = 0, 
        _if_conditional302) {
            tail+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 511))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional303=head>tail,        __freed_obj__ = 0, 
        _if_conditional303) {
            tmp_247=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_247;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional304=head<0,        __freed_obj__ = 0, 
        _if_conditional304) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional305=tail>((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 528))->len,        __freed_obj__ = 0, 
        _if_conditional305) {
            tail=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 525))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional306=head==tail,        __freed_obj__ = 0, 
        _if_conditional306) {
            __result106__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional307=head==0&&tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 627))->len,        __freed_obj__ = 0, 
        _if_conditional307) {
            list$1CVALUEph_reset(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 534)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional309=head==0,            __freed_obj__ = 0, 
            _if_conditional309) {
                it_250=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 537))->head;
                __freed_obj__ = 0;
                i_251=0;
                __freed_obj__ = 0;
                while(_while_condtional21=it_250!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    if(_if_conditional310=i_251<tail,                    __freed_obj__ = 0, 
                    _if_conditional310) {
                        prev_it_252=it_250;
                        __freed_obj__ = 0;
                        it_250=((struct list_item$1CVALUEph*)come_null_check(it_250, "./comelang2.h", 543))->next;
                        __freed_obj__ = 0;
                        i_251++;
                        __freed_obj__ = 0;
                        if(prev_it_252 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 548))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional311=i_251==tail,                        __freed_obj__ = 0, 
                        _if_conditional311) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 551))->head=it_250;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_250=((struct list_item$1CVALUEph*)come_null_check(it_250, "./comelang2.h", 556))->next;
                            __freed_obj__ = 0;
                            i_251++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional312=tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 627))->len,                __freed_obj__ = 0, 
                _if_conditional312) {
                    it_253=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 562))->head;
                    __freed_obj__ = 0;
                    i_254=0;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_253!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        if(_if_conditional313=i_254==head,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1CVALUEph*)come_null_check(it_253, "./comelang2.h", 566))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional314=i_254>=head,                        __freed_obj__ = 0, 
                        _if_conditional314) {
                            prev_it_255=it_253;
                            __freed_obj__ = 0;
                            it_253=((struct list_item$1CVALUEph*)come_null_check(it_253, "./comelang2.h", 573))->next;
                            __freed_obj__ = 0;
                            i_254++;
                            __freed_obj__ = 0;
                            if(prev_it_255 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 578))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_253=((struct list_item$1CVALUEph*)come_null_check(it_253, "./comelang2.h", 581))->next;
                            __freed_obj__ = 0;
                            i_254++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_256=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 587))->head;
                    __freed_obj__ = 0;
                    head_prev_it_257=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_258=((void*)0);
                    __freed_obj__ = 0;
                    i_259=0;
                    __freed_obj__ = 0;
                    while(_while_condtional23=it_256!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional23) {
                        if(_if_conditional315=i_259==head,                        __freed_obj__ = 0, 
                        _if_conditional315) {
                            head_prev_it_257=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 596))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional316=i_259==tail,                        __freed_obj__ = 0, 
                        _if_conditional316) {
                            tail_it_258=it_256;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional317=i_259>=head&&i_259<tail,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            prev_it_260=it_256;
                            __freed_obj__ = 0;
                            it_256=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 606))->next;
                            __freed_obj__ = 0;
                            i_259++;
                            __freed_obj__ = 0;
                            if(prev_it_260 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 611))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_256=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 614))->next;
                            __freed_obj__ = 0;
                            i_259++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional318=head_prev_it_257!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        ((struct list_item$1CVALUEph*)come_null_check(head_prev_it_257, "./comelang2.h", 620))->next=tail_it_258;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional319=tail_it_258!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional319) {
                        ((struct list_item$1CVALUEph*)come_null_check(tail_it_258, "./comelang2.h", 623))->prev=head_prev_it_257;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result108__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_248;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_249;
struct list$1CVALUEph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_248, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_249, 0, sizeof(struct list_item$1CVALUEph*));
                it_248=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional20=it_248!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional20) {
                    prev_it_249=it_248;
                    __freed_obj__ = 0;
                    it_248=((struct list_item$1CVALUEph*)come_null_check(it_248, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_249 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result107__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result107__;
                __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional308=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj43;
void* right_value258;
void* right_value262;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    __dec_obj43=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode=((void*)0);
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result116__ = __result_obj__ = ((struct CVALUE*)(right_value262=CVALUE_clone(optional$2CVALUEphbool_value((come_push_stackframe("03transpile2.c", 960),((struct optional$2CVALUEphbool*)(right_value258=list$1CVALUEphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 960))->stack,offset))))))));
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result116__;
    come_pop_stackframe();
    __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional320;
struct list_item$1CVALUEph* it_261;
int i_262;
_Bool _while_condtional24;
_Bool _if_conditional321;
void* right_value254;
void* right_value255;
struct optional$2CVALUEphbool* __result110__;
struct CVALUE* default_value_263;
void* right_value256;
void* right_value257;
struct optional$2CVALUEphbool* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_262, 0, sizeof(int));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&default_value_263, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
        if(_if_conditional320=position<0,        __freed_obj__ = 0, 
        _if_conditional320) {
            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_261=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
        __freed_obj__ = 0;
        i_262=0;
        __freed_obj__ = 0;
        while(_while_condtional24=it_261!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional24) {
            if(_if_conditional321=position==i_262,            __freed_obj__ = 0, 
            _if_conditional321) {
                __result110__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value255=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value254=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 742))->item),(_Bool)1)));
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result110__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_261=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 744))->next;
            __freed_obj__ = 0;
            i_262++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_263,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result111__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value257=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value256=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_263),(_Bool)0))));
        if(default_value_263 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
        if(default_value_263 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj44;
struct optional$2CVALUEphbool* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj44=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                    if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result109__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result109__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional322=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional323;
struct CVALUE* default_value_264;
struct CVALUE* __result112__;
struct CVALUE* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_264, 0, sizeof(struct CVALUE*));
        if(_if_conditional323=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional323) {
            __freed_obj__ = 0;
            memset(&default_value_264,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = default_value_264;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        else {
            __result113__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional324;
struct CVALUE* __result114__;
void* right_value259;
struct CVALUE* result_265;
_Bool _if_conditional325;
void* right_value260;
char* __dec_obj45;
_Bool _if_conditional326;
void* right_value261;
struct sType* __dec_obj46;
_Bool _if_conditional327;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
        if(_if_conditional324=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional324) {
            __result114__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional325=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional325) {
            __dec_obj45=((struct CVALUE*)come_null_check(result_265, "CVALUE_clone", 4))->c_value;
            ((struct CVALUE*)come_null_check(result_265, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value260=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional326=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional326) {
            __dec_obj46=((struct CVALUE*)come_null_check(result_265, "CVALUE_clone", 5))->type;
            ((struct CVALUE*)come_null_check(result_265, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
            if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional327=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional327) {
            ((struct CVALUE*)come_null_check(result_265, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result115__ = __result_obj__ = result_265;
        if(result_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
        if(result_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj47=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode=((void*)0);
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2=((void*)0);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj49=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
}

