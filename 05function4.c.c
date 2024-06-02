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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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










void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_47, 0, sizeof(int));
    # 5 "05function4.c"
    nest_47=0;
    # 26 "05function4.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 25 "05function4.c"
        # 7 "05function4.c"
        if(_if_conditional19=*info->p==40,        _if_conditional19) {
            # 8 "05function4.c"
            info->p++;
            # 9 "05function4.c"
            skip_spaces_and_lf(info);
            # 11 "05function4.c"
            nest_47++;
        }
        else {
            # 25 "05function4.c"
            # 13 "05function4.c"
            if(_if_conditional20=*info->p==41,            _if_conditional20) {
                # 14 "05function4.c"
                info->p++;
                # 15 "05function4.c"
                skip_spaces_and_lf(info);
                # 17 "05function4.c"
                nest_47--;
                # 21 "05function4.c"
                # 18 "05function4.c"
                if(_if_conditional21=nest_47==0,                _if_conditional21) {
                    # 19 "05function4.c"
                    break;
                }
            }
            else {
                # 23 "05function4.c"
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional8;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _if_conditional22;
_Bool _while_condtional11;
_Bool _if_conditional23;
_Bool _if_conditional24;
int line_48;
void* right_value79;
void* right_value80;
struct buffer* fname_49;
_Bool _while_condtional12;
_Bool _if_conditional25;
_Bool _while_condtional13;
_Bool _while_condtional14;
void* right_value81;
char* __dec_obj12;
_Bool _if_conditional26;
_Bool _while_condtional15;
_Bool _while_condtional16;
_Bool _while_condtional17;
_Bool _while_condtional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_48, 0, sizeof(int));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&fname_49, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
    # 35 "05function4.c"
    while(_while_condtional8=strmemcmp(info->p,"__attribute__"),    _while_condtional8) {
        # 31 "05function4.c"
        info->p+=strlen("__attribute__");
        # 32 "05function4.c"
        skip_spaces_and_lf(info);
        # 33 "05function4.c"
        skip_paren(info);
    }
    # 39 "05function4.c"
    while(_while_condtional9=strmemcmp(info->p,"__extension__"),    _while_condtional9) {
        # 36 "05function4.c"
        info->p+=strlen("__extension__");
        # 37 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 114 "05function4.c"
    while(_while_condtional10=*info->p==35,    _while_condtional10) {
        # 53 "05function4.c"
        skip_spaces_and_lf(info);
        # 55 "05function4.c"
        info->p++;
        # 56 "05function4.c"
        skip_spaces_and_lf(info);
        # 111 "05function4.c"
        # 58 "05function4.c"
        if(_if_conditional22=strmemcmp(info->p,"pragma"),        _if_conditional22) {
            # 68 "05function4.c"
            while(_while_condtional11=*info->p,            _while_condtional11) {
                # 67 "05function4.c"
                # 60 "05function4.c"
                if(_if_conditional23=*info->p==10,                _if_conditional23) {
                    # 61 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 62 "05function4.c"
                    break;
                }
                else {
                    # 65 "05function4.c"
                    info->p++;
                }
            }
        }
        else {
            # 111 "05function4.c"
            # 69 "05function4.c"
            if(_if_conditional24=xisdigit(*info->p),            _if_conditional24) {
                # 70 "05function4.c"
                line_48=0;
                # 71 "05function4.c"
                fname_49=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 77 "05function4.c"
                while(_while_condtional12=xisdigit(*info->p),                _while_condtional12) {
                    # 74 "05function4.c"
                    line_48=line_48*10+(*info->p-48);
                    # 75 "05function4.c"
                    info->p++;
                }
                # 77 "05function4.c"
                skip_spaces_and_lf(info);
                # 93 "05function4.c"
                # 79 "05function4.c"
                if(_if_conditional25=*info->p==34,                _if_conditional25) {
                    # 80 "05function4.c"
                    info->p++;
                    # 87 "05function4.c"
                    while(_while_condtional13=*info->p!=34,                    _while_condtional13) {
                        # 83 "05function4.c"
                        buffer_append_char(fname_49,*info->p);
                        # 84 "05function4.c"
                        info->p++;
                    }
                    # 90 "05function4.c"
                    while(_while_condtional14=*info->p!=10,                    _while_condtional14) {
                        # 88 "05function4.c"
                        info->p++;
                    }
                    # 90 "05function4.c"
                    info->p++;
                }
                # 93 "05function4.c"
                info->sline=line_48;
                # 94 "05function4.c"
                __dec_obj12=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value81=buffer_to_string(fname_49))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 96 "05function4.c"
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 111 "05function4.c"
                # 98 "05function4.c"
                if(_if_conditional26=*info->p==34,                _if_conditional26) {
                    # 99 "05function4.c"
                    info->p++;
                    # 105 "05function4.c"
                    while(_while_condtional15=*info->p!=34,                    _while_condtional15) {
                        # 102 "05function4.c"
                        info->p++;
                    }
                    # 108 "05function4.c"
                    while(_while_condtional16=*info->p!=10,                    _while_condtional16) {
                        # 106 "05function4.c"
                        info->p++;
                    }
                    # 108 "05function4.c"
                    info->p++;
                }
            }
        }
        # 111 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 119 "05function4.c"
    while(_while_condtional17=strmemcmp(info->p,"__attribute__"),    _while_condtional17) {
        # 115 "05function4.c"
        info->p+=strlen("__attribute__");
        # 116 "05function4.c"
        skip_spaces_and_lf(info);
        # 117 "05function4.c"
        skip_paren(info);
    }
    # 123 "05function4.c"
    while(_while_condtional18=strmemcmp(info->p,"__extension__"),    _while_condtional18) {
        # 120 "05function4.c"
        info->p+=strlen("__extension__");
        # 121 "05function4.c"
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_50;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_50, 0, sizeof(char));
    # 139 "05function4.c"
    c_50=*(info->p+strlen(str));
    # 140 "05function4.c"
    __result52__ = strmemcmp(info->p,str)&&(c_50==59||c_50==32||c_50==9||c_50==10||c_50==10);
    return __result52__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* buf_51;
_Bool _while_condtional19;
void* right_value84;
_Bool _if_conditional27;
void* right_value85;
char* __result53__;
void* right_value86;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_51, 0, sizeof(struct buffer*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
    # 145 "05function4.c"
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 146 "05function4.c"
    parse_sharp_v5(info);
    # 153 "05function4.c"
    while(_while_condtional19=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional19) {
        # 150 "05function4.c"
        buffer_append_char(buf_51,*info->p);
        # 151 "05function4.c"
        info->p++;
    }
    # 153 "05function4.c"
    skip_spaces_and_lf(info);
    # 160 "05function4.c"
    # 155 "05function4.c"
    if(_if_conditional27=string_length(((char*)(right_value84=buffer_to_string(buf_51))))==0,    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional27) {
        # 156 "05function4.c"
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        # 157 "05function4.c"
        __result53__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    # 160 "05function4.c"
    __result54__ = __result_obj__ = ((char*)(right_value86=buffer_to_string(buf_51)));
    come_call_finalizer2(buffer_finalize,buf_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
    come_call_finalizer2(buffer_finalize,buf_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional20;
_Bool _if_conditional28;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
    # 177 "05function4.c"
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        # 176 "05function4.c"
        # 166 "05function4.c"
        if(_if_conditional28=*info->p==32||*info->p==9,        _if_conditional28) {
            # 167 "05function4.c"
            info->p++;
        }
        else {
            # 176 "05function4.c"
            # 169 "05function4.c"
            if(_if_conditional29=*info->p==10,            _if_conditional29) {
                # 170 "05function4.c"
                info->p++;
                # 171 "05function4.c"
                info->sline++;
            }
            else {
                # 174 "05function4.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_52;
struct sType* it_55;
_Bool _if_conditional34;
_Bool __result62__;
struct list$1sTypeph* o2_saved_64;
struct sType* it_65;
_Bool _if_conditional52;
_Bool __result63__;
_Bool _if_conditional53;
_Bool __result64__;
_Bool _if_conditional54;
_Bool __result65__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_52, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct sType*));
memset(&o2_saved_64, 0, sizeof(struct list$1sTypeph*));
memset(&it_65, 0, sizeof(struct sType*));
    # 186 "05function4.c"
    for(    o2_saved_52=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_55=list$1sTypeph_begin((o2_saved_52));    !list$1sTypeph_end((o2_saved_52));    it_55=list$1sTypeph_next((o2_saved_52))    ){
        # 185 "05function4.c"
        # 182 "05function4.c"
        if(_if_conditional34=is_contained_generics_class(it_55,info),        _if_conditional34) {
            # 183 "05function4.c"
            __result62__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result62__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 192 "05function4.c"
    for(    o2_saved_64=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_65=list$1sTypeph_begin((o2_saved_64));    !list$1sTypeph_end((o2_saved_64));    it_65=list$1sTypeph_next((o2_saved_64))    ){
        # 190 "05function4.c"
        # 187 "05function4.c"
        if(_if_conditional52=is_contained_generics_class(it_65,info),        _if_conditional52) {
            # 188 "05function4.c"
            __result63__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result63__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 195 "05function4.c"
    # 192 "05function4.c"
    if(type->mClass->mGenerics) {
        # 193 "05function4.c"
        __result64__ = (_Bool)1;
        return __result64__;
    }
    # 199 "05function4.c"
    # 195 "05function4.c"
    if(type->mClass->mMethodGenerics) {
        # 196 "05function4.c"
        __result65__ = (_Bool)1;
        return __result65__;
    }
    # 199 "05function4.c"
    __result66__ = (_Bool)0;
    return __result66__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct sType* result_53;
struct sType* __result55__;
_Bool _if_conditional31;
struct sType* __result56__;
struct sType* result_54;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct sType*));
memset(&result_54, 0, sizeof(struct sType*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional30=self==((void*)0),        _if_conditional30) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_53,0,sizeof(struct sType*));
            # 288 "./neo-c.h"
            __result55__ = __result_obj__ = result_53;
            return __result55__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result56__ = __result_obj__ = self->it->item;
            return __result56__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_54,0,sizeof(struct sType*));
        # 298 "./neo-c.h"
        __result57__ = __result_obj__ = result_54;
        return __result57__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result58__ = self==((void*)0)||self->it==((void*)0);
        return __result58__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct sType* result_56;
struct sType* __result59__;
_Bool _if_conditional33;
struct sType* __result60__;
struct sType* result_57;
struct sType* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(struct sType*));
memset(&result_57, 0, sizeof(struct sType*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional32=self==((void*)0)||self->it==((void*)0),        _if_conditional32) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_56,0,sizeof(struct sType*));
            # 305 "./neo-c.h"
            __result59__ = __result_obj__ = result_56;
            return __result59__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result60__ = __result_obj__ = self->it->item;
            return __result60__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_57,0,sizeof(struct sType*));
        # 316 "./neo-c.h"
        __result61__ = __result_obj__ = result_57;
        return __result61__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional21;
struct list_item$1sTypeph* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1sTypeph*));
                # 123 "./neo-c.h"
                it_58=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional21=it_58!=((void*)0),                _while_condtional21) {
                    # 125 "./neo-c.h"
                    prev_it_59=it_58;
                    # 126 "./neo-c.h"
                    it_58=it_58->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional35) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional36=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional36) {
                                    # 0 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional37=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional37) {
                                    # 1 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional39=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional39) {
                                    # 2 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional40=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional40) {
                                    # 3 "sType_finalize"
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional41=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional41) {
                                    # 4 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional42) {
                                    # 5 "sType_finalize"
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional44) {
                                    # 6 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional45) {
                                    # 7 "sType_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional47=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional47) {
                                    # 8 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional48=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional48) {
                                    # 9 "sType_finalize"
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional49=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional49) {
                                    # 10 "sType_finalize"
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional50=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional50) {
                                    # 11 "sType_finalize"
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sType_finalize"
                                # 12 "sType_finalize"
                                if(_if_conditional51=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional51) {
                                    # 12 "sType_finalize"
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional38=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional38) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_60;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sNodeph*));
                                        # 123 "./neo-c.h"
                                        it_60=self->head;
                                        # 129 "./neo-c.h"
                                        while(_while_condtional22=it_60!=((void*)0),                                        _while_condtional22) {
                                            # 125 "./neo-c.h"
                                            prev_it_61=it_60;
                                            # 126 "./neo-c.h"
                                            it_60=it_60->next;
                                            # 127 "./neo-c.h"
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional43=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional43) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_62;
_Bool _while_condtional23;
struct list_item$1charph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1charph*));
                                        # 123 "./neo-c.h"
                                        it_62=self->head;
                                        # 129 "./neo-c.h"
                                        while(_while_condtional23=it_62!=((void*)0),                                        _while_condtional23) {
                                            # 125 "./neo-c.h"
                                            prev_it_63=it_62;
                                            # 126 "./neo-c.h"
                                            it_62=it_62->next;
                                            # 127 "./neo-c.h"
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional46=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional46) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value87;
void* right_value88;
struct list$1sTypeph* param_types_66;
void* right_value89;
void* right_value90;
struct list$1charph* param_names_67;
void* right_value91;
void* right_value92;
struct list$1charph* param_default_parametors_68;
_Bool var_args_69;
_Bool void_param_70;
char* p_71;
int sline_72;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _while_condtional24;
_Bool _if_conditional60;
void* right_value93;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_73;
char* param_name_74;
_Bool err_75;
_Bool _if_conditional63;
void* right_value94;
void* right_value95;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result70__;
void* right_value96;
struct sType* param_type2_76;
void* right_value135;
void* right_value139;
_Bool _if_conditional142;
char* p_101;
_Bool no_comma_102;
void* right_value140;
struct sNode* node_103;
char* p2_104;
void* right_value141;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value142;
void* right_value143;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&param_types_66, 0, sizeof(struct list$1sTypeph*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&param_names_67, 0, sizeof(struct list$1charph*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&param_default_parametors_68, 0, sizeof(struct list$1charph*));
memset(&var_args_69, 0, sizeof(_Bool));
memset(&void_param_70, 0, sizeof(_Bool));
memset(&p_71, 0, sizeof(char*));
memset(&sline_72, 0, sizeof(int));
right_value93 = (void*)0;
memset(&param_type_73, 0, sizeof(struct sType*));
memset(&param_name_74, 0, sizeof(char*));
memset(&err_75, 0, sizeof(_Bool));
memset(&param_type_73, 0, sizeof(struct sType*));
memset(&param_name_74, 0, sizeof(char*));
memset(&err_75, 0, sizeof(_Bool));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&param_type2_76, 0, sizeof(struct sType*));
right_value135 = (void*)0;
right_value139 = (void*)0;
memset(&p_101, 0, sizeof(char*));
memset(&no_comma_102, 0, sizeof(_Bool));
right_value140 = (void*)0;
memset(&node_103, 0, sizeof(struct sNode*));
memset(&p2_104, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
    # 204 "05function4.c"
    param_types_66=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 204, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 205 "05function4.c"
    param_names_67=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 205, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 206 "05function4.c"
    param_default_parametors_68=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 206, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 207 "05function4.c"
    var_args_69=(_Bool)0;
    # 209 "05function4.c"
    expected_next_character(40,info);
    # 212 "05function4.c"
    void_param_70=(_Bool)0;
    # 230 "05function4.c"
    {
        # 214 "05function4.c"
        p_71=info->p;
        # 215 "05function4.c"
        sline_72=info->sline;
        # 226 "05function4.c"
        # 217 "05function4.c"
        if(_if_conditional55=strmemcmp(info->p,"void"),        _if_conditional55) {
            # 218 "05function4.c"
            info->p+=strlen("void");
            # 219 "05function4.c"
            skip_spaces_and_lf(info);
            # 224 "05function4.c"
            # 221 "05function4.c"
            if(_if_conditional56=*info->p==41,            _if_conditional56) {
                # 222 "05function4.c"
                void_param_70=(_Bool)1;
            }
        }
        # 226 "05function4.c"
        info->p=p_71;
        # 227 "05function4.c"
        info->sline=sline_72;
    }
    # 315 "05function4.c"
    # 230 "05function4.c"
    if(void_param_70) {
        # 240 "05function4.c"
        # 231 "05function4.c"
        if(_if_conditional58=strmemcmp(info->p,"void"),        _if_conditional58) {
            # 232 "05function4.c"
            info->p+=strlen("void");
            # 233 "05function4.c"
            skip_spaces_and_lf(info);
            # 239 "05function4.c"
            # 235 "05function4.c"
            if(_if_conditional59=*info->p==41,            _if_conditional59) {
                # 236 "05function4.c"
                info->p++;
                # 237 "05function4.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 313 "05function4.c"
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            # 249 "05function4.c"
            # 243 "05function4.c"
            if(_if_conditional60=*info->p==41,            _if_conditional60) {
                # 244 "05function4.c"
                info->p++;
                # 245 "05function4.c"
                skip_spaces_and_lf(info);
                # 246 "05function4.c"
                break;
            }
            # 249 "05function4.c"
            parse_sharp_v5(info);
            # 251 "05function4.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value93=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_73=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_74=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_75=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 258 "05function4.c"
            # 253 "05function4.c"
            if(_if_conditional63=!err_75,            _if_conditional63) {
                # 254 "05function4.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 255 "05function4.c"
                __result70__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value95=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value94=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05function4.c", 255, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_74 = come_decrement_ref_count2(param_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result70__;
            }
            # 258 "05function4.c"
            param_type2_76=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=solve_generics(param_type_73,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 260 "05function4.c"
            param_type2_76->mFunctionParam=(_Bool)1;
            # 262 "05function4.c"
            list$1sTypeph_push_back(param_types_66,(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(param_type2_76)))));
            come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 263 "05function4.c"
            list$1charph_push_back(param_names_67,(char*)come_increment_ref_count(((char*)(right_value139=string_clone(param_name_74)))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 292 "05function4.c"
            # 265 "05function4.c"
            if(_if_conditional142=*info->p==61,            _if_conditional142) {
                # 266 "05function4.c"
                info->p++;
                # 267 "05function4.c"
                skip_spaces_and_lf(info);
                # 269 "05function4.c"
                parse_sharp_v5(info);
                # 271 "05function4.c"
                p_101=info->p;
                # 273 "05function4.c"
                no_comma_102=info->no_comma;
                # 274 "05function4.c"
                info->no_comma=(_Bool)1;
                # 276 "05function4.c"
                node_103=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=expression_v13(info))));
                if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 278 "05function4.c"
                info->no_comma=no_comma_102;
                # 280 "05function4.c"
                p2_104=info->p;
                # 282 "05function4.c"
                char buf_105[p2_104-p_101+1];
                memset(&buf_105, 0, sizeof(char)                *(p2_104-p_101+1)                );
                # 283 "05function4.c"
                memcpy(buf_105,p_101,p2_104-p_101);
                # 284 "05function4.c"
                buf_105[p2_104-p_101]=0;
                # 286 "05function4.c"
                list$1charph_push_back(param_default_parametors_68,(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(buf_105)))));
                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_103) { node_103 = come_decrement_ref_count2(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 289 "05function4.c"
                list$1charph_push_back(param_default_parametors_68,((void*)0));
            }
            # 292 "05function4.c"
            parse_sharp_v5(info);
            # 312 "05function4.c"
            # 294 "05function4.c"
            if(_if_conditional143=*info->p==44,            _if_conditional143) {
                # 295 "05function4.c"
                info->p++;
                # 296 "05function4.c"
                skip_spaces_and_lf(info);
                # 306 "05function4.c"
                # 298 "05function4.c"
                if(_if_conditional144=strmemcmp(info->p,"..."),                _if_conditional144) {
                    # 299 "05function4.c"
                    info->p+=strlen("...");
                    # 300 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 301 "05function4.c"
                    var_args_69=(_Bool)1;
                    # 303 "05function4.c"
                    expected_next_character(41,info);
                    # 304 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_74 = come_decrement_ref_count2(param_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 312 "05function4.c"
                # 307 "05function4.c"
                if(_if_conditional145=*info->p==41,                _if_conditional145) {
                    # 308 "05function4.c"
                    info->p++;
                    # 309 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 310 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_74 = come_decrement_ref_count2(param_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_74 = come_decrement_ref_count2(param_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 315 "05function4.c"
    __result90__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value143=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value142=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 315, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_66),(struct list$1charph*)come_increment_ref_count(param_names_67),(struct list$1charph*)come_increment_ref_count(param_default_parametors_68),var_args_69)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result90__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./neo-c.h"
        self->head=((void*)0);
        # 105 "./neo-c.h"
        self->tail=((void*)0);
        # 106 "./neo-c.h"
        self->len=0;
        # 108 "./neo-c.h"
        __result67__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result67__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./neo-c.h"
        self->head=((void*)0);
        # 105 "./neo-c.h"
        self->tail=((void*)0);
        # 106 "./neo-c.h"
        self->len=0;
        # 108 "./neo-c.h"
        __result68__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result68__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional61;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional61=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional61) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional62=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional62) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1842 "./neo-c.h"
                    self->v1=v1;
                    # 1843 "./neo-c.h"
                    self->v2=v2;
                    # 1844 "./neo-c.h"
                    self->v3=v3;
                    # 1845 "./neo-c.h"
                    self->v4=v4;
                    # 1847 "./neo-c.h"
                    __result69__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result69__;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional64;
void* right_value97;
struct list_item$1sTypeph* litem_77;
struct sType* __dec_obj13;
_Bool _if_conditional65;
void* right_value98;
struct list_item$1sTypeph* litem_78;
struct sType* __dec_obj14;
void* right_value99;
struct list_item$1sTypeph* litem_79;
struct sType* __dec_obj15;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sTypeph*));
right_value98 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sTypeph*));
right_value99 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional64=self->len==0,                _if_conditional64) {
                    # 226 "./neo-c.h"
                    litem_77=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_77->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_77->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj13=litem_77->item;
                    litem_77->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_77;
                    # 233 "./neo-c.h"
                    self->head=litem_77;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional65=self->len==1,                    _if_conditional65) {
                        # 236 "./neo-c.h"
                        litem_78=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_78->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_78->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj14=litem_78->item;
                        litem_78->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_78;
                        # 243 "./neo-c.h"
                        self->head->next=litem_78;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value99=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_79->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_79->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj15=litem_79->item;
                        litem_79->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_79;
                        # 253 "./neo-c.h"
                        self->tail=litem_79;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result71__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional66;
struct sType* __result72__;
void* right_value100;
struct sType* result_80;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value107;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional72;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional76;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional77;
void* right_value112;
char* __dec_obj23;
_Bool _if_conditional78;
void* right_value113;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional79;
void* right_value121;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value122;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional94;
void* right_value129;
struct list$1charph* __dec_obj33;
_Bool _if_conditional98;
void* right_value130;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value131;
struct sNode* __dec_obj35;
_Bool _if_conditional101;
_Bool _if_conditional102;
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
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value132;
struct sNode* __dec_obj36;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value133;
char* __dec_obj37;
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
void* right_value134;
char* __dec_obj38;
_Bool _if_conditional139;
struct sType* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_80, 0, sizeof(struct sType*));
right_value107 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional66=self==(void*)0,                _if_conditional66) {
                    # 2 "sType_clone"
                    __result72__ = __result_obj__ = (void*)0;
                    return __result72__;
                }
                # 3 "sType_clone"
                result_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional67=self!=((void*)0),                _if_conditional67) {
                    # 4 "sType_clone"
                    result_80->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional68=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional68) {
                    # 5 "sType_clone"
                    __dec_obj19=result_80->mMultipleTypes;
                    result_80->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional72=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional72) {
                    # 6 "sType_clone"
                    __dec_obj21=result_80->mNoSolvedGenericsType;
                    result_80->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional76=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional76) {
                    # 7 "sType_clone"
                    __dec_obj22=result_80->mOriginalLoadVarType;
                    result_80->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional77=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional77) {
                    # 8 "sType_clone"
                    __dec_obj23=result_80->mGenericsName;
                    result_80->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mGenericsName))));
                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional78=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional78) {
                    # 9 "sType_clone"
                    __dec_obj24=result_80->mGenericsTypes;
                    result_80->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value113=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional79=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional79) {
                    # 10 "sType_clone"
                    __dec_obj28=result_80->mArrayNum;
                    result_80->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value121=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 11 "sType_clone"
                    result_80->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional93=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional93) {
                    # 12 "sType_clone"
                    __dec_obj29=result_80->mParamTypes;
                    result_80->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional94=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional94) {
                    # 13 "sType_clone"
                    __dec_obj33=result_80->mParamNames;
                    result_80->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional98=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional98) {
                    # 14 "sType_clone"
                    __dec_obj34=result_80->mResultType;
                    result_80->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value130=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 15 "sType_clone"
                    result_80->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional100=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional100) {
                    # 16 "sType_clone"
                    __dec_obj35=result_80->mAlignas;
                    result_80->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(self->mAlignas))));
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 17 "sType_clone"
                    result_80->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 18 "sType_clone"
                    result_80->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 19 "sType_clone"
                    result_80->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 20 "sType_clone"
                    result_80->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 21 "sType_clone"
                    result_80->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 22 "sType_clone"
                    result_80->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 23 "sType_clone"
                    result_80->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 24 "sType_clone"
                    result_80->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    # 25 "sType_clone"
                    result_80->mRecord=self->mRecord;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 26 "sType_clone"
                    result_80->mExtern=self->mExtern;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 27 "sType_clone"
                    result_80->mRestrict=self->mRestrict;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    # 28 "sType_clone"
                    result_80->mImmutable=self->mImmutable;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 29 "sType_clone"
                    result_80->mHeap=self->mHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 30 "sType_clone"
                    result_80->mDummyHeap=self->mDummyHeap;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    # 31 "sType_clone"
                    result_80->mDelegate=self->mDelegate;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    # 32 "sType_clone"
                    result_80->mShare=self->mShare;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 33 "sType_clone"
                    result_80->mClone=self->mClone;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 34 "sType_clone"
                    result_80->mNoHeap=self->mNoHeap;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    # 35 "sType_clone"
                    result_80->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 36 "sType_clone"
                    result_80->mRefference=self->mRefference;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    # 37 "sType_clone"
                    result_80->mException=self->mException;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    # 38 "sType_clone"
                    result_80->mPointerNum=self->mPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    # 39 "sType_clone"
                    result_80->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    # 40 "sType_clone"
                    result_80->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional125=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional125) {
                    # 41 "sType_clone"
                    __dec_obj36=result_80->mSizeNum;
                    result_80->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=sNode_clone(self->mSizeNum))));
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    # 42 "sType_clone"
                    result_80->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    # 43 "sType_clone"
                    result_80->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional128=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional128) {
                    # 44 "sType_clone"
                    __dec_obj37=result_80->mOriginalTypeName;
                    result_80->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value133=string_clone(self->mOriginalTypeName))));
                    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    # 45 "sType_clone"
                    result_80->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    # 46 "sType_clone"
                    result_80->mFunctionParam=self->mFunctionParam;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    # 47 "sType_clone"
                    result_80->mAllocaValue=self->mAllocaValue;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    # 48 "sType_clone"
                    result_80->mGenericsStruct=self->mGenericsStruct;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    # 49 "sType_clone"
                    result_80->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    # 50 "sType_clone"
                    result_80->mComeMemCore=self->mComeMemCore;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    # 51 "sType_clone"
                    result_80->mInline=self->mInline;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    # 52 "sType_clone"
                    result_80->mNullValue=self->mNullValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    # 53 "sType_clone"
                    result_80->mGuardValue=self->mGuardValue;
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional138=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional138) {
                    # 54 "sType_clone"
                    __dec_obj38=result_80->mAsmName;
                    result_80->mAsmName=(char*)come_increment_ref_count(((char*)(right_value134=string_clone(self->mAsmName))));
                    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 56 "sType_clone"
                # 55 "sType_clone"
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    # 55 "sType_clone"
                    result_80->mArrayPointerType=self->mArrayPointerType;
                }
                # 56 "sType_clone"
                __result87__ = __result_obj__ = result_80;
                come_call_finalizer2(sType_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
                come_call_finalizer2(sType_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1sTypeph* __result73__;
void* right_value101;
void* right_value102;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
_Bool _while_condtional25;
void* right_value106;
struct list$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&result_81, 0, sizeof(struct list$1sTypeph*));
memset(&it_82, 0, sizeof(struct list_item$1sTypeph*));
right_value106 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional69=self==((void*)0),                        _if_conditional69) {
                            # 140 "./neo-c.h"
                            __result73__ = __result_obj__ = ((void*)0);
                            return __result73__;
                        }
                        # 142 "./neo-c.h"
                        result_81=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_82=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional25=it_82!=((void*)0),                        _while_condtional25) {
                            # 146 "./neo-c.h"
                            list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(it_82->item)))));
                            come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_82=it_82->next;
                        }
                        # 151 "./neo-c.h"
                        __result75__ = __result_obj__ = result_81;
                        come_call_finalizer2(list$1sTypephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result75__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value103;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj16;
_Bool _if_conditional71;
void* right_value104;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj17;
void* right_value105;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj18;
struct list$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
right_value105 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional70=self->len==0,                                _if_conditional70) {
                                    # 156 "./neo-c.h"
                                    litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_83->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_83->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj16=litem_83->item;
                                    litem_83->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_83;
                                    # 163 "./neo-c.h"
                                    self->head=litem_83;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional71=self->len==1,                                    _if_conditional71) {
                                        # 166 "./neo-c.h"
                                        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_84->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_84->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj17=litem_84->item;
                                        litem_84->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_84;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_84;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value105=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_85->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_85->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj18=litem_85->item;
                                        litem_85->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_85;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_85;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result74__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result74__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct tuple1$1sTypeph* __result76__;
void* right_value108;
struct tuple1$1sTypeph* result_86;
_Bool _if_conditional75;
void* right_value109;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&result_86, 0, sizeof(struct tuple1$1sTypeph*));
right_value109 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional73=self==(void*)0,                        _if_conditional73) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result76__ = __result_obj__ = (void*)0;
                            return __result76__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_86=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional75) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj20=result_86->v1;
                            result_86->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result77__ = __result_obj__ = result_86;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result77__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional74=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional74) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional80;
struct list$1sNodeph* __result78__;
void* right_value114;
void* right_value115;
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
_Bool _while_condtional26;
void* right_value120;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&result_87, 0, sizeof(struct list$1sNodeph*));
memset(&it_88, 0, sizeof(struct list_item$1sNodeph*));
right_value120 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional80=self==((void*)0),                        _if_conditional80) {
                            # 140 "./neo-c.h"
                            __result78__ = __result_obj__ = ((void*)0);
                            return __result78__;
                        }
                        # 142 "./neo-c.h"
                        result_87=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value115=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_88=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional26=it_88!=((void*)0),                        _while_condtional26) {
                            # 146 "./neo-c.h"
                            list$1sNodeph_add(result_87,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(it_88->item)))));
                            if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./neo-c.h"
                            it_88=it_88->next;
                        }
                        # 151 "./neo-c.h"
                        __result83__ = __result_obj__ = result_87;
                        come_call_finalizer2(list$1sNodephp_finalize,result_87, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result83__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result79__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value116;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj25;
_Bool _if_conditional82;
void* right_value117;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj26;
void* right_value118;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sNodeph*));
right_value117 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional81=self->len==0,                                _if_conditional81) {
                                    # 156 "./neo-c.h"
                                    litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_89->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_89->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj25=litem_89->item;
                                    litem_89->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./neo-c.h"
                                    self->tail=litem_89;
                                    # 163 "./neo-c.h"
                                    self->head=litem_89;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional82=self->len==1,                                    _if_conditional82) {
                                        # 166 "./neo-c.h"
                                        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value117=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_90->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_90->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj26=litem_90->item;
                                        litem_90->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./neo-c.h"
                                        self->tail=litem_90;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_90;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value118=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_91->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_91->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj27=litem_91->item;
                                        litem_91->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_91;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_91;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result80__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result80__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional83;
struct sNode* __result81__;
void* right_value119;
struct sNode* result_92;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&result_92, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional83=self==(void*)0,                                _if_conditional83) {
                                    # 2 "sNode_clone"
                                    __result81__ = __result_obj__ = (void*)0;
                                    return __result81__;
                                }
                                # 3 "sNode_clone"
                                result_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional84=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional84) {
                                    # 4 "sNode_clone"
                                    result_92->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional85=self!=((void*)0),                                _if_conditional85) {
                                    # 5 "sNode_clone"
                                    result_92->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional86=self!=((void*)0),                                _if_conditional86) {
                                    # 6 "sNode_clone"
                                    result_92->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional87=self!=((void*)0),                                _if_conditional87) {
                                    # 7 "sNode_clone"
                                    result_92->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional88=self!=((void*)0),                                _if_conditional88) {
                                    # 8 "sNode_clone"
                                    result_92->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional89=self!=((void*)0),                                _if_conditional89) {
                                    # 9 "sNode_clone"
                                    result_92->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional90=self!=((void*)0),                                _if_conditional90) {
                                    # 10 "sNode_clone"
                                    result_92->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional91=self!=((void*)0),                                _if_conditional91) {
                                    # 11 "sNode_clone"
                                    result_92->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result82__ = __result_obj__ = result_92;
                                if(result_92) { result_92 = come_decrement_ref_count2(result_92, ((struct sNode*)result_92)->finalize, ((struct sNode*)result_92)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result82__;
                                if(result_92) { result_92 = come_decrement_ref_count2(result_92, ((struct sNode*)result_92)->finalize, ((struct sNode*)result_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct list$1charph* __result84__;
void* right_value123;
void* right_value124;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
_Bool _while_condtional27;
void* right_value128;
struct list$1charph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1charph*));
memset(&it_94, 0, sizeof(struct list_item$1charph*));
right_value128 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional95=self==((void*)0),                        _if_conditional95) {
                            # 140 "./neo-c.h"
                            __result84__ = __result_obj__ = ((void*)0);
                            return __result84__;
                        }
                        # 142 "./neo-c.h"
                        result_93=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_94=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional27=it_94!=((void*)0),                        _while_condtional27) {
                            # 146 "./neo-c.h"
                            list$1charph_add(result_93,(char*)come_increment_ref_count(((char*)(right_value128=string_clone(it_94->item)))));
                            right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_94=it_94->next;
                        }
                        # 151 "./neo-c.h"
                        __result86__ = __result_obj__ = result_93;
                        come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                        come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional96;
void* right_value125;
struct list_item$1charph* litem_95;
char* __dec_obj30;
_Bool _if_conditional97;
void* right_value126;
struct list_item$1charph* litem_96;
char* __dec_obj31;
void* right_value127;
struct list_item$1charph* litem_97;
char* __dec_obj32;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
right_value126 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
right_value127 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1charph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional96=self->len==0,                                _if_conditional96) {
                                    # 156 "./neo-c.h"
                                    litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_95->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_95->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj30=litem_95->item;
                                    litem_95->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_95;
                                    # 163 "./neo-c.h"
                                    self->head=litem_95;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional97=self->len==1,                                    _if_conditional97) {
                                        # 166 "./neo-c.h"
                                        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_96->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_96->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj31=litem_96->item;
                                        litem_96->item=(char*)come_increment_ref_count(item);
                                        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_96;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_96;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_97->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_97->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj32=litem_97->item;
                                        litem_97->item=(char*)come_increment_ref_count(item);
                                        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_97;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_97;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result85__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result85__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional140;
void* right_value136;
struct list_item$1charph* litem_98;
char* __dec_obj39;
_Bool _if_conditional141;
void* right_value137;
struct list_item$1charph* litem_99;
char* __dec_obj40;
void* right_value138;
struct list_item$1charph* litem_100;
char* __dec_obj41;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1charph*));
right_value138 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1charph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional140=self->len==0,                _if_conditional140) {
                    # 226 "./neo-c.h"
                    litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_98->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_98->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj39=litem_98->item;
                    litem_98->item=(char*)come_increment_ref_count(item);
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_98;
                    # 233 "./neo-c.h"
                    self->head=litem_98;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional141=self->len==1,                    _if_conditional141) {
                        # 236 "./neo-c.h"
                        litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_99->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_99->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj40=litem_99->item;
                        litem_99->item=(char*)come_increment_ref_count(item);
                        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_99;
                        # 243 "./neo-c.h"
                        self->head->next=litem_99;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_100=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value138=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_100->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_100->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj41=litem_100->item;
                        litem_100->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_100;
                        # 253 "./neo-c.h"
                        self->tail=litem_100;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result88__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result88__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1842 "./neo-c.h"
        __dec_obj42=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1843 "./neo-c.h"
        __dec_obj43=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer2(list$1charph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1844 "./neo-c.h"
        __dec_obj44=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer2(list$1charph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1845 "./neo-c.h"
        self->v4=v4;
        # 1847 "./neo-c.h"
        __result89__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result89__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional146=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional146) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional147=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional147) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional148=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional148) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct sType* right_type2_106;
_Bool _if_conditional150;
void* right_value145;
struct sType* left_type2_107;
_Bool found_match_type_108;
struct list$1sTypeph* o2_saved_109;
struct sType* it_110;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value146;
char* tmp_111;
void* right_value147;
char* __dec_obj45;
void* right_value148;
void* right_value149;
struct sType* __dec_obj46;
_Bool __result95__;
struct sType* left_no_solved_generics_type_115;
struct sType* right_no_solved_generics_type_116;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool __result96__;
int i_117;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool __result97__;
_Bool _if_conditional169;
_Bool __result98__;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool __result99__;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool __result100__;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool __result101__;
void* right_value150;
void* right_value151;
struct buffer* buf2_118;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
char* __dec_obj47;
void* right_value158;
struct sType* __dec_obj48;
void* right_value159;
struct sType* __dec_obj49;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool __result102__;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool __result103__;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool __result104__;
void* right_value160;
char* method_name_119;
_Bool _if_conditional211;
struct sType* obj_type_122;
_Bool _if_conditional212;
struct sType* obj_type2_123;
void* right_value161;
void* right_value162;
char* __dec_obj50;
_Bool _if_conditional213;
_Bool __result109__;
void* right_value163;
void* right_value164;
struct buffer* buf2_124;
void* right_value165;
void* right_value166;
struct sType* type_125;
void* right_value167;
void* right_value168;
char* __dec_obj51;
void* right_value169;
struct sType* __dec_obj52;
void* right_value170;
struct sType* __dec_obj53;
_Bool _if_conditional214;
void* right_value171;
char* method_name_126;
_Bool _if_conditional215;
struct sType* obj_type_127;
_Bool _if_conditional216;
struct sType* obj_type2_128;
void* right_value172;
void* right_value173;
char* __dec_obj54;
_Bool _if_conditional217;
_Bool __result110__;
void* right_value174;
void* right_value175;
struct buffer* buf2_129;
void* right_value176;
void* right_value177;
struct sType* type_130;
void* right_value178;
char* __dec_obj55;
void* right_value179;
struct sType* __dec_obj56;
void* right_value180;
struct sType* __dec_obj57;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool __result111__;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool __result112__;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool __result113__;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool __result114__;
_Bool _if_conditional237;
void* right_value181;
char* tmp_131;
void* right_value182;
char* __dec_obj58;
void* right_value183;
struct sType* __dec_obj59;
void* right_value184;
struct sType* __dec_obj60;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool __result115__;
_Bool _if_conditional244;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool __result118__;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool __result119__;
_Bool _if_conditional255;
_Bool _if_conditional256;
int i_132;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&right_type2_106, 0, sizeof(struct sType*));
right_value145 = (void*)0;
memset(&left_type2_107, 0, sizeof(struct sType*));
memset(&found_match_type_108, 0, sizeof(_Bool));
memset(&o2_saved_109, 0, sizeof(struct list$1sTypeph*));
memset(&it_110, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&tmp_111, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&left_no_solved_generics_type_115, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_116, 0, sizeof(struct sType*));
memset(&i_117, 0, sizeof(int));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&buf2_118, 0, sizeof(struct buffer*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&method_name_119, 0, sizeof(char*));
memset(&obj_type_122, 0, sizeof(struct sType*));
memset(&obj_type2_123, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&buf2_124, 0, sizeof(struct buffer*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&type_125, 0, sizeof(struct sType*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&method_name_126, 0, sizeof(char*));
memset(&obj_type_127, 0, sizeof(struct sType*));
memset(&obj_type2_128, 0, sizeof(struct sType*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&buf2_129, 0, sizeof(struct buffer*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&type_130, 0, sizeof(struct sType*));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&tmp_131, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&i_132, 0, sizeof(int));
    # 320 "05function4.c"
    right_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 347 "05function4.c"
    # 322 "05function4.c"
    if(_if_conditional150=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional150) {
        # 323 "05function4.c"
        left_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(left_type))));
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 324 "05function4.c"
        found_match_type_108=(_Bool)0;
        # 331 "05function4.c"
        for(        o2_saved_109=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_110=list$1sTypeph_begin((o2_saved_109));        !list$1sTypeph_end((o2_saved_109));        it_110=list$1sTypeph_next((o2_saved_109))        ){
            # 329 "05function4.c"
            # 326 "05function4.c"
            if(_if_conditional151=check_assign_type(msg,it_110,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional151) {
                # 327 "05function4.c"
                found_match_type_108=(_Bool)1;
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 338 "05function4.c"
        # 331 "05function4.c"
        if(_if_conditional152=!found_match_type_108,        _if_conditional152) {
            # 332 "05function4.c"
            err_msg(info,"type errorX");
            # 333 "05function4.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 334 "05function4.c"
            printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
            # 335 "05function4.c"
            exit(2);
        }
        # 338 "05function4.c"
        tmp_111=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("(void*)%s",come_value->c_value))));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 339 "05function4.c"
        __dec_obj45=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value147=string_clone(tmp_111))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 340 "05function4.c"
        __dec_obj46=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 340, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 341 "05function4.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05function4.c", 341, 0))->mHeap;
        # 342 "05function4.c"
        come_value->var=((void*)0);
        # 344 "05function4.c"
        __result95__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_111 = come_decrement_ref_count2(tmp_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result95__;
        come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_111 = come_decrement_ref_count2(tmp_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 347 "05function4.c"
    left_no_solved_generics_type_115=left_type->mNoSolvedGenericsType->v1;
    # 348 "05function4.c"
    right_no_solved_generics_type_116=right_type2_106->mNoSolvedGenericsType->v1;
    # 700 "05function4.c"
    # 350 "05function4.c"
    if(_if_conditional155=left_no_solved_generics_type_115&&right_no_solved_generics_type_116,    _if_conditional155) {
        # 383 "05function4.c"
        # 351 "05function4.c"
        if(_if_conditional156=string_operator_equals(left_type->mClass->mName,right_type2_106->mClass->mName)&&left_type->mPointerNum==right_type2_106->mPointerNum,        _if_conditional156) {
        }
        else {
            # 383 "05function4.c"
            # 353 "05function4.c"
            if(_if_conditional157=string_operator_equals(left_type->mClass->mName,right_type2_106->mClass->mName)&&(left_type->mPointerNum!=right_type2_106->mPointerNum||left_type->mHeap!=right_type2_106->mHeap),            _if_conditional157) {
                # 354 "05function4.c"
                err_msg(info,"poinetr num err");
                # 355 "05function4.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_115->mGenericsTypes),left_no_solved_generics_type_115->mClass->mName,left_type->mClass->mName);
                # 356 "05function4.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_116->mGenericsTypes),right_no_solved_generics_type_116->mClass->mName,right_type2_106->mClass->mName);
                # 357 "05function4.c"
                exit(2);
            }
            else {
                # 383 "05function4.c"
                # 359 "05function4.c"
                if(_if_conditional158=list$1sTypeph_length(left_no_solved_generics_type_115->mGenericsTypes)>0,                _if_conditional158) {
                    # 382 "05function4.c"
                    # 360 "05function4.c"
                    if(_if_conditional159=(string_operator_equals(left_no_solved_generics_type_115->mClass->mName,"void")&&left_no_solved_generics_type_115->mPointerNum>0&&right_no_solved_generics_type_116->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_116->mClass->mName,"void")&&right_no_solved_generics_type_116->mPointerNum>0&&left_no_solved_generics_type_115->mPointerNum>0),                    _if_conditional159) {
                    }
                    else {
                        # 376 "05function4.c"
                        # 364 "05function4.c"
                        if(_if_conditional160=list$1sTypeph_length(left_no_solved_generics_type_115->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_116->mGenericsTypes),                        _if_conditional160) {
                            # 373 "05function4.c"
                            # 366 "05function4.c"
                            if(print_err_msg) {
                                # 367 "05function4.c"
                                err_msg(info,"generics type parametor number error");
                                # 368 "05function4.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_115->mGenericsTypes),left_no_solved_generics_type_115->mClass->mName,left_type->mClass->mName);
                                # 369 "05function4.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_116->mGenericsTypes),right_no_solved_generics_type_116->mClass->mName,right_type2_106->mClass->mName);
                                # 370 "05function4.c"
                                exit(2);
                            }
                            # 373 "05function4.c"
                            __result96__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result96__;
                        }
                        # 380 "05function4.c"
                        for(                        i_117=0;                        i_117<list$1sTypeph_length(left_no_solved_generics_type_115->mGenericsTypes);                        i_117++                        ){
                            # 377 "05function4.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_115->mGenericsTypes,i_117), "05function4.c", 377, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_116->mGenericsTypes,i_117), "05function4.c", 377, 2)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 380 "05function4.c"
                        check_assign_type(msg,left_no_solved_generics_type_115,right_no_solved_generics_type_116,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 700 "05function4.c"
        # 384 "05function4.c"
        if(check_no_pointer) {
            # 432 "05function4.c"
            # 385 "05function4.c"
            if(_if_conditional163=left_type->mPointerNum>0,            _if_conditional163) {
                # 411 "05function4.c"
                # 386 "05function4.c"
                if(_if_conditional164=right_type2_106->mPointerNum>0,                _if_conditional164) {
                    # 400 "05function4.c"
                    # 387 "05function4.c"
                    if(_if_conditional165=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_106->mClass->mName,"void"),                    _if_conditional165) {
                    }
                    else {
                        # 400 "05function4.c"
                        # 389 "05function4.c"
                        if(_if_conditional166=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                        _if_conditional166) {
                        }
                        else {
                            # 400 "05function4.c"
                            # 391 "05function4.c"
                            if(_if_conditional167=string_operator_not_equals(left_type->mClass->mName,right_type2_106->mClass->mName),                            _if_conditional167) {
                                # 398 "05function4.c"
                                # 392 "05function4.c"
                                if(print_err_msg) {
                                    # 393 "05function4.c"
                                    err_msg(info,"type error1");
                                    # 394 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 395 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                    # 396 "05function4.c"
                                    exit(2);
                                }
                                # 398 "05function4.c"
                                __result97__ = (_Bool)0;
                                come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result97__;
                            }
                        }
                    }
                }
                else {
                    # 409 "05function4.c"
                    # 402 "05function4.c"
                    if(print_err_msg) {
                        # 403 "05function4.c"
                        err_msg(info,"type error2");
                        # 404 "05function4.c"
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        # 405 "05function4.c"
                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                        # 406 "05function4.c"
                        exit(2);
                    }
                    # 409 "05function4.c"
                    __result98__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result98__;
                }
            }
            else {
                # 432 "05function4.c"
                # 412 "05function4.c"
                if(_if_conditional170=left_type->mPointerNum==0&&right_type2_106->mPointerNum>0,                _if_conditional170) {
                    # 419 "05function4.c"
                    # 413 "05function4.c"
                    if(print_err_msg) {
                        # 414 "05function4.c"
                        err_msg(info,"type error3");
                        # 415 "05function4.c"
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        # 416 "05function4.c"
                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                        # 417 "05function4.c"
                        exit(2);
                    }
                    # 419 "05function4.c"
                    __result99__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result99__;
                }
                else {
                    # 432 "05function4.c"
                    # 421 "05function4.c"
                    if(_if_conditional172=left_type->mPointerNum>0&&right_type2_106->mPointerNum==0&&string_operator_equals(right_type2_106->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                    _if_conditional172) {
                    }
                    else {
                        # 432 "05function4.c"
                        # 423 "05function4.c"
                        if(_if_conditional173=string_operator_not_equals(left_type->mClass->mName,right_type2_106->mClass->mName),                        _if_conditional173) {
                            # 430 "05function4.c"
                            # 424 "05function4.c"
                            if(print_err_msg) {
                                # 425 "05function4.c"
                                err_msg(info,"type error4");
                                # 426 "05function4.c"
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                # 427 "05function4.c"
                                printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                # 428 "05function4.c"
                                exit(2);
                            }
                            # 430 "05function4.c"
                            __result100__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result100__;
                        }
                    }
                }
            }
        }
        else {
            # 700 "05function4.c"
            # 433 "05function4.c"
            if(_if_conditional175=!left_type->mNullValue&&right_type2_106->mNullValue,            _if_conditional175) {
                # 458 "05function4.c"
                # 434 "05function4.c"
                if(_if_conditional176=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_106->mClass->mName,"__builtin_va_list"),                _if_conditional176) {
                }
                else {
                    # 458 "05function4.c"
                    # 436 "05function4.c"
                    if(_if_conditional177=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                    _if_conditional177) {
                    }
                    else {
                        # 458 "05function4.c"
                        # 438 "05function4.c"
                        if(_if_conditional178=string_operator_equals(right_type2_106->mClass->mName,"void")&&right_type2_106->mPointerNum==0,                        _if_conditional178) {
                            # 445 "05function4.c"
                            # 439 "05function4.c"
                            if(print_err_msg) {
                                # 440 "05function4.c"
                                err_msg(info,"type error6");
                                # 441 "05function4.c"
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                # 442 "05function4.c"
                                printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                # 443 "05function4.c"
                                exit(2);
                            }
                            # 445 "05function4.c"
                            __result101__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result101__;
                        }
                        else {
                            # 448 "05function4.c"
                            buf2_118=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 448, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 450 "05function4.c"
                            buffer_append_str(buf2_118,((char*)(right_value156=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value152=string_to_string(come_value->c_value))),((char*)(right_value153=string_to_string(info->sname))),((char*)(right_value154=int_to_string(info->sline))),((char*)(right_value155=int_to_string(gComeDebugStackFrameID++)))))));
                            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 452 "05function4.c"
                            __dec_obj47=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value157=buffer_to_string(buf2_118))));
                            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 453 "05function4.c"
                            __dec_obj48=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 454 "05function4.c"
                            come_value->var=((void*)0);
                            # 456 "05function4.c"
                            __dec_obj49=right_type2_106;
                            right_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                # 700 "05function4.c"
                # 459 "05function4.c"
                if(_if_conditional180=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                _if_conditional180) {
                    # 532 "05function4.c"
                    # 460 "05function4.c"
                    if(_if_conditional181=string_operator_equals(right_type2_106->mClass->mName,"integer")&&right_type2_106->mPointerNum==1,                    _if_conditional181) {
                    }
                    else {
                        # 532 "05function4.c"
                        # 462 "05function4.c"
                        if(_if_conditional182=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_106->mClass->mName,"__builtin_va_list"),                        _if_conditional182) {
                        }
                        else {
                            # 532 "05function4.c"
                            # 464 "05function4.c"
                            if(_if_conditional183=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                            _if_conditional183) {
                            }
                            else {
                                # 532 "05function4.c"
                                # 466 "05function4.c"
                                if(_if_conditional184=string_operator_equals(right_type2_106->mClass->mName,"lambda"),                                _if_conditional184) {
                                    # 473 "05function4.c"
                                    # 467 "05function4.c"
                                    if(print_err_msg) {
                                        # 468 "05function4.c"
                                        err_msg(info,"type error6");
                                        # 469 "05function4.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 470 "05function4.c"
                                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                        # 471 "05function4.c"
                                        exit(2);
                                    }
                                    # 473 "05function4.c"
                                    __result102__ = (_Bool)0;
                                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    return __result102__;
                                }
                                else {
                                    # 532 "05function4.c"
                                    # 475 "05function4.c"
                                    if(_if_conditional186=string_operator_equals(right_type2_106->mClass->mName,"void")&&right_type2_106->mPointerNum>0,                                    _if_conditional186) {
                                    }
                                    else {
                                        # 532 "05function4.c"
                                        # 477 "05function4.c"
                                        if(_if_conditional187=string_operator_equals(right_type2_106->mClass->mName,"void"),                                        _if_conditional187) {
                                            # 484 "05function4.c"
                                            # 478 "05function4.c"
                                            if(print_err_msg) {
                                                # 479 "05function4.c"
                                                err_msg(info,"type error6");
                                                # 480 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 481 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                # 482 "05function4.c"
                                                exit(2);
                                            }
                                            # 484 "05function4.c"
                                            __result103__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result103__;
                                        }
                                        else {
                                            # 532 "05function4.c"
                                            # 486 "05function4.c"
                                            if(_if_conditional189=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_106->mClass->mName,"lambda"),                                            _if_conditional189) {
                                            }
                                            else {
                                                # 532 "05function4.c"
                                                # 488 "05function4.c"
                                                if(_if_conditional190=right_type2_106->mPointerNum>0,                                                _if_conditional190) {
                                                    # 495 "05function4.c"
                                                    # 489 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 490 "05function4.c"
                                                        err_msg(info,"type error10");
                                                        # 491 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 492 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                        # 493 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 495 "05function4.c"
                                                    __result104__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result104__;
                                                }
                                                else {
                                                    # 498 "05function4.c"
                                                    method_name_119=(char*)come_increment_ref_count(((char*)(right_value160=create_method_name(right_type2_106,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 515 "05function4.c"
                                                    # 500 "05function4.c"
                                                    if(_if_conditional211=map$2charphsFunph_at(info->funcs,method_name_119,((void*)0))==((void*)0),                                                    _if_conditional211) {
                                                        # 501 "05function4.c"
                                                        obj_type_122=right_type2_106->mNoSolvedGenericsType->v1;
                                                        # 513 "05function4.c"
                                                        # 502 "05function4.c"
                                                        if(_if_conditional212=obj_type_122&&list$1sTypeph_length(obj_type_122->mGenericsTypes)>0,                                                        _if_conditional212) {
                                                            # 503 "05function4.c"
                                                            obj_type2_123=right_type2_106;
                                                            # 504 "05function4.c"
                                                            __dec_obj50=method_name_119;
                                                            method_name_119=(char*)come_increment_ref_count(((char*)(right_value162=make_generics_function(obj_type2_123,(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 511 "05function4.c"
                                                            # 507 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 508 "05function4.c"
                                                                err_msg(info,"require to_string implementation(%s)",right_type2_106->mClass->mName);
                                                                # 509 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 511 "05function4.c"
                                                            __result109__ = (_Bool)0;
                                                            method_name_119 = come_decrement_ref_count2(method_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result109__;
                                                        }
                                                    }
                                                    # 515 "05function4.c"
                                                    buf2_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value164=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value163=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 515, "buffer"))))))));
                                                    come_call_finalizer2(buffer_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(buffer_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 517 "05function4.c"
                                                    buffer_append_str(buf2_124,method_name_119);
                                                    # 518 "05function4.c"
                                                    buffer_append_str(buf2_124,"(");
                                                    # 519 "05function4.c"
                                                    buffer_append_str(buf2_124,come_value->c_value);
                                                    # 520 "05function4.c"
                                                    buffer_append_str(buf2_124,")");
                                                    # 522 "05function4.c"
                                                    type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 522, "sType")))),"integer",(_Bool)0,info))));
                                                    come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 523 "05function4.c"
                                                    type_125->mHeap=(_Bool)1;
                                                    # 524 "05function4.c"
                                                    type_125->mPointerNum=1;
                                                    # 526 "05function4.c"
                                                    __dec_obj51=come_value->c_value;
                                                    come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value168=append_object_to_right_values(((char*)(right_value167=buffer_to_string(buf2_124))),(struct sType*)come_increment_ref_count(type_125),info))));
                                                    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 527 "05function4.c"
                                                    __dec_obj52=come_value->type;
                                                    come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(type_125))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 528 "05function4.c"
                                                    come_value->var=((void*)0);
                                                    # 530 "05function4.c"
                                                    __dec_obj53=right_type2_106;
                                                    right_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(type_125))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    method_name_119 = come_decrement_ref_count2(method_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(buffer_finalize,buf2_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    # 700 "05function4.c"
                    # 533 "05function4.c"
                    if(_if_conditional214=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                    _if_conditional214) {
                        # 534 "05function4.c"
                        method_name_126=(char*)come_increment_ref_count(((char*)(right_value171=create_method_name(right_type2_106,(_Bool)0,"to_int",info,(_Bool)1))));
                        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 551 "05function4.c"
                        # 536 "05function4.c"
                        if(_if_conditional215=map$2charphsFunph_at(info->funcs,method_name_126,((void*)0))==((void*)0),                        _if_conditional215) {
                            # 537 "05function4.c"
                            obj_type_127=right_type2_106->mNoSolvedGenericsType->v1;
                            # 549 "05function4.c"
                            # 538 "05function4.c"
                            if(_if_conditional216=obj_type_127&&list$1sTypeph_length(obj_type_127->mGenericsTypes)>0,                            _if_conditional216) {
                                # 539 "05function4.c"
                                obj_type2_128=right_type2_106;
                                # 540 "05function4.c"
                                __dec_obj54=method_name_126;
                                method_name_126=(char*)come_increment_ref_count(((char*)(right_value173=make_generics_function(obj_type2_128,(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string("to_int")))),info,(_Bool)1))));
                                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 547 "05function4.c"
                                # 543 "05function4.c"
                                if(print_err_msg) {
                                    # 544 "05function4.c"
                                    err_msg(info,"require to_string implementation(%s)",right_type2_106->mClass->mName);
                                    # 545 "05function4.c"
                                    exit(1);
                                }
                                # 547 "05function4.c"
                                __result110__ = (_Bool)0;
                                method_name_126 = come_decrement_ref_count2(method_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result110__;
                            }
                        }
                        # 551 "05function4.c"
                        buf2_129=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 551, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 553 "05function4.c"
                        buffer_append_str(buf2_129,method_name_126);
                        # 554 "05function4.c"
                        buffer_append_str(buf2_129,"(");
                        # 555 "05function4.c"
                        buffer_append_str(buf2_129,come_value->c_value);
                        # 556 "05function4.c"
                        buffer_append_str(buf2_129,")");
                        # 558 "05function4.c"
                        type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 558, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 560 "05function4.c"
                        __dec_obj55=come_value->c_value;
                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value178=buffer_to_string(buf2_129))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 561 "05function4.c"
                        __dec_obj56=come_value->type;
                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(type_130))));
                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 562 "05function4.c"
                        come_value->var=((void*)0);
                        # 564 "05function4.c"
                        __dec_obj57=right_type2_106;
                        right_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(type_130))));
                        come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        method_name_126 = come_decrement_ref_count2(method_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,buf2_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 700 "05function4.c"
                        # 566 "05function4.c"
                        if(_if_conditional218=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                        _if_conditional218) {
                            # 603 "05function4.c"
                            # 567 "05function4.c"
                            if(_if_conditional219=string_operator_equals(right_type2_106->mClass->mName,"char")&&right_type2_106->mPointerNum==1,                            _if_conditional219) {
                            }
                            else {
                                # 603 "05function4.c"
                                # 569 "05function4.c"
                                if(_if_conditional220=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_106->mClass->mName,"__builtin_va_list"),                                _if_conditional220) {
                                }
                                else {
                                    # 603 "05function4.c"
                                    # 571 "05function4.c"
                                    if(_if_conditional221=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                                    _if_conditional221) {
                                    }
                                    else {
                                        # 603 "05function4.c"
                                        # 573 "05function4.c"
                                        if(_if_conditional222=string_operator_equals(right_type2_106->mClass->mName,"lambda"),                                        _if_conditional222) {
                                            # 581 "05function4.c"
                                            # 574 "05function4.c"
                                            if(print_err_msg) {
                                                # 575 "05function4.c"
                                                err_msg(info,"type error6");
                                                # 576 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 577 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                # 578 "05function4.c"
                                                exit(2);
                                            }
                                            # 581 "05function4.c"
                                            __result111__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result111__;
                                        }
                                        else {
                                            # 603 "05function4.c"
                                            # 583 "05function4.c"
                                            if(_if_conditional224=string_operator_equals(right_type2_106->mClass->mName,"void")&&right_type2_106->mPointerNum>0,                                            _if_conditional224) {
                                            }
                                            else {
                                                # 603 "05function4.c"
                                                # 585 "05function4.c"
                                                if(_if_conditional225=string_operator_equals(right_type2_106->mClass->mName,"void"),                                                _if_conditional225) {
                                                    # 592 "05function4.c"
                                                    # 586 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 587 "05function4.c"
                                                        err_msg(info,"type error6");
                                                        # 588 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 589 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                        # 590 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 592 "05function4.c"
                                                    __result112__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result112__;
                                                }
                                                else {
                                                    # 603 "05function4.c"
                                                    # 594 "05function4.c"
                                                    if(_if_conditional227=string_operator_not_equals(left_type->mClass->mName,right_type2_106->mClass->mName),                                                    _if_conditional227) {
                                                        # 601 "05function4.c"
                                                        # 595 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 596 "05function4.c"
                                                            err_msg(info,"type error5");
                                                            # 597 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 598 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                            # 599 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 601 "05function4.c"
                                                        __result113__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result113__;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 700 "05function4.c"
                            # 604 "05function4.c"
                            if(_if_conditional229=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                            _if_conditional229) {
                                # 632 "05function4.c"
                                # 605 "05function4.c"
                                if(_if_conditional230=string_operator_equals(right_type2_106->mClass->mName,"void")&&right_type2_106->mPointerNum==1,                                _if_conditional230) {
                                }
                                else {
                                    # 632 "05function4.c"
                                    # 607 "05function4.c"
                                    if(_if_conditional231=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_106->mClass->mName,"__builtin_va_list"),                                    _if_conditional231) {
                                    }
                                    else {
                                        # 632 "05function4.c"
                                        # 609 "05function4.c"
                                        if(_if_conditional232=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                                        _if_conditional232) {
                                        }
                                        else {
                                            # 632 "05function4.c"
                                            # 611 "05function4.c"
                                            if(_if_conditional233=string_operator_equals(right_type2_106->mClass->mName,"lambda"),                                            _if_conditional233) {
                                            }
                                            else {
                                                # 632 "05function4.c"
                                                # 613 "05function4.c"
                                                if(_if_conditional234=string_operator_equals(right_type2_106->mClass->mName,"void")&&right_type2_106->mPointerNum>0,                                                _if_conditional234) {
                                                }
                                                else {
                                                    # 632 "05function4.c"
                                                    # 615 "05function4.c"
                                                    if(_if_conditional235=string_operator_equals(right_type2_106->mClass->mName,"void"),                                                    _if_conditional235) {
                                                        # 622 "05function4.c"
                                                        # 616 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 617 "05function4.c"
                                                            err_msg(info,"type error6");
                                                            # 618 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 619 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                            # 620 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 622 "05function4.c"
                                                        __result114__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result114__;
                                                    }
                                                    else {
                                                        # 632 "05function4.c"
                                                        # 624 "05function4.c"
                                                        if(_if_conditional237=right_type2_106->mPointerNum==0,                                                        _if_conditional237) {
                                                            # 625 "05function4.c"
                                                            tmp_131=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("(void*)%s",come_value->c_value))));
                                                            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            # 626 "05function4.c"
                                                            __dec_obj58=come_value->c_value;
                                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value182=string_clone(tmp_131))));
                                                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            # 627 "05function4.c"
                                                            __dec_obj59=come_value->type;
                                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 628 "05function4.c"
                                                            come_value->var=((void*)0);
                                                            # 630 "05function4.c"
                                                            __dec_obj60=right_type2_106;
                                                            right_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            tmp_131 = come_decrement_ref_count2(tmp_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 700 "05function4.c"
                                # 633 "05function4.c"
                                if(_if_conditional238=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                _if_conditional238) {
                                    # 687 "05function4.c"
                                    # 634 "05function4.c"
                                    if(_if_conditional239=right_type2_106->mPointerNum>0||(right_type2_106->mPointerNum==0&&right_type2_106->mClass->mStruct),                                    _if_conditional239) {
                                        # 658 "05function4.c"
                                        # 635 "05function4.c"
                                        if(_if_conditional240=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_106->mClass->mName,"void"),                                        _if_conditional240) {
                                        }
                                        else {
                                            # 658 "05function4.c"
                                            # 637 "05function4.c"
                                            if(_if_conditional241=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                                            _if_conditional241) {
                                            }
                                            else {
                                                # 658 "05function4.c"
                                                # 639 "05function4.c"
                                                if(_if_conditional242=string_operator_not_equals(left_type->mClass->mName,right_type2_106->mClass->mName),                                                _if_conditional242) {
                                                    # 646 "05function4.c"
                                                    # 640 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 641 "05function4.c"
                                                        err_msg(info,"type error5");
                                                        # 642 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 643 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                        # 644 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 646 "05function4.c"
                                                    __result115__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result115__;
                                                }
                                                else {
                                                    # 658 "05function4.c"
                                                    # 648 "05function4.c"
                                                    if(_if_conditional244=left_type->mPointerNum!=right_type2_106->mPointerNum,                                                    _if_conditional244) {
                                                        # 649 "05function4.c"
                                                        printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                        # 650 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 651 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                    }
                                                    else {
                                                        # 658 "05function4.c"
                                                        # 653 "05function4.c"
                                                        if(_if_conditional246=list$1sNodeph_length(right_type2_106->mArrayNum)>0,                                                        _if_conditional246) {
                                                            # 654 "05function4.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 655 "05function4.c"
                                                            printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                            # 656 "05function4.c"
                                                            printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum,list$1sNodeph_length(right_type2_106->mArrayNum));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 687 "05function4.c"
                                        # 659 "05function4.c"
                                        if(_if_conditional247=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_106->mClass->mName,"void"),                                        _if_conditional247) {
                                        }
                                        else {
                                            # 687 "05function4.c"
                                            # 661 "05function4.c"
                                            if(_if_conditional248=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_106->mClass->mName,"va_list"),                                            _if_conditional248) {
                                            }
                                            else {
                                                # 687 "05function4.c"
                                                # 663 "05function4.c"
                                                if(_if_conditional249=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_106->mClass->mName,"__builtin_va_list"),                                                _if_conditional249) {
                                                }
                                                else {
                                                    # 687 "05function4.c"
                                                    # 665 "05function4.c"
                                                    if(_if_conditional250=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_106->mClass->mName,"lambda"),                                                    _if_conditional250) {
                                                    }
                                                    else {
                                                        # 687 "05function4.c"
                                                        # 667 "05function4.c"
                                                        if(_if_conditional251=left_type->mPointerNum>0&&right_type2_106->mPointerNum==0&&string_operator_equals(right_type2_106->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                        _if_conditional251) {
                                                            # 675 "05function4.c"
                                                            # 668 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 669 "05function4.c"
                                                                err_msg(info,"type error10");
                                                                # 670 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 671 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                                # 672 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 675 "05function4.c"
                                                            __result118__ = (_Bool)0;
                                                            come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result118__;
                                                        }
                                                        else {
                                                            # 687 "05function4.c"
                                                            # 677 "05function4.c"
                                                            if(_if_conditional253=!(string_operator_equals(right_type2_106->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_106->mPointerNum==0,                                                            _if_conditional253) {
                                                                # 684 "05function4.c"
                                                                # 678 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 679 "05function4.c"
                                                                    err_msg(info,"type error6");
                                                                    # 680 "05function4.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 681 "05function4.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                                                    # 682 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 684 "05function4.c"
                                                                __result119__ = (_Bool)0;
                                                                come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                return __result119__;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 698 "05function4.c"
                                    # 687 "05function4.c"
                                    if(_if_conditional255=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                    _if_conditional255) {
                                        # 694 "05function4.c"
                                        # 688 "05function4.c"
                                        if(_if_conditional256=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_106->mGenericsTypes),                                        _if_conditional256) {
                                            # 689 "05function4.c"
                                            err_msg(info,"generics type number error");
                                            # 690 "05function4.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 691 "05function4.c"
                                            printf("right type is %s pointer num %d\n",right_type2_106->mClass->mName,right_type2_106->mPointerNum);
                                            # 692 "05function4.c"
                                            exit(2);
                                        }
                                        # 697 "05function4.c"
                                        for(                                        i_132=0;                                        i_132<list$1sTypeph_length(left_type->mGenericsTypes);                                        i_132++                                        ){
                                            # 695 "05function4.c"
                                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_132), "05function4.c", 695, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_106->mGenericsTypes,i_132), "05function4.c", 695, 4)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 700 "05function4.c"
    __result120__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer2(sType_finalize,right_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional149;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            # 365 "./neo-c.h"
            __result91__ = 0;
            return __result91__;
        }
        # 367 "./neo-c.h"
        __result92__ = self->len;
        return __result92__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional153;
struct list_item$1sTypeph* it_112;
int i_113;
_Bool _while_condtional28;
_Bool _if_conditional154;
struct sType* __result93__;
struct sType* default_value_114;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_113, 0, sizeof(int));
memset(&default_value_114, 0, sizeof(struct sType*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional153=position<0,            _if_conditional153) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_112=self->head;
            # 687 "./neo-c.h"
            i_113=0;
            # 694 "./neo-c.h"
            while(_while_condtional28=it_112!=((void*)0),            _while_condtional28) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional154=position==i_113,                _if_conditional154) {
                    # 690 "./neo-c.h"
                    __result93__ = __result_obj__ = it_112->item;
                    return __result93__;
                }
                # 692 "./neo-c.h"
                it_112=it_112->next;
                # 693 "./neo-c.h"
                i_113++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_114,0,sizeof(struct sType*));
            # 698 "./neo-c.h"
            __result94__ = __result_obj__ = default_value_114;
            come_call_finalizer2(sType_finalize,default_value_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result94__;
            come_call_finalizer2(sType_finalize,default_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional29;
_Bool _if_conditional192;
_Bool _if_conditional193;
struct sFun* __result105__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sFun* __result106__;
struct sFun* __result107__;
struct sFun* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
                                                        # 1226 "./neo-c.h"
                                                        hash_120=string_get_hash_key(((char*)key))%self->size;
                                                        # 1227 "./neo-c.h"
                                                        it_121=hash_120;
                                                        # 1251 "./neo-c.h"
                                                        while(_while_condtional29=(_Bool)1,                                                        _while_condtional29) {
                                                            # 1249 "./neo-c.h"
                                                            # 1230 "./neo-c.h"
                                                            if(_if_conditional192=self->item_existance[it_121],                                                            _if_conditional192) {
                                                                # 1237 "./neo-c.h"
                                                                # 1232 "./neo-c.h"
                                                                if(_if_conditional193=string_equals(self->keys[it_121],key),                                                                _if_conditional193) {
                                                                    # 1234 "./neo-c.h"
                                                                    __result105__ = __result_obj__ = self->items[it_121];
                                                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result105__;
                                                                }
                                                                # 1237 "./neo-c.h"
                                                                it_121++;
                                                                # 1245 "./neo-c.h"
                                                                # 1239 "./neo-c.h"
                                                                if(_if_conditional209=it_121>=self->size,                                                                _if_conditional209) {
                                                                    # 1240 "./neo-c.h"
                                                                    it_121=0;
                                                                }
                                                                else {
                                                                    # 1245 "./neo-c.h"
                                                                    # 1242 "./neo-c.h"
                                                                    if(_if_conditional210=it_121==hash_120,                                                                    _if_conditional210) {
                                                                        # 1243 "./neo-c.h"
                                                                        __result106__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result106__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1247 "./neo-c.h"
                                                                __result107__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result107__;
                                                            }
                                                        }
                                                        # 1251 "./neo-c.h"
                                                        __result108__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result108__;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sFun_finalize"
                                                                        # 0 "sFun_finalize"
                                                                        if(_if_conditional194=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional194) {
                                                                            # 0 "sFun_finalize"
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sFun_finalize"
                                                                        # 1 "sFun_finalize"
                                                                        if(_if_conditional195=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                        _if_conditional195) {
                                                                            # 1 "sFun_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sFun_finalize"
                                                                        # 2 "sFun_finalize"
                                                                        if(_if_conditional196=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                        _if_conditional196) {
                                                                            # 2 "sFun_finalize"
                                                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 4 "sFun_finalize"
                                                                        # 3 "sFun_finalize"
                                                                        if(_if_conditional197=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                        _if_conditional197) {
                                                                            # 3 "sFun_finalize"
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 5 "sFun_finalize"
                                                                        # 4 "sFun_finalize"
                                                                        if(_if_conditional198=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                        _if_conditional198) {
                                                                            # 4 "sFun_finalize"
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 6 "sFun_finalize"
                                                                        # 5 "sFun_finalize"
                                                                        if(_if_conditional199=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                        _if_conditional199) {
                                                                            # 5 "sFun_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 7 "sFun_finalize"
                                                                        # 6 "sFun_finalize"
                                                                        if(_if_conditional200=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                        _if_conditional200) {
                                                                            # 6 "sFun_finalize"
                                                                            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 8 "sFun_finalize"
                                                                        # 7 "sFun_finalize"
                                                                        if(_if_conditional203=self!=((void*)0)&&self->mSource!=((void*)0),                                                                        _if_conditional203) {
                                                                            # 7 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 9 "sFun_finalize"
                                                                        # 8 "sFun_finalize"
                                                                        if(_if_conditional204=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                        _if_conditional204) {
                                                                            # 8 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 10 "sFun_finalize"
                                                                        # 9 "sFun_finalize"
                                                                        if(_if_conditional205=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                        _if_conditional205) {
                                                                            # 9 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 11 "sFun_finalize"
                                                                        # 10 "sFun_finalize"
                                                                        if(_if_conditional206=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                        _if_conditional206) {
                                                                            # 10 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 12 "sFun_finalize"
                                                                        # 11 "sFun_finalize"
                                                                        if(_if_conditional207=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                        _if_conditional207) {
                                                                            # 11 "sFun_finalize"
                                                                            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 13 "sFun_finalize"
                                                                        # 12 "sFun_finalize"
                                                                        if(_if_conditional208=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                        _if_conditional208) {
                                                                            # 12 "sFun_finalize"
                                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional201;
_Bool _if_conditional202;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sBlock_finalize"
                                                                                # 0 "sBlock_finalize"
                                                                                if(_if_conditional201=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                _if_conditional201) {
                                                                                    # 0 "sBlock_finalize"
                                                                                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sBlock_finalize"
                                                                                # 1 "sBlock_finalize"
                                                                                if(_if_conditional202=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                _if_conditional202) {
                                                                                    # 1 "sBlock_finalize"
                                                                                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional245;
int __result116__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 367 "./neo-c.h"
                                                            # 364 "./neo-c.h"
                                                            if(_if_conditional245=self==((void*)0),                                                            _if_conditional245) {
                                                                # 365 "./neo-c.h"
                                                                __result116__ = 0;
                                                                return __result116__;
                                                            }
                                                            # 367 "./neo-c.h"
                                                            __result117__ = self->len;
                                                            return __result117__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value185;
struct sType* right_type2_133;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value186;
char* method_name_134;
_Bool _if_conditional266;
struct sType* obj_type_135;
_Bool _if_conditional267;
struct sType* obj_type2_136;
void* right_value187;
void* right_value188;
char* __dec_obj61;
void* right_value189;
void* right_value190;
struct buffer* buf2_137;
void* right_value191;
void* right_value192;
struct sType* type_138;
void* right_value193;
void* right_value194;
char* __dec_obj62;
void* right_value195;
struct sType* __dec_obj63;
void* right_value196;
struct sType* __dec_obj64;
_Bool _if_conditional268;
void* right_value197;
char* method_name_139;
_Bool _if_conditional269;
struct sType* obj_type_140;
_Bool _if_conditional270;
struct sType* obj_type2_141;
void* right_value198;
void* right_value199;
char* __dec_obj65;
void* right_value200;
void* right_value201;
struct buffer* buf2_142;
void* right_value202;
void* right_value203;
struct sType* type_143;
void* right_value204;
char* __dec_obj66;
void* right_value205;
struct sType* __dec_obj67;
void* right_value206;
struct sType* __dec_obj68;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&right_type2_133, 0, sizeof(struct sType*));
right_value186 = (void*)0;
memset(&method_name_134, 0, sizeof(char*));
memset(&obj_type_135, 0, sizeof(struct sType*));
memset(&obj_type2_136, 0, sizeof(struct sType*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&buf2_137, 0, sizeof(struct buffer*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&type_138, 0, sizeof(struct sType*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&method_name_139, 0, sizeof(char*));
memset(&obj_type_140, 0, sizeof(struct sType*));
memset(&obj_type2_141, 0, sizeof(struct sType*));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&buf2_142, 0, sizeof(struct buffer*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&type_143, 0, sizeof(struct sType*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 705 "05function4.c"
    right_type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 786 "05function4.c"
    # 706 "05function4.c"
    if(_if_conditional257=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional257) {
        # 755 "05function4.c"
        # 707 "05function4.c"
        if(_if_conditional258=string_operator_equals(right_type2_133->mClass->mName,"integer")&&right_type2_133->mPointerNum==1,        _if_conditional258) {
        }
        else {
            # 755 "05function4.c"
            # 709 "05function4.c"
            if(_if_conditional259=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_133->mClass->mName,"__builtin_va_list"),            _if_conditional259) {
            }
            else {
                # 755 "05function4.c"
                # 711 "05function4.c"
                if(_if_conditional260=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_133->mClass->mName,"va_list"),                _if_conditional260) {
                }
                else {
                    # 755 "05function4.c"
                    # 713 "05function4.c"
                    if(_if_conditional261=string_operator_equals(right_type2_133->mClass->mName,"lambda"),                    _if_conditional261) {
                    }
                    else {
                        # 755 "05function4.c"
                        # 715 "05function4.c"
                        if(_if_conditional262=string_operator_equals(right_type2_133->mClass->mName,"void")&&right_type2_133->mPointerNum>0,                        _if_conditional262) {
                        }
                        else {
                            # 755 "05function4.c"
                            # 717 "05function4.c"
                            if(_if_conditional263=string_operator_equals(right_type2_133->mClass->mName,"void"),                            _if_conditional263) {
                            }
                            else {
                                # 755 "05function4.c"
                                # 719 "05function4.c"
                                if(_if_conditional264=left_type->mPointerNum>0&&right_type2_133->mPointerNum==0&&string_operator_equals(right_type2_133->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional264) {
                                }
                                else {
                                    # 755 "05function4.c"
                                    # 721 "05function4.c"
                                    if(_if_conditional265=right_type->mPointerNum>0,                                    _if_conditional265) {
                                    }
                                    else {
                                        # 724 "05function4.c"
                                        method_name_134=(char*)come_increment_ref_count(((char*)(right_value186=create_method_name(right_type2_133,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 738 "05function4.c"
                                        # 726 "05function4.c"
                                        if(_if_conditional266=map$2charphsFunph_at(info->funcs,method_name_134,((void*)0))==((void*)0),                                        _if_conditional266) {
                                            # 727 "05function4.c"
                                            obj_type_135=right_type2_133->mNoSolvedGenericsType->v1;
                                            # 736 "05function4.c"
                                            # 728 "05function4.c"
                                            if(_if_conditional267=obj_type_135&&list$1sTypeph_length(obj_type_135->mGenericsTypes)>0,                                            _if_conditional267) {
                                                # 729 "05function4.c"
                                                obj_type2_136=right_type2_133;
                                                # 730 "05function4.c"
                                                __dec_obj61=method_name_134;
                                                method_name_134=(char*)come_increment_ref_count(((char*)(right_value188=make_generics_function(obj_type2_136,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 733 "05function4.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_133->mClass->mName);
                                                # 734 "05function4.c"
                                                exit(1);
                                            }
                                        }
                                        # 738 "05function4.c"
                                        buf2_137=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 738, "buffer"))))))));
                                        come_call_finalizer2(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(buffer_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 740 "05function4.c"
                                        buffer_append_str(buf2_137,method_name_134);
                                        # 741 "05function4.c"
                                        buffer_append_str(buf2_137,"(");
                                        # 742 "05function4.c"
                                        buffer_append_str(buf2_137,come_value->c_value);
                                        # 743 "05function4.c"
                                        buffer_append_str(buf2_137,")");
                                        # 745 "05function4.c"
                                        type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 745, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 746 "05function4.c"
                                        type_138->mHeap=(_Bool)1;
                                        # 747 "05function4.c"
                                        type_138->mPointerNum=1;
                                        # 749 "05function4.c"
                                        __dec_obj62=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value194=append_object_to_right_values(((char*)(right_value193=buffer_to_string(buf2_137))),(struct sType*)come_increment_ref_count(type_138),info))));
                                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 750 "05function4.c"
                                        __dec_obj63=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type_138))));
                                        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 751 "05function4.c"
                                        come_value->var=((void*)0);
                                        # 753 "05function4.c"
                                        __dec_obj64=right_type2_133;
                                        right_type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(type_138))));
                                        come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        method_name_134 = come_decrement_ref_count2(method_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,buf2_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 786 "05function4.c"
        # 756 "05function4.c"
        if(_if_conditional268=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional268) {
            # 757 "05function4.c"
            method_name_139=(char*)come_increment_ref_count(((char*)(right_value197=create_method_name(right_type2_133,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 771 "05function4.c"
            # 759 "05function4.c"
            if(_if_conditional269=map$2charphsFunph_at(info->funcs,method_name_139,((void*)0))==((void*)0),            _if_conditional269) {
                # 760 "05function4.c"
                obj_type_140=right_type2_133->mNoSolvedGenericsType->v1;
                # 769 "05function4.c"
                # 761 "05function4.c"
                if(_if_conditional270=obj_type_140&&list$1sTypeph_length(obj_type_140->mGenericsTypes)>0,                _if_conditional270) {
                    # 762 "05function4.c"
                    obj_type2_141=right_type2_133;
                    # 763 "05function4.c"
                    __dec_obj65=method_name_139;
                    method_name_139=(char*)come_increment_ref_count(((char*)(right_value199=make_generics_function(obj_type2_141,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 766 "05function4.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_133->mClass->mName);
                    # 767 "05function4.c"
                    exit(1);
                }
            }
            # 771 "05function4.c"
            buf2_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 771, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 773 "05function4.c"
            buffer_append_str(buf2_142,method_name_139);
            # 774 "05function4.c"
            buffer_append_str(buf2_142,"(");
            # 775 "05function4.c"
            buffer_append_str(buf2_142,come_value->c_value);
            # 776 "05function4.c"
            buffer_append_str(buf2_142,")");
            # 778 "05function4.c"
            type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 778, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 780 "05function4.c"
            __dec_obj66=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value204=buffer_to_string(buf2_142))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 781 "05function4.c"
            __dec_obj67=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type_143))));
            come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 782 "05function4.c"
            come_value->var=((void*)0);
            # 784 "05function4.c"
            __dec_obj68=right_type2_133;
            right_type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type_143))));
            come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_name_139 = come_decrement_ref_count2(method_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(sType_finalize,right_type2_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value207;
struct sType* result_type_144;
_Bool _if_conditional271;
char* var_name_145;
char* p_146;
int sline_147;
_Bool _if_conditional272;
void* right_value208;
char* word_148;
_Bool _if_conditional273;
_Bool between_brace_149;
char* p_150;
int sline_151;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value209;
char* word_152;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _while_condtional30;
char* p_153;
int sline_154;
_Bool _if_conditional279;
void* right_value210;
char* word_155;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value211;
char* __dec_obj69;
static int num_anonymous_var_name_156=0;
void* right_value212;
char* __dec_obj70;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool no_comma_157;
void* right_value213;
struct sNode* node_158;
struct sNode* __dec_obj71;
_Bool _while_condtional31;
char* p_159;
int sline_160;
_Bool _if_conditional285;
void* right_value214;
char* word_161;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value215;
struct sNode* node_162;
void* right_value219;
void* right_value220;
struct tuple2$2sTypephcharph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
memset(&result_type_144, 0, sizeof(struct sType*));
memset(&var_name_145, 0, sizeof(char*));
memset(&p_146, 0, sizeof(char*));
memset(&sline_147, 0, sizeof(int));
right_value208 = (void*)0;
memset(&word_148, 0, sizeof(char*));
memset(&between_brace_149, 0, sizeof(_Bool));
memset(&p_150, 0, sizeof(char*));
memset(&sline_151, 0, sizeof(int));
right_value209 = (void*)0;
memset(&word_152, 0, sizeof(char*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
right_value210 = (void*)0;
memset(&word_155, 0, sizeof(char*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&no_comma_157, 0, sizeof(_Bool));
right_value213 = (void*)0;
memset(&node_158, 0, sizeof(struct sNode*));
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value214 = (void*)0;
memset(&word_161, 0, sizeof(char*));
right_value215 = (void*)0;
memset(&node_162, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    # 790 "05function4.c"
    result_type_144=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 794 "05function4.c"
    # 791 "05function4.c"
    if(_if_conditional271=!first,    _if_conditional271) {
        # 792 "05function4.c"
        result_type_144->mPointerNum=0;
    }
    # 794 "05function4.c"
    var_name_145=((void*)0);
    # 816 "05function4.c"
    {
        # 797 "05function4.c"
        p_146=info->p;
        # 798 "05function4.c"
        sline_147=info->sline;
        # 814 "05function4.c"
        # 800 "05function4.c"
        if(_if_conditional272=xisalpha(*info->p)||*info->p==95,        _if_conditional272) {
            # 801 "05function4.c"
            word_148=(char*)come_increment_ref_count(((char*)(right_value208=parse_word(info))));
            right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 809 "05function4.c"
            # 803 "05function4.c"
            if(_if_conditional273=string_operator_equals(word_148,"const")||string_operator_equals(word_148,"__restrict")||string_operator_equals(word_148,"restrict")||string_operator_equals(word_148,"__user")||string_operator_equals(word_148,"volatile")||string_operator_equals(word_148,"_Nonnull")||string_operator_equals(word_148,"_Nullable")||string_operator_equals(word_148,"_Null_unspecified")||string_operator_equals(word_148,"__user")||string_operator_equals(word_148,"_Addr"),            _if_conditional273) {
            }
            else {
                # 806 "05function4.c"
                info->p=p_146;
                # 807 "05function4.c"
                info->sline=sline_147;
            }
            word_148 = come_decrement_ref_count2(word_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 811 "05function4.c"
            info->p=p_146;
            # 812 "05function4.c"
            info->sline=sline_147;
        }
    }
    # 816 "05function4.c"
    between_brace_149=(_Bool)0;
    # 845 "05function4.c"
    {
        # 818 "05function4.c"
        p_150=info->p;
        # 819 "05function4.c"
        sline_151=info->sline;
        # 841 "05function4.c"
        # 821 "05function4.c"
        if(_if_conditional274=*info->p==40,        _if_conditional274) {
            # 822 "05function4.c"
            info->p++;
            # 823 "05function4.c"
            skip_spaces_and_lf(info);
            # 839 "05function4.c"
            # 825 "05function4.c"
            if(_if_conditional275=xisalpha(*info->p)||*info->p==95,            _if_conditional275) {
                # 826 "05function4.c"
                word_152=(char*)come_increment_ref_count(((char*)(right_value209=parse_word(info))));
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 838 "05function4.c"
                # 828 "05function4.c"
                if(_if_conditional276=is_type_name(word_152,info),                _if_conditional276) {
                }
                else {
                    # 838 "05function4.c"
                    # 830 "05function4.c"
                    if(_if_conditional277=*info->p==41,                    _if_conditional277) {
                        # 831 "05function4.c"
                        info->p++;
                        # 832 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 837 "05function4.c"
                        # 834 "05function4.c"
                        if(_if_conditional278=*info->p!=40,                        _if_conditional278) {
                            # 835 "05function4.c"
                            between_brace_149=(_Bool)1;
                        }
                    }
                }
                word_152 = come_decrement_ref_count2(word_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 841 "05function4.c"
        info->p=p_150;
        # 842 "05function4.c"
        info->sline=sline_151;
    }
    # 845 "05function4.c"
    parse_sharp_v5(info);
    # 872 "05function4.c"
    while(_while_condtional30=*info->p==42,    _while_condtional30) {
        # 847 "05function4.c"
        info->p++;
        # 848 "05function4.c"
        skip_spaces_and_lf(info);
        # 870 "05function4.c"
        {
            # 851 "05function4.c"
            p_153=info->p;
            # 852 "05function4.c"
            sline_154=info->sline;
            # 868 "05function4.c"
            # 854 "05function4.c"
            if(_if_conditional279=xisalpha(*info->p)||*info->p==95,            _if_conditional279) {
                # 855 "05function4.c"
                word_155=(char*)come_increment_ref_count(((char*)(right_value210=parse_word(info))));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 863 "05function4.c"
                # 857 "05function4.c"
                if(_if_conditional280=string_operator_equals(word_155,"const")||string_operator_equals(word_155,"__restrict")||string_operator_equals(word_155,"restrict")||string_operator_equals(word_155,"__user")||string_operator_equals(word_155,"volatile")||string_operator_equals(word_155,"_Nonnull")||string_operator_equals(word_155,"_Nullable")||string_operator_equals(word_155,"_Null_unspecified")||string_operator_equals(word_155,"__user")||string_operator_equals(word_155,"_Addr"),                _if_conditional280) {
                }
                else {
                    # 860 "05function4.c"
                    info->p=p_153;
                    # 861 "05function4.c"
                    info->sline=sline_154;
                }
                word_155 = come_decrement_ref_count2(word_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 865 "05function4.c"
                info->p=p_153;
                # 866 "05function4.c"
                info->sline=sline_154;
            }
        }
        # 870 "05function4.c"
        result_type_144->mPointerNum++;
    }
    # 872 "05function4.c"
    parse_sharp_v5(info);
    # 879 "05function4.c"
    # 874 "05function4.c"
    if(_if_conditional281=between_brace_149&&*info->p==40,    _if_conditional281) {
        # 875 "05function4.c"
        info->p++;
        # 876 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 888 "05function4.c"
    # 879 "05function4.c"
    if(_if_conditional282=xisalnum(*info->p)||*info->p==95,    _if_conditional282) {
        # 880 "05function4.c"
        __dec_obj69=var_name_145;
        var_name_145=(char*)come_increment_ref_count(((char*)(right_value211=parse_word(info))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 883 "05function4.c"
        # 884 "05function4.c"
        num_anonymous_var_name_156++;
        # 885 "05function4.c"
        __dec_obj70=var_name_145;
        var_name_145=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_156))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 893 "05function4.c"
    # 888 "05function4.c"
    if(_if_conditional283=between_brace_149&&*info->p==41,    _if_conditional283) {
        # 889 "05function4.c"
        info->p++;
        # 890 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 905 "05function4.c"
    # 893 "05function4.c"
    if(_if_conditional284=*info->p==58,    _if_conditional284) {
        # 894 "05function4.c"
        info->p++;
        # 895 "05function4.c"
        skip_spaces_and_lf(info);
        # 897 "05function4.c"
        no_comma_157=info->no_comma;
        # 898 "05function4.c"
        info->no_comma=(_Bool)1;
        # 899 "05function4.c"
        node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=expression_v13(info))));
        if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 900 "05function4.c"
        info->no_comma=no_comma_157;
        # 902 "05function4.c"
        __dec_obj71=result_type_144->mSizeNum;
        result_type_144->mSizeNum=(struct sNode*)come_increment_ref_count(node_158);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_158) { node_158 = come_decrement_ref_count2(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 946 "05function4.c"
    while(_while_condtional31=*info->p==91,    _while_condtional31) {
        # 906 "05function4.c"
        info->p++;
        # 907 "05function4.c"
        skip_spaces_and_lf(info);
        # 908 "05function4.c"
        parse_sharp_v5(info);
        # 930 "05function4.c"
        {
            # 911 "05function4.c"
            p_159=info->p;
            # 912 "05function4.c"
            sline_160=info->sline;
            # 928 "05function4.c"
            # 914 "05function4.c"
            if(_if_conditional285=xisalpha(*info->p)||*info->p==95,            _if_conditional285) {
                # 915 "05function4.c"
                word_161=(char*)come_increment_ref_count(((char*)(right_value214=parse_word(info))));
                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 923 "05function4.c"
                # 917 "05function4.c"
                if(_if_conditional286=string_operator_equals(word_161,"const")||string_operator_equals(word_161,"__restrict")||string_operator_equals(word_161,"restrict")||string_operator_equals(word_161,"__user")||string_operator_equals(word_161,"volatile")||string_operator_equals(word_161,"_Nonnull")||string_operator_equals(word_161,"_Nullable")||string_operator_equals(word_161,"_Null_unspecified")||string_operator_equals(word_161,"__user")||string_operator_equals(word_161,"_Addr"),                _if_conditional286) {
                }
                else {
                    # 920 "05function4.c"
                    info->p=p_159;
                    # 921 "05function4.c"
                    info->sline=sline_160;
                }
                word_161 = come_decrement_ref_count2(word_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 925 "05function4.c"
                info->p=p_159;
                # 926 "05function4.c"
                info->sline=sline_160;
            }
        }
        # 937 "05function4.c"
        # 930 "05function4.c"
        if(_if_conditional287=*info->p==93,        _if_conditional287) {
            # 931 "05function4.c"
            info->p++;
            # 932 "05function4.c"
            skip_spaces_and_lf(info);
            # 934 "05function4.c"
            result_type_144->mPointerNum++;
            # 935 "05function4.c"
            break;
        }
        # 937 "05function4.c"
        parse_sharp_v5(info);
        # 939 "05function4.c"
        node_162=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=expression_v13(info))));
        if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 940 "05function4.c"
        list$1sNodeph_push_back(result_type_144->mArrayNum,(struct sNode*)come_increment_ref_count(node_162));
        # 941 "05function4.c"
        parse_sharp_v5(info);
        # 943 "05function4.c"
        expected_next_character(93,info);
        if(node_162) { node_162 = come_decrement_ref_count2(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 946 "05function4.c"
    __result123__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value220=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value219=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 946, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_144),(char*)come_increment_ref_count(var_name_145))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_145 = come_decrement_ref_count2(var_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result123__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_145 = come_decrement_ref_count2(var_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional288;
void* right_value216;
struct list_item$1sNodeph* litem_163;
struct sNode* __dec_obj72;
_Bool _if_conditional289;
void* right_value217;
struct list_item$1sNodeph* litem_164;
struct sNode* __dec_obj73;
void* right_value218;
struct list_item$1sNodeph* litem_165;
struct sNode* __dec_obj74;
struct list$1sNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1sNodeph*));
right_value217 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1sNodeph*));
right_value218 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1sNodeph*));
            # 256 "./neo-c.h"
            # 225 "./neo-c.h"
            if(_if_conditional288=self->len==0,            _if_conditional288) {
                # 226 "./neo-c.h"
                litem_163=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value216=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./neo-c.h"
                litem_163->prev=((void*)0);
                # 229 "./neo-c.h"
                litem_163->next=((void*)0);
                # 230 "./neo-c.h"
                __dec_obj72=litem_163->item;
                litem_163->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
                # 232 "./neo-c.h"
                self->tail=litem_163;
                # 233 "./neo-c.h"
                self->head=litem_163;
            }
            else {
                # 256 "./neo-c.h"
                # 235 "./neo-c.h"
                if(_if_conditional289=self->len==1,                _if_conditional289) {
                    # 236 "./neo-c.h"
                    litem_164=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value217=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./neo-c.h"
                    litem_164->prev=self->head;
                    # 239 "./neo-c.h"
                    litem_164->next=((void*)0);
                    # 240 "./neo-c.h"
                    __dec_obj73=litem_164->item;
                    litem_164->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
                    # 242 "./neo-c.h"
                    self->tail=litem_164;
                    # 243 "./neo-c.h"
                    self->head->next=litem_164;
                }
                else {
                    # 246 "./neo-c.h"
                    litem_165=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value218=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./neo-c.h"
                    litem_165->prev=self->tail;
                    # 249 "./neo-c.h"
                    litem_165->next=((void*)0);
                    # 250 "./neo-c.h"
                    __dec_obj74=litem_165->item;
                    litem_165->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
                    # 252 "./neo-c.h"
                    self->tail->next=litem_165;
                    # 253 "./neo-c.h"
                    self->tail=litem_165;
                }
            }
            # 256 "./neo-c.h"
            self->len++;
            # 258 "./neo-c.h"
            __result121__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result121__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj75;
char* __dec_obj76;
struct tuple2$2sTypephcharph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1767 "./neo-c.h"
        __dec_obj75=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1768 "./neo-c.h"
        __dec_obj76=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1770 "./neo-c.h"
        __result122__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional290=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional290) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional291=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional291) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_166;
int sline_167;
_Bool _if_conditional292;
void* right_value221;
char* word_168;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
right_value221 = (void*)0;
memset(&word_168, 0, sizeof(char*));
    # 951 "05function4.c"
    p_166=info->p;
    # 952 "05function4.c"
    sline_167=info->sline;
    # 968 "05function4.c"
    # 954 "05function4.c"
    if(_if_conditional292=xisalpha(*info->p)||*info->p==95,    _if_conditional292) {
        # 955 "05function4.c"
        word_168=(char*)come_increment_ref_count(((char*)(right_value221=parse_word(info))));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 963 "05function4.c"
        # 957 "05function4.c"
        if(_if_conditional293=string_operator_equals(word_168,"const")||string_operator_equals(word_168,"__restrict")||string_operator_equals(word_168,"restrict")||string_operator_equals(word_168,"__user")||string_operator_equals(word_168,"volatile")||string_operator_equals(word_168,"_Nonnull")||string_operator_equals(word_168,"_Nullable")||string_operator_equals(word_168,"_Null_unspecified")||string_operator_equals(word_168,"__user")||string_operator_equals(word_168,"_Addr"),        _if_conditional293) {
        }
        else {
            # 960 "05function4.c"
            info->p=p_166;
            # 961 "05function4.c"
            info->sline=sline_167;
        }
        word_168 = come_decrement_ref_count2(word_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 965 "05function4.c"
        info->p=p_166;
        # 966 "05function4.c"
        info->sline=sline_167;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_169;
int head_sline_170;
void* right_value222;
char* type_name_171;
_Bool _while_condtional32;
void* right_value223;
char* __dec_obj77;
_Bool record__172;
_Bool constant_173;
_Bool static__174;
_Bool volatile__175;
_Bool register__176;
_Bool unsigned__177;
_Bool long__178;
_Bool long_long_179;
_Bool short__180;
_Bool restrict__181;
_Bool struct__182;
_Bool union__183;
_Bool enum__184;
_Bool no_heap_185;
_Bool extern__186;
_Bool inline__187;
_Bool come_mem_core__188;
struct sNode* alignas__189;
_Bool anonymous_type_190;
_Bool anonymous_name_191;
_Bool _while_condtional33;
_Bool _if_conditional294;
_Bool _if_conditional295;
char* p_192;
int sline_193;
void* right_value224;
_Bool _if_conditional296;
void* right_value225;
char* __dec_obj78;
void* right_value226;
char* __dec_obj79;
void* right_value227;
char* __dec_obj80;
_Bool _if_conditional297;
char* p_194;
int sline_195;
_Bool _while_condtional34;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value228;
void* right_value229;
struct tuple3$3sTypephcharphbool* __result125__;
_Bool _if_conditional301;
char* p_196;
int sline_197;
void* right_value230;
_Bool _if_conditional302;
void* right_value231;
void* right_value232;
struct tuple3$3sTypephcharphbool* __result126__;
_Bool _if_conditional303;
_Bool _if_conditional304;
char* p_198;
int sline_199;
void* right_value233;
_Bool _if_conditional305;
void* right_value234;
char* __dec_obj83;
void* right_value235;
char* __dec_obj84;
void* right_value236;
char* __dec_obj85;
_Bool _if_conditional306;
char* p_200;
int sline_201;
void* right_value237;
_Bool _if_conditional307;
void* right_value238;
void* right_value239;
struct tuple3$3sTypephcharphbool* __result127__;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* p_202;
int sline_203;
void* right_value240;
_Bool _if_conditional310;
void* right_value241;
void* right_value242;
struct tuple3$3sTypephcharphbool* __result128__;
void* right_value243;
char* __dec_obj86;
void* right_value244;
char* __dec_obj87;
_Bool _if_conditional311;
char* p_204;
int sline_205;
void* right_value245;
_Bool _if_conditional312;
void* right_value246;
void* right_value247;
struct tuple3$3sTypephcharphbool* __result129__;
_Bool _if_conditional313;
void* right_value248;
struct sNode* exp_206;
struct sNode* __dec_obj88;
void* right_value249;
char* __dec_obj89;
_Bool _if_conditional314;
void* right_value250;
char* __dec_obj90;
_Bool _if_conditional315;
void* right_value251;
char* __dec_obj91;
_Bool _if_conditional316;
void* right_value252;
char* __dec_obj92;
_Bool _if_conditional317;
void* right_value253;
char* __dec_obj93;
_Bool _if_conditional318;
void* right_value254;
char* __dec_obj94;
_Bool _if_conditional319;
void* right_value255;
char* __dec_obj95;
_Bool _if_conditional320;
void* right_value256;
char* __dec_obj96;
_Bool _if_conditional321;
void* right_value257;
char* __dec_obj97;
_Bool _if_conditional322;
char* p_207;
int sline_208;
_Bool _if_conditional323;
void* right_value258;
char* __dec_obj98;
void* right_value259;
char* __dec_obj99;
_Bool _if_conditional324;
void* right_value260;
char* __dec_obj100;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value261;
char* __dec_obj101;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value262;
char* __dec_obj102;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value263;
char* __dec_obj103;
_Bool _if_conditional332;
_Bool _if_conditional333;
char* p_209;
int sline_210;
void* right_value264;
char* __dec_obj104;
_Bool _if_conditional334;
_Bool _if_conditional335;
char* p_211;
int sline_212;
void* right_value265;
char* __dec_obj105;
_Bool _if_conditional336;
void* right_value266;
char* __dec_obj106;
void* right_value267;
char* __dec_obj107;
_Bool _if_conditional337;
_Bool _if_conditional338;
char* p_213;
int sline_214;
void* right_value268;
char* __dec_obj108;
_Bool _if_conditional339;
void* right_value269;
char* __dec_obj109;
void* right_value270;
char* __dec_obj110;
_Bool _if_conditional340;
void* right_value271;
char* __dec_obj111;
void* right_value272;
char* __dec_obj112;
_Bool _if_conditional341;
void* right_value273;
char* __dec_obj113;
_Bool _if_conditional342;
void* right_value274;
char* __dec_obj114;
_Bool _if_conditional343;
void* right_value275;
char* __dec_obj115;
_Bool _if_conditional344;
void* right_value276;
char* __dec_obj116;
_Bool _if_conditional345;
void* right_value277;
char* __dec_obj117;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
char* p_215;
int sline_216;
void* right_value278;
char* __dec_obj118;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value279;
char* __dec_obj119;
int pointer_num_217;
_Bool _while_condtional35;
_Bool heap_218;
_Bool _if_conditional352;
_Bool lambda_flag_219;
char* pX_220;
int slineX_221;
_Bool _if_conditional353;
void* right_value280;
_Bool _if_conditional354;
struct sType* type_222;
char* var_name_223;
_Bool function_pointer_flag_224;
char* p_225;
int sline_226;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value281;
char* word_227;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool var_name_between_brace_228;
char* p_229;
int sline_230;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value282;
char* word_231;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
static int anonymous_num_232=0;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value283;
char* __dec_obj120;
void* right_value284;
struct sNode* node_233;
_Bool _if_conditional368;
void* right_value285;
void* right_value286;
struct tuple3$3sTypephcharphbool* __result130__;
int pointer_num_234;
_Bool _while_condtional36;
void* right_value287;
void* right_value288;
struct sType* __dec_obj121;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value289;
char* __dec_obj122;
void* right_value290;
struct sNode* node_235;
_Bool _if_conditional371;
_Bool _if_conditional372;
void* right_value291;
void* right_value292;
struct tuple3$3sTypephcharphbool* __result131__;
void* right_value293;
void* right_value294;
struct sType* __dec_obj123;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value295;
char* __dec_obj124;
void* right_value296;
struct sNode* node_236;
_Bool _if_conditional375;
void* right_value297;
void* right_value298;
struct tuple3$3sTypephcharphbool* __result132__;
int pointer_num_237;
_Bool _while_condtional37;
void* right_value299;
void* right_value300;
struct sType* __dec_obj125;
void* right_value301;
void* right_value302;
struct tuple3$3sTypephcharphbool* __result133__;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value303;
char* __dec_obj126;
_Bool _if_conditional379;
static int num_anonymous_var_name_238=0;
void* right_value304;
char* __dec_obj127;
_Bool _if_conditional380;
void* right_value305;
char* __dec_obj128;
static int num_anonymous_var_name_239=0;
void* right_value306;
char* __dec_obj129;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool no_comma_240;
void* right_value307;
struct sNode* node_241;
struct sNode* __dec_obj130;
_Bool _if_conditional383;
struct sType* result_type_242;
_Bool _if_conditional388;
void* right_value308;
struct sType* __dec_obj131;
_Bool _if_conditional394;
int i_251;
_Bool _if_conditional398;
void* right_value309;
void* right_value310;
void* right_value311;
struct sType* __dec_obj132;
_Bool _if_conditional399;
int i_255;
_Bool _if_conditional400;
void* right_value312;
void* right_value313;
void* right_value314;
struct sType* __dec_obj133;
void* right_value315;
void* right_value316;
struct sType* __dec_obj134;
struct sNode* __dec_obj135;
void* right_value317;
char* __dec_obj136;
void* right_value318;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_256;
struct list$1charph* param_names_257;
struct list$1charph* param_default_parametors_258;
_Bool var_args_259;
void* right_value319;
void* right_value320;
struct sType* __dec_obj137;
void* right_value321;
void* right_value322;
struct tuple1$1sTypeph* __dec_obj139;
struct list$1sTypeph* __dec_obj140;
struct list$1charph* __dec_obj141;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sType* result_type_260;
_Bool _if_conditional403;
void* right_value323;
struct sType* __dec_obj142;
_Bool _if_conditional404;
int i_261;
_Bool _if_conditional405;
void* right_value324;
void* right_value325;
void* right_value326;
struct sType* __dec_obj143;
_Bool _if_conditional406;
int i_262;
_Bool _if_conditional407;
void* right_value327;
void* right_value328;
void* right_value329;
struct sType* __dec_obj144;
void* right_value330;
void* right_value331;
struct sType* __dec_obj145;
struct sNode* __dec_obj146;
_Bool _if_conditional408;
void* right_value332;
char* __dec_obj147;
_Bool _if_conditional409;
void* right_value333;
void* right_value334;
struct tuple3$3sTypephcharphbool* __result152__;
static int num_anonymous_var_name_263=0;
void* right_value335;
char* __dec_obj148;
void* right_value336;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_264;
struct list$1charph* param_names_265;
struct list$1charph* param_default_parametors_266;
_Bool var_args_267;
void* right_value337;
void* right_value338;
struct sType* __dec_obj149;
void* right_value339;
void* right_value340;
struct tuple1$1sTypeph* __dec_obj150;
struct list$1sTypeph* __dec_obj151;
struct list$1charph* __dec_obj152;
_Bool _if_conditional410;
void* right_value341;
struct sNode* exp_268;
_Bool _if_conditional411;
void* right_value342;
void* right_value343;
struct tuple3$3sTypephcharphbool* __result154__;
void* right_value344;
struct CVALUE* come_value_269;
void* right_value345;
struct sType* __dec_obj154;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value346;
char* __dec_obj155;
_Bool _if_conditional418;
static int num_anonymous_var_name_270=0;
void* right_value347;
char* __dec_obj156;
_Bool _if_conditional419;
void* right_value348;
char* __dec_obj157;
static int num_anonymous_var_name_271=0;
void* right_value349;
char* __dec_obj158;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool no_comma_272;
void* right_value350;
struct sNode* node_273;
struct sNode* __dec_obj159;
_Bool _if_conditional422;
void* right_value351;
struct sType* __dec_obj160;
void* right_value352;
char* __dec_obj161;
struct sNode* __dec_obj162;
_Bool _if_conditional423;
int i_274;
_Bool _if_conditional424;
void* right_value353;
void* right_value354;
void* right_value355;
struct sType* __dec_obj163;
struct sNode* __dec_obj164;
_Bool _if_conditional425;
int i_275;
_Bool _if_conditional426;
void* right_value356;
void* right_value357;
void* right_value358;
struct sType* __dec_obj165;
struct sNode* __dec_obj166;
_Bool _if_conditional427;
_Bool _if_conditional438;
void* right_value359;
void* right_value360;
struct tuple3$3sTypephcharphbool* __result159__;
void* right_value361;
void* right_value362;
struct sType* __dec_obj167;
_Bool _while_condtional42;
void* right_value363;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_281;
char* var_name_282;
_Bool err_283;
_Bool _if_conditional439;
void* right_value364;
void* right_value365;
struct tuple3$3sTypephcharphbool* __result160__;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value366;
void* right_value367;
struct tuple3$3sTypephcharphbool* __result161__;
_Bool _if_conditional442;
void* right_value368;
struct sType* __dec_obj168;
_Bool _if_conditional443;
void* right_value369;
char* new_name_284;
struct sNode* __dec_obj169;
_Bool _if_conditional444;
struct sClass* klass_285;
_Bool _if_conditional445;
void* right_value376;
void* right_value377;
void* right_value378;
void* right_value379;
struct sType* __dec_obj170;
struct sNode* __dec_obj171;
_Bool _while_condtional51;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _while_condtional52;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
void* right_value380;
void* right_value381;
struct list$1sTypeph* types_330;
void* right_value382;
_Bool _while_condtional53;
void* right_value383;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_331;
char* name_332;
_Bool err_333;
_Bool _if_conditional505;
void* right_value384;
void* right_value385;
struct tuple3$3sTypephcharphbool* __result186__;
void* right_value386;
int num_tuples_334;
void* right_value387;
void* right_value388;
void* right_value389;
struct sType* __dec_obj172;
struct list$1sTypeph* o2_saved_335;
struct sType* it_336;
void* right_value390;
_Bool _if_conditional506;
void* right_value391;
struct sType* __dec_obj173;
_Bool _if_conditional507;
void* right_value392;
char* new_name_337;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
void* right_value393;
char* __dec_obj174;
_Bool _if_conditional511;
static int num_anonymous_var_name_338=0;
void* right_value394;
char* __dec_obj175;
_Bool _if_conditional512;
void* right_value395;
char* __dec_obj176;
static int num_anonymous_var_name_339=0;
void* right_value396;
char* __dec_obj177;
_Bool _if_conditional513;
_Bool _if_conditional514;
_Bool no_comma_340;
void* right_value397;
struct sNode* node_341;
struct sNode* __dec_obj178;
_Bool _while_condtional54;
_Bool _if_conditional515;
void* right_value398;
struct sNode* node_342;
void* right_value399;
char* asm_name_343;
char* __dec_obj179;
void* right_value400;
void* right_value401;
struct tuple3$3sTypephcharphbool* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_169, 0, sizeof(char*));
memset(&head_sline_170, 0, sizeof(int));
right_value222 = (void*)0;
memset(&type_name_171, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&record__172, 0, sizeof(_Bool));
memset(&constant_173, 0, sizeof(_Bool));
memset(&static__174, 0, sizeof(_Bool));
memset(&volatile__175, 0, sizeof(_Bool));
memset(&register__176, 0, sizeof(_Bool));
memset(&unsigned__177, 0, sizeof(_Bool));
memset(&long__178, 0, sizeof(_Bool));
memset(&long_long_179, 0, sizeof(_Bool));
memset(&short__180, 0, sizeof(_Bool));
memset(&restrict__181, 0, sizeof(_Bool));
memset(&struct__182, 0, sizeof(_Bool));
memset(&union__183, 0, sizeof(_Bool));
memset(&enum__184, 0, sizeof(_Bool));
memset(&no_heap_185, 0, sizeof(_Bool));
memset(&extern__186, 0, sizeof(_Bool));
memset(&inline__187, 0, sizeof(_Bool));
memset(&come_mem_core__188, 0, sizeof(_Bool));
memset(&alignas__189, 0, sizeof(struct sNode*));
memset(&anonymous_type_190, 0, sizeof(_Bool));
memset(&anonymous_name_191, 0, sizeof(_Bool));
memset(&p_192, 0, sizeof(char*));
memset(&sline_193, 0, sizeof(int));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&p_194, 0, sizeof(char*));
memset(&sline_195, 0, sizeof(int));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&p_196, 0, sizeof(char*));
memset(&sline_197, 0, sizeof(int));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&p_198, 0, sizeof(char*));
memset(&sline_199, 0, sizeof(int));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&p_200, 0, sizeof(char*));
memset(&sline_201, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&p_202, 0, sizeof(char*));
memset(&sline_203, 0, sizeof(int));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&p_204, 0, sizeof(char*));
memset(&sline_205, 0, sizeof(int));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&exp_206, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&p_207, 0, sizeof(char*));
memset(&sline_208, 0, sizeof(int));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&p_209, 0, sizeof(char*));
memset(&sline_210, 0, sizeof(int));
right_value264 = (void*)0;
memset(&p_211, 0, sizeof(char*));
memset(&sline_212, 0, sizeof(int));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&p_213, 0, sizeof(char*));
memset(&sline_214, 0, sizeof(int));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&p_215, 0, sizeof(char*));
memset(&sline_216, 0, sizeof(int));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&pointer_num_217, 0, sizeof(int));
memset(&heap_218, 0, sizeof(_Bool));
memset(&lambda_flag_219, 0, sizeof(_Bool));
memset(&pX_220, 0, sizeof(char*));
memset(&slineX_221, 0, sizeof(int));
right_value280 = (void*)0;
memset(&type_222, 0, sizeof(struct sType*));
memset(&var_name_223, 0, sizeof(char*));
memset(&function_pointer_flag_224, 0, sizeof(_Bool));
memset(&p_225, 0, sizeof(char*));
memset(&sline_226, 0, sizeof(int));
right_value281 = (void*)0;
memset(&word_227, 0, sizeof(char*));
memset(&var_name_between_brace_228, 0, sizeof(_Bool));
memset(&p_229, 0, sizeof(char*));
memset(&sline_230, 0, sizeof(int));
right_value282 = (void*)0;
memset(&word_231, 0, sizeof(char*));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&node_233, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&pointer_num_234, 0, sizeof(int));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&node_236, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&pointer_num_237, 0, sizeof(int));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&no_comma_240, 0, sizeof(_Bool));
right_value307 = (void*)0;
memset(&node_241, 0, sizeof(struct sNode*));
memset(&result_type_242, 0, sizeof(struct sType*));
right_value308 = (void*)0;
memset(&i_251, 0, sizeof(int));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&i_255, 0, sizeof(int));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_256, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_257, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
memset(&var_args_259, 0, sizeof(_Bool));
memset(&param_types_256, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_257, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
memset(&var_args_259, 0, sizeof(_Bool));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&result_type_260, 0, sizeof(struct sType*));
right_value323 = (void*)0;
memset(&i_261, 0, sizeof(int));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&i_262, 0, sizeof(int));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&param_types_264, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_265, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
memset(&var_args_267, 0, sizeof(_Bool));
memset(&param_types_264, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_265, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
memset(&var_args_267, 0, sizeof(_Bool));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&exp_268, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&come_value_269, 0, sizeof(struct CVALUE*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&no_comma_272, 0, sizeof(_Bool));
right_value350 = (void*)0;
memset(&node_273, 0, sizeof(struct sNode*));
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&i_275, 0, sizeof(int));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&generics_type_281, 0, sizeof(struct sType*));
memset(&var_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&generics_type_281, 0, sizeof(struct sType*));
memset(&var_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&new_name_284, 0, sizeof(char*));
memset(&klass_285, 0, sizeof(struct sClass*));
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&types_330, 0, sizeof(struct list$1sTypeph*));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&type2_331, 0, sizeof(struct sType*));
memset(&name_332, 0, sizeof(char*));
memset(&err_333, 0, sizeof(_Bool));
memset(&type2_331, 0, sizeof(struct sType*));
memset(&name_332, 0, sizeof(char*));
memset(&err_333, 0, sizeof(_Bool));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&num_tuples_334, 0, sizeof(int));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&o2_saved_335, 0, sizeof(struct list$1sTypeph*));
memset(&it_336, 0, sizeof(struct sType*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&new_name_337, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&no_comma_340, 0, sizeof(_Bool));
right_value397 = (void*)0;
memset(&node_341, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
memset(&node_342, 0, sizeof(struct sNode*));
right_value399 = (void*)0;
memset(&asm_name_343, 0, sizeof(char*));
right_value400 = (void*)0;
right_value401 = (void*)0;
    # 972 "05function4.c"
    head_169=info->p;
    # 973 "05function4.c"
    head_sline_170=info->sline;
    # 974 "05function4.c"
    info->define_struct=(_Bool)0;
    # 976 "05function4.c"
    type_name_171=(char*)come_increment_ref_count(((char*)(right_value222=parse_word(info))));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 981 "05function4.c"
    while(_while_condtional32=string_operator_equals(type_name_171,"__extension__"),    _while_condtional32) {
        # 978 "05function4.c"
        __dec_obj77=type_name_171;
        type_name_171=(char*)come_increment_ref_count(((char*)(right_value223=parse_word(info))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 981 "05function4.c"
    record__172=(_Bool)0;
    # 982 "05function4.c"
    constant_173=(_Bool)0;
    # 983 "05function4.c"
    static__174=(_Bool)0;
    # 984 "05function4.c"
    volatile__175=(_Bool)0;
    # 985 "05function4.c"
    register__176=(_Bool)0;
    # 986 "05function4.c"
    unsigned__177=(_Bool)0;
    # 987 "05function4.c"
    long__178=(_Bool)0;
    # 988 "05function4.c"
    long_long_179=(_Bool)0;
    # 989 "05function4.c"
    short__180=(_Bool)0;
    # 990 "05function4.c"
    restrict__181=(_Bool)0;
    # 991 "05function4.c"
    struct__182=(_Bool)0;
    # 992 "05function4.c"
    union__183=(_Bool)0;
    # 993 "05function4.c"
    enum__184=(_Bool)0;
    # 994 "05function4.c"
    no_heap_185=(_Bool)0;
    # 995 "05function4.c"
    extern__186=(_Bool)0;
    # 996 "05function4.c"
    inline__187=(_Bool)0;
    # 997 "05function4.c"
    come_mem_core__188=(_Bool)0;
    # 999 "05function4.c"
    alignas__189=((void*)0);
    # 1001 "05function4.c"
    anonymous_type_190=(_Bool)0;
    # 1002 "05function4.c"
    anonymous_name_191=(_Bool)0;
    # 1441 "05function4.c"
    while(_while_condtional33=(_Bool)1,    _while_condtional33) {
        # 1439 "05function4.c"
        # 1005 "05function4.c"
        if(_if_conditional294=string_operator_equals(type_name_171,"struct"),        _if_conditional294) {
            # 1006 "05function4.c"
            struct__182=(_Bool)1;
            # 1031 "05function4.c"
            # 1008 "05function4.c"
            if(_if_conditional295=*info->p==123,            _if_conditional295) {
                # 1009 "05function4.c"
                p_192=info->p;
                # 1010 "05function4.c"
                sline_193=info->sline;
                # 1012 "05function4.c"
                ((char*)(right_value224=skip_block(info)));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1029 "05function4.c"
                # 1014 "05function4.c"
                if(_if_conditional296=*info->p==59,                _if_conditional296) {
                    # 1015 "05function4.c"
                    anonymous_name_191=(_Bool)1;
                    # 1016 "05function4.c"
                    anonymous_type_190=(_Bool)1;
                    # 1017 "05function4.c"
                    __dec_obj78=type_name_171;
                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(""))));
                    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1018 "05function4.c"
                    info->p=p_192;
                    # 1019 "05function4.c"
                    info->sline=sline_193;
                    # 1020 "05function4.c"
                    break;
                }
                else {
                    # 1023 "05function4.c"
                    anonymous_type_190=(_Bool)1;
                    # 1024 "05function4.c"
                    __dec_obj79=type_name_171;
                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(""))));
                    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1025 "05function4.c"
                    info->p=p_192;
                    # 1026 "05function4.c"
                    info->sline=sline_193;
                    # 1027 "05function4.c"
                    break;
                }
            }
            # 1031 "05function4.c"
            parse_sharp_v5(info);
            # 1033 "05function4.c"
            __dec_obj80=type_name_171;
            type_name_171=(char*)come_increment_ref_count(((char*)(right_value227=parse_word(info))));
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1035 "05function4.c"
            parse_sharp_v5(info);
            # 1067 "05function4.c"
            # 1037 "05function4.c"
            if(_if_conditional297=*info->p==60,            _if_conditional297) {
                # 1038 "05function4.c"
                p_194=info->p;
                # 1039 "05function4.c"
                sline_195=info->sline;
                # 1041 "05function4.c"
                info->p++;
                # 1042 "05function4.c"
                skip_spaces_and_lf(info);
                # 1065 "05function4.c"
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    # 1064 "05function4.c"
                    # 1045 "05function4.c"
                    if(_if_conditional298=*info->p==62,                    _if_conditional298) {
                        # 1046 "05function4.c"
                        info->p++;
                        # 1047 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1055 "05function4.c"
                        # 1049 "05function4.c"
                        if(_if_conditional299=*info->p==123,                        _if_conditional299) {
                        }
                        else {
                            # 1052 "05function4.c"
                            info->p=p_194;
                            # 1053 "05function4.c"
                            info->sline=sline_195;
                        }
                        # 1055 "05function4.c"
                        break;
                    }
                    else {
                        # 1064 "05function4.c"
                        # 1057 "05function4.c"
                        if(_if_conditional300=*info->p==0,                        _if_conditional300) {
                            # 1058 "05function4.c"
                            err_msg(info,"invalid struct definition");
                            # 1059 "05function4.c"
                            __result125__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value229=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value228=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1059, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result125__;
                        }
                        else {
                            # 1062 "05function4.c"
                            info->p++;
                        }
                    }
                }
            }
            # 1086 "05function4.c"
            # 1067 "05function4.c"
            if(_if_conditional301=*info->p==123,            _if_conditional301) {
                # 1068 "05function4.c"
                p_196=info->p;
                # 1069 "05function4.c"
                sline_197=info->sline;
                # 1071 "05function4.c"
                ((char*)(right_value230=skip_block(info)));
                right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1085 "05function4.c"
                # 1073 "05function4.c"
                if(_if_conditional302=*info->p==59,                _if_conditional302) {
                    # 1074 "05function4.c"
                    info->p=head_169;
                    # 1075 "05function4.c"
                    info->sline=head_sline_170;
                    # 1076 "05function4.c"
                    info->define_struct=(_Bool)1;
                    # 1077 "05function4.c"
                    __result126__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value232=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value231=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1077, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result126__;
                }
                else {
                    # 1080 "05function4.c"
                    anonymous_type_190=(_Bool)1;
                    # 1081 "05function4.c"
                    info->p=p_196;
                    # 1082 "05function4.c"
                    info->sline=sline_197;
                    # 1083 "05function4.c"
                    break;
                }
            }
        }
        else {
            # 1439 "05function4.c"
            # 1087 "05function4.c"
            if(_if_conditional303=string_operator_equals(type_name_171,"union"),            _if_conditional303) {
                # 1088 "05function4.c"
                union__183=(_Bool)1;
                # 1116 "05function4.c"
                # 1090 "05function4.c"
                if(_if_conditional304=*info->p==123,                _if_conditional304) {
                    # 1091 "05function4.c"
                    p_198=info->p;
                    # 1092 "05function4.c"
                    sline_199=info->sline;
                    # 1094 "05function4.c"
                    ((char*)(right_value233=skip_block(info)));
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1114 "05function4.c"
                    # 1096 "05function4.c"
                    if(_if_conditional305=*info->p==59,                    _if_conditional305) {
                        # 1097 "05function4.c"
                        info->p=head_169;
                        # 1098 "05function4.c"
                        info->sline=head_sline_170;
                        # 1100 "05function4.c"
                        info->define_struct=(_Bool)0;
                        # 1101 "05function4.c"
                        anonymous_type_190=(_Bool)1;
                        # 1102 "05function4.c"
                        __dec_obj83=type_name_171;
                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(""))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1103 "05function4.c"
                        info->p=p_198;
                        # 1104 "05function4.c"
                        info->sline=sline_199;
                        # 1105 "05function4.c"
                        break;
                    }
                    else {
                        # 1108 "05function4.c"
                        anonymous_type_190=(_Bool)1;
                        # 1109 "05function4.c"
                        __dec_obj84=type_name_171;
                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(""))));
                        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1110 "05function4.c"
                        info->p=p_198;
                        # 1111 "05function4.c"
                        info->sline=sline_199;
                        # 1112 "05function4.c"
                        break;
                    }
                }
                # 1116 "05function4.c"
                parse_sharp_v5(info);
                # 1118 "05function4.c"
                __dec_obj85=type_name_171;
                type_name_171=(char*)come_increment_ref_count(((char*)(right_value236=parse_word(info))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1120 "05function4.c"
                parse_sharp_v5(info);
                # 1141 "05function4.c"
                # 1122 "05function4.c"
                if(_if_conditional306=*info->p==123,                _if_conditional306) {
                    # 1123 "05function4.c"
                    p_200=info->p;
                    # 1124 "05function4.c"
                    sline_201=info->sline;
                    # 1126 "05function4.c"
                    ((char*)(right_value237=skip_block(info)));
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1140 "05function4.c"
                    # 1128 "05function4.c"
                    if(_if_conditional307=*info->p==59,                    _if_conditional307) {
                        # 1129 "05function4.c"
                        info->p=head_169;
                        # 1130 "05function4.c"
                        info->sline=head_sline_170;
                        # 1131 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1132 "05function4.c"
                        __result127__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value239=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value238=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1132, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result127__;
                    }
                    else {
                        # 1135 "05function4.c"
                        anonymous_type_190=(_Bool)1;
                        # 1136 "05function4.c"
                        info->p=p_200;
                        # 1137 "05function4.c"
                        info->sline=sline_201;
                        # 1138 "05function4.c"
                        break;
                    }
                }
            }
            else {
                # 1439 "05function4.c"
                # 1142 "05function4.c"
                if(_if_conditional308=string_operator_equals(type_name_171,"enum"),                _if_conditional308) {
                    # 1143 "05function4.c"
                    enum__184=(_Bool)1;
                    # 1145 "05function4.c"
                    parse_sharp_v5(info);
                    # 1168 "05function4.c"
                    # 1147 "05function4.c"
                    if(_if_conditional309=*info->p==123,                    _if_conditional309) {
                        # 1148 "05function4.c"
                        p_202=info->p;
                        # 1149 "05function4.c"
                        sline_203=info->sline;
                        # 1151 "05function4.c"
                        ((char*)(right_value240=skip_block(info)));
                        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1166 "05function4.c"
                        # 1153 "05function4.c"
                        if(_if_conditional310=*info->p==59,                        _if_conditional310) {
                            # 1154 "05function4.c"
                            info->p=head_169;
                            # 1155 "05function4.c"
                            info->sline=head_sline_170;
                            # 1156 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1157 "05function4.c"
                            __result128__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value242=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value241=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1157, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result128__;
                        }
                        else {
                            # 1160 "05function4.c"
                            anonymous_type_190=(_Bool)1;
                            # 1161 "05function4.c"
                            __dec_obj86=type_name_171;
                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(""))));
                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1162 "05function4.c"
                            info->p=p_202;
                            # 1163 "05function4.c"
                            info->sline=sline_203;
                            # 1164 "05function4.c"
                            break;
                        }
                    }
                    # 1168 "05function4.c"
                    parse_sharp_v5(info);
                    # 1170 "05function4.c"
                    __dec_obj87=type_name_171;
                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value244=parse_word(info))));
                    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1172 "05function4.c"
                    parse_sharp_v5(info);
                    # 1193 "05function4.c"
                    # 1174 "05function4.c"
                    if(_if_conditional311=*info->p==123,                    _if_conditional311) {
                        # 1175 "05function4.c"
                        p_204=info->p;
                        # 1176 "05function4.c"
                        sline_205=info->sline;
                        # 1178 "05function4.c"
                        ((char*)(right_value245=skip_block(info)));
                        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1192 "05function4.c"
                        # 1180 "05function4.c"
                        if(_if_conditional312=*info->p==59,                        _if_conditional312) {
                            # 1181 "05function4.c"
                            info->p=head_169;
                            # 1182 "05function4.c"
                            info->sline=head_sline_170;
                            # 1183 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1184 "05function4.c"
                            __result129__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value247=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value246=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1184, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result129__;
                        }
                        else {
                            # 1187 "05function4.c"
                            anonymous_type_190=(_Bool)1;
                            # 1188 "05function4.c"
                            info->p=p_204;
                            # 1189 "05function4.c"
                            info->sline=sline_205;
                            # 1190 "05function4.c"
                            break;
                        }
                    }
                }
                else {
                    # 1439 "05function4.c"
                    # 1194 "05function4.c"
                    if(_if_conditional313=string_operator_equals(type_name_171,"_Alignas"),                    _if_conditional313) {
                        # 1195 "05function4.c"
                        expected_next_character(40,info);
                        # 1197 "05function4.c"
                        exp_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=expression_v13(info))));
                        if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1199 "05function4.c"
                        __dec_obj88=alignas__189;
                        alignas__189=(struct sNode*)come_increment_ref_count(exp_206);
                        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1201 "05function4.c"
                        expected_next_character(41,info);
                        # 1203 "05function4.c"
                        __dec_obj89=type_name_171;
                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value249=parse_word(info))));
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_206) { exp_206 = come_decrement_ref_count2(exp_206, ((struct sNode*)exp_206)->finalize, ((struct sNode*)exp_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1439 "05function4.c"
                        # 1205 "05function4.c"
                        if(_if_conditional314=string_operator_equals(type_name_171,"const"),                        _if_conditional314) {
                            # 1206 "05function4.c"
                            constant_173=(_Bool)1;
                            # 1208 "05function4.c"
                            __dec_obj90=type_name_171;
                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value250=parse_word(info))));
                            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1439 "05function4.c"
                            # 1210 "05function4.c"
                            if(_if_conditional315=string_operator_equals(type_name_171,"static"),                            _if_conditional315) {
                                # 1211 "05function4.c"
                                static__174=(_Bool)1;
                                # 1213 "05function4.c"
                                __dec_obj91=type_name_171;
                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value251=parse_word(info))));
                                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1439 "05function4.c"
                                # 1215 "05function4.c"
                                if(_if_conditional316=string_operator_equals(type_name_171,"record"),                                _if_conditional316) {
                                    # 1216 "05function4.c"
                                    record__172=(_Bool)1;
                                    # 1218 "05function4.c"
                                    __dec_obj92=type_name_171;
                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value252=parse_word(info))));
                                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1439 "05function4.c"
                                    # 1220 "05function4.c"
                                    if(_if_conditional317=string_operator_equals(type_name_171,"come_mem_core"),                                    _if_conditional317) {
                                        # 1221 "05function4.c"
                                        come_mem_core__188=(_Bool)1;
                                        # 1223 "05function4.c"
                                        __dec_obj93=type_name_171;
                                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value253=parse_word(info))));
                                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1439 "05function4.c"
                                        # 1225 "05function4.c"
                                        if(_if_conditional318=string_operator_equals(type_name_171,"extern"),                                        _if_conditional318) {
                                            # 1226 "05function4.c"
                                            extern__186=(_Bool)1;
                                            # 1228 "05function4.c"
                                            __dec_obj94=type_name_171;
                                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value254=parse_word(info))));
                                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1439 "05function4.c"
                                            # 1230 "05function4.c"
                                            if(_if_conditional319=string_operator_equals(type_name_171,"_Noreturn"),                                            _if_conditional319) {
                                                # 1231 "05function4.c"
                                                __dec_obj95=type_name_171;
                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value255=parse_word(info))));
                                                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1439 "05function4.c"
                                                # 1233 "05function4.c"
                                                if(_if_conditional320=string_operator_equals(type_name_171,"inline")||string_operator_equals(type_name_171,"__inline")||string_operator_equals(type_name_171,"__inline__")||string_operator_equals(type_name_171,"__always_inline"),                                                _if_conditional320) {
                                                    # 1234 "05function4.c"
                                                    inline__187=(_Bool)1;
                                                    # 1236 "05function4.c"
                                                    __dec_obj96=type_name_171;
                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value256=parse_word(info))));
                                                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1439 "05function4.c"
                                                    # 1238 "05function4.c"
                                                    if(_if_conditional321=string_operator_equals(type_name_171,"volatile"),                                                    _if_conditional321) {
                                                        # 1239 "05function4.c"
                                                        volatile__175=(_Bool)1;
                                                        # 1241 "05function4.c"
                                                        __dec_obj97=type_name_171;
                                                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value257=parse_word(info))));
                                                        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        # 1439 "05function4.c"
                                                        # 1243 "05function4.c"
                                                        if(_if_conditional322=string_operator_equals(type_name_171,"long"),                                                        _if_conditional322) {
                                                            # 1310 "05function4.c"
                                                            {
                                                                # 1246 "05function4.c"
                                                                p_207=info->p;
                                                                # 1247 "05function4.c"
                                                                sline_208=info->sline;
                                                                # 1309 "05function4.c"
                                                                # 1249 "05function4.c"
                                                                if(_if_conditional323=!xisalpha(*info->p),                                                                _if_conditional323) {
                                                                    # 1250 "05function4.c"
                                                                    info->p=p_207;
                                                                    # 1251 "05function4.c"
                                                                    info->sline=sline_208;
                                                                    # 1253 "05function4.c"
                                                                    __dec_obj98=type_name_171;
                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string("long"))));
                                                                    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1254 "05function4.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 1257 "05function4.c"
                                                                    __dec_obj99=type_name_171;
                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value259=parse_word(info))));
                                                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1308 "05function4.c"
                                                                    # 1259 "05function4.c"
                                                                    if(_if_conditional324=string_operator_equals(type_name_171,"unsigned"),                                                                    _if_conditional324) {
                                                                        # 1260 "05function4.c"
                                                                        __dec_obj100=type_name_171;
                                                                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value260=parse_word(info))));
                                                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1266 "05function4.c"
                                                                        # 1262 "05function4.c"
                                                                        if(_if_conditional325=string_operator_equals(type_name_171,"int"),                                                                        _if_conditional325) {
                                                                            # 1263 "05function4.c"
                                                                            long__178=(_Bool)1;
                                                                            # 1264 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1308 "05function4.c"
                                                                        # 1267 "05function4.c"
                                                                        if(_if_conditional326=string_operator_equals(type_name_171,"long"),                                                                        _if_conditional326) {
                                                                            # 1268 "05function4.c"
                                                                            p_207=info->p;
                                                                            # 1269 "05function4.c"
                                                                            sline_208=info->sline;
                                                                            # 1279 "05function4.c"
                                                                            # 1270 "05function4.c"
                                                                            if(_if_conditional327=xisalpha(*info->p),                                                                            _if_conditional327) {
                                                                                # 1271 "05function4.c"
                                                                                long_long_179=(_Bool)1;
                                                                                # 1272 "05function4.c"
                                                                                __dec_obj101=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value261=parse_word(info))));
                                                                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1275 "05function4.c"
                                                                                long__178=(_Bool)1;
                                                                                # 1276 "05function4.c"
                                                                                break;
                                                                            }
                                                                            # 1290 "05function4.c"
                                                                            # 1279 "05function4.c"
                                                                            if(_if_conditional328=string_operator_equals(type_name_171,"int"),                                                                            _if_conditional328) {
                                                                                # 1280 "05function4.c"
                                                                                long_long_179=(_Bool)1;
                                                                                # 1281 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1290 "05function4.c"
                                                                                # 1283 "05function4.c"
                                                                                if(_if_conditional329=!is_type_name(type_name_171,info),                                                                                _if_conditional329) {
                                                                                    # 1284 "05function4.c"
                                                                                    __dec_obj102=type_name_171;
                                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("long"))));
                                                                                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1285 "05function4.c"
                                                                                    long_long_179=(_Bool)1;
                                                                                    # 1286 "05function4.c"
                                                                                    info->p=p_207;
                                                                                    # 1287 "05function4.c"
                                                                                    info->sline=sline_208;
                                                                                    # 1288 "05function4.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1308 "05function4.c"
                                                                            # 1291 "05function4.c"
                                                                            if(_if_conditional330=is_type_name(type_name_171,info),                                                                            _if_conditional330) {
                                                                                # 1299 "05function4.c"
                                                                                # 1292 "05function4.c"
                                                                                if(long__178) {
                                                                                    # 1293 "05function4.c"
                                                                                    long_long_179=(_Bool)1;
                                                                                    # 1294 "05function4.c"
                                                                                    long__178=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 1297 "05function4.c"
                                                                                    long__178=(_Bool)1;
                                                                                }
                                                                                # 1299 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1302 "05function4.c"
                                                                                info->p=p_207;
                                                                                # 1303 "05function4.c"
                                                                                info->sline=sline_208;
                                                                                # 1305 "05function4.c"
                                                                                __dec_obj103=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string("long"))));
                                                                                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1306 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1439 "05function4.c"
                                                            # 1311 "05function4.c"
                                                            if(_if_conditional332=string_operator_equals(type_name_171,"unsigned"),                                                            _if_conditional332) {
                                                                # 1312 "05function4.c"
                                                                unsigned__177=(_Bool)1;
                                                                # 1379 "05function4.c"
                                                                # 1314 "05function4.c"
                                                                if(_if_conditional333=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional333) {
                                                                    # 1315 "05function4.c"
                                                                    p_209=info->p;
                                                                    # 1316 "05function4.c"
                                                                    sline_210=info->sline;
                                                                    # 1318 "05function4.c"
                                                                    __dec_obj104=type_name_171;
                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value264=parse_word(info))));
                                                                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1374 "05function4.c"
                                                                    # 1320 "05function4.c"
                                                                    if(_if_conditional334=string_operator_equals(type_name_171,"short"),                                                                    _if_conditional334) {
                                                                        # 1343 "05function4.c"
                                                                        # 1321 "05function4.c"
                                                                        if(_if_conditional335=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional335) {
                                                                            # 1322 "05function4.c"
                                                                            p_211=info->p;
                                                                            # 1323 "05function4.c"
                                                                            sline_212=info->sline;
                                                                            # 1325 "05function4.c"
                                                                            __dec_obj105=type_name_171;
                                                                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value265=parse_word(info))));
                                                                            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1337 "05function4.c"
                                                                            # 1327 "05function4.c"
                                                                            if(_if_conditional336=is_type_name(type_name_171,info),                                                                            _if_conditional336) {
                                                                                # 1328 "05function4.c"
                                                                                short__180=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1331 "05function4.c"
                                                                                short__180=(_Bool)1;
                                                                                # 1332 "05function4.c"
                                                                                __dec_obj106=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("int"))));
                                                                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1334 "05function4.c"
                                                                                info->p=p_211;
                                                                                # 1335 "05function4.c"
                                                                                info->sline=sline_212;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1339 "05function4.c"
                                                                            short__180=(_Bool)1;
                                                                            # 1340 "05function4.c"
                                                                            __dec_obj107=type_name_171;
                                                                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("int"))));
                                                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1341 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1374 "05function4.c"
                                                                        # 1344 "05function4.c"
                                                                        if(_if_conditional337=string_operator_equals(type_name_171,"long"),                                                                        _if_conditional337) {
                                                                            # 1367 "05function4.c"
                                                                            # 1345 "05function4.c"
                                                                            if(_if_conditional338=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional338) {
                                                                                # 1346 "05function4.c"
                                                                                p_213=info->p;
                                                                                # 1347 "05function4.c"
                                                                                sline_214=info->sline;
                                                                                # 1349 "05function4.c"
                                                                                __dec_obj108=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value268=parse_word(info))));
                                                                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1361 "05function4.c"
                                                                                # 1351 "05function4.c"
                                                                                if(_if_conditional339=is_type_name(type_name_171,info),                                                                                _if_conditional339) {
                                                                                    # 1352 "05function4.c"
                                                                                    long__178=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1355 "05function4.c"
                                                                                    long__178=(_Bool)1;
                                                                                    # 1356 "05function4.c"
                                                                                    __dec_obj109=type_name_171;
                                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("int"))));
                                                                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1358 "05function4.c"
                                                                                    info->p=p_213;
                                                                                    # 1359 "05function4.c"
                                                                                    info->sline=sline_214;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1363 "05function4.c"
                                                                                long__178=(_Bool)1;
                                                                                # 1364 "05function4.c"
                                                                                __dec_obj110=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("int"))));
                                                                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1365 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1374 "05function4.c"
                                                                            # 1368 "05function4.c"
                                                                            if(_if_conditional340=!is_type_name(type_name_171,info),                                                                            _if_conditional340) {
                                                                                # 1369 "05function4.c"
                                                                                __dec_obj111=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("int"))));
                                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1370 "05function4.c"
                                                                                info->p=p_209;
                                                                                # 1371 "05function4.c"
                                                                                info->sline=sline_210;
                                                                                # 1372 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1376 "05function4.c"
                                                                    __dec_obj112=type_name_171;
                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string("int"))));
                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1377 "05function4.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1439 "05function4.c"
                                                                # 1380 "05function4.c"
                                                                if(_if_conditional341=string_operator_equals(type_name_171,"signed")||string_operator_equals(type_name_171,"__signed__"),                                                                _if_conditional341) {
                                                                    # 1381 "05function4.c"
                                                                    unsigned__177=(_Bool)0;
                                                                    # 1383 "05function4.c"
                                                                    __dec_obj113=type_name_171;
                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value273=parse_word(info))));
                                                                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1439 "05function4.c"
                                                                    # 1385 "05function4.c"
                                                                    if(_if_conditional342=string_operator_equals(type_name_171,"register"),                                                                    _if_conditional342) {
                                                                        # 1386 "05function4.c"
                                                                        register__176=(_Bool)1;
                                                                        # 1388 "05function4.c"
                                                                        __dec_obj114=type_name_171;
                                                                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value274=parse_word(info))));
                                                                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1439 "05function4.c"
                                                                        # 1390 "05function4.c"
                                                                        if(_if_conditional343=string_operator_equals(type_name_171,"restrict"),                                                                        _if_conditional343) {
                                                                            # 1391 "05function4.c"
                                                                            restrict__181=(_Bool)1;
                                                                            # 1393 "05function4.c"
                                                                            __dec_obj115=type_name_171;
                                                                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value275=parse_word(info))));
                                                                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1439 "05function4.c"
                                                                            # 1395 "05function4.c"
                                                                            if(_if_conditional344=string_operator_equals(type_name_171,"_Addr"),                                                                            _if_conditional344) {
                                                                                # 1396 "05function4.c"
                                                                                __dec_obj116=type_name_171;
                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value276=parse_word(info))));
                                                                                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1439 "05function4.c"
                                                                                # 1398 "05function4.c"
                                                                                if(_if_conditional345=string_operator_equals(type_name_171,"__restrict"),                                                                                _if_conditional345) {
                                                                                    # 1399 "05function4.c"
                                                                                    restrict__181=(_Bool)1;
                                                                                    # 1401 "05function4.c"
                                                                                    __dec_obj117=type_name_171;
                                                                                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value277=parse_word(info))));
                                                                                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 1439 "05function4.c"
                                                                                    # 1403 "05function4.c"
                                                                                    if(_if_conditional346=string_operator_equals(type_name_171,"short"),                                                                                    _if_conditional346) {
                                                                                        # 1404 "05function4.c"
                                                                                        short__180=(_Bool)1;
                                                                                        # 1435 "05function4.c"
                                                                                        # 1406 "05function4.c"
                                                                                        if(_if_conditional347=*info->p==58,                                                                                        _if_conditional347) {
                                                                                            # 1407 "05function4.c"
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            # 1435 "05function4.c"
                                                                                            # 1409 "05function4.c"
                                                                                            if(_if_conditional348=xisalnum(*info->p),                                                                                            _if_conditional348) {
                                                                                                # 1410 "05function4.c"
                                                                                                p_215=info->p;
                                                                                                # 1411 "05function4.c"
                                                                                                sline_216=info->sline;
                                                                                                # 1412 "05function4.c"
                                                                                                __dec_obj118=type_name_171;
                                                                                                type_name_171=(char*)come_increment_ref_count(((char*)(right_value278=parse_word(info))));
                                                                                                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1431 "05function4.c"
                                                                                                # 1414 "05function4.c"
                                                                                                if(_if_conditional349=string_operator_equals(type_name_171,"int"),                                                                                                _if_conditional349) {
                                                                                                    # 1415 "05function4.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1431 "05function4.c"
                                                                                                    # 1417 "05function4.c"
                                                                                                    if(_if_conditional350=string_operator_equals(type_name_171,"short"),                                                                                                    _if_conditional350) {
                                                                                                        # 1418 "05function4.c"
                                                                                                        short__180=(_Bool)0;
                                                                                                        # 1419 "05function4.c"
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1431 "05function4.c"
                                                                                                        # 1421 "05function4.c"
                                                                                                        if(_if_conditional351=is_type_name(type_name_171,info),                                                                                                        _if_conditional351) {
                                                                                                            # 1422 "05function4.c"
                                                                                                            info->p=p_215;
                                                                                                            # 1423 "05function4.c"
                                                                                                            info->sline=sline_216;
                                                                                                        }
                                                                                                        else {
                                                                                                            # 1426 "05function4.c"
                                                                                                            __dec_obj119=type_name_171;
                                                                                                            type_name_171=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("short"))));
                                                                                                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            # 1427 "05function4.c"
                                                                                                            info->p=p_215;
                                                                                                            # 1428 "05function4.c"
                                                                                                            info->sline=sline_216;
                                                                                                            # 1429 "05function4.c"
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                # 1433 "05function4.c"
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 1437 "05function4.c"
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
    }
    # 1441 "05function4.c"
    skip_pointer_attribute(info);
    # 1443 "05function4.c"
    pointer_num_217=0;
    # 1453 "05function4.c"
    while(_while_condtional35=*info->p==42,    _while_condtional35) {
        # 1445 "05function4.c"
        info->p++;
        # 1446 "05function4.c"
        skip_spaces_and_lf(info);
        # 1448 "05function4.c"
        skip_pointer_attribute(info);
        # 1450 "05function4.c"
        pointer_num_217++;
    }
    # 1453 "05function4.c"
    heap_218=(_Bool)0;
    # 1461 "05function4.c"
    # 1454 "05function4.c"
    if(_if_conditional352=*info->p==37,    _if_conditional352) {
        # 1455 "05function4.c"
        info->p++;
        # 1456 "05function4.c"
        skip_spaces_and_lf(info);
        # 1458 "05function4.c"
        heap_218=(_Bool)1;
    }
    # 1461 "05function4.c"
    lambda_flag_219=(_Bool)0;
    # 1478 "05function4.c"
    {
        # 1463 "05function4.c"
        pX_220=info->p;
        # 1464 "05function4.c"
        slineX_221=info->sline;
        # 1474 "05function4.c"
        # 1466 "05function4.c"
        if(_if_conditional353=xisalpha(*info->p)||*info->p==95,        _if_conditional353) {
            # 1467 "05function4.c"
            (void)((char*)(right_value280=parse_word(info)));
            right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1472 "05function4.c"
            # 1469 "05function4.c"
            if(_if_conditional354=*info->p==40&&info->in_typedef,            _if_conditional354) {
                # 1470 "05function4.c"
                lambda_flag_219=(_Bool)1;
            }
        }
        # 1474 "05function4.c"
        info->p=pX_220;
        # 1475 "05function4.c"
        info->sline=slineX_221;
    }
    # 1478 "05function4.c"
    # 1479 "05function4.c"
    # 1481 "05function4.c"
    function_pointer_flag_224=(_Bool)0;
    # 1513 "05function4.c"
    {
        # 1483 "05function4.c"
        p_225=info->p;
        # 1484 "05function4.c"
        sline_226=info->sline;
        # 1509 "05function4.c"
        # 1486 "05function4.c"
        if(_if_conditional355=*info->p==40,        _if_conditional355) {
            # 1487 "05function4.c"
            info->p++;
            # 1488 "05function4.c"
            skip_spaces_and_lf(info);
            # 1490 "05function4.c"
            skip_pointer_attribute(info);
            # 1507 "05function4.c"
            # 1492 "05function4.c"
            if(_if_conditional356=*info->p==42||*info->p==94,            _if_conditional356) {
                # 1493 "05function4.c"
                function_pointer_flag_224=(_Bool)1;
            }
            else {
                # 1507 "05function4.c"
                # 1495 "05function4.c"
                if(_if_conditional357=xisalpha(*info->p)||*info->p==95,                _if_conditional357) {
                    # 1496 "05function4.c"
                    word_227=(char*)come_increment_ref_count(((char*)(right_value281=parse_word(info))));
                    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1506 "05function4.c"
                    # 1498 "05function4.c"
                    if(_if_conditional358=*info->p==41,                    _if_conditional358) {
                        # 1499 "05function4.c"
                        info->p++;
                        # 1500 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1505 "05function4.c"
                        # 1502 "05function4.c"
                        if(_if_conditional359=*info->p==40,                        _if_conditional359) {
                            # 1503 "05function4.c"
                            function_pointer_flag_224=(_Bool)1;
                        }
                    }
                    word_227 = come_decrement_ref_count2(word_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1509 "05function4.c"
        info->p=p_225;
        # 1510 "05function4.c"
        info->sline=sline_226;
    }
    # 1513 "05function4.c"
    var_name_between_brace_228=(_Bool)0;
    # 1544 "05function4.c"
    {
        # 1515 "05function4.c"
        p_229=info->p;
        # 1516 "05function4.c"
        sline_230=info->sline;
        # 1540 "05function4.c"
        # 1518 "05function4.c"
        if(_if_conditional360=*info->p==40,        _if_conditional360) {
            # 1519 "05function4.c"
            info->p++;
            # 1520 "05function4.c"
            skip_spaces_and_lf(info);
            # 1522 "05function4.c"
            skip_pointer_attribute(info);
            # 1538 "05function4.c"
            # 1524 "05function4.c"
            if(_if_conditional361=xisalpha(*info->p)||*info->p==95,            _if_conditional361) {
                # 1525 "05function4.c"
                word_231=(char*)come_increment_ref_count(((char*)(right_value282=parse_word(info))));
                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1537 "05function4.c"
                # 1527 "05function4.c"
                if(_if_conditional362=is_type_name(word_231,info),                _if_conditional362) {
                }
                else {
                    # 1537 "05function4.c"
                    # 1529 "05function4.c"
                    if(_if_conditional363=*info->p==41,                    _if_conditional363) {
                        # 1530 "05function4.c"
                        info->p++;
                        # 1531 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1536 "05function4.c"
                        # 1533 "05function4.c"
                        if(_if_conditional364=*info->p!=40,                        _if_conditional364) {
                            # 1534 "05function4.c"
                            var_name_between_brace_228=(_Bool)1;
                        }
                    }
                }
                word_231 = come_decrement_ref_count2(word_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1540 "05function4.c"
        info->p=p_229;
        # 1541 "05function4.c"
        info->sline=sline_230;
    }
    # 2223 "05function4.c"
    # 1544 "05function4.c"
    if(_if_conditional365=anonymous_type_190&&*info->p==123,    _if_conditional365) {
        # 1545 "05function4.c"
        # 1615 "05function4.c"
        # 1546 "05function4.c"
        if(struct__182) {
            # 1551 "05function4.c"
            # 1547 "05function4.c"
            if(_if_conditional367=string_operator_equals(type_name_171,""),            _if_conditional367) {
                # 1548 "05function4.c"
                __dec_obj120=type_name_171;
                type_name_171=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("anonymous_typeX%d",++anonymous_num_232))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1551 "05function4.c"
            node_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=parse_struct((char*)come_increment_ref_count(type_name_171),info))));
            if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1558 "05function4.c"
            # 1553 "05function4.c"
            if(_if_conditional368=!node_compile(node_233,info),            _if_conditional368) {
                # 1554 "05function4.c"
                err_msg(info,"parse_struct is failed");
                # 1555 "05function4.c"
                __result130__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value286=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value285=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1555, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result130__;
            }
            # 1558 "05function4.c"
            pointer_num_234=0;
            # 1565 "05function4.c"
            while(_while_condtional36=*info->p==42,            _while_condtional36) {
                # 1561 "05function4.c"
                info->p++;
                # 1561 "05function4.c"
                skip_spaces_and_lf(info);
                # 1562 "05function4.c"
                pointer_num_234++;
            }
            # 1565 "05function4.c"
            __dec_obj121=type_222;
            type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value287=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1565, "sType")))),type_name_171,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1567 "05function4.c"
            type_222->mPointerNum=pointer_num_234;
            if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1615 "05function4.c"
            # 1569 "05function4.c"
            if(enum__184) {
                # 1574 "05function4.c"
                # 1570 "05function4.c"
                if(_if_conditional370=string_operator_equals(type_name_171,""),                _if_conditional370) {
                    # 1571 "05function4.c"
                    __dec_obj122=type_name_171;
                    type_name_171=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("anonymous_typeY%d",++anonymous_num_232))));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1574 "05function4.c"
                node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=parse_enum((char*)come_increment_ref_count(type_name_171),info))));
                if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1583 "05function4.c"
                # 1576 "05function4.c"
                if(_if_conditional371=!info->no_output_err,                _if_conditional371) {
                    # 1581 "05function4.c"
                    # 1577 "05function4.c"
                    if(_if_conditional372=!node_compile(node_235,info),                    _if_conditional372) {
                        # 1578 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1579 "05function4.c"
                        __result131__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value292=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value291=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1579, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result131__;
                    }
                }
                # 1583 "05function4.c"
                __dec_obj123=type_222;
                type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1583, "sType")))),type_name_171,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1615 "05function4.c"
                # 1585 "05function4.c"
                if(union__183) {
                    # 1590 "05function4.c"
                    # 1586 "05function4.c"
                    if(_if_conditional374=string_operator_equals(type_name_171,""),                    _if_conditional374) {
                        # 1587 "05function4.c"
                        __dec_obj124=type_name_171;
                        type_name_171=(char*)come_increment_ref_count(((char*)(right_value295=xsprintf("anonymous_typeZ%d",++anonymous_num_232))));
                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1590 "05function4.c"
                    node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=parse_union((char*)come_increment_ref_count(type_name_171),info))));
                    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1599 "05function4.c"
                    # 1593 "05function4.c"
                    if(_if_conditional375=!node_compile(node_236,info),                    _if_conditional375) {
                        # 1594 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1595 "05function4.c"
                        __result132__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value298=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value297=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1595, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result132__;
                    }
                    # 1599 "05function4.c"
                    pointer_num_237=0;
                    # 1606 "05function4.c"
                    while(_while_condtional37=*info->p==42,                    _while_condtional37) {
                        # 1602 "05function4.c"
                        info->p++;
                        # 1602 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1603 "05function4.c"
                        pointer_num_237++;
                    }
                    # 1606 "05function4.c"
                    __dec_obj125=type_222;
                    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1606, "sType")))),type_name_171,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1608 "05function4.c"
                    type_222->mPointerNum=pointer_num_237;
                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1611 "05function4.c"
                    err_msg(info,"unexpected { character");
                    # 1612 "05function4.c"
                    __result133__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value302=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value301=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1612, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result133__;
                }
            }
        }
        # 1656 "05function4.c"
        # 1615 "05function4.c"
        if(parse_variable_name) {
            # 1616 "05function4.c"
            parse_sharp_v5(info);
            # 1622 "05function4.c"
            # 1617 "05function4.c"
            if(_if_conditional377=var_name_between_brace_228&&*info->p==40,            _if_conditional377) {
                # 1618 "05function4.c"
                info->p++;
                # 1619 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1639 "05function4.c"
            # 1622 "05function4.c"
            if(_if_conditional378=*info->p==58,            _if_conditional378) {
                # 1623 "05function4.c"
                __dec_obj126=var_name_223;
                var_name_223=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(""))));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1639 "05function4.c"
                # 1625 "05function4.c"
                if(anonymous_name_191) {
                    # 1626 "05function4.c"
                    # 1627 "05function4.c"
                    num_anonymous_var_name_238++;
                    # 1628 "05function4.c"
                    __dec_obj127=var_name_223;
                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_238))));
                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1639 "05function4.c"
                    # 1630 "05function4.c"
                    if(_if_conditional380=xisalnum(*info->p)||*info->p==95,                    _if_conditional380) {
                        # 1631 "05function4.c"
                        __dec_obj128=var_name_223;
                        var_name_223=(char*)come_increment_ref_count(((char*)(right_value305=parse_word(info))));
                        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1634 "05function4.c"
                        # 1635 "05function4.c"
                        num_anonymous_var_name_239++;
                        # 1636 "05function4.c"
                        __dec_obj129=var_name_223;
                        var_name_223=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_239))));
                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1644 "05function4.c"
            # 1639 "05function4.c"
            if(_if_conditional381=var_name_between_brace_228&&*info->p==41,            _if_conditional381) {
                # 1640 "05function4.c"
                info->p++;
                # 1641 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1655 "05function4.c"
            # 1644 "05function4.c"
            if(_if_conditional382=*info->p==58,            _if_conditional382) {
                # 1645 "05function4.c"
                info->p++;
                # 1646 "05function4.c"
                skip_spaces_and_lf(info);
                # 1648 "05function4.c"
                no_comma_240=info->no_comma;
                # 1649 "05function4.c"
                info->no_comma=(_Bool)1;
                # 1650 "05function4.c"
                node_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=expression_v13(info))));
                if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1651 "05function4.c"
                info->no_comma=no_comma_240;
                # 1653 "05function4.c"
                __dec_obj130=type_222->mSizeNum;
                type_222->mSizeNum=(struct sNode*)come_increment_ref_count(node_241);
                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2223 "05function4.c"
        # 1657 "05function4.c"
        if(lambda_flag_219) {
            # 1658 "05function4.c"
            # 1680 "05function4.c"
            # 1659 "05function4.c"
            if(_if_conditional388=map$2charphsTypephp_operator_load_element(info->types,type_name_171),            _if_conditional388) {
                # 1660 "05function4.c"
                __dec_obj131=result_type_242;
                result_type_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_171)))));
                come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1680 "05function4.c"
                # 1662 "05function4.c"
                if(_if_conditional394=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_171)),                _if_conditional394) {
                    # 1668 "05function4.c"
                    for(                    i_251=0;                    i_251<list$1charph_length(info->generics_type_names);                    i_251++                    ){
                        # 1667 "05function4.c"
                        # 1664 "05function4.c"
                        if(_if_conditional398=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_251), "05function4.c", 1664, 5)),type_name_171),                        _if_conditional398) {
                            # 1665 "05function4.c"
                            __dec_obj132=result_type_242;
                            result_type_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1665, "sType")))),((char*)(right_value310=xsprintf("generics_type%d",i_251))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1680 "05function4.c"
                    # 1669 "05function4.c"
                    if(_if_conditional399=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_171)),                    _if_conditional399) {
                        # 1675 "05function4.c"
                        for(                        i_255=0;                        i_255<list$1charph_length(info->method_generics_type_names);                        i_255++                        ){
                            # 1674 "05function4.c"
                            # 1671 "05function4.c"
                            if(_if_conditional400=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_255), "05function4.c", 1671, 6)),type_name_171),                            _if_conditional400) {
                                # 1672 "05function4.c"
                                __dec_obj133=result_type_242;
                                result_type_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1672, "sType")))),((char*)(right_value313=xsprintf("mgenerics_type%d",i_255))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1677 "05function4.c"
                        __dec_obj134=result_type_242;
                        result_type_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1677, "sType")))),type_name_171,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1680 "05function4.c"
            result_type_242->mConstant=result_type_242->mConstant||constant_173;
            # 1681 "05function4.c"
            __dec_obj135=result_type_242->mAlignas;
            result_type_242->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
            # 1682 "05function4.c"
            result_type_242->mComeMemCore=result_type_242->mComeMemCore||come_mem_core__188;
            # 1683 "05function4.c"
            result_type_242->mRegister=register__176;
            # 1684 "05function4.c"
            result_type_242->mUnsigned=result_type_242->mUnsigned||unsigned__177;
            # 1685 "05function4.c"
            result_type_242->mVolatile=volatile__175;
            # 1686 "05function4.c"
            result_type_242->mRecord=result_type_242->mStatic||static__174;
            # 1687 "05function4.c"
            result_type_242->mStatic=result_type_242->mRecord||record__172;
            # 1688 "05function4.c"
            result_type_242->mExtern=result_type_242->mExtern||extern__186;
            # 1689 "05function4.c"
            result_type_242->mInline=result_type_242->mInline||inline__187;
            # 1690 "05function4.c"
            result_type_242->mRestrict=result_type_242->mRestrict||restrict__181;
            # 1691 "05function4.c"
            result_type_242->mLongLong=result_type_242->mLongLong||long_long_179;
            # 1692 "05function4.c"
            result_type_242->mLong=result_type_242->mLong||long__178;
            # 1693 "05function4.c"
            result_type_242->mShort=result_type_242->mShort||short__180;
            # 1694 "05function4.c"
            result_type_242->mPointerNum=pointer_num_217;
            # 1695 "05function4.c"
            result_type_242->mHeap=result_type_242->mHeap||heap_218;
            # 1697 "05function4.c"
            __dec_obj136=var_name_223;
            var_name_223=(char*)come_increment_ref_count(((char*)(right_value317=parse_word(info))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1699 "05function4.c"
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value318=parse_params(info)));
            param_types_256=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_257=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_258=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_259=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1701 "05function4.c"
            __dec_obj137=type_222;
            type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1701, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1703 "05function4.c"
            __dec_obj139=type_222->mResultType;
            type_222->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value322=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value321=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1703, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_242)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1704 "05function4.c"
            __dec_obj140=type_222->mParamTypes;
            type_222->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_256);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1705 "05function4.c"
            __dec_obj141=type_222->mParamNames;
            type_222->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_257);
            come_call_finalizer2(list$1charph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1706 "05function4.c"
            type_222->mVarArgs=var_args_259;
            # 1707 "05function4.c"
            type_222->mExtern=extern__186;
            come_call_finalizer2(sType_finalize,result_type_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2223 "05function4.c"
            # 1709 "05function4.c"
            if(function_pointer_flag_224) {
                # 1710 "05function4.c"
                info->p++;
                # 1711 "05function4.c"
                skip_spaces_and_lf(info);
                # 1713 "05function4.c"
                skip_pointer_attribute(info);
                # 1720 "05function4.c"
                # 1715 "05function4.c"
                if(_if_conditional402=*info->p==42||*info->p==94,                _if_conditional402) {
                    # 1716 "05function4.c"
                    info->p++;
                    # 1717 "05function4.c"
                    skip_spaces_and_lf(info);
                }
                # 1720 "05function4.c"
                skip_pointer_attribute(info);
                # 1722 "05function4.c"
                # 1745 "05function4.c"
                # 1723 "05function4.c"
                if(_if_conditional403=map$2charphsTypephp_operator_load_element(info->types,type_name_171),                _if_conditional403) {
                    # 1724 "05function4.c"
                    __dec_obj142=result_type_260;
                    result_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_171)))));
                    come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1745 "05function4.c"
                    # 1727 "05function4.c"
                    if(_if_conditional404=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_171)),                    _if_conditional404) {
                        # 1733 "05function4.c"
                        for(                        i_261=0;                        i_261<list$1charph_length(info->generics_type_names);                        i_261++                        ){
                            # 1732 "05function4.c"
                            # 1729 "05function4.c"
                            if(_if_conditional405=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_261), "05function4.c", 1729, 7)),type_name_171),                            _if_conditional405) {
                                # 1730 "05function4.c"
                                __dec_obj143=result_type_260;
                                result_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value324=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1730, "sType")))),((char*)(right_value325=xsprintf("generics_type%d",i_261))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1745 "05function4.c"
                        # 1734 "05function4.c"
                        if(_if_conditional406=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_171)),                        _if_conditional406) {
                            # 1740 "05function4.c"
                            for(                            i_262=0;                            i_262<list$1charph_length(info->method_generics_type_names);                            i_262++                            ){
                                # 1739 "05function4.c"
                                # 1736 "05function4.c"
                                if(_if_conditional407=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_262), "05function4.c", 1736, 8)),type_name_171),                                _if_conditional407) {
                                    # 1737 "05function4.c"
                                    __dec_obj144=result_type_260;
                                    result_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1737, "sType")))),((char*)(right_value328=xsprintf("mgenerics_type%d",i_262))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1742 "05function4.c"
                            __dec_obj145=result_type_260;
                            result_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1742, "sType")))),type_name_171,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1745 "05function4.c"
                result_type_260->mConstant=result_type_260->mConstant||constant_173;
                # 1746 "05function4.c"
                __dec_obj146=result_type_260->mAlignas;
                result_type_260->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                # 1747 "05function4.c"
                result_type_260->mComeMemCore=result_type_260->mComeMemCore||come_mem_core__188;
                # 1748 "05function4.c"
                result_type_260->mRegister=register__176;
                # 1749 "05function4.c"
                result_type_260->mUnsigned=result_type_260->mUnsigned||unsigned__177;
                # 1750 "05function4.c"
                result_type_260->mVolatile=volatile__175;
                # 1751 "05function4.c"
                result_type_260->mStatic=result_type_260->mStatic||static__174;
                # 1752 "05function4.c"
                result_type_260->mRecord=result_type_260->mRecord||record__172;
                # 1753 "05function4.c"
                result_type_260->mExtern=result_type_260->mExtern||extern__186;
                # 1754 "05function4.c"
                result_type_260->mInline=result_type_260->mInline||inline__187;
                # 1755 "05function4.c"
                result_type_260->mRestrict=result_type_260->mRestrict||restrict__181;
                # 1756 "05function4.c"
                result_type_260->mLongLong=result_type_260->mLongLong||long_long_179;
                # 1757 "05function4.c"
                result_type_260->mLong=result_type_260->mLong||long__178;
                # 1758 "05function4.c"
                result_type_260->mShort=result_type_260->mShort||short__180;
                # 1759 "05function4.c"
                result_type_260->mPointerNum+=pointer_num_217;
                # 1760 "05function4.c"
                result_type_260->mHeap=result_type_260->mHeap||heap_218;
                # 1773 "05function4.c"
                # 1762 "05function4.c"
                if(_if_conditional408=xisalnum(*info->p)||*info->p==95,                _if_conditional408) {
                    # 1763 "05function4.c"
                    __dec_obj147=var_name_223;
                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value332=parse_word(info))));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1767 "05function4.c"
                    # 1764 "05function4.c"
                    if(_if_conditional409=*info->p==40,                    _if_conditional409) {
                        # 1765 "05function4.c"
                        __result152__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value334=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value333=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1765, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_260),(char*)come_increment_ref_count(var_name_223),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result152__;
                    }
                }
                else {
                    # 1769 "05function4.c"
                    # 1770 "05function4.c"
                    num_anonymous_var_name_263++;
                    # 1771 "05function4.c"
                    __dec_obj148=var_name_223;
                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value335=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_263))));
                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1773 "05function4.c"
                expected_next_character(41,info);
                # 1775 "05function4.c"
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value336=parse_params(info)));
                param_types_264=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_265=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_266=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_267=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1777 "05function4.c"
                __dec_obj149=type_222;
                type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value337=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1777, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1779 "05function4.c"
                __dec_obj150=type_222->mResultType;
                type_222->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value340=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value339=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1779, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_260)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1780 "05function4.c"
                __dec_obj151=type_222->mParamTypes;
                type_222->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_264);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1781 "05function4.c"
                __dec_obj152=type_222->mParamNames;
                type_222->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_265);
                come_call_finalizer2(list$1charph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1782 "05function4.c"
                type_222->mVarArgs=var_args_267;
                # 1783 "05function4.c"
                type_222->mExtern=extern__186;
                come_call_finalizer2(sType_finalize,result_type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2223 "05function4.c"
                # 1785 "05function4.c"
                if(_if_conditional410=string_operator_equals(type_name_171,"__typeof__")&&*info->p==40,                _if_conditional410) {
                    # 1786 "05function4.c"
                    info->p++;
                    # 1787 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1789 "05function4.c"
                    exp_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1791 "05function4.c"
                    expected_next_character(41,info);
                    # 1798 "05function4.c"
                    # 1793 "05function4.c"
                    if(_if_conditional411=!node_compile(exp_268,info),                    _if_conditional411) {
                        # 1794 "05function4.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1795 "05function4.c"
                        __result154__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value343=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value342=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05function4.c", 1795, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_268) { exp_268 = come_decrement_ref_count2(exp_268, ((struct sNode*)exp_268)->finalize, ((struct sNode*)exp_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result154__;
                    }
                    # 1798 "05function4.c"
                    come_value_269=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value344=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1799 "05function4.c"
                    dec_stack_ptr(1,info);
                    # 1801 "05function4.c"
                    __dec_obj154=type_222;
                    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(come_value_269->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1845 "05function4.c"
                    # 1803 "05function4.c"
                    if(parse_variable_name) {
                        # 1804 "05function4.c"
                        parse_sharp_v5(info);
                        # 1811 "05function4.c"
                        # 1806 "05function4.c"
                        if(_if_conditional416=var_name_between_brace_228&&*info->p==40,                        _if_conditional416) {
                            # 1807 "05function4.c"
                            info->p++;
                            # 1808 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1828 "05function4.c"
                        # 1811 "05function4.c"
                        if(_if_conditional417=*info->p==58,                        _if_conditional417) {
                            # 1812 "05function4.c"
                            __dec_obj155=var_name_223;
                            var_name_223=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(""))));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1828 "05function4.c"
                            # 1814 "05function4.c"
                            if(anonymous_name_191) {
                                # 1815 "05function4.c"
                                # 1816 "05function4.c"
                                num_anonymous_var_name_270++;
                                # 1817 "05function4.c"
                                __dec_obj156=var_name_223;
                                var_name_223=(char*)come_increment_ref_count(((char*)(right_value347=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_270))));
                                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1828 "05function4.c"
                                # 1819 "05function4.c"
                                if(_if_conditional419=xisalnum(*info->p)||*info->p==95,                                _if_conditional419) {
                                    # 1820 "05function4.c"
                                    __dec_obj157=var_name_223;
                                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value348=parse_word(info))));
                                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1823 "05function4.c"
                                    # 1824 "05function4.c"
                                    num_anonymous_var_name_271++;
                                    # 1825 "05function4.c"
                                    __dec_obj158=var_name_223;
                                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value349=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_271))));
                                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1833 "05function4.c"
                        # 1828 "05function4.c"
                        if(_if_conditional420=var_name_between_brace_228&&*info->p==41,                        _if_conditional420) {
                            # 1829 "05function4.c"
                            info->p++;
                            # 1830 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1844 "05function4.c"
                        # 1833 "05function4.c"
                        if(_if_conditional421=*info->p==58,                        _if_conditional421) {
                            # 1834 "05function4.c"
                            info->p++;
                            # 1835 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1837 "05function4.c"
                            no_comma_272=info->no_comma;
                            # 1838 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 1839 "05function4.c"
                            node_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=expression_v13(info))));
                            if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1840 "05function4.c"
                            info->no_comma=no_comma_272;
                            # 1842 "05function4.c"
                            __dec_obj159=type_222->mSizeNum;
                            type_222->mSizeNum=(struct sNode*)come_increment_ref_count(node_273);
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_273) { node_273 = come_decrement_ref_count2(node_273, ((struct sNode*)node_273)->finalize, ((struct sNode*)node_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_268) { exp_268 = come_decrement_ref_count2(exp_268, ((struct sNode*)exp_268)->finalize, ((struct sNode*)exp_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 2011 "05function4.c"
                    # 1847 "05function4.c"
                    if(_if_conditional422=map$2charphsTypephp_operator_load_element(info->types,type_name_171),                    _if_conditional422) {
                        # 1848 "05function4.c"
                        __dec_obj160=type_222;
                        type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_171)))));
                        come_call_finalizer2(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1849 "05function4.c"
                        __dec_obj161=type_222->mOriginalTypeName;
                        type_222->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(type_name_171))));
                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1850 "05function4.c"
                        type_222->mOriginalTypeNamePointerNum=pointer_num_217;
                        # 1852 "05function4.c"
                        type_222->mConstant=type_222->mConstant||constant_173;
                        # 1853 "05function4.c"
                        __dec_obj162=type_222->mAlignas;
                        type_222->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1854 "05function4.c"
                        type_222->mComeMemCore=type_222->mComeMemCore||come_mem_core__188;
                        # 1855 "05function4.c"
                        type_222->mRegister=register__176;
                        # 1856 "05function4.c"
                        type_222->mUnsigned=type_222->mUnsigned||unsigned__177;
                        # 1857 "05function4.c"
                        type_222->mVolatile=volatile__175;
                        # 1858 "05function4.c"
                        type_222->mStatic=type_222->mStatic||static__174;
                        # 1859 "05function4.c"
                        type_222->mRecord=type_222->mRecord||record__172;
                        # 1860 "05function4.c"
                        type_222->mExtern=type_222->mExtern||extern__186;
                        # 1861 "05function4.c"
                        type_222->mInline=type_222->mInline||inline__187;
                        # 1862 "05function4.c"
                        type_222->mRestrict=type_222->mRestrict||restrict__181;
                        # 1863 "05function4.c"
                        type_222->mLongLong=type_222->mLongLong||long_long_179;
                        # 1864 "05function4.c"
                        type_222->mLong=type_222->mLong||long__178;
                        # 1865 "05function4.c"
                        type_222->mShort=type_222->mShort||short__180;
                        # 1866 "05function4.c"
                        type_222->mPointerNum+=pointer_num_217;
                        # 1867 "05function4.c"
                        type_222->mHeap=type_222->mHeap||heap_218;
                    }
                    else {
                        # 2011 "05function4.c"
                        # 1869 "05function4.c"
                        if(_if_conditional423=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_171)),                        _if_conditional423) {
                            # 1876 "05function4.c"
                            for(                            i_274=0;                            i_274<list$1charph_length(info->generics_type_names);                            i_274++                            ){
                                # 1874 "05function4.c"
                                # 1871 "05function4.c"
                                if(_if_conditional424=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_274), "05function4.c", 1871, 9)),type_name_171),                                _if_conditional424) {
                                    # 1872 "05function4.c"
                                    __dec_obj163=type_222;
                                    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value353=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1872, "sType")))),((char*)(right_value354=xsprintf("generics_type%d",i_274))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1876 "05function4.c"
                            type_222->mConstant=type_222->mConstant||constant_173;
                            # 1877 "05function4.c"
                            __dec_obj164=type_222->mAlignas;
                            type_222->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1878 "05function4.c"
                            type_222->mComeMemCore=type_222->mComeMemCore||come_mem_core__188;
                            # 1879 "05function4.c"
                            type_222->mRegister=register__176;
                            # 1880 "05function4.c"
                            type_222->mUnsigned=type_222->mUnsigned||unsigned__177;
                            # 1881 "05function4.c"
                            type_222->mVolatile=volatile__175;
                            # 1882 "05function4.c"
                            type_222->mStatic=type_222->mStatic||static__174;
                            # 1883 "05function4.c"
                            type_222->mRecord=type_222->mRecord||record__172;
                            # 1884 "05function4.c"
                            type_222->mExtern=type_222->mExtern||extern__186;
                            # 1885 "05function4.c"
                            type_222->mInline=type_222->mInline||inline__187;
                            # 1886 "05function4.c"
                            type_222->mRestrict=type_222->mRestrict||restrict__181;
                            # 1887 "05function4.c"
                            type_222->mLongLong=type_222->mLongLong||long_long_179;
                            # 1888 "05function4.c"
                            type_222->mLong=type_222->mLong||long__178;
                            # 1889 "05function4.c"
                            type_222->mShort=type_222->mShort||short__180;
                            # 1890 "05function4.c"
                            type_222->mPointerNum+=pointer_num_217;
                            # 1891 "05function4.c"
                            type_222->mHeap=type_222->mHeap||heap_218;
                        }
                        else {
                            # 2011 "05function4.c"
                            # 1893 "05function4.c"
                            if(_if_conditional425=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_171)),                            _if_conditional425) {
                                # 1900 "05function4.c"
                                for(                                i_275=0;                                i_275<list$1charph_length(info->method_generics_type_names);                                i_275++                                ){
                                    # 1898 "05function4.c"
                                    # 1895 "05function4.c"
                                    if(_if_conditional426=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_275), "05function4.c", 1895, 10)),type_name_171),                                    _if_conditional426) {
                                        # 1896 "05function4.c"
                                        __dec_obj165=type_222;
                                        type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value356=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1896, "sType")))),((char*)(right_value357=xsprintf("mgenerics_type%d",i_275))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1900 "05function4.c"
                                type_222->mConstant=type_222->mConstant||constant_173;
                                # 1901 "05function4.c"
                                __dec_obj166=type_222->mAlignas;
                                type_222->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1902 "05function4.c"
                                type_222->mComeMemCore=type_222->mComeMemCore||come_mem_core__188;
                                # 1903 "05function4.c"
                                type_222->mRegister=register__176;
                                # 1904 "05function4.c"
                                type_222->mUnsigned=type_222->mUnsigned||unsigned__177;
                                # 1905 "05function4.c"
                                type_222->mVolatile=volatile__175;
                                # 1906 "05function4.c"
                                type_222->mStatic=type_222->mStatic||static__174;
                                # 1907 "05function4.c"
                                type_222->mRecord=type_222->mRecord||record__172;
                                # 1908 "05function4.c"
                                type_222->mExtern=type_222->mExtern||extern__186;
                                # 1909 "05function4.c"
                                type_222->mInline=type_222->mInline||inline__187;
                                # 1910 "05function4.c"
                                type_222->mRestrict=type_222->mRestrict||restrict__181;
                                # 1911 "05function4.c"
                                type_222->mLongLong=type_222->mLongLong||long_long_179;
                                # 1912 "05function4.c"
                                type_222->mLong=type_222->mLong||long__178;
                                # 1913 "05function4.c"
                                type_222->mShort=type_222->mShort||short__180;
                                # 1914 "05function4.c"
                                type_222->mPointerNum+=pointer_num_217;
                                # 1915 "05function4.c"
                                type_222->mHeap=type_222->mHeap||heap_218;
                            }
                            else {
                                # 2011 "05function4.c"
                                # 1917 "05function4.c"
                                if(_if_conditional427=*info->p==60,                                _if_conditional427) {
                                    # 1918 "05function4.c"
                                    info->p++;
                                    # 1919 "05function4.c"
                                    skip_spaces_and_lf(info);
                                    # 1926 "05function4.c"
                                    # 1921 "05function4.c"
                                    if(_if_conditional438=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_171)==((void*)0),                                    _if_conditional438) {
                                        # 1923 "05function4.c"
                                        __result159__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value360=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value359=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1923, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result159__;
                                    }
                                    # 1926 "05function4.c"
                                    __dec_obj167=type_222;
                                    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1926, "sType")))),type_name_171,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1953 "05function4.c"
                                    while(_while_condtional42=(_Bool)1,                                    _while_condtional42) {
                                        # 1931 "05function4.c"
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value363=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_282=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_283=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 1935 "05function4.c"
                                        # 1931 "05function4.c"
                                        if(_if_conditional439=!err_283,                                        _if_conditional439) {
                                            # 1932 "05function4.c"
                                            __result160__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value365=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value364=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1932, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_282 = come_decrement_ref_count2(var_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result160__;
                                        }
                                        # 1935 "05function4.c"
                                        list$1sTypeph_push_back(type_222->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_281));
                                        # 1951 "05function4.c"
                                        # 1937 "05function4.c"
                                        if(_if_conditional440=*info->p==44,                                        _if_conditional440) {
                                            # 1938 "05function4.c"
                                            info->p++;
                                            # 1939 "05function4.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 1951 "05function4.c"
                                            # 1941 "05function4.c"
                                            if(_if_conditional441=*info->p==62,                                            _if_conditional441) {
                                                # 1942 "05function4.c"
                                                info->p++;
                                                # 1943 "05function4.c"
                                                skip_spaces_and_lf(info);
                                                # 1945 "05function4.c"
                                                come_call_finalizer2(sType_finalize,generics_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_282 = come_decrement_ref_count2(var_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 1948 "05function4.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 1949 "05function4.c"
                                                __result161__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value367=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value366=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1949, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_282 = come_decrement_ref_count2(var_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result161__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_282 = come_decrement_ref_count2(var_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 1965 "05function4.c"
                                    # 1953 "05function4.c"
                                    if(_if_conditional442=is_contained_generics_class(type_222,info),                                    _if_conditional442) {
                                        # 1954 "05function4.c"
                                        __dec_obj168=type_222;
                                        type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=solve_generics(type_222,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1963 "05function4.c"
                                        # 1957 "05function4.c"
                                        if(_if_conditional443=!output_generics_struct(type_222,type_222,info),                                        _if_conditional443) {
                                            # 1959 "05function4.c"
                                            new_name_284=(char*)come_increment_ref_count(((char*)(right_value369=create_generics_name(type_222,info))));
                                            right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1960 "05function4.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_284);
                                            # 1961 "05function4.c"
                                            exit(7);
                                            new_name_284 = come_decrement_ref_count2(new_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1965 "05function4.c"
                                    type_222->mConstant=type_222->mConstant||constant_173;
                                    # 1966 "05function4.c"
                                    __dec_obj169=type_222->mAlignas;
                                    type_222->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                                    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 1967 "05function4.c"
                                    type_222->mComeMemCore=type_222->mComeMemCore||come_mem_core__188;
                                    # 1968 "05function4.c"
                                    type_222->mRegister=register__176;
                                    # 1969 "05function4.c"
                                    type_222->mUnsigned=type_222->mUnsigned||unsigned__177;
                                    # 1970 "05function4.c"
                                    type_222->mVolatile=volatile__175;
                                    # 1971 "05function4.c"
                                    type_222->mStatic=type_222->mStatic||static__174;
                                    # 1972 "05function4.c"
                                    type_222->mRecord=type_222->mRecord||record__172;
                                    # 1973 "05function4.c"
                                    type_222->mExtern=type_222->mExtern||extern__186;
                                    # 1974 "05function4.c"
                                    type_222->mInline=type_222->mInline||inline__187;
                                    # 1975 "05function4.c"
                                    type_222->mRestrict=type_222->mRestrict||restrict__181;
                                    # 1976 "05function4.c"
                                    type_222->mLongLong=type_222->mLongLong||long_long_179;
                                    # 1977 "05function4.c"
                                    type_222->mLong=type_222->mLong||long__178;
                                    # 1978 "05function4.c"
                                    type_222->mShort=type_222->mShort||short__180;
                                    # 1979 "05function4.c"
                                    type_222->mPointerNum+=pointer_num_217;
                                    # 1980 "05function4.c"
                                    type_222->mHeap=type_222->mHeap||heap_218;
                                }
                                else {
                                    # 1991 "05function4.c"
                                    # 1983 "05function4.c"
                                    if(struct__182) {
                                        # 1984 "05function4.c"
                                        klass_285=map$2charphsClassphp_operator_load_element(info->classes,type_name_171);
                                        # 1989 "05function4.c"
                                        # 1986 "05function4.c"
                                        if(_if_conditional445=klass_285==((void*)0)&&*info->p!=60,                                        _if_conditional445) {
                                            # 1987 "05function4.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_171),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value377=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value376=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1987, "sClass")))),type_name_171,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 1991 "05function4.c"
                                    __dec_obj170=type_222;
                                    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1991, "sType")))),type_name_171,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1993 "05function4.c"
                                    type_222->mConstant=type_222->mConstant||constant_173;
                                    # 1994 "05function4.c"
                                    __dec_obj171=type_222->mAlignas;
                                    type_222->mAlignas=(struct sNode*)come_increment_ref_count(alignas__189);
                                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 1995 "05function4.c"
                                    type_222->mComeMemCore=type_222->mComeMemCore||come_mem_core__188;
                                    # 1996 "05function4.c"
                                    type_222->mRegister=register__176;
                                    # 1997 "05function4.c"
                                    type_222->mUnsigned=type_222->mUnsigned||unsigned__177;
                                    # 1998 "05function4.c"
                                    type_222->mVolatile=volatile__175;
                                    # 1999 "05function4.c"
                                    type_222->mStatic=type_222->mStatic||static__174;
                                    # 2000 "05function4.c"
                                    type_222->mRecord=type_222->mRecord||record__172;
                                    # 2001 "05function4.c"
                                    type_222->mExtern=type_222->mExtern||extern__186;
                                    # 2002 "05function4.c"
                                    type_222->mInline=type_222->mInline||inline__187;
                                    # 2003 "05function4.c"
                                    type_222->mRestrict=type_222->mRestrict||restrict__181;
                                    # 2004 "05function4.c"
                                    type_222->mLongLong=type_222->mLongLong||long_long_179;
                                    # 2005 "05function4.c"
                                    type_222->mLong=type_222->mLong||long__178;
                                    # 2006 "05function4.c"
                                    type_222->mShort=type_222->mShort||short__180;
                                    # 2007 "05function4.c"
                                    type_222->mPointerNum+=pointer_num_217;
                                    # 2008 "05function4.c"
                                    type_222->mHeap=type_222->mHeap||heap_218;
                                }
                            }
                        }
                    }
                    # 2011 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2025 "05function4.c"
                    while(_while_condtional51=*info->p==42,                    _while_condtional51) {
                        # 2014 "05function4.c"
                        info->p++;
                        # 2015 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2017 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2019 "05function4.c"
                        type_222->mPointerNum++;
                        # 2023 "05function4.c"
                        # 2020 "05function4.c"
                        if(type_222->mNoSolvedGenericsType->v1) {
                            # 2021 "05function4.c"
                            type_222->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2035 "05function4.c"
                    # 2025 "05function4.c"
                    if(_if_conditional494=*info->p==37,                    _if_conditional494) {
                        # 2026 "05function4.c"
                        info->p++;
                        # 2027 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2029 "05function4.c"
                        type_222->mHeap=(_Bool)1;
                        # 2033 "05function4.c"
                        # 2030 "05function4.c"
                        if(type_222->mNoSolvedGenericsType->v1) {
                            # 2031 "05function4.c"
                            type_222->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2046 "05function4.c"
                    # 2035 "05function4.c"
                    if(_if_conditional496=*info->p==38,                    _if_conditional496) {
                        # 2036 "05function4.c"
                        info->p++;
                        # 2037 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2039 "05function4.c"
                        type_222->mNoHeap=(_Bool)1;
                        # 2044 "05function4.c"
                        # 2041 "05function4.c"
                        if(type_222->mNoSolvedGenericsType->v1) {
                            # 2042 "05function4.c"
                            type_222->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2059 "05function4.c"
                    # 2046 "05function4.c"
                    if(_if_conditional498=*info->p==63,                    _if_conditional498) {
                        # 2047 "05function4.c"
                        info->p++;
                        # 2057 "05function4.c"
                        # 2049 "05function4.c"
                        if(_if_conditional499=*info->p==63,                        _if_conditional499) {
                            # 2050 "05function4.c"
                            info->p++;
                            # 2051 "05function4.c"
                            type_222->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2054 "05function4.c"
                            type_222->mNullValue=(_Bool)1;
                        }
                        # 2057 "05function4.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2066 "05function4.c"
                    # 2059 "05function4.c"
                    if(_if_conditional500=*info->p==96,                    _if_conditional500) {
                        # 2060 "05function4.c"
                        info->p++;
                        # 2061 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2063 "05function4.c"
                        type_222->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2066 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2081 "05function4.c"
                    while(_while_condtional52=*info->p==42,                    _while_condtional52) {
                        # 2069 "05function4.c"
                        info->p++;
                        # 2070 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2072 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2074 "05function4.c"
                        type_222->mPointerNum++;
                        # 2079 "05function4.c"
                        # 2076 "05function4.c"
                        if(type_222->mNoSolvedGenericsType->v1) {
                            # 2077 "05function4.c"
                            type_222->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2091 "05function4.c"
                    # 2081 "05function4.c"
                    if(_if_conditional502=*info->p==37,                    _if_conditional502) {
                        # 2082 "05function4.c"
                        info->p++;
                        # 2083 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2085 "05function4.c"
                        type_222->mHeap=(_Bool)1;
                        # 2089 "05function4.c"
                        # 2086 "05function4.c"
                        if(type_222->mNoSolvedGenericsType->v1) {
                            # 2087 "05function4.c"
                            type_222->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2131 "05function4.c"
                    # 2091 "05function4.c"
                    if(_if_conditional504=parse_multiple_type&&*info->p==44,                    _if_conditional504) {
                        # 2092 "05function4.c"
                        types_330=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value381=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value380=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2092, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2094 "05function4.c"
                        list$1sTypeph_push_back(types_330,(struct sType*)come_increment_ref_count(((struct sType*)(right_value382=sType_clone(type_222)))));
                        come_call_finalizer2(sType_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2109 "05function4.c"
                        while(_while_condtional53=*info->p==44,                        _while_condtional53) {
                            # 2097 "05function4.c"
                            info->p++;
                            # 2098 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2100 "05function4.c"
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value383=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_331=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_332=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_333=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 2106 "05function4.c"
                            # 2102 "05function4.c"
                            if(_if_conditional505=!err_333,                            _if_conditional505) {
                                # 2103 "05function4.c"
                                __result186__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value385=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value384=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2103, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_332 = come_decrement_ref_count2(name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result186__;
                            }
                            # 2106 "05function4.c"
                            list$1sTypeph_push_back(types_330,(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_clone(type2_331)))));
                            come_call_finalizer2(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_332 = come_decrement_ref_count2(name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2109 "05function4.c"
                        num_tuples_334=list$1sTypeph_length(types_330);
                        # 2111 "05function4.c"
                        __dec_obj172=type_222;
                        type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value387=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2111, "sType")))),((char*)(right_value388=xsprintf("tuple%d",num_tuples_334))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2112 "05function4.c"
                        type_222->mPointerNum++;
                        # 2113 "05function4.c"
                        type_222->mHeap=(_Bool)1;
                        # 2119 "05function4.c"
                        for(                        o2_saved_335=(struct list$1sTypeph*)come_increment_ref_count((types_330)),it_336=list$1sTypeph_begin((o2_saved_335));                        !list$1sTypeph_end((o2_saved_335));                        it_336=list$1sTypeph_next((o2_saved_335))                        ){
                            # 2116 "05function4.c"
                            list$1sTypeph_push_back(type_222->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_clone(it_336)))));
                            come_call_finalizer2(sType_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 2130 "05function4.c"
                        # 2119 "05function4.c"
                        if(_if_conditional506=is_contained_generics_class(type_222,info),                        _if_conditional506) {
                            # 2120 "05function4.c"
                            __dec_obj173=type_222;
                            type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value391=solve_generics(type_222,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2129 "05function4.c"
                            # 2123 "05function4.c"
                            if(_if_conditional507=!output_generics_struct(type_222,type_222,info),                            _if_conditional507) {
                                # 2125 "05function4.c"
                                new_name_337=(char*)come_increment_ref_count(((char*)(right_value392=create_generics_name(type_222,info))));
                                right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2126 "05function4.c"
                                printf("output generics is failed(%s)\n",new_name_337);
                                # 2127 "05function4.c"
                                exit(9);
                                new_name_337 = come_decrement_ref_count2(new_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2222 "05function4.c"
                    # 2180 "05function4.c"
                    if(parse_variable_name) {
                        # 2181 "05function4.c"
                        parse_sharp_v5(info);
                        # 2188 "05function4.c"
                        # 2183 "05function4.c"
                        if(_if_conditional509=var_name_between_brace_228&&*info->p==40,                        _if_conditional509) {
                            # 2184 "05function4.c"
                            info->p++;
                            # 2185 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2205 "05function4.c"
                        # 2188 "05function4.c"
                        if(_if_conditional510=*info->p==58,                        _if_conditional510) {
                            # 2189 "05function4.c"
                            __dec_obj174=var_name_223;
                            var_name_223=(char*)come_increment_ref_count(((char*)(right_value393=__builtin_string(""))));
                            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2205 "05function4.c"
                            # 2191 "05function4.c"
                            if(anonymous_name_191) {
                                # 2192 "05function4.c"
                                # 2193 "05function4.c"
                                num_anonymous_var_name_338++;
                                # 2194 "05function4.c"
                                __dec_obj175=var_name_223;
                                var_name_223=(char*)come_increment_ref_count(((char*)(right_value394=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_338))));
                                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2205 "05function4.c"
                                # 2196 "05function4.c"
                                if(_if_conditional512=xisalnum(*info->p)||*info->p==95,                                _if_conditional512) {
                                    # 2197 "05function4.c"
                                    __dec_obj176=var_name_223;
                                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value395=parse_word(info))));
                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2200 "05function4.c"
                                    # 2201 "05function4.c"
                                    num_anonymous_var_name_339++;
                                    # 2202 "05function4.c"
                                    __dec_obj177=var_name_223;
                                    var_name_223=(char*)come_increment_ref_count(((char*)(right_value396=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_339))));
                                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2210 "05function4.c"
                        # 2205 "05function4.c"
                        if(_if_conditional513=var_name_between_brace_228&&*info->p==41,                        _if_conditional513) {
                            # 2206 "05function4.c"
                            info->p++;
                            # 2207 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2221 "05function4.c"
                        # 2210 "05function4.c"
                        if(_if_conditional514=*info->p==58,                        _if_conditional514) {
                            # 2211 "05function4.c"
                            info->p++;
                            # 2212 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2214 "05function4.c"
                            no_comma_340=info->no_comma;
                            # 2215 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 2216 "05function4.c"
                            node_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=expression_v13(info))));
                            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2217 "05function4.c"
                            info->no_comma=no_comma_340;
                            # 2219 "05function4.c"
                            __dec_obj178=type_222->mSizeNum;
                            type_222->mSizeNum=(struct sNode*)come_increment_ref_count(node_341);
                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2223 "05function4.c"
    parse_sharp_v5(info);
    # 2248 "05function4.c"
    while(_while_condtional54=*info->p==91,    _while_condtional54) {
        # 2226 "05function4.c"
        info->p++;
        # 2227 "05function4.c"
        skip_spaces_and_lf(info);
        # 2228 "05function4.c"
        parse_sharp_v5(info);
        # 2230 "05function4.c"
        skip_pointer_attribute(info);
        # 2240 "05function4.c"
        # 2232 "05function4.c"
        if(_if_conditional515=*info->p==93,        _if_conditional515) {
            # 2233 "05function4.c"
            info->p++;
            # 2234 "05function4.c"
            skip_spaces_and_lf(info);
            # 2236 "05function4.c"
            type_222->mArrayPointerType=(_Bool)1;
            # 2237 "05function4.c"
            type_222->mPointerNum++;
            # 2238 "05function4.c"
            break;
        }
        # 2240 "05function4.c"
        parse_sharp_v5(info);
        # 2242 "05function4.c"
        node_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2243 "05function4.c"
        list$1sNodeph_push_back(type_222->mArrayNum,(struct sNode*)come_increment_ref_count(node_342));
        # 2244 "05function4.c"
        parse_sharp_v5(info);
        # 2246 "05function4.c"
        expected_next_character(93,info);
        if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2248 "05function4.c"
    asm_name_343=(char*)come_increment_ref_count(((char*)(right_value399=parse_attribute(info))));
    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2250 "05function4.c"
    __dec_obj179=type_222->mAsmName;
    type_222->mAsmName=(char*)come_increment_ref_count(asm_name_343);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2252 "05function4.c"
    parse_sharp_v5(info);
    # 2254 "05function4.c"
    __result187__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value401=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value400=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2254, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_222),(char*)come_increment_ref_count(var_name_223),(_Bool)1)));
    type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_343 = come_decrement_ref_count2(asm_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result187__;
    type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__189) { alignas__189 = come_decrement_ref_count2(alignas__189, ((struct sNode*)alignas__189)->finalize, ((struct sNode*)alignas__189)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_223 = come_decrement_ref_count2(var_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_343 = come_decrement_ref_count2(asm_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj81;
char* __dec_obj82;
struct tuple3$3sTypephcharphbool* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1804 "./neo-c.h"
                                __dec_obj81=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1805 "./neo-c.h"
                                __dec_obj82=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 1806 "./neo-c.h"
                                self->v3=v3;
                                # 1808 "./neo-c.h"
                                __result124__ = __result_obj__ = self;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result124__;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_243;
unsigned int hash_244;
unsigned int it_245;
_Bool _while_condtional38;
_Bool _if_conditional384;
_Bool _if_conditional385;
struct sType* __result134__;
_Bool _if_conditional386;
_Bool _if_conditional387;
struct sType* __result135__;
struct sType* __result136__;
struct sType* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_243, 0, sizeof(struct sType*));
memset(&hash_244, 0, sizeof(unsigned int));
memset(&it_245, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_243,0,sizeof(struct sType*));
                # 1547 "./neo-c.h"
                hash_244=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_245=hash_244;
                # 1572 "./neo-c.h"
                while(_while_condtional38=(_Bool)1,                _while_condtional38) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional384=self->item_existance[it_245],                    _if_conditional384) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional385=string_equals(self->keys[it_245],key),                        _if_conditional385) {
                            # 1555 "./neo-c.h"
                            __result134__ = __result_obj__ = self->items[it_245];
                            come_call_finalizer2(sType_finalize,default_value_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result134__;
                        }
                        # 1558 "./neo-c.h"
                        it_245++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional386=it_245>=self->size,                        _if_conditional386) {
                            # 1561 "./neo-c.h"
                            it_245=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional387=it_245==hash_244,                            _if_conditional387) {
                                # 1564 "./neo-c.h"
                                __result135__ = __result_obj__ = default_value_243;
                                come_call_finalizer2(sType_finalize,default_value_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result135__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result136__ = __result_obj__ = default_value_243;
                        come_call_finalizer2(sType_finalize,default_value_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                    }
                }
                # 1572 "./neo-c.h"
                __result137__ = __result_obj__ = default_value_243;
                come_call_finalizer2(sType_finalize,default_value_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer2(sType_finalize,default_value_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_248;
_Bool _if_conditional393;
_Bool __result145__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_248, 0, sizeof(char*));
                    # 746 "./neo-c.h"
                    for(                    it_248=list$1charph_begin(self);                    !list$1charph_end(self);                    it_248=list$1charph_next(self)                    ){
                        # 744 "./neo-c.h"
                        # 741 "./neo-c.h"
                        if(_if_conditional393=string_operator_equals(it_248,item),                        _if_conditional393) {
                            # 742 "./neo-c.h"
                            __result145__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result145__;
                        }
                    }
                    # 746 "./neo-c.h"
                    __result146__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result146__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional389;
char* result_246;
char* __result138__;
_Bool _if_conditional390;
char* __result139__;
char* result_247;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(char*));
memset(&result_247, 0, sizeof(char*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional389=self==((void*)0),                        _if_conditional389) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_246,0,sizeof(char*));
                            # 288 "./neo-c.h"
                            __result138__ = __result_obj__ = result_246;
                            return __result138__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result139__ = __result_obj__ = self->it->item;
                            return __result139__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_247,0,sizeof(char*));
                        # 298 "./neo-c.h"
                        __result140__ = __result_obj__ = result_247;
                        return __result140__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result141__ = self==((void*)0)||self->it==((void*)0);
                        return __result141__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional391;
char* result_249;
char* __result142__;
_Bool _if_conditional392;
char* __result143__;
char* result_250;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_249, 0, sizeof(char*));
memset(&result_250, 0, sizeof(char*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional391=self==((void*)0)||self->it==((void*)0),                        _if_conditional391) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_249,0,sizeof(char*));
                            # 305 "./neo-c.h"
                            __result142__ = __result_obj__ = result_249;
                            return __result142__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result143__ = __result_obj__ = self->it->item;
                            return __result143__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_250,0,sizeof(char*));
                        # 316 "./neo-c.h"
                        __result144__ = __result_obj__ = result_250;
                        return __result144__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional395;
int __result147__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 367 "./neo-c.h"
                        # 364 "./neo-c.h"
                        if(_if_conditional395=self==((void*)0),                        _if_conditional395) {
                            # 365 "./neo-c.h"
                            __result147__ = 0;
                            return __result147__;
                        }
                        # 367 "./neo-c.h"
                        __result148__ = self->len;
                        return __result148__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional396;
struct list_item$1charph* it_252;
int i_253;
_Bool _while_condtional39;
_Bool _if_conditional397;
char* __result149__;
char* default_value_254;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_252, 0, sizeof(struct list_item$1charph*));
memset(&i_253, 0, sizeof(int));
memset(&default_value_254, 0, sizeof(char*));
                            # 686 "./neo-c.h"
                            # 682 "./neo-c.h"
                            if(_if_conditional396=position<0,                            _if_conditional396) {
                                # 683 "./neo-c.h"
                                position+=self->len;
                            }
                            # 686 "./neo-c.h"
                            it_252=self->head;
                            # 687 "./neo-c.h"
                            i_253=0;
                            # 694 "./neo-c.h"
                            while(_while_condtional39=it_252!=((void*)0),                            _while_condtional39) {
                                # 692 "./neo-c.h"
                                # 689 "./neo-c.h"
                                if(_if_conditional397=position==i_253,                                _if_conditional397) {
                                    # 690 "./neo-c.h"
                                    __result149__ = __result_obj__ = it_252->item;
                                    return __result149__;
                                }
                                # 692 "./neo-c.h"
                                it_252=it_252->next;
                                # 693 "./neo-c.h"
                                i_253++;
                            }
                            # 696 "./neo-c.h"
                            # 697 "./neo-c.h"
                            memset(&default_value_254,0,sizeof(char*));
                            # 698 "./neo-c.h"
                            __result150__ = __result_obj__ = default_value_254;
                            default_value_254 = come_decrement_ref_count2(default_value_254, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result150__;
                            default_value_254 = come_decrement_ref_count2(default_value_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj138;
struct tuple1$1sTypeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1735 "./neo-c.h"
                __dec_obj138=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1737 "./neo-c.h"
                __result151__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result151__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj153;
struct tuple3$3sTypepcharphbool* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1804 "./neo-c.h"
                            self->v1=v1;
                            # 1805 "./neo-c.h"
                            __dec_obj153=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1806 "./neo-c.h"
                            self->v3=v3;
                            # 1808 "./neo-c.h"
                            __result153__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result153__;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional412=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional412) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional413=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional413) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional414=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional414) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_276;
unsigned int hash_277;
unsigned int it_278;
_Bool _while_condtional40;
_Bool _if_conditional428;
_Bool _if_conditional429;
struct sClass* __result155__;
_Bool _if_conditional436;
_Bool _if_conditional437;
struct sClass* __result156__;
struct sClass* __result157__;
struct sClass* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_276, 0, sizeof(struct sClass*));
memset(&hash_277, 0, sizeof(unsigned int));
memset(&it_278, 0, sizeof(unsigned int));
                                        # 1544 "./neo-c.h"
                                        # 1545 "./neo-c.h"
                                        memset(&default_value_276,0,sizeof(struct sClass*));
                                        # 1547 "./neo-c.h"
                                        hash_277=string_get_hash_key(((char*)key))%self->size;
                                        # 1548 "./neo-c.h"
                                        it_278=hash_277;
                                        # 1572 "./neo-c.h"
                                        while(_while_condtional40=(_Bool)1,                                        _while_condtional40) {
                                            # 1570 "./neo-c.h"
                                            # 1551 "./neo-c.h"
                                            if(_if_conditional428=self->item_existance[it_278],                                            _if_conditional428) {
                                                # 1558 "./neo-c.h"
                                                # 1553 "./neo-c.h"
                                                if(_if_conditional429=string_equals(self->keys[it_278],key),                                                _if_conditional429) {
                                                    # 1555 "./neo-c.h"
                                                    __result155__ = __result_obj__ = self->items[it_278];
                                                    come_call_finalizer2(sClass_finalize,default_value_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result155__;
                                                }
                                                # 1558 "./neo-c.h"
                                                it_278++;
                                                # 1566 "./neo-c.h"
                                                # 1560 "./neo-c.h"
                                                if(_if_conditional436=it_278>=self->size,                                                _if_conditional436) {
                                                    # 1561 "./neo-c.h"
                                                    it_278=0;
                                                }
                                                else {
                                                    # 1566 "./neo-c.h"
                                                    # 1563 "./neo-c.h"
                                                    if(_if_conditional437=it_278==hash_277,                                                    _if_conditional437) {
                                                        # 1564 "./neo-c.h"
                                                        __result156__ = __result_obj__ = default_value_276;
                                                        come_call_finalizer2(sClass_finalize,default_value_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result156__;
                                                    }
                                                }
                                            }
                                            else {
                                                # 1568 "./neo-c.h"
                                                __result157__ = __result_obj__ = default_value_276;
                                                come_call_finalizer2(sClass_finalize,default_value_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result157__;
                                            }
                                        }
                                        # 1572 "./neo-c.h"
                                        __result158__ = __result_obj__ = default_value_276;
                                        come_call_finalizer2(sClass_finalize,default_value_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result158__;
                                        come_call_finalizer2(sClass_finalize,default_value_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sClass_finalize"
                                                        # 0 "sClass_finalize"
                                                        if(_if_conditional430=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional430) {
                                                            # 0 "sClass_finalize"
                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sClass_finalize"
                                                        # 1 "sClass_finalize"
                                                        if(_if_conditional431=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional431) {
                                                            # 1 "sClass_finalize"
                                                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 3 "sClass_finalize"
                                                        # 2 "sClass_finalize"
                                                        if(_if_conditional435=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional435) {
                                                            # 2 "sClass_finalize"
                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_279;
_Bool _while_condtional41;
struct list_item$1tuple2$2charphsTypephph* prev_it_280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_279, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_280, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                # 123 "./neo-c.h"
                                                                it_279=self->head;
                                                                # 129 "./neo-c.h"
                                                                while(_while_condtional41=it_279!=((void*)0),                                                                _while_condtional41) {
                                                                    # 125 "./neo-c.h"
                                                                    prev_it_280=it_279;
                                                                    # 126 "./neo-c.h"
                                                                    it_279=it_279->next;
                                                                    # 127 "./neo-c.h"
                                                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        if(_if_conditional432=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional432) {
                                                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional433;
_Bool _if_conditional434;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional433=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional433) {
                                                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional434=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional434) {
                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional446;
unsigned int hash_303;
unsigned int it_304;
_Bool _while_condtional45;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool same_key_exist_321;
char* it2_324;
_Bool _if_conditional489;
_Bool _if_conditional490;
struct map$2charphsClassph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_303, 0, sizeof(unsigned int));
memset(&it_304, 0, sizeof(unsigned int));
memset(&same_key_exist_321, 0, sizeof(_Bool));
memset(&it2_324, 0, sizeof(char*));
                                                # 1393 "./neo-c.h"
                                                # 1390 "./neo-c.h"
                                                if(_if_conditional446=self->len*10>=self->size,                                                _if_conditional446) {
                                                    # 1391 "./neo-c.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1393 "./neo-c.h"
                                                hash_303=string_get_hash_key(key)%self->size;
                                                # 1394 "./neo-c.h"
                                                it_304=hash_303;
                                                # 1452 "./neo-c.h"
                                                while(_while_condtional45=(_Bool)1,                                                _while_condtional45) {
                                                    # 1450 "./neo-c.h"
                                                    # 1397 "./neo-c.h"
                                                    if(_if_conditional458=self->item_existance[it_304],                                                    _if_conditional458) {
                                                        # 1420 "./neo-c.h"
                                                        # 1399 "./neo-c.h"
                                                        if(_if_conditional459=string_equals(self->keys[it_304],key),                                                        _if_conditional459) {
                                                            # 1410 "./neo-c.h"
                                                            # 1401 "./neo-c.h"
                                                            if(_if_conditional460=1,                                                            _if_conditional460) {
                                                                # 1402 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_304]);
                                                                # 1403 "./neo-c.h"
                                                                self->keys[it_304] = come_decrement_ref_count2(self->keys[it_304], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1404 "./neo-c.h"
                                                                self->keys[it_304]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1407 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_304]);
                                                                # 1408 "./neo-c.h"
                                                                self->keys[it_304]=key;
                                                            }
                                                            # 1417 "./neo-c.h"
                                                            # 1410 "./neo-c.h"
                                                            if(_if_conditional480=1,                                                            _if_conditional480) {
                                                                # 1411 "./neo-c.h"
                                                                come_call_finalizer2(sClass_finalize,self->items[it_304], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 1412 "./neo-c.h"
                                                                self->items[it_304]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1415 "./neo-c.h"
                                                                self->items[it_304]=item;
                                                            }
                                                            # 1417 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 1420 "./neo-c.h"
                                                        it_304++;
                                                        # 1430 "./neo-c.h"
                                                        # 1422 "./neo-c.h"
                                                        if(_if_conditional481=it_304>=self->size,                                                        _if_conditional481) {
                                                            # 1423 "./neo-c.h"
                                                            it_304=0;
                                                        }
                                                        else {
                                                            # 1430 "./neo-c.h"
                                                            # 1425 "./neo-c.h"
                                                            if(_if_conditional482=it_304==hash_303,                                                            _if_conditional482) {
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
                                                        self->item_existance[it_304]=(_Bool)1;
                                                        # 1439 "./neo-c.h"
                                                        # 1433 "./neo-c.h"
                                                        if(_if_conditional483=1,                                                        _if_conditional483) {
                                                            # 1434 "./neo-c.h"
                                                            self->keys[it_304]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1437 "./neo-c.h"
                                                            self->keys[it_304]=key;
                                                        }
                                                        # 1446 "./neo-c.h"
                                                        # 1439 "./neo-c.h"
                                                        if(_if_conditional484=1,                                                        _if_conditional484) {
                                                            # 1440 "./neo-c.h"
                                                            self->items[it_304]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1443 "./neo-c.h"
                                                            self->items[it_304]=item;
                                                        }
                                                        # 1446 "./neo-c.h"
                                                        self->len++;
                                                        # 1448 "./neo-c.h"
                                                        break;
                                                    }
                                                }
                                                # 1452 "./neo-c.h"
                                                same_key_exist_321=(_Bool)0;
                                                # 1460 "./neo-c.h"
                                                for(                                                it2_324=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_324=list$1charp_next(self->key_list)                                                ){
                                                    # 1458 "./neo-c.h"
                                                    # 1455 "./neo-c.h"
                                                    if(_if_conditional489=string_equals(it2_324,key),                                                    _if_conditional489) {
                                                        # 1456 "./neo-c.h"
                                                        same_key_exist_321=(_Bool)1;
                                                    }
                                                }
                                                # 1464 "./neo-c.h"
                                                # 1460 "./neo-c.h"
                                                if(_if_conditional490=!same_key_exist_321,                                                _if_conditional490) {
                                                    # 1461 "./neo-c.h"
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                # 1464 "./neo-c.h"
                                                __result185__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result185__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_286;
void* right_value370;
char** keys_287;
void* right_value371;
struct sClass** items_288;
void* right_value372;
_Bool* item_existance_289;
int len_290;
char* it_293;
struct sClass* default_value_296;
struct sClass* it2_299;
unsigned int hash_300;
int n_301;
_Bool _while_condtional44;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
struct sClass* default_value_302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_286, 0, sizeof(int));
right_value370 = (void*)0;
memset(&keys_287, 0, sizeof(char**));
right_value371 = (void*)0;
memset(&items_288, 0, sizeof(struct sClass**));
right_value372 = (void*)0;
memset(&item_existance_289, 0, sizeof(_Bool*));
memset(&len_290, 0, sizeof(int));
memset(&it_293, 0, sizeof(char*));
memset(&default_value_296, 0, sizeof(struct sClass*));
memset(&it2_299, 0, sizeof(struct sClass*));
memset(&hash_300, 0, sizeof(unsigned int));
memset(&n_301, 0, sizeof(int));
memset(&default_value_302, 0, sizeof(struct sClass*));
                                                        # 1337 "./neo-c.h"
                                                        size_286=self->size*10;
                                                        # 1338 "./neo-c.h"
                                                        keys_287=(char**)come_increment_ref_count(((char**)(right_value370=(char**)come_calloc(1, sizeof(char*)*(1*(size_286)), "./neo-c.h", 1338, "char*%"))));
                                                        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1339 "./neo-c.h"
                                                        items_288=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value371=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_286)), "./neo-c.h", 1339, "sClass*%"))));
                                                        come_call_finalizer2(sClass_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 1340 "./neo-c.h"
                                                        item_existance_289=(_Bool*)come_increment_ref_count(((_Bool*)(right_value372=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_286)), "./neo-c.h", 1340, "bool"))));
                                                        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1342 "./neo-c.h"
                                                        len_290=0;
                                                        # 1377 "./neo-c.h"
                                                        for(                                                        it_293=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_293=map$2charphsClassph_next(self)                                                        ){
                                                            # 1345 "./neo-c.h"
                                                            # 1346 "./neo-c.h"
                                                            memset(&default_value_296,0,sizeof(struct sClass*));
                                                            # 1347 "./neo-c.h"
                                                            it2_299=map$2charphsClassph_at(self,it_293,default_value_296);
                                                            # 1348 "./neo-c.h"
                                                            hash_300=string_get_hash_key(it_293)%size_286;
                                                            # 1349 "./neo-c.h"
                                                            n_301=hash_300;
                                                            # 1375 "./neo-c.h"
                                                            while(_while_condtional44=(_Bool)1,                                                            _while_condtional44) {
                                                                # 1374 "./neo-c.h"
                                                                # 1352 "./neo-c.h"
                                                                if(_if_conditional455=item_existance_289[n_301],                                                                _if_conditional455) {
                                                                    # 1354 "./neo-c.h"
                                                                    n_301++;
                                                                    # 1364 "./neo-c.h"
                                                                    # 1356 "./neo-c.h"
                                                                    if(_if_conditional456=n_301>=size_286,                                                                    _if_conditional456) {
                                                                        # 1357 "./neo-c.h"
                                                                        n_301=0;
                                                                    }
                                                                    else {
                                                                        # 1364 "./neo-c.h"
                                                                        # 1359 "./neo-c.h"
                                                                        if(_if_conditional457=n_301==hash_300,                                                                        _if_conditional457) {
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
                                                                    item_existance_289[n_301]=(_Bool)1;
                                                                    # 1367 "./neo-c.h"
                                                                    keys_287[n_301]=it_293;
                                                                    # 1368 "./neo-c.h"
                                                                    # 1369 "./neo-c.h"
                                                                    items_288[n_301]=map$2charphsClassph_at(self,it_293,default_value_302);
                                                                    # 1371 "./neo-c.h"
                                                                    len_290++;
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
                                                        self->keys=keys_287;
                                                        # 1382 "./neo-c.h"
                                                        self->items=items_288;
                                                        # 1383 "./neo-c.h"
                                                        self->item_existance=item_existance_289;
                                                        # 1385 "./neo-c.h"
                                                        self->size=size_286;
                                                        # 1386 "./neo-c.h"
                                                        self->len=len_290;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional447;
char* result_291;
char* __result162__;
_Bool _if_conditional448;
char* __result163__;
char* result_292;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_291, 0, sizeof(char*));
memset(&result_292, 0, sizeof(char*));
                                                            # 1304 "./neo-c.h"
                                                            # 1299 "./neo-c.h"
                                                            if(_if_conditional447=self==((void*)0),                                                            _if_conditional447) {
                                                                # 1300 "./neo-c.h"
                                                                # 1301 "./neo-c.h"
                                                                memset(&result_291,0,sizeof(char*));
                                                                # 1302 "./neo-c.h"
                                                                __result162__ = __result_obj__ = result_291;
                                                                return __result162__;
                                                            }
                                                            # 1304 "./neo-c.h"
                                                            self->key_list->it=self->key_list->head;
                                                            # 1310 "./neo-c.h"
                                                            # 1306 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1307 "./neo-c.h"
                                                                __result163__ = __result_obj__ = self->key_list->it->item;
                                                                return __result163__;
                                                            }
                                                            # 1310 "./neo-c.h"
                                                            # 1311 "./neo-c.h"
                                                            memset(&result_292,0,sizeof(char*));
                                                            # 1312 "./neo-c.h"
                                                            __result164__ = __result_obj__ = result_292;
                                                            return __result164__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1333 "./neo-c.h"
                                                            __result165__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result165__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional449;
char* result_294;
char* __result166__;
_Bool _if_conditional450;
char* __result167__;
char* result_295;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_294, 0, sizeof(char*));
memset(&result_295, 0, sizeof(char*));
                                                            # 1321 "./neo-c.h"
                                                            # 1316 "./neo-c.h"
                                                            if(_if_conditional449=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional449) {
                                                                # 1317 "./neo-c.h"
                                                                # 1318 "./neo-c.h"
                                                                memset(&result_294,0,sizeof(char*));
                                                                # 1319 "./neo-c.h"
                                                                __result166__ = __result_obj__ = result_294;
                                                                return __result166__;
                                                            }
                                                            # 1321 "./neo-c.h"
                                                            self->key_list->it=self->key_list->it->next;
                                                            # 1327 "./neo-c.h"
                                                            # 1323 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1324 "./neo-c.h"
                                                                __result167__ = __result_obj__ = self->key_list->it->item;
                                                                return __result167__;
                                                            }
                                                            # 1327 "./neo-c.h"
                                                            # 1328 "./neo-c.h"
                                                            memset(&result_295,0,sizeof(char*));
                                                            # 1329 "./neo-c.h"
                                                            __result168__ = __result_obj__ = result_295;
                                                            return __result168__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_297;
unsigned int it_298;
_Bool _while_condtional43;
_Bool _if_conditional451;
_Bool _if_conditional452;
struct sClass* __result169__;
_Bool _if_conditional453;
_Bool _if_conditional454;
struct sClass* __result170__;
struct sClass* __result171__;
struct sClass* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_297, 0, sizeof(unsigned int));
memset(&it_298, 0, sizeof(unsigned int));
                                                                # 1226 "./neo-c.h"
                                                                hash_297=string_get_hash_key(((char*)key))%self->size;
                                                                # 1227 "./neo-c.h"
                                                                it_298=hash_297;
                                                                # 1251 "./neo-c.h"
                                                                while(_while_condtional43=(_Bool)1,                                                                _while_condtional43) {
                                                                    # 1249 "./neo-c.h"
                                                                    # 1230 "./neo-c.h"
                                                                    if(_if_conditional451=self->item_existance[it_298],                                                                    _if_conditional451) {
                                                                        # 1237 "./neo-c.h"
                                                                        # 1232 "./neo-c.h"
                                                                        if(_if_conditional452=string_equals(self->keys[it_298],key),                                                                        _if_conditional452) {
                                                                            # 1234 "./neo-c.h"
                                                                            __result169__ = __result_obj__ = self->items[it_298];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result169__;
                                                                        }
                                                                        # 1237 "./neo-c.h"
                                                                        it_298++;
                                                                        # 1245 "./neo-c.h"
                                                                        # 1239 "./neo-c.h"
                                                                        if(_if_conditional453=it_298>=self->size,                                                                        _if_conditional453) {
                                                                            # 1240 "./neo-c.h"
                                                                            it_298=0;
                                                                        }
                                                                        else {
                                                                            # 1245 "./neo-c.h"
                                                                            # 1242 "./neo-c.h"
                                                                            if(_if_conditional454=it_298==hash_297,                                                                            _if_conditional454) {
                                                                                # 1243 "./neo-c.h"
                                                                                __result170__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result170__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1247 "./neo-c.h"
                                                                        __result171__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result171__;
                                                                    }
                                                                }
                                                                # 1251 "./neo-c.h"
                                                                __result172__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result172__;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_305;
struct list_item$1charp* it_306;
_Bool _while_condtional46;
_Bool _if_conditional461;
struct list$1charp* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_305, 0, sizeof(int));
memset(&it_306, 0, sizeof(struct list_item$1charp*));
                                                                    # 448 "./neo-c.h"
                                                                    it2_305=0;
                                                                    # 449 "./neo-c.h"
                                                                    it_306=self->head;
                                                                    # 460 "./neo-c.h"
                                                                    while(_while_condtional46=it_306!=((void*)0),                                                                    _while_condtional46) {
                                                                        # 455 "./neo-c.h"
                                                                        # 451 "./neo-c.h"
                                                                        if(_if_conditional461=string_equals(it_306->item,item),                                                                        _if_conditional461) {
                                                                            # 452 "./neo-c.h"
                                                                            list$1charp_delete(self,it2_305,it2_305+1);
                                                                            # 453 "./neo-c.h"
                                                                            break;
                                                                        }
                                                                        # 455 "./neo-c.h"
                                                                        it2_305++;
                                                                        # 457 "./neo-c.h"
                                                                        it_306=it_306->next;
                                                                    }
                                                                    # 460 "./neo-c.h"
                                                                    __result176__ = __result_obj__ = self;
                                                                    return __result176__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
int tmp_307;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
struct list$1charp* __result173__;
_Bool _if_conditional468;
_Bool _if_conditional469;
struct list_item$1charp* it_310;
int i_311;
_Bool _while_condtional48;
_Bool _if_conditional470;
struct list_item$1charp* prev_it_312;
_Bool _if_conditional471;
_Bool _if_conditional472;
struct list_item$1charp* it_313;
int i_314;
_Bool _while_condtional49;
_Bool _if_conditional473;
_Bool _if_conditional474;
struct list_item$1charp* prev_it_315;
struct list_item$1charp* it_316;
struct list_item$1charp* head_prev_it_317;
struct list_item$1charp* tail_it_318;
int i_319;
_Bool _while_condtional50;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
struct list_item$1charp* prev_it_320;
_Bool _if_conditional478;
_Bool _if_conditional479;
struct list$1charp* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_307, 0, sizeof(int));
memset(&it_310, 0, sizeof(struct list_item$1charp*));
memset(&i_311, 0, sizeof(int));
memset(&prev_it_312, 0, sizeof(struct list_item$1charp*));
memset(&it_313, 0, sizeof(struct list_item$1charp*));
memset(&i_314, 0, sizeof(int));
memset(&prev_it_315, 0, sizeof(struct list_item$1charp*));
memset(&it_316, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_317, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_318, 0, sizeof(struct list_item$1charp*));
memset(&i_319, 0, sizeof(int));
memset(&prev_it_320, 0, sizeof(struct list_item$1charp*));
                                                                                # 467 "./neo-c.h"
                                                                                # 464 "./neo-c.h"
                                                                                if(_if_conditional462=head<0,                                                                                _if_conditional462) {
                                                                                    # 465 "./neo-c.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 471 "./neo-c.h"
                                                                                # 467 "./neo-c.h"
                                                                                if(_if_conditional463=tail<0,                                                                                _if_conditional463) {
                                                                                    # 468 "./neo-c.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 477 "./neo-c.h"
                                                                                # 471 "./neo-c.h"
                                                                                if(_if_conditional464=head>tail,                                                                                _if_conditional464) {
                                                                                    # 472 "./neo-c.h"
                                                                                    tmp_307=tail;
                                                                                    # 473 "./neo-c.h"
                                                                                    tail=head;
                                                                                    # 474 "./neo-c.h"
                                                                                    head=tmp_307;
                                                                                }
                                                                                # 481 "./neo-c.h"
                                                                                # 477 "./neo-c.h"
                                                                                if(_if_conditional465=head<0,                                                                                _if_conditional465) {
                                                                                    # 478 "./neo-c.h"
                                                                                    head=0;
                                                                                }
                                                                                # 485 "./neo-c.h"
                                                                                # 481 "./neo-c.h"
                                                                                if(_if_conditional466=tail>self->len,                                                                                _if_conditional466) {
                                                                                    # 482 "./neo-c.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 489 "./neo-c.h"
                                                                                # 485 "./neo-c.h"
                                                                                if(_if_conditional467=head==tail,                                                                                _if_conditional467) {
                                                                                    # 486 "./neo-c.h"
                                                                                    __result173__ = __result_obj__ = self;
                                                                                    return __result173__;
                                                                                }
                                                                                # 584 "./neo-c.h"
                                                                                # 489 "./neo-c.h"
                                                                                if(_if_conditional468=head==0&&tail==self->len,                                                                                _if_conditional468) {
                                                                                    # 491 "./neo-c.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 584 "./neo-c.h"
                                                                                    # 493 "./neo-c.h"
                                                                                    if(_if_conditional469=head==0,                                                                                    _if_conditional469) {
                                                                                        # 494 "./neo-c.h"
                                                                                        it_310=self->head;
                                                                                        # 495 "./neo-c.h"
                                                                                        i_311=0;
                                                                                        # 517 "./neo-c.h"
                                                                                        while(_while_condtional48=it_310!=((void*)0),                                                                                        _while_condtional48) {
                                                                                            # 516 "./neo-c.h"
                                                                                            # 497 "./neo-c.h"
                                                                                            if(_if_conditional470=i_311<tail,                                                                                            _if_conditional470) {
                                                                                                # 498 "./neo-c.h"
                                                                                                prev_it_312=it_310;
                                                                                                # 500 "./neo-c.h"
                                                                                                it_310=it_310->next;
                                                                                                # 501 "./neo-c.h"
                                                                                                i_311++;
                                                                                                # 503 "./neo-c.h"
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                # 505 "./neo-c.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 516 "./neo-c.h"
                                                                                                # 507 "./neo-c.h"
                                                                                                if(_if_conditional471=i_311==tail,                                                                                                _if_conditional471) {
                                                                                                    # 508 "./neo-c.h"
                                                                                                    self->head=it_310;
                                                                                                    # 509 "./neo-c.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 510 "./neo-c.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 513 "./neo-c.h"
                                                                                                    it_310=it_310->next;
                                                                                                    # 514 "./neo-c.h"
                                                                                                    i_311++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 584 "./neo-c.h"
                                                                                        # 518 "./neo-c.h"
                                                                                        if(_if_conditional472=tail==self->len,                                                                                        _if_conditional472) {
                                                                                            # 519 "./neo-c.h"
                                                                                            it_313=self->head;
                                                                                            # 520 "./neo-c.h"
                                                                                            i_314=0;
                                                                                            # 542 "./neo-c.h"
                                                                                            while(_while_condtional49=it_313!=((void*)0),                                                                                            _while_condtional49) {
                                                                                                # 527 "./neo-c.h"
                                                                                                # 522 "./neo-c.h"
                                                                                                if(_if_conditional473=i_314==head,                                                                                                _if_conditional473) {
                                                                                                    # 523 "./neo-c.h"
                                                                                                    self->tail=it_313->prev;
                                                                                                    # 524 "./neo-c.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 541 "./neo-c.h"
                                                                                                # 527 "./neo-c.h"
                                                                                                if(_if_conditional474=i_314>=head,                                                                                                _if_conditional474) {
                                                                                                    # 528 "./neo-c.h"
                                                                                                    prev_it_315=it_313;
                                                                                                    # 530 "./neo-c.h"
                                                                                                    it_313=it_313->next;
                                                                                                    # 531 "./neo-c.h"
                                                                                                    i_314++;
                                                                                                    # 533 "./neo-c.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 535 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 538 "./neo-c.h"
                                                                                                    it_313=it_313->next;
                                                                                                    # 539 "./neo-c.h"
                                                                                                    i_314++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 544 "./neo-c.h"
                                                                                            it_316=self->head;
                                                                                            # 546 "./neo-c.h"
                                                                                            head_prev_it_317=((void*)0);
                                                                                            # 547 "./neo-c.h"
                                                                                            tail_it_318=((void*)0);
                                                                                            # 550 "./neo-c.h"
                                                                                            i_319=0;
                                                                                            # 576 "./neo-c.h"
                                                                                            while(_while_condtional50=it_316!=((void*)0),                                                                                            _while_condtional50) {
                                                                                                # 555 "./neo-c.h"
                                                                                                # 552 "./neo-c.h"
                                                                                                if(_if_conditional475=i_319==head,                                                                                                _if_conditional475) {
                                                                                                    # 553 "./neo-c.h"
                                                                                                    head_prev_it_317=it_316->prev;
                                                                                                }
                                                                                                # 559 "./neo-c.h"
                                                                                                # 555 "./neo-c.h"
                                                                                                if(_if_conditional476=i_319==tail,                                                                                                _if_conditional476) {
                                                                                                    # 556 "./neo-c.h"
                                                                                                    tail_it_318=it_316;
                                                                                                }
                                                                                                # 574 "./neo-c.h"
                                                                                                # 559 "./neo-c.h"
                                                                                                if(_if_conditional477=i_319>=head&&i_319<tail,                                                                                                _if_conditional477) {
                                                                                                    # 561 "./neo-c.h"
                                                                                                    prev_it_320=it_316;
                                                                                                    # 563 "./neo-c.h"
                                                                                                    it_316=it_316->next;
                                                                                                    # 564 "./neo-c.h"
                                                                                                    i_319++;
                                                                                                    # 566 "./neo-c.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 568 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 571 "./neo-c.h"
                                                                                                    it_316=it_316->next;
                                                                                                    # 572 "./neo-c.h"
                                                                                                    i_319++;
                                                                                                }
                                                                                            }
                                                                                            # 579 "./neo-c.h"
                                                                                            # 576 "./neo-c.h"
                                                                                            if(_if_conditional478=head_prev_it_317!=((void*)0),                                                                                            _if_conditional478) {
                                                                                                # 577 "./neo-c.h"
                                                                                                head_prev_it_317->next=tail_it_318;
                                                                                            }
                                                                                            # 582 "./neo-c.h"
                                                                                            # 579 "./neo-c.h"
                                                                                            if(_if_conditional479=tail_it_318!=((void*)0),                                                                                            _if_conditional479) {
                                                                                                # 580 "./neo-c.h"
                                                                                                tail_it_318->prev=head_prev_it_317;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                # 584 "./neo-c.h"
                                                                                __result175__ = __result_obj__ = self;
                                                                                return __result175__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_308;
_Bool _while_condtional47;
struct list_item$1charp* prev_it_309;
struct list$1charp* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_308, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_309, 0, sizeof(struct list_item$1charp*));
                                                                                        # 433 "./neo-c.h"
                                                                                        it_308=self->head;
                                                                                        # 440 "./neo-c.h"
                                                                                        while(_while_condtional47=it_308!=((void*)0),                                                                                        _while_condtional47) {
                                                                                            # 435 "./neo-c.h"
                                                                                            prev_it_309=it_308;
                                                                                            # 436 "./neo-c.h"
                                                                                            it_308=it_308->next;
                                                                                            # 437 "./neo-c.h"
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 440 "./neo-c.h"
                                                                                        self->head=((void*)0);
                                                                                        # 441 "./neo-c.h"
                                                                                        self->tail=((void*)0);
                                                                                        # 443 "./neo-c.h"
                                                                                        self->len=0;
                                                                                        # 445 "./neo-c.h"
                                                                                        __result174__ = __result_obj__ = self;
                                                                                        return __result174__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional485;
char* result_322;
char* __result177__;
_Bool _if_conditional486;
char* __result178__;
char* result_323;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_322, 0, sizeof(char*));
memset(&result_323, 0, sizeof(char*));
                                                    # 290 "./neo-c.h"
                                                    # 285 "./neo-c.h"
                                                    if(_if_conditional485=self==((void*)0),                                                    _if_conditional485) {
                                                        # 286 "./neo-c.h"
                                                        # 287 "./neo-c.h"
                                                        memset(&result_322,0,sizeof(char*));
                                                        # 288 "./neo-c.h"
                                                        __result177__ = __result_obj__ = result_322;
                                                        return __result177__;
                                                    }
                                                    # 290 "./neo-c.h"
                                                    self->it=self->head;
                                                    # 296 "./neo-c.h"
                                                    # 292 "./neo-c.h"
                                                    if(self->it) {
                                                        # 293 "./neo-c.h"
                                                        __result178__ = __result_obj__ = self->it->item;
                                                        return __result178__;
                                                    }
                                                    # 296 "./neo-c.h"
                                                    # 297 "./neo-c.h"
                                                    memset(&result_323,0,sizeof(char*));
                                                    # 298 "./neo-c.h"
                                                    __result179__ = __result_obj__ = result_323;
                                                    return __result179__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 320 "./neo-c.h"
                                                    __result180__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result180__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional487;
char* result_325;
char* __result181__;
_Bool _if_conditional488;
char* __result182__;
char* result_326;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_325, 0, sizeof(char*));
memset(&result_326, 0, sizeof(char*));
                                                    # 308 "./neo-c.h"
                                                    # 302 "./neo-c.h"
                                                    if(_if_conditional487=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional487) {
                                                        # 303 "./neo-c.h"
                                                        # 304 "./neo-c.h"
                                                        memset(&result_325,0,sizeof(char*));
                                                        # 305 "./neo-c.h"
                                                        __result181__ = __result_obj__ = result_325;
                                                        return __result181__;
                                                    }
                                                    # 308 "./neo-c.h"
                                                    self->it=self->it->next;
                                                    # 314 "./neo-c.h"
                                                    # 310 "./neo-c.h"
                                                    if(self->it) {
                                                        # 311 "./neo-c.h"
                                                        __result182__ = __result_obj__ = self->it->item;
                                                        return __result182__;
                                                    }
                                                    # 314 "./neo-c.h"
                                                    # 315 "./neo-c.h"
                                                    memset(&result_326,0,sizeof(char*));
                                                    # 316 "./neo-c.h"
                                                    __result183__ = __result_obj__ = result_326;
                                                    return __result183__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional491;
void* right_value373;
struct list_item$1charp* litem_327;
_Bool _if_conditional492;
void* right_value374;
struct list_item$1charp* litem_328;
void* right_value375;
struct list_item$1charp* litem_329;
struct list$1charp* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
memset(&litem_327, 0, sizeof(struct list_item$1charp*));
right_value374 = (void*)0;
memset(&litem_328, 0, sizeof(struct list_item$1charp*));
right_value375 = (void*)0;
memset(&litem_329, 0, sizeof(struct list_item$1charp*));
                                                        # 256 "./neo-c.h"
                                                        # 225 "./neo-c.h"
                                                        if(_if_conditional491=self->len==0,                                                        _if_conditional491) {
                                                            # 226 "./neo-c.h"
                                                            litem_327=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value373=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 228 "./neo-c.h"
                                                            litem_327->prev=((void*)0);
                                                            # 229 "./neo-c.h"
                                                            litem_327->next=((void*)0);
                                                            # 230 "./neo-c.h"
                                                            litem_327->item=item;
                                                            # 232 "./neo-c.h"
                                                            self->tail=litem_327;
                                                            # 233 "./neo-c.h"
                                                            self->head=litem_327;
                                                        }
                                                        else {
                                                            # 256 "./neo-c.h"
                                                            # 235 "./neo-c.h"
                                                            if(_if_conditional492=self->len==1,                                                            _if_conditional492) {
                                                                # 236 "./neo-c.h"
                                                                litem_328=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value374=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 238 "./neo-c.h"
                                                                litem_328->prev=self->head;
                                                                # 239 "./neo-c.h"
                                                                litem_328->next=((void*)0);
                                                                # 240 "./neo-c.h"
                                                                litem_328->item=item;
                                                                # 242 "./neo-c.h"
                                                                self->tail=litem_328;
                                                                # 243 "./neo-c.h"
                                                                self->head->next=litem_328;
                                                            }
                                                            else {
                                                                # 246 "./neo-c.h"
                                                                litem_329=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value375=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 248 "./neo-c.h"
                                                                litem_329->prev=self->tail;
                                                                # 249 "./neo-c.h"
                                                                litem_329->next=((void*)0);
                                                                # 250 "./neo-c.h"
                                                                litem_329->item=item;
                                                                # 252 "./neo-c.h"
                                                                self->tail->next=litem_329;
                                                                # 253 "./neo-c.h"
                                                                self->tail=litem_329;
                                                            }
                                                        }
                                                        # 256 "./neo-c.h"
                                                        self->len++;
                                                        # 258 "./neo-c.h"
                                                        __result184__ = __result_obj__ = self;
                                                        return __result184__;
}

