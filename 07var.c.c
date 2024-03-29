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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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




struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
_Bool _if_conditional5;
void* right_value49;
struct sType* __dec_obj30;
struct sType* __dec_obj31;
struct sNode* __dec_obj32;
_Bool _if_conditional94;
void* right_value50;
struct list$1charph* __dec_obj33;
struct list$1charph* __dec_obj34;
_Bool _if_conditional95;
void* right_value61;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj41;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj42;
char* __dec_obj43;
void* right_value62;
char* __dec_obj44;
struct sStoreNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(name))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    if(type) {
        __dec_obj30=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj31=self->type;
        self->type=((void*)0);
        come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj32=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    if(multiple_assign) {
        __dec_obj33=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charphp_clone(multiple_assign))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj34=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer2(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(multiple_declare) {
        __dec_obj41=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value61=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj42=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj43=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
struct sType* __result10__;
void* right_value14;
struct sType* result_5;
_Bool _if_conditional24;
_Bool _if_conditional25;
void* right_value21;
struct list$1sTypeph* __dec_obj10;
_Bool _if_conditional29;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value25;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional34;
void* right_value26;
char* __dec_obj14;
_Bool _if_conditional35;
void* right_value27;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional36;
void* right_value35;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value36;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
void* right_value43;
struct list$1charph* __dec_obj24;
_Bool _if_conditional55;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value45;
struct sNode* __dec_obj26;
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
_Bool _if_conditional81;
void* right_value46;
struct sNode* __dec_obj27;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value47;
char* __dec_obj28;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value48;
char* __dec_obj29;
struct sType* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value21 = (void*)0;
right_value24 = (void*)0;
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
            if(_if_conditional6=self==(void*)0,            _if_conditional6) {
                __result10__ = __result_obj__ = (void*)0;
                return __result10__;
            }
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional24=self!=((void*)0),            _if_conditional24) {
                result_5->mClass=self->mClass;
            }
            if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional25) {
                __dec_obj10=result_5->mMultipleTypes;
                result_5->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional29) {
                __dec_obj12=result_5->mNoSolvedGenericsType;
                result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional33) {
                __dec_obj13=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value25=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional34) {
                __dec_obj14=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value26=string_clone(self->mGenericsName))));
                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional35) {
                __dec_obj15=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional36=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional36) {
                __dec_obj19=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0),            _if_conditional49) {
                result_5->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional50=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional50) {
                __dec_obj20=result_5->mParamTypes;
                result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional51) {
                __dec_obj24=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value43=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional55=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional56=self!=((void*)0),            _if_conditional56) {
                result_5->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional57=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional57) {
                __dec_obj26=result_5->mAlignas;
                result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mAlignas))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional58=self!=((void*)0),            _if_conditional58) {
                result_5->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional59=self!=((void*)0),            _if_conditional59) {
                result_5->mShort=self->mShort;
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_5->mLong=self->mLong;
            }
            if(_if_conditional61=self!=((void*)0),            _if_conditional61) {
                result_5->mLongLong=self->mLongLong;
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_5->mConstant=self->mConstant;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_5->mRegister=self->mRegister;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_5->mVolatile=self->mVolatile;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_5->mStatic=self->mStatic;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_5->mExtern=self->mExtern;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_5->mRestrict=self->mRestrict;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_5->mImmutable=self->mImmutable;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_5->mHeap=self->mHeap;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_5->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_5->mDelegate=self->mDelegate;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_5->mShare=self->mShare;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_5->mClone=self->mClone;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_5->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_5->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_5->mRefference=self->mRefference;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_5->mException=self->mException;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_5->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional81=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional81) {
                __dec_obj27=result_5->mSizeNum;
                result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(self->mSizeNum))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value46) { right_value46 = come_decrement_ref_count2(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_5->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_5->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional84=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional84) {
                __dec_obj28=result_5->mOriginalTypeName;
                result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mOriginalTypeName))));
                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_5->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_5->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_5->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_5->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_5->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_5->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_5->mInline=self->mInline;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_5->mNullValue=self->mNullValue;
            }
            if(_if_conditional93=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional93) {
                __dec_obj29=result_5->mAsmName;
                result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mAsmName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result27__ = __result_obj__ = result_5;
            come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result27__;
            come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional7=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional7) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional9) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional11) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional12) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional13) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional14=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional14) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional16) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional17=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional17) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional19=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional20=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional20) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional21) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional22=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional22) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional23) {
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
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional8) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional10) {
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
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
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
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional18) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
struct list$1sTypeph* __result11__;
void* right_value15;
void* right_value16;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional4;
void* right_value20;
struct list$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
right_value16 = (void*)0;
memset(&result_12, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
                    if(_if_conditional26=self==((void*)0),                    _if_conditional26) {
                        __result11__ = __result_obj__ = ((void*)0);
                        return __result11__;
                    }
                    result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value15=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_13=self->head;
                    while(_while_condtional4=it_13!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_12,(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_clone(it_13->item)))));
                        come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional27;
void* right_value17;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj7;
_Bool _if_conditional28;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj8;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj9;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional27=self->len==0,                            _if_conditional27) {
                                litem_14=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value17=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_14->prev=((void*)0);
                                litem_14->next=((void*)0);
                                __dec_obj7=litem_14->item;
                                litem_14->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_14;
                                self->head=litem_14;
                            }
                            else {
                                if(_if_conditional28=self->len==1,                                _if_conditional28) {
                                    litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_15->prev=self->head;
                                    litem_15->next=((void*)0);
                                    __dec_obj8=litem_15->item;
                                    litem_15->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_15;
                                    self->head->next=litem_15;
                                }
                                else {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_16->prev=self->tail;
                                    litem_16->next=((void*)0);
                                    __dec_obj9=litem_16->item;
                                    litem_16->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional30;
struct tuple1$1sTypeph* __result15__;
void* right_value22;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional32;
void* right_value23;
struct sType* __dec_obj11;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
right_value23 = (void*)0;
                    if(_if_conditional30=self==(void*)0,                    _if_conditional30) {
                        __result15__ = __result_obj__ = (void*)0;
                        return __result15__;
                    }
                    result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value22=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        __dec_obj11=result_17->v1;
                        result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value23=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result16__ = __result_obj__ = result_17;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result16__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional31) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional37;
struct list$1sNodeph* __result17__;
void* right_value28;
void* right_value29;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value34;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
right_value29 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value34 = (void*)0;
                    if(_if_conditional37=self==((void*)0),                    _if_conditional37) {
                        __result17__ = __result_obj__ = ((void*)0);
                        return __result17__;
                    }
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value29=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value34=sNode_clone(it_19->item)))));
                        if(right_value34) { right_value34 = come_decrement_ref_count2(right_value34, ((struct sNode*)right_value34)->finalize, ((struct sNode*)right_value34)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional38;
void* right_value30;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj16;
_Bool _if_conditional39;
void* right_value31;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj17;
void* right_value32;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value32 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional38=self->len==0,                            _if_conditional38) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj16=litem_20->item;
                                litem_20->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional39=self->len==1,                                _if_conditional39) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj17=litem_21->item;
                                    litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_22->prev=self->tail;
                                    litem_22->next=((void*)0);
                                    __dec_obj18=litem_22->item;
                                    litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional40;
struct sNode* __result20__;
void* right_value33;
struct sNode* result_23;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct sNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional40=self==(void*)0,                            _if_conditional40) {
                                __result20__ = __result_obj__ = (void*)0;
                                return __result20__;
                            }
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional41=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional41) {
                                result_23->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional42=self!=((void*)0),                            _if_conditional42) {
                                result_23->finalize=self->finalize;
                            }
                            if(_if_conditional43=self!=((void*)0),                            _if_conditional43) {
                                result_23->clone=self->clone;
                            }
                            if(_if_conditional44=self!=((void*)0),                            _if_conditional44) {
                                result_23->compile=self->compile;
                            }
                            if(_if_conditional45=self!=((void*)0),                            _if_conditional45) {
                                result_23->sline=self->sline;
                            }
                            if(_if_conditional46=self!=((void*)0),                            _if_conditional46) {
                                result_23->sname=self->sname;
                            }
                            if(_if_conditional47=self!=((void*)0),                            _if_conditional47) {
                                result_23->terminated=self->terminated;
                            }
                            if(_if_conditional48=self!=((void*)0),                            _if_conditional48) {
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
_Bool _if_conditional52;
struct list$1charph* __result23__;
void* right_value37;
void* right_value38;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value42;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value42 = (void*)0;
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        __result23__ = __result_obj__ = ((void*)0);
                        return __result23__;
                    }
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_25=self->head;
                    while(_while_condtional6=it_25!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value42=string_clone(it_25->item)))));
                        right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional53;
void* right_value39;
struct list_item$1charph* litem_26;
char* __dec_obj21;
_Bool _if_conditional54;
void* right_value40;
struct list_item$1charph* litem_27;
char* __dec_obj22;
void* right_value41;
struct list_item$1charph* litem_28;
char* __dec_obj23;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional53=self->len==0,                            _if_conditional53) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj21=litem_26->item;
                                litem_26->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else {
                                if(_if_conditional54=self->len==1,                                _if_conditional54) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_27->prev=self->head;
                                    litem_27->next=((void*)0);
                                    __dec_obj22=litem_27->item;
                                    litem_27->item=(char*)come_increment_ref_count(item);
                                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_27;
                                    self->head->next=litem_27;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_28->prev=self->tail;
                                    litem_28->next=((void*)0);
                                    __dec_obj23=litem_28->item;
                                    litem_28->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional96;
struct list$1tuple3$3sTypephcharphsNodephph* __result28__;
void* right_value51;
void* right_value52;
struct list$1tuple3$3sTypephcharphsNodephph* result_31;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional8;
void* right_value60;
struct list$1tuple3$3sTypephcharphsNodephph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value60 = (void*)0;
            if(_if_conditional96=self==((void*)0),            _if_conditional96) {
                __result28__ = __result_obj__ = ((void*)0);
                return __result28__;
            }
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value52=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_32=self->head;
            while(_while_condtional8=it_32!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value60=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_32=it_32->next;
            }
            __result33__ = __result_obj__ = result_31;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result33__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result29__ = __result_obj__ = self;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result29__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_29;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_29=self->head;
                    while(_while_condtional7=it_29!=((void*)0),                    _while_condtional7) {
                        prev_it_30=it_29;
                        it_29=it_29->next;
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional97=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional98) {
                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional99=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional99) {
                                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional100=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional100) {
                                        if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional101;
void* right_value53;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_33;
struct tuple3$3sTypephcharphsNodeph* __dec_obj35;
_Bool _if_conditional105;
void* right_value54;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_34;
struct tuple3$3sTypephcharphsNodeph* __dec_obj36;
void* right_value55;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_35;
struct tuple3$3sTypephcharphsNodeph* __dec_obj37;
struct list$1tuple3$3sTypephcharphsNodephph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value54 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value55 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional101=self->len==0,                    _if_conditional101) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value53=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_33->prev=((void*)0);
                        litem_33->next=((void*)0);
                        __dec_obj35=litem_33->item;
                        litem_33->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_33;
                        self->head=litem_33;
                    }
                    else {
                        if(_if_conditional105=self->len==1,                        _if_conditional105) {
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value54=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_34->prev=self->head;
                            litem_34->next=((void*)0);
                            __dec_obj36=litem_34->item;
                            litem_34->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_34;
                            self->head->next=litem_34;
                        }
                        else {
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value55=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_35->prev=self->tail;
                            litem_35->next=((void*)0);
                            __dec_obj37=litem_35->item;
                            litem_35->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_35;
                            self->tail=litem_35;
                        }
                    }
                    self->len++;
                    __result30__ = __result_obj__ = self;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result30__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional102=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional103) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional104) {
                                if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional106;
struct tuple3$3sTypephcharphsNodeph* __result31__;
void* right_value56;
struct tuple3$3sTypephcharphsNodeph* result_36;
_Bool _if_conditional107;
void* right_value57;
struct sType* __dec_obj38;
_Bool _if_conditional108;
void* right_value58;
char* __dec_obj39;
_Bool _if_conditional109;
void* right_value59;
struct sNode* __dec_obj40;
struct tuple3$3sTypephcharphsNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value57 = (void*)0;
right_value58 = (void*)0;
right_value59 = (void*)0;
                    if(_if_conditional106=self==(void*)0,                    _if_conditional106) {
                        __result31__ = __result_obj__ = (void*)0;
                        return __result31__;
                    }
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional107=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional107) {
                        __dec_obj38=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional108=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional108) {
                        __dec_obj39=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->v2))));
                        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional109=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional109) {
                        __dec_obj40=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(self->v3))));
                        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result32__ = __result_obj__ = result_36;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result32__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

char* sStoreNode_kind(){
void* __result_obj__;
void* right_value63;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value63=__builtin_string("sStoreNode")));
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value64;
char* array_initializer_37;
_Bool _if_conditional117;
struct sVar* var__41;
_Bool _if_conditional126;
_Bool __result41__;
_Bool _if_conditional127;
_Bool __result42__;
void* right_value65;
struct sType* type_42;
void* right_value66;
void* right_value67;
struct sType* var_type_43;
void* right_value68;
_Bool _if_conditional128;
struct sVar* var__44;
_Bool _if_conditional129;
_Bool __result43__;
_Bool _if_conditional130;
_Bool __result44__;
void* right_value69;
struct sType* type_45;
_Bool _if_conditional131;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_46;
struct tuple3$3sTypephcharphsNodeph* it_49;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_52;
char* var_name_53;
struct sNode* right_value_54;
void* right_value70;
_Bool _if_conditional136;
_Bool __result52__;
void* right_value71;
struct sType* left_type_55;
void* right_value72;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool __result53__;
void* right_value73;
struct CVALUE* come_value_56;
void* right_value74;
struct sType* left_type2_57;
_Bool _if_conditional141;
_Bool _if_conditional142;
void* right_value75;
struct list$1sNodeph* o2_saved_58;
struct sNode* it_61;
_Bool _if_conditional147;
void* right_value76;
struct CVALUE* come_value_64;
void* right_value77;
void* right_value78;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool __result62__;
void* right_value79;
struct sType* left_type_65;
_Bool _if_conditional150;
void* right_value80;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value81;
struct list$1sNodeph* o2_saved_66;
struct sNode* it_67;
_Bool _if_conditional153;
void* right_value82;
struct CVALUE* come_value_68;
void* right_value83;
void* right_value84;
struct sType* left_type2_69;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value85;
struct list$1sNodeph* o2_saved_70;
struct sNode* it_71;
_Bool _if_conditional156;
void* right_value86;
struct CVALUE* come_value_72;
void* right_value87;
void* right_value88;
struct CVALUE* come_value_73;
void* right_value89;
char* __dec_obj45;
void* right_value90;
struct sType* __dec_obj46;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool __result64__;
void* right_value94;
struct CVALUE* right_value_77;
struct sType* right_type_78;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct sVar* var__79;
_Bool _if_conditional165;
_Bool __result65__;
_Bool _if_conditional166;
int i_80;
struct list$1charph* o2_saved_81;
char* it_84;
_Bool _if_conditional171;
struct sType* right_type2_90;
void* right_value95;
void* right_value96;
struct sType* var_type_91;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value97;
struct list$1sNodeph* o2_saved_92;
struct sNode* it_93;
_Bool _if_conditional176;
void* right_value98;
struct CVALUE* come_value_94;
void* right_value99;
_Bool _if_conditional177;
void* right_value100;
void* right_value101;
struct sType* type_95;
void* right_value102;
void* right_value103;
struct sType* var_type_96;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value104;
struct list$1sNodeph* o2_saved_97;
struct sNode* it_98;
_Bool _if_conditional180;
void* right_value105;
struct CVALUE* come_value_99;
void* right_value106;
struct sClass* current_stack_frame_struct_100;
_Bool _if_conditional181;
struct sVar* parent_var_101;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value107;
struct CVALUE* come_value_102;
struct sType* left_type_103;
_Bool _if_conditional184;
void* right_value108;
char* c_value_104;
void* right_value109;
char* __dec_obj50;
int right_value_id_105;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value110;
char* c_value_106;
void* right_value111;
char* __dec_obj51;
void* right_value112;
char* __dec_obj52;
void* right_value113;
struct sType* __dec_obj53;
void* right_value114;
void* right_value115;
_Bool __result76__;
_Bool _if_conditional187;
static int num_multiple_var_107=0;
void* right_value116;
char* multiple_var_name_108;
void* right_value117;
void* right_value118;
char* __dec_obj54;
int i_109;
struct list$1charph* o2_saved_110;
char* it_111;
_Bool _if_conditional188;
void* right_value119;
struct sType* right_type2_112;
struct sVar* var__113;
void* right_value120;
struct sType* var_type_114;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value121;
struct list$1sNodeph* o2_saved_115;
struct sNode* it_116;
_Bool _if_conditional191;
void* right_value122;
struct CVALUE* come_value_117;
void* right_value123;
void* right_value124;
struct sType* left_type_118;
void* right_value125;
struct CVALUE* right_value2_119;
void* right_value126;
char* __dec_obj55;
void* right_value127;
struct sType* __dec_obj56;
void* right_value128;
struct CVALUE* come_value_120;
void* right_value129;
void* right_value130;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value131;
char* __dec_obj57;
int right_value_id_121;
_Bool _if_conditional194;
void* right_value132;
char* __dec_obj58;
void* right_value133;
struct sType* __dec_obj59;
_Bool _if_conditional195;
void* right_value134;
struct sVar* var__122;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool __result77__;
_Bool _if_conditional198;
void* right_value135;
struct sType* __dec_obj60;
void* right_value136;
struct sType* left_type_123;
void* right_value137;
struct CVALUE* come_value_124;
_Bool _if_conditional199;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
char* __dec_obj61;
_Bool _if_conditional200;
void* right_value142;
void* right_value143;
_Bool _if_conditional201;
void* right_value144;
void* right_value145;
char* __dec_obj62;
_Bool _if_conditional202;
void* right_value146;
void* right_value147;
_Bool _if_conditional203;
void* right_value148;
char* __dec_obj63;
void* right_value149;
char* __dec_obj64;
int right_value_id_125;
_Bool _if_conditional204;
void* right_value150;
struct sType* __dec_obj65;
_Bool _if_conditional205;
void* right_value151;
void* right_value152;
_Bool _if_conditional206;
void* right_value153;
char* __dec_obj66;
void* right_value154;
char* __dec_obj67;
void* right_value155;
struct sType* __dec_obj68;
void* right_value156;
void* right_value157;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool __result78__;
void* right_value158;
char* __dec_obj69;
void* right_value159;
struct sType* __dec_obj70;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value160;
void* right_value161;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
memset(&array_initializer_37, 0, sizeof(char*));
memset(&var__41, 0, sizeof(struct sVar*));
right_value65 = (void*)0;
memset(&type_42, 0, sizeof(struct sType*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&var_type_43, 0, sizeof(struct sType*));
right_value68 = (void*)0;
memset(&var__44, 0, sizeof(struct sVar*));
right_value69 = (void*)0;
memset(&type_45, 0, sizeof(struct sType*));
memset(&o2_saved_46, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_49, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_52, 0, sizeof(struct sType*));
memset(&var_name_53, 0, sizeof(char*));
memset(&right_value_54, 0, sizeof(struct sNode*));
memset(&type_52, 0, sizeof(struct sType*));
memset(&var_name_53, 0, sizeof(char*));
memset(&right_value_54, 0, sizeof(struct sNode*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&left_type_55, 0, sizeof(struct sType*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&come_value_56, 0, sizeof(struct CVALUE*));
right_value74 = (void*)0;
memset(&left_type2_57, 0, sizeof(struct sType*));
right_value75 = (void*)0;
memset(&o2_saved_58, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct sNode*));
right_value76 = (void*)0;
memset(&come_value_64, 0, sizeof(struct CVALUE*));
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&left_type_65, 0, sizeof(struct sType*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&o2_saved_66, 0, sizeof(struct list$1sNodeph*));
memset(&it_67, 0, sizeof(struct sNode*));
right_value82 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&left_type2_69, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&o2_saved_70, 0, sizeof(struct list$1sNodeph*));
memset(&it_71, 0, sizeof(struct sNode*));
right_value86 = (void*)0;
memset(&come_value_72, 0, sizeof(struct CVALUE*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value94 = (void*)0;
memset(&right_value_77, 0, sizeof(struct CVALUE*));
memset(&right_type_78, 0, sizeof(struct sType*));
memset(&var__79, 0, sizeof(struct sVar*));
memset(&i_80, 0, sizeof(int));
memset(&o2_saved_81, 0, sizeof(struct list$1charph*));
memset(&it_84, 0, sizeof(char*));
memset(&right_type2_90, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&var_type_91, 0, sizeof(struct sType*));
right_value97 = (void*)0;
memset(&o2_saved_92, 0, sizeof(struct list$1sNodeph*));
memset(&it_93, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&type_95, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&var_type_96, 0, sizeof(struct sType*));
right_value104 = (void*)0;
memset(&o2_saved_97, 0, sizeof(struct list$1sNodeph*));
memset(&it_98, 0, sizeof(struct sNode*));
right_value105 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value106 = (void*)0;
memset(&current_stack_frame_struct_100, 0, sizeof(struct sClass*));
memset(&parent_var_101, 0, sizeof(struct sVar*));
right_value107 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
memset(&left_type_103, 0, sizeof(struct sType*));
right_value108 = (void*)0;
memset(&c_value_104, 0, sizeof(char*));
right_value109 = (void*)0;
memset(&right_value_id_105, 0, sizeof(int));
right_value110 = (void*)0;
memset(&c_value_106, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&multiple_var_name_108, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&i_109, 0, sizeof(int));
memset(&o2_saved_110, 0, sizeof(struct list$1charph*));
memset(&it_111, 0, sizeof(char*));
right_value119 = (void*)0;
memset(&right_type2_112, 0, sizeof(struct sType*));
memset(&var__113, 0, sizeof(struct sVar*));
right_value120 = (void*)0;
memset(&var_type_114, 0, sizeof(struct sType*));
right_value121 = (void*)0;
memset(&o2_saved_115, 0, sizeof(struct list$1sNodeph*));
memset(&it_116, 0, sizeof(struct sNode*));
right_value122 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&left_type_118, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&right_value2_119, 0, sizeof(struct CVALUE*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value_id_121, 0, sizeof(int));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&var__122, 0, sizeof(struct sVar*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&left_type_123, 0, sizeof(struct sType*));
right_value137 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&right_value_id_125, 0, sizeof(int));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->array_initializer))));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(array_initializer_37) {
        var__41=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__41) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result41__ = (_Bool)0;
            array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result41__;
        }
        if(_if_conditional127=self->type==((void*)0),        _if_conditional127) {
            err_msg(info,"Require type name(%s)",self->name);
            __result42__ = (_Bool)0;
            array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result42__;
        }
        else {
            type_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_42->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(type_42)))),info);
            come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        var__41=get_variable_from_table(info->lv_table,self->name);
        var_type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(var__41->mType))));
        come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        var_type_43->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value68=make_define_var(var_type_43,var__41->mCValueName,(_Bool)0,info))),array_initializer_37);
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,var_type_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional128=self->right_value==((void*)0),        _if_conditional128) {
            var__44=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(var__44) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result43__ = (_Bool)0;
                array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result43__;
            }
            if(_if_conditional130=self->type==((void*)0),            _if_conditional130) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result44__ = (_Bool)0;
                array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result44__;
            }
            type_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_45->mFunctionParam=(_Bool)0;
            if(self->multiple_declare) {
                for(                o2_saved_46=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_49=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_46));                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_46));                it_49=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_46))                ){
                    multiple_assign_var1=it_49;
                    type_52=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_53=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_54=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    add_variable_to_table(var_name_53,(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(type_52)))),info);
                    come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    var__44=get_variable_from_table(info->lv_table,var_name_53);
                    if(_if_conditional136=var__44==((void*)0),                    _if_conditional136) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_49);
                        __result52__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_53 = come_decrement_ref_count2(var_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_54) { right_value_54 = come_decrement_ref_count2(right_value_54, ((struct sNode*)right_value_54)->finalize, ((struct sNode*)right_value_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result52__;
                    }
                    left_type_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(var__44->mType))));
                    come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value72=make_define_var(left_type_55,var__44->mCValueName,(_Bool)0,info))));
                    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(right_value_54) {
                        if(_if_conditional138=!node_compile(right_value_54,info),                        _if_conditional138) {
                            __result53__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,type_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_53 = come_decrement_ref_count2(var_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_54) { right_value_54 = come_decrement_ref_count2(right_value_54, ((struct sNode*)right_value_54)->finalize, ((struct sNode*)right_value_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sType_finalize,left_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result53__;
                        }
                        come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__44->mCValueName,come_value_56->c_value);
                        come_call_finalizer2(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    left_type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(left_type_55))));
                    come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    left_type2_57->mStatic=(_Bool)0;
                    if(_if_conditional141=!var__44->mType->mConstant&&!var__44->mType->mStatic,                    _if_conditional141) {
                        if(_if_conditional142=list$1sNodeph_length(left_type2_57->mArrayNum)>0,                        _if_conditional142) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__44->mCValueName,((char*)(right_value75=make_type_name_string(left_type2_57,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_58=(struct list$1sNodeph*)come_increment_ref_count((left_type2_57->mArrayNum)),it_61=list$1sNodeph_begin((o2_saved_58));                            !list$1sNodeph_end((o2_saved_58));                            it_61=list$1sNodeph_next((o2_saved_58))                            ){
                                if(_if_conditional147=!node_compile(it_61,info),                                _if_conditional147) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value76=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_64->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__44->mCValueName,((char*)(right_value77=make_type_name_string(left_type2_57,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,type_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_53 = come_decrement_ref_count2(var_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_54) { right_value_54 = come_decrement_ref_count2(right_value_54, ((struct sNode*)right_value_54)->finalize, ((struct sNode*)right_value_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,left_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(type_45)))),info);
                come_call_finalizer2(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                var__44=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional148=var__44==((void*)0),                _if_conditional148) {
                    var__44=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional149=var__44==((void*)0),                    _if_conditional149) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result62__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result62__;
                    }
                }
                left_type_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(var__44->mType))));
                come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional150=list$1sNodeph_length(left_type_65->mArrayNum)>0,                _if_conditional150) {
                    add_come_code(info,"%s;\n",((char*)(right_value80=make_define_var(left_type_65,var__44->mCValueName,(_Bool)0,info))));
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional151=!left_type_65->mStatic,                    _if_conditional151) {
                        if(_if_conditional152=list$1sNodeph_length(left_type_65->mArrayNum)>0,                        _if_conditional152) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__44->mCValueName,((char*)(right_value81=make_type_name_string(left_type_65,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_66=(struct list$1sNodeph*)come_increment_ref_count((left_type_65->mArrayNum)),it_67=list$1sNodeph_begin((o2_saved_66));                            !list$1sNodeph_end((o2_saved_66));                            it_67=list$1sNodeph_next((o2_saved_66))                            ){
                                if(_if_conditional153=!node_compile(it_67,info),                                _if_conditional153) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_68->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__44->mCValueName,var__44->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value83=make_define_var(left_type_65,var__44->mCValueName,(_Bool)0,info))));
                    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_type_65))));
                    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    left_type2_69->mStatic=(_Bool)0;
                    if(_if_conditional154=!var__44->mType->mConstant&&!var__44->mType->mStatic,                    _if_conditional154) {
                        if(_if_conditional155=list$1sNodeph_length(left_type2_69->mArrayNum)>0,                        _if_conditional155) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__44->mCValueName,((char*)(right_value85=make_type_name_string(left_type2_69,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_70=(struct list$1sNodeph*)come_increment_ref_count((left_type2_69->mArrayNum)),it_71=list$1sNodeph_begin((o2_saved_70));                            !list$1sNodeph_end((o2_saved_70));                            it_71=list$1sNodeph_next((o2_saved_70))                            ){
                                if(_if_conditional156=!node_compile(it_71,info),                                _if_conditional156) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value86=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_72->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__44->mCValueName,((char*)(right_value87=make_type_name_string(left_type2_69,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,left_type2_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj45=come_value_73->c_value;
                come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value89=xsprintf("%s",var__44->mCValueName))));
                __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj46=come_value_73->type;
                come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(left_type_65))));
                come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_73->var=var__44;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
                if(_if_conditional160=self->alloc&&!left_type_65->mClass->mNumber&&left_type_65->mPointerNum==0,                _if_conditional160) {
                    var__44->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,left_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional161=!node_compile(self->right_value,info),            _if_conditional161) {
                __result64__ = (_Bool)0;
                array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result64__;
            }
            right_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value94=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            right_type_78=right_value_77->type;
            if(self->multiple_assign) {
                if(right_type_78->mNoSolvedGenericsType->v1) {
                    right_type_78=right_type_78->mNoSolvedGenericsType->v1;
                }
            }
            if(self->alloc) {
                var__79=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__79) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result65__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result65__;
                }
                if(self->multiple_assign) {
                    i_80=0;
                    for(                    o2_saved_81=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_84=list$1charph_begin((o2_saved_81));                    !list$1charph_end((o2_saved_81));                    it_84=list$1charph_next((o2_saved_81))                    ){
                        if(_if_conditional171=i_80<list$1sTypeph_length(right_type_78->mGenericsTypes),                        _if_conditional171) {
                            right_type2_90=list$1sTypephp_operator_load_element(right_type_78->mGenericsTypes,i_80);
                            right_type2_90->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_84,(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(right_type2_90)))),info);
                            come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            var__79=get_variable_from_table(info->lv_table,it_84);
                            var_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(var__79->mType))));
                            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            var_type_91->mStatic=(_Bool)0;
                            if(_if_conditional174=!var_type_91->mConstant&&!var_type_91->mStatic,                            _if_conditional174) {
                                if(_if_conditional175=list$1sNodeph_length(var_type_91->mArrayNum)>0,                                _if_conditional175) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__79->mCValueName,((char*)(right_value97=make_type_name_string(var_type_91,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    for(                                    o2_saved_92=(struct list$1sNodeph*)come_increment_ref_count((var_type_91->mArrayNum)),it_93=list$1sNodeph_begin((o2_saved_92));                                    !list$1sNodeph_end((o2_saved_92));                                    it_93=list$1sNodeph_next((o2_saved_92))                                    ){
                                        if(_if_conditional176=!node_compile(it_93,info),                                        _if_conditional176) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
                                        come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_94->c_value);
                                        come_call_finalizer2(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__79->mCValueName,((char*)(right_value99=make_type_name_string(var_type_91,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer2(sType_finalize,var_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        i_80++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional177=self->type==((void*)0),                    _if_conditional177) {
                        right_type_78->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(right_type_78)))),info);
                        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_95->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type_95)))),info);
                        come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    var__79=get_variable_from_table(info->lv_table,self->name);
                    var_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(var__79->mType))));
                    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    var_type_96->mStatic=(_Bool)0;
                    if(_if_conditional178=!var__79->mType->mStatic&&!var_type_96->mConstant&&list$1sNodeph_length(var_type_96->mArrayNum)==0,                    _if_conditional178) {
                        if(_if_conditional179=list$1sNodeph_length(var_type_96->mArrayNum)>0,                        _if_conditional179) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__79->mCValueName,((char*)(right_value104=make_type_name_string(var_type_96,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_97=(struct list$1sNodeph*)come_increment_ref_count((var_type_96->mArrayNum)),it_98=list$1sNodeph_begin((o2_saved_97));                            !list$1sNodeph_end((o2_saved_97));                            it_98=list$1sNodeph_next((o2_saved_97))                            ){
                                if(_if_conditional180=!node_compile(it_98,info),                                _if_conditional180) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_99->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__79->mCValueName,((char*)(right_value106=make_type_name_string(var_type_96,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,var_type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            current_stack_frame_struct_100=info->current_stack_frame_struct;
            if(_if_conditional181=current_stack_frame_struct_100&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional181) {
                parent_var_101=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional182=parent_var_101!=((void*)0),                _if_conditional182) {
                    if(_if_conditional183=string_operator_not_equals(parent_var_101->mFunName,info->come_fun->mName),                    _if_conditional183) {
                        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        left_type_103=parent_var_101->mType;
                        if(_if_conditional184=left_type_103->mPointerNum>0&&right_type_78->mPointerNum>0&&right_type_78->mHeap&&left_type_103->mHeap,                        _if_conditional184) {
                            c_value_104=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("*(parent->%s)",parent_var_101->mCValueName))));
                            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            decrement_ref_count_object(parent_var_101->mType,c_value_104,info,(_Bool)0);
                            std_move(left_type_103,right_type_78,right_value_77,info);
                            __dec_obj50=come_value_102->c_value;
                            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("(*(parent->%s))=%s",parent_var_101->mCValueName,right_value_77->c_value))));
                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value_id_105=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_77->c_value));
                            if(_if_conditional185=right_value_id_105!=-1,                            _if_conditional185) {
                                remove_object_from_right_values(right_value_id_105,info);
                            }
                            c_value_104 = come_decrement_ref_count2(c_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional186=left_type_103->mPointerNum>0&&right_type_78->mPointerNum>0&&string_operator_equals(right_type_78->mClass->mName,"void")&&left_type_103->mHeap,                            _if_conditional186) {
                                c_value_106=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("*(parent->%s)",parent_var_101->mCValueName))));
                                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                decrement_ref_count_object(parent_var_101->mType,c_value_106,info,(_Bool)0);
                                __dec_obj51=come_value_102->c_value;
                                come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("(*(parent->%s))=%s",parent_var_101->mCValueName,right_value_77->c_value))));
                                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_106 = come_decrement_ref_count2(c_value_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj52=come_value_102->c_value;
                                come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("(*(parent->%s))=%s",parent_var_101->mCValueName,right_value_77->c_value))));
                                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        __dec_obj53=come_value_102->type;
                        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(left_type_103))));
                        come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_value_102->var=((void*)0);
                        check_assign_type(((char*)(right_value115=xsprintf("\%s is assigning to",((char*)(right_value114=string_to_string(self->name)))))),left_type_103,right_type_78,come_value_102,(_Bool)0,(_Bool)1,info);
                        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        add_come_last_code(info,"%s;\n",come_value_102->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
                        __result76__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result76__;
                        come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            if(self->multiple_assign) {
                multiple_var_name_108=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("multiple_assign_var%d",++num_multiple_var_107))));
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value117=make_define_var(right_value_77->type,multiple_var_name_108,(_Bool)0,info))));
                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code(info,"%s=%s;\n",multiple_var_name_108,right_value_77->c_value);
                __dec_obj54=right_value_77->c_value;
                right_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(multiple_var_name_108))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_109=0;
                for(                o2_saved_110=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_111=list$1charph_begin((o2_saved_110));                !list$1charph_end((o2_saved_110));                it_111=list$1charph_next((o2_saved_110))                ){
                    if(_if_conditional188=i_109<list$1sTypeph_length(right_type_78->mGenericsTypes),                    _if_conditional188) {
                        right_type2_112=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(list$1sTypephp_operator_load_element(right_type_78->mGenericsTypes,i_109)))));
                        come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        var__113=get_variable_from_table(info->lv_table,it_111);
                        var_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(var__113->mType))));
                        come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        var_type_114->mStatic=(_Bool)0;
                        if(_if_conditional189=!var_type_114->mConstant,                        _if_conditional189) {
                            if(_if_conditional190=list$1sNodeph_length(var_type_114->mArrayNum)>0,                            _if_conditional190) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__113->mCValueName,((char*)(right_value121=make_type_name_string(var_type_114,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                o2_saved_115=(struct list$1sNodeph*)come_increment_ref_count((var_type_114->mArrayNum)),it_116=list$1sNodeph_begin((o2_saved_115));                                !list$1sNodeph_end((o2_saved_115));                                it_116=list$1sNodeph_next((o2_saved_115))                                ){
                                    if(_if_conditional191=!node_compile(it_116,info),                                    _if_conditional191) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
                                    come_call_finalizer2(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_117->c_value);
                                    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__113->mCValueName,((char*)(right_value123=make_type_name_string(var_type_114,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        left_type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(var__113->mType))));
                        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value2_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj55=right_value2_119->c_value;
                        right_value2_119->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s->v%d",right_value_77->c_value,i_109+1))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj56=right_value2_119->type;
                        right_value2_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(right_type2_112))));
                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value2_119->var=((void*)0);
                        come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        check_assign_type(((char*)(right_value130=xsprintf("\%s is assining to}",((char*)(right_value129=string_to_string(self->name)))))),left_type_118,right_type2_112,come_value_120,(_Bool)0,(_Bool)1,info);
                        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional192=right_type2_112->mHeap&&left_type_118->mHeap&&left_type_118->mPointerNum>0&&right_type2_112->mPointerNum>0,                        _if_conditional192) {
                            if(self->alloc) {
                                std_move(left_type_118,right_type2_112,right_value2_119,info);
                                __dec_obj57=come_value_120->c_value;
                                come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s=%s",var__113->mCValueName,right_value2_119->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_121=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_119->c_value));
                            if(_if_conditional194=right_value_id_121!=-1,                            _if_conditional194) {
                                remove_object_from_right_values(right_value_id_121,info);
                            }
                        }
                        else {
                            __dec_obj58=come_value_120->c_value;
                            come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s=%s",var__113->mCValueName,right_value2_119->c_value))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __dec_obj59=come_value_120->type;
                        come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(left_type_118))));
                        come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_value_120->var=var__113;
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value134=make_define_var(left_type_118,var__113->mCValueName,(_Bool)0,info))));
                            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code(info,"%s;\n",come_value_120->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_120->c_value);
                        }
                        come_call_finalizer2(sType_finalize,right_type2_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,var_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,left_type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value2_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    i_109++;
                }
                come_call_finalizer2(list$1charphp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                multiple_var_name_108 = come_decrement_ref_count2(multiple_var_name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                var__122=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional196=var__122==((void*)0),                _if_conditional196) {
                    var__122=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional197=var__122==((void*)0),                    _if_conditional197) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result77__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                }
                if(_if_conditional198=var__122->mType==((void*)0),                _if_conditional198) {
                    __dec_obj60=var__122->mType;
                    var__122->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(right_type_78))));
                    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                left_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(var__122->mType))));
                come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 477, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional199=var__122->mType->mStatic&&!var__122->mGlobal,                _if_conditional199) {
                    check_assign_type(((char*)(right_value139=xsprintf("\%s is assining to",((char*)(right_value138=string_to_string(self->name)))))),left_type_123,right_type_78,right_value_77,(_Bool)0,(_Bool)1,info);
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value140=make_define_var(left_type_123,var__122->mCValueName,(_Bool)0,info))),right_value_77->c_value);
                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj61=come_value_124->c_value;
                    come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(""))));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(var__122->mType->mConstant) {
                        check_assign_type(((char*)(right_value143=xsprintf("\%s is assining to",((char*)(right_value142=string_to_string(self->name)))))),left_type_123,right_type_78,right_value_77,(_Bool)0,(_Bool)1,info);
                        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value144=make_define_var(left_type_123,var__122->mCValueName,(_Bool)0,info))),right_value_77->c_value);
                            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__122->mCValueName,right_value_77->c_value);
                        }
                        __dec_obj62=come_value_124->c_value;
                        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(""))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional202=right_type_78->mHeap&&left_type_123->mHeap&&left_type_123->mPointerNum>0&&right_type_78->mPointerNum>0,                        _if_conditional202) {
                            check_assign_type(((char*)(right_value147=xsprintf("\%s is assining to",((char*)(right_value146=string_to_string(self->name)))))),left_type_123,right_type_78,right_value_77,(_Bool)0,(_Bool)1,info);
                            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(self->alloc) {
                                std_move(left_type_123,right_type_78,right_value_77,info);
                                __dec_obj63=come_value_124->c_value;
                                come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s=%s",var__122->mCValueName,right_value_77->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                decrement_ref_count_object(left_type_123,var__122->mCValueName,info,(_Bool)0);
                                std_move(left_type_123,right_type_78,right_value_77,info);
                                __dec_obj64=come_value_124->c_value;
                                come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s=%s",var__122->mCValueName,right_value_77->c_value))));
                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_125=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_77->c_value));
                            if(_if_conditional204=right_value_id_125!=-1,                            _if_conditional204) {
                                remove_object_from_right_values(right_value_id_125,info);
                            }
                            __dec_obj65=come_value_124->type;
                            come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type_123))));
                            come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value_124->var=var__122;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
                            add_come_last_code(info,"%s;\n",come_value_124->c_value);
                        }
                        else {
                            if(_if_conditional205=string_operator_equals(right_type_78->mClass->mName,"void")&&left_type_123->mHeap&&left_type_123->mPointerNum>0&&right_type_78->mPointerNum>0,                            _if_conditional205) {
                                check_assign_type(((char*)(right_value152=xsprintf("\%s is assining to",((char*)(right_value151=string_to_string(self->name)))))),left_type_123,right_type_78,right_value_77,(_Bool)0,(_Bool)1,info);
                                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(self->alloc) {
                                    __dec_obj66=come_value_124->c_value;
                                    come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s=%s",var__122->mCValueName,right_value_77->c_value))));
                                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    decrement_ref_count_object(left_type_123,var__122->mCValueName,info,(_Bool)0);
                                    __dec_obj67=come_value_124->c_value;
                                    come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s=%s",var__122->mCValueName,right_value_77->c_value))));
                                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __dec_obj68=come_value_124->type;
                                come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_type_123))));
                                come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_value_124->var=var__122;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
                                add_come_last_code(info,"%s;\n",come_value_124->c_value);
                            }
                            else {
                                check_assign_type(((char*)(right_value157=xsprintf("\%s is assining to",((char*)(right_value156=string_to_string(self->name)))))),left_type_123,right_type_78,right_value_77,(_Bool)0,(_Bool)1,info);
                                right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional207=left_type_123->mHeap&&!right_value_77->type->mHeap,                                _if_conditional207) {
                                    if(_if_conditional208=string_operator_equals(right_value_77->type->mClass->mName,"void")&&right_value_77->type->mPointerNum==1,                                    _if_conditional208) {
                                    }
                                    else {
                                        if(_if_conditional209=!right_value_77->type->mDelegate&&!right_value_77->type->mShare&&!gComeGC,                                        _if_conditional209) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result78__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,left_type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result78__;
                                        }
                                    }
                                }
                                __dec_obj69=come_value_124->c_value;
                                come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s=%s",var__122->mCValueName,right_value_77->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj70=come_value_124->type;
                                come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(left_type_123))));
                                come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_value_124->var=var__122;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
                                add_come_last_code(info,"%s;\n",come_value_124->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional210=self->alloc&&!left_type_123->mConstant&&!left_type_123->mStatic,                _if_conditional210) {
                    if(_if_conditional211=list$1sNodeph_length(left_type_123->mArrayNum)>0,                    _if_conditional211) {
                        add_come_code(info,"%s;\n",((char*)(right_value160=make_define_var(left_type_123,var__122->mCValueName,(_Bool)0,info))));
                        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value161=make_define_var(left_type_123,var__122->mCValueName,(_Bool)0,info))));
                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer2(sType_finalize,left_type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(CVALUE_finalize,right_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result79__ = (_Bool)1;
    array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result79__;
    array_initializer_37 = come_decrement_ref_count2(array_initializer_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_38;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional9;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sVar* __result37__;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct sVar* __result38__;
struct sVar* __result39__;
struct sVar* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_38, 0, sizeof(struct sVar*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
            memset(&default_value_38,0,sizeof(struct sVar*));
            hash_39=string_get_hash_key(((char*)key))%self->size;
            it_40=hash_39;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional118=self->item_existance[it_40],                _if_conditional118) {
                    if(_if_conditional119=string_equals(self->keys[it_40],key),                    _if_conditional119) {
                        __result37__ = __result_obj__ = self->items[it_40];
                        come_call_finalizer2(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result37__;
                    }
                    it_40++;
                    if(_if_conditional124=it_40>=self->size,                    _if_conditional124) {
                        it_40=0;
                    }
                    else {
                        if(_if_conditional125=it_40==hash_39,                        _if_conditional125) {
                            __result38__ = __result_obj__ = default_value_38;
                            come_call_finalizer2(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result38__;
                        }
                    }
                }
                else {
                    __result39__ = __result_obj__ = default_value_38;
                    come_call_finalizer2(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result39__;
                }
            }
            __result40__ = __result_obj__ = default_value_38;
            come_call_finalizer2(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result40__;
            come_call_finalizer2(sVar_finalize,default_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional120=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional120) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional121) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional123) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* result_47;
struct tuple3$3sTypephcharphsNodeph* __result45__;
_Bool _if_conditional133;
struct tuple3$3sTypephcharphsNodeph* __result46__;
struct tuple3$3sTypephcharphsNodeph* result_48;
struct tuple3$3sTypephcharphsNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_48, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional132=self==((void*)0),                    _if_conditional132) {
                        memset(&result_47,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result45__ = __result_obj__ = result_47;
                        return __result45__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result46__ = __result_obj__ = self->it->item;
                        return __result46__;
                    }
                    memset(&result_48,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result47__ = __result_obj__ = result_48;
                    return __result47__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result48__ = self==((void*)0)||self->it==((void*)0);
                    return __result48__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional134;
struct tuple3$3sTypephcharphsNodeph* result_50;
struct tuple3$3sTypephcharphsNodeph* __result49__;
_Bool _if_conditional135;
struct tuple3$3sTypephcharphsNodeph* __result50__;
struct tuple3$3sTypephcharphsNodeph* result_51;
struct tuple3$3sTypephcharphsNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional134=self==((void*)0)||self->it==((void*)0),                    _if_conditional134) {
                        memset(&result_50,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result49__ = __result_obj__ = result_50;
                        return __result49__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result50__ = __result_obj__ = self->it->item;
                        return __result50__;
                    }
                    memset(&result_51,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result51__ = __result_obj__ = result_51;
                    return __result51__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional139=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional139) {
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional140=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional140) {
                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result54__ = self->len;
                            return __result54__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional143;
struct sNode* result_59;
struct sNode* __result55__;
_Bool _if_conditional144;
struct sNode* __result56__;
struct sNode* result_60;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sNode*));
memset(&result_60, 0, sizeof(struct sNode*));
                                if(_if_conditional143=self==((void*)0),                                _if_conditional143) {
                                    memset(&result_59,0,sizeof(struct sNode*));
                                    __result55__ = __result_obj__ = result_59;
                                    return __result55__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result56__ = __result_obj__ = self->it->item;
                                    return __result56__;
                                }
                                memset(&result_60,0,sizeof(struct sNode*));
                                __result57__ = __result_obj__ = result_60;
                                return __result57__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result58__ = self==((void*)0)||self->it==((void*)0);
                                return __result58__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sNode* result_62;
struct sNode* __result59__;
_Bool _if_conditional146;
struct sNode* __result60__;
struct sNode* result_63;
struct sNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sNode*));
memset(&result_63, 0, sizeof(struct sNode*));
                                if(_if_conditional145=self==((void*)0)||self->it==((void*)0),                                _if_conditional145) {
                                    memset(&result_62,0,sizeof(struct sNode*));
                                    __result59__ = __result_obj__ = result_62;
                                    return __result59__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result60__ = __result_obj__ = self->it->item;
                                    return __result60__;
                                }
                                memset(&result_63,0,sizeof(struct sNode*));
                                __result61__ = __result_obj__ = result_63;
                                return __result61__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional157;
void* right_value91;
struct list_item$1CVALUEph* litem_74;
struct CVALUE* __dec_obj47;
_Bool _if_conditional159;
void* right_value92;
struct list_item$1CVALUEph* litem_75;
struct CVALUE* __dec_obj48;
void* right_value93;
struct list_item$1CVALUEph* litem_76;
struct CVALUE* __dec_obj49;
struct list$1CVALUEph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1CVALUEph*));
right_value92 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1CVALUEph*));
right_value93 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional157=self->len==0,                    _if_conditional157) {
                        litem_74=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_74->prev=((void*)0);
                        litem_74->next=((void*)0);
                        __dec_obj47=litem_74->item;
                        litem_74->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_74;
                        self->head=litem_74;
                    }
                    else {
                        if(_if_conditional159=self->len==1,                        _if_conditional159) {
                            litem_75=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_75->prev=self->head;
                            litem_75->next=((void*)0);
                            __dec_obj48=litem_75->item;
                            litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_75;
                            self->head->next=litem_75;
                        }
                        else {
                            litem_76=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_76->prev=self->tail;
                            litem_76->next=((void*)0);
                            __dec_obj49=litem_76->item;
                            litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_76;
                            self->tail=litem_76;
                        }
                    }
                    self->len++;
                    __result63__ = __result_obj__ = self;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional158=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional158) {
                                come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional167;
char* result_82;
char* __result66__;
_Bool _if_conditional168;
char* __result67__;
char* result_83;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
memset(&result_83, 0, sizeof(char*));
                        if(_if_conditional167=self==((void*)0),                        _if_conditional167) {
                            memset(&result_82,0,sizeof(char*));
                            __result66__ = __result_obj__ = result_82;
                            return __result66__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result67__ = __result_obj__ = self->it->item;
                            return __result67__;
                        }
                        memset(&result_83,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_83;
                        return __result68__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result69__ = self==((void*)0)||self->it==((void*)0);
                        return __result69__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional169;
char* result_85;
char* __result70__;
_Bool _if_conditional170;
char* __result71__;
char* result_86;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                        if(_if_conditional169=self==((void*)0)||self->it==((void*)0),                        _if_conditional169) {
                            memset(&result_85,0,sizeof(char*));
                            __result70__ = __result_obj__ = result_85;
                            return __result70__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result71__ = __result_obj__ = self->it->item;
                            return __result71__;
                        }
                        memset(&result_86,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_86;
                        return __result72__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result73__ = self->len;
                            return __result73__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional172;
struct list_item$1sTypeph* it_87;
int i_88;
_Bool _while_condtional10;
_Bool _if_conditional173;
struct sType* __result74__;
struct sType* default_value_89;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_87, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_88, 0, sizeof(int));
memset(&default_value_89, 0, sizeof(struct sType*));
                                if(_if_conditional172=position<0,                                _if_conditional172) {
                                    position+=self->len;
                                }
                                it_87=self->head;
                                i_88=0;
                                while(_while_condtional10=it_87!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional173=position==i_88,                                    _if_conditional173) {
                                        __result74__ = __result_obj__ = it_87->item;
                                        return __result74__;
                                    }
                                    it_87=it_87->next;
                                    i_88++;
                                }
                                memset(&default_value_89,0,sizeof(struct sType*));
                                __result75__ = __result_obj__ = default_value_89;
                                come_call_finalizer2(sType_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result75__;
                                come_call_finalizer2(sType_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
void* right_value163;
void* right_value164;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value173;
struct sNode* result_127;
struct sNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value173 = (void*)0;
memset(&result_127, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 594, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value164=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value163=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 594, "sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_127=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=_inf_value1)));
    come_call_finalizer2(sStoreNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result84__ = __result_obj__ = result_127;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_127) { result_127 = come_decrement_ref_count2(result_127, ((struct sNode*)result_127)->finalize, ((struct sNode*)result_127)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result84__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_127) { result_127 = come_decrement_ref_count2(result_127, ((struct sNode*)result_127)->finalize, ((struct sNode*)result_127)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value174;
char* __dec_obj78;
void* right_value175;
char* __dec_obj79;
struct sLoadNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    __dec_obj78=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(name))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sLoadNode_kind(){
void* __result_obj__;
void* right_value176;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value176=__builtin_string("sLoadNode")));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_128;
_Bool _if_conditional231;
struct sVar* parent_var_129;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value177;
struct CVALUE* come_value_130;
struct sType* type_131;
void* right_value178;
char* __dec_obj80;
void* right_value179;
struct sType* __dec_obj81;
_Bool __result88__;
struct sVar* var__132;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sFun* fun_136;
_Bool _if_conditional255;
void* right_value180;
struct CVALUE* come_value_137;
void* right_value181;
char* __dec_obj82;
struct sType* __dec_obj83;
_Bool __result93__;
_Bool __result94__;
void* right_value182;
struct CVALUE* come_value_138;
void* right_value183;
char* __dec_obj84;
void* right_value184;
struct sType* __dec_obj85;
_Bool _if_conditional256;
void* right_value185;
struct sType* __dec_obj86;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_128, 0, sizeof(struct sClass*));
memset(&parent_var_129, 0, sizeof(struct sVar*));
right_value177 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&type_131, 0, sizeof(struct sType*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&var__132, 0, sizeof(struct sVar*));
memset(&fun_136, 0, sizeof(struct sFun*));
right_value180 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    current_stack_frame_struct_128=info->current_stack_frame_struct;
    if(_if_conditional231=current_stack_frame_struct_128&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional231) {
        parent_var_129=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional232=parent_var_129!=((void*)0),        _if_conditional232) {
            if(_if_conditional233=string_operator_not_equals(parent_var_129->mFunName,info->come_fun->mName),            _if_conditional233) {
                come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 637, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                type_131=parent_var_129->mType;
                __dec_obj80=come_value_130->c_value;
                come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("(*(parent->%s))",parent_var_129->mCValueName))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_130->type;
                come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(type_131))));
                come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_130->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_130->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
                __result88__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result88__;
                come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__132=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional234=var__132==((void*)0),    _if_conditional234) {
        var__132=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional235=var__132==((void*)0),        _if_conditional235) {
            fun_136=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_136) {
                come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 664, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj82=come_value_137->c_value;
                come_value_137->c_value=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s",fun_136->mName))));
                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj83=come_value_137->type;
                come_value_137->type=(struct sType*)come_increment_ref_count(fun_136->mLambdaType);
                come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_value_137->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_137));
                __result93__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result93__;
                come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result94__ = (_Bool)1;
                return __result94__;
            }
        }
    }
    come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 681, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value_138->c_value;
    come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s",var__132->mCValueName))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_138->type;
    come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(var__132->mType))));
    come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_138->var=var__132;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
    if(_if_conditional256=list$1sNodeph_length(come_value_138->type->mArrayNum)==1,    _if_conditional256) {
        __dec_obj86=come_value_138->type->mOriginalLoadVarType->v1;
        come_value_138->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(come_value_138->type))));
        come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_138->type->mArrayNum);
        come_value_138->type->mPointerNum++;
        come_value_138->type->mOriginalTypeNamePointerNum=come_value_138->type->mPointerNum;
    }
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_133;
unsigned int hash_134;
unsigned int it_135;
_Bool _while_condtional11;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sFun* __result89__;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct sFun* __result90__;
struct sFun* __result91__;
struct sFun* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_133, 0, sizeof(struct sFun*));
memset(&hash_134, 0, sizeof(unsigned int));
memset(&it_135, 0, sizeof(unsigned int));
                memset(&default_value_133,0,sizeof(struct sFun*));
                hash_134=string_get_hash_key(((char*)key))%self->size;
                it_135=hash_134;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional236=self->item_existance[it_135],                    _if_conditional236) {
                        if(_if_conditional237=string_equals(self->keys[it_135],key),                        _if_conditional237) {
                            __result89__ = __result_obj__ = self->items[it_135];
                            come_call_finalizer2(sFun_finalize,default_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result89__;
                        }
                        it_135++;
                        if(_if_conditional253=it_135>=self->size,                        _if_conditional253) {
                            it_135=0;
                        }
                        else {
                            if(_if_conditional254=it_135==hash_134,                            _if_conditional254) {
                                __result90__ = __result_obj__ = default_value_133;
                                come_call_finalizer2(sFun_finalize,default_value_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result90__;
                            }
                        }
                    }
                    else {
                        __result91__ = __result_obj__ = default_value_133;
                        come_call_finalizer2(sFun_finalize,default_value_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
                __result92__ = __result_obj__ = default_value_133;
                come_call_finalizer2(sFun_finalize,default_value_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer2(sFun_finalize,default_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional238=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional238) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional239=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional239) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional240=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional240) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional241=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional241) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional242=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional242) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional243=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional243) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional244) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional247) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional248=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional248) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional249) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional251) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional252) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional245=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional245) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional246=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional246) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_139;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_140;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_139, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_140, 0, sizeof(struct list_item$1sNodeph*));
            it_139=self->head;
            while(_while_condtional12=it_139!=((void*)0),            _while_condtional12) {
                prev_it_140=it_139;
                it_139=it_139->next;
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result95__ = __result_obj__ = self;
            return __result95__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = self->sline;
    return __result97__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value186=__builtin_string(self->sname)));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
void* right_value187;
void* right_value188;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value192;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value192 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 711, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value188=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value187=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 711, "sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result101__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value2));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sLoadNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sLoadNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result101__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __dec_obj89;
void* right_value194;
char* __dec_obj90;
struct sFunLoadNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
right_value194 = (void*)0;
    __dec_obj89=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(name))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj90=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result102__ = __result_obj__ = self;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result102__;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional263=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional263) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional264) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = (_Bool)0;
    return __result103__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
void* right_value195;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result104__ = __result_obj__ = ((char*)(right_value195=__builtin_string("sFunLoadNode")));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result104__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_142;
_Bool _if_conditional265;
_Bool __result105__;
void* right_value196;
struct CVALUE* come_value_143;
void* right_value197;
char* __dec_obj91;
struct sType* __dec_obj92;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_142, 0, sizeof(struct sFun*));
right_value196 = (void*)0;
memset(&come_value_143, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
    fun_142=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional265=fun_142==((void*)0),    _if_conditional265) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result105__ = (_Bool)0;
        return __result105__;
    }
    else {
        come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 750, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_143->c_value;
        come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s",fun_142->mName))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj92=come_value_143->type;
        come_value_143->type=(struct sType*)come_increment_ref_count(fun_142->mLambdaType);
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_value_143->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
        come_call_finalizer2(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result106__ = (_Bool)1;
    return __result106__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = self->sline;
    return __result107__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value198;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value198=__builtin_string(self->sname)));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value199;
struct sVar* self_144;
void* right_value200;
char* __dec_obj93;
void* right_value201;
struct sType* __dec_obj94;
_Bool _if_conditional266;
void* right_value202;
char* __dec_obj95;
static int n_145=0;
void* right_value203;
char* __dec_obj96;
_Bool _if_conditional267;
void* right_value204;
char* __dec_obj97;
char* __dec_obj98;
void* right_value211;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
memset(&self_144, 0, sizeof(struct sVar*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value211 = (void*)0;
    self_144=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value199=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 775, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self_144->mName;
    self_144->mName=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(name))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj94=self_144->mType;
    self_144->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mFunctionParam) {
        __dec_obj95=self_144->mCValueName;
        self_144->mCValueName=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(name))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj96=self_144->mCValueName;
        self_144->mCValueName=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s_%d",name,n_145++))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    self_144->mBlockLevel=info->block_level;
    self_144->mAllocaValue=(_Bool)0;
    self_144->mFunctionParam=(_Bool)0;
    self_144->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj97=self_144->mFunName;
        self_144->mFunName=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(info->come_fun->mName))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj98=self_144->mFunName;
        self_144->mFunName=((void*)0);
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_144));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional268;
unsigned int hash_163;
unsigned int it_164;
_Bool _while_condtional15;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool same_key_exist_181;
char* it2_184;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct map$2charphsVarph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_163, 0, sizeof(unsigned int));
memset(&it_164, 0, sizeof(unsigned int));
memset(&same_key_exist_181, 0, sizeof(_Bool));
memset(&it2_184, 0, sizeof(char*));
        if(_if_conditional268=self->len*10>=self->size,        _if_conditional268) {
            map$2charphsVarph_rehash(self);
        }
        hash_163=string_get_hash_key(key)%self->size;
        it_164=hash_163;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional280=self->item_existance[it_164],            _if_conditional280) {
                if(_if_conditional281=string_equals(self->keys[it_164],key),                _if_conditional281) {
                    if(_if_conditional282=1,                    _if_conditional282) {
                        list$1charp_remove(self->key_list,self->keys[it_164]);
                        self->keys[it_164] = come_decrement_ref_count2(self->keys[it_164], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_164]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_164]);
                        self->keys[it_164]=key;
                    }
                    if(_if_conditional302=1,                    _if_conditional302) {
                        come_call_finalizer2(sVar_finalize,self->items[it_164], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_164]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_164]=item;
                    }
                    break;
                }
                it_164++;
                if(_if_conditional303=it_164>=self->size,                _if_conditional303) {
                    it_164=0;
                }
                else {
                    if(_if_conditional304=it_164==hash_163,                    _if_conditional304) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_164]=(_Bool)1;
                if(_if_conditional305=1,                _if_conditional305) {
                    self->keys[it_164]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_164]=key;
                }
                if(_if_conditional306=1,                _if_conditional306) {
                    self->items[it_164]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_164]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_181=(_Bool)0;
        for(        it2_184=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_184=list$1charp_next(self->key_list)        ){
            if(_if_conditional311=string_equals(it2_184,key),            _if_conditional311) {
                puts("SAME KEY");
                same_key_exist_181=(_Bool)1;
            }
        }
        if(_if_conditional312=!same_key_exist_181,        _if_conditional312) {
            list$1charp_push_back(self->key_list,key);
        }
        __result132__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result132__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_146;
void* right_value205;
char** keys_147;
void* right_value206;
struct sVar** items_148;
void* right_value207;
_Bool* item_existance_149;
int len_150;
char* it_153;
struct sVar* default_value_156;
struct sVar* it2_159;
unsigned int hash_160;
int n_161;
_Bool _while_condtional14;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct sVar* default_value_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_146, 0, sizeof(int));
right_value205 = (void*)0;
memset(&keys_147, 0, sizeof(char**));
right_value206 = (void*)0;
memset(&items_148, 0, sizeof(struct sVar**));
right_value207 = (void*)0;
memset(&item_existance_149, 0, sizeof(_Bool*));
memset(&len_150, 0, sizeof(int));
memset(&it_153, 0, sizeof(char*));
memset(&default_value_156, 0, sizeof(struct sVar*));
memset(&it2_159, 0, sizeof(struct sVar*));
memset(&hash_160, 0, sizeof(unsigned int));
memset(&n_161, 0, sizeof(int));
memset(&default_value_162, 0, sizeof(struct sVar*));
                size_146=self->size*10;
                keys_147=(char**)come_increment_ref_count(((char**)(right_value205=(char**)come_calloc(1, sizeof(char*)*(1*(size_146)), "./comelang2.h", 1335, "char*%"))));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_148=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value206=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_146)), "./comelang2.h", 1336, "sVar*%"))));
                come_call_finalizer2(sVar_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_149=(_Bool*)come_increment_ref_count(((_Bool*)(right_value207=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_146)), "./comelang2.h", 1337, "bool"))));
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_150=0;
                for(                it_153=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_153=map$2charphsVarph_next(self)                ){
                    memset(&default_value_156,0,sizeof(struct sVar*));
                    it2_159=map$2charphsVarph_at(self,it_153,default_value_156);
                    hash_160=string_get_hash_key(it_153)%size_146;
                    n_161=hash_160;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional277=item_existance_149[n_161],                        _if_conditional277) {
                            n_161++;
                            if(_if_conditional278=n_161>=size_146,                            _if_conditional278) {
                                n_161=0;
                            }
                            else {
                                if(_if_conditional279=n_161==hash_160,                                _if_conditional279) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_149[n_161]=(_Bool)1;
                            keys_147[n_161]=it_153;
                            items_148[n_161]=map$2charphsVarph_at(self,it_153,default_value_162);
                            len_150++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_147;
                self->items=items_148;
                self->item_existance=item_existance_149;
                self->size=size_146;
                self->len=len_150;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional269;
char* result_151;
char* __result109__;
_Bool _if_conditional270;
char* __result110__;
char* result_152;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
                    if(_if_conditional269=self==((void*)0),                    _if_conditional269) {
                        memset(&result_151,0,sizeof(char*));
                        __result109__ = __result_obj__ = result_151;
                        return __result109__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result110__ = __result_obj__ = self->key_list->it->item;
                        return __result110__;
                    }
                    memset(&result_152,0,sizeof(char*));
                    __result111__ = __result_obj__ = result_152;
                    return __result111__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result112__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result112__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional271;
char* result_154;
char* __result113__;
_Bool _if_conditional272;
char* __result114__;
char* result_155;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
                    if(_if_conditional271=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional271) {
                        memset(&result_154,0,sizeof(char*));
                        __result113__ = __result_obj__ = result_154;
                        return __result113__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result114__ = __result_obj__ = self->key_list->it->item;
                        return __result114__;
                    }
                    memset(&result_155,0,sizeof(char*));
                    __result115__ = __result_obj__ = result_155;
                    return __result115__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_157;
unsigned int it_158;
_Bool _while_condtional13;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct sVar* __result116__;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct sVar* __result117__;
struct sVar* __result118__;
struct sVar* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_157, 0, sizeof(unsigned int));
memset(&it_158, 0, sizeof(unsigned int));
                        hash_157=string_get_hash_key(((char*)key))%self->size;
                        it_158=hash_157;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional273=self->item_existance[it_158],                            _if_conditional273) {
                                if(_if_conditional274=string_equals(self->keys[it_158],key),                                _if_conditional274) {
                                    __result116__ = __result_obj__ = self->items[it_158];
                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result116__;
                                }
                                it_158++;
                                if(_if_conditional275=it_158>=self->size,                                _if_conditional275) {
                                    it_158=0;
                                }
                                else {
                                    if(_if_conditional276=it_158==hash_157,                                    _if_conditional276) {
                                        __result117__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result117__;
                                    }
                                }
                            }
                            else {
                                __result118__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result118__;
                            }
                        }
                        __result119__ = __result_obj__ = default_value;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result119__;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_165;
struct list_item$1charp* it_166;
_Bool _while_condtional16;
_Bool _if_conditional283;
struct list$1charp* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_165, 0, sizeof(int));
memset(&it_166, 0, sizeof(struct list_item$1charp*));
                            it2_165=0;
                            it_166=self->head;
                            while(_while_condtional16=it_166!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional283=string_equals(it_166->item,item),                                _if_conditional283) {
                                    list$1charp_delete(self,it2_165,it2_165+1);
                                    break;
                                }
                                it2_165++;
                                it_166=it_166->next;
                            }
                            __result123__ = __result_obj__ = self;
                            return __result123__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
int tmp_167;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct list$1charp* __result120__;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct list_item$1charp* it_170;
int i_171;
_Bool _while_condtional18;
_Bool _if_conditional292;
struct list_item$1charp* prev_it_172;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list_item$1charp* it_173;
int i_174;
_Bool _while_condtional19;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list_item$1charp* prev_it_175;
struct list_item$1charp* it_176;
struct list_item$1charp* head_prev_it_177;
struct list_item$1charp* tail_it_178;
int i_179;
_Bool _while_condtional20;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1charp* prev_it_180;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list$1charp* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_167, 0, sizeof(int));
memset(&it_170, 0, sizeof(struct list_item$1charp*));
memset(&i_171, 0, sizeof(int));
memset(&prev_it_172, 0, sizeof(struct list_item$1charp*));
memset(&it_173, 0, sizeof(struct list_item$1charp*));
memset(&i_174, 0, sizeof(int));
memset(&prev_it_175, 0, sizeof(struct list_item$1charp*));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_177, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional284=head<0,                                        _if_conditional284) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional285=tail<0,                                        _if_conditional285) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional286=head>tail,                                        _if_conditional286) {
                                            tmp_167=tail;
                                            tail=head;
                                            head=tmp_167;
                                        }
                                        if(_if_conditional287=head<0,                                        _if_conditional287) {
                                            head=0;
                                        }
                                        if(_if_conditional288=tail>self->len,                                        _if_conditional288) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional289=head==tail,                                        _if_conditional289) {
                                            __result120__ = __result_obj__ = self;
                                            return __result120__;
                                        }
                                        if(_if_conditional290=head==0&&tail==self->len,                                        _if_conditional290) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional291=head==0,                                            _if_conditional291) {
                                                it_170=self->head;
                                                i_171=0;
                                                while(_while_condtional18=it_170!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional292=i_171<tail,                                                    _if_conditional292) {
                                                        prev_it_172=it_170;
                                                        it_170=it_170->next;
                                                        i_171++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional293=i_171==tail,                                                        _if_conditional293) {
                                                            self->head=it_170;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_170=it_170->next;
                                                            i_171++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional294=tail==self->len,                                                _if_conditional294) {
                                                    it_173=self->head;
                                                    i_174=0;
                                                    while(_while_condtional19=it_173!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional295=i_174==head,                                                        _if_conditional295) {
                                                            self->tail=it_173->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional296=i_174>=head,                                                        _if_conditional296) {
                                                            prev_it_175=it_173;
                                                            it_173=it_173->next;
                                                            i_174++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_173=it_173->next;
                                                            i_174++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_176=self->head;
                                                    head_prev_it_177=((void*)0);
                                                    tail_it_178=((void*)0);
                                                    i_179=0;
                                                    while(_while_condtional20=it_176!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional297=i_179==head,                                                        _if_conditional297) {
                                                            head_prev_it_177=it_176->prev;
                                                        }
                                                        if(_if_conditional298=i_179==tail,                                                        _if_conditional298) {
                                                            tail_it_178=it_176;
                                                        }
                                                        if(_if_conditional299=i_179>=head&&i_179<tail,                                                        _if_conditional299) {
                                                            prev_it_180=it_176;
                                                            it_176=it_176->next;
                                                            i_179++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_176=it_176->next;
                                                            i_179++;
                                                        }
                                                    }
                                                    if(_if_conditional300=head_prev_it_177!=((void*)0),                                                    _if_conditional300) {
                                                        head_prev_it_177->next=tail_it_178;
                                                    }
                                                    if(_if_conditional301=tail_it_178!=((void*)0),                                                    _if_conditional301) {
                                                        tail_it_178->prev=head_prev_it_177;
                                                    }
                                                }
                                            }
                                        }
                                        __result122__ = __result_obj__ = self;
                                        return __result122__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_168;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_169;
struct list$1charp* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_169, 0, sizeof(struct list_item$1charp*));
                                                it_168=self->head;
                                                while(_while_condtional17=it_168!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_169=it_168;
                                                    it_168=it_168->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result121__ = __result_obj__ = self;
                                                return __result121__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional307;
char* result_182;
char* __result124__;
_Bool _if_conditional308;
char* __result125__;
char* result_183;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_182, 0, sizeof(char*));
memset(&result_183, 0, sizeof(char*));
            if(_if_conditional307=self==((void*)0),            _if_conditional307) {
                memset(&result_182,0,sizeof(char*));
                __result124__ = __result_obj__ = result_182;
                return __result124__;
            }
            self->it=self->head;
            if(self->it) {
                __result125__ = __result_obj__ = self->it->item;
                return __result125__;
            }
            memset(&result_183,0,sizeof(char*));
            __result126__ = __result_obj__ = result_183;
            return __result126__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
            __result127__ = self==((void*)0)||self->it==((void*)0);
            return __result127__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional309;
char* result_185;
char* __result128__;
_Bool _if_conditional310;
char* __result129__;
char* result_186;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_185, 0, sizeof(char*));
memset(&result_186, 0, sizeof(char*));
            if(_if_conditional309=self==((void*)0)||self->it==((void*)0),            _if_conditional309) {
                memset(&result_185,0,sizeof(char*));
                __result128__ = __result_obj__ = result_185;
                return __result128__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result129__ = __result_obj__ = self->it->item;
                return __result129__;
            }
            memset(&result_186,0,sizeof(char*));
            __result130__ = __result_obj__ = result_186;
            return __result130__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional313;
void* right_value208;
struct list_item$1charp* litem_187;
_Bool _if_conditional314;
void* right_value209;
struct list_item$1charp* litem_188;
void* right_value210;
struct list_item$1charp* litem_189;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1charp*));
right_value209 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
right_value210 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional313=self->len==0,                _if_conditional313) {
                    litem_187=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value208=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_187->prev=((void*)0);
                    litem_187->next=((void*)0);
                    litem_187->item=item;
                    self->tail=litem_187;
                    self->head=litem_187;
                }
                else {
                    if(_if_conditional314=self->len==1,                    _if_conditional314) {
                        litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value209=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_188->prev=self->head;
                        litem_188->next=((void*)0);
                        litem_188->item=item;
                        self->tail=litem_188;
                        self->head->next=litem_188;
                    }
                    else {
                        litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value210=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_189->prev=self->tail;
                        litem_189->next=((void*)0);
                        litem_189->item=item;
                        self->tail->next=litem_189;
                        self->tail=litem_189;
                    }
                }
                self->len++;
                __result131__ = __result_obj__ = self;
                return __result131__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value212;
struct sVar* self_190;
void* right_value213;
char* __dec_obj99;
void* right_value214;
struct sType* __dec_obj100;
void* right_value215;
char* __dec_obj101;
void* right_value216;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
memset(&self_190, 0, sizeof(struct sVar*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    self_190=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value212=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 804, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self_190->mName;
    self_190->mName=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj100=self_190->mType;
    self_190->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self_190->mGlobal=(_Bool)1;
    __dec_obj101=self_190->mCValueName;
    self_190->mCValueName=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(name))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_190->mBlockLevel=info->block_level;
    self_190->mAllocaValue=(_Bool)0;
    self_190->mFunctionParam=(_Bool)0;
    self_190->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_190));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value217;
struct sVar* self_191;
void* right_value218;
char* __dec_obj102;
void* right_value219;
struct sType* __dec_obj103;
void* right_value220;
char* __dec_obj104;
void* right_value221;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
memset(&self_191, 0, sizeof(struct sVar*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value217=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 823, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=self_191->mName;
    self_191->mName=(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(name))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj103=self_191->mType;
    self_191->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self_191->mGlobal=(_Bool)1;
    __dec_obj104=self_191->mCValueName;
    self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(c_value))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_191->mBlockLevel=info->block_level;
    self_191->mAllocaValue=(_Bool)0;
    self_191->mFunctionParam=(_Bool)0;
    self_191->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_192;
_Bool multiple_declare_193;
_Bool _if_conditional315;
char* p_194;
int sline_195;
void* right_value222;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_196;
char* name_197;
_Bool err_198;
_Bool _if_conditional318;
_Bool multiple_declare2_199;
_Bool _if_conditional319;
char* p_200;
int sline_201;
void* right_value223;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_202;
char* name_203;
_Bool err_204;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool no_output_err_205;
_Bool no_comma_206;
_Bool no_output_come_code_207;
void* right_value224;
struct sNode* exp_208;
_Bool _if_conditional322;
struct sFun* fun_209;
_Bool _if_conditional323;
void* right_value225;
char* buf2_210;
struct list$1charph* multiple_assign_211;
_Bool _if_conditional324;
void* right_value226;
void* right_value227;
struct list$1charph* __dec_obj105;
void* right_value231;
_Bool _while_condtional21;
void* right_value232;
char* buf3_215;
void* right_value233;
_Bool _if_conditional327;
_Bool no_comma_216;
void* right_value234;
struct sNode* right_value_217;
void* right_value235;
struct sNode* __dec_obj109;
void* right_value236;
void* right_value237;
void* right_value238;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value247;
struct sNode* result_219;
struct sNode* __result136__;
_Bool _if_conditional345;
void* right_value248;
void* right_value249;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_220;
void* right_value250;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_221;
char* name_222;
_Bool err_223;
void* right_value251;
struct tuple2$2sTypephcharph* variable_name_224;
void* right_value252;
void* right_value253;
struct tuple3$3sTypephcharphsNodeph* variable_name2_225;
_Bool _while_condtional22;
void* right_value257;
struct tuple2$2sTypephcharph* variable_name_229;
void* right_value258;
void* right_value259;
struct tuple3$3sTypephcharphsNodeph* variable_name2_230;
void* right_value260;
void* right_value261;
void* right_value262;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value271;
struct sNode* result_232;
struct sNode* __result141__;
_Bool _if_conditional369;
void* right_value272;
void* right_value273;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_233;
void* right_value274;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_234;
char* name_235;
_Bool err_236;
void* right_value275;
struct tuple2$2sTypephcharph* variable_name_237;
_Bool _if_conditional370;
_Bool no_comma_238;
void* right_value276;
struct sNode* exp_239;
void* right_value277;
void* right_value278;
struct tuple3$3sTypephcharphsNodeph* variable_name2_240;
_Bool _while_condtional23;
void* right_value279;
struct tuple2$2sTypephcharph* variable_name_241;
_Bool _if_conditional371;
_Bool no_comma_242;
void* right_value280;
struct sNode* exp_243;
void* right_value281;
void* right_value282;
struct tuple3$3sTypephcharphsNodeph* variable_name2_244;
void* right_value283;
void* right_value284;
void* right_value285;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value294;
struct sNode* result_246;
struct sNode* __result145__;
_Bool _if_conditional389;
void* right_value295;
struct sNode* right_value_247;
void* right_value296;
struct sNode* __dec_obj139;
void* right_value297;
void* right_value298;
void* right_value299;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value308;
struct sNode* result_249;
struct sNode* __result148__;
_Bool _if_conditional407;
void* right_value309;
void* right_value310;
void* right_value311;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value315;
struct sNode* node_251;
void* right_value316;
struct sNode* __dec_obj149;
void* right_value317;
struct sNode* __dec_obj150;
struct sNode* __result151__;
void* right_value318;
char* word_252;
_Bool _if_conditional414;
void* right_value319;
char* __dec_obj151;
_Bool is_type_name_flag_253;
_Bool _if_conditional415;
void* right_value320;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_254;
char* name_255;
_Bool err_256;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value321;
void* right_value322;
struct buffer* buf2_257;
_Bool squort_258;
_Bool dquort_259;
int nest_260;
_Bool _while_condtional24;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value323;
char* array_initializer_261;
void* right_value324;
void* right_value325;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value334;
struct sNode* result_263;
struct sNode* __result154__;
void* right_value335;
struct sNode* right_value_264;
void* right_value336;
void* right_value337;
struct list$1sNodeph* right_values_265;
_Bool _while_condtional25;
char* anonymous_var_nameX2030_266;
void* right_value338;
struct sNode* __dec_obj159;
void* right_value339;
void* right_value340;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value349;
struct sNode* result_268;
struct sNode* __result157__;
void* right_value350;
void* right_value351;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value360;
struct sNode* result_270;
struct sNode* __result160__;
void* right_value361;
struct sNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_192, 0, sizeof(_Bool));
memset(&multiple_declare_193, 0, sizeof(_Bool));
memset(&p_194, 0, sizeof(char*));
memset(&sline_195, 0, sizeof(int));
right_value222 = (void*)0;
memset(&type_196, 0, sizeof(struct sType*));
memset(&name_197, 0, sizeof(char*));
memset(&err_198, 0, sizeof(_Bool));
memset(&type_196, 0, sizeof(struct sType*));
memset(&name_197, 0, sizeof(char*));
memset(&err_198, 0, sizeof(_Bool));
memset(&multiple_declare2_199, 0, sizeof(_Bool));
memset(&p_200, 0, sizeof(char*));
memset(&sline_201, 0, sizeof(int));
right_value223 = (void*)0;
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&no_output_err_205, 0, sizeof(_Bool));
memset(&no_comma_206, 0, sizeof(_Bool));
memset(&no_output_come_code_207, 0, sizeof(_Bool));
right_value224 = (void*)0;
memset(&exp_208, 0, sizeof(struct sNode*));
memset(&fun_209, 0, sizeof(struct sFun*));
right_value225 = (void*)0;
memset(&buf2_210, 0, sizeof(char*));
memset(&multiple_assign_211, 0, sizeof(struct list$1charph*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&buf3_215, 0, sizeof(char*));
right_value233 = (void*)0;
memset(&no_comma_216, 0, sizeof(_Bool));
right_value234 = (void*)0;
memset(&right_value_217, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value247 = (void*)0;
memset(&result_219, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&multiple_declare_220, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value250 = (void*)0;
memset(&base_type_221, 0, sizeof(struct sType*));
memset(&name_222, 0, sizeof(char*));
memset(&err_223, 0, sizeof(_Bool));
memset(&base_type_221, 0, sizeof(struct sType*));
memset(&name_222, 0, sizeof(char*));
memset(&err_223, 0, sizeof(_Bool));
right_value251 = (void*)0;
memset(&variable_name_224, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&variable_name2_225, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value257 = (void*)0;
memset(&variable_name_229, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&variable_name2_230, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value271 = (void*)0;
memset(&result_232, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&multiple_declare_233, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value274 = (void*)0;
memset(&base_type_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
memset(&base_type_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
right_value275 = (void*)0;
memset(&variable_name_237, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_238, 0, sizeof(_Bool));
right_value276 = (void*)0;
memset(&exp_239, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&variable_name2_240, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value279 = (void*)0;
memset(&variable_name_241, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_242, 0, sizeof(_Bool));
right_value280 = (void*)0;
memset(&exp_243, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&variable_name2_244, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value294 = (void*)0;
memset(&result_246, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
memset(&right_value_247, 0, sizeof(struct sNode*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value308 = (void*)0;
memset(&result_249, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value315 = (void*)0;
memset(&node_251, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&word_252, 0, sizeof(char*));
right_value319 = (void*)0;
memset(&is_type_name_flag_253, 0, sizeof(_Bool));
right_value320 = (void*)0;
memset(&type_254, 0, sizeof(struct sType*));
memset(&name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
memset(&type_254, 0, sizeof(struct sType*));
memset(&name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&buf2_257, 0, sizeof(struct buffer*));
memset(&squort_258, 0, sizeof(_Bool));
memset(&dquort_259, 0, sizeof(_Bool));
memset(&nest_260, 0, sizeof(int));
right_value323 = (void*)0;
memset(&array_initializer_261, 0, sizeof(char*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value334 = (void*)0;
memset(&result_263, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
memset(&right_value_264, 0, sizeof(struct sNode*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&right_values_265, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX2030_266, 0, sizeof(char*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value349 = (void*)0;
memset(&result_268, 0, sizeof(struct sNode*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value360 = (void*)0;
memset(&result_270, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
    is_type_name_flag_192=is_type_name(buf,info);
    multiple_declare_193=(_Bool)0;
    if(is_type_name_flag_192) {
        p_194=info->p;
        sline_195=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value222=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_196=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_197=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_198=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional318=err_198&&*info->p==44,        _if_conditional318) {
            multiple_declare_193=(_Bool)1;
        }
        info->p=p_194;
        info->sline=sline_195;
        come_call_finalizer2(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_197 = come_decrement_ref_count2(name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    multiple_declare2_199=(_Bool)0;
    if(is_type_name_flag_192) {
        p_200=info->p;
        sline_201=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value223=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_202=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_203=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_204=multiple_assign_var3->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional320=err_204&&*info->p==61,        _if_conditional320) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional321=*info->p==123,            _if_conditional321) {
            }
            else {
                no_output_err_205=info->no_output_err;
                no_comma_206=info->no_comma;
                no_output_come_code_207=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_208=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=expression_v13(info))));
                if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_206;
                info->no_output_err=no_output_err_205;
                info->no_output_come_code=no_output_come_code_207;
                if(_if_conditional322=*info->p==44,                _if_conditional322) {
                    multiple_declare2_199=(_Bool)1;
                }
                if(exp_208) { exp_208 = come_decrement_ref_count2(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        info->p=p_200;
        info->sline=sline_201;
        come_call_finalizer2(sType_finalize,type_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_203 = come_decrement_ref_count2(name_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_209=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional323=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional323) {
        parse_sharp_v5(info);
        buf2_210=(char*)come_increment_ref_count(((char*)(right_value225=parse_word(info))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        multiple_assign_211=((void*)0);
        if(_if_conditional324=*info->p==44,        _if_conditional324) {
            __dec_obj105=multiple_assign_211;
            multiple_assign_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value227=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 921, "list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_211,(char*)come_increment_ref_count(((char*)(right_value231=string_clone(buf2_210)))));
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_215=(char*)come_increment_ref_count(((char*)(right_value232=parse_word(info))));
                right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_211,(char*)come_increment_ref_count(((char*)(right_value233=string_clone(buf3_215)))));
                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_215 = come_decrement_ref_count2(buf3_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional327=*info->p==61&&*(info->p+1)!=61,        _if_conditional327) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_216=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=expression_v13(info))));
            if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_216;
            parse_sharp_v5(info);
            __dec_obj109=right_value_217;
            right_value_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_217),info))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 951, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value238=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value236=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 951, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(buf2_210)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_211),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_217),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=_inf_value3)));
            come_call_finalizer2(sStoreNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result136__ = __result_obj__ = result_219;
            if(right_value_217) { right_value_217 = come_decrement_ref_count2(right_value_217, ((struct sNode*)right_value_217)->finalize, ((struct sNode*)right_value_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_219) { result_219 = come_decrement_ref_count2(result_219, ((struct sNode*)result_219)->finalize, ((struct sNode*)result_219)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_210 = come_decrement_ref_count2(buf2_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,multiple_assign_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result136__;
            if(right_value_217) { right_value_217 = come_decrement_ref_count2(right_value_217, ((struct sNode*)right_value_217)->finalize, ((struct sNode*)right_value_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_219) { result_219 = come_decrement_ref_count2(result_219, ((struct sNode*)result_219)->finalize, ((struct sNode*)result_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_210 = come_decrement_ref_count2(buf2_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,multiple_assign_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_193) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_220=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value249=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value248=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 966, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value250=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_221=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_222=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_223=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            variable_name_224=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value251=parse_variable_name((struct sType*)come_increment_ref_count(base_type_221),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            variable_name2_225=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value253=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value252=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 972, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_224->v1),(char*)come_increment_ref_count(variable_name_224->v2),((void*)0)))));
            right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_220,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_225));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_229=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_221),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                variable_name2_230=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value259=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value258=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 982, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_229->v1),(char*)come_increment_ref_count(variable_name_229->v2),((void*)0)))));
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_220,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_230));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 987, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value262=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value260=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 987, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_220),(struct sType*)come_increment_ref_count(base_type_221),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=_inf_value4)));
            come_call_finalizer2(sStoreNode_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result141__ = __result_obj__ = result_232;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_222 = come_decrement_ref_count2(name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_232) { result_232 = come_decrement_ref_count2(result_232, ((struct sNode*)result_232)->finalize, ((struct sNode*)result_232)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result141__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_222 = come_decrement_ref_count2(name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_232) { result_232 = come_decrement_ref_count2(result_232, ((struct sNode*)result_232)->finalize, ((struct sNode*)result_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(multiple_declare2_199) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_233=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value273=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value272=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 997, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value274=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_234=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_235=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_236=multiple_assign_var5->v3;
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                variable_name_237=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value275=parse_variable_name((struct sType*)come_increment_ref_count(base_type_234),(_Bool)1,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional370=*info->p==61,                _if_conditional370) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_238=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=expression_v13(info))));
                    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_238;
                    variable_name2_240=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value278=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value277=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1016, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_237->v1),(char*)come_increment_ref_count(variable_name_237->v2),(struct sNode*)come_increment_ref_count(exp_239)))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_233,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_240));
                    if(exp_239) { exp_239 = come_decrement_ref_count2(exp_239, ((struct sNode*)exp_239)->finalize, ((struct sNode*)exp_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_241=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value279=parse_variable_name((struct sType*)come_increment_ref_count(base_type_234),(_Bool)0,info))));
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional371=*info->p==61,                    _if_conditional371) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_242=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=expression_v13(info))));
                        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_242;
                        variable_name2_244=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value282=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value281=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1040, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_241->v1),(char*)come_increment_ref_count(variable_name_241->v2),(struct sNode*)come_increment_ref_count(exp_243)))));
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_233,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_244));
                        if(exp_243) { exp_243 = come_decrement_ref_count2(exp_243, ((struct sNode*)exp_243)->finalize, ((struct sNode*)exp_243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1049, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value285=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value283=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1049, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_233),(struct sType*)come_increment_ref_count(base_type_234),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=_inf_value5)));
                come_call_finalizer2(sStoreNode_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStoreNode_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                __result145__ = __result_obj__ = result_246;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_235 = come_decrement_ref_count2(name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_246) { result_246 = come_decrement_ref_count2(result_246, ((struct sNode*)result_246)->finalize, ((struct sNode*)result_246)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result145__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_235 = come_decrement_ref_count2(name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_246) { result_246 = come_decrement_ref_count2(result_246, ((struct sNode*)result_246)->finalize, ((struct sNode*)result_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional389=!is_type_name_flag_192&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional389) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=expression_v13(info))));
                    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj139=right_value_247;
                    right_value_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_247),info))));
                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1067, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value299=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value297=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1067, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_247),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=_inf_value6)));
                    come_call_finalizer2(sStoreNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result148__ = __result_obj__ = result_249;
                    if(right_value_247) { right_value_247 = come_decrement_ref_count2(right_value_247, ((struct sNode*)right_value_247)->finalize, ((struct sNode*)right_value_247)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_249) { result_249 = come_decrement_ref_count2(result_249, ((struct sNode*)result_249)->finalize, ((struct sNode*)result_249)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result148__;
                    if(right_value_247) { right_value_247 = come_decrement_ref_count2(right_value_247, ((struct sNode*)right_value_247)->finalize, ((struct sNode*)right_value_247)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_249) { result_249 = come_decrement_ref_count2(result_249, ((struct sNode*)result_249)->finalize, ((struct sNode*)result_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional407=!is_type_name_flag_192||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional407) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1074, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value311=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value309=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1074, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=_inf_value7)));
                        come_call_finalizer2(sLoadNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLoadNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj149=node_251;
                        node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_251),info))));
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj150=node_251;
                        node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_251),info))));
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result151__ = __result_obj__ = node_251;
                        if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result151__;
                        if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_252=(char*)come_increment_ref_count(((char*)(right_value318=__builtin_string(""))));
                        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional414=xisalpha(*info->p)||*info->p==95,                        _if_conditional414) {
                            __dec_obj151=word_252;
                            word_252=(char*)come_increment_ref_count(((char*)(right_value319=parse_word(info))));
                            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_253=is_type_name(word_252,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_253) {
                            parse_sharp_v5(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value320=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_254=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_255=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_256=multiple_assign_var6->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional416=!err_256,                            _if_conditional416) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional417=*info->p==61,                            _if_conditional417) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional418=*info->p==123,                                _if_conditional418) {
                                    buf2_257=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1113, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    buffer_append_char(buf2_257,*info->p);
                                    info->p++;
                                    squort_258=(_Bool)0;
                                    dquort_259=(_Bool)0;
                                    nest_260=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional419=*info->p==0,                                        _if_conditional419) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional420=*info->p==92,                                            _if_conditional420) {
                                                buffer_append_char(buf2_257,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_257,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional421=!squort_258&&*info->p==34,                                                _if_conditional421) {
                                                    buffer_append_char(buf2_257,*info->p);
                                                    info->p++;
                                                    dquort_259=!dquort_259;
                                                }
                                                else {
                                                    if(_if_conditional422=!dquort_259&&*info->p==39,                                                    _if_conditional422) {
                                                        buffer_append_char(buf2_257,*info->p);
                                                        info->p++;
                                                        squort_258=!squort_258;
                                                    }
                                                    else {
                                                        if(_if_conditional423=squort_258||dquort_259,                                                        _if_conditional423) {
                                                            buffer_append_char(buf2_257,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional424=*info->p==123,                                                            _if_conditional424) {
                                                                nest_260++;
                                                                buffer_append_char(buf2_257,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional425=*info->p==125,                                                                _if_conditional425) {
                                                                    nest_260--;
                                                                    buffer_append_char(buf2_257,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional426=nest_260==0,                                                                    _if_conditional426) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_257,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_261=(char*)come_increment_ref_count(((char*)(right_value323=buffer_to_string(buf2_257))));
                                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1168, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value325=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value324=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1168, "sStoreNode")))),(char*)come_increment_ref_count(name_255),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_254),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_261),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=_inf_value8)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result154__ = __result_obj__ = result_263;
                                    come_call_finalizer2(buffer_finalize,buf2_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_261 = come_decrement_ref_count2(array_initializer_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_263) { result_263 = come_decrement_ref_count2(result_263, ((struct sNode*)result_263)->finalize, ((struct sNode*)result_263)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_252 = come_decrement_ref_count2(word_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result154__;
                                    come_call_finalizer2(buffer_finalize,buf2_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_261 = come_decrement_ref_count2(array_initializer_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_263) { result_263 = come_decrement_ref_count2(result_263, ((struct sNode*)result_263)->finalize, ((struct sNode*)result_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=expression_v13(info))));
                                    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    parse_sharp_v5(info);
                                    right_values_265=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value337=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value336=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1179, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        anonymous_var_nameX2030_266 = come_decrement_ref_count2(anonymous_var_nameX2030_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    __dec_obj159=right_value_264;
                                    right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_264),info))));
                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1186, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value340=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value339=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1186, "sStoreNode")))),(char*)come_increment_ref_count(name_255),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_254),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_264),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=_inf_value9)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result157__ = __result_obj__ = result_268;
                                    if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_268) { result_268 = come_decrement_ref_count2(result_268, ((struct sNode*)result_268)->finalize, ((struct sNode*)result_268)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_252 = come_decrement_ref_count2(word_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result157__;
                                    if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_268) { result_268 = come_decrement_ref_count2(result_268, ((struct sNode*)result_268)->finalize, ((struct sNode*)result_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1194, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value351=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value350=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1194, "sStoreNode")))),(char*)come_increment_ref_count(name_255),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_254),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=_inf_value10)));
                                come_call_finalizer2(sStoreNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result160__ = __result_obj__ = result_270;
                                if(result_270) { result_270 = come_decrement_ref_count2(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_252 = come_decrement_ref_count2(word_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result160__;
                                if(result_270) { result_270 = come_decrement_ref_count2(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            come_call_finalizer2(sType_finalize,type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_252 = come_decrement_ref_count2(word_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result161__ = __result_obj__ = ((struct sNode*)(right_value361=string_node_v5(buf,head,head_sline,info)));
    if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result161__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional316=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional316) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional317=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional317) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional325;
void* right_value228;
struct list_item$1charph* litem_212;
char* __dec_obj106;
_Bool _if_conditional326;
void* right_value229;
struct list_item$1charph* litem_213;
char* __dec_obj107;
void* right_value230;
struct list_item$1charph* litem_214;
char* __dec_obj108;
struct list$1charph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
memset(&litem_212, 0, sizeof(struct list_item$1charph*));
right_value229 = (void*)0;
memset(&litem_213, 0, sizeof(struct list_item$1charph*));
right_value230 = (void*)0;
memset(&litem_214, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional325=self->len==0,                _if_conditional325) {
                    litem_212=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value228=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_212->prev=((void*)0);
                    litem_212->next=((void*)0);
                    __dec_obj106=litem_212->item;
                    litem_212->item=(char*)come_increment_ref_count(item);
                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_212;
                    self->head=litem_212;
                }
                else {
                    if(_if_conditional326=self->len==1,                    _if_conditional326) {
                        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value229=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_213->prev=self->head;
                        litem_213->next=((void*)0);
                        __dec_obj107=litem_213->item;
                        litem_213->item=(char*)come_increment_ref_count(item);
                        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_213;
                        self->head->next=litem_213;
                    }
                    else {
                        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value230=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_214->prev=self->tail;
                        litem_214->next=((void*)0);
                        __dec_obj108=litem_214->item;
                        litem_214->item=(char*)come_increment_ref_count(item);
                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_214;
                        self->tail=litem_214;
                    }
                }
                self->len++;
                __result133__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result133__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional346=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional346) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional347=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional347) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj117;
char* __dec_obj118;
struct tuple3$3sTypephcharphvoidp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj117=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj118=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->v3=v3;
                __result137__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional348=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional348) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional349=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional349) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional350;
void* right_value254;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_226;
struct tuple3$3sTypephcharphsNodeph* __dec_obj119;
_Bool _if_conditional351;
void* right_value255;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_227;
struct tuple3$3sTypephcharphsNodeph* __dec_obj120;
void* right_value256;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_228;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
struct list$1tuple3$3sTypephcharphsNodephph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
memset(&litem_226, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value255 = (void*)0;
memset(&litem_227, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value256 = (void*)0;
memset(&litem_228, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional350=self->len==0,                _if_conditional350) {
                    litem_226=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value254=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_226->prev=((void*)0);
                    litem_226->next=((void*)0);
                    __dec_obj119=litem_226->item;
                    litem_226->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_226;
                    self->head=litem_226;
                }
                else {
                    if(_if_conditional351=self->len==1,                    _if_conditional351) {
                        litem_227=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value255=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_227->prev=self->head;
                        litem_227->next=((void*)0);
                        __dec_obj120=litem_227->item;
                        litem_227->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_227;
                        self->head->next=litem_227;
                    }
                    else {
                        litem_228=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value256=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_228->prev=self->tail;
                        litem_228->next=((void*)0);
                        __dec_obj121=litem_228->item;
                        litem_228->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_228;
                        self->tail=litem_228;
                    }
                }
                self->len++;
                __result138__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result138__;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj129;
char* __dec_obj130;
struct sNode* __dec_obj131;
struct tuple3$3sTypephcharphsNodeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj129=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        __dec_obj130=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj131=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
                        __result142__ = __result_obj__ = self;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result142__;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional408=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional408) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional409=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional409) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sLoadNode* __result149__;
void* right_value312;
struct sLoadNode* result_250;
_Bool _if_conditional411;
void* right_value313;
char* __dec_obj147;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value314;
char* __dec_obj148;
struct sLoadNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
memset(&result_250, 0, sizeof(struct sLoadNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
                            if(_if_conditional410=self==(void*)0,                            _if_conditional410) {
                                __result149__ = __result_obj__ = (void*)0;
                                return __result149__;
                            }
                            result_250=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value312=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer2(sLoadNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional411=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional411) {
                                __dec_obj147=result_250->name;
                                result_250->name=(char*)come_increment_ref_count(((char*)(right_value313=string_clone(self->name))));
                                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional412=self!=((void*)0),                            _if_conditional412) {
                                result_250->sline=self->sline;
                            }
                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional413) {
                                __dec_obj148=result_250->sname;
                                result_250->sname=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->sname))));
                                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result150__ = __result_obj__ = result_250;
                            come_call_finalizer2(sLoadNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result150__;
                            come_call_finalizer2(sLoadNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional461=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional461) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional462=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional462) {
                                        come_call_finalizer2(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional463=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional463) {
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional464=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional464) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional465=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional465) {
                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional466=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional466) {
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional467=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional467) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional468;
struct sStoreNode* __result158__;
void* right_value352;
struct sStoreNode* result_269;
_Bool _if_conditional469;
void* right_value353;
char* __dec_obj167;
_Bool _if_conditional470;
void* right_value354;
struct list$1charph* __dec_obj168;
_Bool _if_conditional471;
void* right_value355;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj169;
_Bool _if_conditional472;
void* right_value356;
struct sNode* __dec_obj170;
_Bool _if_conditional473;
void* right_value357;
struct sType* __dec_obj171;
_Bool _if_conditional474;
void* right_value358;
char* __dec_obj172;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
void* right_value359;
char* __dec_obj173;
struct sStoreNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
memset(&result_269, 0, sizeof(struct sStoreNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
                                    if(_if_conditional468=self==(void*)0,                                    _if_conditional468) {
                                        __result158__ = __result_obj__ = (void*)0;
                                        return __result158__;
                                    }
                                    result_269=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value352=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer2(sStoreNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional469=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional469) {
                                        __dec_obj167=result_269->name;
                                        result_269->name=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->name))));
                                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional470=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional470) {
                                        __dec_obj168=result_269->multiple_assign;
                                        result_269->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value354=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional471) {
                                        __dec_obj169=result_269->multiple_declare;
                                        result_269->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value355=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional472=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional472) {
                                        __dec_obj170=result_269->right_value;
                                        result_269->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=sNode_clone(self->right_value))));
                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional473=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional473) {
                                        __dec_obj171=result_269->type;
                                        result_269->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(self->type))));
                                        come_call_finalizer2(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional474=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional474) {
                                        __dec_obj172=result_269->array_initializer;
                                        result_269->array_initializer=(char*)come_increment_ref_count(((char*)(right_value358=string_clone(self->array_initializer))));
                                        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional475=self!=((void*)0),                                    _if_conditional475) {
                                        result_269->alloc=self->alloc;
                                    }
                                    if(_if_conditional476=self!=((void*)0),                                    _if_conditional476) {
                                        result_269->sline=self->sline;
                                    }
                                    if(_if_conditional477=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional477) {
                                        __dec_obj173=result_269->sname;
                                        result_269->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result159__ = __result_obj__ = result_269;
                                    come_call_finalizer2(sStoreNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result159__;
                                    come_call_finalizer2(sStoreNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

