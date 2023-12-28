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
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};
struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};
struct sTypedefNode
{
    char* mTypeName;
    struct sType* mType;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info);

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
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
_Bool sTypedefNode_terminated();

char* sTypedefNode_kind();

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info);

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info);

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void sTypedefNode_finalize(struct sTypedefNode* self);
static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self);
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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
void* right_value36;
struct sType* __dec_obj25;
void* right_value37;
char* __dec_obj26;
void* right_value47;
struct list$1tuple2$2sTypephcharphph* __dec_obj32;
struct sTypedefNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 18))->sline=((struct sInfo*)come_null_check(info, "17typedef.c", 18))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 19))->sname;
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 19))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "17typedef.c", 19))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 21))->mTypeName;
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 21))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(type_name))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj25=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 22))->mType;
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 22))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_clone(type))));
    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj26=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 24))->mDeclareSName;
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 24))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(((struct sInfo*)come_null_check(info, "17typedef.c", 24))->sname))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj32=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 26))->multiple_declare;
    ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 26))->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value47=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    if(__dec_obj32) { come_call_finalizer(list$1tuple2$2sTypephcharphph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result25__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct sType* __result1__;
void* right_value2;
struct sType* result_0;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value5;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional23;
void* right_value6;
struct tuple1$1sTypeph* __dec_obj5;
_Bool _if_conditional24;
void* right_value7;
char* __dec_obj6;
_Bool _if_conditional25;
void* right_value14;
struct list$1sTypeph* __dec_obj10;
_Bool _if_conditional29;
void* right_value22;
struct list$1sNodeph* __dec_obj14;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value23;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional44;
void* right_value30;
struct list$1charph* __dec_obj19;
_Bool _if_conditional48;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value32;
struct sNode* __dec_obj21;
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
void* right_value33;
struct sNode* __dec_obj22;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value34;
char* __dec_obj23;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value35;
char* __dec_obj24;
struct sType* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result1__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result1__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value5=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj5=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value6=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj5) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj6=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value7=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
            if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj10=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj10) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj14=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj14) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
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
            __dec_obj15=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value30=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj19) { come_call_finalizer(list$1charph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj20) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
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
            __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
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
            __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0); } 
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
            __dec_obj23=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value34=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
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
            __dec_obj24=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value35=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
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
void* right_value3;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional22;
void* right_value4;
struct sType* __dec_obj3;
struct tuple1$1sTypeph* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value4, 0, sizeof(void*));
                if(_if_conditional20=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional20) {
                    __result2__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result2__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __dec_obj3=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value4=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
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
void* right_value8;
void* right_value9;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value13;
struct list$1sTypeph* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                if(_if_conditional26=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __result4__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result4__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value9=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value8=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
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
void* right_value10;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj7;
_Bool _if_conditional28;
void* right_value11;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj8;
void* right_value12;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj9;
struct list$1sTypeph* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional27=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional27) {
                            litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional28) {
                                litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
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
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value21;
struct list$1sNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value21, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result8__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result8__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0, 0); } 
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
void* right_value17;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj11;
_Bool _if_conditional32;
void* right_value18;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj12;
void* right_value19;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj13;
struct list$1sNodeph* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
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
void* right_value20;
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
memset(&right_value20, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                        if(_if_conditional33=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            __result11__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result11__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
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
void* right_value24;
void* right_value25;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value29;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value29, 0, sizeof(void*));
                if(_if_conditional45=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    __result14__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value29=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
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
void* right_value26;
struct list_item$1charph* litem_21;
char* __dec_obj16;
_Bool _if_conditional47;
void* right_value27;
struct list_item$1charph* litem_22;
char* __dec_obj17;
void* right_value28;
struct list_item$1charph* litem_23;
char* __dec_obj18;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional46=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional46) {
                            litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj16=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj18=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
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

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional87;
struct list$1tuple2$2sTypephcharphph* __result19__;
void* right_value38;
void* right_value39;
struct list$1tuple2$2sTypephcharphph* result_26;
struct list_item$1tuple2$2sTypephcharphph* it_27;
_Bool _while_condtional8;
void* right_value46;
struct list$1tuple2$2sTypephcharphph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_27, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&right_value46, 0, sizeof(void*));
        if(_if_conditional87=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            __result19__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result19__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_26=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value39=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)(right_value38=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_27=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional8=it_27!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional8) {
            list$1tuple2$2sTypephcharphph_add(((struct list$1tuple2$2sTypephcharphph*)come_null_check(result_26, "./comelang2.h", 192)),(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value46=tuple2$2sTypephcharphp_clone(((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(it_27, "./comelang2.h", 192))->item)))));
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_27=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(it_27, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result24__ = __result_obj__ = result_26;
        if(result_26 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
        if(result_26 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2sTypephcharphph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result20__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result20__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_24;
_Bool _while_condtional7;
struct list_item$1tuple2$2sTypephcharphph* prev_it_25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_24, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_25, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_24=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_24!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    prev_it_25=it_24;
                    __freed_obj__ = 0;
                    it_24=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(it_24, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_25 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional88=self!=((void*)0)&&((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(self, "list_item$1tuple2$2sTypephcharphphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional88) {
                            if(((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(self, "list_item$1tuple2$2sTypephcharphphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(self, "list_item$1tuple2$2sTypephcharphphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional89;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional89=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional89) {
                                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional90=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional90) {
                                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional91;
void* right_value40;
struct list_item$1tuple2$2sTypephcharphph* litem_28;
struct tuple2$2sTypephcharph* __dec_obj27;
_Bool _if_conditional94;
void* right_value41;
struct list_item$1tuple2$2sTypephcharphph* litem_29;
struct tuple2$2sTypephcharph* __dec_obj28;
void* right_value42;
struct list_item$1tuple2$2sTypephcharphph* litem_30;
struct tuple2$2sTypephcharph* __dec_obj29;
struct list$1tuple2$2sTypephcharphph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional91=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional91) {
                    litem_28=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value40=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 202))));
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_28, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_28, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj27=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_28, "./comelang2.h", 206))->item;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_28, "./comelang2.h", 206))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    if(__dec_obj27) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_28;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 209))->head=litem_28;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional94=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional94) {
                        litem_29=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value41=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 212))));
                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_29, "./comelang2.h", 214))->prev=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_29, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj28=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_29, "./comelang2.h", 216))->item;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_29, "./comelang2.h", 216))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        if(__dec_obj28) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_29;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_29;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_30=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value42=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 222))));
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_30, "./comelang2.h", 224))->prev=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_30, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj29=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_30, "./comelang2.h", 226))->item;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_30, "./comelang2.h", 226))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_30;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_30;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result21__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result21__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional92=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional92) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional93=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional93) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
struct tuple2$2sTypephcharph* __result22__;
void* right_value43;
struct tuple2$2sTypephcharph* result_31;
_Bool _if_conditional96;
void* right_value44;
struct sType* __dec_obj30;
_Bool _if_conditional97;
void* right_value45;
char* __dec_obj31;
struct tuple2$2sTypephcharph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
                if(_if_conditional95=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional95) {
                    __result22__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result22__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_31=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value43=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3))));
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharph_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional96=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional96) {
                    __dec_obj30=((struct tuple2$2sTypephcharph*)come_null_check(result_31, "tuple2$2sTypephcharphp_clone", 4))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(result_31, "tuple2$2sTypephcharphp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_clone", 4))->v1))));
                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional97=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_clone", 6))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional97) {
                    __dec_obj31=((struct tuple2$2sTypephcharph*)come_null_check(result_31, "tuple2$2sTypephcharphp_clone", 5))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(result_31, "tuple2$2sTypephcharphp_clone", 5))->v2=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_clone", 5))->v2))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result23__ = __result_obj__ = result_31;
                if(result_31 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharph_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
                if(result_31 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharph_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sTypedefNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result26__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}

char* sTypedefNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value48;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((char*)(right_value48=__builtin_string("sTypedefNode")));
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
char* type_name_32;
_Bool _if_conditional103;
void* right_value62;
void* right_value63;
void* right_value64;
void* right_value65;
void* right_value66;
struct sType* type_80;
void* right_value67;
char* __dec_obj33;
void* right_value76;
void* right_value77;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list$1tuple2$2sTypephcharphph* o2_saved_102;
struct tuple2$2sTypephcharph* it_105;
_Bool _for_condtionalA5;
struct tuple2$2sTypephcharph* multiple_assgin_var1;
struct sType* type_108;
char* type_name_109;
_Bool _if_conditional186;
void* right_value78;
char* __dec_obj34;
void* right_value79;
void* right_value80;
_Bool _if_conditional187;
void* right_value81;
void* right_value82;
struct sType* type_110;
_Bool _if_conditional190;
void* right_value83;
char* __dec_obj35;
void* right_value84;
void* right_value85;
_Bool _if_conditional191;
void* right_value86;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&type_name_32, 0, sizeof(char*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&type_80, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&o2_saved_102, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_105, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_108, 0, sizeof(struct sType*));
memset(&type_name_109, 0, sizeof(char*));
memset(&type_108, 0, sizeof(struct sType*));
memset(&type_name_109, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&type_110, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
    type_name_32=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 43))->mTypeName))));
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional103=string_operator_equals(type_name_32,"__darwin_va_list"),    __freed_obj__ = 0, 
    _if_conditional103) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "17typedef.c", 46))->classes, "17typedef.c", 46)),(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string("__darwin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value64=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value63=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "17typedef.c", 46)))),"__darwin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value65=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "17typedef.c", 48)))),"__darwin_va_list",(_Bool)0,info))));
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj33=((struct sType*)come_null_check(type_80, "17typedef.c", 49))->mOriginalTypeName;
        ((struct sType*)come_null_check(type_80, "17typedef.c", 49))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value67=__builtin_string("__darwin_va_list"))));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "17typedef.c", 51))->types, "17typedef.c", 51)),(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(type_name_32)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(type_80)))));
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional180=((struct sInfo*)come_null_check(info, "17typedef.c", 58))->output_header_file&&string_operator_not_equals(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 58))->mDeclareSName,((struct sInfo*)come_null_check(info, "17typedef.c", 58))->base_sname),        __freed_obj__ = 0, 
        _if_conditional180) {
        }
        else {
            add_come_code_at_source_head(info,"typedef __builtin_va_list __darwin_va_list;\n");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(type_80 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional181=((struct sTypedefNode*)come_null_check(self, "17typedef.c", 93))->multiple_declare,        __freed_obj__ = 0, 
        _if_conditional181) {
            for(
            o2_saved_102=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((((struct sTypedefNode*)come_null_check(self, "17typedef.c", 76))->multiple_declare)),it_105=list$1tuple2$2sTypephcharphph_begin(((struct list$1tuple2$2sTypephcharphph*)come_null_check((o2_saved_102), "17typedef.c", 76))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            !list$1tuple2$2sTypephcharphph_end(((struct list$1tuple2$2sTypephcharphph*)come_null_check((o2_saved_102), "17typedef.c", 76))) ,            __freed_obj__ = 0, 
            _for_condtionalA5;            it_105=list$1tuple2$2sTypephcharphph_next(((struct list$1tuple2$2sTypephcharphph*)come_null_check((o2_saved_102), "17typedef.c", 76))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var1=it_105;
                type_108=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                type_name_109=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                __freed_obj__ = 0;
                if(_if_conditional186=string_operator_not_equals(type_name_109,"va_list"),                __freed_obj__ = 0, 
                _if_conditional186) {
                    __dec_obj34=((struct sType*)come_null_check(type_108, "17typedef.c", 64))->mOriginalTypeName;
                    ((struct sType*)come_null_check(type_108, "17typedef.c", 64))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(type_name_109))));
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "17typedef.c", 67))->types, "17typedef.c", 67)),(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(type_name_109)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type_108)))));
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional187=((struct sInfo*)come_null_check(info, "17typedef.c", 75))->output_header_file&&string_operator_not_equals(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 75))->mDeclareSName,((struct sInfo*)come_null_check(info, "17typedef.c", 75))->base_sname),                __freed_obj__ = 0, 
                _if_conditional187) {
                }
                else {
                    come_clear_stackframe();
                    add_come_code_at_source_head(info,"typedef %s;\n",optional$2charphbool_expect((come_push_stackframe("17typedef.c", 73),((struct optional$2charphbool*)(right_value81=make_define_var(type_108,type_name_109,(_Bool)1,info))))));
                    come_pop_stackframe();
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type_108 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_108, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_102 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 78))->mType))));
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional190=string_operator_not_equals(type_name_32,"va_list"),            __freed_obj__ = 0, 
            _if_conditional190) {
                __dec_obj35=((struct sType*)come_null_check(type_110, "17typedef.c", 81))->mOriginalTypeName;
                ((struct sType*)come_null_check(type_110, "17typedef.c", 81))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(type_name_32))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "17typedef.c", 84))->types, "17typedef.c", 84)),(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(type_name_32)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type_110)))));
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional191=((struct sInfo*)come_null_check(info, "17typedef.c", 91))->output_header_file&&string_operator_not_equals(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 91))->mDeclareSName,((struct sInfo*)come_null_check(info, "17typedef.c", 91))->base_sname),            __freed_obj__ = 0, 
            _if_conditional191) {
            }
            else {
                come_clear_stackframe();
                add_come_code_at_source_head(info,"typedef %s;\n",optional$2charphbool_expect((come_push_stackframe("17typedef.c", 89),((struct optional$2charphbool*)(right_value86=make_define_var(type_110,type_name_32,(_Bool)1,info))))));
                come_pop_stackframe();
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(type_110 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result74__ = (_Bool)1;
    if(type_name_32 && !__freed_obj__) { type_name_32 = come_decrement_ref_count(type_name_32, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
    if(type_name_32 && !__freed_obj__) { type_name_32 = come_decrement_ref_count(type_name_32, (void*)0, (void*)0, 0, 0, 0); }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
unsigned int hash_53;
unsigned int it_54;
_Bool _while_condtional12;
_Bool _if_conditional123;
void* right_value56;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool same_key_exist_71;
char* it2_74;
_Bool _for_condtionalA2;
void* right_value58;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct map$2charphsClassph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_53, 0, sizeof(unsigned int));
memset(&it_54, 0, sizeof(unsigned int));
memset(&right_value56, 0, sizeof(void*));
memset(&same_key_exist_71, 0, sizeof(_Bool));
memset(&it2_74, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
            if(_if_conditional104=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional104) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_53=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_54=hash_53;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional123=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_54],                __freed_obj__ = 0, 
                _if_conditional123) {
                    if(_if_conditional124=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value56=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_54], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    (right_value56 && right_value56 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional124) {
                        if(_if_conditional125=1,                        __freed_obj__ = 0, 
                        _if_conditional125) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_54]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_54] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_54] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_54], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_54]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_54]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_54]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional145=1,                        __freed_obj__ = 0, 
                        _if_conditional145) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_54] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_54], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_54]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_54]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_54++;
                    __freed_obj__ = 0;
                    if(_if_conditional146=it_54>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional146) {
                        it_54=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional147=it_54==hash_53,                        __freed_obj__ = 0, 
                        _if_conditional147) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_54]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional148=1,                    __freed_obj__ = 0, 
                    _if_conditional148) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_54]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_54]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional149=1,                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_54]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_54]=item;
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
            same_key_exist_71=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_74=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            it2_74=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional154=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value58=string_equals(((char*)come_null_check(it2_74, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value58 && right_value58 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional154) {
                    same_key_exist_71=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional155=!same_key_exist_71,            __freed_obj__ = 0, 
            _if_conditional155) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result53__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result53__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_33;
void* right_value50;
char** keys_34;
void* right_value51;
struct sClass** items_35;
void* right_value52;
_Bool* item_existance_38;
int len_39;
char* it_42;
_Bool _for_condtionalA1;
struct sClass* default_value_45;
void* right_value54;
struct sClass* it2_49;
unsigned int hash_50;
int n_51;
_Bool _while_condtional11;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct sClass* default_value_52;
void* right_value55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_33, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&keys_34, 0, sizeof(char**));
memset(&right_value51, 0, sizeof(void*));
memset(&items_35, 0, sizeof(struct sClass**));
memset(&right_value52, 0, sizeof(void*));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_42, 0, sizeof(char*));
memset(&default_value_45, 0, sizeof(struct sClass*));
memset(&right_value54, 0, sizeof(void*));
memset(&it2_49, 0, sizeof(struct sClass*));
memset(&hash_50, 0, sizeof(unsigned int));
memset(&n_51, 0, sizeof(int));
memset(&default_value_52, 0, sizeof(struct sClass*));
memset(&right_value55, 0, sizeof(void*));
                    size_33=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_34=(char**)come_increment_ref_count(((char**)(right_value50=(char**)come_calloc(1, sizeof(char*)*(1*(size_33)), "./comelang2.h", 1370))));
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_35=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value51=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_33)), "./comelang2.h", 1371))));
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value52=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_33)), "./comelang2.h", 1372))));
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_39=0;
                    __freed_obj__ = 0;
                    for(
                    it_42=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA1=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA1;                    it_42=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_45,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_49=((struct sClass*)(right_value54=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_42,default_value_45)));
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_50=string_get_hash_key(((char*)come_null_check(it_42, "./comelang2.h", 1380)))%size_33;
                        __freed_obj__ = 0;
                        n_51=hash_50;
                        __freed_obj__ = 0;
                        while(_while_condtional11=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional11) {
                            if(_if_conditional120=item_existance_38[n_51],                            __freed_obj__ = 0, 
                            _if_conditional120) {
                                n_51++;
                                __freed_obj__ = 0;
                                if(_if_conditional121=n_51>=size_33,                                __freed_obj__ = 0, 
                                _if_conditional121) {
                                    n_51=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional122=n_51==hash_50,                                    __freed_obj__ = 0, 
                                    _if_conditional122) {
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
                                item_existance_38[n_51]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_34[n_51]=it_42;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_35[n_51]=((struct sClass*)(right_value55=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_42,default_value_52)));
                                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_39++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_34;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_35;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_38;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_33;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_39;
                    __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional110;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional105=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional105) {
                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional106=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional106) {
                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional110=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional110) {
                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_36;
_Bool _while_condtional9;
struct list_item$1tuple2$2charphsTypephph* prev_it_37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_36, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_37, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_36=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional9=it_36!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional9) {
                                    prev_it_37=it_36;
                                    __freed_obj__ = 0;
                                    it_36=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_36, "./comelang2.h", 172))->next;
                                    __freed_obj__ = 0;
                                    if(prev_it_37 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_37, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional107=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional107) {
                                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional108;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional108=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional108) {
                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional109=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional109) {
                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional111;
char* result_40;
char* __result28__;
_Bool _if_conditional112;
char* __result29__;
char* result_41;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_40, 0, sizeof(char*));
memset(&result_41, 0, sizeof(char*));
                        if(_if_conditional111=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional111) {
                            __freed_obj__ = 0;
                            memset(&result_40,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result28__ = __result_obj__ = result_40;
                            __freed_obj__ = 0;
                            return __result28__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional112=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional112) {
                            __result29__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_41,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result30__ = __result_obj__ = result_41;
                        __freed_obj__ = 0;
                        return __result30__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result31__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result31__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional113;
char* result_43;
char* __result32__;
_Bool _if_conditional114;
char* __result33__;
char* result_44;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_43, 0, sizeof(char*));
memset(&result_44, 0, sizeof(char*));
                        if(_if_conditional113=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            __freed_obj__ = 0;
                            memset(&result_43,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result32__ = __result_obj__ = result_43;
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional114=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional114) {
                            __result33__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result33__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_44,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result34__ = __result_obj__ = result_44;
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_46;
unsigned int it_47;
_Bool _while_condtional10;
_Bool _if_conditional115;
void* right_value53;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional117;
struct sClass* __result37__;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sClass* __result38__;
struct sClass* __result39__;
struct sClass* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(unsigned int));
memset(&right_value53, 0, sizeof(void*));
                            hash_46=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_47=hash_46;
                            __freed_obj__ = 0;
                            while(_while_condtional10=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional10) {
                                if(_if_conditional115=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_47],                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    if(_if_conditional117=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value53=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_47], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                    (right_value53 && right_value53 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional117) {
                                        __result37__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_47];
                                        __freed_obj__ = 0;
                                        return __result37__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_47++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional118=it_47>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional118) {
                                        it_47=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional119=it_47==hash_46,                                        __freed_obj__ = 0, 
                                        _if_conditional119) {
                                            __result38__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result38__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result39__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result39__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result40__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
_Bool default_value_48;
_Bool __result35__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_48, 0, sizeof(_Bool));
                                        if(_if_conditional116=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional116) {
                                            __freed_obj__ = 0;
                                            memset(&default_value_48,0,sizeof(_Bool));
                                            __freed_obj__ = 0;
                                            __result35__ = default_value_48;
                                            __freed_obj__ = 0;
                                            return __result35__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __result36__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                            __freed_obj__ = 0;
                                            return __result36__;
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
int it2_55;
struct list_item$1charp* it_56;
_Bool _while_condtional13;
void* right_value57;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional126;
struct list$1charp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_55, 0, sizeof(int));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&right_value57, 0, sizeof(void*));
                                it2_55=0;
                                __freed_obj__ = 0;
                                it_56=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional13=it_56!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional13) {
                                    if(_if_conditional126=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value57=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    (right_value57 && right_value57 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional126) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_55,it2_55+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_55++;
                                    __freed_obj__ = 0;
                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result44__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result44__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
int tmp_57;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list$1charp* __result41__;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list_item$1charp* it_60;
int i_61;
_Bool _while_condtional15;
_Bool _if_conditional135;
struct list_item$1charp* prev_it_62;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct list_item$1charp* it_63;
int i_64;
_Bool _while_condtional16;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct list_item$1charp* prev_it_65;
struct list_item$1charp* it_66;
struct list_item$1charp* head_prev_it_67;
struct list_item$1charp* tail_it_68;
int i_69;
_Bool _while_condtional17;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list_item$1charp* prev_it_70;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_57, 0, sizeof(int));
memset(&it_60, 0, sizeof(struct list_item$1charp*));
memset(&i_61, 0, sizeof(int));
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*));
memset(&it_63, 0, sizeof(struct list_item$1charp*));
memset(&i_64, 0, sizeof(int));
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_67, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_68, 0, sizeof(struct list_item$1charp*));
memset(&i_69, 0, sizeof(int));
memset(&prev_it_70, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional127=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional127) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional128=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional128) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional129=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional129) {
                                                tmp_57=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_57;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional130=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional130) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional131=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional131) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional132=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional132) {
                                                __result41__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result41__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional133=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional133) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional134=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional134) {
                                                    it_60=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_61=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional15=it_60!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional15) {
                                                        if(_if_conditional135=i_61<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional135) {
                                                            prev_it_62=it_60;
                                                            __freed_obj__ = 0;
                                                            it_60=((struct list_item$1charp*)come_null_check(it_60, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_61++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_62 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional136=i_61==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional136) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_60;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_60=((struct list_item$1charp*)come_null_check(it_60, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_61++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional137=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional137) {
                                                        it_63=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_64=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional16=it_63!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional16) {
                                                            if(_if_conditional138=i_64==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional138) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_63, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional139=i_64>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional139) {
                                                                prev_it_65=it_63;
                                                                __freed_obj__ = 0;
                                                                it_63=((struct list_item$1charp*)come_null_check(it_63, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_64++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_65 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_63=((struct list_item$1charp*)come_null_check(it_63, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_64++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_66=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_67=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_68=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_69=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional17=it_66!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional17) {
                                                            if(_if_conditional140=i_69==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional140) {
                                                                head_prev_it_67=((struct list_item$1charp*)come_null_check(it_66, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional141=i_69==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional141) {
                                                                tail_it_68=it_66;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional142=i_69>=head&&i_69<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional142) {
                                                                prev_it_70=it_66;
                                                                __freed_obj__ = 0;
                                                                it_66=((struct list_item$1charp*)come_null_check(it_66, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_69++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_70 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_66=((struct list_item$1charp*)come_null_check(it_66, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_69++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional143=head_prev_it_67!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional143) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_67, "./comelang2.h", 620))->next=tail_it_68;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional144=tail_it_68!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional144) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_68, "./comelang2.h", 623))->prev=head_prev_it_67;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result43__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result43__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_58;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_59;
struct list$1charp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charp*));
                                                    it_58=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional14=it_58!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional14) {
                                                        prev_it_59=it_58;
                                                        __freed_obj__ = 0;
                                                        it_58=((struct list_item$1charp*)come_null_check(it_58, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result42__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result42__;
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
_Bool _if_conditional150;
char* result_72;
char* __result45__;
_Bool _if_conditional151;
char* __result46__;
char* result_73;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                if(_if_conditional150=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional150) {
                    __freed_obj__ = 0;
                    memset(&result_72,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result45__ = __result_obj__ = result_72;
                    __freed_obj__ = 0;
                    return __result45__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional151=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional151) {
                    __result46__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_73,0,sizeof(char*));
                __freed_obj__ = 0;
                __result47__ = __result_obj__ = result_73;
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result48__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
char* result_75;
char* __result49__;
_Bool _if_conditional153;
char* __result50__;
char* result_76;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(char*));
memset(&result_76, 0, sizeof(char*));
                if(_if_conditional152=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional152) {
                    __freed_obj__ = 0;
                    memset(&result_75,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result49__ = __result_obj__ = result_75;
                    __freed_obj__ = 0;
                    return __result49__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional153=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional153) {
                    __result50__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result50__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_76,0,sizeof(char*));
                __freed_obj__ = 0;
                __result51__ = __result_obj__ = result_76;
                __freed_obj__ = 0;
                return __result51__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional156;
void* right_value59;
struct list_item$1charp* litem_77;
_Bool _if_conditional157;
void* right_value60;
struct list_item$1charp* litem_78;
void* right_value61;
struct list_item$1charp* litem_79;
struct list$1charp* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
memset(&right_value60, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1charp*));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional156=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value59=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_77, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_77;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_77;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional157=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional157) {
                            litem_78=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value60=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_78, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_78;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_78;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_79=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value61=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_79, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_79, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_79, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_79;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_79;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result52__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional158;
unsigned int hash_98;
unsigned int it_99;
_Bool _while_condtional20;
_Bool _if_conditional170;
void* right_value74;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool same_key_exist_100;
char* it2_101;
_Bool _for_condtionalA4;
void* right_value75;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional178;
_Bool _if_conditional179;
struct map$2charphsTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_98, 0, sizeof(unsigned int));
memset(&it_99, 0, sizeof(unsigned int));
memset(&right_value74, 0, sizeof(void*));
memset(&same_key_exist_100, 0, sizeof(_Bool));
memset(&it2_101, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
            if(_if_conditional158=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional158) {
                map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_98=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_99=hash_98;
            __freed_obj__ = 0;
            while(_while_condtional20=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional170=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_99],                __freed_obj__ = 0, 
                _if_conditional170) {
                    if(_if_conditional171=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a6=((struct optional$2boolbool*)(right_value74=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_99], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a6)),                    (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional171) {
                        if(_if_conditional172=1,                        __freed_obj__ = 0, 
                        _if_conditional172) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_99]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_99] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_99] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_99], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_99]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_99]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_99]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional173=1,                        __freed_obj__ = 0, 
                        _if_conditional173) {
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_99] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_99], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->items[it_99]=(struct sType*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->items[it_99]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_99++;
                    __freed_obj__ = 0;
                    if(_if_conditional174=it_99>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional174) {
                        it_99=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional175=it_99==hash_98,                        __freed_obj__ = 0, 
                        _if_conditional175) {
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
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_99]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional176=1,                    __freed_obj__ = 0, 
                    _if_conditional176) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_99]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_99]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional177=1,                    __freed_obj__ = 0, 
                    _if_conditional177) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1470))->items[it_99]=(struct sType*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->items[it_99]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_100=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_101=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            it2_101=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional178=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a7=((struct optional$2boolbool*)(right_value75=string_equals(((char*)come_null_check(it2_101, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a7)),                (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional178) {
                    same_key_exist_100=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional179=!same_key_exist_100,            __freed_obj__ = 0, 
            _if_conditional179) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result65__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_81;
void* right_value68;
char** keys_82;
void* right_value69;
struct sType** items_83;
void* right_value70;
_Bool* item_existance_84;
int len_85;
char* it_88;
_Bool _for_condtionalA3;
struct sType* default_value_91;
void* right_value72;
struct sType* it2_94;
unsigned int hash_95;
int n_96;
_Bool _while_condtional19;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sType* default_value_97;
void* right_value73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_81, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&keys_82, 0, sizeof(char**));
memset(&right_value69, 0, sizeof(void*));
memset(&items_83, 0, sizeof(struct sType**));
memset(&right_value70, 0, sizeof(void*));
memset(&item_existance_84, 0, sizeof(_Bool*));
memset(&len_85, 0, sizeof(int));
memset(&it_88, 0, sizeof(char*));
memset(&default_value_91, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&it2_94, 0, sizeof(struct sType*));
memset(&hash_95, 0, sizeof(unsigned int));
memset(&n_96, 0, sizeof(int));
memset(&default_value_97, 0, sizeof(struct sType*));
memset(&right_value73, 0, sizeof(void*));
                    size_81=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_82=(char**)come_increment_ref_count(((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(size_81)), "./comelang2.h", 1370))));
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_83=(struct sType**)come_increment_ref_count(((struct sType**)(right_value69=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_81)), "./comelang2.h", 1371))));
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_84=(_Bool*)come_increment_ref_count(((_Bool*)(right_value70=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_81)), "./comelang2.h", 1372))));
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_85=0;
                    __freed_obj__ = 0;
                    for(
                    it_88=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA3=                    !map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA3;                    it_88=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_91,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        it2_94=((struct sType*)(right_value72=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1379)),it_88,default_value_91)));
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_95=string_get_hash_key(((char*)come_null_check(it_88, "./comelang2.h", 1380)))%size_81;
                        __freed_obj__ = 0;
                        n_96=hash_95;
                        __freed_obj__ = 0;
                        while(_while_condtional19=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            if(_if_conditional167=item_existance_84[n_96],                            __freed_obj__ = 0, 
                            _if_conditional167) {
                                n_96++;
                                __freed_obj__ = 0;
                                if(_if_conditional168=n_96>=size_81,                                __freed_obj__ = 0, 
                                _if_conditional168) {
                                    n_96=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional169=n_96==hash_95,                                    __freed_obj__ = 0, 
                                    _if_conditional169) {
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
                                item_existance_84[n_96]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_82[n_96]=it_88;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_83[n_96]=((struct sType*)(right_value73=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1400)),it_88,default_value_97)));
                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_85++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_82;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1413))->items=items_83;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_84;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->size=size_81;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->len=len_85;
                    __freed_obj__ = 0;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional159;
char* result_86;
char* __result54__;
_Bool _if_conditional160;
char* __result55__;
char* result_87;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_86, 0, sizeof(char*));
memset(&result_87, 0, sizeof(char*));
                        if(_if_conditional159=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional159) {
                            __freed_obj__ = 0;
                            memset(&result_86,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result54__ = __result_obj__ = result_86;
                            __freed_obj__ = 0;
                            return __result54__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional160=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional160) {
                            __result55__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result55__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_87,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = result_87;
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result57__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional161;
char* result_89;
char* __result58__;
_Bool _if_conditional162;
char* __result59__;
char* result_90;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_89, 0, sizeof(char*));
memset(&result_90, 0, sizeof(char*));
                        if(_if_conditional161=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional161) {
                            __freed_obj__ = 0;
                            memset(&result_89,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result58__ = __result_obj__ = result_89;
                            __freed_obj__ = 0;
                            return __result58__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional162=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional162) {
                            __result59__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result59__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_90,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result60__ = __result_obj__ = result_90;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_92;
unsigned int it_93;
_Bool _while_condtional18;
_Bool _if_conditional163;
void* right_value71;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional164;
struct sType* __result61__;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct sType* __result62__;
struct sType* __result63__;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_92, 0, sizeof(unsigned int));
memset(&it_93, 0, sizeof(unsigned int));
memset(&right_value71, 0, sizeof(void*));
                            hash_92=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_93=hash_92;
                            __freed_obj__ = 0;
                            while(_while_condtional18=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional18) {
                                if(_if_conditional163=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_93],                                __freed_obj__ = 0, 
                                _if_conditional163) {
                                    if(_if_conditional164=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value71=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_93], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                    (right_value71 && right_value71 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional164) {
                                        __result61__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1266))->items[it_93];
                                        __freed_obj__ = 0;
                                        return __result61__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_93++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional165=it_93>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional165) {
                                        it_93=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional166=it_93==hash_92,                                        __freed_obj__ = 0, 
                                        _if_conditional166) {
                                            __result62__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result62__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result63__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result63__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result64__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
struct tuple2$2sTypephcharph* result_103;
struct tuple2$2sTypephcharph* __result66__;
_Bool _if_conditional183;
struct tuple2$2sTypephcharph* __result67__;
struct tuple2$2sTypephcharph* result_104;
struct tuple2$2sTypephcharph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_103, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_104, 0, sizeof(struct tuple2$2sTypephcharph*));
                if(_if_conditional182=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional182) {
                    __freed_obj__ = 0;
                    memset(&result_103,0,sizeof(struct tuple2$2sTypephcharph*));
                    __freed_obj__ = 0;
                    __result66__ = __result_obj__ = result_103;
                    __freed_obj__ = 0;
                    return __result66__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional183=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional183) {
                    __result67__ = __result_obj__ = ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result67__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_104,0,sizeof(struct tuple2$2sTypephcharph*));
                __freed_obj__ = 0;
                __result68__ = __result_obj__ = result_104;
                __freed_obj__ = 0;
                return __result68__;
                __freed_obj__ = 0;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result69__ = self==((void*)0)||((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional184;
struct tuple2$2sTypephcharph* result_106;
struct tuple2$2sTypephcharph* __result70__;
_Bool _if_conditional185;
struct tuple2$2sTypephcharph* __result71__;
struct tuple2$2sTypephcharph* result_107;
struct tuple2$2sTypephcharph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_106, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_107, 0, sizeof(struct tuple2$2sTypephcharph*));
                if(_if_conditional184=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional184) {
                    __freed_obj__ = 0;
                    memset(&result_106,0,sizeof(struct tuple2$2sTypephcharph*));
                    __freed_obj__ = 0;
                    __result70__ = __result_obj__ = result_106;
                    __freed_obj__ = 0;
                    return __result70__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional185=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional185) {
                    __result71__ = __result_obj__ = ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result71__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_107,0,sizeof(struct tuple2$2sTypephcharph*));
                __freed_obj__ = 0;
                __result72__ = __result_obj__ = result_107;
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional188;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional188=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                        __freed_obj__ = 0, 
                        _if_conditional188) {
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
                        __result73__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                        __freed_obj__ = 0;
                        return __result73__;
                        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional189=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional189) {
                            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = ((struct sTypedefNode*)come_null_check(self, "17typedef.c", 98))->sline;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value87;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
    __result76__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((struct sTypedefNode*)come_null_check(self, "17typedef.c", 103))->sname)));
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional192;
_Bool in_typedef_111;
void* right_value88;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_113;
char* type_name_114;
_Bool err_115;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value89;
struct sType* base_type_116;
void* right_value90;
void* right_value91;
struct list$1tuple2$2sTypephcharphph* multiple_declare_117;
void* right_value92;
void* right_value95;
struct tuple2$2sTypephcharph* variable_name_118;
void* right_value99;
struct tuple2$2sTypephcharph* variable_name2_122;
_Bool _while_condtional21;
void* right_value100;
struct tuple2$2sTypephcharph* variable_name_123;
void* right_value101;
void* right_value102;
struct sNode* _inf_value1;
struct sTypedefNode* _inf_obj_value1;
void* right_value109;
struct sNode* __result83__;
void* right_value110;
void* right_value111;
struct sNode* _inf_value2;
struct sTypedefNode* _inf_obj_value2;
void* right_value118;
struct sNode* __result86__;
void* right_value119;
void* right_value120;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&in_typedef_111, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&type_113, 0, sizeof(struct sType*));
memset(&type_name_114, 0, sizeof(char*));
memset(&err_115, 0, sizeof(_Bool));
memset(&type_113, 0, sizeof(struct sType*));
memset(&type_name_114, 0, sizeof(char*));
memset(&err_115, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&base_type_116, 0, sizeof(struct sType*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&multiple_declare_117, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&variable_name_118, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value99, 0, sizeof(void*));
memset(&variable_name2_122, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value100, 0, sizeof(void*));
memset(&variable_name_123, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    if(_if_conditional192=string_operator_equals(buf,"typedef"),    __freed_obj__ = 0, 
    _if_conditional192) {
        in_typedef_111=((struct sInfo*)come_null_check(info, "17typedef.c", 109))->in_typedef;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "17typedef.c", 110))->in_typedef=(_Bool)1;
        __freed_obj__ = 0;
        come_clear_stackframe();
        multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("17typedef.c", 111),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value88=parse_type(info,(_Bool)1,(_Bool)1)))));
        type_113=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        type_name_114=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_115=multiple_assgin_var2->v3;
        come_pop_stackframe();
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional197=!err_115,        __freed_obj__ = 0, 
        _if_conditional197) {
            printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "17typedef.c", 113))->sname,((struct sInfo*)come_null_check(info, "17typedef.c", 113))->sline);
            __freed_obj__ = 0;
            exit(2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "17typedef.c", 116))->in_typedef=(_Bool)0;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "17typedef.c", 117))->in_typedef=in_typedef_111;
        __freed_obj__ = 0;
        if(_if_conditional198=*((struct sInfo*)come_null_check(info, "17typedef.c", 147))->p==44,        __freed_obj__ = 0, 
        _if_conditional198) {
            ((struct sInfo*)come_null_check(info, "17typedef.c", 120))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            base_type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(type_113))));
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            multiple_declare_117=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value91=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value90=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 125))))))));
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            variable_name_118=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value95=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value92=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 127)))),(struct sType*)come_increment_ref_count(base_type_116),(char*)come_increment_ref_count(type_name_114)))));
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharph_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1tuple2$2sTypephcharphph_push_back(((struct list$1tuple2$2sTypephcharphph*)come_null_check(multiple_declare_117, "17typedef.c", 128)),(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_118));
            __freed_obj__ = 0;
            variable_name2_122=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value99=parse_variable_name((struct sType*)come_increment_ref_count(base_type_116),(_Bool)1,info))));
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1tuple2$2sTypephcharphph_push_back(((struct list$1tuple2$2sTypephcharphph*)come_null_check(multiple_declare_117, "17typedef.c", 131)),(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_122));
            __freed_obj__ = 0;
            while(_while_condtional21=*((struct sInfo*)come_null_check(info, "17typedef.c", 142))->p==44,            __freed_obj__ = 0, 
            _while_condtional21) {
                ((struct sInfo*)come_null_check(info, "17typedef.c", 134))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                variable_name_123=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value100=parse_variable_name((struct sType*)come_increment_ref_count(base_type_116),(_Bool)0,info))));
                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1tuple2$2sTypephcharphph_push_back(((struct list$1tuple2$2sTypephcharphph*)come_null_check(multiple_declare_117, "17typedef.c", 139)),(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_123));
                __freed_obj__ = 0;
                if(variable_name_123 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 142);
            _inf_obj_value1=come_increment_ref_count(((struct sTypedefNode*)(right_value102=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value101=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 142)))),(char*)come_increment_ref_count(type_name_114),(struct sType*)come_increment_ref_count(type_113),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_117),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sTypedefNode_finalize;
            _inf_value1->clone=(void*)sTypedefNode_clone;
            _inf_value1->compile=(void*)sTypedefNode_compile;
            _inf_value1->sline=(void*)sTypedefNode_sline;
            _inf_value1->sname=(void*)sTypedefNode_sname;
            _inf_value1->terminated=(void*)sTypedefNode_terminated;
            _inf_value1->kind=(void*)sTypedefNode_kind;
            __result83__ = __result_obj__ = ((struct sNode*)(right_value109=_inf_value1));
            if(base_type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(multiple_declare_117 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name_118 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_122 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name2_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_114 && !__freed_obj__) { type_name_114 = come_decrement_ref_count(type_name_114, (void*)0, (void*)0, 0, 0, 0); }
            if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(base_type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(multiple_declare_117 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name_118 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_122 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name2_122, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 145);
            _inf_obj_value2=come_increment_ref_count(((struct sTypedefNode*)(right_value111=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value110=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 145)))),(char*)come_increment_ref_count(type_name_114),(struct sType*)come_increment_ref_count(type_113),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sTypedefNode_finalize;
            _inf_value2->clone=(void*)sTypedefNode_clone;
            _inf_value2->compile=(void*)sTypedefNode_compile;
            _inf_value2->sline=(void*)sTypedefNode_sline;
            _inf_value2->sname=(void*)sTypedefNode_sname;
            _inf_value2->terminated=(void*)sTypedefNode_terminated;
            _inf_value2->kind=(void*)sTypedefNode_kind;
            __result86__ = __result_obj__ = ((struct sNode*)(right_value118=_inf_value2));
            if(type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_114 && !__freed_obj__) { type_name_114 = come_decrement_ref_count(type_name_114, (void*)0, (void*)0, 0, 0, 0); }
            if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result86__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_114 && !__freed_obj__) { type_name_114 = come_decrement_ref_count(type_name_114, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = ((struct sNode*)(right_value120=top_level_v94((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional193;
struct tuple3$3sTypephcharphbool* default_value_112;
struct tuple3$3sTypephcharphbool* __result77__;
struct tuple3$3sTypephcharphbool* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_112, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional193=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional193) {
                __freed_obj__ = 0;
                memset(&default_value_112,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = default_value_112;
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
            }
            else {
                __result78__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional194=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional194) {
                if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional195;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional195=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional195) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional196=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional196) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value93;
struct sType* __dec_obj36;
void* right_value94;
char* __dec_obj37;
struct tuple2$2sTypephcharph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
                __dec_obj36=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(v1))));
                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj37=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(v2))));
                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __result79__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional199;
void* right_value96;
struct list_item$1tuple2$2sTypephcharphph* litem_119;
struct tuple2$2sTypephcharph* __dec_obj38;
_Bool _if_conditional200;
void* right_value97;
struct list_item$1tuple2$2sTypephcharphph* litem_120;
struct tuple2$2sTypephcharph* __dec_obj39;
void* right_value98;
struct list_item$1tuple2$2sTypephcharphph* litem_121;
struct tuple2$2sTypephcharph* __dec_obj40;
struct list$1tuple2$2sTypephcharphph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional199=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    litem_119=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value96=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 272))));
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_119, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_119, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj38=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_119, "./comelang2.h", 276))->item;
                    ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_119, "./comelang2.h", 276))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    if(__dec_obj38) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_119;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 279))->head=litem_119;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional200=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        litem_120=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value97=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 282))));
                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_120, "./comelang2.h", 284))->prev=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_120, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj39=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_120, "./comelang2.h", 286))->item;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_120, "./comelang2.h", 286))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        if(__dec_obj39) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_120;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_120;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_121=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value98=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 292))));
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2sTypephcharphphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_121, "./comelang2.h", 294))->prev=((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_121, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj40=((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_121, "./comelang2.h", 296))->item;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(litem_121, "./comelang2.h", 296))->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        if(__dec_obj40) { come_call_finalizer(tuple2$2sTypephcharph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2sTypephcharphph*)come_null_check(((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_121;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_121;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2sTypephcharphph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sTypedefNode_finalize(struct sTypedefNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional213=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 1))->mTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional213) {
                    if(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 0))->mTypeName && !__freed_obj__) { ((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 0))->mTypeName = come_decrement_ref_count(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 0))->mTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional214=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 2))->mType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional214) {
                    if(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 1))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 1))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional215=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 3))->multiple_declare!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional215) {
                    if(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 2))->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 2))->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional216=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 4))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional216) {
                    if(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 3))->mDeclareSName && !__freed_obj__) { ((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 3))->mDeclareSName = come_decrement_ref_count(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 3))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional217=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 5))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional217) {
                    if(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 4))->sname && !__freed_obj__) { ((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 4))->sname = come_decrement_ref_count(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_finalize", 4))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional218;
struct sTypedefNode* __result84__;
void* right_value112;
struct sTypedefNode* result_125;
_Bool _if_conditional219;
void* right_value113;
char* __dec_obj46;
_Bool _if_conditional220;
void* right_value114;
struct sType* __dec_obj47;
_Bool _if_conditional221;
void* right_value115;
struct list$1tuple2$2sTypephcharphph* __dec_obj48;
_Bool _if_conditional222;
void* right_value116;
char* __dec_obj49;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value117;
char* __dec_obj50;
struct sTypedefNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct sTypedefNode*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
                if(_if_conditional218=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional218) {
                    __result84__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_125=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value112=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "sTypedefNode_clone", 3))));
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional219=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 5))->mTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional219) {
                    __dec_obj46=((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 4))->mTypeName;
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 4))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 4))->mTypeName))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional220=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 6))->mType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional220) {
                    __dec_obj47=((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 5))->mType;
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 5))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 5))->mType))));
                    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional221=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 7))->multiple_declare!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional221) {
                    __dec_obj48=((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 6))->multiple_declare;
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 6))->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value115=list$1tuple2$2sTypephcharphphp_clone(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 6))->multiple_declare))));
                    if(__dec_obj48) { come_call_finalizer(list$1tuple2$2sTypephcharphph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2sTypephcharphphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional222=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 8))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional222) {
                    __dec_obj49=((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 7))->mDeclareSName;
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 7))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 7))->mDeclareSName))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional223=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional223) {
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 8))->sline=((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 8))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional224=self!=((void*)0)&&((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 10))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional224) {
                    __dec_obj50=((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 9))->sname;
                    ((struct sTypedefNode*)come_null_check(result_125, "sTypedefNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(((struct sTypedefNode*)come_null_check(self, "sTypedefNode_clone", 9))->sname))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result85__ = __result_obj__ = result_125;
                if(result_125 && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
                if(result_125 && !__freed_obj__) { come_call_finalizer(sTypedefNode_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

