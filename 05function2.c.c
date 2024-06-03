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
    _Bool in_class;
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

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

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
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
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
_Bool _if_conditional156;
char* p_89;
char* head_90;
void* right_value148;
char* source_91;
void* right_value149;
struct sNode* node_92;
_Bool _if_conditional157;
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
memset(&p_89, 0, sizeof(char*));
memset(&head_90, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&source_91, 0, sizeof(char*));
right_value149 = (void*)0;
memset(&node_92, 0, sizeof(struct sNode*));
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
    # 277 "05function2.c"
    # 255 "05function2.c"
    if(return_self_at_last) {
        # 256 "05function2.c"
        p_89=info->p;
        # 257 "05function2.c"
        head_90=info->head;
        # 259 "05function2.c"
        source_91=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("return self;"))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 261 "05function2.c"
        info->p=source_91;
        # 262 "05function2.c"
        info->head=source_91;
        # 264 "05function2.c"
        node_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=expression_v13(info))));
        if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 271 "05function2.c"
        # 266 "05function2.c"
        if(_if_conditional157=node_92==((void*)0),        _if_conditional157) {
            # 267 "05function2.c"
            err_msg(info,"Invalid expression");
            # 268 "05function2.c"
            exit(1);
        }
        # 271 "05function2.c"
        list$1sNodeph_push_back(result_80->mNodes,(struct sNode*)come_increment_ref_count(node_92));
        # 273 "05function2.c"
        info->p=p_89;
        # 274 "05function2.c"
        info->head=head_90;
        source_91 = come_decrement_ref_count2(source_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_92) { node_92 = come_decrement_ref_count2(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 277 "05function2.c"
    info->block_level=block_level_81;
    # 279 "05function2.c"
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
_Bool _if_conditional158;
int __result87__;
struct sVarTable* old_table_93;
_Bool _if_conditional159;
void* right_value150;
void* right_value151;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_94;
_Bool _if_conditional160;
struct list$1sTypeph* param_types__95;
struct list$1charph* param_names__96;
_Bool _if_conditional161;
int i_97;
struct list$1charph* o2_saved_98;
char* name_101;
void* right_value152;
struct sType* type_107;
void* right_value153;
int block_level_108;
_Bool _if_conditional168;
_Bool _if_conditional170;
int i_109;
struct list$1sNodeph* o2_saved_110;
struct sNode* node_113;
struct list$1sRightValueObjectph* right_value_objects_116;
void* right_value154;
void* right_value155;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_119;
int sline_120;
void* right_value156;
char* sname_121;
void* right_value157;
char* __dec_obj65;
_Bool _if_conditional180;
void* right_value158;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional181;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_93, 0, sizeof(struct sVarTable*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&current_loop_vtable_94, 0, sizeof(struct sVarTable*));
memset(&param_types__95, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__96, 0, sizeof(struct list$1charph*));
memset(&i_97, 0, sizeof(int));
memset(&o2_saved_98, 0, sizeof(struct list$1charph*));
memset(&name_101, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&type_107, 0, sizeof(struct sType*));
right_value153 = (void*)0;
memset(&block_level_108, 0, sizeof(int));
memset(&i_109, 0, sizeof(int));
memset(&o2_saved_110, 0, sizeof(struct list$1sNodeph*));
memset(&node_113, 0, sizeof(struct sNode*));
memset(&right_value_objects_116, 0, sizeof(struct list$1sRightValueObjectph*));
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&stack_num_before_119, 0, sizeof(int));
memset(&sline_120, 0, sizeof(int));
right_value156 = (void*)0;
memset(&sname_121, 0, sizeof(char*));
right_value157 = (void*)0;
right_value158 = (void*)0;
    # 288 "05function2.c"
    # 284 "05function2.c"
    if(info->output_header_file) {
        # 285 "05function2.c"
        __result87__ = 0;
        return __result87__;
    }
    # 288 "05function2.c"
    old_table_93=info->lv_table;
    # 294 "05function2.c"
    # 289 "05function2.c"
    if(_if_conditional159=!no_var_table,    _if_conditional159) {
        # 290 "05function2.c"
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value151=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value150=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 290, "sVarTable")))),(_Bool)0,old_table_93))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 291 "05function2.c"
        info->lv_table=block->mVarTable;
    }
    # 294 "05function2.c"
    current_loop_vtable_94=info->current_loop_vtable;
    # 299 "05function2.c"
    # 295 "05function2.c"
    if(loop_block) {
        # 296 "05function2.c"
        info->current_loop_vtable=block->mVarTable;
    }
    # 299 "05function2.c"
    param_types__95=info->param_types;
    # 300 "05function2.c"
    param_names__96=info->param_names;
    # 302 "05function2.c"
    info->param_types=param_types;
    # 303 "05function2.c"
    info->param_names=param_names;
    # 316 "05function2.c"
    # 305 "05function2.c"
    if(_if_conditional161=param_types&&param_names,    _if_conditional161) {
        # 306 "05function2.c"
        # 314 "05function2.c"
        for(        o2_saved_98=(param_names),name_101=list$1charph_begin((o2_saved_98));        !list$1charph_end((o2_saved_98));        name_101=list$1charph_next((o2_saved_98))        ){
            # 308 "05function2.c"
            type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_97), "05function2.c", 308, 0))))));
            come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 309 "05function2.c"
            type_107->mFunctionParam=(_Bool)1;
            # 310 "05function2.c"
            type_107->mAllocaValue=(_Bool)0;
            # 311 "05function2.c"
            add_variable_to_table(name_101,(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(type_107)))),info);
            come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 312 "05function2.c"
            i_97++;
            come_call_finalizer2(sType_finalize,type_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 316 "05function2.c"
    block_level_108=info->block_level;
    # 321 "05function2.c"
    # 317 "05function2.c"
    if(_if_conditional168=!no_var_table,    _if_conditional168) {
        # 318 "05function2.c"
        info->block_level++;
    }
    # 364 "05function2.c"
    # 321 "05function2.c"
    if(_if_conditional170=list$1sNodeph_length(block->mNodes)==0,    _if_conditional170) {
    }
    else {
        # 324 "05function2.c"
        # 362 "05function2.c"
        for(        o2_saved_110=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_113=list$1sNodeph_begin((o2_saved_110));        !list$1sNodeph_end((o2_saved_110));        node_113=list$1sNodeph_next((o2_saved_110))        ){
            # 326 "05function2.c"
            right_value_objects_116=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            # 327 "05function2.c"
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value155=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value154=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 327, "list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 329 "05function2.c"
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 330 "05function2.c"
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 331 "05function2.c"
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 333 "05function2.c"
            stack_num_before_119=list$1CVALUEph_length(info->stack);
            # 335 "05function2.c"
            sline_120=info->sline;
            # 336 "05function2.c"
            sname_121=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 338 "05function2.c"
            info->last_statment_is_return=(_Bool)0;
            # 340 "05function2.c"
            info->sline=node_113->sline(node_113->_protocol_obj);
            # 341 "05function2.c"
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value157=node_113->sname(node_113->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 343 "05function2.c"
            info->writing_source_file_position=(_Bool)1;
            # 350 "05function2.c"
            # 345 "05function2.c"
            if(_if_conditional180=!node_compile(node_113,info),            _if_conditional180) {
                # 346 "05function2.c"
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                # 347 "05function2.c"
                exit(2);
            }
            # 350 "05function2.c"
            info->sline=sline_120;
            # 351 "05function2.c"
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(sname_121))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 353 "05function2.c"
            add_last_code_to_source(info);
            # 355 "05function2.c"
            arrange_stack(info,stack_num_before_119);
            # 357 "05function2.c"
            free_right_value_objects(info,(_Bool)0);
            # 359 "05function2.c"
            list$1sRightValueObjectph_reset(info->right_value_objects);
            # 360 "05function2.c"
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_116);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_121 = come_decrement_ref_count2(sname_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 369 "05function2.c"
    # 364 "05function2.c"
    if(_if_conditional181=!no_var_table,    _if_conditional181) {
        # 366 "05function2.c"
        free_objects(info->lv_table,((void*)0),info);
    }
    # 369 "05function2.c"
    info->lv_table=old_table_93;
    # 370 "05function2.c"
    info->block_level=block_level_108;
    # 372 "05function2.c"
    info->param_types=param_types__95;
    # 373 "05function2.c"
    info->param_names=param_names__96;
    # 375 "05function2.c"
    info->current_loop_vtable=current_loop_vtable_94;
    # 377 "05function2.c"
    __result110__ = 0;
    return __result110__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_99;
char* __result88__;
_Bool _if_conditional163;
char* __result89__;
char* result_100;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional162=self==((void*)0),            _if_conditional162) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_99,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result88__ = __result_obj__ = result_99;
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
            memset(&result_100,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result90__ = __result_obj__ = result_100;
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
_Bool _if_conditional164;
char* result_102;
char* __result92__;
_Bool _if_conditional165;
char* __result93__;
char* result_103;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
memset(&result_103, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional164=self==((void*)0)||self->it==((void*)0),            _if_conditional164) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_102,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result92__ = __result_obj__ = result_102;
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
            memset(&result_103,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result94__ = __result_obj__ = result_103;
            return __result94__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional166;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional15;
_Bool _if_conditional167;
struct sType* __result95__;
struct sType* default_value_106;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional166=position<0,                _if_conditional166) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_104=self->head;
                # 687 "./neo-c.h"
                i_105=0;
                # 694 "./neo-c.h"
                while(_while_condtional15=it_104!=((void*)0),                _while_condtional15) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional167=position==i_105,                    _if_conditional167) {
                        # 690 "./neo-c.h"
                        __result95__ = __result_obj__ = it_104->item;
                        return __result95__;
                    }
                    # 692 "./neo-c.h"
                    it_104=it_104->next;
                    # 693 "./neo-c.h"
                    i_105++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_106,0,sizeof(struct sType*));
                # 698 "./neo-c.h"
                __result96__ = __result_obj__ = default_value_106;
                come_call_finalizer2(sType_finalize,default_value_106, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result96__;
                come_call_finalizer2(sType_finalize,default_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional169;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional169=self==((void*)0),        _if_conditional169) {
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
_Bool _if_conditional171;
struct sNode* result_111;
struct sNode* __result99__;
_Bool _if_conditional172;
struct sNode* __result100__;
struct sNode* result_112;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct sNode*));
memset(&result_112, 0, sizeof(struct sNode*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_111,0,sizeof(struct sNode*));
                # 288 "./neo-c.h"
                __result99__ = __result_obj__ = result_111;
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
            memset(&result_112,0,sizeof(struct sNode*));
            # 298 "./neo-c.h"
            __result101__ = __result_obj__ = result_112;
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
_Bool _if_conditional173;
struct sNode* result_114;
struct sNode* __result103__;
_Bool _if_conditional174;
struct sNode* __result104__;
struct sNode* result_115;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(struct sNode*));
memset(&result_115, 0, sizeof(struct sNode*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_114,0,sizeof(struct sNode*));
                # 305 "./neo-c.h"
                __result103__ = __result_obj__ = result_114;
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
            memset(&result_115,0,sizeof(struct sNode*));
            # 316 "./neo-c.h"
            __result105__ = __result_obj__ = result_115;
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
struct list_item$1sRightValueObjectph* it_117;
_Bool _while_condtional16;
struct list_item$1sRightValueObjectph* prev_it_118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_117, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    # 123 "./neo-c.h"
                    it_117=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional16=it_117!=((void*)0),                    _while_condtional16) {
                        # 125 "./neo-c.h"
                        prev_it_118=it_117;
                        # 126 "./neo-c.h"
                        it_117=it_117->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sRightValueObjectphp_finalize"
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional175) {
                                # 0 "list_item$1sRightValueObjectphp_finalize"
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sRightValueObject_finalize"
                                    # 0 "sRightValueObject_finalize"
                                    if(_if_conditional176=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional176) {
                                        # 0 "sRightValueObject_finalize"
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sRightValueObject_finalize"
                                    # 1 "sRightValueObject_finalize"
                                    if(_if_conditional177=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional177) {
                                        # 1 "sRightValueObject_finalize"
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sRightValueObject_finalize"
                                    # 2 "sRightValueObject_finalize"
                                    if(_if_conditional178=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional178) {
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
_Bool _if_conditional179;
int __result107__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./neo-c.h"
                # 364 "./neo-c.h"
                if(_if_conditional179=self==((void*)0),                _if_conditional179) {
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
struct list_item$1sRightValueObjectph* it_122;
_Bool _while_condtional17;
struct list_item$1sRightValueObjectph* prev_it_123;
struct list$1sRightValueObjectph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 433 "./neo-c.h"
                it_122=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional17=it_122!=((void*)0),                _while_condtional17) {
                    # 435 "./neo-c.h"
                    prev_it_123=it_122;
                    # 436 "./neo-c.h"
                    it_122=it_122->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
    # 386 "05function2.c"
    # 383 "05function2.c"
    if(_if_conditional182=list$1CVALUEph_length(info->stack)>top,    _if_conditional182) {
        # 384 "05function2.c"
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    # 390 "05function2.c"
    # 386 "05function2.c"
    if(_if_conditional183=list$1CVALUEph_length(info->stack)<top,    _if_conditional183) {
        # 387 "05function2.c"
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        # 388 "05function2.c"
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 394 "05function2.c"
    parse_sharp_v5(info);
    # 402 "05function2.c"
    # 395 "05function2.c"
    if(_if_conditional184=*info->p!=c,    _if_conditional184) {
        # 400 "05function2.c"
        # 396 "05function2.c"
        if(_if_conditional185=!info->no_output_err,        _if_conditional185) {
            # 397 "05function2.c"
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            # 398 "05function2.c"
            exit(2);
        }
    }
    # 402 "05function2.c"
    info->p++;
    # 403 "05function2.c"
    skip_spaces_and_lf(info);
    # 405 "05function2.c"
    __result111__ = 0;
    return __result111__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_124;
_Bool _if_conditional186;
_Bool dquort_125;
_Bool squort_126;
int sline_127;
int nest_128;
_Bool _while_condtional18;
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
_Bool _if_conditional203;
_Bool _if_conditional204;
char* tail_129;
void* right_value159;
char* buf_130;
void* right_value160;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_124, 0, sizeof(char*));
memset(&dquort_125, 0, sizeof(_Bool));
memset(&squort_126, 0, sizeof(_Bool));
memset(&sline_127, 0, sizeof(int));
memset(&nest_128, 0, sizeof(int));
memset(&tail_129, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&buf_130, 0, sizeof(char*));
right_value160 = (void*)0;
    # 410 "05function2.c"
    head_124=info->p;
    # 508 "05function2.c"
    # 411 "05function2.c"
    if(_if_conditional186=*info->p==123,    _if_conditional186) {
        # 412 "05function2.c"
        info->p++;
        # 414 "05function2.c"
        dquort_125=(_Bool)0;
        # 415 "05function2.c"
        squort_126=(_Bool)0;
        # 416 "05function2.c"
        sline_127=0;
        # 417 "05function2.c"
        nest_128=0;
        # 503 "05function2.c"
        while(_while_condtional18=1,        _while_condtional18) {
            # 502 "05function2.c"
            # 419 "05function2.c"
            if(dquort_125) {
                # 440 "05function2.c"
                # 420 "05function2.c"
                if(_if_conditional188=*info->p==92,                _if_conditional188) {
                    # 421 "05function2.c"
                    info->p++;
                    # 426 "05function2.c"
                    # 422 "05function2.c"
                    if(_if_conditional189=*info->p==0,                    _if_conditional189) {
                        # 423 "05function2.c"
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_127);
                        # 424 "05function2.c"
                        exit(2);
                    }
                    # 426 "05function2.c"
                    info->p++;
                }
                else {
                    # 440 "05function2.c"
                    # 428 "05function2.c"
                    if(_if_conditional190=*info->p==34,                    _if_conditional190) {
                        # 429 "05function2.c"
                        info->p++;
                        # 430 "05function2.c"
                        dquort_125=!dquort_125;
                    }
                    else {
                        # 433 "05function2.c"
                        info->p++;
                        # 439 "05function2.c"
                        # 435 "05function2.c"
                        if(_if_conditional191=*info->p==0,                        _if_conditional191) {
                            # 436 "05function2.c"
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_127);
                            # 437 "05function2.c"
                            exit(2);
                        }
                    }
                }
            }
            else {
                # 502 "05function2.c"
                # 441 "05function2.c"
                if(squort_126) {
                    # 462 "05function2.c"
                    # 442 "05function2.c"
                    if(_if_conditional193=*info->p==92,                    _if_conditional193) {
                        # 443 "05function2.c"
                        info->p++;
                        # 448 "05function2.c"
                        # 444 "05function2.c"
                        if(_if_conditional194=*info->p==0,                        _if_conditional194) {
                            # 445 "05function2.c"
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_127);
                            # 446 "05function2.c"
                            exit(2);
                        }
                        # 448 "05function2.c"
                        info->p++;
                    }
                    else {
                        # 462 "05function2.c"
                        # 450 "05function2.c"
                        if(_if_conditional195=*info->p==39,                        _if_conditional195) {
                            # 451 "05function2.c"
                            info->p++;
                            # 452 "05function2.c"
                            squort_126=!squort_126;
                        }
                        else {
                            # 455 "05function2.c"
                            info->p++;
                            # 461 "05function2.c"
                            # 457 "05function2.c"
                            if(_if_conditional196=*info->p==0,                            _if_conditional196) {
                                # 458 "05function2.c"
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_127);
                                # 459 "05function2.c"
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    # 502 "05function2.c"
                    # 463 "05function2.c"
                    if(_if_conditional197=*info->p==39,                    _if_conditional197) {
                        # 464 "05function2.c"
                        sline_127=info->sline;
                        # 465 "05function2.c"
                        info->p++;
                        # 466 "05function2.c"
                        squort_126=!squort_126;
                    }
                    else {
                        # 502 "05function2.c"
                        # 468 "05function2.c"
                        if(_if_conditional198=*info->p==34,                        _if_conditional198) {
                            # 469 "05function2.c"
                            sline_127=info->sline;
                            # 470 "05function2.c"
                            info->p++;
                            # 471 "05function2.c"
                            dquort_125=!dquort_125;
                        }
                        else {
                            # 502 "05function2.c"
                            # 473 "05function2.c"
                            if(_if_conditional199=*info->p==35,                            _if_conditional199) {
                                # 474 "05function2.c"
                                parse_sharp_v5(info);
                            }
                            else {
                                # 502 "05function2.c"
                                # 476 "05function2.c"
                                if(_if_conditional200=*info->p==123,                                _if_conditional200) {
                                    # 477 "05function2.c"
                                    info->p++;
                                    # 479 "05function2.c"
                                    nest_128++;
                                }
                                else {
                                    # 502 "05function2.c"
                                    # 481 "05function2.c"
                                    if(_if_conditional201=*info->p==125,                                    _if_conditional201) {
                                        # 482 "05function2.c"
                                        info->p++;
                                        # 489 "05function2.c"
                                        # 484 "05function2.c"
                                        if(_if_conditional202=nest_128==0,                                        _if_conditional202) {
                                            # 485 "05function2.c"
                                            skip_spaces_and_lf(info);
                                            # 486 "05function2.c"
                                            break;
                                        }
                                        # 489 "05function2.c"
                                        nest_128--;
                                    }
                                    else {
                                        # 502 "05function2.c"
                                        # 491 "05function2.c"
                                        if(_if_conditional203=*info->p==0,                                        _if_conditional203) {
                                            # 492 "05function2.c"
                                            err_msg(info,"The block requires } character for closing block");
                                            # 493 "05function2.c"
                                            exit(2);
                                        }
                                        else {
                                            # 502 "05function2.c"
                                            # 495 "05function2.c"
                                            if(_if_conditional204=*info->p==10,                                            _if_conditional204) {
                                                # 496 "05function2.c"
                                                info->p++;
                                                # 497 "05function2.c"
                                                info->sline++;
                                            }
                                            else {
                                                # 500 "05function2.c"
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
        # 505 "05function2.c"
        err_msg(info,"Require block. This is %c",*info->p);
    }
    # 508 "05function2.c"
    tail_129=info->p;
    # 510 "05function2.c"
    buf_130=(char*)come_increment_ref_count(((char*)(right_value159=(char*)come_calloc(1, sizeof(char)*(1*(tail_129-head_124+1)), "05function2.c", 510, "char"))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 511 "05function2.c"
    memcpy(buf_130,head_124,tail_129-head_124);
    # 512 "05function2.c"
    buf_130[tail_129-head_124]=0;
    # 514 "05function2.c"
    __result112__ = __result_obj__ = ((char*)(right_value160=__builtin_string(buf_130)));
    buf_130 = come_decrement_ref_count2(buf_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
    buf_130 = come_decrement_ref_count2(buf_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_131;
char* p3_132;
int i_133;
_Bool _if_conditional205;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_131, 0, sizeof(_Bool));
memset(&p3_132, 0, sizeof(char*));
memset(&i_133, 0, sizeof(int));
    # 519 "05function2.c"
    terminated_131=(_Bool)0;
    # 520 "05function2.c"
    p3_132=p;
    # 528 "05function2.c"
    for(    i_133=0;    i_133<strlen(p2);    i_133++    ){
        # 526 "05function2.c"
        # 522 "05function2.c"
        if(_if_conditional205=*p3_132==0,        _if_conditional205) {
            # 523 "05function2.c"
            terminated_131=(_Bool)1;
            # 524 "05function2.c"
            break;
        }
        # 526 "05function2.c"
        p3_132++;
    }
    # 528 "05function2.c"
    __result113__ = !terminated_131&&memcmp(p,p2,strlen(p2))==0;
    return __result113__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value161;
void* right_value162;
struct buffer* asm_fun_name_134;
_Bool _while_condtional19;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
int brace_num_135;
_Bool _while_condtional20;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
int len_136;
_Bool in_dquort_137;
int brace_num_138;
_Bool _while_condtional21;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int brace_num_139;
_Bool _while_condtional22;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value163;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&asm_fun_name_134, 0, sizeof(struct buffer*));
memset(&brace_num_135, 0, sizeof(int));
memset(&len_136, 0, sizeof(int));
memset(&in_dquort_137, 0, sizeof(_Bool));
memset(&brace_num_138, 0, sizeof(int));
memset(&brace_num_139, 0, sizeof(int));
right_value163 = (void*)0;
    # 533 "05function2.c"
    asm_fun_name_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value162=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 533, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 648 "05function2.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 646 "05function2.c"
        # 536 "05function2.c"
        if(_if_conditional206=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional206) {
            # 537 "05function2.c"
            info->p+=strlen("__attribute_pure__");
            # 538 "05function2.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 646 "05function2.c"
            # 540 "05function2.c"
            if(_if_conditional207=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional207) {
                # 541 "05function2.c"
                info->p+=strlen("__attribute_malloc__");
                # 542 "05function2.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 646 "05function2.c"
                # 544 "05function2.c"
                if(_if_conditional208=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional208) {
                    # 545 "05function2.c"
                    info->p+=strlen("__attr_dealloc_fclose");
                    # 546 "05function2.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 646 "05function2.c"
                    # 548 "05function2.c"
                    if(_if_conditional209=strmemcmp(info->p,"__wur"),                    _if_conditional209) {
                        # 549 "05function2.c"
                        info->p+=strlen("__wur");
                        # 550 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 646 "05function2.c"
                        # 552 "05function2.c"
                        if(_if_conditional210=strmemcmp(info->p,"__noreturn"),                        _if_conditional210) {
                            # 553 "05function2.c"
                            info->p+=strlen("__noreturn");
                            # 554 "05function2.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 646 "05function2.c"
                            # 556 "05function2.c"
                            if(_if_conditional211=strmemcmp(info->p,"__attribute__"),                            _if_conditional211) {
                                # 557 "05function2.c"
                                info->p+=strlen("__attribute__");
                                # 558 "05function2.c"
                                skip_spaces_and_lf(info);
                                # 560 "05function2.c"
                                brace_num_135=0;
                                # 579 "05function2.c"
                                while(_while_condtional20=*info->p,                                _while_condtional20) {
                                    # 577 "05function2.c"
                                    # 562 "05function2.c"
                                    if(_if_conditional212=*info->p==40,                                    _if_conditional212) {
                                        # 563 "05function2.c"
                                        info->p++;
                                        # 564 "05function2.c"
                                        brace_num_135++;
                                    }
                                    else {
                                        # 577 "05function2.c"
                                        # 566 "05function2.c"
                                        if(_if_conditional213=*info->p==41,                                        _if_conditional213) {
                                            # 567 "05function2.c"
                                            info->p++;
                                            # 568 "05function2.c"
                                            brace_num_135--;
                                            # 573 "05function2.c"
                                            # 570 "05function2.c"
                                            if(_if_conditional214=brace_num_135==0,                                            _if_conditional214) {
                                                # 571 "05function2.c"
                                                break;
                                            }
                                        }
                                        else {
                                            # 575 "05function2.c"
                                            info->p++;
                                        }
                                    }
                                }
                                # 579 "05function2.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 646 "05function2.c"
                                # 581 "05function2.c"
                                if(_if_conditional215=strmemcmp(info->p,"__asm__"),                                _if_conditional215) {
                                    # 582 "05function2.c"
                                    info->p+=strlen("__asm__");
                                    # 583 "05function2.c"
                                    skip_spaces_and_lf(info);
                                    # 585 "05function2.c"
                                    len_136=0;
                                    # 587 "05function2.c"
                                    in_dquort_137=(_Bool)0;
                                    # 588 "05function2.c"
                                    brace_num_138=0;
                                    # 616 "05function2.c"
                                    while(_while_condtional21=*info->p,                                    _while_condtional21) {
                                        # 614 "05function2.c"
                                        # 590 "05function2.c"
                                        if(_if_conditional216=*info->p==34,                                        _if_conditional216) {
                                            # 591 "05function2.c"
                                            info->p++;
                                            # 593 "05function2.c"
                                            in_dquort_137=!in_dquort_137;
                                        }
                                        else {
                                            # 614 "05function2.c"
                                            # 595 "05function2.c"
                                            if(in_dquort_137) {
                                                # 596 "05function2.c"
                                                buffer_append_char(asm_fun_name_134,*info->p);
                                                # 597 "05function2.c"
                                                info->p++;
                                            }
                                            else {
                                                # 614 "05function2.c"
                                                # 599 "05function2.c"
                                                if(_if_conditional218=*info->p==40,                                                _if_conditional218) {
                                                    # 600 "05function2.c"
                                                    info->p++;
                                                    # 601 "05function2.c"
                                                    brace_num_138++;
                                                }
                                                else {
                                                    # 614 "05function2.c"
                                                    # 603 "05function2.c"
                                                    if(_if_conditional219=*info->p==41,                                                    _if_conditional219) {
                                                        # 604 "05function2.c"
                                                        info->p++;
                                                        # 605 "05function2.c"
                                                        brace_num_138--;
                                                        # 610 "05function2.c"
                                                        # 607 "05function2.c"
                                                        if(_if_conditional220=brace_num_138==0,                                                        _if_conditional220) {
                                                            # 608 "05function2.c"
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        # 612 "05function2.c"
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 616 "05function2.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 646 "05function2.c"
                                    # 618 "05function2.c"
                                    if(_if_conditional221=strmemcmp(info->p,"__asm"),                                    _if_conditional221) {
                                        # 619 "05function2.c"
                                        info->p+=strlen("__asm");
                                        # 620 "05function2.c"
                                        skip_spaces_and_lf(info);
                                        # 622 "05function2.c"
                                        brace_num_139=0;
                                        # 641 "05function2.c"
                                        while(_while_condtional22=*info->p,                                        _while_condtional22) {
                                            # 639 "05function2.c"
                                            # 624 "05function2.c"
                                            if(_if_conditional222=*info->p==40,                                            _if_conditional222) {
                                                # 625 "05function2.c"
                                                info->p++;
                                                # 626 "05function2.c"
                                                brace_num_139++;
                                            }
                                            else {
                                                # 639 "05function2.c"
                                                # 628 "05function2.c"
                                                if(_if_conditional223=*info->p==41,                                                _if_conditional223) {
                                                    # 629 "05function2.c"
                                                    info->p++;
                                                    # 630 "05function2.c"
                                                    brace_num_139--;
                                                    # 635 "05function2.c"
                                                    # 632 "05function2.c"
                                                    if(_if_conditional224=brace_num_139==0,                                                    _if_conditional224) {
                                                        # 633 "05function2.c"
                                                        break;
                                                    }
                                                }
                                                else {
                                                    # 637 "05function2.c"
                                                    info->p++;
                                                }
                                            }
                                        }
                                        # 641 "05function2.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 644 "05function2.c"
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
    # 648 "05function2.c"
    __result114__ = __result_obj__ = ((char*)(right_value163=buffer_to_string(asm_fun_name_134)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional23;
char* head_140;
int head_sline_141;
void* right_value164;
char* buf_142;
_Bool _if_conditional225;
void* right_value165;
struct sNode* node_143;
_Bool _while_condtional24;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_140, 0, sizeof(char*));
memset(&head_sline_141, 0, sizeof(int));
right_value164 = (void*)0;
memset(&buf_142, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&node_143, 0, sizeof(struct sNode*));
    # 693 "05function2.c"
    while(_while_condtional23=*info->p,    _while_condtional23) {
        # 654 "05function2.c"
        parse_sharp_v5(info);
        # 656 "05function2.c"
        head_140=info->p;
        # 657 "05function2.c"
        head_sline_141=info->sline;
        # 658 "05function2.c"
        buf_142=(char*)come_increment_ref_count(((char*)(right_value164=parse_word(info))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 660 "05function2.c"
        parse_sharp_v5(info);
        # 668 "05function2.c"
        # 662 "05function2.c"
        if(_if_conditional225=block&&*info->p==125,        _if_conditional225) {
            # 663 "05function2.c"
            info->p++;
            # 664 "05function2.c"
            skip_spaces_and_lf(info);
            # 665 "05function2.c"
            buf_142 = come_decrement_ref_count2(buf_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        # 668 "05function2.c"
        node_143=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=top_level_v99(buf_142,head_140,head_sline_141,info))));
        if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 669 "05function2.c"
        parse_sharp_v5(info);
        # 675 "05function2.c"
        while(_while_condtional24=*info->p==59,        _while_condtional24) {
            # 672 "05function2.c"
            info->p++;
            # 673 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 675 "05function2.c"
        parse_sharp_v5(info);
        # 683 "05function2.c"
        # 677 "05function2.c"
        if(_if_conditional226=node_143!=((void*)0),        _if_conditional226) {
            # 682 "05function2.c"
            # 678 "05function2.c"
            if(_if_conditional227=!node_compile(node_143,info),            _if_conditional227) {
                # 679 "05function2.c"
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                # 680 "05function2.c"
                exit(2);
            }
        }
        # 683 "05function2.c"
        parse_sharp_v5(info);
        # 685 "05function2.c"
        skip_spaces_and_lf(info);
        # 692 "05function2.c"
        # 687 "05function2.c"
        if(_if_conditional228=block&&*info->p==125,        _if_conditional228) {
            # 688 "05function2.c"
            info->p++;
            # 689 "05function2.c"
            skip_spaces_and_lf(info);
            # 690 "05function2.c"
            buf_142 = come_decrement_ref_count2(buf_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_143) { node_143 = come_decrement_ref_count2(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_142 = come_decrement_ref_count2(buf_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_143) { node_143 = come_decrement_ref_count2(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* name_144;
void* right_value167;
void* right_value168;
struct sType* result_type_145;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
struct sType* __list_values1___146[5];
void* right_value182;
void* right_value183;
struct list$1sTypeph* param_types_151;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
char* __list_values2___152[5];
void* right_value192;
void* right_value193;
struct list$1charph* param_names_157;
void* right_value194;
void* right_value195;
struct list$1charph* param_default_parametors_158;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct sFun* main_fun_159;
void* right_value209;
void* right_value210;
char* name_204;
void* right_value211;
void* right_value212;
struct sType* result_type_205;
void* right_value213;
void* right_value214;
struct sType* __list_values3___206[1];
void* right_value215;
void* right_value216;
struct list$1sTypeph* param_types_207;
void* right_value217;
char* __list_values4___208[1];
void* right_value218;
void* right_value219;
struct list$1charph* param_names_209;
void* right_value220;
void* right_value221;
struct list$1charph* param_default_parametors_210;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
struct sFun* main_fun_211;
void* right_value226;
void* right_value227;
char* name_212;
void* right_value228;
void* right_value229;
struct sType* result_type_213;
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
void* right_value242;
void* right_value243;
struct sType* __list_values5___214[7];
void* right_value244;
void* right_value245;
struct list$1sTypeph* param_types_215;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
char* __list_values6___216[7];
void* right_value253;
void* right_value254;
struct list$1charph* param_names_217;
void* right_value255;
void* right_value256;
struct list$1charph* param_default_parametors_218;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
struct sFun* main_fun_219;
void* right_value261;
void* right_value262;
char* name_220;
void* right_value263;
void* right_value264;
struct sType* result_type_221;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
struct sType* __list_values7___222[5];
void* right_value275;
void* right_value276;
struct list$1sTypeph* param_types_223;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
char* __list_values8___224[5];
void* right_value282;
void* right_value283;
struct list$1charph* param_names_225;
void* right_value284;
void* right_value285;
struct list$1charph* param_default_parametors_226;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
struct sFun* main_fun_227;
void* right_value290;
void* right_value291;
char* name_228;
void* right_value292;
void* right_value293;
struct sType* result_type_229;
void* right_value294;
void* right_value295;
struct sType* __list_values9___230[1];
void* right_value296;
void* right_value297;
struct list$1sTypeph* param_types_231;
void* right_value298;
char* __list_values10___232[1];
void* right_value299;
void* right_value300;
struct list$1charph* param_names_233;
void* right_value301;
void* right_value302;
struct list$1charph* param_default_parametors_234;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
struct sFun* main_fun_235;
void* right_value307;
void* right_value308;
char* name_236;
void* right_value309;
void* right_value310;
struct sType* result_type_237;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
struct sType* __list_values11___238[4];
void* right_value319;
void* right_value320;
struct list$1sTypeph* param_types_239;
void* right_value321;
void* right_value322;
void* right_value323;
void* right_value324;
char* __list_values12___240[4];
void* right_value325;
void* right_value326;
struct list$1charph* param_names_241;
void* right_value327;
void* right_value328;
struct list$1charph* param_default_parametors_242;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
void* right_value334;
void* right_value335;
struct sFun* main_fun_243;
void* right_value336;
void* right_value337;
char* name_244;
void* right_value338;
void* right_value339;
struct sType* result_type_245;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
struct sType* __list_values13___246[3];
void* right_value346;
void* right_value347;
struct list$1sTypeph* param_types_247;
void* right_value348;
void* right_value349;
void* right_value350;
char* __list_values14___248[3];
void* right_value351;
void* right_value352;
struct list$1charph* param_names_249;
void* right_value353;
void* right_value354;
struct list$1charph* param_default_parametors_250;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
struct sFun* main_fun_251;
void* right_value359;
void* right_value360;
char* name_252;
void* right_value361;
void* right_value362;
struct sType* result_type_253;
void* right_value363;
void* right_value364;
struct sType* __list_values15___254[1];
void* right_value365;
void* right_value366;
struct list$1sTypeph* param_types_255;
void* right_value367;
char* __list_values16___256[1];
void* right_value368;
void* right_value369;
struct list$1charph* param_names_257;
void* right_value370;
void* right_value371;
struct list$1charph* param_default_parametors_258;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
struct sFun* main_fun_259;
void* right_value376;
void* right_value377;
char* name_260;
void* right_value378;
void* right_value379;
struct sType* result_type_261;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
struct sType* __list_values17___262[3];
void* right_value386;
void* right_value387;
struct list$1sTypeph* param_types_263;
void* right_value388;
void* right_value389;
void* right_value390;
char* __list_values18___264[3];
void* right_value391;
void* right_value392;
struct list$1charph* param_names_265;
void* right_value393;
void* right_value394;
struct list$1charph* param_default_parametors_266;
void* right_value395;
void* right_value396;
void* right_value397;
void* right_value398;
struct sFun* main_fun_267;
void* right_value399;
void* right_value400;
char* name_268;
void* right_value401;
void* right_value402;
struct sType* result_type_269;
void* right_value403;
void* right_value404;
struct list$1sTypeph* param_types_270;
void* right_value405;
void* right_value406;
struct list$1charph* param_names_271;
void* right_value407;
void* right_value408;
struct list$1charph* param_default_parametors_272;
void* right_value409;
void* right_value410;
void* right_value411;
void* right_value412;
struct sFun* main_fun_273;
void* right_value413;
void* right_value414;
char* name_274;
void* right_value415;
void* right_value416;
struct sType* result_type_275;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
void* right_value421;
void* right_value422;
void* right_value423;
void* right_value424;
struct sType* __list_values19___276[4];
void* right_value425;
void* right_value426;
struct list$1sTypeph* param_types_277;
void* right_value427;
void* right_value428;
void* right_value429;
void* right_value430;
char* __list_values20___278[4];
void* right_value431;
void* right_value432;
struct list$1charph* param_names_279;
void* right_value433;
void* right_value434;
struct list$1charph* param_default_parametors_280;
void* right_value435;
void* right_value436;
void* right_value437;
void* right_value438;
struct sFun* main_fun_281;
void* right_value439;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&name_144, 0, sizeof(char*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_type_145, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&param_types_151, 0, sizeof(struct list$1sTypeph*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&param_names_157, 0, sizeof(struct list$1charph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&param_default_parametors_158, 0, sizeof(struct list$1charph*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&main_fun_159, 0, sizeof(struct sFun*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&name_204, 0, sizeof(char*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&result_type_205, 0, sizeof(struct sType*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&param_types_207, 0, sizeof(struct list$1sTypeph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&param_names_209, 0, sizeof(struct list$1charph*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&param_default_parametors_210, 0, sizeof(struct list$1charph*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&main_fun_211, 0, sizeof(struct sFun*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&name_212, 0, sizeof(char*));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&result_type_213, 0, sizeof(struct sType*));
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
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&param_types_215, 0, sizeof(struct list$1sTypeph*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
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
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&name_236, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&result_type_237, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&param_types_239, 0, sizeof(struct list$1sTypeph*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_names_241, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&param_default_parametors_242, 0, sizeof(struct list$1charph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&main_fun_243, 0, sizeof(struct sFun*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&name_244, 0, sizeof(char*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&param_types_247, 0, sizeof(struct list$1sTypeph*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_names_249, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&param_default_parametors_250, 0, sizeof(struct list$1charph*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&main_fun_251, 0, sizeof(struct sFun*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&name_252, 0, sizeof(char*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&param_types_255, 0, sizeof(struct list$1sTypeph*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&param_names_257, 0, sizeof(struct list$1charph*));
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&main_fun_259, 0, sizeof(struct sFun*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&name_260, 0, sizeof(char*));
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&result_type_261, 0, sizeof(struct sType*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&param_types_263, 0, sizeof(struct list$1sTypeph*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&param_names_265, 0, sizeof(struct list$1charph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&main_fun_267, 0, sizeof(struct sFun*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&name_268, 0, sizeof(char*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&param_types_270, 0, sizeof(struct list$1sTypeph*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&param_names_271, 0, sizeof(struct list$1charph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&param_default_parametors_272, 0, sizeof(struct list$1charph*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&main_fun_273, 0, sizeof(struct sFun*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&name_274, 0, sizeof(char*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&result_type_275, 0, sizeof(struct sType*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
memset(&param_types_277, 0, sizeof(struct list$1sTypeph*));
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&param_names_279, 0, sizeof(struct list$1charph*));
right_value433 = (void*)0;
right_value434 = (void*)0;
memset(&param_default_parametors_280, 0, sizeof(struct list$1charph*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&main_fun_281, 0, sizeof(struct sFun*));
right_value439 = (void*)0;
    # 697 "05function2.c"
    skip_spaces_and_lf(info);
    # 698 "05function2.c"
    parse_sharp_v5(info);
    # 720 "05function2.c"
    {
        # 701 "05function2.c"
        name_144=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("come_calloc"))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 702 "05function2.c"
        result_type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 702, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 703 "05function2.c"
        {__list_values1___146[0]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 703, "sType")))),"int",(_Bool)0,info))));
__list_values1___146[1]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 703, "sType")))),"int",(_Bool)0,info))));
__list_values1___146[2]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 703, "sType")))),"char*",(_Bool)0,info))));
__list_values1___146[3]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 703, "sType")))),"int",(_Bool)0,info))));
__list_values1___146[4]=come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 703, "sType")))),"char*",(_Bool)0,info))));
}        param_types_151=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 703, "struct list$1sTypeph")))),5,__list_values1___146))));
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 704 "05function2.c"
        {__list_values2___152[0]=come_increment_ref_count(((char*)(right_value184=__builtin_string("count"))));
__list_values2___152[1]=come_increment_ref_count(((char*)(right_value185=__builtin_string("size"))));
__list_values2___152[2]=come_increment_ref_count(((char*)(right_value186=__builtin_string("sname"))));
__list_values2___152[3]=come_increment_ref_count(((char*)(right_value187=__builtin_string("sline"))));
__list_values2___152[4]=come_increment_ref_count(((char*)(right_value188=__builtin_string("class_name"))));
}        param_names_157=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 704, "struct list$1charph")))),5,__list_values2___152))));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 705 "05function2.c"
        param_default_parametors_158=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value195=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value194=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 705, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 706 "05function2.c"
        list$1charph_push_back(param_default_parametors_158,((void*)0));
        # 707 "05function2.c"
        list$1charph_push_back(param_default_parametors_158,((void*)0));
        # 708 "05function2.c"
        list$1charph_push_back(param_default_parametors_158,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("null")))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 709 "05function2.c"
        list$1charph_push_back(param_default_parametors_158,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("0")))));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 710 "05function2.c"
        list$1charph_push_back(param_default_parametors_158,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("null")))));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 716 "05function2.c"
        main_fun_159=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value202=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value199=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 711, "sFun")))),(char*)come_increment_ref_count(name_144),(struct sType*)come_increment_ref_count(result_type_145),(struct list$1sTypeph*)come_increment_ref_count(param_types_151),(struct list$1charph*)come_increment_ref_count(param_names_157),(struct list$1charph*)come_increment_ref_count(param_default_parametors_158),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 718 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(name_144)))),(struct sFun*)come_increment_ref_count(main_fun_159));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_144 = come_decrement_ref_count2(name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 735 "05function2.c"
    {
        # 721 "05function2.c"
        name_204=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("come_increment_ref_count"))));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 722 "05function2.c"
        result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 722, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 723 "05function2.c"
        {__list_values3___206[0]=come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 723, "sType")))),"void*",(_Bool)0,info))));
}        param_types_207=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value216=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value215=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 723, "struct list$1sTypeph")))),1,__list_values3___206))));
        come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 724 "05function2.c"
        {__list_values4___208[0]=come_increment_ref_count(((char*)(right_value217=__builtin_string("mem"))));
}        param_names_209=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 724, "struct list$1charph")))),1,__list_values4___208))));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 725 "05function2.c"
        param_default_parametors_210=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 725, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 731 "05function2.c"
        main_fun_211=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value225=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value222=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 726, "sFun")))),(char*)come_increment_ref_count(name_204),(struct sType*)come_increment_ref_count(result_type_205),(struct list$1sTypeph*)come_increment_ref_count(param_types_207),(struct list$1charph*)come_increment_ref_count(param_names_209),(struct list$1charph*)come_increment_ref_count(param_default_parametors_210),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 733 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(name_204)))),(struct sFun*)come_increment_ref_count(main_fun_211));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_204 = come_decrement_ref_count2(name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 750 "05function2.c"
    {
        # 736 "05function2.c"
        name_212=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("come_call_finalizer"))));
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 737 "05function2.c"
        result_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 737, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 738 "05function2.c"
        {__list_values5___214[0]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"void*",(_Bool)0,info))));
__list_values5___214[1]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"void*",(_Bool)0,info))));
__list_values5___214[2]=come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"void*",(_Bool)0,info))));
__list_values5___214[3]=come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"void*",(_Bool)0,info))));
__list_values5___214[4]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"int",(_Bool)0,info))));
__list_values5___214[5]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"int",(_Bool)0,info))));
__list_values5___214[6]=come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 738, "sType")))),"int",(_Bool)0,info))));
}        param_types_215=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value245=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value244=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 738, "struct list$1sTypeph")))),7,__list_values5___214))));
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
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 739 "05function2.c"
        {__list_values6___216[0]=come_increment_ref_count(((char*)(right_value246=__builtin_string("fun"))));
__list_values6___216[1]=come_increment_ref_count(((char*)(right_value247=__builtin_string("mem"))));
__list_values6___216[2]=come_increment_ref_count(((char*)(right_value248=__builtin_string("protocol_fun"))));
__list_values6___216[3]=come_increment_ref_count(((char*)(right_value249=__builtin_string("protocol_obj"))));
__list_values6___216[4]=come_increment_ref_count(((char*)(right_value250=__builtin_string("call_finalizer_only"))));
__list_values6___216[5]=come_increment_ref_count(((char*)(right_value251=__builtin_string("no_decrement"))));
__list_values6___216[6]=come_increment_ref_count(((char*)(right_value252=__builtin_string("no_free"))));
}        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 739, "struct list$1charph")))),7,__list_values6___216))));
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 740 "05function2.c"
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value255=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 740, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 746 "05function2.c"
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value260=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value257=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 741, "sFun")))),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_215),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 748 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(name_212)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 765 "05function2.c"
    {
        # 751 "05function2.c"
        name_220=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("come_decrement_ref_count"))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 752 "05function2.c"
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 752, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 753 "05function2.c"
        {__list_values7___222[0]=come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 753, "sType")))),"void*",(_Bool)0,info))));
__list_values7___222[1]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 753, "sType")))),"void*",(_Bool)0,info))));
__list_values7___222[2]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 753, "sType")))),"void*",(_Bool)0,info))));
__list_values7___222[3]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 753, "sType")))),"bool",(_Bool)0,info))));
__list_values7___222[4]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 753, "sType")))),"bool",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value276=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value275=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 753, "struct list$1sTypeph")))),5,__list_values7___222))));
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 754 "05function2.c"
        {__list_values8___224[0]=come_increment_ref_count(((char*)(right_value277=__builtin_string("mem"))));
__list_values8___224[1]=come_increment_ref_count(((char*)(right_value278=__builtin_string("protocol_fun"))));
__list_values8___224[2]=come_increment_ref_count(((char*)(right_value279=__builtin_string("protocol_obj"))));
__list_values8___224[3]=come_increment_ref_count(((char*)(right_value280=__builtin_string("no_decrement"))));
__list_values8___224[4]=come_increment_ref_count(((char*)(right_value281=__builtin_string("no_free"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 754, "struct list$1charph")))),5,__list_values8___224))));
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 755 "05function2.c"
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value285=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 755, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 761 "05function2.c"
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value289=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value286=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 756, "sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 763 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 780 "05function2.c"
    {
        # 766 "05function2.c"
        name_228=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("come_free_object"))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 767 "05function2.c"
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 767, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 768 "05function2.c"
        {__list_values9___230[0]=come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 768, "sType")))),"void*",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 768, "struct list$1sTypeph")))),1,__list_values9___230))));
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 769 "05function2.c"
        {__list_values10___232[0]=come_increment_ref_count(((char*)(right_value298=__builtin_string("mem"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 769, "struct list$1charph")))),1,__list_values10___232))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 770 "05function2.c"
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 770, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 776 "05function2.c"
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 771, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 778 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 799 "05function2.c"
    {
        # 781 "05function2.c"
        name_236=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("come_memdup"))));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 782 "05function2.c"
        result_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 782, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 783 "05function2.c"
        {__list_values11___238[0]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 783, "sType")))),"void*",(_Bool)0,info))));
__list_values11___238[1]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 783, "sType")))),"char*",(_Bool)0,info))));
__list_values11___238[2]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 783, "sType")))),"int",(_Bool)0,info))));
__list_values11___238[3]=come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 783, "sType")))),"char*",(_Bool)0,info))));
}        param_types_239=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value320=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value319=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 783, "struct list$1sTypeph")))),4,__list_values11___238))));
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 784 "05function2.c"
        {__list_values12___240[0]=come_increment_ref_count(((char*)(right_value321=__builtin_string("block"))));
__list_values12___240[1]=come_increment_ref_count(((char*)(right_value322=__builtin_string("sname"))));
__list_values12___240[2]=come_increment_ref_count(((char*)(right_value323=__builtin_string("sline"))));
__list_values12___240[3]=come_increment_ref_count(((char*)(right_value324=__builtin_string("class_name"))));
}        param_names_241=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 784, "struct list$1charph")))),4,__list_values12___240))));
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 785 "05function2.c"
        param_default_parametors_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 785, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 786 "05function2.c"
        list$1charph_push_back(param_default_parametors_242,((void*)0));
        # 787 "05function2.c"
        list$1charph_push_back(param_default_parametors_242,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("null")))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 788 "05function2.c"
        list$1charph_push_back(param_default_parametors_242,(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string("0")))));
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 789 "05function2.c"
        list$1charph_push_back(param_default_parametors_242,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("null")))));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 795 "05function2.c"
        main_fun_243=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value335=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value332=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 790, "sFun")))),(char*)come_increment_ref_count(name_236),(struct sType*)come_increment_ref_count(result_type_237),(struct list$1sTypeph*)come_increment_ref_count(param_types_239),(struct list$1charph*)come_increment_ref_count(param_names_241),(struct list$1charph*)come_increment_ref_count(param_default_parametors_242),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value333=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 797 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(name_236)))),(struct sFun*)come_increment_ref_count(main_fun_243));
        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 814 "05function2.c"
    {
        # 800 "05function2.c"
        name_244=(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string("memset"))));
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 801 "05function2.c"
        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 801, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 802 "05function2.c"
        {__list_values13___246[0]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 802, "sType")))),"void*",(_Bool)0,info))));
__list_values13___246[1]=come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 802, "sType")))),"int",(_Bool)0,info))));
__list_values13___246[2]=come_increment_ref_count(((struct sType*)(right_value345=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value344=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 802, "sType")))),"long",(_Bool)0,info))));
}        param_types_247=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value347=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value346=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 802, "struct list$1sTypeph")))),3,__list_values13___246))));
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 803 "05function2.c"
        {__list_values14___248[0]=come_increment_ref_count(((char*)(right_value348=__builtin_string("b"))));
__list_values14___248[1]=come_increment_ref_count(((char*)(right_value349=__builtin_string("c"))));
__list_values14___248[2]=come_increment_ref_count(((char*)(right_value350=__builtin_string("len"))));
}        param_names_249=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value352=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 803, "struct list$1charph")))),3,__list_values14___248))));
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 804 "05function2.c"
        param_default_parametors_250=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value354=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value353=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 804, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 810 "05function2.c"
        main_fun_251=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value358=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value355=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 805, "sFun")))),(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(result_type_245),(struct list$1sTypeph*)come_increment_ref_count(param_types_247),(struct list$1charph*)come_increment_ref_count(param_names_249),(struct list$1charph*)come_increment_ref_count(param_default_parametors_250),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 812 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(name_244)))),(struct sFun*)come_increment_ref_count(main_fun_251));
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 829 "05function2.c"
    {
        # 815 "05function2.c"
        name_252=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string("__builtin_string"))));
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 816 "05function2.c"
        result_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 816, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 817 "05function2.c"
        {__list_values15___254[0]=come_increment_ref_count(((struct sType*)(right_value364=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value363=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 817, "sType")))),"char*",(_Bool)0,info))));
}        param_types_255=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value366=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value365=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 817, "struct list$1sTypeph")))),1,__list_values15___254))));
        come_call_finalizer2(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 818 "05function2.c"
        {__list_values16___256[0]=come_increment_ref_count(((char*)(right_value367=__builtin_string("str"))));
}        param_names_257=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value368=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 818, "struct list$1charph")))),1,__list_values16___256))));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 819 "05function2.c"
        param_default_parametors_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value371=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value370=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 819, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 825 "05function2.c"
        main_fun_259=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value375=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value372=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 820, "sFun")))),(char*)come_increment_ref_count(name_252),(struct sType*)come_increment_ref_count(result_type_253),(struct list$1sTypeph*)come_increment_ref_count(param_types_255),(struct list$1charph*)come_increment_ref_count(param_names_257),(struct list$1charph*)come_increment_ref_count(param_default_parametors_258),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value373=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 827 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(name_252)))),(struct sFun*)come_increment_ref_count(main_fun_259));
        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 845 "05function2.c"
    {
        # 830 "05function2.c"
        name_260=(char*)come_increment_ref_count(((char*)(right_value377=__builtin_string("come_heap_init"))));
        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 831 "05function2.c"
        result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 831, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 832 "05function2.c"
        {__list_values17___262[0]=come_increment_ref_count(((struct sType*)(right_value381=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value380=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 832, "sType")))),"int",(_Bool)0,info))));
__list_values17___262[1]=come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 832, "sType")))),"int",(_Bool)0,info))));
__list_values17___262[2]=come_increment_ref_count(((struct sType*)(right_value385=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value384=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 832, "sType")))),"int",(_Bool)0,info))));
}        param_types_263=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value387=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value386=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 832, "struct list$1sTypeph")))),3,__list_values17___262))));
        come_call_finalizer2(sType_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 833 "05function2.c"
        {__list_values18___264[0]=come_increment_ref_count(((char*)(right_value388=xsprintf("come_malloc"))));
__list_values18___264[1]=come_increment_ref_count(((char*)(right_value389=xsprintf("come_debug"))));
__list_values18___264[2]=come_increment_ref_count(((char*)(right_value390=xsprintf("come_gc"))));
}        param_names_265=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 833, "struct list$1charph")))),3,__list_values18___264))));
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 834 "05function2.c"
        param_default_parametors_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value393=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 834, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 835 "05function2.c"
        list$1charph_push_back(param_default_parametors_266,((void*)0));
        # 841 "05function2.c"
        main_fun_267=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value398=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value395=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 836, "sFun")))),(char*)come_increment_ref_count(name_260),(struct sType*)come_increment_ref_count(result_type_261),(struct list$1sTypeph*)come_increment_ref_count(param_types_263),(struct list$1charph*)come_increment_ref_count(param_names_265),(struct list$1charph*)come_increment_ref_count(param_default_parametors_266),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value396=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value397=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 843 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value399=__builtin_string(name_260)))),(struct sFun*)come_increment_ref_count(main_fun_267));
        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 860 "05function2.c"
    {
        # 846 "05function2.c"
        name_268=(char*)come_increment_ref_count(((char*)(right_value400=__builtin_string("come_heap_final"))));
        right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 847 "05function2.c"
        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value402=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value401=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 847, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 848 "05function2.c"
        param_types_270=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value404=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value403=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 848, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 849 "05function2.c"
        param_names_271=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 849, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 850 "05function2.c"
        param_default_parametors_272=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 850, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 856 "05function2.c"
        main_fun_273=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value412=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value409=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 851, "sFun")))),(char*)come_increment_ref_count(name_268),(struct sType*)come_increment_ref_count(result_type_269),(struct list$1sTypeph*)come_increment_ref_count(param_types_270),(struct list$1charph*)come_increment_ref_count(param_names_271),(struct list$1charph*)come_increment_ref_count(param_default_parametors_272),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value410=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 858 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value413=__builtin_string(name_268)))),(struct sFun*)come_increment_ref_count(main_fun_273));
        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 876 "05function2.c"
    {
        # 861 "05function2.c"
        name_274=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string("come_null_check"))));
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 862 "05function2.c"
        result_type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value416=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value415=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 862, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 863 "05function2.c"
        {__list_values19___276[0]=come_increment_ref_count(((struct sType*)(right_value418=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 863, "sType")))),"void*",(_Bool)0,info))));
__list_values19___276[1]=come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 863, "sType")))),"char*",(_Bool)0,info))));
__list_values19___276[2]=come_increment_ref_count(((struct sType*)(right_value422=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 863, "sType")))),"int",(_Bool)0,info))));
__list_values19___276[3]=come_increment_ref_count(((struct sType*)(right_value424=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value423=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 863, "sType")))),"int",(_Bool)0,info))));
}        param_types_277=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value426=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value425=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 863, "struct list$1sTypeph")))),4,__list_values19___276))));
        come_call_finalizer2(sType_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 864 "05function2.c"
        {__list_values20___278[0]=come_increment_ref_count(((char*)(right_value427=__builtin_string("mem"))));
__list_values20___278[1]=come_increment_ref_count(((char*)(right_value428=__builtin_string("sname"))));
__list_values20___278[2]=come_increment_ref_count(((char*)(right_value429=__builtin_string("sline"))));
__list_values20___278[3]=come_increment_ref_count(((char*)(right_value430=__builtin_string("id"))));
}        param_names_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 864, "struct list$1charph")))),4,__list_values20___278))));
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 865 "05function2.c"
        param_default_parametors_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value434=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value433=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 865, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 871 "05function2.c"
        main_fun_281=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value438=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value435=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 866, "sFun")))),(char*)come_increment_ref_count(name_274),(struct sType*)come_increment_ref_count(result_type_275),(struct list$1sTypeph*)come_increment_ref_count(param_types_277),(struct list$1charph*)come_increment_ref_count(param_names_279),(struct list$1charph*)come_increment_ref_count(param_default_parametors_280),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value436=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 873 "05function2.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value439=__builtin_string(name_274)))),(struct sFun*)come_increment_ref_count(main_fun_281));
        right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 876 "05function2.c"
    transpile_toplevel((_Bool)0,info);
    # 878 "05function2.c"
    __result143__ = 0;
    return __result143__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_147;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_147, 0, sizeof(int));
            # 112 "./neo-c.h"
            self->head=((void*)0);
            # 113 "./neo-c.h"
            self->tail=((void*)0);
            # 114 "./neo-c.h"
            self->len=0;
            # 120 "./neo-c.h"
            for(            i_147=0;            i_147<num_value;            i_147++            ){
                # 117 "./neo-c.h"
                list$1sTypeph_push_back(self,values[i_147]);
            }
            # 120 "./neo-c.h"
            __result116__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result116__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value179;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj68;
_Bool _if_conditional230;
void* right_value180;
struct list_item$1sTypeph* litem_149;
struct sType* __dec_obj69;
void* right_value181;
struct list_item$1sTypeph* litem_150;
struct sType* __dec_obj70;
struct list$1sTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
right_value180 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sTypeph*));
right_value181 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sTypeph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional229=self->len==0,                    _if_conditional229) {
                        # 226 "./neo-c.h"
                        litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_148->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_148->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj68=litem_148->item;
                        litem_148->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_148;
                        # 233 "./neo-c.h"
                        self->head=litem_148;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional230=self->len==1,                        _if_conditional230) {
                            # 236 "./neo-c.h"
                            litem_149=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value180=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_149->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_149->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj69=litem_149->item;
                            litem_149->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_149;
                            # 243 "./neo-c.h"
                            self->head->next=litem_149;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_150=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value181=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_150->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_150->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj70=litem_150->item;
                            litem_150->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_150;
                            # 253 "./neo-c.h"
                            self->tail=litem_150;
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
int i_153;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_153, 0, sizeof(int));
            # 112 "./neo-c.h"
            self->head=((void*)0);
            # 113 "./neo-c.h"
            self->tail=((void*)0);
            # 114 "./neo-c.h"
            self->len=0;
            # 120 "./neo-c.h"
            for(            i_153=0;            i_153<num_value;            i_153++            ){
                # 117 "./neo-c.h"
                list$1charph_push_back(self,values[i_153]);
            }
            # 120 "./neo-c.h"
            __result118__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional231;
void* right_value189;
struct list_item$1charph* litem_154;
char* __dec_obj71;
_Bool _if_conditional232;
void* right_value190;
struct list_item$1charph* litem_155;
char* __dec_obj72;
void* right_value191;
struct list_item$1charph* litem_156;
char* __dec_obj73;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
right_value190 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
right_value191 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional231=self->len==0,                    _if_conditional231) {
                        # 226 "./neo-c.h"
                        litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_154->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_154->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj71=litem_154->item;
                        litem_154->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_154;
                        # 233 "./neo-c.h"
                        self->head=litem_154;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional232=self->len==1,                        _if_conditional232) {
                            # 236 "./neo-c.h"
                            litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value190=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_155->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_155->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj72=litem_155->item;
                            litem_155->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_155;
                            # 243 "./neo-c.h"
                            self->head->next=litem_155;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value191=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_156->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_156->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj73=litem_156->item;
                            litem_156->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_156;
                            # 253 "./neo-c.h"
                            self->tail=litem_156;
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
_Bool _if_conditional233;
unsigned int hash_177;
unsigned int it_178;
_Bool _while_condtional27;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool same_key_exist_195;
char* it2_198;
_Bool _if_conditional276;
_Bool _if_conditional277;
struct map$2charphsFunph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_177, 0, sizeof(unsigned int));
memset(&it_178, 0, sizeof(unsigned int));
memset(&same_key_exist_195, 0, sizeof(_Bool));
memset(&it2_198, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional233=self->len*10>=self->size,            _if_conditional233) {
                # 1391 "./neo-c.h"
                map$2charphsFunph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_177=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_178=hash_177;
            # 1452 "./neo-c.h"
            while(_while_condtional27=(_Bool)1,            _while_condtional27) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional245=self->item_existance[it_178],                _if_conditional245) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional246=string_equals(self->keys[it_178],key),                    _if_conditional246) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional247=1,                        _if_conditional247) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_178]);
                            # 1403 "./neo-c.h"
                            self->keys[it_178] = come_decrement_ref_count2(self->keys[it_178], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_178]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_178]);
                            # 1408 "./neo-c.h"
                            self->keys[it_178]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional267=1,                        _if_conditional267) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sFun_finalize,self->items[it_178], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_178]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_178]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_178++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional268=it_178>=self->size,                    _if_conditional268) {
                        # 1423 "./neo-c.h"
                        it_178=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional269=it_178==hash_177,                        _if_conditional269) {
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
                    self->item_existance[it_178]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional270=1,                    _if_conditional270) {
                        # 1434 "./neo-c.h"
                        self->keys[it_178]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_178]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional271=1,                    _if_conditional271) {
                        # 1440 "./neo-c.h"
                        self->items[it_178]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_178]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_195=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_198=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_198=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional276=string_equals(it2_198,key),                _if_conditional276) {
                    # 1456 "./neo-c.h"
                    same_key_exist_195=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional277=!same_key_exist_195,            _if_conditional277) {
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
int size_160;
void* right_value203;
char** keys_161;
void* right_value204;
struct sFun** items_162;
void* right_value205;
_Bool* item_existance_163;
int len_164;
char* it_167;
struct sFun* default_value_170;
struct sFun* it2_173;
unsigned int hash_174;
int n_175;
_Bool _while_condtional26;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct sFun* default_value_176;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_160, 0, sizeof(int));
right_value203 = (void*)0;
memset(&keys_161, 0, sizeof(char**));
right_value204 = (void*)0;
memset(&items_162, 0, sizeof(struct sFun**));
right_value205 = (void*)0;
memset(&item_existance_163, 0, sizeof(_Bool*));
memset(&len_164, 0, sizeof(int));
memset(&it_167, 0, sizeof(char*));
memset(&default_value_170, 0, sizeof(struct sFun*));
memset(&it2_173, 0, sizeof(struct sFun*));
memset(&hash_174, 0, sizeof(unsigned int));
memset(&n_175, 0, sizeof(int));
memset(&default_value_176, 0, sizeof(struct sFun*));
                    # 1337 "./neo-c.h"
                    size_160=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_161=(char**)come_increment_ref_count(((char**)(right_value203=(char**)come_calloc(1, sizeof(char*)*(1*(size_160)), "./neo-c.h", 1338, "char*%"))));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_162=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value204=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_160)), "./neo-c.h", 1339, "sFun*%"))));
                    come_call_finalizer2(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_163=(_Bool*)come_increment_ref_count(((_Bool*)(right_value205=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_160)), "./neo-c.h", 1340, "bool"))));
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_164=0;
                    # 1377 "./neo-c.h"
                    for(                    it_167=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_167=map$2charphsFunph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_170,0,sizeof(struct sFun*));
                        # 1347 "./neo-c.h"
                        it2_173=map$2charphsFunph_at(self,it_167,default_value_170);
                        # 1348 "./neo-c.h"
                        hash_174=string_get_hash_key(it_167)%size_160;
                        # 1349 "./neo-c.h"
                        n_175=hash_174;
                        # 1375 "./neo-c.h"
                        while(_while_condtional26=(_Bool)1,                        _while_condtional26) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional242=item_existance_163[n_175],                            _if_conditional242) {
                                # 1354 "./neo-c.h"
                                n_175++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional243=n_175>=size_160,                                _if_conditional243) {
                                    # 1357 "./neo-c.h"
                                    n_175=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional244=n_175==hash_174,                                    _if_conditional244) {
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
                                item_existance_163[n_175]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_161[n_175]=it_167;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_162[n_175]=map$2charphsFunph_at(self,it_167,default_value_176);
                                # 1371 "./neo-c.h"
                                len_164++;
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
                    self->keys=keys_161;
                    # 1382 "./neo-c.h"
                    self->items=items_162;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_163;
                    # 1385 "./neo-c.h"
                    self->size=size_160;
                    # 1386 "./neo-c.h"
                    self->len=len_164;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional234;
char* result_165;
char* __result119__;
_Bool _if_conditional235;
char* __result120__;
char* result_166;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_165, 0, sizeof(char*));
memset(&result_166, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional234=self==((void*)0),                        _if_conditional234) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_165,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result119__ = __result_obj__ = result_165;
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
                        memset(&result_166,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result121__ = __result_obj__ = result_166;
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
_Bool _if_conditional236;
char* result_168;
char* __result123__;
_Bool _if_conditional237;
char* __result124__;
char* result_169;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_168, 0, sizeof(char*));
memset(&result_169, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional236=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional236) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_168,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result123__ = __result_obj__ = result_168;
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
                        memset(&result_169,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result125__ = __result_obj__ = result_169;
                        return __result125__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional25;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sFun* __result126__;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_171=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_172=hash_171;
                            # 1251 "./neo-c.h"
                            while(_while_condtional25=(_Bool)1,                            _while_condtional25) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional238=self->item_existance[it_172],                                _if_conditional238) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional239=string_equals(self->keys[it_172],key),                                    _if_conditional239) {
                                        # 1234 "./neo-c.h"
                                        __result126__ = __result_obj__ = self->items[it_172];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result126__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_172++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional240=it_172>=self->size,                                    _if_conditional240) {
                                        # 1240 "./neo-c.h"
                                        it_172=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional241=it_172==hash_171,                                        _if_conditional241) {
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
int it2_179;
struct list_item$1charp* it_180;
_Bool _while_condtional28;
_Bool _if_conditional248;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_179, 0, sizeof(int));
memset(&it_180, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_179=0;
                                # 449 "./neo-c.h"
                                it_180=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional28=it_180!=((void*)0),                                _while_condtional28) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional248=string_equals(it_180->item,item),                                    _if_conditional248) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_179,it2_179+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_179++;
                                    # 457 "./neo-c.h"
                                    it_180=it_180->next;
                                }
                                # 460 "./neo-c.h"
                                __result133__ = __result_obj__ = self;
                                return __result133__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
int tmp_181;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct list$1charp* __result130__;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct list_item$1charp* it_184;
int i_185;
_Bool _while_condtional30;
_Bool _if_conditional257;
struct list_item$1charp* prev_it_186;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct list_item$1charp* it_187;
int i_188;
_Bool _while_condtional31;
_Bool _if_conditional260;
_Bool _if_conditional261;
struct list_item$1charp* prev_it_189;
struct list_item$1charp* it_190;
struct list_item$1charp* head_prev_it_191;
struct list_item$1charp* tail_it_192;
int i_193;
_Bool _while_condtional32;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct list_item$1charp* prev_it_194;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_181, 0, sizeof(int));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&i_185, 0, sizeof(int));
memset(&prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&it_187, 0, sizeof(struct list_item$1charp*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1charp*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_191, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_192, 0, sizeof(struct list_item$1charp*));
memset(&i_193, 0, sizeof(int));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional249=head<0,                                            _if_conditional249) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional250=tail<0,                                            _if_conditional250) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional251=head>tail,                                            _if_conditional251) {
                                                # 472 "./neo-c.h"
                                                tmp_181=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_181;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional252=head<0,                                            _if_conditional252) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional253=tail>self->len,                                            _if_conditional253) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional254=head==tail,                                            _if_conditional254) {
                                                # 486 "./neo-c.h"
                                                __result130__ = __result_obj__ = self;
                                                return __result130__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional255=head==0&&tail==self->len,                                            _if_conditional255) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional256=head==0,                                                _if_conditional256) {
                                                    # 494 "./neo-c.h"
                                                    it_184=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_185=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional30=it_184!=((void*)0),                                                    _while_condtional30) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional257=i_185<tail,                                                        _if_conditional257) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_186=it_184;
                                                            # 500 "./neo-c.h"
                                                            it_184=it_184->next;
                                                            # 501 "./neo-c.h"
                                                            i_185++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional258=i_185==tail,                                                            _if_conditional258) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_184;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_184=it_184->next;
                                                                # 514 "./neo-c.h"
                                                                i_185++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional259=tail==self->len,                                                    _if_conditional259) {
                                                        # 519 "./neo-c.h"
                                                        it_187=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_188=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional31=it_187!=((void*)0),                                                        _while_condtional31) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional260=i_188==head,                                                            _if_conditional260) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_187->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional261=i_188>=head,                                                            _if_conditional261) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_189=it_187;
                                                                # 530 "./neo-c.h"
                                                                it_187=it_187->next;
                                                                # 531 "./neo-c.h"
                                                                i_188++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_187=it_187->next;
                                                                # 539 "./neo-c.h"
                                                                i_188++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_190=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_191=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_192=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_193=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional32=it_190!=((void*)0),                                                        _while_condtional32) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional262=i_193==head,                                                            _if_conditional262) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_191=it_190->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional263=i_193==tail,                                                            _if_conditional263) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_192=it_190;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional264=i_193>=head&&i_193<tail,                                                            _if_conditional264) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_194=it_190;
                                                                # 563 "./neo-c.h"
                                                                it_190=it_190->next;
                                                                # 564 "./neo-c.h"
                                                                i_193++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_190=it_190->next;
                                                                # 572 "./neo-c.h"
                                                                i_193++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional265=head_prev_it_191!=((void*)0),                                                        _if_conditional265) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_191->next=tail_it_192;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional266=tail_it_192!=((void*)0),                                                        _if_conditional266) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_192->prev=head_prev_it_191;
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
struct list_item$1charp* it_182;
_Bool _while_condtional29;
struct list_item$1charp* prev_it_183;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_183, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_182=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional29=it_182!=((void*)0),                                                    _while_condtional29) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_183=it_182;
                                                        # 436 "./neo-c.h"
                                                        it_182=it_182->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional272;
char* result_196;
char* __result134__;
_Bool _if_conditional273;
char* __result135__;
char* result_197;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional272=self==((void*)0),                _if_conditional272) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_196,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result134__ = __result_obj__ = result_196;
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
                memset(&result_197,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result136__ = __result_obj__ = result_197;
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
_Bool _if_conditional274;
char* result_199;
char* __result138__;
_Bool _if_conditional275;
char* __result139__;
char* result_200;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_199, 0, sizeof(char*));
memset(&result_200, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional274=self==((void*)0)||self->it==((void*)0),                _if_conditional274) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_199,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result138__ = __result_obj__ = result_199;
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
                memset(&result_200,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result140__ = __result_obj__ = result_200;
                return __result140__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional278;
void* right_value206;
struct list_item$1charp* litem_201;
_Bool _if_conditional279;
void* right_value207;
struct list_item$1charp* litem_202;
void* right_value208;
struct list_item$1charp* litem_203;
struct list$1charp* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1charp*));
right_value207 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1charp*));
right_value208 = (void*)0;
memset(&litem_203, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional278=self->len==0,                    _if_conditional278) {
                        # 226 "./neo-c.h"
                        litem_201=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value206=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_201->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_201->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_201->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_201;
                        # 233 "./neo-c.h"
                        self->head=litem_201;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional279=self->len==1,                        _if_conditional279) {
                            # 236 "./neo-c.h"
                            litem_202=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value207=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_202->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_202->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_202->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_202;
                            # 243 "./neo-c.h"
                            self->head->next=litem_202;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_203=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value208=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_203->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_203->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_203->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_203;
                            # 253 "./neo-c.h"
                            self->tail=litem_203;
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
char* source_head_282;
_Bool is_type_name_flag_283;
int sline_284;
_Bool define_struct_nobody_285;
char* p_286;
int sline_287;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value440;
char* word_288;
_Bool _if_conditional282;
_Bool define_function_pointer_result_function_289;
_Bool define_variable_between_brace_290;
_Bool _if_conditional283;
char* p_291;
_Bool _if_conditional284;
void* right_value441;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_292;
char* fun_name_293;
_Bool err_294;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value442;
char* word_295;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool define_function_flag_296;
_Bool _if_conditional292;
char* p_297;
_Bool invalid_type_298;
_Bool _if_conditional293;
void* right_value443;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_299;
char* fun_name_300;
_Bool err_301;
_Bool _if_conditional294;
char* word_302;
_Bool _if_conditional295;
void* right_value444;
char* __dec_obj74;
_Bool _if_conditional296;
void* right_value445;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _while_condtional33;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value446;
char* __dec_obj77;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool define_variable_303;
_Bool _if_conditional305;
char* p_304;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value447;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_305;
char* fun_name_306;
_Bool err_307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value448;
char* word_308;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value449;
char* word_309;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _while_condtional34;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value450;
char* word_310;
_Bool _if_conditional321;
_Bool _while_condtional36;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value451;
char* word_313;
void* right_value452;
void* right_value453;
struct sNode* node_314;
struct sNode* __result145__;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value454;
struct sNode* __result146__;
_Bool _if_conditional327;
char* header_head_315;
void* right_value455;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_316;
char* fun_name_317;
_Bool err_318;
_Bool _if_conditional328;
void* right_value456;
void* right_value457;
struct list$1sTypeph* param_types_319;
void* right_value458;
void* right_value459;
struct list$1charph* param_names_320;
_Bool _if_conditional329;
_Bool _while_condtional37;
void* right_value460;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_321;
char* param_name_322;
_Bool err_323;
_Bool _if_conditional330;
static int num_function_pointer_result_var_name_a_324=0;
void* right_value461;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
void* right_value462;
void* right_value463;
struct list$1sTypeph* param_types2_325;
void* right_value464;
void* right_value465;
struct list$1charph* param_names2_326;
_Bool _if_conditional334;
_Bool _while_condtional38;
void* right_value466;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_327;
char* param_name_328;
_Bool err_329;
_Bool _if_conditional335;
static int num_function_pointer_result_var_name_b_330=0;
void* right_value467;
_Bool _if_conditional336;
_Bool _if_conditional337;
char* header_tail_331;
void* right_value468;
void* right_value469;
struct sType* result_type2_332;
void* right_value470;
void* right_value471;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value472;
struct list$1sTypeph* __dec_obj80;
void* right_value473;
struct list$1charph* __dec_obj81;
_Bool var_args_333;
void* right_value474;
void* right_value475;
struct buffer* header_buf_334;
void* right_value476;
void* right_value477;
struct list$1charph* param_default_parametors_335;
void* right_value478;
void* right_value479;
void* right_value480;
void* right_value481;
void* right_value482;
struct sFun* fun_336;
void* right_value483;
struct sFun* fun2_340;
_Bool _if_conditional342;
void* right_value484;
void* right_value485;
void* right_value486;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value521;
struct sNode* __result176__;
_Bool _if_conditional407;
void* right_value522;
struct sNode* __result177__;
_Bool _if_conditional408;
void* right_value523;
struct sNode* node_375;
char* source_tail_376;
void* right_value524;
void* right_value525;
struct buffer* header_377;
void* right_value526;
struct sNode* __result178__;
void* right_value527;
char* buf2_378;
void* right_value528;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_282, 0, sizeof(char*));
memset(&is_type_name_flag_283, 0, sizeof(_Bool));
memset(&sline_284, 0, sizeof(int));
memset(&define_struct_nobody_285, 0, sizeof(_Bool));
memset(&p_286, 0, sizeof(char*));
memset(&sline_287, 0, sizeof(int));
right_value440 = (void*)0;
memset(&word_288, 0, sizeof(char*));
memset(&define_function_pointer_result_function_289, 0, sizeof(_Bool));
memset(&define_variable_between_brace_290, 0, sizeof(_Bool));
memset(&p_291, 0, sizeof(char*));
right_value441 = (void*)0;
memset(&result_type_292, 0, sizeof(struct sType*));
memset(&fun_name_293, 0, sizeof(char*));
memset(&err_294, 0, sizeof(_Bool));
memset(&result_type_292, 0, sizeof(struct sType*));
memset(&fun_name_293, 0, sizeof(char*));
memset(&err_294, 0, sizeof(_Bool));
right_value442 = (void*)0;
memset(&word_295, 0, sizeof(char*));
memset(&define_function_flag_296, 0, sizeof(_Bool));
memset(&p_297, 0, sizeof(char*));
memset(&invalid_type_298, 0, sizeof(_Bool));
right_value443 = (void*)0;
memset(&result_type_299, 0, sizeof(struct sType*));
memset(&fun_name_300, 0, sizeof(char*));
memset(&err_301, 0, sizeof(_Bool));
memset(&result_type_299, 0, sizeof(struct sType*));
memset(&fun_name_300, 0, sizeof(char*));
memset(&err_301, 0, sizeof(_Bool));
memset(&word_302, 0, sizeof(char*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&define_variable_303, 0, sizeof(_Bool));
memset(&p_304, 0, sizeof(char*));
right_value447 = (void*)0;
memset(&result_type_305, 0, sizeof(struct sType*));
memset(&fun_name_306, 0, sizeof(char*));
memset(&err_307, 0, sizeof(_Bool));
memset(&result_type_305, 0, sizeof(struct sType*));
memset(&fun_name_306, 0, sizeof(char*));
memset(&err_307, 0, sizeof(_Bool));
right_value448 = (void*)0;
memset(&word_308, 0, sizeof(char*));
right_value449 = (void*)0;
memset(&word_309, 0, sizeof(char*));
right_value450 = (void*)0;
memset(&word_310, 0, sizeof(char*));
right_value451 = (void*)0;
memset(&word_313, 0, sizeof(char*));
right_value452 = (void*)0;
right_value453 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value454 = (void*)0;
memset(&header_head_315, 0, sizeof(char*));
right_value455 = (void*)0;
memset(&result_type_316, 0, sizeof(struct sType*));
memset(&fun_name_317, 0, sizeof(char*));
memset(&err_318, 0, sizeof(_Bool));
memset(&result_type_316, 0, sizeof(struct sType*));
memset(&fun_name_317, 0, sizeof(char*));
memset(&err_318, 0, sizeof(_Bool));
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&param_types_319, 0, sizeof(struct list$1sTypeph*));
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&param_names_320, 0, sizeof(struct list$1charph*));
right_value460 = (void*)0;
memset(&param_type_321, 0, sizeof(struct sType*));
memset(&param_name_322, 0, sizeof(char*));
memset(&err_323, 0, sizeof(_Bool));
memset(&param_type_321, 0, sizeof(struct sType*));
memset(&param_name_322, 0, sizeof(char*));
memset(&err_323, 0, sizeof(_Bool));
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&param_types2_325, 0, sizeof(struct list$1sTypeph*));
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&param_names2_326, 0, sizeof(struct list$1charph*));
right_value466 = (void*)0;
memset(&param_type_327, 0, sizeof(struct sType*));
memset(&param_name_328, 0, sizeof(char*));
memset(&err_329, 0, sizeof(_Bool));
memset(&param_type_327, 0, sizeof(struct sType*));
memset(&param_name_328, 0, sizeof(char*));
memset(&err_329, 0, sizeof(_Bool));
right_value467 = (void*)0;
memset(&header_tail_331, 0, sizeof(char*));
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&result_type2_332, 0, sizeof(struct sType*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&var_args_333, 0, sizeof(_Bool));
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&header_buf_334, 0, sizeof(struct buffer*));
right_value476 = (void*)0;
right_value477 = (void*)0;
memset(&param_default_parametors_335, 0, sizeof(struct list$1charph*));
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
memset(&fun_336, 0, sizeof(struct sFun*));
right_value483 = (void*)0;
memset(&fun2_340, 0, sizeof(struct sFun*));
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
memset(&node_375, 0, sizeof(struct sNode*));
memset(&source_tail_376, 0, sizeof(char*));
right_value524 = (void*)0;
right_value525 = (void*)0;
memset(&header_377, 0, sizeof(struct buffer*));
right_value526 = (void*)0;
right_value527 = (void*)0;
memset(&buf2_378, 0, sizeof(char*));
right_value528 = (void*)0;
    # 883 "05function2.c"
    source_head_282=info->p;
    # 885 "05function2.c"
    is_type_name_flag_283=is_type_name(buf,info);
    # 886 "05function2.c"
    sline_284=info->sline;
    # 890 "05function2.c"
    define_struct_nobody_285=(_Bool)0;
    # 910 "05function2.c"
    {
        # 892 "05function2.c"
        p_286=info->p;
        # 893 "05function2.c"
        sline_287=info->sline;
        # 905 "05function2.c"
        # 895 "05function2.c"
        if(_if_conditional280=charp_operator_equals(buf,"struct"),        _if_conditional280) {
            # 903 "05function2.c"
            # 896 "05function2.c"
            if(_if_conditional281=xisalpha(*info->p)||*info->p==95,            _if_conditional281) {
                # 897 "05function2.c"
                word_288=(char*)come_increment_ref_count(((char*)(right_value440=parse_word(info))));
                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 902 "05function2.c"
                # 899 "05function2.c"
                if(_if_conditional282=*info->p==59,                _if_conditional282) {
                    # 900 "05function2.c"
                    define_struct_nobody_285=(_Bool)1;
                }
                word_288 = come_decrement_ref_count2(word_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 905 "05function2.c"
        info->p=head;
        # 906 "05function2.c"
        info->sline=sline_287;
    }
    # 910 "05function2.c"
    define_function_pointer_result_function_289=(_Bool)0;
    # 911 "05function2.c"
    define_variable_between_brace_290=(_Bool)0;
    # 956 "05function2.c"
    # 912 "05function2.c"
    if(is_type_name_flag_283) {
        # 914 "05function2.c"
        p_291=info->p;
        # 915 "05function2.c"
        info->p=head;
        # 951 "05function2.c"
        # 917 "05function2.c"
        if(_if_conditional284=xisalpha(*info->p)||*info->p==95,        _if_conditional284) {
            # 918 "05function2.c"
            info->no_output_err=(_Bool)1;
            # 919 "05function2.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value441=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_292=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_293=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_294=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 920 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 949 "05function2.c"
            # 923 "05function2.c"
            if(_if_conditional287=*info->p==40,            _if_conditional287) {
                # 924 "05function2.c"
                info->p++;
                # 925 "05function2.c"
                skip_spaces_and_lf(info);
                # 948 "05function2.c"
                # 927 "05function2.c"
                if(_if_conditional288=*info->p!=42,                _if_conditional288) {
                    # 928 "05function2.c"
                    define_function_pointer_result_function_289=(_Bool)1;
                    # 947 "05function2.c"
                    # 930 "05function2.c"
                    if(_if_conditional289=xisalpha(*info->p)||*info->p==95,                    _if_conditional289) {
                        # 931 "05function2.c"
                        info->p++;
                        # 932 "05function2.c"
                        skip_spaces_and_lf(info);
                        # 934 "05function2.c"
                        word_295=(char*)come_increment_ref_count(((char*)(right_value442=parse_word(info))));
                        right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 946 "05function2.c"
                        # 936 "05function2.c"
                        if(_if_conditional290=!is_type_name(word_295,info)&&*info->p==41,                        _if_conditional290) {
                            # 937 "05function2.c"
                            info->p++;
                            # 938 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 945 "05function2.c"
                            # 940 "05function2.c"
                            if(_if_conditional291=*info->p==40,                            _if_conditional291) {
                            }
                            else {
                                # 943 "05function2.c"
                                define_variable_between_brace_290=(_Bool)1;
                            }
                        }
                        word_295 = come_decrement_ref_count2(word_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_293 = come_decrement_ref_count2(fun_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 951 "05function2.c"
        info->p=head;
        # 952 "05function2.c"
        info->sline=sline_284;
    }
    # 956 "05function2.c"
    define_function_flag_296=(_Bool)0;
    # 1021 "05function2.c"
    # 957 "05function2.c"
    if(_if_conditional292=is_type_name_flag_283&&!define_function_pointer_result_function_289&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional292) {
        # 959 "05function2.c"
        p_297=info->p;
        # 960 "05function2.c"
        info->p=head;
        # 962 "05function2.c"
        invalid_type_298=(_Bool)0;
        # 963 "05function2.c"
        info->no_output_err=(_Bool)1;
        # 967 "05function2.c"
        # 964 "05function2.c"
        if(_if_conditional293=xisalpha(*info->p)||*info->p==95,        _if_conditional293) {
            # 965 "05function2.c"
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value443=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_299=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_300=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_301=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_300 = come_decrement_ref_count2(fun_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 967 "05function2.c"
        info->no_output_err=(_Bool)0;
        # 1016 "05function2.c"
        # 969 "05function2.c"
        if(_if_conditional294=!info->define_struct,        _if_conditional294) {
            # 970 "05function2.c"
            info->define_struct=(_Bool)0;
            # 971 "05function2.c"
            word_302=((void*)0);
            # 982 "05function2.c"
            # 972 "05function2.c"
            if(_if_conditional295=xisalnum(*info->p)||*info->p==95,            _if_conditional295) {
                # 973 "05function2.c"
                __dec_obj74=word_302;
                word_302=(char*)come_increment_ref_count(((char*)(right_value444=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 978 "05function2.c"
                # 975 "05function2.c"
                if(_if_conditional296=string_operator_equals(word_302,"extern"),                _if_conditional296) {
                    # 976 "05function2.c"
                    __dec_obj75=word_302;
                    word_302=(char*)come_increment_ref_count(((char*)(right_value445=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 980 "05function2.c"
                __dec_obj76=word_302;
                word_302=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            # 982 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 1014 "05function2.c"
            # 984 "05function2.c"
            if(word_302) {
                # 1008 "05function2.c"
                # 985 "05function2.c"
                if(_if_conditional298=is_type_name(word_302,info),                _if_conditional298) {
                    # 990 "05function2.c"
                    while(_while_condtional33=*info->p==42,                    _while_condtional33) {
                        # 987 "05function2.c"
                        info->p++;
                        # 988 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 994 "05function2.c"
                    # 990 "05function2.c"
                    if(_if_conditional299=*info->p==91&&*(info->p+1)==93,                    _if_conditional299) {
                        # 991 "05function2.c"
                        info->p+=2;
                        # 992 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 998 "05function2.c"
                    # 994 "05function2.c"
                    if(_if_conditional300=*info->p==58,                    _if_conditional300) {
                        # 995 "05function2.c"
                        info->p++;
                        # 996 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 1002 "05function2.c"
                    # 998 "05function2.c"
                    if(_if_conditional301=*info->p==58,                    _if_conditional301) {
                        # 999 "05function2.c"
                        info->p++;
                        # 1000 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    # 1005 "05function2.c"
                    # 1002 "05function2.c"
                    if(_if_conditional302=xisalnum(*info->p)||*info->p==95,                    _if_conditional302) {
                        # 1003 "05function2.c"
                        __dec_obj77=word_302;
                        word_302=(char*)come_increment_ref_count(((char*)(right_value446=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                # 1013 "05function2.c"
                # 1008 "05function2.c"
                if(_if_conditional303=strlen(word_302)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional303) {
                    # 1012 "05function2.c"
                    # 1009 "05function2.c"
                    if(is_type_name_flag_283) {
                        # 1010 "05function2.c"
                        define_function_flag_296=(_Bool)1;
                    }
                }
            }
            word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1016 "05function2.c"
        info->p=p_297;
        # 1017 "05function2.c"
        info->sline=sline_284;
    }
    # 1021 "05function2.c"
    define_variable_303=(_Bool)1;
    # 1100 "05function2.c"
    # 1022 "05function2.c"
    if(_if_conditional305=is_type_name_flag_283&&!define_function_pointer_result_function_289,    _if_conditional305) {
        # 1024 "05function2.c"
        p_304=info->p;
        # 1025 "05function2.c"
        info->p=head;
        # 1031 "05function2.c"
        # 1027 "05function2.c"
        if(_if_conditional306=!is_type_name_flag_283,        _if_conditional306) {
            # 1028 "05function2.c"
            define_variable_303=(_Bool)0;
        }
        # 1072 "05function2.c"
        # 1031 "05function2.c"
        if(_if_conditional307=xisalpha(*info->p)||*info->p==95,        _if_conditional307) {
            # 1032 "05function2.c"
            info->no_output_err=(_Bool)1;
            # 1033 "05function2.c"
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value447=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_305=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_306=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_307=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1034 "05function2.c"
            info->no_output_err=(_Bool)0;
            # 1070 "05function2.c"
            # 1036 "05function2.c"
            if(_if_conditional308=*info->p==40,            _if_conditional308) {
                # 1037 "05function2.c"
                info->p++;
                # 1038 "05function2.c"
                skip_spaces_and_lf(info);
                # 1069 "05function2.c"
                # 1040 "05function2.c"
                if(_if_conditional309=*info->p==42,                _if_conditional309) {
                    # 1041 "05function2.c"
                    info->p++;
                    # 1042 "05function2.c"
                    skip_spaces_and_lf(info);
                    # 1056 "05function2.c"
                    # 1044 "05function2.c"
                    if(_if_conditional310=xisalpha(*info->p)||*info->p==95,                    _if_conditional310) {
                        # 1045 "05function2.c"
                        word_308=(char*)come_increment_ref_count(((char*)(right_value448=parse_word(info))));
                        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1055 "05function2.c"
                        # 1047 "05function2.c"
                        if(_if_conditional311=*info->p==41,                        _if_conditional311) {
                            # 1048 "05function2.c"
                            info->p++;
                            # 1049 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1054 "05function2.c"
                            # 1051 "05function2.c"
                            if(_if_conditional312=*info->p==40,                            _if_conditional312) {
                                # 1052 "05function2.c"
                                define_variable_303=(_Bool)1;
                            }
                        }
                        word_308 = come_decrement_ref_count2(word_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 1069 "05function2.c"
                    # 1057 "05function2.c"
                    if(_if_conditional313=xisalpha(*info->p)||*info->p==95,                    _if_conditional313) {
                        # 1058 "05function2.c"
                        word_309=(char*)come_increment_ref_count(((char*)(right_value449=parse_word(info))));
                        right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1068 "05function2.c"
                        # 1060 "05function2.c"
                        if(_if_conditional314=*info->p==41,                        _if_conditional314) {
                            # 1061 "05function2.c"
                            info->p++;
                            # 1062 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1067 "05function2.c"
                            # 1064 "05function2.c"
                            if(_if_conditional315=!is_type_name(word_309,info)&&*info->p!=40,                            _if_conditional315) {
                                # 1065 "05function2.c"
                                define_variable_303=(_Bool)1;
                            }
                        }
                        word_309 = come_decrement_ref_count2(word_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_306 = come_decrement_ref_count2(fun_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1093 "05function2.c"
        # 1072 "05function2.c"
        if(info->define_struct) {
            # 1073 "05function2.c"
            info->define_struct=(_Bool)0;
            # 1074 "05function2.c"
            define_variable_303=(_Bool)0;
        }
        else {
            # 1093 "05function2.c"
            # 1076 "05function2.c"
            if(define_variable_303) {
            }
            else {
                # 1083 "05function2.c"
                # 1079 "05function2.c"
                if(_if_conditional318=!(xisalpha(*info->p)||*info->p==95),                _if_conditional318) {
                    # 1080 "05function2.c"
                    define_variable_303=(_Bool)0;
                }
                # 1086 "05function2.c"
                while(_while_condtional34=xisalpha(*info->p)||*info->p==95,                _while_condtional34) {
                    # 1084 "05function2.c"
                    info->p++;
                }
                # 1086 "05function2.c"
                skip_spaces_and_lf(info);
                # 1091 "05function2.c"
                # 1088 "05function2.c"
                if(_if_conditional319=*info->p==40||*info->p==58,                _if_conditional319) {
                    # 1089 "05function2.c"
                    define_variable_303=(_Bool)0;
                }
            }
        }
        # 1093 "05function2.c"
        info->p=p_304;
        # 1094 "05function2.c"
        info->sline=sline_284;
    }
    else {
        # 1097 "05function2.c"
        define_variable_303=(_Bool)0;
    }
    # 1319 "05function2.c"
    # 1100 "05function2.c"
    if(_if_conditional320=charp_operator_equals(buf,"template"),    _if_conditional320) {
        # 1101 "05function2.c"
        word_310=(char*)come_increment_ref_count(((char*)(right_value450=parse_word(info))));
        right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1144 "05function2.c"
        # 1103 "05function2.c"
        if(_if_conditional321=*info->p==60,        _if_conditional321) {
            # 1104 "05function2.c"
            info->p++;
            # 1105 "05function2.c"
            skip_spaces_and_lf(info);
            # 1107 "05function2.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1129 "05function2.c"
            while(_while_condtional36=(_Bool)1,            _while_condtional36) {
                # 1127 "05function2.c"
                # 1110 "05function2.c"
                if(_if_conditional322=*info->p==62,                _if_conditional322) {
                    # 1111 "05function2.c"
                    info->p++;
                    # 1112 "05function2.c"
                    skip_spaces_and_lf(info);
                    # 1113 "05function2.c"
                    break;
                }
                else {
                    # 1127 "05function2.c"
                    # 1115 "05function2.c"
                    if(_if_conditional323=*info->p==44,                    _if_conditional323) {
                        # 1116 "05function2.c"
                        info->p++;
                        # 1117 "05function2.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 1127 "05function2.c"
                        # 1119 "05function2.c"
                        if(_if_conditional324=*info->p==0,                        _if_conditional324) {
                            # 1120 "05function2.c"
                            err_msg(info,"unexpected source end");
                            # 1121 "05function2.c"
                            exit(2);
                        }
                        else {
                            # 1124 "05function2.c"
                            word_313=(char*)come_increment_ref_count(((char*)(right_value451=parse_word(info))));
                            right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1125 "05function2.c"
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value452=string_clone(word_313)))));
                            right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_313 = come_decrement_ref_count2(word_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            # 1129 "05function2.c"
            node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=parse_function(info))));
            if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1131 "05function2.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1142 "05function2.c"
            __result145__ = __result_obj__ = node_314;
            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_310 = come_decrement_ref_count2(word_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result145__;
            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_310 = come_decrement_ref_count2(word_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1319 "05function2.c"
        # 1145 "05function2.c"
        if(define_struct_nobody_285) {
        }
        else {
            # 1319 "05function2.c"
            # 1147 "05function2.c"
            if(define_variable_between_brace_290) {
                # 1148 "05function2.c"
                info->p=head;
                # 1149 "05function2.c"
                info->sline=sline_284;
                # 1160 "05function2.c"
                __result146__ = __result_obj__ = ((struct sNode*)(right_value454=parse_global_variable(info)));
                if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result146__;
            }
            else {
                # 1319 "05function2.c"
                # 1162 "05function2.c"
                if(define_function_pointer_result_function_289) {
                    # 1163 "05function2.c"
                    header_head_315=info->p;
                    # 1164 "05function2.c"
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value455=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_316=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_317=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_318=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1296 "05function2.c"
                    # 1166 "05function2.c"
                    if(_if_conditional328=*info->p==40,                    _if_conditional328) {
                        # 1167 "05function2.c"
                        info->p++;
                        # 1168 "05function2.c"
                        skip_spaces_and_lf(info);
                        # 1170 "05function2.c"
                        param_types_319=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value457=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value456=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1170, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1171 "05function2.c"
                        param_names_320=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value458=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1171, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1207 "05function2.c"
                        # 1173 "05function2.c"
                        if(_if_conditional329=*info->p==41,                        _if_conditional329) {
                            # 1174 "05function2.c"
                            info->p++;
                            # 1175 "05function2.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 1205 "05function2.c"
                            while(_while_condtional37=(_Bool)1,                            _while_condtional37) {
                                # 1179 "05function2.c"
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value460=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_321=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_322=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_323=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 1186 "05function2.c"
                                # 1181 "05function2.c"
                                if(_if_conditional330=!err_323,                                _if_conditional330) {
                                    # 1182 "05function2.c"
                                    err_msg(info,"parse_type is failed");
                                    # 1183 "05function2.c"
                                    exit(2);
                                }
                                # 1186 "05function2.c"
                                list$1sTypeph_push_back(param_types_319,(struct sType*)come_increment_ref_count(param_type_321));
                                # 1188 "05function2.c"
                                # 1189 "05function2.c"
                                list$1charph_push_back(param_names_320,(char*)come_increment_ref_count(((char*)(right_value461=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_324)))));
                                right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1204 "05function2.c"
                                # 1191 "05function2.c"
                                if(_if_conditional331=*info->p==44,                                _if_conditional331) {
                                    # 1192 "05function2.c"
                                    info->p++;
                                    # 1193 "05function2.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1204 "05function2.c"
                                    # 1195 "05function2.c"
                                    if(_if_conditional332=*info->p==41,                                    _if_conditional332) {
                                        # 1196 "05function2.c"
                                        info->p++;
                                        # 1197 "05function2.c"
                                        skip_spaces_and_lf(info);
                                        # 1198 "05function2.c"
                                        come_call_finalizer2(sType_finalize,param_type_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_322 = come_decrement_ref_count2(param_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        # 1201 "05function2.c"
                                        err_msg(info,"require , or )");
                                        # 1202 "05function2.c"
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_322 = come_decrement_ref_count2(param_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        # 1207 "05function2.c"
                        expected_next_character(41,info);
                        # 1295 "05function2.c"
                        # 1209 "05function2.c"
                        if(_if_conditional333=*info->p==40,                        _if_conditional333) {
                            # 1210 "05function2.c"
                            info->p++;
                            # 1211 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1213 "05function2.c"
                            param_types2_325=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value463=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value462=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1213, "list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1214 "05function2.c"
                            param_names2_326=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value465=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value464=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1214, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1250 "05function2.c"
                            # 1216 "05function2.c"
                            if(_if_conditional334=*info->p==41,                            _if_conditional334) {
                                # 1217 "05function2.c"
                                info->p++;
                                # 1218 "05function2.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1248 "05function2.c"
                                while(_while_condtional38=(_Bool)1,                                _while_condtional38) {
                                    # 1222 "05function2.c"
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value466=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_327=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_328=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_329=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1229 "05function2.c"
                                    # 1224 "05function2.c"
                                    if(_if_conditional335=!err_329,                                    _if_conditional335) {
                                        # 1225 "05function2.c"
                                        err_msg(info,"parse_type is failed");
                                        # 1226 "05function2.c"
                                        exit(2);
                                    }
                                    # 1229 "05function2.c"
                                    list$1sTypeph_push_back(param_types2_325,(struct sType*)come_increment_ref_count(param_type_327));
                                    # 1231 "05function2.c"
                                    # 1232 "05function2.c"
                                    list$1charph_push_back(param_names2_326,(char*)come_increment_ref_count(((char*)(right_value467=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_330)))));
                                    right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1247 "05function2.c"
                                    # 1234 "05function2.c"
                                    if(_if_conditional336=*info->p==44,                                    _if_conditional336) {
                                        # 1235 "05function2.c"
                                        info->p++;
                                        # 1236 "05function2.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 1247 "05function2.c"
                                        # 1238 "05function2.c"
                                        if(_if_conditional337=*info->p==41,                                        _if_conditional337) {
                                            # 1239 "05function2.c"
                                            info->p++;
                                            # 1240 "05function2.c"
                                            skip_spaces_and_lf(info);
                                            # 1241 "05function2.c"
                                            come_call_finalizer2(sType_finalize,param_type_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_328 = come_decrement_ref_count2(param_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            # 1244 "05function2.c"
                                            err_msg(info,"require , or )");
                                            # 1245 "05function2.c"
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_328 = come_decrement_ref_count2(param_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            # 1250 "05function2.c"
                            header_tail_331=info->p;
                            # 1252 "05function2.c"
                            result_type2_332=(struct sType*)come_increment_ref_count(((struct sType*)(right_value469=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value468=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1252, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1254 "05function2.c"
                            __dec_obj79=result_type2_332->mResultType;
                            result_type2_332->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value471=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value470=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1254, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_316)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1255 "05function2.c"
                            __dec_obj80=result_type2_332->mParamTypes;
                            result_type2_332->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value472=list$1sTypephp_clone(param_types2_325))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1256 "05function2.c"
                            __dec_obj81=result_type2_332->mParamNames;
                            result_type2_332->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value473=list$1charphp_clone(param_names2_326))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1257 "05function2.c"
                            result_type2_332->mVarArgs=(_Bool)0;
                            # 1258 "05function2.c"
                            result_type2_332->mStatic=(_Bool)0;
                            # 1260 "05function2.c"
                            var_args_333=(_Bool)0;
                            # 1262 "05function2.c"
                            header_buf_334=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value475=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value474=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1262, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1263 "05function2.c"
                            buffer_append(header_buf_334,header_head_315,header_tail_331-header_head_315);
                            # 1264 "05function2.c"
                            buffer_append_char(header_buf_334,0);
                            # 1266 "05function2.c"
                            param_default_parametors_335=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value477=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value476=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1266, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1272 "05function2.c"
                            fun_336=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value482=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value478=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1268, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value479=__builtin_string(fun_name_317)))),(struct sType*)come_increment_ref_count(result_type2_332),(struct list$1sTypeph*)come_increment_ref_count(param_types_319),(struct list$1charph*)come_increment_ref_count(param_names_320),(struct list$1charph*)come_increment_ref_count(param_default_parametors_335),(_Bool)1,var_args_333,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value480=buffer_to_string(header_buf_334)))),(char*)come_increment_ref_count(((char*)(right_value481=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1274 "05function2.c"
                            fun2_340=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value483=__builtin_string(fun_name_317))));
                            right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1279 "05function2.c"
                            # 1275 "05function2.c"
                            if(_if_conditional342=fun2_340==((void*)0)||fun2_340->mExternal,                            _if_conditional342) {
                                # 1277 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value484=string_clone(fun_name_317)))),(struct sFun*)come_increment_ref_count(fun_336));
                                right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1289 "05function2.c"
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1289, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value486=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value485=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1289, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_336),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result176__ = __result_obj__ = ((struct sNode*)(right_value521=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_317 = come_decrement_ref_count2(fun_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result176__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1292 "05function2.c"
                            err_msg(info,"require (");
                            # 1293 "05function2.c"
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_317 = come_decrement_ref_count2(fun_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1319 "05function2.c"
                    # 1297 "05function2.c"
                    if(define_function_flag_296) {
                        # 1298 "05function2.c"
                        info->p=head;
                        # 1299 "05function2.c"
                        info->sline=sline_284;
                        # 1301 "05function2.c"
                        __result177__ = __result_obj__ = ((struct sNode*)(right_value522=parse_function(info)));
                        if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result177__;
                    }
                    else {
                        # 1319 "05function2.c"
                        # 1303 "05function2.c"
                        if(define_variable_303) {
                            # 1304 "05function2.c"
                            info->p=head;
                            # 1305 "05function2.c"
                            info->sline=sline_284;
                            # 1307 "05function2.c"
                            node_375=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=parse_global_variable(info))));
                            if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1309 "05function2.c"
                            source_tail_376=info->p;
                            # 1311 "05function2.c"
                            header_377=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value525=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value524=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1311, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1312 "05function2.c"
                            buffer_append(header_377,source_head_282,source_tail_376-source_head_282);
                            # 1314 "05function2.c"
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value526=buffer_to_string(header_377))));
                            right_value526 = come_decrement_ref_count2(right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1316 "05function2.c"
                            __result178__ = __result_obj__ = node_375;
                            if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result178__;
                            if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    # 1319 "05function2.c"
    info->p=head;
    # 1320 "05function2.c"
    info->sline=sline_284;
    # 1322 "05function2.c"
    buf2_378=(char*)come_increment_ref_count(((char*)(right_value527=parse_word(info))));
    right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1324 "05function2.c"
    __result179__ = __result_obj__ = ((struct sNode*)(right_value528=top_level_v98(buf2_378,head,head_sline,info)));
    buf2_378 = come_decrement_ref_count2(buf2_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result179__;
    buf2_378 = come_decrement_ref_count2(buf2_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional285;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional285=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional285) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional286=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional286) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_311;
_Bool _while_condtional35;
struct list_item$1charph* prev_it_312;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_311, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_312, 0, sizeof(struct list_item$1charph*));
                # 433 "./neo-c.h"
                it_311=self->head;
                # 440 "./neo-c.h"
                while(_while_condtional35=it_311!=((void*)0),                _while_condtional35) {
                    # 435 "./neo-c.h"
                    prev_it_312=it_311;
                    # 436 "./neo-c.h"
                    it_311=it_311->next;
                    # 437 "./neo-c.h"
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sFun* default_value_337;
unsigned int hash_338;
unsigned int it_339;
_Bool _while_condtional39;
_Bool _if_conditional338;
_Bool _if_conditional339;
struct sFun* __result148__;
_Bool _if_conditional340;
_Bool _if_conditional341;
struct sFun* __result149__;
struct sFun* __result150__;
struct sFun* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_337, 0, sizeof(struct sFun*));
memset(&hash_338, 0, sizeof(unsigned int));
memset(&it_339, 0, sizeof(unsigned int));
                                # 1544 "./neo-c.h"
                                # 1545 "./neo-c.h"
                                memset(&default_value_337,0,sizeof(struct sFun*));
                                # 1547 "./neo-c.h"
                                hash_338=string_get_hash_key(((char*)key))%self->size;
                                # 1548 "./neo-c.h"
                                it_339=hash_338;
                                # 1572 "./neo-c.h"
                                while(_while_condtional39=(_Bool)1,                                _while_condtional39) {
                                    # 1570 "./neo-c.h"
                                    # 1551 "./neo-c.h"
                                    if(_if_conditional338=self->item_existance[it_339],                                    _if_conditional338) {
                                        # 1558 "./neo-c.h"
                                        # 1553 "./neo-c.h"
                                        if(_if_conditional339=string_equals(self->keys[it_339],key),                                        _if_conditional339) {
                                            # 1555 "./neo-c.h"
                                            __result148__ = __result_obj__ = self->items[it_339];
                                            come_call_finalizer2(sFun_finalize,default_value_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result148__;
                                        }
                                        # 1558 "./neo-c.h"
                                        it_339++;
                                        # 1566 "./neo-c.h"
                                        # 1560 "./neo-c.h"
                                        if(_if_conditional340=it_339>=self->size,                                        _if_conditional340) {
                                            # 1561 "./neo-c.h"
                                            it_339=0;
                                        }
                                        else {
                                            # 1566 "./neo-c.h"
                                            # 1563 "./neo-c.h"
                                            if(_if_conditional341=it_339==hash_338,                                            _if_conditional341) {
                                                # 1564 "./neo-c.h"
                                                __result149__ = __result_obj__ = default_value_337;
                                                come_call_finalizer2(sFun_finalize,default_value_337, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result149__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1568 "./neo-c.h"
                                        __result150__ = __result_obj__ = default_value_337;
                                        come_call_finalizer2(sFun_finalize,default_value_337, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result150__;
                                    }
                                }
                                # 1572 "./neo-c.h"
                                __result151__ = __result_obj__ = default_value_337;
                                come_call_finalizer2(sFun_finalize,default_value_337, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result151__;
                                come_call_finalizer2(sFun_finalize,default_value_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional347;
struct sFun* __result153__;
void* right_value488;
struct sFun* result_342;
_Bool _if_conditional348;
void* right_value489;
char* __dec_obj82;
_Bool _if_conditional349;
void* right_value490;
struct sType* __dec_obj83;
_Bool _if_conditional350;
void* right_value491;
struct list$1sTypeph* __dec_obj84;
_Bool _if_conditional351;
void* right_value492;
struct list$1charph* __dec_obj85;
_Bool _if_conditional352;
void* right_value493;
struct list$1charph* __dec_obj86;
_Bool _if_conditional353;
void* right_value494;
struct sType* __dec_obj87;
_Bool _if_conditional354;
void* right_value512;
struct sBlock* __dec_obj93;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value513;
struct buffer* __dec_obj94;
_Bool _if_conditional398;
void* right_value514;
struct buffer* __dec_obj95;
_Bool _if_conditional399;
void* right_value515;
struct buffer* __dec_obj96;
_Bool _if_conditional400;
void* right_value516;
struct buffer* __dec_obj97;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value517;
char* __dec_obj98;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value518;
char* __dec_obj99;
struct sFun* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value488 = (void*)0;
memset(&result_342, 0, sizeof(struct sFun*));
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
                                        # 3 "sFun_clone"
                                        # 2 "sFun_clone"
                                        if(_if_conditional347=self==(void*)0,                                        _if_conditional347) {
                                            # 2 "sFun_clone"
                                            __result153__ = __result_obj__ = (void*)0;
                                            return __result153__;
                                        }
                                        # 3 "sFun_clone"
                                        result_342=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value488=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sFun_clone"
                                        # 4 "sFun_clone"
                                        if(_if_conditional348=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional348) {
                                            # 4 "sFun_clone"
                                            __dec_obj82=result_342->mName;
                                            result_342->mName=(char*)come_increment_ref_count(((char*)(right_value489=string_clone(self->mName))));
                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value489 = come_decrement_ref_count2(right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 6 "sFun_clone"
                                        # 5 "sFun_clone"
                                        if(_if_conditional349=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional349) {
                                            # 5 "sFun_clone"
                                            __dec_obj83=result_342->mResultType;
                                            result_342->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value490=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sFun_clone"
                                        # 6 "sFun_clone"
                                        if(_if_conditional350=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional350) {
                                            # 6 "sFun_clone"
                                            __dec_obj84=result_342->mParamTypes;
                                            result_342->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value491=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sFun_clone"
                                        # 7 "sFun_clone"
                                        if(_if_conditional351=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional351) {
                                            # 7 "sFun_clone"
                                            __dec_obj85=result_342->mParamNames;
                                            result_342->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value492=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sFun_clone"
                                        # 8 "sFun_clone"
                                        if(_if_conditional352=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional352) {
                                            # 8 "sFun_clone"
                                            __dec_obj86=result_342->mParamDefaultParametors;
                                            result_342->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value493=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 10 "sFun_clone"
                                        # 9 "sFun_clone"
                                        if(_if_conditional353=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional353) {
                                            # 9 "sFun_clone"
                                            __dec_obj87=result_342->mLambdaType;
                                            result_342->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value494=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 11 "sFun_clone"
                                        # 10 "sFun_clone"
                                        if(_if_conditional354=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional354) {
                                            # 10 "sFun_clone"
                                            __dec_obj93=result_342->mBlock;
                                            result_342->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value512=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 12 "sFun_clone"
                                        # 11 "sFun_clone"
                                        if(_if_conditional395=self!=((void*)0),                                        _if_conditional395) {
                                            # 11 "sFun_clone"
                                            result_342->mExternal=self->mExternal;
                                        }
                                        # 13 "sFun_clone"
                                        # 12 "sFun_clone"
                                        if(_if_conditional396=self!=((void*)0),                                        _if_conditional396) {
                                            # 12 "sFun_clone"
                                            result_342->mVarArgs=self->mVarArgs;
                                        }
                                        # 14 "sFun_clone"
                                        # 13 "sFun_clone"
                                        if(_if_conditional397=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional397) {
                                            # 13 "sFun_clone"
                                            __dec_obj94=result_342->mSource;
                                            result_342->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value513=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 15 "sFun_clone"
                                        # 14 "sFun_clone"
                                        if(_if_conditional398=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional398) {
                                            # 14 "sFun_clone"
                                            __dec_obj95=result_342->mSourceHead;
                                            result_342->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value514=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 16 "sFun_clone"
                                        # 15 "sFun_clone"
                                        if(_if_conditional399=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional399) {
                                            # 15 "sFun_clone"
                                            __dec_obj96=result_342->mSourceHead2;
                                            result_342->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value515=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 17 "sFun_clone"
                                        # 16 "sFun_clone"
                                        if(_if_conditional400=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional400) {
                                            # 16 "sFun_clone"
                                            __dec_obj97=result_342->mSourceDefer;
                                            result_342->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value516=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 18 "sFun_clone"
                                        # 17 "sFun_clone"
                                        if(_if_conditional401=self!=((void*)0),                                        _if_conditional401) {
                                            # 17 "sFun_clone"
                                            result_342->mStatic=self->mStatic;
                                        }
                                        # 19 "sFun_clone"
                                        # 18 "sFun_clone"
                                        if(_if_conditional402=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional402) {
                                            # 18 "sFun_clone"
                                            __dec_obj98=result_342->mComeHeader;
                                            result_342->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->mComeHeader))));
                                            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 20 "sFun_clone"
                                        # 19 "sFun_clone"
                                        if(_if_conditional403=self!=((void*)0),                                        _if_conditional403) {
                                            # 19 "sFun_clone"
                                            result_342->mCloner=self->mCloner;
                                        }
                                        # 21 "sFun_clone"
                                        # 20 "sFun_clone"
                                        if(_if_conditional404=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional404) {
                                            # 20 "sFun_clone"
                                            __dec_obj99=result_342->mDeclareSName;
                                            result_342->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value518=string_clone(self->mDeclareSName))));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 21 "sFun_clone"
                                        __result174__ = __result_obj__ = result_342;
                                        come_call_finalizer2(sFun_finalize,result_342, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result174__;
                                        come_call_finalizer2(sFun_finalize,result_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sBlock* __result154__;
void* right_value495;
struct sBlock* result_343;
_Bool _if_conditional356;
void* right_value496;
struct list$1sNodeph* __dec_obj88;
_Bool _if_conditional357;
void* right_value511;
struct sVarTable* __dec_obj92;
struct sBlock* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value495 = (void*)0;
memset(&result_343, 0, sizeof(struct sBlock*));
right_value496 = (void*)0;
right_value511 = (void*)0;
                                                # 3 "sBlock_clone"
                                                # 2 "sBlock_clone"
                                                if(_if_conditional355=self==(void*)0,                                                _if_conditional355) {
                                                    # 2 "sBlock_clone"
                                                    __result154__ = __result_obj__ = (void*)0;
                                                    return __result154__;
                                                }
                                                # 3 "sBlock_clone"
                                                result_343=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value495=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sBlock_clone"
                                                # 4 "sBlock_clone"
                                                if(_if_conditional356=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional356) {
                                                    # 4 "sBlock_clone"
                                                    __dec_obj88=result_343->mNodes;
                                                    result_343->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value496=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                # 5 "sBlock_clone"
                                                if(_if_conditional357=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional357) {
                                                    # 5 "sBlock_clone"
                                                    __dec_obj92=result_343->mVarTable;
                                                    result_343->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value511=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                __result173__ = __result_obj__ = result_343;
                                                come_call_finalizer2(sBlock_finalize,result_343, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result173__;
                                                come_call_finalizer2(sBlock_finalize,result_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional358;
struct sVarTable* __result155__;
void* right_value497;
struct sVarTable* result_344;
_Bool _if_conditional359;
void* right_value510;
struct map$2charphsVarph* __dec_obj91;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
struct sVarTable* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
memset(&result_344, 0, sizeof(struct sVarTable*));
right_value510 = (void*)0;
                                                        # 3 "sVarTable_clone"
                                                        # 2 "sVarTable_clone"
                                                        if(_if_conditional358=self==(void*)0,                                                        _if_conditional358) {
                                                            # 2 "sVarTable_clone"
                                                            __result155__ = __result_obj__ = (void*)0;
                                                            return __result155__;
                                                        }
                                                        # 3 "sVarTable_clone"
                                                        result_344=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value497=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sVarTable_clone"
                                                        # 4 "sVarTable_clone"
                                                        if(_if_conditional359=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional359) {
                                                            # 4 "sVarTable_clone"
                                                            __dec_obj91=result_344->mVars;
                                                            result_344->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value510=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 6 "sVarTable_clone"
                                                        # 5 "sVarTable_clone"
                                                        if(_if_conditional392=self!=((void*)0),                                                        _if_conditional392) {
                                                            # 5 "sVarTable_clone"
                                                            result_344->mGlobal=self->mGlobal;
                                                        }
                                                        # 7 "sVarTable_clone"
                                                        # 6 "sVarTable_clone"
                                                        if(_if_conditional393=self!=((void*)0),                                                        _if_conditional393) {
                                                            # 6 "sVarTable_clone"
                                                            result_344->mParent=self->mParent;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        # 7 "sVarTable_clone"
                                                        if(_if_conditional394=self!=((void*)0),                                                        _if_conditional394) {
                                                            # 7 "sVarTable_clone"
                                                            result_344->mID=self->mID;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        __result172__ = __result_obj__ = result_344;
                                                        come_call_finalizer2(sVarTable_finalize,result_344, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result172__;
                                                        come_call_finalizer2(sVarTable_finalize,result_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional360;
struct map$2charphsVarph* __result156__;
void* right_value498;
void* right_value504;
struct map$2charphsVarph* result_350;
void* right_value505;
void* right_value506;
struct list$1charp* __dec_obj90;
char* it_353;
struct sVar* default_value_356;
struct sVar* it2_359;
struct map$2charphsVarph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value498 = (void*)0;
right_value504 = (void*)0;
memset(&result_350, 0, sizeof(struct map$2charphsVarph*));
right_value505 = (void*)0;
right_value506 = (void*)0;
memset(&it_353, 0, sizeof(char*));
memset(&default_value_356, 0, sizeof(struct sVar*));
memset(&it2_359, 0, sizeof(struct sVar*));
                                                                # 1181 "./neo-c.h"
                                                                # 1177 "./neo-c.h"
                                                                if(_if_conditional360=self==((void*)0),                                                                _if_conditional360) {
                                                                    # 1178 "./neo-c.h"
                                                                    __result156__ = __result_obj__ = ((void*)0);
                                                                    return __result156__;
                                                                }
                                                                # 1181 "./neo-c.h"
                                                                result_350=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value504=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value498=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1181, "map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1183 "./neo-c.h"
                                                                __dec_obj90=result_350->key_list;
                                                                result_350->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value506=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value505=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1183, "list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1194 "./neo-c.h"
                                                                for(                                                                it_353=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_353=map$2charphsVarph_next(self)                                                                ){
                                                                    # 1186 "./neo-c.h"
                                                                    # 1187 "./neo-c.h"
                                                                    memset(&default_value_356,0,sizeof(struct sVar*));
                                                                    # 1189 "./neo-c.h"
                                                                    it2_359=map$2charphsVarph_at(self,it_353,default_value_356);
                                                                    # 1191 "./neo-c.h"
                                                                    map$2charphsVarph_insert2(result_350,it_353,it2_359);
                                                                }
                                                                # 1194 "./neo-c.h"
                                                                __result171__ = __result_obj__ = result_350;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_350, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result171__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_350, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value499;
void* right_value500;
void* right_value501;
int i_345;
void* right_value502;
void* right_value503;
struct list$1charp* __dec_obj89;
struct map$2charphsVarph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&i_345, 0, sizeof(int));
right_value502 = (void*)0;
right_value503 = (void*)0;
                                                                    # 1087 "./neo-c.h"
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value499=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1087, "char*%"))));
                                                                    right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1088 "./neo-c.h"
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value500=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./neo-c.h", 1088, "sVar*%"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    # 1089 "./neo-c.h"
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value501=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1089, "bool"))));
                                                                    right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1096 "./neo-c.h"
                                                                    for(                                                                    i_345=0;                                                                    i_345<1024;                                                                    i_345++                                                                    ){
                                                                        # 1093 "./neo-c.h"
                                                                        self->item_existance[i_345]=(_Bool)0;
                                                                    }
                                                                    # 1096 "./neo-c.h"
                                                                    self->size=1024;
                                                                    # 1097 "./neo-c.h"
                                                                    self->len=0;
                                                                    # 1099 "./neo-c.h"
                                                                    __dec_obj89=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value503=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value502=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1099, "list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sVar_finalize"
                                                                        # 0 "sVar_finalize"
                                                                        if(_if_conditional361=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional361) {
                                                                            # 0 "sVar_finalize"
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sVar_finalize"
                                                                        # 1 "sVar_finalize"
                                                                        if(_if_conditional362=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional362) {
                                                                            # 1 "sVar_finalize"
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sVar_finalize"
                                                                        # 2 "sVar_finalize"
                                                                        if(_if_conditional363=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional363) {
                                                                            # 2 "sVar_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 4 "sVar_finalize"
                                                                        # 3 "sVar_finalize"
                                                                        if(_if_conditional364=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional364) {
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
struct list_item$1charp* it_346;
_Bool _while_condtional40;
struct list_item$1charp* prev_it_347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_346, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_347, 0, sizeof(struct list_item$1charp*));
                                                                            # 123 "./neo-c.h"
                                                                            it_346=self->head;
                                                                            # 129 "./neo-c.h"
                                                                            while(_while_condtional40=it_346!=((void*)0),                                                                            _while_condtional40) {
                                                                                # 125 "./neo-c.h"
                                                                                prev_it_347=it_346;
                                                                                # 126 "./neo-c.h"
                                                                                it_346=it_346->next;
                                                                                # 127 "./neo-c.h"
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_347, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_348;
_Bool _if_conditional365;
_Bool _if_conditional366;
int i_349;
_Bool _if_conditional367;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_348, 0, sizeof(int));
memset(&i_349, 0, sizeof(int));
                                                                        # 1137 "./neo-c.h"
                                                                        for(                                                                        i_348=0;                                                                        i_348<self->size;                                                                        i_348++                                                                        ){
                                                                            # 1136 "./neo-c.h"
                                                                            # 1131 "./neo-c.h"
                                                                            if(_if_conditional365=self->item_existance[i_348],                                                                            _if_conditional365) {
                                                                                # 1135 "./neo-c.h"
                                                                                # 1132 "./neo-c.h"
                                                                                if(_if_conditional366=1,                                                                                _if_conditional366) {
                                                                                    # 1133 "./neo-c.h"
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_348], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        # 1137 "./neo-c.h"
                                                                        come_free((char*)self->items);
                                                                        # 1146 "./neo-c.h"
                                                                        for(                                                                        i_349=0;                                                                        i_349<self->size;                                                                        i_349++                                                                        ){
                                                                            # 1145 "./neo-c.h"
                                                                            # 1140 "./neo-c.h"
                                                                            if(_if_conditional367=self->item_existance[i_349],                                                                            _if_conditional367) {
                                                                                # 1144 "./neo-c.h"
                                                                                # 1141 "./neo-c.h"
                                                                                if(_if_conditional368=1,                                                                                _if_conditional368) {
                                                                                    # 1142 "./neo-c.h"
                                                                                    self->keys[i_349] = come_decrement_ref_count2(self->keys[i_349], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional369;
char* result_351;
char* __result159__;
_Bool _if_conditional370;
char* __result160__;
char* result_352;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_351, 0, sizeof(char*));
memset(&result_352, 0, sizeof(char*));
                                                                    # 1304 "./neo-c.h"
                                                                    # 1299 "./neo-c.h"
                                                                    if(_if_conditional369=self==((void*)0),                                                                    _if_conditional369) {
                                                                        # 1300 "./neo-c.h"
                                                                        # 1301 "./neo-c.h"
                                                                        memset(&result_351,0,sizeof(char*));
                                                                        # 1302 "./neo-c.h"
                                                                        __result159__ = __result_obj__ = result_351;
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
                                                                    memset(&result_352,0,sizeof(char*));
                                                                    # 1312 "./neo-c.h"
                                                                    __result161__ = __result_obj__ = result_352;
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
_Bool _if_conditional371;
char* result_354;
char* __result163__;
_Bool _if_conditional372;
char* __result164__;
char* result_355;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_354, 0, sizeof(char*));
memset(&result_355, 0, sizeof(char*));
                                                                    # 1321 "./neo-c.h"
                                                                    # 1316 "./neo-c.h"
                                                                    if(_if_conditional371=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional371) {
                                                                        # 1317 "./neo-c.h"
                                                                        # 1318 "./neo-c.h"
                                                                        memset(&result_354,0,sizeof(char*));
                                                                        # 1319 "./neo-c.h"
                                                                        __result163__ = __result_obj__ = result_354;
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
                                                                    memset(&result_355,0,sizeof(char*));
                                                                    # 1329 "./neo-c.h"
                                                                    __result165__ = __result_obj__ = result_355;
                                                                    return __result165__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_357;
unsigned int it_358;
_Bool _while_condtional41;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct sVar* __result166__;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct sVar* __result167__;
struct sVar* __result168__;
struct sVar* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_357, 0, sizeof(unsigned int));
memset(&it_358, 0, sizeof(unsigned int));
                                                                        # 1226 "./neo-c.h"
                                                                        hash_357=string_get_hash_key(((char*)key))%self->size;
                                                                        # 1227 "./neo-c.h"
                                                                        it_358=hash_357;
                                                                        # 1251 "./neo-c.h"
                                                                        while(_while_condtional41=(_Bool)1,                                                                        _while_condtional41) {
                                                                            # 1249 "./neo-c.h"
                                                                            # 1230 "./neo-c.h"
                                                                            if(_if_conditional373=self->item_existance[it_358],                                                                            _if_conditional373) {
                                                                                # 1237 "./neo-c.h"
                                                                                # 1232 "./neo-c.h"
                                                                                if(_if_conditional374=string_equals(self->keys[it_358],key),                                                                                _if_conditional374) {
                                                                                    # 1234 "./neo-c.h"
                                                                                    __result166__ = __result_obj__ = self->items[it_358];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result166__;
                                                                                }
                                                                                # 1237 "./neo-c.h"
                                                                                it_358++;
                                                                                # 1245 "./neo-c.h"
                                                                                # 1239 "./neo-c.h"
                                                                                if(_if_conditional375=it_358>=self->size,                                                                                _if_conditional375) {
                                                                                    # 1240 "./neo-c.h"
                                                                                    it_358=0;
                                                                                }
                                                                                else {
                                                                                    # 1245 "./neo-c.h"
                                                                                    # 1242 "./neo-c.h"
                                                                                    if(_if_conditional376=it_358==hash_357,                                                                                    _if_conditional376) {
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
_Bool _if_conditional377;
unsigned int hash_371;
int it_372;
_Bool _while_condtional43;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool same_key_exist_373;
char* it2_374;
_Bool _if_conditional389;
_Bool _if_conditional390;
struct map$2charphsVarph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_371, 0, sizeof(unsigned int));
memset(&it_372, 0, sizeof(int));
memset(&same_key_exist_373, 0, sizeof(_Bool));
memset(&it2_374, 0, sizeof(char*));
                                                                        # 1470 "./neo-c.h"
                                                                        # 1467 "./neo-c.h"
                                                                        if(_if_conditional377=self->len*2>=self->size,                                                                        _if_conditional377) {
                                                                            # 1468 "./neo-c.h"
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        # 1470 "./neo-c.h"
                                                                        hash_371=string_get_hash_key(key)%self->size;
                                                                        # 1471 "./neo-c.h"
                                                                        it_372=hash_371;
                                                                        # 1529 "./neo-c.h"
                                                                        while(_while_condtional43=(_Bool)1,                                                                        _while_condtional43) {
                                                                            # 1527 "./neo-c.h"
                                                                            # 1474 "./neo-c.h"
                                                                            if(_if_conditional381=self->item_existance[it_372],                                                                            _if_conditional381) {
                                                                                # 1497 "./neo-c.h"
                                                                                # 1476 "./neo-c.h"
                                                                                if(_if_conditional382=string_equals(self->keys[it_372],key),                                                                                _if_conditional382) {
                                                                                    # 1487 "./neo-c.h"
                                                                                    # 1478 "./neo-c.h"
                                                                                    if(_if_conditional383=1,                                                                                    _if_conditional383) {
                                                                                        # 1479 "./neo-c.h"
                                                                                        self->keys[it_372] = come_decrement_ref_count2(self->keys[it_372], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        # 1480 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_372]);
                                                                                        # 1481 "./neo-c.h"
                                                                                        self->keys[it_372]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        # 1484 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_372]);
                                                                                        # 1485 "./neo-c.h"
                                                                                        self->keys[it_372]=key;
                                                                                    }
                                                                                    # 1494 "./neo-c.h"
                                                                                    # 1487 "./neo-c.h"
                                                                                    if(_if_conditional384=1,                                                                                    _if_conditional384) {
                                                                                        # 1488 "./neo-c.h"
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_372], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        # 1489 "./neo-c.h"
                                                                                        self->items[it_372]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        # 1492 "./neo-c.h"
                                                                                        self->items[it_372]=item;
                                                                                    }
                                                                                    # 1494 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                # 1497 "./neo-c.h"
                                                                                it_372++;
                                                                                # 1507 "./neo-c.h"
                                                                                # 1499 "./neo-c.h"
                                                                                if(_if_conditional385=it_372>=self->size,                                                                                _if_conditional385) {
                                                                                    # 1500 "./neo-c.h"
                                                                                    it_372=0;
                                                                                }
                                                                                else {
                                                                                    # 1507 "./neo-c.h"
                                                                                    # 1502 "./neo-c.h"
                                                                                    if(_if_conditional386=it_372==hash_371,                                                                                    _if_conditional386) {
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
                                                                                self->item_existance[it_372]=(_Bool)1;
                                                                                # 1516 "./neo-c.h"
                                                                                # 1510 "./neo-c.h"
                                                                                if(_if_conditional387=1,                                                                                _if_conditional387) {
                                                                                    # 1511 "./neo-c.h"
                                                                                    self->keys[it_372]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    # 1514 "./neo-c.h"
                                                                                    self->keys[it_372]=key;
                                                                                }
                                                                                # 1523 "./neo-c.h"
                                                                                # 1516 "./neo-c.h"
                                                                                if(_if_conditional388=1,                                                                                _if_conditional388) {
                                                                                    # 1517 "./neo-c.h"
                                                                                    self->items[it_372]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    # 1520 "./neo-c.h"
                                                                                    self->items[it_372]=item;
                                                                                }
                                                                                # 1523 "./neo-c.h"
                                                                                self->len++;
                                                                                # 1525 "./neo-c.h"
                                                                                break;
                                                                            }
                                                                        }
                                                                        # 1529 "./neo-c.h"
                                                                        same_key_exist_373=(_Bool)0;
                                                                        # 1537 "./neo-c.h"
                                                                        for(                                                                        it2_374=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_374=list$1charp_next(self->key_list)                                                                        ){
                                                                            # 1535 "./neo-c.h"
                                                                            # 1532 "./neo-c.h"
                                                                            if(_if_conditional389=string_equals(it2_374,key),                                                                            _if_conditional389) {
                                                                                # 1533 "./neo-c.h"
                                                                                same_key_exist_373=(_Bool)1;
                                                                            }
                                                                        }
                                                                        # 1541 "./neo-c.h"
                                                                        # 1537 "./neo-c.h"
                                                                        if(_if_conditional390=!same_key_exist_373,                                                                        _if_conditional390) {
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
int size_360;
void* right_value507;
char** keys_361;
void* right_value508;
struct sVar** items_362;
void* right_value509;
_Bool* item_existance_363;
int len_364;
char* it_365;
struct sVar* default_value_366;
struct sVar* it2_367;
unsigned int hash_368;
int n_369;
_Bool _while_condtional42;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct sVar* default_value_370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_360, 0, sizeof(int));
right_value507 = (void*)0;
memset(&keys_361, 0, sizeof(char**));
right_value508 = (void*)0;
memset(&items_362, 0, sizeof(struct sVar**));
right_value509 = (void*)0;
memset(&item_existance_363, 0, sizeof(_Bool*));
memset(&len_364, 0, sizeof(int));
memset(&it_365, 0, sizeof(char*));
memset(&default_value_366, 0, sizeof(struct sVar*));
memset(&it2_367, 0, sizeof(struct sVar*));
memset(&hash_368, 0, sizeof(unsigned int));
memset(&n_369, 0, sizeof(int));
memset(&default_value_370, 0, sizeof(struct sVar*));
                                                                                # 1337 "./neo-c.h"
                                                                                size_360=self->size*10;
                                                                                # 1338 "./neo-c.h"
                                                                                keys_361=(char**)come_increment_ref_count(((char**)(right_value507=(char**)come_calloc(1, sizeof(char*)*(1*(size_360)), "./neo-c.h", 1338, "char*%"))));
                                                                                right_value507 = come_decrement_ref_count2(right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1339 "./neo-c.h"
                                                                                items_362=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value508=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_360)), "./neo-c.h", 1339, "sVar*%"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 1340 "./neo-c.h"
                                                                                item_existance_363=(_Bool*)come_increment_ref_count(((_Bool*)(right_value509=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_360)), "./neo-c.h", 1340, "bool"))));
                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1342 "./neo-c.h"
                                                                                len_364=0;
                                                                                # 1377 "./neo-c.h"
                                                                                for(                                                                                it_365=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_365=map$2charphsVarph_next(self)                                                                                ){
                                                                                    # 1345 "./neo-c.h"
                                                                                    # 1346 "./neo-c.h"
                                                                                    memset(&default_value_366,0,sizeof(struct sVar*));
                                                                                    # 1347 "./neo-c.h"
                                                                                    it2_367=map$2charphsVarph_at(self,it_365,default_value_366);
                                                                                    # 1348 "./neo-c.h"
                                                                                    hash_368=string_get_hash_key(it_365)%size_360;
                                                                                    # 1349 "./neo-c.h"
                                                                                    n_369=hash_368;
                                                                                    # 1375 "./neo-c.h"
                                                                                    while(_while_condtional42=(_Bool)1,                                                                                    _while_condtional42) {
                                                                                        # 1374 "./neo-c.h"
                                                                                        # 1352 "./neo-c.h"
                                                                                        if(_if_conditional378=item_existance_363[n_369],                                                                                        _if_conditional378) {
                                                                                            # 1354 "./neo-c.h"
                                                                                            n_369++;
                                                                                            # 1364 "./neo-c.h"
                                                                                            # 1356 "./neo-c.h"
                                                                                            if(_if_conditional379=n_369>=size_360,                                                                                            _if_conditional379) {
                                                                                                # 1357 "./neo-c.h"
                                                                                                n_369=0;
                                                                                            }
                                                                                            else {
                                                                                                # 1364 "./neo-c.h"
                                                                                                # 1359 "./neo-c.h"
                                                                                                if(_if_conditional380=n_369==hash_368,                                                                                                _if_conditional380) {
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
                                                                                            item_existance_363[n_369]=(_Bool)1;
                                                                                            # 1367 "./neo-c.h"
                                                                                            keys_361[n_369]=it_365;
                                                                                            # 1368 "./neo-c.h"
                                                                                            # 1369 "./neo-c.h"
                                                                                            items_362[n_369]=map$2charphsVarph_at(self,it_365,default_value_370);
                                                                                            # 1371 "./neo-c.h"
                                                                                            len_364++;
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
                                                                                self->keys=keys_361;
                                                                                # 1382 "./neo-c.h"
                                                                                self->items=items_362;
                                                                                # 1383 "./neo-c.h"
                                                                                self->item_existance=item_existance_363;
                                                                                # 1385 "./neo-c.h"
                                                                                self->size=size_360;
                                                                                # 1386 "./neo-c.h"
                                                                                self->len=len_364;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "map$2charphsVarph_finalize"
                                                                # 0 "map$2charphsVarph_finalize"
                                                                if(_if_conditional391=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional391) {
                                                                    # 0 "map$2charphsVarph_finalize"
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_384;
struct sType* type_388;
struct sClass* generics_class_389;
void* right_value529;
_Bool generics_type_name_391;
void* right_value530;
_Bool mgenerics_type_name_392;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_384, 0, sizeof(struct sClass*));
memset(&type_388, 0, sizeof(struct sType*));
memset(&generics_class_389, 0, sizeof(struct sClass*));
right_value529 = (void*)0;
memset(&generics_type_name_391, 0, sizeof(_Bool));
right_value530 = (void*)0;
memset(&mgenerics_type_name_392, 0, sizeof(_Bool));
    # 1329 "05function2.c"
    klass_384=map$2charphsClassphp_operator_load_element(info->classes,buf);
    # 1330 "05function2.c"
    type_388=map$2charphsTypephp_operator_load_element(info->types,buf);
    # 1331 "05function2.c"
    generics_class_389=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    # 1332 "05function2.c"
    generics_type_name_391=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value529=__builtin_string(buf)))));
    right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1333 "05function2.c"
    mgenerics_type_name_392=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value530=__builtin_string(buf)))));
    right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1335 "05function2.c"
    __result190__ = generics_class_389||generics_type_name_391||mgenerics_type_name_392||klass_384||type_388||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result190__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_379;
unsigned int hash_380;
unsigned int it_381;
_Bool _while_condtional44;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sClass* __result180__;
_Bool _if_conditional417;
_Bool _if_conditional418;
struct sClass* __result181__;
struct sClass* __result182__;
struct sClass* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_379, 0, sizeof(struct sClass*));
memset(&hash_380, 0, sizeof(unsigned int));
memset(&it_381, 0, sizeof(unsigned int));
        # 1544 "./neo-c.h"
        # 1545 "./neo-c.h"
        memset(&default_value_379,0,sizeof(struct sClass*));
        # 1547 "./neo-c.h"
        hash_380=string_get_hash_key(((char*)key))%self->size;
        # 1548 "./neo-c.h"
        it_381=hash_380;
        # 1572 "./neo-c.h"
        while(_while_condtional44=(_Bool)1,        _while_condtional44) {
            # 1570 "./neo-c.h"
            # 1551 "./neo-c.h"
            if(_if_conditional409=self->item_existance[it_381],            _if_conditional409) {
                # 1558 "./neo-c.h"
                # 1553 "./neo-c.h"
                if(_if_conditional410=string_equals(self->keys[it_381],key),                _if_conditional410) {
                    # 1555 "./neo-c.h"
                    __result180__ = __result_obj__ = self->items[it_381];
                    come_call_finalizer2(sClass_finalize,default_value_379, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result180__;
                }
                # 1558 "./neo-c.h"
                it_381++;
                # 1566 "./neo-c.h"
                # 1560 "./neo-c.h"
                if(_if_conditional417=it_381>=self->size,                _if_conditional417) {
                    # 1561 "./neo-c.h"
                    it_381=0;
                }
                else {
                    # 1566 "./neo-c.h"
                    # 1563 "./neo-c.h"
                    if(_if_conditional418=it_381==hash_380,                    _if_conditional418) {
                        # 1564 "./neo-c.h"
                        __result181__ = __result_obj__ = default_value_379;
                        come_call_finalizer2(sClass_finalize,default_value_379, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result181__;
                    }
                }
            }
            else {
                # 1568 "./neo-c.h"
                __result182__ = __result_obj__ = default_value_379;
                come_call_finalizer2(sClass_finalize,default_value_379, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result182__;
            }
        }
        # 1572 "./neo-c.h"
        __result183__ = __result_obj__ = default_value_379;
        come_call_finalizer2(sClass_finalize,default_value_379, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result183__;
        come_call_finalizer2(sClass_finalize,default_value_379, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional411=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional411) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional412=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional412) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional416=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional416) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_382;
_Bool _while_condtional45;
struct list_item$1tuple2$2charphsTypephph* prev_it_383;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_382, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_383, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./neo-c.h"
                                it_382=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional45=it_382!=((void*)0),                                _while_condtional45) {
                                    # 125 "./neo-c.h"
                                    prev_it_383=it_382;
                                    # 126 "./neo-c.h"
                                    it_382=it_382->next;
                                    # 127 "./neo-c.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional413=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional413) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional414=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional414) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional415=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional415) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_385;
unsigned int hash_386;
unsigned int it_387;
_Bool _while_condtional46;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct sType* __result184__;
_Bool _if_conditional421;
_Bool _if_conditional422;
struct sType* __result185__;
struct sType* __result186__;
struct sType* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_385, 0, sizeof(struct sType*));
memset(&hash_386, 0, sizeof(unsigned int));
memset(&it_387, 0, sizeof(unsigned int));
        # 1544 "./neo-c.h"
        # 1545 "./neo-c.h"
        memset(&default_value_385,0,sizeof(struct sType*));
        # 1547 "./neo-c.h"
        hash_386=string_get_hash_key(((char*)key))%self->size;
        # 1548 "./neo-c.h"
        it_387=hash_386;
        # 1572 "./neo-c.h"
        while(_while_condtional46=(_Bool)1,        _while_condtional46) {
            # 1570 "./neo-c.h"
            # 1551 "./neo-c.h"
            if(_if_conditional419=self->item_existance[it_387],            _if_conditional419) {
                # 1558 "./neo-c.h"
                # 1553 "./neo-c.h"
                if(_if_conditional420=string_equals(self->keys[it_387],key),                _if_conditional420) {
                    # 1555 "./neo-c.h"
                    __result184__ = __result_obj__ = self->items[it_387];
                    come_call_finalizer2(sType_finalize,default_value_385, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result184__;
                }
                # 1558 "./neo-c.h"
                it_387++;
                # 1566 "./neo-c.h"
                # 1560 "./neo-c.h"
                if(_if_conditional421=it_387>=self->size,                _if_conditional421) {
                    # 1561 "./neo-c.h"
                    it_387=0;
                }
                else {
                    # 1566 "./neo-c.h"
                    # 1563 "./neo-c.h"
                    if(_if_conditional422=it_387==hash_386,                    _if_conditional422) {
                        # 1564 "./neo-c.h"
                        __result185__ = __result_obj__ = default_value_385;
                        come_call_finalizer2(sType_finalize,default_value_385, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result185__;
                    }
                }
            }
            else {
                # 1568 "./neo-c.h"
                __result186__ = __result_obj__ = default_value_385;
                come_call_finalizer2(sType_finalize,default_value_385, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result186__;
            }
        }
        # 1572 "./neo-c.h"
        __result187__ = __result_obj__ = default_value_385;
        come_call_finalizer2(sType_finalize,default_value_385, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result187__;
        come_call_finalizer2(sType_finalize,default_value_385, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_390;
_Bool _if_conditional423;
_Bool __result188__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_390, 0, sizeof(char*));
        # 746 "./neo-c.h"
        for(        it_390=list$1charph_begin(self);        !list$1charph_end(self);        it_390=list$1charph_next(self)        ){
            # 744 "./neo-c.h"
            # 741 "./neo-c.h"
            if(_if_conditional423=string_operator_equals(it_390,item),            _if_conditional423) {
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
struct sFun* caller_fun_393;
int caller_line_394;
char* caller_sname_395;
char* last_code_396;
char* __dec_obj102;
char* last_code2_397;
char* __dec_obj103;
char* last_code3_398;
char* __dec_obj104;
void* right_value531;
char* sname_top_399;
int sline_top_400;
_Bool _if_conditional424;
struct sFun* funX_401;
_Bool _if_conditional425;
_Bool __result191__;
void* right_value532;
struct sType* result_type_402;
void* right_value533;
void* right_value534;
struct list$1sTypeph* param_types_403;
struct list$1sTypeph* o2_saved_404;
struct sType* it_407;
void* right_value535;
void* right_value536;
struct sType* param_type_410;
void* right_value537;
void* right_value538;
struct list$1charph* param_names_411;
void* right_value539;
struct list$1charph* param_default_parametors_412;
char* p_413;
int sline_414;
char* sname_415;
char* head_416;
struct buffer* source_417;
void* right_value540;
struct buffer* __dec_obj105;
struct sType* generics_type_saved_418;
void* right_value541;
struct sType* __dec_obj106;
struct list$1charph* method_generics_type_names_419;
void* right_value542;
void* right_value543;
struct list$1charph* __dec_obj107;
struct list$1charph* o2_saved_420;
char* it_421;
void* right_value544;
void* right_value545;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
void* right_value546;
struct sBlock* block_422;
struct buffer* __dec_obj110;
char* __dec_obj111;
_Bool var_args_423;
void* right_value547;
void* right_value548;
void* right_value549;
void* right_value550;
void* right_value551;
struct sFun* fun_424;
void* right_value552;
void* right_value553;
void* right_value554;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value558;
struct sNode* node_426;
_Bool _if_conditional436;
_Bool __result201__;
struct sType* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
void* right_value559;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_393, 0, sizeof(struct sFun*));
memset(&caller_line_394, 0, sizeof(int));
memset(&caller_sname_395, 0, sizeof(char*));
memset(&last_code_396, 0, sizeof(char*));
memset(&last_code2_397, 0, sizeof(char*));
memset(&last_code3_398, 0, sizeof(char*));
right_value531 = (void*)0;
memset(&sname_top_399, 0, sizeof(char*));
memset(&sline_top_400, 0, sizeof(int));
memset(&funX_401, 0, sizeof(struct sFun*));
right_value532 = (void*)0;
memset(&result_type_402, 0, sizeof(struct sType*));
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&param_types_403, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_404, 0, sizeof(struct list$1sTypeph*));
memset(&it_407, 0, sizeof(struct sType*));
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&param_type_410, 0, sizeof(struct sType*));
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&param_names_411, 0, sizeof(struct list$1charph*));
right_value539 = (void*)0;
memset(&param_default_parametors_412, 0, sizeof(struct list$1charph*));
memset(&p_413, 0, sizeof(char*));
memset(&sline_414, 0, sizeof(int));
memset(&sname_415, 0, sizeof(char*));
memset(&head_416, 0, sizeof(char*));
memset(&source_417, 0, sizeof(struct buffer*));
right_value540 = (void*)0;
memset(&generics_type_saved_418, 0, sizeof(struct sType*));
right_value541 = (void*)0;
memset(&method_generics_type_names_419, 0, sizeof(struct list$1charph*));
right_value542 = (void*)0;
right_value543 = (void*)0;
memset(&o2_saved_420, 0, sizeof(struct list$1charph*));
memset(&it_421, 0, sizeof(char*));
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
memset(&block_422, 0, sizeof(struct sBlock*));
memset(&var_args_423, 0, sizeof(_Bool));
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
memset(&fun_424, 0, sizeof(struct sFun*));
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value558 = (void*)0;
memset(&node_426, 0, sizeof(struct sNode*));
right_value559 = (void*)0;
    # 1340 "05function2.c"
    caller_fun_393=info->caller_fun;
    # 1341 "05function2.c"
    info->caller_fun=info->come_fun;
    # 1342 "05function2.c"
    caller_line_394=info->caller_line;
    # 1343 "05function2.c"
    info->caller_line=info->sline;
    # 1344 "05function2.c"
    caller_sname_395=info->caller_sname;
    # 1345 "05function2.c"
    info->caller_sname=info->sname;
    # 1347 "05function2.c"
    last_code_396=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1348 "05function2.c"
    __dec_obj102=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1349 "05function2.c"
    last_code2_397=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1350 "05function2.c"
    __dec_obj103=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1351 "05function2.c"
    last_code3_398=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1352 "05function2.c"
    __dec_obj104=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1354 "05function2.c"
    sname_top_399=(char*)come_increment_ref_count(((char*)(right_value531=__builtin_string(info->sname))));
    right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1355 "05function2.c"
    sline_top_400=info->sline;
    # 1360 "05function2.c"
    # 1357 "05function2.c"
    if(generics_type->mNoSolvedGenericsType->v1) {
        # 1358 "05function2.c"
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    # 1360 "05function2.c"
    funX_401=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1365 "05function2.c"
    # 1361 "05function2.c"
    if(funX_401) {
        # 1362 "05function2.c"
        __result191__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_396 = come_decrement_ref_count2(last_code_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_397 = come_decrement_ref_count2(last_code2_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_398 = come_decrement_ref_count2(last_code3_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_399 = come_decrement_ref_count2(sname_top_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result191__;
    }
    # 1365 "05function2.c"
    result_type_402=(struct sType*)come_increment_ref_count(((struct sType*)(right_value532=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1367 "05function2.c"
    param_types_403=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value534=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value533=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1367, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1375 "05function2.c"
    for(    o2_saved_404=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_407=list$1sTypeph_begin((o2_saved_404));    !list$1sTypeph_end((o2_saved_404));    it_407=list$1sTypeph_next((o2_saved_404))    ){
        # 1369 "05function2.c"
        param_type_410=(struct sType*)come_increment_ref_count(((struct sType*)(right_value536=solve_generics(((struct sType*)(right_value535=sType_clone(it_407))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1371 "05function2.c"
        param_type_410->mFunctionParam=(_Bool)1;
        # 1373 "05function2.c"
        list$1sTypeph_add(param_types_403,(struct sType*)come_increment_ref_count(((struct sType*)(right_value537=sType_clone(param_type_410)))));
        come_call_finalizer2(sType_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_410, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1375 "05function2.c"
    param_names_411=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value538=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1377 "05function2.c"
    param_default_parametors_412=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value539=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1379 "05function2.c"
    p_413=info->p;
    # 1380 "05function2.c"
    sline_414=info->sline;
    # 1381 "05function2.c"
    sname_415=(char*)come_increment_ref_count(info->sname);
    # 1382 "05function2.c"
    head_416=info->head;
    # 1383 "05function2.c"
    source_417=(struct buffer*)come_increment_ref_count(info->source);
    # 1385 "05function2.c"
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value540=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1386 "05function2.c"
    info->p=info->source->buf;
    # 1387 "05function2.c"
    info->head=info->source->buf;
    # 1389 "05function2.c"
    generics_type_saved_418=(struct sType*)come_increment_ref_count(info->generics_type);
    # 1390 "05function2.c"
    __dec_obj106=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value541=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1392 "05function2.c"
    method_generics_type_names_419=info->method_generics_type_names;
    # 1394 "05function2.c"
    __dec_obj107=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value543=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value542=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1394, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1399 "05function2.c"
    for(    o2_saved_420=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_421=list$1charph_begin((o2_saved_420));    !list$1charph_end((o2_saved_420));    it_421=list$1charph_next((o2_saved_420))    ){
        # 1396 "05function2.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value544=string_clone(it_421)))));
        right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1399 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1400 "05function2.c"
    __dec_obj108=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value545=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1402 "05function2.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1403 "05function2.c"
    __dec_obj109=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1405 "05function2.c"
    block_422=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value546=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1407 "05function2.c"
    info->head=head_416;
    # 1408 "05function2.c"
    __dec_obj110=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_417);
    come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1409 "05function2.c"
    info->p=p_413;
    # 1410 "05function2.c"
    info->sline=sline_414;
    # 1411 "05function2.c"
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_415);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1413 "05function2.c"
    result_type_402->mInline=(_Bool)0;
    # 1415 "05function2.c"
    var_args_423=generics_fun->mVarArgs;
    # 1419 "05function2.c"
    fun_424=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value551=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value547=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1416, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_402),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value548=list$1sTypephp_clone(param_types_403)))),(struct list$1charph*)come_increment_ref_count(param_names_411),(struct list$1charph*)come_increment_ref_count(param_default_parametors_412),(_Bool)0,var_args_423,(struct sBlock*)come_increment_ref_count(block_422),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value549=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value550=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1421 "05function2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value552=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_424));
    right_value552 = come_decrement_ref_count2(right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1423 "05function2.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1423, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value554=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value553=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1423, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_424),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_426=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value558=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value558) { right_value558 = come_decrement_ref_count2(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1429 "05function2.c"
    # 1425 "05function2.c"
    if(_if_conditional436=!node_compile(node_426,info),    _if_conditional436) {
        # 1427 "05function2.c"
        __result201__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_396 = come_decrement_ref_count2(last_code_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_397 = come_decrement_ref_count2(last_code2_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_398 = come_decrement_ref_count2(last_code3_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_399 = come_decrement_ref_count2(sname_top_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_411, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_415 = come_decrement_ref_count2(sname_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_422, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result201__;
    }
    # 1429 "05function2.c"
    __dec_obj114=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_418);
    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1430 "05function2.c"
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1431 "05function2.c"
    __dec_obj115=method_generics_type_names_419;
    __dec_obj116=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_419);
    come_call_finalizer2(list$1charph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1433 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1435 "05function2.c"
    __dec_obj117=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value559=__builtin_string(sname_top_399))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value559 = come_decrement_ref_count2(right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1436 "05function2.c"
    info->sline=sline_top_400;
    # 1438 "05function2.c"
    __dec_obj118=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_396);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1439 "05function2.c"
    __dec_obj119=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_397);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1440 "05function2.c"
    __dec_obj120=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_398);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1442 "05function2.c"
    info->caller_fun=caller_fun_393;
    # 1443 "05function2.c"
    info->caller_line=caller_line_394;
    # 1444 "05function2.c"
    info->caller_sname=caller_sname_395;
    # 1446 "05function2.c"
    __result202__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_396 = come_decrement_ref_count2(last_code_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_397 = come_decrement_ref_count2(last_code2_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_398 = come_decrement_ref_count2(last_code3_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_399 = come_decrement_ref_count2(sname_top_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_411, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_415 = come_decrement_ref_count2(sname_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_422, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result202__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_396 = come_decrement_ref_count2(last_code_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_397 = come_decrement_ref_count2(last_code2_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_398 = come_decrement_ref_count2(last_code3_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_399 = come_decrement_ref_count2(sname_top_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_411, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_415 = come_decrement_ref_count2(sname_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_422, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional426;
struct sType* result_405;
struct sType* __result192__;
_Bool _if_conditional427;
struct sType* __result193__;
struct sType* result_406;
struct sType* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_405, 0, sizeof(struct sType*));
memset(&result_406, 0, sizeof(struct sType*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional426=self==((void*)0),        _if_conditional426) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_405,0,sizeof(struct sType*));
            # 288 "./neo-c.h"
            __result192__ = __result_obj__ = result_405;
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
        memset(&result_406,0,sizeof(struct sType*));
        # 298 "./neo-c.h"
        __result194__ = __result_obj__ = result_406;
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
_Bool _if_conditional428;
struct sType* result_408;
struct sType* __result196__;
_Bool _if_conditional429;
struct sType* __result197__;
struct sType* result_409;
struct sType* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_408, 0, sizeof(struct sType*));
memset(&result_409, 0, sizeof(struct sType*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional428=self==((void*)0)||self->it==((void*)0),        _if_conditional428) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_408,0,sizeof(struct sType*));
            # 305 "./neo-c.h"
            __result196__ = __result_obj__ = result_408;
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
        memset(&result_409,0,sizeof(struct sType*));
        # 316 "./neo-c.h"
        __result198__ = __result_obj__ = result_409;
        return __result198__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_427;
int caller_line_428;
char* caller_sname_429;
char* last_code_430;
char* __dec_obj121;
char* last_code2_431;
char* __dec_obj122;
char* last_code3_432;
char* __dec_obj123;
void* right_value560;
char* sname_top_433;
int sline_top_434;
struct sFun* funX_435;
_Bool _if_conditional437;
_Bool __result203__;
void* right_value561;
struct sType* result_type_436;
void* right_value562;
void* right_value563;
struct list$1sTypeph* param_types_437;
struct list$1sTypeph* o2_saved_438;
struct sType* it_439;
void* right_value564;
void* right_value565;
struct sType* param_type_440;
void* right_value566;
void* right_value567;
struct list$1charph* param_names_441;
void* right_value568;
struct list$1charph* param_default_parametors_442;
char* p_443;
int sline_444;
char* sname_445;
char* head_446;
struct buffer* source_447;
void* right_value569;
struct buffer* __dec_obj124;
struct list$1charph* method_generics_type_names_448;
void* right_value570;
void* right_value571;
struct list$1charph* __dec_obj125;
struct list$1charph* o2_saved_449;
char* it_450;
void* right_value572;
void* right_value573;
struct list$1charph* __dec_obj126;
char* __dec_obj127;
void* right_value574;
struct sBlock* block_451;
struct buffer* __dec_obj128;
char* __dec_obj129;
_Bool var_args_452;
void* right_value575;
void* right_value576;
void* right_value577;
void* right_value578;
void* right_value579;
struct sFun* fun_453;
void* right_value580;
void* right_value581;
void* right_value582;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value586;
struct sNode* node_455;
_Bool _if_conditional444;
_Bool __result206__;
struct list$1charph* __dec_obj132;
struct list$1charph* __dec_obj133;
void* right_value587;
char* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_427, 0, sizeof(struct sFun*));
memset(&caller_line_428, 0, sizeof(int));
memset(&caller_sname_429, 0, sizeof(char*));
memset(&last_code_430, 0, sizeof(char*));
memset(&last_code2_431, 0, sizeof(char*));
memset(&last_code3_432, 0, sizeof(char*));
right_value560 = (void*)0;
memset(&sname_top_433, 0, sizeof(char*));
memset(&sline_top_434, 0, sizeof(int));
memset(&funX_435, 0, sizeof(struct sFun*));
right_value561 = (void*)0;
memset(&result_type_436, 0, sizeof(struct sType*));
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&param_types_437, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_438, 0, sizeof(struct list$1sTypeph*));
memset(&it_439, 0, sizeof(struct sType*));
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&param_type_440, 0, sizeof(struct sType*));
right_value566 = (void*)0;
right_value567 = (void*)0;
memset(&param_names_441, 0, sizeof(struct list$1charph*));
right_value568 = (void*)0;
memset(&param_default_parametors_442, 0, sizeof(struct list$1charph*));
memset(&p_443, 0, sizeof(char*));
memset(&sline_444, 0, sizeof(int));
memset(&sname_445, 0, sizeof(char*));
memset(&head_446, 0, sizeof(char*));
memset(&source_447, 0, sizeof(struct buffer*));
right_value569 = (void*)0;
memset(&method_generics_type_names_448, 0, sizeof(struct list$1charph*));
right_value570 = (void*)0;
right_value571 = (void*)0;
memset(&o2_saved_449, 0, sizeof(struct list$1charph*));
memset(&it_450, 0, sizeof(char*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&block_451, 0, sizeof(struct sBlock*));
memset(&var_args_452, 0, sizeof(_Bool));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
memset(&fun_453, 0, sizeof(struct sFun*));
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value586 = (void*)0;
memset(&node_455, 0, sizeof(struct sNode*));
right_value587 = (void*)0;
    # 1451 "05function2.c"
    caller_fun_427=info->caller_fun;
    # 1452 "05function2.c"
    info->caller_fun=info->come_fun;
    # 1453 "05function2.c"
    caller_line_428=info->caller_line;
    # 1454 "05function2.c"
    info->caller_line=info->sline;
    # 1455 "05function2.c"
    caller_sname_429=info->caller_sname;
    # 1456 "05function2.c"
    info->caller_sname=info->sname;
    # 1458 "05function2.c"
    last_code_430=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1459 "05function2.c"
    __dec_obj121=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1460 "05function2.c"
    last_code2_431=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1461 "05function2.c"
    __dec_obj122=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1462 "05function2.c"
    last_code3_432=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1463 "05function2.c"
    __dec_obj123=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1465 "05function2.c"
    sname_top_433=(char*)come_increment_ref_count(((char*)(right_value560=__builtin_string(info->sname))));
    right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1466 "05function2.c"
    sline_top_434=info->sline;
    # 1468 "05function2.c"
    funX_435=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1473 "05function2.c"
    # 1469 "05function2.c"
    if(funX_435) {
        # 1470 "05function2.c"
        __result203__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_430 = come_decrement_ref_count2(last_code_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_431 = come_decrement_ref_count2(last_code2_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_432 = come_decrement_ref_count2(last_code3_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_433 = come_decrement_ref_count2(sname_top_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result203__;
    }
    # 1473 "05function2.c"
    result_type_436=(struct sType*)come_increment_ref_count(((struct sType*)(right_value561=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer2(sType_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1475 "05function2.c"
    param_types_437=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value563=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value562=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1475, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1483 "05function2.c"
    for(    o2_saved_438=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_439=list$1sTypeph_begin((o2_saved_438));    !list$1sTypeph_end((o2_saved_438));    it_439=list$1sTypeph_next((o2_saved_438))    ){
        # 1477 "05function2.c"
        param_type_440=(struct sType*)come_increment_ref_count(((struct sType*)(right_value565=solve_method_generics(((struct sType*)(right_value564=sType_clone(it_439))),info))));
        come_call_finalizer2(sType_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1479 "05function2.c"
        param_type_440->mFunctionParam=(_Bool)1;
        # 1481 "05function2.c"
        list$1sTypeph_add(param_types_437,(struct sType*)come_increment_ref_count(((struct sType*)(right_value566=sType_clone(param_type_440)))));
        come_call_finalizer2(sType_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1483 "05function2.c"
    param_names_441=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value567=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1485 "05function2.c"
    param_default_parametors_442=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value568=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1487 "05function2.c"
    p_443=info->p;
    # 1488 "05function2.c"
    sline_444=info->sline;
    # 1489 "05function2.c"
    sname_445=(char*)come_increment_ref_count(info->sname);
    # 1490 "05function2.c"
    head_446=info->head;
    # 1491 "05function2.c"
    source_447=(struct buffer*)come_increment_ref_count(info->source);
    # 1493 "05function2.c"
    __dec_obj124=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value569=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1494 "05function2.c"
    info->p=info->source->buf;
    # 1495 "05function2.c"
    info->head=info->source->buf;
    # 1497 "05function2.c"
    method_generics_type_names_448=info->method_generics_type_names;
    # 1499 "05function2.c"
    __dec_obj125=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value571=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value570=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1499, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1504 "05function2.c"
    for(    o2_saved_449=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_450=list$1charph_begin((o2_saved_449));    !list$1charph_end((o2_saved_449));    it_450=list$1charph_next((o2_saved_449))    ){
        # 1501 "05function2.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value572=string_clone(it_450)))));
        right_value572 = come_decrement_ref_count2(right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_449, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1504 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1505 "05function2.c"
    __dec_obj126=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value573=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1507 "05function2.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1508 "05function2.c"
    __dec_obj127=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1510 "05function2.c"
    block_451=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value574=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1512 "05function2.c"
    info->head=head_446;
    # 1513 "05function2.c"
    __dec_obj128=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_447);
    come_call_finalizer2(buffer_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1514 "05function2.c"
    info->p=p_443;
    # 1515 "05function2.c"
    info->sline=sline_444;
    # 1516 "05function2.c"
    __dec_obj129=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_445);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1518 "05function2.c"
    result_type_436->mInline=(_Bool)0;
    # 1520 "05function2.c"
    var_args_452=generics_fun->mVarArgs;
    # 1524 "05function2.c"
    fun_453=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value579=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value575=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1521, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_436),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value576=list$1sTypephp_clone(param_types_437)))),(struct list$1charph*)come_increment_ref_count(param_names_441),(struct list$1charph*)come_increment_ref_count(param_default_parametors_442),(_Bool)0,var_args_452,(struct sBlock*)come_increment_ref_count(block_451),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value577=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value578=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1526 "05function2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value580=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_453));
    right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1528 "05function2.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1528, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value582=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value581=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1528, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_453),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sFunNode_sline;
    _inf_value3->sname=(void*)sFunNode_sname;
    _inf_value3->terminated=(void*)sFunNode_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_455=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=_inf_value3)));
    come_call_finalizer2(sFunNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1534 "05function2.c"
    # 1530 "05function2.c"
    if(_if_conditional444=!node_compile(node_455,info),    _if_conditional444) {
        # 1532 "05function2.c"
        __result206__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_430 = come_decrement_ref_count2(last_code_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_431 = come_decrement_ref_count2(last_code2_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_432 = come_decrement_ref_count2(last_code3_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_433 = come_decrement_ref_count2(sname_top_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_436, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_442, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_445 = come_decrement_ref_count2(sname_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result206__;
    }
    # 1534 "05function2.c"
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1535 "05function2.c"
    __dec_obj132=method_generics_type_names_448;
    __dec_obj133=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_448);
    come_call_finalizer2(list$1charph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1537 "05function2.c"
    list$1charph_reset(info->generics_type_names);
    # 1539 "05function2.c"
    __dec_obj134=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value587=__builtin_string(sname_top_433))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1540 "05function2.c"
    info->sline=sline_top_434;
    # 1542 "05function2.c"
    __dec_obj135=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_430);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1543 "05function2.c"
    __dec_obj136=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_431);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1544 "05function2.c"
    __dec_obj137=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_432);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1546 "05function2.c"
    info->caller_fun=caller_fun_427;
    # 1547 "05function2.c"
    info->caller_line=caller_line_428;
    # 1548 "05function2.c"
    info->caller_sname=caller_sname_429;
    # 1550 "05function2.c"
    __result207__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_430 = come_decrement_ref_count2(last_code_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_431 = come_decrement_ref_count2(last_code2_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_432 = come_decrement_ref_count2(last_code3_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_433 = come_decrement_ref_count2(sname_top_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_436, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_442, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_445 = come_decrement_ref_count2(sname_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result207__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_430 = come_decrement_ref_count2(last_code_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_431 = come_decrement_ref_count2(last_code2_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_432 = come_decrement_ref_count2(last_code3_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_433 = come_decrement_ref_count2(sname_top_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_436, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_442, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_445 = come_decrement_ref_count2(sname_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_456;
char* source_head_457;
struct sType* result_type_458;
char* var_name_459;
_Bool constructor__460;
_Bool _if_conditional445;
void* right_value588;
void* right_value589;
struct sType* __dec_obj138;
void* right_value590;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_461;
char* var_name2_462;
_Bool err_463;
struct sType* __dec_obj139;
char* __dec_obj140;
_Bool _if_conditional446;
_Bool method_definition_464;
char* p_465;
int sline_466;
void* right_value591;
void* right_value592;
struct buffer* buf2_467;
_Bool _while_condtional47;
_Bool _while_condtional48;
_Bool _while_condtional49;
_Bool _while_condtional50;
_Bool _if_conditional447;
char* fun_name_468;
char* base_fun_name_469;
_Bool _if_conditional448;
void* right_value593;
void* right_value594;
char* __dec_obj141;
_Bool _if_conditional449;
void* right_value595;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_470;
char* name_471;
_Bool err_472;
_Bool _if_conditional450;
void* right_value596;
void* right_value597;
char* __dec_obj142;
_Bool _if_conditional451;
void* right_value598;
void* right_value599;
char* __dec_obj143;
void* right_value600;
char* __dec_obj144;
void* right_value601;
_Bool _if_conditional452;
void* right_value602;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_473;
struct list$1charph* param_names_474;
struct list$1charph* param_default_parametors_475;
_Bool var_args_476;
char* header_tail_477;
_Bool _if_conditional456;
void* right_value603;
void* right_value604;
struct buffer* header_buf_478;
int version_479;
_Bool _if_conditional457;
int n_480;
_Bool _while_condtional51;
_Bool _if_conditional458;
void* right_value605;
struct sBlock* block_481;
static int lambda_num_482=0;
void* right_value606;
char* fun_name_483;
void* right_value607;
void* right_value608;
void* right_value609;
void* right_value610;
void* right_value611;
struct sFun* fun_484;
void* right_value612;
struct sFun* fun2_485;
_Bool _if_conditional459;
void* right_value613;
void* right_value614;
void* right_value615;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value618;
struct sNode* __result210__;
_Bool _if_conditional466;
void* right_value619;
char* none_generics_name_487;
void* right_value620;
char* generics_sname_488;
int generics_sline_489;
void* right_value621;
char* block_490;
void* right_value622;
void* right_value623;
void* right_value624;
void* right_value625;
void* right_value626;
void* right_value627;
struct sGenericsFun* fun_491;
void* right_value628;
char* fun_name3_492;
void* right_value632;
struct sNode* __result225__;
_Bool _if_conditional489;
void* right_value633;
char* generics_sname_514;
int generics_sline_515;
void* right_value634;
char* block_516;
void* right_value635;
void* right_value636;
void* right_value637;
void* right_value638;
void* right_value639;
void* right_value640;
struct sGenericsFun* fun_517;
void* right_value641;
char* fun_name3_518;
void* right_value642;
struct sNode* __result226__;
_Bool _if_conditional490;
char* source_tail_519;
void* right_value643;
void* right_value644;
struct buffer* header_520;
void* right_value645;
void* right_value646;
struct sBlock* block_521;
_Bool static__522;
_Bool _if_conditional491;
_Bool _if_conditional492;
void* right_value647;
void* right_value648;
char* new_fun_name_523;
void* right_value649;
char* __dec_obj146;
void* right_value650;
void* right_value651;
void* right_value652;
void* right_value653;
void* right_value654;
void* right_value655;
struct sFun* fun_524;
void* right_value656;
struct sFun* fun2_525;
_Bool _if_conditional493;
void* right_value657;
void* right_value658;
void* right_value659;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value663;
struct sNode* __result229__;
_Bool _if_conditional500;
_Bool _if_conditional501;
void* right_value664;
char* new_fun_name_527;
void* right_value665;
char* __dec_obj149;
_Bool _if_conditional502;
void* right_value666;
void* right_value667;
void* right_value668;
void* right_value669;
void* right_value670;
struct sFun* fun_528;
void* right_value671;
struct sFun* fun2_529;
_Bool _if_conditional503;
void* right_value672;
char* source_tail_530;
void* right_value673;
void* right_value674;
struct buffer* header_531;
void* right_value675;
void* right_value676;
void* right_value677;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value681;
struct sNode* __result232__;
void* right_value682;
char* asm_fun_533;
_Bool _if_conditional510;
void* right_value683;
char* __dec_obj152;
void* right_value684;
void* right_value685;
void* right_value686;
void* right_value687;
void* right_value688;
struct sFun* fun_534;
void* right_value689;
struct sFun* fun2_535;
_Bool _if_conditional511;
void* right_value690;
char* source_tail_536;
void* right_value691;
void* right_value692;
struct buffer* header_537;
void* right_value693;
void* right_value694;
void* right_value695;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value699;
struct sNode* __result235__;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_456, 0, sizeof(char*));
memset(&source_head_457, 0, sizeof(char*));
memset(&result_type_458, 0, sizeof(struct sType*));
memset(&var_name_459, 0, sizeof(char*));
memset(&constructor__460, 0, sizeof(_Bool));
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
memset(&result_type2_461, 0, sizeof(struct sType*));
memset(&var_name2_462, 0, sizeof(char*));
memset(&err_463, 0, sizeof(_Bool));
memset(&result_type2_461, 0, sizeof(struct sType*));
memset(&var_name2_462, 0, sizeof(char*));
memset(&err_463, 0, sizeof(_Bool));
memset(&method_definition_464, 0, sizeof(_Bool));
memset(&p_465, 0, sizeof(char*));
memset(&sline_466, 0, sizeof(int));
right_value591 = (void*)0;
right_value592 = (void*)0;
memset(&buf2_467, 0, sizeof(struct buffer*));
memset(&fun_name_468, 0, sizeof(char*));
memset(&base_fun_name_469, 0, sizeof(char*));
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
memset(&obj_type_470, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
memset(&err_472, 0, sizeof(_Bool));
memset(&obj_type_470, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
memset(&err_472, 0, sizeof(_Bool));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&param_types_473, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_474, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_475, 0, sizeof(struct list$1charph*));
memset(&var_args_476, 0, sizeof(_Bool));
memset(&param_types_473, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_474, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_475, 0, sizeof(struct list$1charph*));
memset(&var_args_476, 0, sizeof(_Bool));
memset(&header_tail_477, 0, sizeof(char*));
right_value603 = (void*)0;
right_value604 = (void*)0;
memset(&header_buf_478, 0, sizeof(struct buffer*));
memset(&version_479, 0, sizeof(int));
memset(&n_480, 0, sizeof(int));
right_value605 = (void*)0;
memset(&block_481, 0, sizeof(struct sBlock*));
right_value606 = (void*)0;
memset(&fun_name_483, 0, sizeof(char*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value611 = (void*)0;
memset(&fun_484, 0, sizeof(struct sFun*));
right_value612 = (void*)0;
memset(&fun2_485, 0, sizeof(struct sFun*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value618 = (void*)0;
right_value619 = (void*)0;
memset(&none_generics_name_487, 0, sizeof(char*));
right_value620 = (void*)0;
memset(&generics_sname_488, 0, sizeof(char*));
memset(&generics_sline_489, 0, sizeof(int));
right_value621 = (void*)0;
memset(&block_490, 0, sizeof(char*));
right_value622 = (void*)0;
right_value623 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&fun_491, 0, sizeof(struct sGenericsFun*));
right_value628 = (void*)0;
memset(&fun_name3_492, 0, sizeof(char*));
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&generics_sname_514, 0, sizeof(char*));
memset(&generics_sline_515, 0, sizeof(int));
right_value634 = (void*)0;
memset(&block_516, 0, sizeof(char*));
right_value635 = (void*)0;
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&fun_517, 0, sizeof(struct sGenericsFun*));
right_value641 = (void*)0;
memset(&fun_name3_518, 0, sizeof(char*));
right_value642 = (void*)0;
memset(&source_tail_519, 0, sizeof(char*));
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&header_520, 0, sizeof(struct buffer*));
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&block_521, 0, sizeof(struct sBlock*));
memset(&static__522, 0, sizeof(_Bool));
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&new_fun_name_523, 0, sizeof(char*));
right_value649 = (void*)0;
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
memset(&fun_524, 0, sizeof(struct sFun*));
right_value656 = (void*)0;
memset(&fun2_525, 0, sizeof(struct sFun*));
right_value657 = (void*)0;
right_value658 = (void*)0;
right_value659 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&new_fun_name_527, 0, sizeof(char*));
right_value665 = (void*)0;
right_value666 = (void*)0;
right_value667 = (void*)0;
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value670 = (void*)0;
memset(&fun_528, 0, sizeof(struct sFun*));
right_value671 = (void*)0;
memset(&fun2_529, 0, sizeof(struct sFun*));
right_value672 = (void*)0;
memset(&source_tail_530, 0, sizeof(char*));
right_value673 = (void*)0;
right_value674 = (void*)0;
memset(&header_531, 0, sizeof(struct buffer*));
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
right_value681 = (void*)0;
right_value682 = (void*)0;
memset(&asm_fun_533, 0, sizeof(char*));
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
memset(&fun_534, 0, sizeof(struct sFun*));
right_value689 = (void*)0;
memset(&fun2_535, 0, sizeof(struct sFun*));
right_value690 = (void*)0;
memset(&source_tail_536, 0, sizeof(char*));
right_value691 = (void*)0;
right_value692 = (void*)0;
memset(&header_537, 0, sizeof(struct buffer*));
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value699 = (void*)0;
    # 1555 "05function2.c"
    header_head_456=info->p;
    # 1556 "05function2.c"
    source_head_457=info->p;
    # 1558 "05function2.c"
    result_type_458=((void*)0);
    # 1559 "05function2.c"
    var_name_459=((void*)0);
    # 1560 "05function2.c"
    constructor__460=(_Bool)0;
    # 1581 "05function2.c"
    # 1562 "05function2.c"
    if(_if_conditional445=info->in_class&&memcmp(info->p,"new(",4)==0,    _if_conditional445) {
        # 1563 "05function2.c"
        ((char*)(right_value588=parse_word(info)));
        right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1564 "05function2.c"
        __dec_obj138=result_type_458;
        result_type_458=(struct sType*)come_increment_ref_count(((struct sType*)(right_value589=sType_clone(info->impl_type))));
        come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1565 "05function2.c"
        result_type_458->mHeap=(_Bool)1;
        # 1566 "05function2.c"
        constructor__460=(_Bool)1;
    }
    else {
        # 1569 "05function2.c"
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value590=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_461=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_462=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_463=multiple_assign_var7->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1571 "05function2.c"
        __dec_obj139=result_type_458;
        result_type_458=(struct sType*)come_increment_ref_count(result_type2_461);
        come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1572 "05function2.c"
        __dec_obj140=var_name_459;
        var_name_459=(char*)come_increment_ref_count(var_name2_462);
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1578 "05function2.c"
        # 1574 "05function2.c"
        if(_if_conditional446=!err_463,        _if_conditional446) {
            # 1575 "05function2.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1576 "05function2.c"
            exit(2);
        }
        come_call_finalizer2(sType_finalize,result_type2_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name2_462 = come_decrement_ref_count2(var_name2_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1581 "05function2.c"
    method_definition_464=(_Bool)0;
    # 1614 "05function2.c"
    {
        # 1583 "05function2.c"
        p_465=info->p;
        # 1584 "05function2.c"
        sline_466=info->sline;
        # 1586 "05function2.c"
        buf2_467=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value592=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value591=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1586, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1591 "05function2.c"
        while(_while_condtional47=xisalnum(*info->p)||*info->p==95,        _while_condtional47) {
            # 1588 "05function2.c"
            buffer_append_char(buf2_467,*info->p);
            # 1589 "05function2.c"
            info->p++;
        }
        # 1591 "05function2.c"
        skip_spaces_and_lf(info);
        # 1597 "05function2.c"
        while(_while_condtional48=*info->p==91&&*(info->p+1)==93,        _while_condtional48) {
            # 1594 "05function2.c"
            info->p+=2;
            # 1595 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1601 "05function2.c"
        while(_while_condtional49=*info->p==42,        _while_condtional49) {
            # 1598 "05function2.c"
            info->p++;
            # 1599 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1606 "05function2.c"
        while(_while_condtional50=*info->p==37,        _while_condtional50) {
            # 1602 "05function2.c"
            info->p++;
            # 1603 "05function2.c"
            skip_spaces_and_lf(info);
        }
        # 1610 "05function2.c"
        # 1606 "05function2.c"
        if(_if_conditional447=buffer_length(buf2_467)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional447) {
            # 1607 "05function2.c"
            method_definition_464=(_Bool)1;
        }
        # 1610 "05function2.c"
        info->p=p_465;
        # 1611 "05function2.c"
        info->sline=sline_466;
        come_call_finalizer2(buffer_finalize,buf2_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1614 "05function2.c"
    # 1615 "05function2.c"
    base_fun_name_469=((void*)0);
    # 1644 "05function2.c"
    # 1616 "05function2.c"
    if(constructor__460) {
        # 1617 "05function2.c"
        base_fun_name_469=(char*)come_increment_ref_count(((char*)(right_value593=__builtin_string("initialize"))));
        right_value593 = come_decrement_ref_count2(right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1618 "05function2.c"
        __dec_obj141=fun_name_468;
        fun_name_468=(char*)come_increment_ref_count(((char*)(right_value594=create_method_name(info->impl_type,(_Bool)0,base_fun_name_469,info,(_Bool)1))));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 1644 "05function2.c"
        # 1620 "05function2.c"
        if(method_definition_464) {
            # 1621 "05function2.c"
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value595=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_470=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_471=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_472=multiple_assign_var8->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1628 "05function2.c"
            # 1623 "05function2.c"
            if(_if_conditional450=!err_472,            _if_conditional450) {
                # 1624 "05function2.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 1625 "05function2.c"
                exit(2);
            }
            # 1628 "05function2.c"
            expected_next_character(58,info);
            # 1629 "05function2.c"
            expected_next_character(58,info);
            # 1631 "05function2.c"
            base_fun_name_469=(char*)come_increment_ref_count(((char*)(right_value596=parse_word(info))));
            right_value596 = come_decrement_ref_count2(right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1632 "05function2.c"
            __dec_obj142=fun_name_468;
            fun_name_468=(char*)come_increment_ref_count(((char*)(right_value597=create_method_name(obj_type_470,(_Bool)0,base_fun_name_469,info,(_Bool)1))));
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,obj_type_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_471 = come_decrement_ref_count2(name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1644 "05function2.c"
            # 1634 "05function2.c"
            if(info->impl_type) {
                # 1635 "05function2.c"
                base_fun_name_469=(char*)come_increment_ref_count(((char*)(right_value598=parse_word(info))));
                right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1637 "05function2.c"
                __dec_obj143=fun_name_468;
                fun_name_468=(char*)come_increment_ref_count(((char*)(right_value599=create_method_name(info->impl_type,(_Bool)0,base_fun_name_469,info,(_Bool)1))));
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1640 "05function2.c"
                __dec_obj144=fun_name_468;
                fun_name_468=(char*)come_increment_ref_count(((char*)(right_value600=parse_word(info))));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1641 "05function2.c"
                base_fun_name_469=(char*)come_increment_ref_count(((char*)(right_value601=__builtin_string(fun_name_468))));
                right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    # 1647 "05function2.c"
    # 1644 "05function2.c"
    if(_if_conditional452=info->in_class&&charp_operator_equals(base_fun_name_469,"initialize"),    _if_conditional452) {
        # 1645 "05function2.c"
        info->in_class=(_Bool)0;
    }
    # 1647 "05function2.c"
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value602=parse_params(info,constructor__460)));
    param_types_473=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_474=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_475=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_476=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1648 "05function2.c"
    header_tail_477=info->p;
    # 1653 "05function2.c"
    # 1649 "05function2.c"
    if(_if_conditional456=info->in_class&&charp_operator_equals(base_fun_name_469,"initialize"),    _if_conditional456) {
        # 1650 "05function2.c"
        info->in_class=(_Bool)1;
    }
    # 1653 "05function2.c"
    header_buf_478=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value604=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value603=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1653, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1655 "05function2.c"
    buffer_append(header_buf_478,header_head_456,header_tail_477-header_head_456);
    # 1656 "05function2.c"
    buffer_append_char(header_buf_478,0);
    # 1658 "05function2.c"
    version_479=0;
    # 1673 "05function2.c"
    # 1659 "05function2.c"
    if(_if_conditional457=strmemcmp(info->p,"version"),    _if_conditional457) {
        # 1660 "05function2.c"
        info->p+=strlen("version");
        # 1661 "05function2.c"
        skip_spaces_and_lf(info);
        # 1663 "05function2.c"
        n_480=0;
        # 1668 "05function2.c"
        while(_while_condtional51=xisdigit(*info->p),        _while_condtional51) {
            # 1665 "05function2.c"
            n_480=n_480*10+(*info->p-48);
            # 1666 "05function2.c"
            info->p++;
        }
        # 1668 "05function2.c"
        skip_spaces_and_lf(info);
        # 1670 "05function2.c"
        version_479=n_480;
    }
    # 1847 "05function2.c"
    # 1673 "05function2.c"
    if(_if_conditional458=charp_operator_equals(base_fun_name_469,"lambda"),    _if_conditional458) {
        # 1674 "05function2.c"
        block_481=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value605=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1676 "05function2.c"
        # 1677 "05function2.c"
        lambda_num_482++;
        # 1679 "05function2.c"
        fun_name_483=(char*)come_increment_ref_count(((char*)(right_value606=xsprintf("lambda%d",lambda_num_482))));
        right_value606 = come_decrement_ref_count2(right_value606, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1681 "05function2.c"
        result_type_458->mStatic=(_Bool)0;
        # 1686 "05function2.c"
        fun_484=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value611=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value607=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1683, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value608=__builtin_string(fun_name_483)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)0,var_args_476,(struct sBlock*)come_increment_ref_count(block_481),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value609=buffer_to_string(header_buf_478)))),(char*)come_increment_ref_count(((char*)(right_value610=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1688 "05function2.c"
        fun2_485=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value612=__builtin_string(fun_name_483))));
        right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1694 "05function2.c"
        # 1689 "05function2.c"
        if(_if_conditional459=fun2_485==((void*)0)||fun2_485->mExternal,        _if_conditional459) {
            # 1691 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value613=string_clone(fun_name_483)))),(struct sFun*)come_increment_ref_count(fun_484));
            right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1694 "05function2.c"
        base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        # 1695 "05function2.c"
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1695, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value615=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value614=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1695, "sLambdaNode")))),fun_484,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sLambdaNode_sline;
        _inf_value4->sname=(void*)sLambdaNode_sname;
        _inf_value4->terminated=(void*)sLambdaNode_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result210__ = __result_obj__ = ((struct sNode*)(right_value618=_inf_value4));
        come_call_finalizer2(sBlock_finalize,block_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_483 = come_decrement_ref_count2(fun_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result210__;
        come_call_finalizer2(sBlock_finalize,block_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_483 = come_decrement_ref_count2(fun_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1847 "05function2.c"
        # 1697 "05function2.c"
        if(_if_conditional466=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional466) {
            # 1698 "05function2.c"
            none_generics_name_487=(char*)come_increment_ref_count(((char*)(right_value619=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1700 "05function2.c"
            generics_sname_488=(char*)come_increment_ref_count(((char*)(right_value620=__builtin_string(info->sname))));
            right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1701 "05function2.c"
            generics_sline_489=info->sline;
            # 1703 "05function2.c"
            block_490=(char*)come_increment_ref_count(((char*)(right_value621=skip_block(info))));
            right_value621 = come_decrement_ref_count2(right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1705 "05function2.c"
            fun_491=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value627=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value622=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1705, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value623=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value624=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value625=__builtin_string(fun_name_468)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),var_args_476,(char*)come_increment_ref_count(block_490),info,(char*)come_increment_ref_count(((char*)(right_value626=__builtin_string(generics_sname_488)))),generics_sline_489))));
            come_call_finalizer2(sGenericsFun_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1707 "05function2.c"
            fun_name3_492=(char*)come_increment_ref_count(((char*)(right_value628=xsprintf("%s_%s",none_generics_name_487,base_fun_name_469))));
            right_value628 = come_decrement_ref_count2(right_value628, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1709 "05function2.c"
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value632=__builtin_string(fun_name3_492)))),(struct sGenericsFun*)come_increment_ref_count(fun_491));
            right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1711 "05function2.c"
            base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            # 1713 "05function2.c"
            __result225__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_487 = come_decrement_ref_count2(none_generics_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_488 = come_decrement_ref_count2(generics_sname_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_490 = come_decrement_ref_count2(block_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_491, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_492 = come_decrement_ref_count2(fun_name3_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result225__;
            none_generics_name_487 = come_decrement_ref_count2(none_generics_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_488 = come_decrement_ref_count2(generics_sname_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_490 = come_decrement_ref_count2(block_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_491, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_492 = come_decrement_ref_count2(fun_name3_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1847 "05function2.c"
            # 1715 "05function2.c"
            if(_if_conditional489=list$1charph_length(info->method_generics_type_names)>0,            _if_conditional489) {
                # 1716 "05function2.c"
                generics_sname_514=(char*)come_increment_ref_count(((char*)(right_value633=__builtin_string(info->sname))));
                right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1717 "05function2.c"
                generics_sline_515=info->sline;
                # 1719 "05function2.c"
                block_516=(char*)come_increment_ref_count(((char*)(right_value634=skip_block(info))));
                right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1721 "05function2.c"
                fun_517=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value640=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value635=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1721, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value636=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value637=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value638=__builtin_string(fun_name_468)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),var_args_476,(char*)come_increment_ref_count(block_516),info,(char*)come_increment_ref_count(((char*)(right_value639=__builtin_string(generics_sname_514)))),generics_sline_515))));
                come_call_finalizer2(sGenericsFun_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsFun_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1723 "05function2.c"
                fun_name3_518=(char*)come_increment_ref_count(((char*)(right_value641=charp_clone(base_fun_name_469))));
                right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1725 "05function2.c"
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value642=__builtin_string(fun_name3_518)))),(struct sGenericsFun*)come_increment_ref_count(fun_517));
                right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1727 "05function2.c"
                base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1729 "05function2.c"
                __result226__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_514 = come_decrement_ref_count2(generics_sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_516 = come_decrement_ref_count2(block_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,fun_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result226__;
                generics_sname_514 = come_decrement_ref_count2(generics_sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_516 = come_decrement_ref_count2(block_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,fun_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 1847 "05function2.c"
                # 1731 "05function2.c"
                if(_if_conditional490=*info->p==123,                _if_conditional490) {
                    # 1732 "05function2.c"
                    source_tail_519=info->p-1;
                    # 1734 "05function2.c"
                    header_520=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value644=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value643=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1734, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1735 "05function2.c"
                    buffer_append(header_520,source_head_457,source_tail_519-source_head_457);
                    # 1736 "05function2.c"
                    buffer_append_str(header_520,";\n");
                    # 1738 "05function2.c"
                    add_come_code_at_come_header(info,"%s",((char*)(right_value645=buffer_to_string(header_520))));
                    right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1740 "05function2.c"
                    block_521=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value646=parse_block(info,(_Bool)0,constructor__460))));
                    come_call_finalizer2(sBlock_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1742 "05function2.c"
                    static__522=(_Bool)0;
                    # 1748 "05function2.c"
                    # 1743 "05function2.c"
                    if(result_type_458->mStatic) {
                        # 1744 "05function2.c"
                        result_type_458->mStatic=(_Bool)0;
                        # 1745 "05function2.c"
                        static__522=(_Bool)1;
                    }
                    # 1753 "05function2.c"
                    # 1748 "05function2.c"
                    if(_if_conditional492=version_479>0,                    _if_conditional492) {
                        # 1749 "05function2.c"
                        new_fun_name_523=(char*)come_increment_ref_count(((char*)(right_value648=xsprintf("%s_v%d",((char*)(right_value647=__builtin_string(fun_name_468))),version_479))));
                        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1750 "05function2.c"
                        __dec_obj146=fun_name_468;
                        fun_name_468=(char*)come_increment_ref_count(((char*)(right_value649=__builtin_string(new_fun_name_523))));
                        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_523 = come_decrement_ref_count2(new_fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 1760 "05function2.c"
                    fun_524=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value655=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value650=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1753, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value651=__builtin_string(fun_name_468)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)0,var_args_476,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value652=sBlock_clone(block_521)))),static__522,(char*)come_increment_ref_count(((char*)(right_value653=buffer_to_string(header_buf_478)))),(char*)come_increment_ref_count(((char*)(right_value654=__builtin_string(info->sname)))),info))));
                    come_call_finalizer2(sFun_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sBlock_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value653 = come_decrement_ref_count2(right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sFun_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1762 "05function2.c"
                    fun2_525=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value656=__builtin_string(fun_name_468))));
                    right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1769 "05function2.c"
                    # 1763 "05function2.c"
                    if(_if_conditional493=fun2_525==((void*)0)||fun2_525->mExternal,                    _if_conditional493) {
                        # 1765 "05function2.c"
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value657=string_clone(fun_name_468)))),(struct sFun*)come_increment_ref_count(fun_524));
                        right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1769 "05function2.c"
                    base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1770 "05function2.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1770, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value659=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value658=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1770, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_524),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sFunNode_finalize;
                    _inf_value5->clone=(void*)sFunNode_clone;
                    _inf_value5->compile=(void*)sFunNode_compile;
                    _inf_value5->sline=(void*)sFunNode_sline;
                    _inf_value5->sname=(void*)sFunNode_sname;
                    _inf_value5->terminated=(void*)sFunNode_terminated;
                    _inf_value5->kind=(void*)sFunNode_kind;
                    __result229__ = __result_obj__ = ((struct sNode*)(right_value663=_inf_value5));
                    come_call_finalizer2(buffer_finalize,header_520, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,block_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFun_finalize,fun_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFunNode_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sFunNode_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result229__;
                    come_call_finalizer2(buffer_finalize,header_520, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,block_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sFun_finalize,fun_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1847 "05function2.c"
                    # 1772 "05function2.c"
                    if(_if_conditional500=xisalpha(*info->p)||*info->p==95||*info->p==59,                    _if_conditional500) {
                        # 1778 "05function2.c"
                        # 1773 "05function2.c"
                        if(_if_conditional501=version_479>0,                        _if_conditional501) {
                            # 1774 "05function2.c"
                            new_fun_name_527=(char*)come_increment_ref_count(((char*)(right_value664=xsprintf("%s_v%d",fun_name_468,version_479))));
                            right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1775 "05function2.c"
                            __dec_obj149=fun_name_468;
                            fun_name_468=(char*)come_increment_ref_count(((char*)(right_value665=__builtin_string(new_fun_name_527))));
                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_527 = come_decrement_ref_count2(new_fun_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 1841 "05function2.c"
                        # 1778 "05function2.c"
                        if(_if_conditional502=*info->p==59,                        _if_conditional502) {
                            # 1779 "05function2.c"
                            info->p++;
                            # 1780 "05function2.c"
                            skip_spaces_and_lf(info);
                            # 1782 "05function2.c"
                            result_type_458->mStatic=(_Bool)0;
                            # 1788 "05function2.c"
                            fun_528=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value670=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value666=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1784, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value667=__builtin_string(fun_name_468)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)1,var_args_476,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value668=buffer_to_string(header_buf_478)))),(char*)come_increment_ref_count(((char*)(right_value669=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value667 = come_decrement_ref_count2(right_value667, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1790 "05function2.c"
                            fun2_529=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value671=__builtin_string(fun_name_468))));
                            right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1796 "05function2.c"
                            # 1791 "05function2.c"
                            if(_if_conditional503=fun2_529==((void*)0)||fun2_529->mExternal,                            _if_conditional503) {
                                # 1793 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value672=string_clone(fun_name_468)))),(struct sFun*)come_increment_ref_count(fun_528));
                                right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1796 "05function2.c"
                            base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1798 "05function2.c"
                            source_tail_530=info->p;
                            # 1800 "05function2.c"
                            header_531=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value674=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value673=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1800, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1801 "05function2.c"
                            buffer_append(header_531,source_head_457,source_tail_530-source_head_457);
                            # 1803 "05function2.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value675=buffer_to_string(header_531))));
                            right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1805 "05function2.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1805, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value677=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value676=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1805, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_528),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sFunNode_finalize;
                            _inf_value6->clone=(void*)sFunNode_clone;
                            _inf_value6->compile=(void*)sFunNode_compile;
                            _inf_value6->sline=(void*)sFunNode_sline;
                            _inf_value6->sname=(void*)sFunNode_sname;
                            _inf_value6->terminated=(void*)sFunNode_terminated;
                            _inf_value6->kind=(void*)sFunNode_kind;
                            __result232__ = __result_obj__ = ((struct sNode*)(right_value681=_inf_value6));
                            come_call_finalizer2(sFun_finalize,fun_528, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value681) { right_value681 = come_decrement_ref_count2(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result232__;
                            come_call_finalizer2(sFun_finalize,fun_528, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1808 "05function2.c"
                            asm_fun_533=(char*)come_increment_ref_count(((char*)(right_value682=parse_attribute(info))));
                            right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1814 "05function2.c"
                            # 1810 "05function2.c"
                            if(_if_conditional510=string_operator_not_equals(asm_fun_533,""),                            _if_conditional510) {
                                # 1811 "05function2.c"
                                __dec_obj152=fun_name_468;
                                fun_name_468=(char*)come_increment_ref_count(((char*)(right_value683=__builtin_string(asm_fun_533))));
                                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1814 "05function2.c"
                            expected_next_character(59,info);
                            # 1816 "05function2.c"
                            result_type_458->mStatic=(_Bool)0;
                            # 1822 "05function2.c"
                            fun_534=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value688=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value684=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1818, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value685=__builtin_string(fun_name_468)))),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_473),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)1,var_args_476,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value686=buffer_to_string(header_buf_478)))),(char*)come_increment_ref_count(((char*)(right_value687=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1824 "05function2.c"
                            fun2_535=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value689=__builtin_string(fun_name_468))));
                            right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1830 "05function2.c"
                            # 1825 "05function2.c"
                            if(_if_conditional511=fun2_535==((void*)0)||fun2_535->mExternal,                            _if_conditional511) {
                                # 1827 "05function2.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value690=string_clone(fun_name_468)))),(struct sFun*)come_increment_ref_count(fun_534));
                                right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1830 "05function2.c"
                            base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1832 "05function2.c"
                            source_tail_536=info->p;
                            # 1834 "05function2.c"
                            header_537=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value692=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value691=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1834, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1835 "05function2.c"
                            buffer_append(header_537,source_head_457,source_tail_536-source_head_457);
                            # 1837 "05function2.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value693=buffer_to_string(header_537))));
                            right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1839 "05function2.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1839, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value695=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value694=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1839, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_534),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sFunNode_sline;
                            _inf_value7->sname=(void*)sFunNode_sname;
                            _inf_value7->terminated=(void*)sFunNode_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result235__ = __result_obj__ = ((struct sNode*)(right_value699=_inf_value7));
                            asm_fun_533 = come_decrement_ref_count2(asm_fun_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_534, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_537, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value699) { right_value699 = come_decrement_ref_count2(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result235__;
                            asm_fun_533 = come_decrement_ref_count2(asm_fun_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_534, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_537, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 1843 "05function2.c"
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        # 1844 "05function2.c"
                        exit(2);
                    }
                }
            }
        }
    }
    # 1847 "05function2.c"
    base_fun_name_469 = come_decrement_ref_count2(base_fun_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    # 1848 "05function2.c"
    __result236__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer2(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_459 = come_decrement_ref_count2(var_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional453=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional453) {
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional454=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional454) {
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional455=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional455) {
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional460;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sLambdaNode_finalize"
            # 0 "sLambdaNode_finalize"
            if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional460) {
                # 0 "sLambdaNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional461;
struct sLambdaNode* __result208__;
void* right_value616;
struct sLambdaNode* result_486;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
void* right_value617;
char* __dec_obj145;
struct sLambdaNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value616 = (void*)0;
memset(&result_486, 0, sizeof(struct sLambdaNode*));
right_value617 = (void*)0;
            # 3 "sLambdaNode_clone"
            # 2 "sLambdaNode_clone"
            if(_if_conditional461=self==(void*)0,            _if_conditional461) {
                # 2 "sLambdaNode_clone"
                __result208__ = __result_obj__ = (void*)0;
                return __result208__;
            }
            # 3 "sLambdaNode_clone"
            result_486=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value616=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sLambdaNode_clone"
            # 4 "sLambdaNode_clone"
            if(_if_conditional462=self!=((void*)0),            _if_conditional462) {
                # 4 "sLambdaNode_clone"
                result_486->mFun=self->mFun;
            }
            # 6 "sLambdaNode_clone"
            # 5 "sLambdaNode_clone"
            if(_if_conditional463=self!=((void*)0),            _if_conditional463) {
                # 5 "sLambdaNode_clone"
                result_486->sline=self->sline;
            }
            # 7 "sLambdaNode_clone"
            # 6 "sLambdaNode_clone"
            if(_if_conditional464=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional464) {
                # 6 "sLambdaNode_clone"
                __dec_obj145=result_486->sname;
                result_486->sname=(char*)come_increment_ref_count(((char*)(right_value617=string_clone(self->sname))));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value617 = come_decrement_ref_count2(right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sLambdaNode_clone"
            __result209__ = __result_obj__ = result_486;
            come_call_finalizer2(sLambdaNode_finalize,result_486, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result209__;
            come_call_finalizer2(sLambdaNode_finalize,result_486, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional465;
int __result211__;
int __result212__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional465=self==((void*)0),            _if_conditional465) {
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
_Bool _if_conditional467;
unsigned int hash_510;
unsigned int it_511;
_Bool _while_condtional54;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
_Bool same_key_exist_512;
char* it2_513;
_Bool _if_conditional487;
_Bool _if_conditional488;
struct map$2charphsGenericsFunph* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_510, 0, sizeof(unsigned int));
memset(&it_511, 0, sizeof(unsigned int));
memset(&same_key_exist_512, 0, sizeof(_Bool));
memset(&it2_513, 0, sizeof(char*));
                # 1393 "./neo-c.h"
                # 1390 "./neo-c.h"
                if(_if_conditional467=self->len*10>=self->size,                _if_conditional467) {
                    # 1391 "./neo-c.h"
                    map$2charphsGenericsFunph_rehash(self);
                }
                # 1393 "./neo-c.h"
                hash_510=string_get_hash_key(key)%self->size;
                # 1394 "./neo-c.h"
                it_511=hash_510;
                # 1452 "./neo-c.h"
                while(_while_condtional54=(_Bool)1,                _while_condtional54) {
                    # 1450 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional479=self->item_existance[it_511],                    _if_conditional479) {
                        # 1420 "./neo-c.h"
                        # 1399 "./neo-c.h"
                        if(_if_conditional480=string_equals(self->keys[it_511],key),                        _if_conditional480) {
                            # 1410 "./neo-c.h"
                            # 1401 "./neo-c.h"
                            if(_if_conditional481=1,                            _if_conditional481) {
                                # 1402 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_511]);
                                # 1403 "./neo-c.h"
                                self->keys[it_511] = come_decrement_ref_count2(self->keys[it_511], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                # 1404 "./neo-c.h"
                                self->keys[it_511]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                # 1407 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_511]);
                                # 1408 "./neo-c.h"
                                self->keys[it_511]=key;
                            }
                            # 1417 "./neo-c.h"
                            # 1410 "./neo-c.h"
                            if(_if_conditional482=1,                            _if_conditional482) {
                                # 1411 "./neo-c.h"
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_511], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1412 "./neo-c.h"
                                self->items[it_511]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                # 1415 "./neo-c.h"
                                self->items[it_511]=item;
                            }
                            # 1417 "./neo-c.h"
                            break;
                        }
                        # 1420 "./neo-c.h"
                        it_511++;
                        # 1430 "./neo-c.h"
                        # 1422 "./neo-c.h"
                        if(_if_conditional483=it_511>=self->size,                        _if_conditional483) {
                            # 1423 "./neo-c.h"
                            it_511=0;
                        }
                        else {
                            # 1430 "./neo-c.h"
                            # 1425 "./neo-c.h"
                            if(_if_conditional484=it_511==hash_510,                            _if_conditional484) {
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
                        self->item_existance[it_511]=(_Bool)1;
                        # 1439 "./neo-c.h"
                        # 1433 "./neo-c.h"
                        if(_if_conditional485=1,                        _if_conditional485) {
                            # 1434 "./neo-c.h"
                            self->keys[it_511]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1437 "./neo-c.h"
                            self->keys[it_511]=key;
                        }
                        # 1446 "./neo-c.h"
                        # 1439 "./neo-c.h"
                        if(_if_conditional486=1,                        _if_conditional486) {
                            # 1440 "./neo-c.h"
                            self->items[it_511]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1443 "./neo-c.h"
                            self->items[it_511]=item;
                        }
                        # 1446 "./neo-c.h"
                        self->len++;
                        # 1448 "./neo-c.h"
                        break;
                    }
                }
                # 1452 "./neo-c.h"
                same_key_exist_512=(_Bool)0;
                # 1460 "./neo-c.h"
                for(                it2_513=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_513=list$1charp_next(self->key_list)                ){
                    # 1458 "./neo-c.h"
                    # 1455 "./neo-c.h"
                    if(_if_conditional487=string_equals(it2_513,key),                    _if_conditional487) {
                        # 1456 "./neo-c.h"
                        same_key_exist_512=(_Bool)1;
                    }
                }
                # 1464 "./neo-c.h"
                # 1460 "./neo-c.h"
                if(_if_conditional488=!same_key_exist_512,                _if_conditional488) {
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
int size_493;
void* right_value629;
char** keys_494;
void* right_value630;
struct sGenericsFun** items_495;
void* right_value631;
_Bool* item_existance_496;
int len_497;
char* it_500;
struct sGenericsFun* default_value_503;
struct sGenericsFun* it2_506;
unsigned int hash_507;
int n_508;
_Bool _while_condtional53;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
struct sGenericsFun* default_value_509;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_493, 0, sizeof(int));
right_value629 = (void*)0;
memset(&keys_494, 0, sizeof(char**));
right_value630 = (void*)0;
memset(&items_495, 0, sizeof(struct sGenericsFun**));
right_value631 = (void*)0;
memset(&item_existance_496, 0, sizeof(_Bool*));
memset(&len_497, 0, sizeof(int));
memset(&it_500, 0, sizeof(char*));
memset(&default_value_503, 0, sizeof(struct sGenericsFun*));
memset(&it2_506, 0, sizeof(struct sGenericsFun*));
memset(&hash_507, 0, sizeof(unsigned int));
memset(&n_508, 0, sizeof(int));
memset(&default_value_509, 0, sizeof(struct sGenericsFun*));
                        # 1337 "./neo-c.h"
                        size_493=self->size*10;
                        # 1338 "./neo-c.h"
                        keys_494=(char**)come_increment_ref_count(((char**)(right_value629=(char**)come_calloc(1, sizeof(char*)*(1*(size_493)), "./neo-c.h", 1338, "char*%"))));
                        right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1339 "./neo-c.h"
                        items_495=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value630=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_493)), "./neo-c.h", 1339, "sGenericsFun*%"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1340 "./neo-c.h"
                        item_existance_496=(_Bool*)come_increment_ref_count(((_Bool*)(right_value631=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_493)), "./neo-c.h", 1340, "bool"))));
                        right_value631 = come_decrement_ref_count2(right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1342 "./neo-c.h"
                        len_497=0;
                        # 1377 "./neo-c.h"
                        for(                        it_500=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_500=map$2charphsGenericsFunph_next(self)                        ){
                            # 1345 "./neo-c.h"
                            # 1346 "./neo-c.h"
                            memset(&default_value_503,0,sizeof(struct sGenericsFun*));
                            # 1347 "./neo-c.h"
                            it2_506=map$2charphsGenericsFunph_at(self,it_500,default_value_503);
                            # 1348 "./neo-c.h"
                            hash_507=string_get_hash_key(it_500)%size_493;
                            # 1349 "./neo-c.h"
                            n_508=hash_507;
                            # 1375 "./neo-c.h"
                            while(_while_condtional53=(_Bool)1,                            _while_condtional53) {
                                # 1374 "./neo-c.h"
                                # 1352 "./neo-c.h"
                                if(_if_conditional476=item_existance_496[n_508],                                _if_conditional476) {
                                    # 1354 "./neo-c.h"
                                    n_508++;
                                    # 1364 "./neo-c.h"
                                    # 1356 "./neo-c.h"
                                    if(_if_conditional477=n_508>=size_493,                                    _if_conditional477) {
                                        # 1357 "./neo-c.h"
                                        n_508=0;
                                    }
                                    else {
                                        # 1364 "./neo-c.h"
                                        # 1359 "./neo-c.h"
                                        if(_if_conditional478=n_508==hash_507,                                        _if_conditional478) {
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
                                    item_existance_496[n_508]=(_Bool)1;
                                    # 1367 "./neo-c.h"
                                    keys_494[n_508]=it_500;
                                    # 1368 "./neo-c.h"
                                    # 1369 "./neo-c.h"
                                    items_495[n_508]=map$2charphsGenericsFunph_at(self,it_500,default_value_509);
                                    # 1371 "./neo-c.h"
                                    len_497++;
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
                        self->keys=keys_494;
                        # 1382 "./neo-c.h"
                        self->items=items_495;
                        # 1383 "./neo-c.h"
                        self->item_existance=item_existance_496;
                        # 1385 "./neo-c.h"
                        self->size=size_493;
                        # 1386 "./neo-c.h"
                        self->len=len_497;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional468;
char* result_498;
char* __result213__;
_Bool _if_conditional469;
char* __result214__;
char* result_499;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_498, 0, sizeof(char*));
memset(&result_499, 0, sizeof(char*));
                            # 1304 "./neo-c.h"
                            # 1299 "./neo-c.h"
                            if(_if_conditional468=self==((void*)0),                            _if_conditional468) {
                                # 1300 "./neo-c.h"
                                # 1301 "./neo-c.h"
                                memset(&result_498,0,sizeof(char*));
                                # 1302 "./neo-c.h"
                                __result213__ = __result_obj__ = result_498;
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
                            memset(&result_499,0,sizeof(char*));
                            # 1312 "./neo-c.h"
                            __result215__ = __result_obj__ = result_499;
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
_Bool _if_conditional470;
char* result_501;
char* __result217__;
_Bool _if_conditional471;
char* __result218__;
char* result_502;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_501, 0, sizeof(char*));
memset(&result_502, 0, sizeof(char*));
                            # 1321 "./neo-c.h"
                            # 1316 "./neo-c.h"
                            if(_if_conditional470=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional470) {
                                # 1317 "./neo-c.h"
                                # 1318 "./neo-c.h"
                                memset(&result_501,0,sizeof(char*));
                                # 1319 "./neo-c.h"
                                __result217__ = __result_obj__ = result_501;
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
                            memset(&result_502,0,sizeof(char*));
                            # 1329 "./neo-c.h"
                            __result219__ = __result_obj__ = result_502;
                            return __result219__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_504;
unsigned int it_505;
_Bool _while_condtional52;
_Bool _if_conditional472;
_Bool _if_conditional473;
struct sGenericsFun* __result220__;
_Bool _if_conditional474;
_Bool _if_conditional475;
struct sGenericsFun* __result221__;
struct sGenericsFun* __result222__;
struct sGenericsFun* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_504, 0, sizeof(unsigned int));
memset(&it_505, 0, sizeof(unsigned int));
                                # 1226 "./neo-c.h"
                                hash_504=string_get_hash_key(((char*)key))%self->size;
                                # 1227 "./neo-c.h"
                                it_505=hash_504;
                                # 1251 "./neo-c.h"
                                while(_while_condtional52=(_Bool)1,                                _while_condtional52) {
                                    # 1249 "./neo-c.h"
                                    # 1230 "./neo-c.h"
                                    if(_if_conditional472=self->item_existance[it_505],                                    _if_conditional472) {
                                        # 1237 "./neo-c.h"
                                        # 1232 "./neo-c.h"
                                        if(_if_conditional473=string_equals(self->keys[it_505],key),                                        _if_conditional473) {
                                            # 1234 "./neo-c.h"
                                            __result220__ = __result_obj__ = self->items[it_505];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result220__;
                                        }
                                        # 1237 "./neo-c.h"
                                        it_505++;
                                        # 1245 "./neo-c.h"
                                        # 1239 "./neo-c.h"
                                        if(_if_conditional474=it_505>=self->size,                                        _if_conditional474) {
                                            # 1240 "./neo-c.h"
                                            it_505=0;
                                        }
                                        else {
                                            # 1245 "./neo-c.h"
                                            # 1242 "./neo-c.h"
                                            if(_if_conditional475=it_505==hash_504,                                            _if_conditional475) {
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
char* last_code_539;
char* __dec_obj155;
char* last_code2_540;
char* __dec_obj156;
char* last_code3_541;
char* __dec_obj157;
struct sClass* current_stack_frame_struct_542;
struct sFun* finalizer_543;
void* right_value700;
char* real_fun_name_544;
void* right_value701;
struct sType* type2_545;
struct sClass* klass_546;
_Bool _if_conditional518;
void* right_value702;
void* right_value703;
struct buffer* source_547;
struct list$1tuple2$2charphsTypephph* o2_saved_548;
struct tuple2$2charphsTypeph* it_551;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_554;
struct sType* field_type_555;
_Bool _if_conditional523;
_Bool _if_conditional524;
char* p_557;
int sline_558;
char* sname_559;
char* head_560;
struct buffer* source3_561;
struct buffer* __dec_obj158;
void* right_value704;
char* __dec_obj159;
void* right_value705;
struct sBlock* block_562;
void* right_value706;
void* right_value707;
struct sType* result_type_563;
void* right_value708;
char* name_564;
void* right_value709;
struct sType* self_type_565;
_Bool _if_conditional525;
struct sType* __list_values21___566[1];
void* right_value710;
void* right_value711;
struct list$1sTypeph* param_types_567;
void* right_value712;
char* __list_values22___568[1];
void* right_value713;
void* right_value714;
struct list$1charph* param_names_569;
void* right_value715;
void* right_value716;
struct list$1charph* param_default_parametors_570;
void* right_value717;
void* right_value718;
struct buffer* header_buf_571;
void* right_value719;
int i_572;
struct sType* param_type_573;
char* param_name_577;
void* right_value720;
_Bool _if_conditional529;
void* right_value721;
void* right_value722;
void* right_value723;
void* right_value724;
struct sFun* fun_578;
void* right_value725;
struct sFun* fun2_579;
_Bool _if_conditional530;
void* right_value726;
void* right_value727;
void* right_value728;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value732;
struct sNode* node_581;
_Bool _if_conditional537;
struct buffer* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
void* right_value733;
void* right_value734;
struct tuple2$2sFunpcharph* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_539, 0, sizeof(char*));
memset(&last_code2_540, 0, sizeof(char*));
memset(&last_code3_541, 0, sizeof(char*));
memset(&current_stack_frame_struct_542, 0, sizeof(struct sClass*));
memset(&finalizer_543, 0, sizeof(struct sFun*));
right_value700 = (void*)0;
memset(&real_fun_name_544, 0, sizeof(char*));
right_value701 = (void*)0;
memset(&type2_545, 0, sizeof(struct sType*));
memset(&klass_546, 0, sizeof(struct sClass*));
right_value702 = (void*)0;
right_value703 = (void*)0;
memset(&source_547, 0, sizeof(struct buffer*));
memset(&o2_saved_548, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_551, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_554, 0, sizeof(char*));
memset(&field_type_555, 0, sizeof(struct sType*));
memset(&name_554, 0, sizeof(char*));
memset(&field_type_555, 0, sizeof(struct sType*));
memset(&p_557, 0, sizeof(char*));
memset(&sline_558, 0, sizeof(int));
memset(&sname_559, 0, sizeof(char*));
memset(&head_560, 0, sizeof(char*));
memset(&source3_561, 0, sizeof(struct buffer*));
right_value704 = (void*)0;
right_value705 = (void*)0;
memset(&block_562, 0, sizeof(struct sBlock*));
right_value706 = (void*)0;
right_value707 = (void*)0;
memset(&result_type_563, 0, sizeof(struct sType*));
right_value708 = (void*)0;
memset(&name_564, 0, sizeof(char*));
right_value709 = (void*)0;
memset(&self_type_565, 0, sizeof(struct sType*));
right_value710 = (void*)0;
right_value711 = (void*)0;
memset(&param_types_567, 0, sizeof(struct list$1sTypeph*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
memset(&param_names_569, 0, sizeof(struct list$1charph*));
right_value715 = (void*)0;
right_value716 = (void*)0;
memset(&param_default_parametors_570, 0, sizeof(struct list$1charph*));
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&header_buf_571, 0, sizeof(struct buffer*));
right_value719 = (void*)0;
memset(&i_572, 0, sizeof(int));
memset(&param_type_573, 0, sizeof(struct sType*));
memset(&param_name_577, 0, sizeof(char*));
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
memset(&fun_578, 0, sizeof(struct sFun*));
right_value725 = (void*)0;
memset(&fun2_579, 0, sizeof(struct sFun*));
right_value726 = (void*)0;
right_value727 = (void*)0;
right_value728 = (void*)0;
right_value732 = (void*)0;
memset(&node_581, 0, sizeof(struct sNode*));
right_value733 = (void*)0;
right_value734 = (void*)0;
    # 1853 "05function2.c"
    last_code_539=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1854 "05function2.c"
    __dec_obj155=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1855 "05function2.c"
    last_code2_540=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1856 "05function2.c"
    __dec_obj156=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1857 "05function2.c"
    last_code3_541=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1859 "05function2.c"
    __dec_obj157=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1861 "05function2.c"
    current_stack_frame_struct_542=info->current_stack_frame_struct;
    # 1862 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 1864 "05function2.c"
    finalizer_543=((void*)0);
    # 1866 "05function2.c"
    real_fun_name_544=(char*)come_increment_ref_count(((char*)(right_value700=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1868 "05function2.c"
    type2_545=(struct sType*)come_increment_ref_count(((struct sType*)(right_value701=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1870 "05function2.c"
    type=type2_545;
    # 1872 "05function2.c"
    klass_546=type->mClass;
    # 1979 "05function2.c"
    # 1874 "05function2.c"
    if(_if_conditional518=type->mPointerNum>0&&klass_546->mStruct,    _if_conditional518) {
        # 1875 "05function2.c"
        source_547=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value703=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value702=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1875, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1877 "05function2.c"
        buffer_append_char(source_547,123);
        # 1879 "05function2.c"
        klass_546=map$2charphsClassphp_operator_load_element(info->classes,klass_546->mName);
        # 1897 "05function2.c"
        for(        o2_saved_548=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_546->mFields)),it_551=list$1tuple2$2charphsTypephph_begin((o2_saved_548));        !list$1tuple2$2charphsTypephph_end((o2_saved_548));        it_551=list$1tuple2$2charphsTypephph_next((o2_saved_548))        ){
            # 1881 "05function2.c"
            multiple_assign_var10=it_551;
            name_554=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_555=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            # 1889 "05function2.c"
            # 1883 "05function2.c"
            if(_if_conditional523=string_operator_equals(type->mClass->mName,field_type_555->mClass->mName)&&type->mPointerNum==field_type_555->mPointerNum&&field_type_555->mHeap,            _if_conditional523) {
                # 1885 "05function2.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 1886 "05function2.c"
                exit(2);
            }
            # 1895 "05function2.c"
            # 1889 "05function2.c"
            if(field_type_555->mHeap) {
                # 1890 "05function2.c"
                char source2_556[1024];
                memset(&source2_556, 0, sizeof(char)                *(1024)                );
                # 1891 "05function2.c"
                snprintf(source2_556,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_554,name_554);
                # 1893 "05function2.c"
                buffer_append_str(source_547,source2_556);
            }
            name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_548, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1897 "05function2.c"
        buffer_append_char(source_547,125);
        # 1899 "05function2.c"
        p_557=info->p;
        # 1900 "05function2.c"
        sline_558=info->sline;
        # 1901 "05function2.c"
        sname_559=(char*)come_increment_ref_count(info->sname);
        # 1902 "05function2.c"
        head_560=info->head;
        # 1903 "05function2.c"
        source3_561=(struct buffer*)come_increment_ref_count(info->source);
        # 1905 "05function2.c"
        __dec_obj158=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_547);
        come_call_finalizer2(buffer_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1906 "05function2.c"
        info->p=source_547->buf;
        # 1907 "05function2.c"
        info->head=source_547->buf;
        # 1909 "05function2.c"
        __dec_obj159=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value704=__builtin_string(real_fun_name_544))));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1910 "05function2.c"
        info->sline=0;
        # 1912 "05function2.c"
        block_562=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value705=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1914 "05function2.c"
        result_type_563=(struct sType*)come_increment_ref_count(((struct sType*)(right_value707=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value706=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1914, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1915 "05function2.c"
        name_564=(char*)come_increment_ref_count(((char*)(right_value708=string_clone(real_fun_name_544))));
        right_value708 = come_decrement_ref_count2(right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1916 "05function2.c"
        self_type_565=(struct sType*)come_increment_ref_count(((struct sType*)(right_value709=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1917 "05function2.c"
        self_type_565->mHeap=(_Bool)0;
        # 1921 "05function2.c"
        # 1918 "05function2.c"
        if(_if_conditional525=self_type_565->mPointerNum>1,        _if_conditional525) {
            # 1919 "05function2.c"
            self_type_565->mPointerNum=1;
        }
        # 1921 "05function2.c"
        {__list_values21___566[0]=come_increment_ref_count(self_type_565);
}        param_types_567=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value711=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value710=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1921, "struct list$1sTypeph")))),1,__list_values21___566))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1922 "05function2.c"
        {__list_values22___568[0]=come_increment_ref_count(((char*)(right_value712=__builtin_string("self"))));
}        param_names_569=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value714=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value713=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1922, "struct list$1charph")))),1,__list_values22___568))));
        right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1923 "05function2.c"
        param_default_parametors_570=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value716=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value715=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1923, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1924 "05function2.c"
        list$1charph_push_back(param_default_parametors_570,((void*)0));
        # 1926 "05function2.c"
        header_buf_571=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value718=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value717=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1926, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1928 "05function2.c"
        buffer_append_str(header_buf_571,((char*)(right_value719=make_come_type_name_string(result_type_563,info))));
        right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1929 "05function2.c"
        buffer_append_str(header_buf_571," ");
        # 1930 "05function2.c"
        buffer_append_str(header_buf_571,real_fun_name_544);
        # 1931 "05function2.c"
        buffer_append_str(header_buf_571,"(");
        # 1945 "05function2.c"
        for(        i_572=0;        i_572<list$1sTypeph_length(param_types_567);        i_572++        ){
            # 1934 "05function2.c"
            param_type_573=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_567,i_572), "05function2.c", 1934, 1));
            # 1935 "05function2.c"
            param_name_577=((char*)come_null_check(list$1charphp_operator_load_element(param_names_569,i_572), "05function2.c", 1935, 2));
            # 1937 "05function2.c"
            buffer_append_str(header_buf_571,((char*)(right_value720=make_come_type_name_string(param_type_573,info))));
            right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1938 "05function2.c"
            buffer_append_str(header_buf_571," ");
            # 1939 "05function2.c"
            buffer_append_str(header_buf_571,param_name_577);
            # 1944 "05function2.c"
            # 1941 "05function2.c"
            if(_if_conditional529=i_572!=list$1sTypeph_length(param_types_567)-1,            _if_conditional529) {
                # 1942 "05function2.c"
                buffer_append_str(header_buf_571,",");
            }
        }
        # 1945 "05function2.c"
        buffer_append_str(header_buf_571,")");
        # 1947 "05function2.c"
        result_type_563->mStatic=(_Bool)0;
        # 1955 "05function2.c"
        fun_578=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value724=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value721=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1949, "sFun")))),(char*)come_increment_ref_count(name_564),(struct sType*)come_increment_ref_count(result_type_563),(struct list$1sTypeph*)come_increment_ref_count(param_types_567),(struct list$1charph*)come_increment_ref_count(param_names_569),(struct list$1charph*)come_increment_ref_count(param_default_parametors_570),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_562),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value722=buffer_to_string(header_buf_571)))),(char*)come_increment_ref_count(((char*)(right_value723=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1957 "05function2.c"
        fun2_579=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value725=__builtin_string(fun_name))));
        right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1963 "05function2.c"
        # 1958 "05function2.c"
        if(_if_conditional530=fun2_579==((void*)0)||fun2_579->mExternal,        _if_conditional530) {
            # 1960 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value726=string_clone(name_564)))),(struct sFun*)come_increment_ref_count(fun_578));
            right_value726 = come_decrement_ref_count2(right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1963 "05function2.c"
        finalizer_543=fun_578;
        # 1965 "05function2.c"
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1965, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value728=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value727=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1965, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_578),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_581=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value732=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value732) { right_value732 = come_decrement_ref_count2(right_value732, ((struct sNode*)right_value732)->finalize, ((struct sNode*)right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1972 "05function2.c"
        # 1967 "05function2.c"
        if(_if_conditional537=!node_compile(node_581,info),        _if_conditional537) {
            # 1968 "05function2.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 1969 "05function2.c"
            exit(2);
        }
        # 1972 "05function2.c"
        __dec_obj162=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_561);
        come_call_finalizer2(buffer_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1973 "05function2.c"
        info->p=p_557;
        # 1974 "05function2.c"
        info->head=head_560;
        # 1975 "05function2.c"
        info->sline=sline_558;
        # 1976 "05function2.c"
        __dec_obj163=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_559);
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_547, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_559 = come_decrement_ref_count2(sname_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_561, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_563, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_565, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_567, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_569, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_571, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_578, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_581) { node_581 = come_decrement_ref_count2(node_581, ((struct sNode*)node_581)->finalize, ((struct sNode*)node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1979 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_542;
    # 1981 "05function2.c"
    __dec_obj164=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_539);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1982 "05function2.c"
    __dec_obj165=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_540);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1983 "05function2.c"
    __dec_obj166=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_541);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1985 "05function2.c"
    __result251__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value734=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value733=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1985, "struct tuple2$2sFunpcharph")))),finalizer_543,(char*)come_increment_ref_count(real_fun_name_544))));
    last_code_539 = come_decrement_ref_count2(last_code_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_540 = come_decrement_ref_count2(last_code2_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_541 = come_decrement_ref_count2(last_code3_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_544 = come_decrement_ref_count2(real_fun_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_545, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value734, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result251__;
    last_code_539 = come_decrement_ref_count2(last_code_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_540 = come_decrement_ref_count2(last_code2_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_541 = come_decrement_ref_count2(last_code3_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_544 = come_decrement_ref_count2(real_fun_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_545, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional519;
struct tuple2$2charphsTypeph* result_549;
struct tuple2$2charphsTypeph* __result237__;
_Bool _if_conditional520;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_550;
struct tuple2$2charphsTypeph* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_549, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_550, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional519=self==((void*)0),            _if_conditional519) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_549,0,sizeof(struct tuple2$2charphsTypeph*));
                # 288 "./neo-c.h"
                __result237__ = __result_obj__ = result_549;
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
            memset(&result_550,0,sizeof(struct tuple2$2charphsTypeph*));
            # 298 "./neo-c.h"
            __result239__ = __result_obj__ = result_550;
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
_Bool _if_conditional521;
struct tuple2$2charphsTypeph* result_552;
struct tuple2$2charphsTypeph* __result241__;
_Bool _if_conditional522;
struct tuple2$2charphsTypeph* __result242__;
struct tuple2$2charphsTypeph* result_553;
struct tuple2$2charphsTypeph* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_552, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_553, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional521=self==((void*)0)||self->it==((void*)0),            _if_conditional521) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_552,0,sizeof(struct tuple2$2charphsTypeph*));
                # 305 "./neo-c.h"
                __result241__ = __result_obj__ = result_552;
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
            memset(&result_553,0,sizeof(struct tuple2$2charphsTypeph*));
            # 316 "./neo-c.h"
            __result243__ = __result_obj__ = result_553;
            return __result243__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional526;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional526=self==((void*)0),            _if_conditional526) {
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
_Bool _if_conditional527;
struct list_item$1charph* it_574;
int i_575;
_Bool _while_condtional55;
_Bool _if_conditional528;
char* __result246__;
char* default_value_576;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_574, 0, sizeof(struct list_item$1charph*));
memset(&i_575, 0, sizeof(int));
memset(&default_value_576, 0, sizeof(char*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional527=position<0,                _if_conditional527) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_574=self->head;
                # 687 "./neo-c.h"
                i_575=0;
                # 694 "./neo-c.h"
                while(_while_condtional55=it_574!=((void*)0),                _while_condtional55) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional528=position==i_575,                    _if_conditional528) {
                        # 690 "./neo-c.h"
                        __result246__ = __result_obj__ = it_574->item;
                        return __result246__;
                    }
                    # 692 "./neo-c.h"
                    it_574=it_574->next;
                    # 693 "./neo-c.h"
                    i_575++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_576,0,sizeof(char*));
                # 698 "./neo-c.h"
                __result247__ = __result_obj__ = default_value_576;
                default_value_576 = come_decrement_ref_count2(default_value_576, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result247__;
                default_value_576 = come_decrement_ref_count2(default_value_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj167;
struct tuple2$2sFunpcharph* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1767 "./neo-c.h"
        self->v1=v1;
        # 1768 "./neo-c.h"
        __dec_obj167=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional538;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sFunpcharphp_finalize"
            # 0 "tuple2$2sFunpcharphp_finalize"
            if(_if_conditional538=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional538) {
                # 0 "tuple2$2sFunpcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_582;
char* __dec_obj168;
char* last_code2_583;
char* __dec_obj169;
char* last_code3_584;
char* __dec_obj170;
struct sClass* current_stack_frame_struct_585;
struct sFun* finalizer_586;
void* right_value735;
char* real_fun_name_587;
void* right_value736;
struct sType* type2_588;
struct sClass* klass_589;
_Bool _if_conditional539;
void* right_value737;
void* right_value738;
struct buffer* source_590;
struct list$1tuple2$2charphsTypephph* o2_saved_591;
struct tuple2$2charphsTypeph* it_592;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_593;
struct sType* field_type_594;
_Bool _if_conditional540;
_Bool _if_conditional541;
char* p_596;
int sline_597;
char* sname_598;
char* head_599;
struct buffer* source3_600;
struct buffer* __dec_obj171;
void* right_value739;
char* __dec_obj172;
void* right_value740;
struct sBlock* block_601;
void* right_value741;
void* right_value742;
struct sType* result_type_602;
void* right_value743;
char* name_603;
void* right_value744;
struct sType* self_type_604;
_Bool _if_conditional542;
struct sType* __list_values23___605[1];
void* right_value745;
void* right_value746;
struct list$1sTypeph* param_types_606;
void* right_value747;
char* __list_values24___607[1];
void* right_value748;
void* right_value749;
struct list$1charph* param_names_608;
void* right_value750;
void* right_value751;
struct list$1charph* param_default_parametors_609;
void* right_value752;
void* right_value753;
struct buffer* header_buf_610;
void* right_value754;
int i_611;
struct sType* param_type_612;
char* param_name_613;
void* right_value755;
_Bool _if_conditional543;
void* right_value756;
void* right_value757;
void* right_value758;
void* right_value759;
struct sFun* fun_614;
void* right_value760;
struct sFun* fun2_615;
_Bool _if_conditional544;
void* right_value761;
void* right_value762;
void* right_value763;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value767;
struct sNode* node_617;
_Bool _if_conditional551;
struct buffer* __dec_obj175;
char* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
void* right_value768;
void* right_value769;
struct tuple2$2sFunpcharph* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_582, 0, sizeof(char*));
memset(&last_code2_583, 0, sizeof(char*));
memset(&last_code3_584, 0, sizeof(char*));
memset(&current_stack_frame_struct_585, 0, sizeof(struct sClass*));
memset(&finalizer_586, 0, sizeof(struct sFun*));
right_value735 = (void*)0;
memset(&real_fun_name_587, 0, sizeof(char*));
right_value736 = (void*)0;
memset(&type2_588, 0, sizeof(struct sType*));
memset(&klass_589, 0, sizeof(struct sClass*));
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&source_590, 0, sizeof(struct buffer*));
memset(&o2_saved_591, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_592, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_593, 0, sizeof(char*));
memset(&field_type_594, 0, sizeof(struct sType*));
memset(&name_593, 0, sizeof(char*));
memset(&field_type_594, 0, sizeof(struct sType*));
memset(&p_596, 0, sizeof(char*));
memset(&sline_597, 0, sizeof(int));
memset(&sname_598, 0, sizeof(char*));
memset(&head_599, 0, sizeof(char*));
memset(&source3_600, 0, sizeof(struct buffer*));
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&block_601, 0, sizeof(struct sBlock*));
right_value741 = (void*)0;
right_value742 = (void*)0;
memset(&result_type_602, 0, sizeof(struct sType*));
right_value743 = (void*)0;
memset(&name_603, 0, sizeof(char*));
right_value744 = (void*)0;
memset(&self_type_604, 0, sizeof(struct sType*));
right_value745 = (void*)0;
right_value746 = (void*)0;
memset(&param_types_606, 0, sizeof(struct list$1sTypeph*));
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
memset(&param_names_608, 0, sizeof(struct list$1charph*));
right_value750 = (void*)0;
right_value751 = (void*)0;
memset(&param_default_parametors_609, 0, sizeof(struct list$1charph*));
right_value752 = (void*)0;
right_value753 = (void*)0;
memset(&header_buf_610, 0, sizeof(struct buffer*));
right_value754 = (void*)0;
memset(&i_611, 0, sizeof(int));
memset(&param_type_612, 0, sizeof(struct sType*));
memset(&param_name_613, 0, sizeof(char*));
right_value755 = (void*)0;
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
memset(&fun_614, 0, sizeof(struct sFun*));
right_value760 = (void*)0;
memset(&fun2_615, 0, sizeof(struct sFun*));
right_value761 = (void*)0;
right_value762 = (void*)0;
right_value763 = (void*)0;
right_value767 = (void*)0;
memset(&node_617, 0, sizeof(struct sNode*));
right_value768 = (void*)0;
right_value769 = (void*)0;
    # 1990 "05function2.c"
    last_code_582=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1991 "05function2.c"
    __dec_obj168=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1992 "05function2.c"
    last_code2_583=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1993 "05function2.c"
    __dec_obj169=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1994 "05function2.c"
    last_code3_584=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1996 "05function2.c"
    __dec_obj170=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1998 "05function2.c"
    current_stack_frame_struct_585=info->current_stack_frame_struct;
    # 1999 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2001 "05function2.c"
    finalizer_586=((void*)0);
    # 2003 "05function2.c"
    real_fun_name_587=(char*)come_increment_ref_count(((char*)(right_value735=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value735 = come_decrement_ref_count2(right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2005 "05function2.c"
    type2_588=(struct sType*)come_increment_ref_count(((struct sType*)(right_value736=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2007 "05function2.c"
    type=type2_588;
    # 2009 "05function2.c"
    klass_589=type->mClass;
    # 2116 "05function2.c"
    # 2011 "05function2.c"
    if(_if_conditional539=type->mPointerNum>0&&klass_589->mStruct,    _if_conditional539) {
        # 2012 "05function2.c"
        source_590=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value738=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value737=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2012, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2014 "05function2.c"
        buffer_append_char(source_590,123);
        # 2016 "05function2.c"
        klass_589=map$2charphsClassphp_operator_load_element(info->classes,klass_589->mName);
        # 2034 "05function2.c"
        for(        o2_saved_591=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_589->mFields)),it_592=list$1tuple2$2charphsTypephph_begin((o2_saved_591));        !list$1tuple2$2charphsTypephph_end((o2_saved_591));        it_592=list$1tuple2$2charphsTypephph_next((o2_saved_591))        ){
            # 2018 "05function2.c"
            multiple_assign_var11=it_592;
            name_593=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_594=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            # 2026 "05function2.c"
            # 2020 "05function2.c"
            if(_if_conditional540=string_operator_equals(type->mClass->mName,field_type_594->mClass->mName)&&type->mPointerNum==field_type_594->mPointerNum&&field_type_594->mHeap,            _if_conditional540) {
                # 2022 "05function2.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 2023 "05function2.c"
                exit(2);
            }
            # 2032 "05function2.c"
            # 2026 "05function2.c"
            if(field_type_594->mHeap) {
                # 2027 "05function2.c"
                char source2_595[1024];
                memset(&source2_595, 0, sizeof(char)                *(1024)                );
                # 2028 "05function2.c"
                snprintf(source2_595,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_593,name_593);
                # 2030 "05function2.c"
                buffer_append_str(source_590,source2_595);
            }
            name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_594, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_591, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2034 "05function2.c"
        buffer_append_char(source_590,125);
        # 2036 "05function2.c"
        p_596=info->p;
        # 2037 "05function2.c"
        sline_597=info->sline;
        # 2038 "05function2.c"
        sname_598=(char*)come_increment_ref_count(info->sname);
        # 2039 "05function2.c"
        head_599=info->head;
        # 2040 "05function2.c"
        source3_600=(struct buffer*)come_increment_ref_count(info->source);
        # 2042 "05function2.c"
        __dec_obj171=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_590);
        come_call_finalizer2(buffer_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2043 "05function2.c"
        info->p=source_590->buf;
        # 2044 "05function2.c"
        info->head=source_590->buf;
        # 2046 "05function2.c"
        __dec_obj172=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value739=__builtin_string(real_fun_name_587))));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2047 "05function2.c"
        info->sline=0;
        # 2049 "05function2.c"
        block_601=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value740=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2051 "05function2.c"
        result_type_602=(struct sType*)come_increment_ref_count(((struct sType*)(right_value742=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value741=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2051, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2052 "05function2.c"
        name_603=(char*)come_increment_ref_count(((char*)(right_value743=string_clone(real_fun_name_587))));
        right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2053 "05function2.c"
        self_type_604=(struct sType*)come_increment_ref_count(((struct sType*)(right_value744=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "05function2.c"
        self_type_604->mHeap=(_Bool)0;
        # 2058 "05function2.c"
        # 2055 "05function2.c"
        if(_if_conditional542=self_type_604->mPointerNum>1,        _if_conditional542) {
            # 2056 "05function2.c"
            self_type_604->mPointerNum=1;
        }
        # 2058 "05function2.c"
        {__list_values23___605[0]=come_increment_ref_count(self_type_604);
}        param_types_606=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value746=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value745=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2058, "struct list$1sTypeph")))),1,__list_values23___605))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2059 "05function2.c"
        {__list_values24___607[0]=come_increment_ref_count(((char*)(right_value747=__builtin_string("self"))));
}        param_names_608=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value749=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value748=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2059, "struct list$1charph")))),1,__list_values24___607))));
        right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value748, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2060 "05function2.c"
        param_default_parametors_609=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value751=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value750=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2060, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2061 "05function2.c"
        list$1charph_push_back(param_default_parametors_609,((void*)0));
        # 2063 "05function2.c"
        header_buf_610=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value753=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value752=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2063, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2065 "05function2.c"
        buffer_append_str(header_buf_610,((char*)(right_value754=make_come_type_name_string(result_type_602,info))));
        right_value754 = come_decrement_ref_count2(right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2066 "05function2.c"
        buffer_append_str(header_buf_610," ");
        # 2067 "05function2.c"
        buffer_append_str(header_buf_610,real_fun_name_587);
        # 2068 "05function2.c"
        buffer_append_str(header_buf_610,"(");
        # 2082 "05function2.c"
        for(        i_611=0;        i_611<list$1sTypeph_length(param_types_606);        i_611++        ){
            # 2071 "05function2.c"
            param_type_612=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_606,i_611), "05function2.c", 2071, 3));
            # 2072 "05function2.c"
            param_name_613=((char*)come_null_check(list$1charphp_operator_load_element(param_names_608,i_611), "05function2.c", 2072, 4));
            # 2074 "05function2.c"
            buffer_append_str(header_buf_610,((char*)(right_value755=make_come_type_name_string(param_type_612,info))));
            right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2075 "05function2.c"
            buffer_append_str(header_buf_610," ");
            # 2076 "05function2.c"
            buffer_append_str(header_buf_610,param_name_613);
            # 2081 "05function2.c"
            # 2078 "05function2.c"
            if(_if_conditional543=i_611!=list$1sTypeph_length(param_types_606)-1,            _if_conditional543) {
                # 2079 "05function2.c"
                buffer_append_str(header_buf_610,",");
            }
        }
        # 2082 "05function2.c"
        buffer_append_str(header_buf_610,")");
        # 2084 "05function2.c"
        result_type_602->mStatic=(_Bool)0;
        # 2092 "05function2.c"
        fun_614=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value759=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value756=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2086, "sFun")))),(char*)come_increment_ref_count(name_603),(struct sType*)come_increment_ref_count(result_type_602),(struct list$1sTypeph*)come_increment_ref_count(param_types_606),(struct list$1charph*)come_increment_ref_count(param_names_608),(struct list$1charph*)come_increment_ref_count(param_default_parametors_609),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_601),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value757=buffer_to_string(header_buf_610)))),(char*)come_increment_ref_count(((char*)(right_value758=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value757 = come_decrement_ref_count2(right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value759, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2094 "05function2.c"
        fun2_615=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value760=__builtin_string(fun_name))));
        right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2100 "05function2.c"
        # 2095 "05function2.c"
        if(_if_conditional544=fun2_615==((void*)0)||fun2_615->mExternal,        _if_conditional544) {
            # 2097 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value761=string_clone(name_603)))),(struct sFun*)come_increment_ref_count(fun_614));
            right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2100 "05function2.c"
        finalizer_586=fun_614;
        # 2102 "05function2.c"
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2102, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value763=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value762=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2102, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_614),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_617=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value767=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value767) { right_value767 = come_decrement_ref_count2(right_value767, ((struct sNode*)right_value767)->finalize, ((struct sNode*)right_value767)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2109 "05function2.c"
        # 2104 "05function2.c"
        if(_if_conditional551=!node_compile(node_617,info),        _if_conditional551) {
            # 2105 "05function2.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 2106 "05function2.c"
            exit(2);
        }
        # 2109 "05function2.c"
        __dec_obj175=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_600);
        come_call_finalizer2(buffer_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2110 "05function2.c"
        info->p=p_596;
        # 2111 "05function2.c"
        info->head=head_599;
        # 2112 "05function2.c"
        info->sline=sline_597;
        # 2113 "05function2.c"
        __dec_obj176=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_598);
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_590, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_598 = come_decrement_ref_count2(sname_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_600, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_601, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_603 = come_decrement_ref_count2(name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_604, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_606, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_608, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_609, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_610, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_614, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_617) { node_617 = come_decrement_ref_count2(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2116 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_585;
    # 2118 "05function2.c"
    __dec_obj177=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_582);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2119 "05function2.c"
    __dec_obj178=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_583);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2120 "05function2.c"
    __dec_obj179=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_584);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2122 "05function2.c"
    __result254__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value769=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value768=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2122, "struct tuple2$2sFunpcharph")))),finalizer_586,(char*)come_increment_ref_count(real_fun_name_587))));
    last_code_582 = come_decrement_ref_count2(last_code_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_583 = come_decrement_ref_count2(last_code2_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_584 = come_decrement_ref_count2(last_code3_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_587 = come_decrement_ref_count2(real_fun_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_588, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value768 = come_decrement_ref_count2(right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result254__;
    last_code_582 = come_decrement_ref_count2(last_code_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_583 = come_decrement_ref_count2(last_code2_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_584 = come_decrement_ref_count2(last_code3_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_587 = come_decrement_ref_count2(real_fun_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_588, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_618;
char* __dec_obj180;
char* last_code2_619;
char* __dec_obj181;
char* last_code3_620;
char* __dec_obj182;
struct sClass* current_stack_frame_struct_621;
struct sFun* equaler_622;
void* right_value770;
char* real_fun_name_623;
void* right_value771;
struct sType* type2_624;
struct sClass* klass_625;
_Bool _if_conditional552;
void* right_value772;
void* right_value773;
struct buffer* source_626;
_Bool _if_conditional553;
char* name_627;
struct list$1tuple2$2charphsTypephph* o2_saved_629;
struct tuple2$2charphsTypeph* it_630;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_631;
struct sType* field_type_632;
_Bool _if_conditional554;
char* p_634;
int sline_635;
char* sname_636;
char* head_637;
struct buffer* source3_638;
struct buffer* __dec_obj183;
void* right_value774;
char* __dec_obj184;
void* right_value775;
struct sBlock* block_639;
void* right_value776;
void* right_value777;
struct sType* result_type_640;
void* right_value778;
char* name_641;
void* right_value779;
struct sType* left_type_642;
void* right_value780;
struct sType* right_type_643;
struct sType* __list_values25___644[2];
void* right_value781;
void* right_value782;
struct list$1sTypeph* param_types_645;
void* right_value783;
void* right_value784;
char* __list_values26___646[2];
void* right_value785;
void* right_value786;
struct list$1charph* param_names_647;
void* right_value787;
void* right_value788;
struct list$1charph* param_default_parametors_648;
void* right_value789;
void* right_value790;
struct buffer* header_buf_649;
void* right_value791;
int i_650;
struct sType* param_type_651;
char* param_name_652;
void* right_value792;
_Bool _if_conditional555;
void* right_value793;
void* right_value794;
void* right_value795;
void* right_value796;
struct sFun* fun_653;
void* right_value797;
struct sFun* fun2_654;
_Bool _if_conditional556;
void* right_value798;
void* right_value799;
void* right_value800;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value804;
struct sNode* node_656;
_Bool _if_conditional563;
struct buffer* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* right_value805;
void* right_value806;
struct tuple2$2sFunpcharph* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_618, 0, sizeof(char*));
memset(&last_code2_619, 0, sizeof(char*));
memset(&last_code3_620, 0, sizeof(char*));
memset(&current_stack_frame_struct_621, 0, sizeof(struct sClass*));
memset(&equaler_622, 0, sizeof(struct sFun*));
right_value770 = (void*)0;
memset(&real_fun_name_623, 0, sizeof(char*));
right_value771 = (void*)0;
memset(&type2_624, 0, sizeof(struct sType*));
memset(&klass_625, 0, sizeof(struct sClass*));
right_value772 = (void*)0;
right_value773 = (void*)0;
memset(&source_626, 0, sizeof(struct buffer*));
memset(&name_627, 0, sizeof(char*));
memset(&o2_saved_629, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_630, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_631, 0, sizeof(char*));
memset(&field_type_632, 0, sizeof(struct sType*));
memset(&name_631, 0, sizeof(char*));
memset(&field_type_632, 0, sizeof(struct sType*));
memset(&p_634, 0, sizeof(char*));
memset(&sline_635, 0, sizeof(int));
memset(&sname_636, 0, sizeof(char*));
memset(&head_637, 0, sizeof(char*));
memset(&source3_638, 0, sizeof(struct buffer*));
right_value774 = (void*)0;
right_value775 = (void*)0;
memset(&block_639, 0, sizeof(struct sBlock*));
right_value776 = (void*)0;
right_value777 = (void*)0;
memset(&result_type_640, 0, sizeof(struct sType*));
right_value778 = (void*)0;
memset(&name_641, 0, sizeof(char*));
right_value779 = (void*)0;
memset(&left_type_642, 0, sizeof(struct sType*));
right_value780 = (void*)0;
memset(&right_type_643, 0, sizeof(struct sType*));
right_value781 = (void*)0;
right_value782 = (void*)0;
memset(&param_types_645, 0, sizeof(struct list$1sTypeph*));
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value785 = (void*)0;
right_value786 = (void*)0;
memset(&param_names_647, 0, sizeof(struct list$1charph*));
right_value787 = (void*)0;
right_value788 = (void*)0;
memset(&param_default_parametors_648, 0, sizeof(struct list$1charph*));
right_value789 = (void*)0;
right_value790 = (void*)0;
memset(&header_buf_649, 0, sizeof(struct buffer*));
right_value791 = (void*)0;
memset(&i_650, 0, sizeof(int));
memset(&param_type_651, 0, sizeof(struct sType*));
memset(&param_name_652, 0, sizeof(char*));
right_value792 = (void*)0;
right_value793 = (void*)0;
right_value794 = (void*)0;
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&fun_653, 0, sizeof(struct sFun*));
right_value797 = (void*)0;
memset(&fun2_654, 0, sizeof(struct sFun*));
right_value798 = (void*)0;
right_value799 = (void*)0;
right_value800 = (void*)0;
right_value804 = (void*)0;
memset(&node_656, 0, sizeof(struct sNode*));
right_value805 = (void*)0;
right_value806 = (void*)0;
    # 2127 "05function2.c"
    last_code_618=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2128 "05function2.c"
    __dec_obj180=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2129 "05function2.c"
    last_code2_619=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2130 "05function2.c"
    __dec_obj181=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2131 "05function2.c"
    last_code3_620=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2132 "05function2.c"
    __dec_obj182=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2134 "05function2.c"
    current_stack_frame_struct_621=info->current_stack_frame_struct;
    # 2135 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2136 "05function2.c"
    equaler_622=((void*)0);
    # 2138 "05function2.c"
    real_fun_name_623=(char*)come_increment_ref_count(((char*)(right_value770=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2140 "05function2.c"
    type2_624=(struct sType*)come_increment_ref_count(((struct sType*)(right_value771=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2142 "05function2.c"
    type=type2_624;
    # 2144 "05function2.c"
    klass_625=type->mClass;
    # 2258 "05function2.c"
    # 2146 "05function2.c"
    if(_if_conditional552=type->mPointerNum>0&&!klass_625->mNumber,    _if_conditional552) {
        # 2147 "05function2.c"
        source_626=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value772=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2147, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2149 "05function2.c"
        buffer_append_char(source_626,123);
        # 2175 "05function2.c"
        # 2151 "05function2.c"
        if(klass_625->mProtocol) {
            # 2152 "05function2.c"
            name_627="_protocol_obj";
            # 2153 "05function2.c"
            char source2_628[1024];
            memset(&source2_628, 0, sizeof(char)            *(1024)            );
            # 2154 "05function2.c"
            snprintf(source2_628,1024,"return left.%s.equals(right.%s);\n",name_627,name_627);
            # 2155 "05function2.c"
            buffer_append_str(source_626,source2_628);
        }
        else {
            # 2158 "05function2.c"
            klass_625=map$2charphsClassphp_operator_load_element(info->classes,klass_625->mName);
            # 2173 "05function2.c"
            for(            o2_saved_629=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_625->mFields)),it_630=list$1tuple2$2charphsTypephph_begin((o2_saved_629));            !list$1tuple2$2charphsTypephph_end((o2_saved_629));            it_630=list$1tuple2$2charphsTypephph_next((o2_saved_629))            ){
                # 2160 "05function2.c"
                multiple_assign_var12=it_630;
                name_631=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_632=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                # 2168 "05function2.c"
                # 2162 "05function2.c"
                if(_if_conditional554=string_operator_equals(type->mClass->mName,field_type_632->mClass->mName)&&type->mPointerNum==field_type_632->mPointerNum&&field_type_632->mHeap,                _if_conditional554) {
                    # 2164 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2165 "05function2.c"
                    exit(2);
                }
                # 2168 "05function2.c"
                char source2_633[1024];
                memset(&source2_633, 0, sizeof(char)                *(1024)                );
                # 2169 "05function2.c"
                snprintf(source2_633,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_631,name_631);
                # 2171 "05function2.c"
                buffer_append_str(source_626,source2_633);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_632, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_629, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2175 "05function2.c"
        buffer_append_str(source_626,"return true;");
        # 2176 "05function2.c"
        buffer_append_char(source_626,125);
        # 2178 "05function2.c"
        p_634=info->p;
        # 2179 "05function2.c"
        sline_635=info->sline;
        # 2180 "05function2.c"
        sname_636=(char*)come_increment_ref_count(info->sname);
        # 2181 "05function2.c"
        head_637=info->head;
        # 2182 "05function2.c"
        source3_638=(struct buffer*)come_increment_ref_count(info->source);
        # 2184 "05function2.c"
        __dec_obj183=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_626);
        come_call_finalizer2(buffer_finalize,__dec_obj183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2185 "05function2.c"
        info->p=source_626->buf;
        # 2186 "05function2.c"
        info->head=source_626->buf;
        # 2188 "05function2.c"
        __dec_obj184=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value774=__builtin_string(real_fun_name_623))));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value774 = come_decrement_ref_count2(right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2189 "05function2.c"
        info->sline=0;
        # 2191 "05function2.c"
        block_639=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value775=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2193 "05function2.c"
        result_type_640=(struct sType*)come_increment_ref_count(((struct sType*)(right_value777=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value776=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2193, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value777, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2194 "05function2.c"
        name_641=(char*)come_increment_ref_count(((char*)(right_value778=string_clone(real_fun_name_623))));
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2195 "05function2.c"
        left_type_642=(struct sType*)come_increment_ref_count(((struct sType*)(right_value779=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2196 "05function2.c"
        left_type_642->mHeap=(_Bool)0;
        # 2197 "05function2.c"
        right_type_643=(struct sType*)come_increment_ref_count(((struct sType*)(right_value780=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2198 "05function2.c"
        right_type_643->mHeap=(_Bool)0;
        # 2199 "05function2.c"
        {__list_values25___644[0]=come_increment_ref_count(left_type_642);
__list_values25___644[1]=come_increment_ref_count(right_type_643);
}        param_types_645=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value782=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value781=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2199, "struct list$1sTypeph")))),2,__list_values25___644))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2200 "05function2.c"
        {__list_values26___646[0]=come_increment_ref_count(((char*)(right_value783=__builtin_string("left"))));
__list_values26___646[1]=come_increment_ref_count(((char*)(right_value784=__builtin_string("right"))));
}        param_names_647=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value786=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value785=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2200, "struct list$1charph")))),2,__list_values26___646))));
        right_value783 = come_decrement_ref_count2(right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value786, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2201 "05function2.c"
        param_default_parametors_648=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value788=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value787=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2201, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value788, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2202 "05function2.c"
        list$1charph_push_back(param_default_parametors_648,((void*)0));
        # 2203 "05function2.c"
        list$1charph_push_back(param_default_parametors_648,((void*)0));
        # 2205 "05function2.c"
        header_buf_649=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value790=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value789=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2205, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value789, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2207 "05function2.c"
        buffer_append_str(header_buf_649,((char*)(right_value791=make_come_type_name_string(result_type_640,info))));
        right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2208 "05function2.c"
        buffer_append_str(header_buf_649," ");
        # 2209 "05function2.c"
        buffer_append_str(header_buf_649,real_fun_name_623);
        # 2210 "05function2.c"
        buffer_append_str(header_buf_649,"(");
        # 2224 "05function2.c"
        for(        i_650=0;        i_650<list$1sTypeph_length(param_types_645);        i_650++        ){
            # 2213 "05function2.c"
            param_type_651=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_645,i_650), "05function2.c", 2213, 5));
            # 2214 "05function2.c"
            param_name_652=((char*)come_null_check(list$1charphp_operator_load_element(param_names_647,i_650), "05function2.c", 2214, 6));
            # 2216 "05function2.c"
            buffer_append_str(header_buf_649,((char*)(right_value792=make_come_type_name_string(param_type_651,info))));
            right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2217 "05function2.c"
            buffer_append_str(header_buf_649," ");
            # 2218 "05function2.c"
            buffer_append_str(header_buf_649,param_name_652);
            # 2223 "05function2.c"
            # 2220 "05function2.c"
            if(_if_conditional555=i_650!=list$1sTypeph_length(param_types_645)-1,            _if_conditional555) {
                # 2221 "05function2.c"
                buffer_append_str(header_buf_649,",");
            }
        }
        # 2224 "05function2.c"
        buffer_append_str(header_buf_649,")");
        # 2226 "05function2.c"
        result_type_640->mStatic=(_Bool)0;
        # 2234 "05function2.c"
        fun_653=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value796=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value793=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2228, "sFun")))),(char*)come_increment_ref_count(name_641),(struct sType*)come_increment_ref_count(result_type_640),(struct list$1sTypeph*)come_increment_ref_count(param_types_645),(struct list$1charph*)come_increment_ref_count(param_names_647),(struct list$1charph*)come_increment_ref_count(param_default_parametors_648),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_639),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value794=buffer_to_string(header_buf_649)))),(char*)come_increment_ref_count(((char*)(right_value795=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value793, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value796, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2236 "05function2.c"
        fun2_654=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value797=__builtin_string(fun_name))));
        right_value797 = come_decrement_ref_count2(right_value797, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2242 "05function2.c"
        # 2237 "05function2.c"
        if(_if_conditional556=fun2_654==((void*)0)||fun2_654->mExternal,        _if_conditional556) {
            # 2239 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value798=string_clone(name_641)))),(struct sFun*)come_increment_ref_count(fun_653));
            right_value798 = come_decrement_ref_count2(right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2242 "05function2.c"
        equaler_622=fun_653;
        # 2244 "05function2.c"
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2244, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value800=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value799=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2244, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_653),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_656=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value804=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value799, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value800, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value804) { right_value804 = come_decrement_ref_count2(right_value804, ((struct sNode*)right_value804)->finalize, ((struct sNode*)right_value804)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2251 "05function2.c"
        # 2246 "05function2.c"
        if(_if_conditional563=!node_compile(node_656,info),        _if_conditional563) {
            # 2247 "05function2.c"
            err_msg(info,"compiling error");
            # 2248 "05function2.c"
            exit(2);
        }
        # 2251 "05function2.c"
        __dec_obj187=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_638);
        come_call_finalizer2(buffer_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2252 "05function2.c"
        info->p=p_634;
        # 2253 "05function2.c"
        info->head=head_637;
        # 2254 "05function2.c"
        info->sline=sline_635;
        # 2255 "05function2.c"
        __dec_obj188=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_636);
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_626, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_636 = come_decrement_ref_count2(sname_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_639, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_640, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_642, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_643, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_645, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_647, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_648, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_649, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_653, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2258 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_621;
    # 2260 "05function2.c"
    __dec_obj189=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_618);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2261 "05function2.c"
    __dec_obj190=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_619);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2262 "05function2.c"
    __dec_obj191=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_620);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2264 "05function2.c"
    __result257__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value806=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value805=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2264, "struct tuple2$2sFunpcharph")))),equaler_622,(char*)come_increment_ref_count(real_fun_name_623))));
    last_code_618 = come_decrement_ref_count2(last_code_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_619 = come_decrement_ref_count2(last_code2_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_620 = come_decrement_ref_count2(last_code3_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_623 = come_decrement_ref_count2(real_fun_name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_624, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value806, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result257__;
    last_code_618 = come_decrement_ref_count2(last_code_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_619 = come_decrement_ref_count2(last_code2_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_620 = come_decrement_ref_count2(last_code3_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_623 = come_decrement_ref_count2(real_fun_name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_624, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_657;
char* __dec_obj192;
char* last_code2_658;
char* __dec_obj193;
char* last_code3_659;
char* __dec_obj194;
struct sClass* current_stack_frame_struct_660;
struct sFun* equaler_661;
void* right_value807;
char* real_fun_name_662;
void* right_value808;
struct sType* type2_663;
struct sClass* klass_664;
_Bool _if_conditional564;
void* right_value809;
void* right_value810;
struct buffer* source_665;
_Bool _if_conditional565;
char* name_666;
int i_669;
struct list$1tuple2$2charphsTypephph* o2_saved_670;
struct tuple2$2charphsTypeph* it_671;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_672;
struct sType* field_type_673;
_Bool _if_conditional566;
_Bool _if_conditional568;
char* p_677;
int sline_678;
char* sname_679;
char* head_680;
struct buffer* source3_681;
struct buffer* __dec_obj195;
void* right_value811;
char* __dec_obj196;
void* right_value812;
struct sBlock* block_682;
void* right_value813;
void* right_value814;
struct sType* result_type_683;
void* right_value815;
char* name_684;
void* right_value816;
struct sType* left_type_685;
void* right_value817;
struct sType* right_type_686;
struct sType* __list_values27___687[2];
void* right_value818;
void* right_value819;
struct list$1sTypeph* param_types_688;
void* right_value820;
void* right_value821;
char* __list_values28___689[2];
void* right_value822;
void* right_value823;
struct list$1charph* param_names_690;
void* right_value824;
void* right_value825;
struct list$1charph* param_default_parametors_691;
void* right_value826;
void* right_value827;
struct buffer* header_buf_692;
void* right_value828;
int i_693;
struct sType* param_type_694;
char* param_name_695;
void* right_value829;
_Bool _if_conditional569;
void* right_value830;
void* right_value831;
void* right_value832;
void* right_value833;
struct sFun* fun_696;
void* right_value834;
struct sFun* fun2_697;
_Bool _if_conditional570;
void* right_value835;
void* right_value836;
void* right_value837;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value841;
struct sNode* node_699;
_Bool _if_conditional577;
struct buffer* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
void* right_value842;
void* right_value843;
struct tuple2$2sFunpcharph* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_657, 0, sizeof(char*));
memset(&last_code2_658, 0, sizeof(char*));
memset(&last_code3_659, 0, sizeof(char*));
memset(&current_stack_frame_struct_660, 0, sizeof(struct sClass*));
memset(&equaler_661, 0, sizeof(struct sFun*));
right_value807 = (void*)0;
memset(&real_fun_name_662, 0, sizeof(char*));
right_value808 = (void*)0;
memset(&type2_663, 0, sizeof(struct sType*));
memset(&klass_664, 0, sizeof(struct sClass*));
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&source_665, 0, sizeof(struct buffer*));
memset(&name_666, 0, sizeof(char*));
memset(&i_669, 0, sizeof(int));
memset(&o2_saved_670, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_671, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_672, 0, sizeof(char*));
memset(&field_type_673, 0, sizeof(struct sType*));
memset(&name_672, 0, sizeof(char*));
memset(&field_type_673, 0, sizeof(struct sType*));
memset(&p_677, 0, sizeof(char*));
memset(&sline_678, 0, sizeof(int));
memset(&sname_679, 0, sizeof(char*));
memset(&head_680, 0, sizeof(char*));
memset(&source3_681, 0, sizeof(struct buffer*));
right_value811 = (void*)0;
right_value812 = (void*)0;
memset(&block_682, 0, sizeof(struct sBlock*));
right_value813 = (void*)0;
right_value814 = (void*)0;
memset(&result_type_683, 0, sizeof(struct sType*));
right_value815 = (void*)0;
memset(&name_684, 0, sizeof(char*));
right_value816 = (void*)0;
memset(&left_type_685, 0, sizeof(struct sType*));
right_value817 = (void*)0;
memset(&right_type_686, 0, sizeof(struct sType*));
right_value818 = (void*)0;
right_value819 = (void*)0;
memset(&param_types_688, 0, sizeof(struct list$1sTypeph*));
right_value820 = (void*)0;
right_value821 = (void*)0;
right_value822 = (void*)0;
right_value823 = (void*)0;
memset(&param_names_690, 0, sizeof(struct list$1charph*));
right_value824 = (void*)0;
right_value825 = (void*)0;
memset(&param_default_parametors_691, 0, sizeof(struct list$1charph*));
right_value826 = (void*)0;
right_value827 = (void*)0;
memset(&header_buf_692, 0, sizeof(struct buffer*));
right_value828 = (void*)0;
memset(&i_693, 0, sizeof(int));
memset(&param_type_694, 0, sizeof(struct sType*));
memset(&param_name_695, 0, sizeof(char*));
right_value829 = (void*)0;
right_value830 = (void*)0;
right_value831 = (void*)0;
right_value832 = (void*)0;
right_value833 = (void*)0;
memset(&fun_696, 0, sizeof(struct sFun*));
right_value834 = (void*)0;
memset(&fun2_697, 0, sizeof(struct sFun*));
right_value835 = (void*)0;
right_value836 = (void*)0;
right_value837 = (void*)0;
right_value841 = (void*)0;
memset(&node_699, 0, sizeof(struct sNode*));
right_value842 = (void*)0;
right_value843 = (void*)0;
    # 2269 "05function2.c"
    last_code_657=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2270 "05function2.c"
    __dec_obj192=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2271 "05function2.c"
    last_code2_658=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2272 "05function2.c"
    __dec_obj193=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2273 "05function2.c"
    last_code3_659=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2274 "05function2.c"
    __dec_obj194=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2276 "05function2.c"
    current_stack_frame_struct_660=info->current_stack_frame_struct;
    # 2277 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2278 "05function2.c"
    equaler_661=((void*)0);
    # 2280 "05function2.c"
    real_fun_name_662=(char*)come_increment_ref_count(((char*)(right_value807=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value807 = come_decrement_ref_count2(right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2282 "05function2.c"
    type2_663=(struct sType*)come_increment_ref_count(((struct sType*)(right_value808=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2284 "05function2.c"
    type=type2_663;
    # 2286 "05function2.c"
    klass_664=type->mClass;
    # 2417 "05function2.c"
    # 2288 "05function2.c"
    if(_if_conditional564=type->mPointerNum>0&&!klass_664->mNumber,    _if_conditional564) {
        # 2289 "05function2.c"
        source_665=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value809=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2289, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value809, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2291 "05function2.c"
        buffer_append_char(source_665,123);
        # 2335 "05function2.c"
        # 2293 "05function2.c"
        if(klass_664->mProtocol) {
            # 2294 "05function2.c"
            name_666="_protocol_obj";
            # 2295 "05function2.c"
            char source2_667[1024];
            memset(&source2_667, 0, sizeof(char)            *(1024)            );
            # 2296 "05function2.c"
            snprintf(source2_667,1024,"return !left.%s.equals(right.%s);\n",name_666,name_666);
            # 2297 "05function2.c"
            buffer_append_str(source_665,source2_667);
        }
        else {
            # 2300 "05function2.c"
            char source2_668[1024];
            memset(&source2_668, 0, sizeof(char)            *(1024)            );
            # 2301 "05function2.c"
            snprintf(source2_668,1024,"return !(");
            # 2303 "05function2.c"
            buffer_append_str(source_665,source2_668);
            # 2305 "05function2.c"
            i_669=0;
            # 2306 "05function2.c"
            klass_664=map$2charphsClassphp_operator_load_element(info->classes,klass_664->mName);
            # 2333 "05function2.c"
            for(            o2_saved_670=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_664->mFields)),it_671=list$1tuple2$2charphsTypephph_begin((o2_saved_670));            !list$1tuple2$2charphsTypephph_end((o2_saved_670));            it_671=list$1tuple2$2charphsTypephph_next((o2_saved_670))            ){
                # 2308 "05function2.c"
                multiple_assign_var13=it_671;
                name_672=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_673=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                # 2316 "05function2.c"
                # 2310 "05function2.c"
                if(_if_conditional566=string_operator_equals(type->mClass->mName,field_type_673->mClass->mName)&&type->mPointerNum==field_type_673->mPointerNum&&field_type_673->mHeap,                _if_conditional566) {
                    # 2312 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2313 "05function2.c"
                    exit(2);
                }
                # 2316 "05function2.c"
                char source2_674[1024];
                memset(&source2_674, 0, sizeof(char)                *(1024)                );
                # 2317 "05function2.c"
                snprintf(source2_674,1024,"left.%s.equals(right.%s)",name_672,name_672);
                # 2318 "05function2.c"
                buffer_append_str(source_665,source2_674);
                # 2331 "05function2.c"
                # 2320 "05function2.c"
                if(_if_conditional568=i_669==list$1tuple2$2charphsTypephph_length(klass_664->mFields)-1,                _if_conditional568) {
                    # 2321 "05function2.c"
                    char source2_675[1024];
                    memset(&source2_675, 0, sizeof(char)                    *(1024)                    );
                    # 2322 "05function2.c"
                    snprintf(source2_675,1024,");");
                    # 2323 "05function2.c"
                    buffer_append_str(source_665,source2_675);
                }
                else {
                    # 2326 "05function2.c"
                    char source2_676[1024];
                    memset(&source2_676, 0, sizeof(char)                    *(1024)                    );
                    # 2327 "05function2.c"
                    snprintf(source2_676,1024," && ");
                    # 2328 "05function2.c"
                    buffer_append_str(source_665,source2_676);
                }
                # 2331 "05function2.c"
                i_669++;
                name_672 = come_decrement_ref_count2(name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_670, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2335 "05function2.c"
        buffer_append_char(source_665,125);
        # 2337 "05function2.c"
        p_677=info->p;
        # 2338 "05function2.c"
        sline_678=info->sline;
        # 2339 "05function2.c"
        sname_679=(char*)come_increment_ref_count(info->sname);
        # 2340 "05function2.c"
        head_680=info->head;
        # 2341 "05function2.c"
        source3_681=(struct buffer*)come_increment_ref_count(info->source);
        # 2343 "05function2.c"
        __dec_obj195=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_665);
        come_call_finalizer2(buffer_finalize,__dec_obj195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2344 "05function2.c"
        info->p=source_665->buf;
        # 2345 "05function2.c"
        info->head=source_665->buf;
        # 2347 "05function2.c"
        __dec_obj196=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value811=__builtin_string(real_fun_name_662))));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2348 "05function2.c"
        info->sline=0;
        # 2350 "05function2.c"
        block_682=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value812=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value812, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2352 "05function2.c"
        result_type_683=(struct sType*)come_increment_ref_count(((struct sType*)(right_value814=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value813=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2352, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value813, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value814, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2353 "05function2.c"
        name_684=(char*)come_increment_ref_count(((char*)(right_value815=string_clone(real_fun_name_662))));
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2354 "05function2.c"
        left_type_685=(struct sType*)come_increment_ref_count(((struct sType*)(right_value816=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value816, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2355 "05function2.c"
        left_type_685->mHeap=(_Bool)0;
        # 2356 "05function2.c"
        right_type_686=(struct sType*)come_increment_ref_count(((struct sType*)(right_value817=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value817, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2357 "05function2.c"
        right_type_686->mHeap=(_Bool)0;
        # 2358 "05function2.c"
        {__list_values27___687[0]=come_increment_ref_count(left_type_685);
__list_values27___687[1]=come_increment_ref_count(right_type_686);
}        param_types_688=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value819=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value818=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2358, "struct list$1sTypeph")))),2,__list_values27___687))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value818, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value819, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2359 "05function2.c"
        {__list_values28___689[0]=come_increment_ref_count(((char*)(right_value820=__builtin_string("left"))));
__list_values28___689[1]=come_increment_ref_count(((char*)(right_value821=__builtin_string("right"))));
}        param_names_690=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value823=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value822=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2359, "struct list$1charph")))),2,__list_values28___689))));
        right_value820 = come_decrement_ref_count2(right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value821 = come_decrement_ref_count2(right_value821, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value822, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value823, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2360 "05function2.c"
        param_default_parametors_691=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value825=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value824=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2360, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value824, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value825, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2361 "05function2.c"
        list$1charph_push_back(param_default_parametors_691,((void*)0));
        # 2362 "05function2.c"
        list$1charph_push_back(param_default_parametors_691,((void*)0));
        # 2364 "05function2.c"
        header_buf_692=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value827=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value826=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2364, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value826, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2366 "05function2.c"
        buffer_append_str(header_buf_692,((char*)(right_value828=make_come_type_name_string(result_type_683,info))));
        right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2367 "05function2.c"
        buffer_append_str(header_buf_692," ");
        # 2368 "05function2.c"
        buffer_append_str(header_buf_692,real_fun_name_662);
        # 2369 "05function2.c"
        buffer_append_str(header_buf_692,"(");
        # 2383 "05function2.c"
        for(        i_693=0;        i_693<list$1sTypeph_length(param_types_688);        i_693++        ){
            # 2372 "05function2.c"
            param_type_694=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_688,i_693), "05function2.c", 2372, 7));
            # 2373 "05function2.c"
            param_name_695=((char*)come_null_check(list$1charphp_operator_load_element(param_names_690,i_693), "05function2.c", 2373, 8));
            # 2375 "05function2.c"
            buffer_append_str(header_buf_692,((char*)(right_value829=make_come_type_name_string(param_type_694,info))));
            right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2376 "05function2.c"
            buffer_append_str(header_buf_692," ");
            # 2377 "05function2.c"
            buffer_append_str(header_buf_692,param_name_695);
            # 2382 "05function2.c"
            # 2379 "05function2.c"
            if(_if_conditional569=i_693!=list$1sTypeph_length(param_types_688)-1,            _if_conditional569) {
                # 2380 "05function2.c"
                buffer_append_str(header_buf_692,",");
            }
        }
        # 2383 "05function2.c"
        buffer_append_str(header_buf_692,")");
        # 2385 "05function2.c"
        result_type_683->mStatic=(_Bool)0;
        # 2393 "05function2.c"
        fun_696=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value833=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value830=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2387, "sFun")))),(char*)come_increment_ref_count(name_684),(struct sType*)come_increment_ref_count(result_type_683),(struct list$1sTypeph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_690),(struct list$1charph*)come_increment_ref_count(param_default_parametors_691),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_682),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value831=buffer_to_string(header_buf_692)))),(char*)come_increment_ref_count(((char*)(right_value832=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value830, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value831 = come_decrement_ref_count2(right_value831, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value832 = come_decrement_ref_count2(right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value833, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2395 "05function2.c"
        fun2_697=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value834=__builtin_string(fun_name))));
        right_value834 = come_decrement_ref_count2(right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2401 "05function2.c"
        # 2396 "05function2.c"
        if(_if_conditional570=fun2_697==((void*)0)||fun2_697->mExternal,        _if_conditional570) {
            # 2398 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value835=string_clone(name_684)))),(struct sFun*)come_increment_ref_count(fun_696));
            right_value835 = come_decrement_ref_count2(right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2401 "05function2.c"
        equaler_661=fun_696;
        # 2403 "05function2.c"
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2403, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value837=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value836=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2403, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_696),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_699=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value841=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value836, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value837, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value841) { right_value841 = come_decrement_ref_count2(right_value841, ((struct sNode*)right_value841)->finalize, ((struct sNode*)right_value841)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2410 "05function2.c"
        # 2405 "05function2.c"
        if(_if_conditional577=!node_compile(node_699,info),        _if_conditional577) {
            # 2406 "05function2.c"
            err_msg(info,"compiling error");
            # 2407 "05function2.c"
            exit(2);
        }
        # 2410 "05function2.c"
        __dec_obj199=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_681);
        come_call_finalizer2(buffer_finalize,__dec_obj199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2411 "05function2.c"
        info->p=p_677;
        # 2412 "05function2.c"
        info->head=head_680;
        # 2413 "05function2.c"
        info->sline=sline_678;
        # 2414 "05function2.c"
        __dec_obj200=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_679);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_665, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_679 = come_decrement_ref_count2(sname_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_681, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_682, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_683, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_685, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_686, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_688, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_690, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_691, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_692, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_696, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2417 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_660;
    # 2419 "05function2.c"
    __dec_obj201=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_657);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2420 "05function2.c"
    __dec_obj202=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_658);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2421 "05function2.c"
    __dec_obj203=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_659);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2423 "05function2.c"
    __result262__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value843=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value842=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2423, "struct tuple2$2sFunpcharph")))),equaler_661,(char*)come_increment_ref_count(real_fun_name_662))));
    last_code_657 = come_decrement_ref_count2(last_code_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_658 = come_decrement_ref_count2(last_code2_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_659 = come_decrement_ref_count2(last_code3_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_662 = come_decrement_ref_count2(real_fun_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_663, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value843, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result262__;
    last_code_657 = come_decrement_ref_count2(last_code_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_658 = come_decrement_ref_count2(last_code2_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_659 = come_decrement_ref_count2(last_code3_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_662 = come_decrement_ref_count2(real_fun_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_663, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional567;
int __result258__;
int __result259__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./neo-c.h"
                    # 364 "./neo-c.h"
                    if(_if_conditional567=self==((void*)0),                    _if_conditional567) {
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
char* last_code_700;
char* __dec_obj204;
char* last_code2_701;
char* __dec_obj205;
char* last_code3_702;
char* __dec_obj206;
struct sClass* current_stack_frame_struct_703;
struct sFun* equaler_704;
void* right_value844;
char* real_fun_name_705;
void* right_value845;
struct sType* type2_706;
struct sClass* klass_707;
_Bool _if_conditional578;
void* right_value846;
void* right_value847;
struct buffer* source_708;
_Bool _if_conditional579;
char* name_709;
struct list$1tuple2$2charphsTypephph* o2_saved_711;
struct tuple2$2charphsTypeph* it_712;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_713;
struct sType* field_type_714;
_Bool _if_conditional580;
char* p_716;
int sline_717;
char* sname_718;
char* head_719;
struct buffer* source3_720;
struct buffer* __dec_obj207;
void* right_value848;
char* __dec_obj208;
void* right_value849;
struct sBlock* block_721;
void* right_value850;
void* right_value851;
struct sType* result_type_722;
void* right_value852;
char* name_723;
void* right_value853;
struct sType* left_type_724;
void* right_value854;
struct sType* right_type_725;
struct sType* __list_values29___726[2];
void* right_value855;
void* right_value856;
struct list$1sTypeph* param_types_727;
void* right_value857;
void* right_value858;
char* __list_values30___728[2];
void* right_value859;
void* right_value860;
struct list$1charph* param_names_729;
void* right_value861;
void* right_value862;
struct list$1charph* param_default_parametors_730;
void* right_value863;
void* right_value864;
struct buffer* header_buf_731;
void* right_value865;
int i_732;
struct sType* param_type_733;
char* param_name_734;
void* right_value866;
_Bool _if_conditional581;
void* right_value867;
void* right_value868;
void* right_value869;
void* right_value870;
struct sFun* fun_735;
void* right_value871;
struct sFun* fun2_736;
_Bool _if_conditional582;
void* right_value872;
void* right_value873;
void* right_value874;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value878;
struct sNode* node_738;
_Bool _if_conditional589;
struct buffer* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
void* right_value879;
void* right_value880;
struct tuple2$2sFunpcharph* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_700, 0, sizeof(char*));
memset(&last_code2_701, 0, sizeof(char*));
memset(&last_code3_702, 0, sizeof(char*));
memset(&current_stack_frame_struct_703, 0, sizeof(struct sClass*));
memset(&equaler_704, 0, sizeof(struct sFun*));
right_value844 = (void*)0;
memset(&real_fun_name_705, 0, sizeof(char*));
right_value845 = (void*)0;
memset(&type2_706, 0, sizeof(struct sType*));
memset(&klass_707, 0, sizeof(struct sClass*));
right_value846 = (void*)0;
right_value847 = (void*)0;
memset(&source_708, 0, sizeof(struct buffer*));
memset(&name_709, 0, sizeof(char*));
memset(&o2_saved_711, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_712, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_713, 0, sizeof(char*));
memset(&field_type_714, 0, sizeof(struct sType*));
memset(&name_713, 0, sizeof(char*));
memset(&field_type_714, 0, sizeof(struct sType*));
memset(&p_716, 0, sizeof(char*));
memset(&sline_717, 0, sizeof(int));
memset(&sname_718, 0, sizeof(char*));
memset(&head_719, 0, sizeof(char*));
memset(&source3_720, 0, sizeof(struct buffer*));
right_value848 = (void*)0;
right_value849 = (void*)0;
memset(&block_721, 0, sizeof(struct sBlock*));
right_value850 = (void*)0;
right_value851 = (void*)0;
memset(&result_type_722, 0, sizeof(struct sType*));
right_value852 = (void*)0;
memset(&name_723, 0, sizeof(char*));
right_value853 = (void*)0;
memset(&left_type_724, 0, sizeof(struct sType*));
right_value854 = (void*)0;
memset(&right_type_725, 0, sizeof(struct sType*));
right_value855 = (void*)0;
right_value856 = (void*)0;
memset(&param_types_727, 0, sizeof(struct list$1sTypeph*));
right_value857 = (void*)0;
right_value858 = (void*)0;
right_value859 = (void*)0;
right_value860 = (void*)0;
memset(&param_names_729, 0, sizeof(struct list$1charph*));
right_value861 = (void*)0;
right_value862 = (void*)0;
memset(&param_default_parametors_730, 0, sizeof(struct list$1charph*));
right_value863 = (void*)0;
right_value864 = (void*)0;
memset(&header_buf_731, 0, sizeof(struct buffer*));
right_value865 = (void*)0;
memset(&i_732, 0, sizeof(int));
memset(&param_type_733, 0, sizeof(struct sType*));
memset(&param_name_734, 0, sizeof(char*));
right_value866 = (void*)0;
right_value867 = (void*)0;
right_value868 = (void*)0;
right_value869 = (void*)0;
right_value870 = (void*)0;
memset(&fun_735, 0, sizeof(struct sFun*));
right_value871 = (void*)0;
memset(&fun2_736, 0, sizeof(struct sFun*));
right_value872 = (void*)0;
right_value873 = (void*)0;
right_value874 = (void*)0;
right_value878 = (void*)0;
memset(&node_738, 0, sizeof(struct sNode*));
right_value879 = (void*)0;
right_value880 = (void*)0;
    # 2428 "05function2.c"
    last_code_700=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2429 "05function2.c"
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2430 "05function2.c"
    last_code2_701=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2431 "05function2.c"
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2432 "05function2.c"
    last_code3_702=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2433 "05function2.c"
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2435 "05function2.c"
    current_stack_frame_struct_703=info->current_stack_frame_struct;
    # 2436 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2437 "05function2.c"
    equaler_704=((void*)0);
    # 2439 "05function2.c"
    real_fun_name_705=(char*)come_increment_ref_count(((char*)(right_value844=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value844 = come_decrement_ref_count2(right_value844, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2441 "05function2.c"
    type2_706=(struct sType*)come_increment_ref_count(((struct sType*)(right_value845=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value845, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2443 "05function2.c"
    type=type2_706;
    # 2445 "05function2.c"
    klass_707=type->mClass;
    # 2559 "05function2.c"
    # 2447 "05function2.c"
    if(_if_conditional578=type->mPointerNum>0&&!klass_707->mNumber,    _if_conditional578) {
        # 2448 "05function2.c"
        source_708=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value847=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value846=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2448, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value846, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value847, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2450 "05function2.c"
        buffer_append_char(source_708,123);
        # 2476 "05function2.c"
        # 2452 "05function2.c"
        if(klass_707->mProtocol) {
            # 2453 "05function2.c"
            name_709="_protocol_obj";
            # 2454 "05function2.c"
            char source2_710[1024];
            memset(&source2_710, 0, sizeof(char)            *(1024)            );
            # 2455 "05function2.c"
            snprintf(source2_710,1024,"return left.%s.equals(right.%s);\n",name_709,name_709);
            # 2456 "05function2.c"
            buffer_append_str(source_708,source2_710);
        }
        else {
            # 2459 "05function2.c"
            klass_707=map$2charphsClassphp_operator_load_element(info->classes,klass_707->mName);
            # 2474 "05function2.c"
            for(            o2_saved_711=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_707->mFields)),it_712=list$1tuple2$2charphsTypephph_begin((o2_saved_711));            !list$1tuple2$2charphsTypephph_end((o2_saved_711));            it_712=list$1tuple2$2charphsTypephph_next((o2_saved_711))            ){
                # 2461 "05function2.c"
                multiple_assign_var14=it_712;
                name_713=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                # 2469 "05function2.c"
                # 2463 "05function2.c"
                if(_if_conditional580=string_operator_equals(type->mClass->mName,field_type_714->mClass->mName)&&type->mPointerNum==field_type_714->mPointerNum&&field_type_714->mHeap,                _if_conditional580) {
                    # 2465 "05function2.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2466 "05function2.c"
                    exit(2);
                }
                # 2469 "05function2.c"
                char source2_715[1024];
                memset(&source2_715, 0, sizeof(char)                *(1024)                );
                # 2470 "05function2.c"
                snprintf(source2_715,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_713,name_713);
                # 2472 "05function2.c"
                buffer_append_str(source_708,source2_715);
                name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_714, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_711, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2476 "05function2.c"
        buffer_append_str(source_708,"return true;\n");
        # 2477 "05function2.c"
        buffer_append_char(source_708,125);
        # 2479 "05function2.c"
        p_716=info->p;
        # 2480 "05function2.c"
        sline_717=info->sline;
        # 2481 "05function2.c"
        sname_718=(char*)come_increment_ref_count(info->sname);
        # 2482 "05function2.c"
        head_719=info->head;
        # 2483 "05function2.c"
        source3_720=(struct buffer*)come_increment_ref_count(info->source);
        # 2485 "05function2.c"
        __dec_obj207=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_708);
        come_call_finalizer2(buffer_finalize,__dec_obj207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2486 "05function2.c"
        info->p=source_708->buf;
        # 2487 "05function2.c"
        info->head=source_708->buf;
        # 2489 "05function2.c"
        __dec_obj208=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value848=__builtin_string(real_fun_name_705))));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value848 = come_decrement_ref_count2(right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2490 "05function2.c"
        info->sline=0;
        # 2492 "05function2.c"
        block_721=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value849=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value849, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2494 "05function2.c"
        result_type_722=(struct sType*)come_increment_ref_count(((struct sType*)(right_value851=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value850=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2494, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value850, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value851, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2495 "05function2.c"
        name_723=(char*)come_increment_ref_count(((char*)(right_value852=string_clone(real_fun_name_705))));
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2496 "05function2.c"
        left_type_724=(struct sType*)come_increment_ref_count(((struct sType*)(right_value853=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value853, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2497 "05function2.c"
        left_type_724->mHeap=(_Bool)0;
        # 2498 "05function2.c"
        right_type_725=(struct sType*)come_increment_ref_count(((struct sType*)(right_value854=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value854, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2499 "05function2.c"
        right_type_725->mHeap=(_Bool)0;
        # 2500 "05function2.c"
        {__list_values29___726[0]=come_increment_ref_count(left_type_724);
__list_values29___726[1]=come_increment_ref_count(right_type_725);
}        param_types_727=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value856=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value855=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2500, "struct list$1sTypeph")))),2,__list_values29___726))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value855, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value856, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2501 "05function2.c"
        {__list_values30___728[0]=come_increment_ref_count(((char*)(right_value857=__builtin_string("left"))));
__list_values30___728[1]=come_increment_ref_count(((char*)(right_value858=__builtin_string("right"))));
}        param_names_729=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value860=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value859=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2501, "struct list$1charph")))),2,__list_values30___728))));
        right_value857 = come_decrement_ref_count2(right_value857, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value858 = come_decrement_ref_count2(right_value858, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value859, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value860, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2502 "05function2.c"
        param_default_parametors_730=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value862=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value861=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2502, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value861, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value862, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2503 "05function2.c"
        list$1charph_push_back(param_default_parametors_730,((void*)0));
        # 2504 "05function2.c"
        list$1charph_push_back(param_default_parametors_730,((void*)0));
        # 2506 "05function2.c"
        header_buf_731=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value864=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value863=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2506, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value863, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value864, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2508 "05function2.c"
        buffer_append_str(header_buf_731,((char*)(right_value865=make_come_type_name_string(result_type_722,info))));
        right_value865 = come_decrement_ref_count2(right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2509 "05function2.c"
        buffer_append_str(header_buf_731," ");
        # 2510 "05function2.c"
        buffer_append_str(header_buf_731,real_fun_name_705);
        # 2511 "05function2.c"
        buffer_append_str(header_buf_731,"(");
        # 2525 "05function2.c"
        for(        i_732=0;        i_732<list$1sTypeph_length(param_types_727);        i_732++        ){
            # 2514 "05function2.c"
            param_type_733=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_727,i_732), "05function2.c", 2514, 9));
            # 2515 "05function2.c"
            param_name_734=((char*)come_null_check(list$1charphp_operator_load_element(param_names_729,i_732), "05function2.c", 2515, 10));
            # 2517 "05function2.c"
            buffer_append_str(header_buf_731,((char*)(right_value866=make_come_type_name_string(param_type_733,info))));
            right_value866 = come_decrement_ref_count2(right_value866, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2518 "05function2.c"
            buffer_append_str(header_buf_731," ");
            # 2519 "05function2.c"
            buffer_append_str(header_buf_731,param_name_734);
            # 2524 "05function2.c"
            # 2521 "05function2.c"
            if(_if_conditional581=i_732!=list$1sTypeph_length(param_types_727)-1,            _if_conditional581) {
                # 2522 "05function2.c"
                buffer_append_str(header_buf_731,",");
            }
        }
        # 2525 "05function2.c"
        buffer_append_str(header_buf_731,")");
        # 2527 "05function2.c"
        result_type_722->mStatic=(_Bool)0;
        # 2535 "05function2.c"
        fun_735=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value870=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value867=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2529, "sFun")))),(char*)come_increment_ref_count(name_723),(struct sType*)come_increment_ref_count(result_type_722),(struct list$1sTypeph*)come_increment_ref_count(param_types_727),(struct list$1charph*)come_increment_ref_count(param_names_729),(struct list$1charph*)come_increment_ref_count(param_default_parametors_730),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_721),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value868=buffer_to_string(header_buf_731)))),(char*)come_increment_ref_count(((char*)(right_value869=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value867, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value868 = come_decrement_ref_count2(right_value868, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value869 = come_decrement_ref_count2(right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value870, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2537 "05function2.c"
        fun2_736=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value871=__builtin_string(fun_name))));
        right_value871 = come_decrement_ref_count2(right_value871, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2543 "05function2.c"
        # 2538 "05function2.c"
        if(_if_conditional582=fun2_736==((void*)0)||fun2_736->mExternal,        _if_conditional582) {
            # 2540 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value872=string_clone(name_723)))),(struct sFun*)come_increment_ref_count(fun_735));
            right_value872 = come_decrement_ref_count2(right_value872, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2543 "05function2.c"
        equaler_704=fun_735;
        # 2545 "05function2.c"
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2545, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value874=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value873=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2545, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_735),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_738=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value878=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value873, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value874, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value878) { right_value878 = come_decrement_ref_count2(right_value878, ((struct sNode*)right_value878)->finalize, ((struct sNode*)right_value878)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2552 "05function2.c"
        # 2547 "05function2.c"
        if(_if_conditional589=!node_compile(node_738,info),        _if_conditional589) {
            # 2548 "05function2.c"
            err_msg(info,"compiling error(X)");
            # 2549 "05function2.c"
            exit(2);
        }
        # 2552 "05function2.c"
        __dec_obj211=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_720);
        come_call_finalizer2(buffer_finalize,__dec_obj211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2553 "05function2.c"
        info->p=p_716;
        # 2554 "05function2.c"
        info->head=head_719;
        # 2555 "05function2.c"
        info->sline=sline_717;
        # 2556 "05function2.c"
        __dec_obj212=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_718);
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_708, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_718 = come_decrement_ref_count2(sname_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_720, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_721, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_722, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_723 = come_decrement_ref_count2(name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_724, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_725, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_727, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_729, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_730, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_731, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_735, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2559 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_703;
    # 2561 "05function2.c"
    __dec_obj213=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_700);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2562 "05function2.c"
    __dec_obj214=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_701);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2563 "05function2.c"
    __dec_obj215=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_702);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2565 "05function2.c"
    __result265__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value880=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value879=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2565, "struct tuple2$2sFunpcharph")))),equaler_704,(char*)come_increment_ref_count(real_fun_name_705))));
    last_code_700 = come_decrement_ref_count2(last_code_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_701 = come_decrement_ref_count2(last_code2_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_702 = come_decrement_ref_count2(last_code3_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_705 = come_decrement_ref_count2(real_fun_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_706, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value879 = come_decrement_ref_count2(right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value880, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result265__;
    last_code_700 = come_decrement_ref_count2(last_code_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_701 = come_decrement_ref_count2(last_code2_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_702 = come_decrement_ref_count2(last_code3_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_705 = come_decrement_ref_count2(real_fun_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_706, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_739;
char* __dec_obj216;
char* last_code2_740;
char* __dec_obj217;
char* last_code3_741;
char* __dec_obj218;
struct sClass* current_stack_frame_struct_742;
struct sFun* cloner_743;
void* right_value881;
char* real_fun_name_744;
void* right_value882;
struct sType* type2_745;
struct sClass* klass_746;
_Bool _if_conditional590;
void* right_value883;
void* right_value884;
struct buffer* source_747;
void* right_value885;
void* right_value886;
_Bool _if_conditional591;
char* name_748;
struct list$1tuple2$2charphsTypephph* o2_saved_750;
struct tuple2$2charphsTypeph* it_751;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_752;
struct sType* field_type_753;
_Bool _if_conditional592;
_Bool _if_conditional593;
_Bool _if_conditional594;
struct list$1tuple2$2charphsTypephph* o2_saved_756;
struct tuple2$2charphsTypeph* it_757;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_758;
struct sType* field_type_759;
_Bool _if_conditional595;
_Bool _if_conditional596;
_Bool _if_conditional597;
void* right_value887;
char* p_763;
int sline_764;
char* sname_765;
struct buffer* source3_766;
char* head_767;
struct buffer* __dec_obj219;
void* right_value888;
char* __dec_obj220;
void* right_value889;
struct sBlock* block_768;
void* right_value890;
struct sType* result_type_769;
void* right_value891;
char* name_770;
void* right_value892;
struct sType* self_type_771;
struct sType* __list_values31___772[1];
void* right_value893;
void* right_value894;
struct list$1sTypeph* param_types_773;
void* right_value895;
char* __list_values32___774[1];
void* right_value896;
void* right_value897;
struct list$1charph* param_names_775;
void* right_value898;
void* right_value899;
struct list$1charph* param_default_parametors_776;
void* right_value900;
void* right_value901;
struct buffer* header_buf_777;
void* right_value902;
int i_778;
struct sType* param_type_779;
char* param_name_780;
void* right_value903;
_Bool _if_conditional598;
void* right_value904;
void* right_value905;
void* right_value906;
void* right_value907;
struct sFun* fun_781;
void* right_value908;
struct sFun* fun2_782;
_Bool _if_conditional599;
void* right_value909;
void* right_value910;
void* right_value911;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value915;
struct sNode* node_784;
_Bool _if_conditional606;
char* __dec_obj223;
struct buffer* __dec_obj224;
char* __dec_obj225;
char* __dec_obj226;
char* __dec_obj227;
void* right_value916;
void* right_value917;
struct tuple2$2sFunpcharph* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_739, 0, sizeof(char*));
memset(&last_code2_740, 0, sizeof(char*));
memset(&last_code3_741, 0, sizeof(char*));
memset(&current_stack_frame_struct_742, 0, sizeof(struct sClass*));
memset(&cloner_743, 0, sizeof(struct sFun*));
right_value881 = (void*)0;
memset(&real_fun_name_744, 0, sizeof(char*));
right_value882 = (void*)0;
memset(&type2_745, 0, sizeof(struct sType*));
memset(&klass_746, 0, sizeof(struct sClass*));
right_value883 = (void*)0;
right_value884 = (void*)0;
memset(&source_747, 0, sizeof(struct buffer*));
right_value885 = (void*)0;
right_value886 = (void*)0;
memset(&name_748, 0, sizeof(char*));
memset(&o2_saved_750, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_751, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_752, 0, sizeof(char*));
memset(&field_type_753, 0, sizeof(struct sType*));
memset(&name_752, 0, sizeof(char*));
memset(&field_type_753, 0, sizeof(struct sType*));
memset(&o2_saved_756, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_757, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_758, 0, sizeof(char*));
memset(&field_type_759, 0, sizeof(struct sType*));
memset(&name_758, 0, sizeof(char*));
memset(&field_type_759, 0, sizeof(struct sType*));
right_value887 = (void*)0;
memset(&p_763, 0, sizeof(char*));
memset(&sline_764, 0, sizeof(int));
memset(&sname_765, 0, sizeof(char*));
memset(&source3_766, 0, sizeof(struct buffer*));
memset(&head_767, 0, sizeof(char*));
right_value888 = (void*)0;
right_value889 = (void*)0;
memset(&block_768, 0, sizeof(struct sBlock*));
right_value890 = (void*)0;
memset(&result_type_769, 0, sizeof(struct sType*));
right_value891 = (void*)0;
memset(&name_770, 0, sizeof(char*));
right_value892 = (void*)0;
memset(&self_type_771, 0, sizeof(struct sType*));
right_value893 = (void*)0;
right_value894 = (void*)0;
memset(&param_types_773, 0, sizeof(struct list$1sTypeph*));
right_value895 = (void*)0;
right_value896 = (void*)0;
right_value897 = (void*)0;
memset(&param_names_775, 0, sizeof(struct list$1charph*));
right_value898 = (void*)0;
right_value899 = (void*)0;
memset(&param_default_parametors_776, 0, sizeof(struct list$1charph*));
right_value900 = (void*)0;
right_value901 = (void*)0;
memset(&header_buf_777, 0, sizeof(struct buffer*));
right_value902 = (void*)0;
memset(&i_778, 0, sizeof(int));
memset(&param_type_779, 0, sizeof(struct sType*));
memset(&param_name_780, 0, sizeof(char*));
right_value903 = (void*)0;
right_value904 = (void*)0;
right_value905 = (void*)0;
right_value906 = (void*)0;
right_value907 = (void*)0;
memset(&fun_781, 0, sizeof(struct sFun*));
right_value908 = (void*)0;
memset(&fun2_782, 0, sizeof(struct sFun*));
right_value909 = (void*)0;
right_value910 = (void*)0;
right_value911 = (void*)0;
right_value915 = (void*)0;
memset(&node_784, 0, sizeof(struct sNode*));
right_value916 = (void*)0;
right_value917 = (void*)0;
    # 2570 "05function2.c"
    last_code_739=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2571 "05function2.c"
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2572 "05function2.c"
    last_code2_740=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2573 "05function2.c"
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2574 "05function2.c"
    last_code3_741=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2575 "05function2.c"
    __dec_obj218=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2577 "05function2.c"
    current_stack_frame_struct_742=info->current_stack_frame_struct;
    # 2578 "05function2.c"
    info->current_stack_frame_struct=((void*)0);
    # 2579 "05function2.c"
    cloner_743=((void*)0);
    # 2581 "05function2.c"
    real_fun_name_744=(char*)come_increment_ref_count(((char*)(right_value881=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value881 = come_decrement_ref_count2(right_value881, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2583 "05function2.c"
    type2_745=(struct sType*)come_increment_ref_count(((struct sType*)(right_value882=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value882, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2585 "05function2.c"
    type=type2_745;
    # 2587 "05function2.c"
    klass_746=type->mClass;
    # 2745 "05function2.c"
    # 2589 "05function2.c"
    if(_if_conditional590=type->mPointerNum>0&&!klass_746->mNumber,    _if_conditional590) {
        # 2590 "05function2.c"
        source_747=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value884=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value883=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2590, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value883, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value884, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2592 "05function2.c"
        buffer_append_str(source_747,"{\n");
        # 2593 "05function2.c"
        buffer_append_str(source_747,"if(self == (void*)0) { return (void*)0; }\n");
        # 2594 "05function2.c"
        buffer_append_str(source_747,((char*)(right_value886=xsprintf("var result = new %s;\n",((char*)(right_value885=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value885 = come_decrement_ref_count2(right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2662 "05function2.c"
        # 2597 "05function2.c"
        if(klass_746->mProtocol) {
            # 2598 "05function2.c"
            name_748="_protocol_obj";
            # 2599 "05function2.c"
            char source2_749[1024];
            memset(&source2_749, 0, sizeof(char)            *(1024)            );
            # 2600 "05function2.c"
            snprintf(source2_749,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            # 2602 "05function2.c"
            buffer_append_str(source_747,source2_749);
            # 2604 "05function2.c"
            klass_746=map$2charphsClassphp_operator_load_element(info->classes,klass_746->mName);
            # 2629 "05function2.c"
            for(            o2_saved_750=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_746->mFields)),it_751=list$1tuple2$2charphsTypephph_begin((o2_saved_750));            !list$1tuple2$2charphsTypephph_end((o2_saved_750));            it_751=list$1tuple2$2charphsTypephph_next((o2_saved_750))            ){
                # 2606 "05function2.c"
                multiple_assign_var15=it_751;
                name_752=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_753=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                # 2614 "05function2.c"
                # 2608 "05function2.c"
                if(_if_conditional592=string_operator_equals(type->mClass->mName,field_type_753->mClass->mName)&&type->mPointerNum==field_type_753->mPointerNum&&field_type_753->mHeap,                _if_conditional592) {
                    # 2610 "05function2.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2611 "05function2.c"
                    exit(2);
                }
                # 2628 "05function2.c"
                # 2614 "05function2.c"
                if(_if_conditional593=string_operator_equals(name_752,"_protocol_obj"),                _if_conditional593) {
                }
                else {
                    # 2628 "05function2.c"
                    # 2616 "05function2.c"
                    if(_if_conditional594=list$1sNodeph_length(field_type_753->mArrayNum)>0,                    _if_conditional594) {
                        # 2617 "05function2.c"
                        char source2_754[1024];
                        memset(&source2_754, 0, sizeof(char)                        *(1024)                        );
                        # 2618 "05function2.c"
                        snprintf(source2_754,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_752,name_752,name_752);
                        # 2620 "05function2.c"
                        buffer_append_str(source_747,source2_754);
                    }
                    else {
                        # 2623 "05function2.c"
                        char source2_755[1024];
                        memset(&source2_755, 0, sizeof(char)                        *(1024)                        );
                        # 2624 "05function2.c"
                        snprintf(source2_755,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_752,name_752);
                        # 2626 "05function2.c"
                        buffer_append_str(source_747,source2_755);
                    }
                }
                name_752 = come_decrement_ref_count2(name_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_753, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_750, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2631 "05function2.c"
            klass_746=map$2charphsClassphp_operator_load_element(info->classes,klass_746->mName);
            # 2660 "05function2.c"
            for(            o2_saved_756=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_746->mFields)),it_757=list$1tuple2$2charphsTypephph_begin((o2_saved_756));            !list$1tuple2$2charphsTypephph_end((o2_saved_756));            it_757=list$1tuple2$2charphsTypephph_next((o2_saved_756))            ){
                # 2633 "05function2.c"
                multiple_assign_var16=it_757;
                name_758=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_759=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                # 2641 "05function2.c"
                # 2635 "05function2.c"
                if(_if_conditional595=string_operator_equals(type->mClass->mName,field_type_759->mClass->mName)&&type->mPointerNum==field_type_759->mPointerNum&&field_type_759->mHeap,                _if_conditional595) {
                    # 2637 "05function2.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2638 "05function2.c"
                    exit(2);
                }
                # 2659 "05function2.c"
                # 2641 "05function2.c"
                if(field_type_759->mHeap) {
                    # 2642 "05function2.c"
                    char source2_760[1024];
                    memset(&source2_760, 0, sizeof(char)                    *(1024)                    );
                    # 2643 "05function2.c"
                    snprintf(source2_760,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_758,name_758,name_758);
                    # 2645 "05function2.c"
                    buffer_append_str(source_747,source2_760);
                }
                else {
                    # 2659 "05function2.c"
                    # 2647 "05function2.c"
                    if(_if_conditional597=list$1sNodeph_length(field_type_759->mArrayNum)>0,                    _if_conditional597) {
                        # 2648 "05function2.c"
                        char source2_761[1024];
                        memset(&source2_761, 0, sizeof(char)                        *(1024)                        );
                        # 2649 "05function2.c"
                        snprintf(source2_761,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_758,name_758,name_758);
                        # 2651 "05function2.c"
                        buffer_append_str(source_747,source2_761);
                    }
                    else {
                        # 2654 "05function2.c"
                        char source2_762[1024];
                        memset(&source2_762, 0, sizeof(char)                        *(1024)                        );
                        # 2655 "05function2.c"
                        snprintf(source2_762,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_758,name_758);
                        # 2657 "05function2.c"
                        buffer_append_str(source_747,source2_762);
                    }
                }
                name_758 = come_decrement_ref_count2(name_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_759, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_756, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2662 "05function2.c"
        buffer_append_str(source_747,((char*)(right_value887=xsprintf("return result;"))));
        right_value887 = come_decrement_ref_count2(right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2663 "05function2.c"
        buffer_append_char(source_747,125);
        # 2665 "05function2.c"
        p_763=info->p;
        # 2666 "05function2.c"
        sline_764=info->sline;
        # 2667 "05function2.c"
        sname_765=(char*)come_increment_ref_count(info->sname);
        # 2668 "05function2.c"
        source3_766=(struct buffer*)come_increment_ref_count(info->source);
        # 2669 "05function2.c"
        head_767=info->head;
        # 2671 "05function2.c"
        __dec_obj219=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_747);
        come_call_finalizer2(buffer_finalize,__dec_obj219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2672 "05function2.c"
        info->p=info->source->buf;
        # 2673 "05function2.c"
        info->head=info->source->buf;
        # 2675 "05function2.c"
        __dec_obj220=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value888=__builtin_string(real_fun_name_744))));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value888 = come_decrement_ref_count2(right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2676 "05function2.c"
        info->sline=1;
        # 2678 "05function2.c"
        block_768=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value889=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value889, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2680 "05function2.c"
        result_type_769=(struct sType*)come_increment_ref_count(((struct sType*)(right_value890=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value890, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2681 "05function2.c"
        name_770=(char*)come_increment_ref_count(((char*)(right_value891=string_clone(real_fun_name_744))));
        right_value891 = come_decrement_ref_count2(right_value891, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2682 "05function2.c"
        self_type_771=(struct sType*)come_increment_ref_count(((struct sType*)(right_value892=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value892, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2683 "05function2.c"
        self_type_771->mHeap=(_Bool)0;
        # 2684 "05function2.c"
        {__list_values31___772[0]=come_increment_ref_count(self_type_771);
}        param_types_773=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value894=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value893=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2684, "struct list$1sTypeph")))),1,__list_values31___772))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value893, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value894, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2685 "05function2.c"
        {__list_values32___774[0]=come_increment_ref_count(((char*)(right_value895=__builtin_string("self"))));
}        param_names_775=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value897=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value896=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2685, "struct list$1charph")))),1,__list_values32___774))));
        right_value895 = come_decrement_ref_count2(right_value895, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value896, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value897, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2686 "05function2.c"
        param_default_parametors_776=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value899=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value898=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2686, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value898, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value899, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2687 "05function2.c"
        list$1charph_push_back(param_default_parametors_776,((void*)0));
        # 2689 "05function2.c"
        header_buf_777=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value901=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value900=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2689, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value900, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value901, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2691 "05function2.c"
        buffer_append_str(header_buf_777,((char*)(right_value902=make_come_type_name_string(result_type_769,info))));
        right_value902 = come_decrement_ref_count2(right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2692 "05function2.c"
        buffer_append_str(header_buf_777," ");
        # 2693 "05function2.c"
        buffer_append_str(header_buf_777,real_fun_name_744);
        # 2694 "05function2.c"
        buffer_append_str(header_buf_777,"(");
        # 2708 "05function2.c"
        for(        i_778=0;        i_778<list$1sTypeph_length(param_types_773);        i_778++        ){
            # 2697 "05function2.c"
            param_type_779=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_773,i_778), "05function2.c", 2697, 11));
            # 2698 "05function2.c"
            param_name_780=((char*)come_null_check(list$1charphp_operator_load_element(param_names_775,i_778), "05function2.c", 2698, 12));
            # 2700 "05function2.c"
            buffer_append_str(header_buf_777,((char*)(right_value903=make_come_type_name_string(param_type_779,info))));
            right_value903 = come_decrement_ref_count2(right_value903, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2701 "05function2.c"
            buffer_append_str(header_buf_777," ");
            # 2702 "05function2.c"
            buffer_append_str(header_buf_777,param_name_780);
            # 2707 "05function2.c"
            # 2704 "05function2.c"
            if(_if_conditional598=i_778!=list$1sTypeph_length(param_types_773)-1,            _if_conditional598) {
                # 2705 "05function2.c"
                buffer_append_str(header_buf_777,",");
            }
        }
        # 2708 "05function2.c"
        buffer_append_str(header_buf_777,")");
        # 2710 "05function2.c"
        result_type_769->mStatic=(_Bool)0;
        # 2718 "05function2.c"
        fun_781=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value907=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value904=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2712, "sFun")))),(char*)come_increment_ref_count(name_770),(struct sType*)come_increment_ref_count(result_type_769),(struct list$1sTypeph*)come_increment_ref_count(param_types_773),(struct list$1charph*)come_increment_ref_count(param_names_775),(struct list$1charph*)come_increment_ref_count(param_default_parametors_776),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_768),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value905=buffer_to_string(header_buf_777)))),(char*)come_increment_ref_count(((char*)(right_value906=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value904, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value905 = come_decrement_ref_count2(right_value905, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value906 = come_decrement_ref_count2(right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value907, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2720 "05function2.c"
        fun_781->mCloner=(_Bool)1;
        # 2722 "05function2.c"
        fun2_782=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value908=__builtin_string(fun_name))));
        right_value908 = come_decrement_ref_count2(right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2727 "05function2.c"
        # 2723 "05function2.c"
        if(_if_conditional599=fun2_782==((void*)0)||fun2_782->mExternal,        _if_conditional599) {
            # 2724 "05function2.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value909=string_clone(name_770)))),(struct sFun*)come_increment_ref_count(fun_781));
            right_value909 = come_decrement_ref_count2(right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2727 "05function2.c"
        cloner_743=fun_781;
        # 2729 "05function2.c"
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2729, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value911=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value910=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2729, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_781),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sFunNode_sline;
        _inf_value13->sname=(void*)sFunNode_sname;
        _inf_value13->terminated=(void*)sFunNode_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_784=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value915=_inf_value13)));
        come_call_finalizer2(sFunNode_finalize,right_value910, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value911, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value915) { right_value915 = come_decrement_ref_count2(right_value915, ((struct sNode*)right_value915)->finalize, ((struct sNode*)right_value915)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2736 "05function2.c"
        # 2731 "05function2.c"
        if(_if_conditional606=!node_compile(node_784,info),        _if_conditional606) {
            # 2732 "05function2.c"
            err_msg(info,"compiling error(Y)");
            # 2733 "05function2.c"
            exit(2);
        }
        # 2736 "05function2.c"
        __dec_obj223=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_765);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 2737 "05function2.c"
        info->sline=sline_764;
        # 2739 "05function2.c"
        __dec_obj224=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_766);
        come_call_finalizer2(buffer_finalize,__dec_obj224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 2740 "05function2.c"
        info->p=p_763;
        # 2741 "05function2.c"
        info->head=head_767;
        # 2742 "05function2.c"
        info->sline=sline_764;
        come_call_finalizer2(buffer_finalize,source_747, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_765 = come_decrement_ref_count2(sname_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_766, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_768, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_769, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_770 = come_decrement_ref_count2(name_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_771, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_773, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_775, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_776, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_777, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_781, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_784) { node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2745 "05function2.c"
    info->current_stack_frame_struct=current_stack_frame_struct_742;
    # 2747 "05function2.c"
    __dec_obj225=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_739);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2748 "05function2.c"
    __dec_obj226=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_740);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2749 "05function2.c"
    __dec_obj227=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_741);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2751 "05function2.c"
    __result268__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value917=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value916=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2751, "struct tuple2$2sFunpcharph")))),cloner_743,(char*)come_increment_ref_count(real_fun_name_744))));
    last_code_739 = come_decrement_ref_count2(last_code_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_740 = come_decrement_ref_count2(last_code2_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_741 = come_decrement_ref_count2(last_code3_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_744 = come_decrement_ref_count2(real_fun_name_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_745, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value916 = come_decrement_ref_count2(right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value917, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result268__;
    last_code_739 = come_decrement_ref_count2(last_code_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_740 = come_decrement_ref_count2(last_code2_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_741 = come_decrement_ref_count2(last_code3_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_744 = come_decrement_ref_count2(real_fun_name_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_745, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional600;
_Bool _if_conditional601;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sFunNode_finalize"
            # 0 "sFunNode_finalize"
            if(_if_conditional600=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional600) {
                # 0 "sFunNode_finalize"
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sFunNode_finalize"
            # 1 "sFunNode_finalize"
            if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional601) {
                # 1 "sFunNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional602;
struct sFunNode* __result266__;
void* right_value912;
struct sFunNode* result_783;
_Bool _if_conditional603;
void* right_value913;
struct sFun* __dec_obj221;
_Bool _if_conditional604;
_Bool _if_conditional605;
void* right_value914;
char* __dec_obj222;
struct sFunNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value912 = (void*)0;
memset(&result_783, 0, sizeof(struct sFunNode*));
right_value913 = (void*)0;
right_value914 = (void*)0;
            # 3 "sFunNode_clone"
            # 2 "sFunNode_clone"
            if(_if_conditional602=self==(void*)0,            _if_conditional602) {
                # 2 "sFunNode_clone"
                __result266__ = __result_obj__ = (void*)0;
                return __result266__;
            }
            # 3 "sFunNode_clone"
            result_783=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value912=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value912, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sFunNode_clone"
            # 4 "sFunNode_clone"
            if(_if_conditional603=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional603) {
                # 4 "sFunNode_clone"
                __dec_obj221=result_783->mFun;
                result_783->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value913=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value913, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 6 "sFunNode_clone"
            # 5 "sFunNode_clone"
            if(_if_conditional604=self!=((void*)0),            _if_conditional604) {
                # 5 "sFunNode_clone"
                result_783->sline=self->sline;
            }
            # 7 "sFunNode_clone"
            # 6 "sFunNode_clone"
            if(_if_conditional605=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional605) {
                # 6 "sFunNode_clone"
                __dec_obj222=result_783->sname;
                result_783->sname=(char*)come_increment_ref_count(((char*)(right_value914=string_clone(self->sname))));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value914 = come_decrement_ref_count2(right_value914, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sFunNode_clone"
            __result267__ = __result_obj__ = result_783;
            come_call_finalizer2(sFunNode_finalize,result_783, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result267__;
            come_call_finalizer2(sFunNode_finalize,result_783, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

