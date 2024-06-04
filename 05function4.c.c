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
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
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

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

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
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
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
static void list$1charph_finalize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
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
_Bool _if_conditional55;
void* right_value96;
void* right_value129;
struct sType* type__88;
_Bool _if_conditional130;
void* right_value130;
void* right_value131;
_Bool void_param_89;
char* p_90;
int sline_91;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _while_condtional27;
_Bool _if_conditional136;
void* right_value132;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_92;
char* param_name_93;
_Bool err_94;
_Bool _if_conditional139;
void* right_value133;
void* right_value134;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result86__;
void* right_value135;
struct sType* param_type2_95;
void* right_value139;
void* right_value143;
_Bool _if_conditional144;
char* p_102;
_Bool no_comma_103;
void* right_value144;
struct sNode* node_104;
char* p2_105;
void* right_value145;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value146;
void* right_value147;
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
right_value96 = (void*)0;
right_value129 = (void*)0;
memset(&type__88, 0, sizeof(struct sType*));
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&void_param_89, 0, sizeof(_Bool));
memset(&p_90, 0, sizeof(char*));
memset(&sline_91, 0, sizeof(int));
right_value132 = (void*)0;
memset(&param_type_92, 0, sizeof(struct sType*));
memset(&param_name_93, 0, sizeof(char*));
memset(&err_94, 0, sizeof(_Bool));
memset(&param_type_92, 0, sizeof(struct sType*));
memset(&param_name_93, 0, sizeof(char*));
memset(&err_94, 0, sizeof(_Bool));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&param_type2_95, 0, sizeof(struct sType*));
right_value139 = (void*)0;
right_value143 = (void*)0;
memset(&p_102, 0, sizeof(char*));
memset(&no_comma_103, 0, sizeof(_Bool));
right_value144 = (void*)0;
memset(&node_104, 0, sizeof(struct sNode*));
memset(&p2_105, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
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
    # 222 "05function4.c"
    # 209 "05function4.c"
    if(in_constructor_) {
        # 210 "05function4.c"
        list$1charph_add(param_names_67,(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("self")))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 211 "05function4.c"
        type__88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(info->impl_type))));
        come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 212 "05function4.c"
        type__88->mHeap=(_Bool)1;
        # 213 "05function4.c"
        list$1sTypeph_add(param_types_66,(struct sType*)come_increment_ref_count(type__88));
        # 214 "05function4.c"
        list$1charph_add(param_default_parametors_68,((void*)0));
        come_call_finalizer2(sType_finalize,type__88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 222 "05function4.c"
        # 216 "05function4.c"
        if(info->in_class) {
            # 217 "05function4.c"
            list$1charph_add(param_names_67,(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("self")))));
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 218 "05function4.c"
            list$1sTypeph_add(param_types_66,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(info->impl_type)))));
            come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 219 "05function4.c"
            list$1charph_add(param_default_parametors_68,((void*)0));
        }
    }
    # 222 "05function4.c"
    expected_next_character(40,info);
    # 225 "05function4.c"
    void_param_89=(_Bool)0;
    # 243 "05function4.c"
    {
        # 227 "05function4.c"
        p_90=info->p;
        # 228 "05function4.c"
        sline_91=info->sline;
        # 239 "05function4.c"
        # 230 "05function4.c"
        if(_if_conditional131=strmemcmp(info->p,"void"),        _if_conditional131) {
            # 231 "05function4.c"
            info->p+=strlen("void");
            # 232 "05function4.c"
            skip_spaces_and_lf(info);
            # 237 "05function4.c"
            # 234 "05function4.c"
            if(_if_conditional132=*info->p==41,            _if_conditional132) {
                # 235 "05function4.c"
                void_param_89=(_Bool)1;
            }
        }
        # 239 "05function4.c"
        info->p=p_90;
        # 240 "05function4.c"
        info->sline=sline_91;
    }
    # 328 "05function4.c"
    # 243 "05function4.c"
    if(void_param_89) {
        # 253 "05function4.c"
        # 244 "05function4.c"
        if(_if_conditional134=strmemcmp(info->p,"void"),        _if_conditional134) {
            # 245 "05function4.c"
            info->p+=strlen("void");
            # 246 "05function4.c"
            skip_spaces_and_lf(info);
            # 252 "05function4.c"
            # 248 "05function4.c"
            if(_if_conditional135=*info->p==41,            _if_conditional135) {
                # 249 "05function4.c"
                info->p++;
                # 250 "05function4.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 326 "05function4.c"
        while(_while_condtional27=(_Bool)1,        _while_condtional27) {
            # 262 "05function4.c"
            # 256 "05function4.c"
            if(_if_conditional136=*info->p==41,            _if_conditional136) {
                # 257 "05function4.c"
                info->p++;
                # 258 "05function4.c"
                skip_spaces_and_lf(info);
                # 259 "05function4.c"
                break;
            }
            # 262 "05function4.c"
            parse_sharp_v5(info);
            # 264 "05function4.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value132=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_92=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_93=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_94=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 271 "05function4.c"
            # 266 "05function4.c"
            if(_if_conditional139=!err_94,            _if_conditional139) {
                # 267 "05function4.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 268 "05function4.c"
                __result86__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value134=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value133=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05function4.c", 268, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_93 = come_decrement_ref_count2(param_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result86__;
            }
            # 271 "05function4.c"
            param_type2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=solve_generics(param_type_92,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 273 "05function4.c"
            param_type2_95->mFunctionParam=(_Bool)1;
            # 275 "05function4.c"
            list$1sTypeph_push_back(param_types_66,(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(param_type2_95)))));
            come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 276 "05function4.c"
            list$1charph_push_back(param_names_67,(char*)come_increment_ref_count(((char*)(right_value143=string_clone(param_name_93)))));
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 305 "05function4.c"
            # 278 "05function4.c"
            if(_if_conditional144=*info->p==61,            _if_conditional144) {
                # 279 "05function4.c"
                info->p++;
                # 280 "05function4.c"
                skip_spaces_and_lf(info);
                # 282 "05function4.c"
                parse_sharp_v5(info);
                # 284 "05function4.c"
                p_102=info->p;
                # 286 "05function4.c"
                no_comma_103=info->no_comma;
                # 287 "05function4.c"
                info->no_comma=(_Bool)1;
                # 289 "05function4.c"
                node_104=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=expression_v13(info))));
                if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 291 "05function4.c"
                info->no_comma=no_comma_103;
                # 293 "05function4.c"
                p2_105=info->p;
                # 295 "05function4.c"
                char buf_106[p2_105-p_102+1];
                memset(&buf_106, 0, sizeof(char)                *(p2_105-p_102+1)                );
                # 296 "05function4.c"
                memcpy(buf_106,p_102,p2_105-p_102);
                # 297 "05function4.c"
                buf_106[p2_105-p_102]=0;
                # 299 "05function4.c"
                list$1charph_push_back(param_default_parametors_68,(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(buf_106)))));
                right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_104) { node_104 = come_decrement_ref_count2(node_104, ((struct sNode*)node_104)->finalize, ((struct sNode*)node_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 302 "05function4.c"
                list$1charph_push_back(param_default_parametors_68,((void*)0));
            }
            # 305 "05function4.c"
            parse_sharp_v5(info);
            # 325 "05function4.c"
            # 307 "05function4.c"
            if(_if_conditional145=*info->p==44,            _if_conditional145) {
                # 308 "05function4.c"
                info->p++;
                # 309 "05function4.c"
                skip_spaces_and_lf(info);
                # 319 "05function4.c"
                # 311 "05function4.c"
                if(_if_conditional146=strmemcmp(info->p,"..."),                _if_conditional146) {
                    # 312 "05function4.c"
                    info->p+=strlen("...");
                    # 313 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 314 "05function4.c"
                    var_args_69=(_Bool)1;
                    # 316 "05function4.c"
                    expected_next_character(41,info);
                    # 317 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_93 = come_decrement_ref_count2(param_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 325 "05function4.c"
                # 320 "05function4.c"
                if(_if_conditional147=*info->p==41,                _if_conditional147) {
                    # 321 "05function4.c"
                    info->p++;
                    # 322 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 323 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_93 = come_decrement_ref_count2(param_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_93 = come_decrement_ref_count2(param_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 328 "05function4.c"
    __result90__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value147=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value146=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 328, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_66),(struct list$1charph*)come_increment_ref_count(param_names_67),(struct list$1charph*)come_increment_ref_count(param_default_parametors_68),var_args_69)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value93;
struct list_item$1charph* litem_70;
char* __dec_obj13;
_Bool _if_conditional57;
void* right_value94;
struct list_item$1charph* litem_71;
char* __dec_obj14;
void* right_value95;
struct list_item$1charph* litem_72;
char* __dec_obj15;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
right_value94 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
            # 186 "./neo-c.h"
            # 155 "./neo-c.h"
            if(_if_conditional56=self->len==0,            _if_conditional56) {
                # 156 "./neo-c.h"
                litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                come_call_finalizer2(list_item$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 158 "./neo-c.h"
                litem_70->prev=((void*)0);
                # 159 "./neo-c.h"
                litem_70->next=((void*)0);
                # 160 "./neo-c.h"
                __dec_obj13=litem_70->item;
                litem_70->item=(char*)come_increment_ref_count(item);
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 162 "./neo-c.h"
                self->tail=litem_70;
                # 163 "./neo-c.h"
                self->head=litem_70;
            }
            else {
                # 186 "./neo-c.h"
                # 165 "./neo-c.h"
                if(_if_conditional57=self->len==1,                _if_conditional57) {
                    # 166 "./neo-c.h"
                    litem_71=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 168 "./neo-c.h"
                    litem_71->prev=self->head;
                    # 169 "./neo-c.h"
                    litem_71->next=((void*)0);
                    # 170 "./neo-c.h"
                    __dec_obj14=litem_71->item;
                    litem_71->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 172 "./neo-c.h"
                    self->tail=litem_71;
                    # 173 "./neo-c.h"
                    self->head->next=litem_71;
                }
                else {
                    # 176 "./neo-c.h"
                    litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 178 "./neo-c.h"
                    litem_72->prev=self->tail;
                    # 179 "./neo-c.h"
                    litem_72->next=((void*)0);
                    # 180 "./neo-c.h"
                    __dec_obj15=litem_72->item;
                    litem_72->item=(char*)come_increment_ref_count(item);
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 182 "./neo-c.h"
                    self->tail->next=litem_72;
                    # 183 "./neo-c.h"
                    self->tail=litem_72;
                }
            }
            # 186 "./neo-c.h"
            self->len++;
            # 188 "./neo-c.h"
            __result69__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result69__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional58;
struct sType* __result70__;
void* right_value97;
struct sType* result_73;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value104;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional64;
void* right_value107;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional68;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional69;
void* right_value109;
char* __dec_obj23;
_Bool _if_conditional70;
void* right_value110;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional71;
void* right_value118;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value119;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional86;
void* right_value123;
struct list$1charph* __dec_obj30;
_Bool _if_conditional88;
void* right_value124;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value125;
struct sNode* __dec_obj32;
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
void* right_value126;
struct sNode* __dec_obj33;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value127;
char* __dec_obj34;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value128;
char* __dec_obj35;
_Bool _if_conditional129;
struct sType* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&result_73, 0, sizeof(struct sType*));
right_value104 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional58=self==(void*)0,            _if_conditional58) {
                # 2 "sType_clone"
                __result70__ = __result_obj__ = (void*)0;
                return __result70__;
            }
            # 3 "sType_clone"
            result_73=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional59=self!=((void*)0),            _if_conditional59) {
                # 4 "sType_clone"
                result_73->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional60=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional60) {
                # 5 "sType_clone"
                __dec_obj19=result_73->mMultipleTypes;
                result_73->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional64=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional64) {
                # 6 "sType_clone"
                __dec_obj21=result_73->mNoSolvedGenericsType;
                result_73->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value107=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional68=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional68) {
                # 7 "sType_clone"
                __dec_obj22=result_73->mOriginalLoadVarType;
                result_73->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional69) {
                # 8 "sType_clone"
                __dec_obj23=result_73->mGenericsName;
                result_73->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value109=string_clone(self->mGenericsName))));
                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional70=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional70) {
                # 9 "sType_clone"
                __dec_obj24=result_73->mGenericsTypes;
                result_73->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value110=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional71=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional71) {
                # 10 "sType_clone"
                __dec_obj28=result_73->mArrayNum;
                result_73->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value118=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 11 "sType_clone"
                result_73->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional85=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional85) {
                # 12 "sType_clone"
                __dec_obj29=result_73->mParamTypes;
                result_73->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional86=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional86) {
                # 13 "sType_clone"
                __dec_obj30=result_73->mParamNames;
                result_73->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional88=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional88) {
                # 14 "sType_clone"
                __dec_obj31=result_73->mResultType;
                result_73->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value124=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 15 "sType_clone"
                result_73->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional90=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional90) {
                # 16 "sType_clone"
                __dec_obj32=result_73->mAlignas;
                result_73->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 17 "sType_clone"
                result_73->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 18 "sType_clone"
                result_73->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 19 "sType_clone"
                result_73->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 20 "sType_clone"
                result_73->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 21 "sType_clone"
                result_73->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 22 "sType_clone"
                result_73->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 23 "sType_clone"
                result_73->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 24 "sType_clone"
                result_73->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 25 "sType_clone"
                result_73->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 26 "sType_clone"
                result_73->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 27 "sType_clone"
                result_73->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 28 "sType_clone"
                result_73->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 29 "sType_clone"
                result_73->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 30 "sType_clone"
                result_73->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 31 "sType_clone"
                result_73->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 32 "sType_clone"
                result_73->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 33 "sType_clone"
                result_73->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 34 "sType_clone"
                result_73->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 35 "sType_clone"
                result_73->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 36 "sType_clone"
                result_73->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 37 "sType_clone"
                result_73->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 38 "sType_clone"
                result_73->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 39 "sType_clone"
                result_73->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 40 "sType_clone"
                result_73->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional115=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional115) {
                # 41 "sType_clone"
                __dec_obj33=result_73->mSizeNum;
                result_73->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 42 "sType_clone"
                result_73->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 43 "sType_clone"
                result_73->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional118=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional118) {
                # 44 "sType_clone"
                __dec_obj34=result_73->mOriginalTypeName;
                result_73->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 45 "sType_clone"
                result_73->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                # 46 "sType_clone"
                result_73->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 47 "sType_clone"
                result_73->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                # 48 "sType_clone"
                result_73->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                # 49 "sType_clone"
                result_73->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                # 50 "sType_clone"
                result_73->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                # 51 "sType_clone"
                result_73->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 52 "sType_clone"
                result_73->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 53 "sType_clone"
                result_73->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional128=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional128) {
                # 54 "sType_clone"
                __dec_obj35=result_73->mAsmName;
                result_73->mAsmName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 55 "sType_clone"
                result_73->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result84__ = __result_obj__ = result_73;
            come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result84__;
            come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional61;
struct list$1sTypeph* __result71__;
void* right_value98;
void* right_value99;
struct list$1sTypeph* result_74;
struct list_item$1sTypeph* it_75;
_Bool _while_condtional24;
void* right_value103;
struct list$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_74, 0, sizeof(struct list$1sTypeph*));
memset(&it_75, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional61=self==((void*)0),                    _if_conditional61) {
                        # 140 "./neo-c.h"
                        __result71__ = __result_obj__ = ((void*)0);
                        return __result71__;
                    }
                    # 142 "./neo-c.h"
                    result_74=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_75=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional24=it_75!=((void*)0),                    _while_condtional24) {
                        # 146 "./neo-c.h"
                        list$1sTypeph_add(result_74,(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(it_75->item)))));
                        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_75=it_75->next;
                    }
                    # 151 "./neo-c.h"
                    __result73__ = __result_obj__ = result_74;
                    come_call_finalizer2(list$1sTypephp_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result73__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional62;
void* right_value100;
struct list_item$1sTypeph* litem_76;
struct sType* __dec_obj16;
_Bool _if_conditional63;
void* right_value101;
struct list_item$1sTypeph* litem_77;
struct sType* __dec_obj17;
void* right_value102;
struct list_item$1sTypeph* litem_78;
struct sType* __dec_obj18;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sTypeph*));
right_value101 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional62=self->len==0,                            _if_conditional62) {
                                # 156 "./neo-c.h"
                                litem_76=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value100=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_76->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_76->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj16=litem_76->item;
                                litem_76->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_76;
                                # 163 "./neo-c.h"
                                self->head=litem_76;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional63=self->len==1,                                _if_conditional63) {
                                    # 166 "./neo-c.h"
                                    litem_77=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_77->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_77->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj17=litem_77->item;
                                    litem_77->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_77;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_77;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_78=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_78->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_78->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj18=litem_78->item;
                                    litem_78->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_78;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_78;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result72__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result72__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct tuple1$1sTypeph* __result74__;
void* right_value105;
struct tuple1$1sTypeph* result_79;
_Bool _if_conditional67;
void* right_value106;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&result_79, 0, sizeof(struct tuple1$1sTypeph*));
right_value106 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional65=self==(void*)0,                    _if_conditional65) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result74__ = __result_obj__ = (void*)0;
                        return __result74__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_79=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional67=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional67) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj20=result_79->v1;
                        result_79->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result75__ = __result_obj__ = result_79;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result75__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional66=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional66) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional72;
struct list$1sNodeph* __result76__;
void* right_value111;
void* right_value112;
struct list$1sNodeph* result_80;
struct list_item$1sNodeph* it_81;
_Bool _while_condtional25;
void* right_value117;
struct list$1sNodeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&result_80, 0, sizeof(struct list$1sNodeph*));
memset(&it_81, 0, sizeof(struct list_item$1sNodeph*));
right_value117 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional72=self==((void*)0),                    _if_conditional72) {
                        # 140 "./neo-c.h"
                        __result76__ = __result_obj__ = ((void*)0);
                        return __result76__;
                    }
                    # 142 "./neo-c.h"
                    result_80=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value111=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_81=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional25=it_81!=((void*)0),                    _while_condtional25) {
                        # 146 "./neo-c.h"
                        list$1sNodeph_add(result_80,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(it_81->item)))));
                        if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./neo-c.h"
                        it_81=it_81->next;
                    }
                    # 151 "./neo-c.h"
                    __result81__ = __result_obj__ = result_80;
                    come_call_finalizer2(list$1sNodephp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result77__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result77__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional73;
void* right_value113;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj25;
_Bool _if_conditional74;
void* right_value114;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj26;
void* right_value115;
struct list_item$1sNodeph* litem_84;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
right_value114 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional73=self->len==0,                            _if_conditional73) {
                                # 156 "./neo-c.h"
                                litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value113=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_82->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_82->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj25=litem_82->item;
                                litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./neo-c.h"
                                self->tail=litem_82;
                                # 163 "./neo-c.h"
                                self->head=litem_82;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional74=self->len==1,                                _if_conditional74) {
                                    # 166 "./neo-c.h"
                                    litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_83->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_83->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj26=litem_83->item;
                                    litem_83->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./neo-c.h"
                                    self->tail=litem_83;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_83;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_84=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_84->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_84->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj27=litem_84->item;
                                    litem_84->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_84;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_84;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result78__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result78__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional75;
struct sNode* __result79__;
void* right_value116;
struct sNode* result_85;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_85, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional75=self==(void*)0,                            _if_conditional75) {
                                # 2 "sNode_clone"
                                __result79__ = __result_obj__ = (void*)0;
                                return __result79__;
                            }
                            # 3 "sNode_clone"
                            result_85=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional76=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional76) {
                                # 4 "sNode_clone"
                                result_85->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional77=self!=((void*)0),                            _if_conditional77) {
                                # 5 "sNode_clone"
                                result_85->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional78=self!=((void*)0),                            _if_conditional78) {
                                # 6 "sNode_clone"
                                result_85->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional79=self!=((void*)0),                            _if_conditional79) {
                                # 7 "sNode_clone"
                                result_85->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional80=self!=((void*)0),                            _if_conditional80) {
                                # 8 "sNode_clone"
                                result_85->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional81=self!=((void*)0),                            _if_conditional81) {
                                # 9 "sNode_clone"
                                result_85->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional82=self!=((void*)0),                            _if_conditional82) {
                                # 10 "sNode_clone"
                                result_85->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                # 11 "sNode_clone"
                                result_85->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result80__ = __result_obj__ = result_85;
                            if(result_85) { result_85 = come_decrement_ref_count2(result_85, ((struct sNode*)result_85)->finalize, ((struct sNode*)result_85)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result80__;
                            if(result_85) { result_85 = come_decrement_ref_count2(result_85, ((struct sNode*)result_85)->finalize, ((struct sNode*)result_85)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional87;
struct list$1charph* __result82__;
void* right_value120;
void* right_value121;
struct list$1charph* result_86;
struct list_item$1charph* it_87;
_Bool _while_condtional26;
void* right_value122;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1charph*));
memset(&it_87, 0, sizeof(struct list_item$1charph*));
right_value122 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional87=self==((void*)0),                    _if_conditional87) {
                        # 140 "./neo-c.h"
                        __result82__ = __result_obj__ = ((void*)0);
                        return __result82__;
                    }
                    # 142 "./neo-c.h"
                    result_86=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_87=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional26=it_87!=((void*)0),                    _while_condtional26) {
                        # 146 "./neo-c.h"
                        list$1charph_add(result_86,(char*)come_increment_ref_count(((char*)(right_value122=string_clone(it_87->item)))));
                        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_87=it_87->next;
                    }
                    # 151 "./neo-c.h"
                    __result83__ = __result_obj__ = result_86;
                    come_call_finalizer2(list$1charphp_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(list$1charphp_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional137=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional137) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional138=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional138) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result85__;
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
                    __result85__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional140;
void* right_value136;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj36;
_Bool _if_conditional141;
void* right_value137;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj37;
void* right_value138;
struct list_item$1sTypeph* litem_98;
struct sType* __dec_obj38;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
right_value137 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*));
right_value138 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional140=self->len==0,                _if_conditional140) {
                    # 226 "./neo-c.h"
                    litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_96->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_96->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj36=litem_96->item;
                    litem_96->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_96;
                    # 233 "./neo-c.h"
                    self->head=litem_96;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional141=self->len==1,                    _if_conditional141) {
                        # 236 "./neo-c.h"
                        litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_97->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_97->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj37=litem_97->item;
                        litem_97->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_97;
                        # 243 "./neo-c.h"
                        self->head->next=litem_97;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_98=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_98->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_98->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj38=litem_98->item;
                        litem_98->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_98;
                        # 253 "./neo-c.h"
                        self->tail=litem_98;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result87__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value140;
struct list_item$1charph* litem_99;
char* __dec_obj39;
_Bool _if_conditional143;
void* right_value141;
struct list_item$1charph* litem_100;
char* __dec_obj40;
void* right_value142;
struct list_item$1charph* litem_101;
char* __dec_obj41;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1charph*));
right_value141 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1charph*));
right_value142 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1charph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional142=self->len==0,                _if_conditional142) {
                    # 226 "./neo-c.h"
                    litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value140=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_99->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_99->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj39=litem_99->item;
                    litem_99->item=(char*)come_increment_ref_count(item);
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_99;
                    # 233 "./neo-c.h"
                    self->head=litem_99;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional143=self->len==1,                    _if_conditional143) {
                        # 236 "./neo-c.h"
                        litem_100=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_100->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_100->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj40=litem_100->item;
                        litem_100->item=(char*)come_increment_ref_count(item);
                        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_100;
                        # 243 "./neo-c.h"
                        self->head->next=litem_100;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_101->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_101->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj41=litem_101->item;
                        litem_101->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_101;
                        # 253 "./neo-c.h"
                        self->tail=litem_101;
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
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional148=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional148) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional149=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional149) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional150=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional150) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct sType* right_type2_107;
_Bool _if_conditional152;
void* right_value149;
struct sType* left_type2_108;
_Bool found_match_type_109;
struct list$1sTypeph* o2_saved_110;
struct sType* it_111;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value150;
char* tmp_112;
void* right_value151;
char* __dec_obj45;
void* right_value152;
void* right_value153;
struct sType* __dec_obj46;
_Bool __result95__;
struct sType* left_no_solved_generics_type_116;
struct sType* right_no_solved_generics_type_117;
struct sClass* left_class_118;
struct sClass* right_class_119;
_Bool parent_class_120;
_Bool _if_conditional157;
_Bool _while_condtional29;
_Bool _if_conditional158;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool __result100__;
int i_126;
_Bool _if_conditional177;
void* right_value154;
char* __dec_obj47;
void* right_value155;
struct sType* __dec_obj48;
void* right_value156;
struct sType* __dec_obj49;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool __result101__;
_Bool _if_conditional185;
_Bool __result102__;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool __result103__;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool __result104__;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool __result105__;
void* right_value157;
void* right_value158;
struct buffer* buf2_127;
void* right_value159;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
char* __dec_obj50;
void* right_value165;
struct sType* __dec_obj51;
void* right_value166;
struct sType* __dec_obj52;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool __result106__;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool __result107__;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool __result108__;
void* right_value167;
char* method_name_128;
_Bool _if_conditional227;
struct sType* obj_type_131;
_Bool _if_conditional228;
struct sType* obj_type2_132;
void* right_value168;
void* right_value169;
char* __dec_obj53;
_Bool _if_conditional229;
_Bool __result113__;
void* right_value170;
void* right_value171;
struct buffer* buf2_133;
void* right_value172;
void* right_value173;
struct sType* type_134;
void* right_value174;
void* right_value175;
char* __dec_obj54;
void* right_value176;
struct sType* __dec_obj55;
void* right_value177;
struct sType* __dec_obj56;
_Bool _if_conditional230;
void* right_value178;
char* method_name_135;
_Bool _if_conditional231;
struct sType* obj_type_136;
_Bool _if_conditional232;
struct sType* obj_type2_137;
void* right_value179;
void* right_value180;
char* __dec_obj57;
_Bool _if_conditional233;
_Bool __result114__;
void* right_value181;
void* right_value182;
struct buffer* buf2_138;
void* right_value183;
void* right_value184;
struct sType* type_139;
void* right_value185;
char* __dec_obj58;
void* right_value186;
struct sType* __dec_obj59;
void* right_value187;
struct sType* __dec_obj60;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool __result115__;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool __result116__;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool __result117__;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool __result118__;
_Bool _if_conditional253;
void* right_value188;
char* tmp_140;
void* right_value189;
char* __dec_obj61;
void* right_value190;
struct sType* __dec_obj62;
void* right_value191;
struct sType* __dec_obj63;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool __result119__;
_Bool _if_conditional260;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool __result122__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool __result123__;
_Bool _if_conditional271;
_Bool _if_conditional272;
int i_141;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&right_type2_107, 0, sizeof(struct sType*));
right_value149 = (void*)0;
memset(&left_type2_108, 0, sizeof(struct sType*));
memset(&found_match_type_109, 0, sizeof(_Bool));
memset(&o2_saved_110, 0, sizeof(struct list$1sTypeph*));
memset(&it_111, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&tmp_112, 0, sizeof(char*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&left_no_solved_generics_type_116, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_117, 0, sizeof(struct sType*));
memset(&left_class_118, 0, sizeof(struct sClass*));
memset(&right_class_119, 0, sizeof(struct sClass*));
memset(&parent_class_120, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&buf2_127, 0, sizeof(struct buffer*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&method_name_128, 0, sizeof(char*));
memset(&obj_type_131, 0, sizeof(struct sType*));
memset(&obj_type2_132, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&buf2_133, 0, sizeof(struct buffer*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&type_134, 0, sizeof(struct sType*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&method_name_135, 0, sizeof(char*));
memset(&obj_type_136, 0, sizeof(struct sType*));
memset(&obj_type2_137, 0, sizeof(struct sType*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&buf2_138, 0, sizeof(struct buffer*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&type_139, 0, sizeof(struct sType*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&tmp_140, 0, sizeof(char*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&i_141, 0, sizeof(int));
    # 333 "05function4.c"
    right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 360 "05function4.c"
    # 335 "05function4.c"
    if(_if_conditional152=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional152) {
        # 336 "05function4.c"
        left_type2_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_type))));
        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 337 "05function4.c"
        found_match_type_109=(_Bool)0;
        # 344 "05function4.c"
        for(        o2_saved_110=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_111=list$1sTypeph_begin((o2_saved_110));        !list$1sTypeph_end((o2_saved_110));        it_111=list$1sTypeph_next((o2_saved_110))        ){
            # 342 "05function4.c"
            # 339 "05function4.c"
            if(_if_conditional153=check_assign_type(msg,it_111,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional153) {
                # 340 "05function4.c"
                found_match_type_109=(_Bool)1;
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 351 "05function4.c"
        # 344 "05function4.c"
        if(_if_conditional154=!found_match_type_109,        _if_conditional154) {
            # 345 "05function4.c"
            err_msg(info,"type errorX");
            # 346 "05function4.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 347 "05function4.c"
            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
            # 348 "05function4.c"
            exit(2);
        }
        # 351 "05function4.c"
        tmp_112=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("(void*)%s",come_value->c_value))));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 352 "05function4.c"
        __dec_obj45=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value151=string_clone(tmp_112))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 353 "05function4.c"
        __dec_obj46=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 353, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 354 "05function4.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05function4.c", 354, 0))->mHeap;
        # 355 "05function4.c"
        come_value->var=((void*)0);
        # 357 "05function4.c"
        __result95__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,left_type2_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_112 = come_decrement_ref_count2(tmp_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result95__;
        come_call_finalizer2(sType_finalize,left_type2_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_112 = come_decrement_ref_count2(tmp_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 360 "05function4.c"
    left_no_solved_generics_type_116=left_type->mNoSolvedGenericsType->v1;
    # 361 "05function4.c"
    right_no_solved_generics_type_117=right_type2_107->mNoSolvedGenericsType->v1;
    # 363 "05function4.c"
    left_class_118=left_type->mClass;
    # 364 "05function4.c"
    right_class_119=right_type2_107->mClass;
    # 366 "05function4.c"
    parent_class_120=(_Bool)0;
    # 376 "05function4.c"
    # 367 "05function4.c"
    if(_if_conditional157=string_operator_not_equals(left_class_118->mName,right_class_119->mName),    _if_conditional157) {
        # 374 "05function4.c"
        while(_while_condtional29=left_class_118&&right_class_119,        _while_condtional29) {
            # 372 "05function4.c"
            # 369 "05function4.c"
            if(_if_conditional158=string_operator_equals(left_class_118->mName,right_class_119->mName),            _if_conditional158) {
                # 370 "05function4.c"
                parent_class_120=(_Bool)1;
            }
            # 372 "05function4.c"
            right_class_119=map$2charphsClassphp_operator_load_element(info->classes,right_class_119->mParentClassName);
        }
    }
    # 733 "05function4.c"
    # 376 "05function4.c"
    if(_if_conditional170=left_no_solved_generics_type_116&&right_no_solved_generics_type_117,    _if_conditional170) {
        # 409 "05function4.c"
        # 377 "05function4.c"
        if(_if_conditional171=string_operator_equals(left_type->mClass->mName,right_type2_107->mClass->mName)&&left_type->mPointerNum==right_type2_107->mPointerNum,        _if_conditional171) {
        }
        else {
            # 409 "05function4.c"
            # 379 "05function4.c"
            if(_if_conditional172=string_operator_equals(left_type->mClass->mName,right_type2_107->mClass->mName)&&(left_type->mPointerNum!=right_type2_107->mPointerNum||left_type->mHeap!=right_type2_107->mHeap),            _if_conditional172) {
                # 380 "05function4.c"
                err_msg(info,"poinetr num err");
                # 381 "05function4.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_116->mGenericsTypes),left_no_solved_generics_type_116->mClass->mName,left_type->mClass->mName);
                # 382 "05function4.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_117->mGenericsTypes),right_no_solved_generics_type_117->mClass->mName,right_type2_107->mClass->mName);
                # 383 "05function4.c"
                exit(2);
            }
            else {
                # 409 "05function4.c"
                # 385 "05function4.c"
                if(_if_conditional173=list$1sTypeph_length(left_no_solved_generics_type_116->mGenericsTypes)>0,                _if_conditional173) {
                    # 408 "05function4.c"
                    # 386 "05function4.c"
                    if(_if_conditional174=(string_operator_equals(left_no_solved_generics_type_116->mClass->mName,"void")&&left_no_solved_generics_type_116->mPointerNum>0&&right_no_solved_generics_type_117->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_117->mClass->mName,"void")&&right_no_solved_generics_type_117->mPointerNum>0&&left_no_solved_generics_type_116->mPointerNum>0),                    _if_conditional174) {
                    }
                    else {
                        # 402 "05function4.c"
                        # 390 "05function4.c"
                        if(_if_conditional175=list$1sTypeph_length(left_no_solved_generics_type_116->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_117->mGenericsTypes),                        _if_conditional175) {
                            # 399 "05function4.c"
                            # 392 "05function4.c"
                            if(print_err_msg) {
                                # 393 "05function4.c"
                                err_msg(info,"generics type parametor number error");
                                # 394 "05function4.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_116->mGenericsTypes),left_no_solved_generics_type_116->mClass->mName,left_type->mClass->mName);
                                # 395 "05function4.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_117->mGenericsTypes),right_no_solved_generics_type_117->mClass->mName,right_type2_107->mClass->mName);
                                # 396 "05function4.c"
                                exit(2);
                            }
                            # 399 "05function4.c"
                            __result100__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result100__;
                        }
                        # 406 "05function4.c"
                        for(                        i_126=0;                        i_126<list$1sTypeph_length(left_no_solved_generics_type_116->mGenericsTypes);                        i_126++                        ){
                            # 403 "05function4.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_116->mGenericsTypes,i_126), "05function4.c", 403, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_117->mGenericsTypes,i_126), "05function4.c", 403, 2)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 406 "05function4.c"
                        check_assign_type(msg,left_no_solved_generics_type_116,right_no_solved_generics_type_117,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 733 "05function4.c"
        # 410 "05function4.c"
        if(_if_conditional177=parent_class_120&&left_type->mPointerNum==1&&right_type->mPointerNum==1,        _if_conditional177) {
            # 411 "05function4.c"
            __dec_obj47=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 412 "05function4.c"
            __dec_obj48=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_type))));
            come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 413 "05function4.c"
            come_value->var=((void*)0);
            # 415 "05function4.c"
            __dec_obj49=right_type2_107;
            right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type))));
            come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 733 "05function4.c"
            # 417 "05function4.c"
            if(check_no_pointer) {
                # 465 "05function4.c"
                # 418 "05function4.c"
                if(_if_conditional179=left_type->mPointerNum>0,                _if_conditional179) {
                    # 444 "05function4.c"
                    # 419 "05function4.c"
                    if(_if_conditional180=right_type2_107->mPointerNum>0,                    _if_conditional180) {
                        # 433 "05function4.c"
                        # 420 "05function4.c"
                        if(_if_conditional181=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_107->mClass->mName,"void"),                        _if_conditional181) {
                        }
                        else {
                            # 433 "05function4.c"
                            # 422 "05function4.c"
                            if(_if_conditional182=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                            _if_conditional182) {
                            }
                            else {
                                # 433 "05function4.c"
                                # 424 "05function4.c"
                                if(_if_conditional183=string_operator_not_equals(left_type->mClass->mName,right_type2_107->mClass->mName),                                _if_conditional183) {
                                    # 431 "05function4.c"
                                    # 425 "05function4.c"
                                    if(print_err_msg) {
                                        # 426 "05function4.c"
                                        err_msg(info,"type error1");
                                        # 427 "05function4.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 428 "05function4.c"
                                        printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                        # 429 "05function4.c"
                                        exit(2);
                                    }
                                    # 431 "05function4.c"
                                    __result101__ = (_Bool)0;
                                    come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    return __result101__;
                                }
                            }
                        }
                    }
                    else {
                        # 442 "05function4.c"
                        # 435 "05function4.c"
                        if(print_err_msg) {
                            # 436 "05function4.c"
                            err_msg(info,"type error2");
                            # 437 "05function4.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 438 "05function4.c"
                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                            # 439 "05function4.c"
                            exit(2);
                        }
                        # 442 "05function4.c"
                        __result102__ = (_Bool)0;
                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result102__;
                    }
                }
                else {
                    # 465 "05function4.c"
                    # 445 "05function4.c"
                    if(_if_conditional186=left_type->mPointerNum==0&&right_type2_107->mPointerNum>0,                    _if_conditional186) {
                        # 452 "05function4.c"
                        # 446 "05function4.c"
                        if(print_err_msg) {
                            # 447 "05function4.c"
                            err_msg(info,"type error3");
                            # 448 "05function4.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 449 "05function4.c"
                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                            # 450 "05function4.c"
                            exit(2);
                        }
                        # 452 "05function4.c"
                        __result103__ = (_Bool)0;
                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result103__;
                    }
                    else {
                        # 465 "05function4.c"
                        # 454 "05function4.c"
                        if(_if_conditional188=left_type->mPointerNum>0&&right_type2_107->mPointerNum==0&&string_operator_equals(right_type2_107->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                        _if_conditional188) {
                        }
                        else {
                            # 465 "05function4.c"
                            # 456 "05function4.c"
                            if(_if_conditional189=string_operator_not_equals(left_type->mClass->mName,right_type2_107->mClass->mName),                            _if_conditional189) {
                                # 463 "05function4.c"
                                # 457 "05function4.c"
                                if(print_err_msg) {
                                    # 458 "05function4.c"
                                    err_msg(info,"type error4");
                                    # 459 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 460 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                    # 461 "05function4.c"
                                    exit(2);
                                }
                                # 463 "05function4.c"
                                __result104__ = (_Bool)0;
                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result104__;
                            }
                        }
                    }
                }
            }
            else {
                # 733 "05function4.c"
                # 466 "05function4.c"
                if(_if_conditional191=!left_type->mNullValue&&right_type2_107->mNullValue,                _if_conditional191) {
                    # 491 "05function4.c"
                    # 467 "05function4.c"
                    if(_if_conditional192=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_107->mClass->mName,"__builtin_va_list"),                    _if_conditional192) {
                    }
                    else {
                        # 491 "05function4.c"
                        # 469 "05function4.c"
                        if(_if_conditional193=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                        _if_conditional193) {
                        }
                        else {
                            # 491 "05function4.c"
                            # 471 "05function4.c"
                            if(_if_conditional194=string_operator_equals(right_type2_107->mClass->mName,"void")&&right_type2_107->mPointerNum==0,                            _if_conditional194) {
                                # 478 "05function4.c"
                                # 472 "05function4.c"
                                if(print_err_msg) {
                                    # 473 "05function4.c"
                                    err_msg(info,"type error6");
                                    # 474 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 475 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                    # 476 "05function4.c"
                                    exit(2);
                                }
                                # 478 "05function4.c"
                                __result105__ = (_Bool)0;
                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result105__;
                            }
                            else {
                                # 481 "05function4.c"
                                buf2_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value157=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 481, "buffer"))))))));
                                come_call_finalizer2(buffer_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 483 "05function4.c"
                                buffer_append_str(buf2_127,((char*)(right_value163=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value159=string_to_string(come_value->c_value))),((char*)(right_value160=string_to_string(info->sname))),((char*)(right_value161=int_to_string(info->sline))),((char*)(right_value162=int_to_string(gComeDebugStackFrameID++)))))));
                                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 485 "05function4.c"
                                __dec_obj50=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value164=buffer_to_string(buf2_127))));
                                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 486 "05function4.c"
                                __dec_obj51=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_type))));
                                come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 487 "05function4.c"
                                come_value->var=((void*)0);
                                # 489 "05function4.c"
                                __dec_obj52=right_type2_107;
                                right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_type))));
                                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,buf2_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
                else {
                    # 733 "05function4.c"
                    # 492 "05function4.c"
                    if(_if_conditional196=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                    _if_conditional196) {
                        # 565 "05function4.c"
                        # 493 "05function4.c"
                        if(_if_conditional197=string_operator_equals(right_type2_107->mClass->mName,"integer")&&right_type2_107->mPointerNum==1,                        _if_conditional197) {
                        }
                        else {
                            # 565 "05function4.c"
                            # 495 "05function4.c"
                            if(_if_conditional198=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_107->mClass->mName,"__builtin_va_list"),                            _if_conditional198) {
                            }
                            else {
                                # 565 "05function4.c"
                                # 497 "05function4.c"
                                if(_if_conditional199=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                                _if_conditional199) {
                                }
                                else {
                                    # 565 "05function4.c"
                                    # 499 "05function4.c"
                                    if(_if_conditional200=string_operator_equals(right_type2_107->mClass->mName,"lambda"),                                    _if_conditional200) {
                                        # 506 "05function4.c"
                                        # 500 "05function4.c"
                                        if(print_err_msg) {
                                            # 501 "05function4.c"
                                            err_msg(info,"type error6");
                                            # 502 "05function4.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 503 "05function4.c"
                                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                            # 504 "05function4.c"
                                            exit(2);
                                        }
                                        # 506 "05function4.c"
                                        __result106__ = (_Bool)0;
                                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        return __result106__;
                                    }
                                    else {
                                        # 565 "05function4.c"
                                        # 508 "05function4.c"
                                        if(_if_conditional202=string_operator_equals(right_type2_107->mClass->mName,"void")&&right_type2_107->mPointerNum>0,                                        _if_conditional202) {
                                        }
                                        else {
                                            # 565 "05function4.c"
                                            # 510 "05function4.c"
                                            if(_if_conditional203=string_operator_equals(right_type2_107->mClass->mName,"void"),                                            _if_conditional203) {
                                                # 517 "05function4.c"
                                                # 511 "05function4.c"
                                                if(print_err_msg) {
                                                    # 512 "05function4.c"
                                                    err_msg(info,"type error6");
                                                    # 513 "05function4.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 514 "05function4.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                    # 515 "05function4.c"
                                                    exit(2);
                                                }
                                                # 517 "05function4.c"
                                                __result107__ = (_Bool)0;
                                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                return __result107__;
                                            }
                                            else {
                                                # 565 "05function4.c"
                                                # 519 "05function4.c"
                                                if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_107->mClass->mName,"lambda"),                                                _if_conditional205) {
                                                }
                                                else {
                                                    # 565 "05function4.c"
                                                    # 521 "05function4.c"
                                                    if(_if_conditional206=right_type2_107->mPointerNum>0,                                                    _if_conditional206) {
                                                        # 528 "05function4.c"
                                                        # 522 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 523 "05function4.c"
                                                            err_msg(info,"type error10");
                                                            # 524 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 525 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                            # 526 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 528 "05function4.c"
                                                        __result108__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result108__;
                                                    }
                                                    else {
                                                        # 531 "05function4.c"
                                                        method_name_128=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(right_type2_107,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 548 "05function4.c"
                                                        # 533 "05function4.c"
                                                        if(_if_conditional227=map$2charphsFunph_at(info->funcs,method_name_128,((void*)0))==((void*)0),                                                        _if_conditional227) {
                                                            # 534 "05function4.c"
                                                            obj_type_131=right_type2_107->mNoSolvedGenericsType->v1;
                                                            # 546 "05function4.c"
                                                            # 535 "05function4.c"
                                                            if(_if_conditional228=obj_type_131&&list$1sTypeph_length(obj_type_131->mGenericsTypes)>0,                                                            _if_conditional228) {
                                                                # 536 "05function4.c"
                                                                obj_type2_132=right_type2_107;
                                                                # 537 "05function4.c"
                                                                __dec_obj53=method_name_128;
                                                                method_name_128=(char*)come_increment_ref_count(((char*)(right_value169=make_generics_function(obj_type2_132,(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                # 544 "05function4.c"
                                                                # 540 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 541 "05function4.c"
                                                                    err_msg(info,"require to_string implementation(%s)",right_type2_107->mClass->mName);
                                                                    # 542 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 544 "05function4.c"
                                                                __result113__ = (_Bool)0;
                                                                method_name_128 = come_decrement_ref_count2(method_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                return __result113__;
                                                            }
                                                        }
                                                        # 548 "05function4.c"
                                                        buf2_133=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 548, "buffer"))))))));
                                                        come_call_finalizer2(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 550 "05function4.c"
                                                        buffer_append_str(buf2_133,method_name_128);
                                                        # 551 "05function4.c"
                                                        buffer_append_str(buf2_133,"(");
                                                        # 552 "05function4.c"
                                                        buffer_append_str(buf2_133,come_value->c_value);
                                                        # 553 "05function4.c"
                                                        buffer_append_str(buf2_133,")");
                                                        # 555 "05function4.c"
                                                        type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 555, "sType")))),"integer",(_Bool)0,info))));
                                                        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 556 "05function4.c"
                                                        type_134->mHeap=(_Bool)1;
                                                        # 557 "05function4.c"
                                                        type_134->mPointerNum=1;
                                                        # 559 "05function4.c"
                                                        __dec_obj54=come_value->c_value;
                                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value175=append_object_to_right_values(((char*)(right_value174=buffer_to_string(buf2_133))),(struct sType*)come_increment_ref_count(type_134),info))));
                                                        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 560 "05function4.c"
                                                        __dec_obj55=come_value->type;
                                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type_134))));
                                                        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 561 "05function4.c"
                                                        come_value->var=((void*)0);
                                                        # 563 "05function4.c"
                                                        __dec_obj56=right_type2_107;
                                                        right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(type_134))));
                                                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        method_name_128 = come_decrement_ref_count2(method_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer2(buffer_finalize,buf2_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer2(sType_finalize,type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                        # 733 "05function4.c"
                        # 566 "05function4.c"
                        if(_if_conditional230=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                        _if_conditional230) {
                            # 567 "05function4.c"
                            method_name_135=(char*)come_increment_ref_count(((char*)(right_value178=create_method_name(right_type2_107,(_Bool)0,"to_int",info,(_Bool)1))));
                            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 584 "05function4.c"
                            # 569 "05function4.c"
                            if(_if_conditional231=map$2charphsFunph_at(info->funcs,method_name_135,((void*)0))==((void*)0),                            _if_conditional231) {
                                # 570 "05function4.c"
                                obj_type_136=right_type2_107->mNoSolvedGenericsType->v1;
                                # 582 "05function4.c"
                                # 571 "05function4.c"
                                if(_if_conditional232=obj_type_136&&list$1sTypeph_length(obj_type_136->mGenericsTypes)>0,                                _if_conditional232) {
                                    # 572 "05function4.c"
                                    obj_type2_137=right_type2_107;
                                    # 573 "05function4.c"
                                    __dec_obj57=method_name_135;
                                    method_name_135=(char*)come_increment_ref_count(((char*)(right_value180=make_generics_function(obj_type2_137,(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string("to_int")))),info,(_Bool)1))));
                                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 580 "05function4.c"
                                    # 576 "05function4.c"
                                    if(print_err_msg) {
                                        # 577 "05function4.c"
                                        err_msg(info,"require to_string implementation(%s)",right_type2_107->mClass->mName);
                                        # 578 "05function4.c"
                                        exit(1);
                                    }
                                    # 580 "05function4.c"
                                    __result114__ = (_Bool)0;
                                    method_name_135 = come_decrement_ref_count2(method_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    return __result114__;
                                }
                            }
                            # 584 "05function4.c"
                            buf2_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 584, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 586 "05function4.c"
                            buffer_append_str(buf2_138,method_name_135);
                            # 587 "05function4.c"
                            buffer_append_str(buf2_138,"(");
                            # 588 "05function4.c"
                            buffer_append_str(buf2_138,come_value->c_value);
                            # 589 "05function4.c"
                            buffer_append_str(buf2_138,")");
                            # 591 "05function4.c"
                            type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 591, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 593 "05function4.c"
                            __dec_obj58=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value185=buffer_to_string(buf2_138))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 594 "05function4.c"
                            __dec_obj59=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(type_139))));
                            come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 595 "05function4.c"
                            come_value->var=((void*)0);
                            # 597 "05function4.c"
                            __dec_obj60=right_type2_107;
                            right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(type_139))));
                            come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            method_name_135 = come_decrement_ref_count2(method_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 733 "05function4.c"
                            # 599 "05function4.c"
                            if(_if_conditional234=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                            _if_conditional234) {
                                # 636 "05function4.c"
                                # 600 "05function4.c"
                                if(_if_conditional235=string_operator_equals(right_type2_107->mClass->mName,"char")&&right_type2_107->mPointerNum==1,                                _if_conditional235) {
                                }
                                else {
                                    # 636 "05function4.c"
                                    # 602 "05function4.c"
                                    if(_if_conditional236=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_107->mClass->mName,"__builtin_va_list"),                                    _if_conditional236) {
                                    }
                                    else {
                                        # 636 "05function4.c"
                                        # 604 "05function4.c"
                                        if(_if_conditional237=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                                        _if_conditional237) {
                                        }
                                        else {
                                            # 636 "05function4.c"
                                            # 606 "05function4.c"
                                            if(_if_conditional238=string_operator_equals(right_type2_107->mClass->mName,"lambda"),                                            _if_conditional238) {
                                                # 614 "05function4.c"
                                                # 607 "05function4.c"
                                                if(print_err_msg) {
                                                    # 608 "05function4.c"
                                                    err_msg(info,"type error6");
                                                    # 609 "05function4.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 610 "05function4.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                    # 611 "05function4.c"
                                                    exit(2);
                                                }
                                                # 614 "05function4.c"
                                                __result115__ = (_Bool)0;
                                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                return __result115__;
                                            }
                                            else {
                                                # 636 "05function4.c"
                                                # 616 "05function4.c"
                                                if(_if_conditional240=string_operator_equals(right_type2_107->mClass->mName,"void")&&right_type2_107->mPointerNum>0,                                                _if_conditional240) {
                                                }
                                                else {
                                                    # 636 "05function4.c"
                                                    # 618 "05function4.c"
                                                    if(_if_conditional241=string_operator_equals(right_type2_107->mClass->mName,"void"),                                                    _if_conditional241) {
                                                        # 625 "05function4.c"
                                                        # 619 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 620 "05function4.c"
                                                            err_msg(info,"type error6");
                                                            # 621 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 622 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                            # 623 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 625 "05function4.c"
                                                        __result116__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result116__;
                                                    }
                                                    else {
                                                        # 636 "05function4.c"
                                                        # 627 "05function4.c"
                                                        if(_if_conditional243=string_operator_not_equals(left_type->mClass->mName,right_type2_107->mClass->mName),                                                        _if_conditional243) {
                                                            # 634 "05function4.c"
                                                            # 628 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 629 "05function4.c"
                                                                err_msg(info,"type error5");
                                                                # 630 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 631 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                                # 632 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 634 "05function4.c"
                                                            __result117__ = (_Bool)0;
                                                            come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result117__;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 733 "05function4.c"
                                # 637 "05function4.c"
                                if(_if_conditional245=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                                _if_conditional245) {
                                    # 665 "05function4.c"
                                    # 638 "05function4.c"
                                    if(_if_conditional246=string_operator_equals(right_type2_107->mClass->mName,"void")&&right_type2_107->mPointerNum==1,                                    _if_conditional246) {
                                    }
                                    else {
                                        # 665 "05function4.c"
                                        # 640 "05function4.c"
                                        if(_if_conditional247=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_107->mClass->mName,"__builtin_va_list"),                                        _if_conditional247) {
                                        }
                                        else {
                                            # 665 "05function4.c"
                                            # 642 "05function4.c"
                                            if(_if_conditional248=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                                            _if_conditional248) {
                                            }
                                            else {
                                                # 665 "05function4.c"
                                                # 644 "05function4.c"
                                                if(_if_conditional249=string_operator_equals(right_type2_107->mClass->mName,"lambda"),                                                _if_conditional249) {
                                                }
                                                else {
                                                    # 665 "05function4.c"
                                                    # 646 "05function4.c"
                                                    if(_if_conditional250=string_operator_equals(right_type2_107->mClass->mName,"void")&&right_type2_107->mPointerNum>0,                                                    _if_conditional250) {
                                                    }
                                                    else {
                                                        # 665 "05function4.c"
                                                        # 648 "05function4.c"
                                                        if(_if_conditional251=string_operator_equals(right_type2_107->mClass->mName,"void"),                                                        _if_conditional251) {
                                                            # 655 "05function4.c"
                                                            # 649 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 650 "05function4.c"
                                                                err_msg(info,"type error6");
                                                                # 651 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 652 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                                # 653 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 655 "05function4.c"
                                                            __result118__ = (_Bool)0;
                                                            come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result118__;
                                                        }
                                                        else {
                                                            # 665 "05function4.c"
                                                            # 657 "05function4.c"
                                                            if(_if_conditional253=right_type2_107->mPointerNum==0,                                                            _if_conditional253) {
                                                                # 658 "05function4.c"
                                                                tmp_140=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("(void*)%s",come_value->c_value))));
                                                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 659 "05function4.c"
                                                                __dec_obj61=come_value->c_value;
                                                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(tmp_140))));
                                                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 660 "05function4.c"
                                                                __dec_obj62=come_value->type;
                                                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(left_type))));
                                                                come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 661 "05function4.c"
                                                                come_value->var=((void*)0);
                                                                # 663 "05function4.c"
                                                                __dec_obj63=right_type2_107;
                                                                right_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_type))));
                                                                come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                tmp_140 = come_decrement_ref_count2(tmp_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 733 "05function4.c"
                                    # 666 "05function4.c"
                                    if(_if_conditional254=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                    _if_conditional254) {
                                        # 720 "05function4.c"
                                        # 667 "05function4.c"
                                        if(_if_conditional255=right_type2_107->mPointerNum>0||(right_type2_107->mPointerNum==0&&right_type2_107->mClass->mStruct),                                        _if_conditional255) {
                                            # 691 "05function4.c"
                                            # 668 "05function4.c"
                                            if(_if_conditional256=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_107->mClass->mName,"void"),                                            _if_conditional256) {
                                            }
                                            else {
                                                # 691 "05function4.c"
                                                # 670 "05function4.c"
                                                if(_if_conditional257=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                                                _if_conditional257) {
                                                }
                                                else {
                                                    # 691 "05function4.c"
                                                    # 672 "05function4.c"
                                                    if(_if_conditional258=string_operator_not_equals(left_type->mClass->mName,right_type2_107->mClass->mName),                                                    _if_conditional258) {
                                                        # 679 "05function4.c"
                                                        # 673 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 674 "05function4.c"
                                                            err_msg(info,"type error5");
                                                            # 675 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 676 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                            # 677 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 679 "05function4.c"
                                                        __result119__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result119__;
                                                    }
                                                    else {
                                                        # 691 "05function4.c"
                                                        # 681 "05function4.c"
                                                        if(_if_conditional260=left_type->mPointerNum!=right_type2_107->mPointerNum,                                                        _if_conditional260) {
                                                            # 682 "05function4.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 683 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 684 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                        }
                                                        else {
                                                            # 691 "05function4.c"
                                                            # 686 "05function4.c"
                                                            if(_if_conditional262=list$1sNodeph_length(right_type2_107->mArrayNum)>0,                                                            _if_conditional262) {
                                                                # 687 "05function4.c"
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                # 688 "05function4.c"
                                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                # 689 "05function4.c"
                                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum,list$1sNodeph_length(right_type2_107->mArrayNum));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            # 720 "05function4.c"
                                            # 692 "05function4.c"
                                            if(_if_conditional263=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_107->mClass->mName,"void"),                                            _if_conditional263) {
                                            }
                                            else {
                                                # 720 "05function4.c"
                                                # 694 "05function4.c"
                                                if(_if_conditional264=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_107->mClass->mName,"va_list"),                                                _if_conditional264) {
                                                }
                                                else {
                                                    # 720 "05function4.c"
                                                    # 696 "05function4.c"
                                                    if(_if_conditional265=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_107->mClass->mName,"__builtin_va_list"),                                                    _if_conditional265) {
                                                    }
                                                    else {
                                                        # 720 "05function4.c"
                                                        # 698 "05function4.c"
                                                        if(_if_conditional266=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_107->mClass->mName,"lambda"),                                                        _if_conditional266) {
                                                        }
                                                        else {
                                                            # 720 "05function4.c"
                                                            # 700 "05function4.c"
                                                            if(_if_conditional267=left_type->mPointerNum>0&&right_type2_107->mPointerNum==0&&string_operator_equals(right_type2_107->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                            _if_conditional267) {
                                                                # 708 "05function4.c"
                                                                # 701 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 702 "05function4.c"
                                                                    err_msg(info,"type error10");
                                                                    # 703 "05function4.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 704 "05function4.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                                    # 705 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 708 "05function4.c"
                                                                __result122__ = (_Bool)0;
                                                                come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                return __result122__;
                                                            }
                                                            else {
                                                                # 720 "05function4.c"
                                                                # 710 "05function4.c"
                                                                if(_if_conditional269=!(string_operator_equals(right_type2_107->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_107->mPointerNum==0,                                                                _if_conditional269) {
                                                                    # 717 "05function4.c"
                                                                    # 711 "05function4.c"
                                                                    if(print_err_msg) {
                                                                        # 712 "05function4.c"
                                                                        err_msg(info,"type error6");
                                                                        # 713 "05function4.c"
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        # 714 "05function4.c"
                                                                        printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                                        # 715 "05function4.c"
                                                                        exit(2);
                                                                    }
                                                                    # 717 "05function4.c"
                                                                    __result123__ = (_Bool)0;
                                                                    come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    return __result123__;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        # 731 "05function4.c"
                                        # 720 "05function4.c"
                                        if(_if_conditional271=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                        _if_conditional271) {
                                            # 727 "05function4.c"
                                            # 721 "05function4.c"
                                            if(_if_conditional272=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_107->mGenericsTypes),                                            _if_conditional272) {
                                                # 722 "05function4.c"
                                                err_msg(info,"generics type number error");
                                                # 723 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 724 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_107->mClass->mName,right_type2_107->mPointerNum);
                                                # 725 "05function4.c"
                                                exit(2);
                                            }
                                            # 730 "05function4.c"
                                            for(                                            i_141=0;                                            i_141<list$1sTypeph_length(left_type->mGenericsTypes);                                            i_141++                                            ){
                                                # 728 "05function4.c"
                                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_141), "05function4.c", 728, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_107->mGenericsTypes,i_141), "05function4.c", 728, 4)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 733 "05function4.c"
    __result124__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sType_finalize,right_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional151;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional151=self==((void*)0),        _if_conditional151) {
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
_Bool _if_conditional155;
struct list_item$1sTypeph* it_113;
int i_114;
_Bool _while_condtional28;
_Bool _if_conditional156;
struct sType* __result93__;
struct sType* default_value_115;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_114, 0, sizeof(int));
memset(&default_value_115, 0, sizeof(struct sType*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional155=position<0,            _if_conditional155) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_113=self->head;
            # 687 "./neo-c.h"
            i_114=0;
            # 694 "./neo-c.h"
            while(_while_condtional28=it_113!=((void*)0),            _while_condtional28) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional156=position==i_114,                _if_conditional156) {
                    # 690 "./neo-c.h"
                    __result93__ = __result_obj__ = it_113->item;
                    return __result93__;
                }
                # 692 "./neo-c.h"
                it_113=it_113->next;
                # 693 "./neo-c.h"
                i_114++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_115,0,sizeof(struct sType*));
            # 698 "./neo-c.h"
            __result94__ = __result_obj__ = default_value_115;
            come_call_finalizer2(sType_finalize,default_value_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result94__;
            come_call_finalizer2(sType_finalize,default_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_121;
unsigned int hash_122;
unsigned int it_123;
_Bool _while_condtional30;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct sClass* __result96__;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sClass* __result97__;
struct sClass* __result98__;
struct sClass* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_121, 0, sizeof(struct sClass*));
memset(&hash_122, 0, sizeof(unsigned int));
memset(&it_123, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_121,0,sizeof(struct sClass*));
                # 1547 "./neo-c.h"
                hash_122=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_123=hash_122;
                # 1572 "./neo-c.h"
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional159=self->item_existance[it_123],                    _if_conditional159) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional160=string_equals(self->keys[it_123],key),                        _if_conditional160) {
                            # 1555 "./neo-c.h"
                            __result96__ = __result_obj__ = self->items[it_123];
                            come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result96__;
                        }
                        # 1558 "./neo-c.h"
                        it_123++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional168=it_123>=self->size,                        _if_conditional168) {
                            # 1561 "./neo-c.h"
                            it_123=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional169=it_123==hash_122,                            _if_conditional169) {
                                # 1564 "./neo-c.h"
                                __result97__ = __result_obj__ = default_value_121;
                                come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result97__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result98__ = __result_obj__ = default_value_121;
                        come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                    }
                }
                # 1572 "./neo-c.h"
                __result99__ = __result_obj__ = default_value_121;
                come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result99__;
                come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional166;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sClass_finalize"
                                # 0 "sClass_finalize"
                                if(_if_conditional161=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional161) {
                                    # 0 "sClass_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sClass_finalize"
                                # 1 "sClass_finalize"
                                if(_if_conditional162=self!=((void*)0)&&self->mFields!=((void*)0),                                _if_conditional162) {
                                    # 1 "sClass_finalize"
                                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sClass_finalize"
                                # 2 "sClass_finalize"
                                if(_if_conditional166=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional166) {
                                    # 2 "sClass_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sClass_finalize"
                                # 3 "sClass_finalize"
                                if(_if_conditional167=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                _if_conditional167) {
                                    # 3 "sClass_finalize"
                                    self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_124;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_124, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_125, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 123 "./neo-c.h"
                                        it_124=self->head;
                                        # 129 "./neo-c.h"
                                        while(_while_condtional31=it_124!=((void*)0),                                        _while_condtional31) {
                                            # 125 "./neo-c.h"
                                            prev_it_125=it_124;
                                            # 126 "./neo-c.h"
                                            it_124=it_124->next;
                                            # 127 "./neo-c.h"
                                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                if(_if_conditional163=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional163) {
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                        # 0 "tuple2$2charphsTypephp_finalize"
                                                        if(_if_conditional164=self!=((void*)0)&&self->v1!=((void*)0),                                                        _if_conditional164) {
                                                            # 0 "tuple2$2charphsTypephp_finalize"
                                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "tuple2$2charphsTypephp_finalize"
                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                        if(_if_conditional165=self!=((void*)0)&&self->v2!=((void*)0),                                                        _if_conditional165) {
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_129;
unsigned int it_130;
_Bool _while_condtional32;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sFun* __result109__;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_129, 0, sizeof(unsigned int));
memset(&it_130, 0, sizeof(unsigned int));
                                                            # 1226 "./neo-c.h"
                                                            hash_129=string_get_hash_key(((char*)key))%self->size;
                                                            # 1227 "./neo-c.h"
                                                            it_130=hash_129;
                                                            # 1251 "./neo-c.h"
                                                            while(_while_condtional32=(_Bool)1,                                                            _while_condtional32) {
                                                                # 1249 "./neo-c.h"
                                                                # 1230 "./neo-c.h"
                                                                if(_if_conditional208=self->item_existance[it_130],                                                                _if_conditional208) {
                                                                    # 1237 "./neo-c.h"
                                                                    # 1232 "./neo-c.h"
                                                                    if(_if_conditional209=string_equals(self->keys[it_130],key),                                                                    _if_conditional209) {
                                                                        # 1234 "./neo-c.h"
                                                                        __result109__ = __result_obj__ = self->items[it_130];
                                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result109__;
                                                                    }
                                                                    # 1237 "./neo-c.h"
                                                                    it_130++;
                                                                    # 1245 "./neo-c.h"
                                                                    # 1239 "./neo-c.h"
                                                                    if(_if_conditional225=it_130>=self->size,                                                                    _if_conditional225) {
                                                                        # 1240 "./neo-c.h"
                                                                        it_130=0;
                                                                    }
                                                                    else {
                                                                        # 1245 "./neo-c.h"
                                                                        # 1242 "./neo-c.h"
                                                                        if(_if_conditional226=it_130==hash_129,                                                                        _if_conditional226) {
                                                                            # 1243 "./neo-c.h"
                                                                            __result110__ = __result_obj__ = default_value;
                                                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result110__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1247 "./neo-c.h"
                                                                    __result111__ = __result_obj__ = default_value;
                                                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result111__;
                                                                }
                                                            }
                                                            # 1251 "./neo-c.h"
                                                            __result112__ = __result_obj__ = default_value;
                                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result112__;
                                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
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
                                                                            # 1 "sFun_finalize"
                                                                            # 0 "sFun_finalize"
                                                                            if(_if_conditional210=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional210) {
                                                                                # 0 "sFun_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sFun_finalize"
                                                                            # 1 "sFun_finalize"
                                                                            if(_if_conditional211=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                            _if_conditional211) {
                                                                                # 1 "sFun_finalize"
                                                                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sFun_finalize"
                                                                            # 2 "sFun_finalize"
                                                                            if(_if_conditional212=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                            _if_conditional212) {
                                                                                # 2 "sFun_finalize"
                                                                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sFun_finalize"
                                                                            # 3 "sFun_finalize"
                                                                            if(_if_conditional213=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                            _if_conditional213) {
                                                                                # 3 "sFun_finalize"
                                                                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 5 "sFun_finalize"
                                                                            # 4 "sFun_finalize"
                                                                            if(_if_conditional214=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                            _if_conditional214) {
                                                                                # 4 "sFun_finalize"
                                                                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 6 "sFun_finalize"
                                                                            # 5 "sFun_finalize"
                                                                            if(_if_conditional215=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                            _if_conditional215) {
                                                                                # 5 "sFun_finalize"
                                                                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 7 "sFun_finalize"
                                                                            # 6 "sFun_finalize"
                                                                            if(_if_conditional216=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                            _if_conditional216) {
                                                                                # 6 "sFun_finalize"
                                                                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 8 "sFun_finalize"
                                                                            # 7 "sFun_finalize"
                                                                            if(_if_conditional219=self!=((void*)0)&&self->mSource!=((void*)0),                                                                            _if_conditional219) {
                                                                                # 7 "sFun_finalize"
                                                                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 9 "sFun_finalize"
                                                                            # 8 "sFun_finalize"
                                                                            if(_if_conditional220=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                            _if_conditional220) {
                                                                                # 8 "sFun_finalize"
                                                                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 10 "sFun_finalize"
                                                                            # 9 "sFun_finalize"
                                                                            if(_if_conditional221=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                            _if_conditional221) {
                                                                                # 9 "sFun_finalize"
                                                                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 11 "sFun_finalize"
                                                                            # 10 "sFun_finalize"
                                                                            if(_if_conditional222=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                            _if_conditional222) {
                                                                                # 10 "sFun_finalize"
                                                                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 12 "sFun_finalize"
                                                                            # 11 "sFun_finalize"
                                                                            if(_if_conditional223=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                            _if_conditional223) {
                                                                                # 11 "sFun_finalize"
                                                                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 13 "sFun_finalize"
                                                                            # 12 "sFun_finalize"
                                                                            if(_if_conditional224=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional224) {
                                                                                # 12 "sFun_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sBlock_finalize"
                                                                                    # 0 "sBlock_finalize"
                                                                                    if(_if_conditional217=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                    _if_conditional217) {
                                                                                        # 0 "sBlock_finalize"
                                                                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sBlock_finalize"
                                                                                    # 1 "sBlock_finalize"
                                                                                    if(_if_conditional218=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                    _if_conditional218) {
                                                                                        # 1 "sBlock_finalize"
                                                                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional261;
int __result120__;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 367 "./neo-c.h"
                                                                # 364 "./neo-c.h"
                                                                if(_if_conditional261=self==((void*)0),                                                                _if_conditional261) {
                                                                    # 365 "./neo-c.h"
                                                                    __result120__ = 0;
                                                                    return __result120__;
                                                                }
                                                                # 367 "./neo-c.h"
                                                                __result121__ = self->len;
                                                                return __result121__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value192;
struct sType* right_type2_142;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value193;
char* method_name_143;
_Bool _if_conditional282;
struct sType* obj_type_144;
_Bool _if_conditional283;
struct sType* obj_type2_145;
void* right_value194;
void* right_value195;
char* __dec_obj64;
void* right_value196;
void* right_value197;
struct buffer* buf2_146;
void* right_value198;
void* right_value199;
struct sType* type_147;
void* right_value200;
void* right_value201;
char* __dec_obj65;
void* right_value202;
struct sType* __dec_obj66;
void* right_value203;
struct sType* __dec_obj67;
_Bool _if_conditional284;
void* right_value204;
char* method_name_148;
_Bool _if_conditional285;
struct sType* obj_type_149;
_Bool _if_conditional286;
struct sType* obj_type2_150;
void* right_value205;
void* right_value206;
char* __dec_obj68;
void* right_value207;
void* right_value208;
struct buffer* buf2_151;
void* right_value209;
void* right_value210;
struct sType* type_152;
void* right_value211;
char* __dec_obj69;
void* right_value212;
struct sType* __dec_obj70;
void* right_value213;
struct sType* __dec_obj71;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
memset(&right_type2_142, 0, sizeof(struct sType*));
right_value193 = (void*)0;
memset(&method_name_143, 0, sizeof(char*));
memset(&obj_type_144, 0, sizeof(struct sType*));
memset(&obj_type2_145, 0, sizeof(struct sType*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&buf2_146, 0, sizeof(struct buffer*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&type_147, 0, sizeof(struct sType*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&method_name_148, 0, sizeof(char*));
memset(&obj_type_149, 0, sizeof(struct sType*));
memset(&obj_type2_150, 0, sizeof(struct sType*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&buf2_151, 0, sizeof(struct buffer*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&type_152, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
    # 738 "05function4.c"
    right_type2_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 819 "05function4.c"
    # 739 "05function4.c"
    if(_if_conditional273=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional273) {
        # 788 "05function4.c"
        # 740 "05function4.c"
        if(_if_conditional274=string_operator_equals(right_type2_142->mClass->mName,"integer")&&right_type2_142->mPointerNum==1,        _if_conditional274) {
        }
        else {
            # 788 "05function4.c"
            # 742 "05function4.c"
            if(_if_conditional275=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_142->mClass->mName,"__builtin_va_list"),            _if_conditional275) {
            }
            else {
                # 788 "05function4.c"
                # 744 "05function4.c"
                if(_if_conditional276=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_142->mClass->mName,"va_list"),                _if_conditional276) {
                }
                else {
                    # 788 "05function4.c"
                    # 746 "05function4.c"
                    if(_if_conditional277=string_operator_equals(right_type2_142->mClass->mName,"lambda"),                    _if_conditional277) {
                    }
                    else {
                        # 788 "05function4.c"
                        # 748 "05function4.c"
                        if(_if_conditional278=string_operator_equals(right_type2_142->mClass->mName,"void")&&right_type2_142->mPointerNum>0,                        _if_conditional278) {
                        }
                        else {
                            # 788 "05function4.c"
                            # 750 "05function4.c"
                            if(_if_conditional279=string_operator_equals(right_type2_142->mClass->mName,"void"),                            _if_conditional279) {
                            }
                            else {
                                # 788 "05function4.c"
                                # 752 "05function4.c"
                                if(_if_conditional280=left_type->mPointerNum>0&&right_type2_142->mPointerNum==0&&string_operator_equals(right_type2_142->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional280) {
                                }
                                else {
                                    # 788 "05function4.c"
                                    # 754 "05function4.c"
                                    if(_if_conditional281=right_type->mPointerNum>0,                                    _if_conditional281) {
                                    }
                                    else {
                                        # 757 "05function4.c"
                                        method_name_143=(char*)come_increment_ref_count(((char*)(right_value193=create_method_name(right_type2_142,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 771 "05function4.c"
                                        # 759 "05function4.c"
                                        if(_if_conditional282=map$2charphsFunph_at(info->funcs,method_name_143,((void*)0))==((void*)0),                                        _if_conditional282) {
                                            # 760 "05function4.c"
                                            obj_type_144=right_type2_142->mNoSolvedGenericsType->v1;
                                            # 769 "05function4.c"
                                            # 761 "05function4.c"
                                            if(_if_conditional283=obj_type_144&&list$1sTypeph_length(obj_type_144->mGenericsTypes)>0,                                            _if_conditional283) {
                                                # 762 "05function4.c"
                                                obj_type2_145=right_type2_142;
                                                # 763 "05function4.c"
                                                __dec_obj64=method_name_143;
                                                method_name_143=(char*)come_increment_ref_count(((char*)(right_value195=make_generics_function(obj_type2_145,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 766 "05function4.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_142->mClass->mName);
                                                # 767 "05function4.c"
                                                exit(1);
                                            }
                                        }
                                        # 771 "05function4.c"
                                        buf2_146=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 771, "buffer"))))))));
                                        come_call_finalizer2(buffer_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 773 "05function4.c"
                                        buffer_append_str(buf2_146,method_name_143);
                                        # 774 "05function4.c"
                                        buffer_append_str(buf2_146,"(");
                                        # 775 "05function4.c"
                                        buffer_append_str(buf2_146,come_value->c_value);
                                        # 776 "05function4.c"
                                        buffer_append_str(buf2_146,")");
                                        # 778 "05function4.c"
                                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 778, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 779 "05function4.c"
                                        type_147->mHeap=(_Bool)1;
                                        # 780 "05function4.c"
                                        type_147->mPointerNum=1;
                                        # 782 "05function4.c"
                                        __dec_obj65=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value201=append_object_to_right_values(((char*)(right_value200=buffer_to_string(buf2_146))),(struct sType*)come_increment_ref_count(type_147),info))));
                                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 783 "05function4.c"
                                        __dec_obj66=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type_147))));
                                        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 784 "05function4.c"
                                        come_value->var=((void*)0);
                                        # 786 "05function4.c"
                                        __dec_obj67=right_type2_142;
                                        right_type2_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type_147))));
                                        come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        method_name_143 = come_decrement_ref_count2(method_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,buf2_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 819 "05function4.c"
        # 789 "05function4.c"
        if(_if_conditional284=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional284) {
            # 790 "05function4.c"
            method_name_148=(char*)come_increment_ref_count(((char*)(right_value204=create_method_name(right_type2_142,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 804 "05function4.c"
            # 792 "05function4.c"
            if(_if_conditional285=map$2charphsFunph_at(info->funcs,method_name_148,((void*)0))==((void*)0),            _if_conditional285) {
                # 793 "05function4.c"
                obj_type_149=right_type2_142->mNoSolvedGenericsType->v1;
                # 802 "05function4.c"
                # 794 "05function4.c"
                if(_if_conditional286=obj_type_149&&list$1sTypeph_length(obj_type_149->mGenericsTypes)>0,                _if_conditional286) {
                    # 795 "05function4.c"
                    obj_type2_150=right_type2_142;
                    # 796 "05function4.c"
                    __dec_obj68=method_name_148;
                    method_name_148=(char*)come_increment_ref_count(((char*)(right_value206=make_generics_function(obj_type2_150,(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 799 "05function4.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_142->mClass->mName);
                    # 800 "05function4.c"
                    exit(1);
                }
            }
            # 804 "05function4.c"
            buf2_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value208=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value207=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 804, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 806 "05function4.c"
            buffer_append_str(buf2_151,method_name_148);
            # 807 "05function4.c"
            buffer_append_str(buf2_151,"(");
            # 808 "05function4.c"
            buffer_append_str(buf2_151,come_value->c_value);
            # 809 "05function4.c"
            buffer_append_str(buf2_151,")");
            # 811 "05function4.c"
            type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 811, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 813 "05function4.c"
            __dec_obj69=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value211=buffer_to_string(buf2_151))));
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 814 "05function4.c"
            __dec_obj70=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(type_152))));
            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 815 "05function4.c"
            come_value->var=((void*)0);
            # 817 "05function4.c"
            __dec_obj71=right_type2_142;
            right_type2_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(type_152))));
            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(sType_finalize,right_type2_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value214;
struct sType* result_type_153;
_Bool _if_conditional287;
char* var_name_154;
char* p_155;
int sline_156;
_Bool _if_conditional288;
void* right_value215;
char* __exception_result_var_b1;
char* word_157;
_Bool _if_conditional289;
_Bool between_brace_158;
char* p_159;
int sline_160;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value216;
char* __exception_result_var_b2;
char* word_161;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _while_condtional33;
char* p_162;
int sline_163;
_Bool _if_conditional295;
void* right_value217;
char* __exception_result_var_b3;
char* word_164;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value218;
char* __exception_result_var_b4;
char* __dec_obj72;
static int num_anonymous_var_name_165=0;
void* right_value219;
char* __dec_obj73;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool no_comma_166;
void* right_value220;
struct sNode* node_167;
struct sNode* __dec_obj74;
_Bool _while_condtional34;
char* p_168;
int sline_169;
_Bool _if_conditional301;
void* right_value221;
char* __exception_result_var_b5;
char* word_170;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value222;
struct sNode* node_171;
void* right_value226;
void* right_value227;
struct tuple2$2sTypephcharph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
memset(&result_type_153, 0, sizeof(struct sType*));
memset(&var_name_154, 0, sizeof(char*));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
right_value215 = (void*)0;
memset(&word_157, 0, sizeof(char*));
memset(&between_brace_158, 0, sizeof(_Bool));
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value216 = (void*)0;
memset(&word_161, 0, sizeof(char*));
memset(&p_162, 0, sizeof(char*));
memset(&sline_163, 0, sizeof(int));
right_value217 = (void*)0;
memset(&word_164, 0, sizeof(char*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&no_comma_166, 0, sizeof(_Bool));
right_value220 = (void*)0;
memset(&node_167, 0, sizeof(struct sNode*));
memset(&p_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
right_value221 = (void*)0;
memset(&word_170, 0, sizeof(char*));
right_value222 = (void*)0;
memset(&node_171, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
right_value227 = (void*)0;
    # 823 "05function4.c"
    result_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 827 "05function4.c"
    # 824 "05function4.c"
    if(_if_conditional287=!first,    _if_conditional287) {
        # 825 "05function4.c"
        result_type_153->mPointerNum=0;
    }
    # 827 "05function4.c"
    var_name_154=((void*)0);
    # 849 "05function4.c"
    {
        # 830 "05function4.c"
        p_155=info->p;
        # 831 "05function4.c"
        sline_156=info->sline;
        # 847 "05function4.c"
        # 833 "05function4.c"
        if(_if_conditional288=xisalpha(*info->p)||*info->p==95,        _if_conditional288) {
            # 834 "05function4.c"
            word_157=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 834, 5),__exception_result_var_b1=((char*)(right_value215=parse_word(info))), come_pop_stackframe(), __exception_result_var_b1));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 842 "05function4.c"
            # 836 "05function4.c"
            if(_if_conditional289=string_operator_equals(word_157,"const")||string_operator_equals(word_157,"__restrict")||string_operator_equals(word_157,"restrict")||string_operator_equals(word_157,"__user")||string_operator_equals(word_157,"volatile")||string_operator_equals(word_157,"_Nonnull")||string_operator_equals(word_157,"_Nullable")||string_operator_equals(word_157,"_Null_unspecified")||string_operator_equals(word_157,"__user")||string_operator_equals(word_157,"_Addr"),            _if_conditional289) {
            }
            else {
                # 839 "05function4.c"
                info->p=p_155;
                # 840 "05function4.c"
                info->sline=sline_156;
            }
            word_157 = come_decrement_ref_count2(word_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 844 "05function4.c"
            info->p=p_155;
            # 845 "05function4.c"
            info->sline=sline_156;
        }
    }
    # 849 "05function4.c"
    between_brace_158=(_Bool)0;
    # 878 "05function4.c"
    {
        # 851 "05function4.c"
        p_159=info->p;
        # 852 "05function4.c"
        sline_160=info->sline;
        # 874 "05function4.c"
        # 854 "05function4.c"
        if(_if_conditional290=*info->p==40,        _if_conditional290) {
            # 855 "05function4.c"
            info->p++;
            # 856 "05function4.c"
            skip_spaces_and_lf(info);
            # 872 "05function4.c"
            # 858 "05function4.c"
            if(_if_conditional291=xisalpha(*info->p)||*info->p==95,            _if_conditional291) {
                # 859 "05function4.c"
                word_161=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 859, 6),__exception_result_var_b2=((char*)(right_value216=parse_word(info))), come_pop_stackframe(), __exception_result_var_b2));
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 871 "05function4.c"
                # 861 "05function4.c"
                if(_if_conditional292=is_type_name(word_161,info),                _if_conditional292) {
                }
                else {
                    # 871 "05function4.c"
                    # 863 "05function4.c"
                    if(_if_conditional293=*info->p==41,                    _if_conditional293) {
                        # 864 "05function4.c"
                        info->p++;
                        # 865 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 870 "05function4.c"
                        # 867 "05function4.c"
                        if(_if_conditional294=*info->p!=40,                        _if_conditional294) {
                            # 868 "05function4.c"
                            between_brace_158=(_Bool)1;
                        }
                    }
                }
                word_161 = come_decrement_ref_count2(word_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 874 "05function4.c"
        info->p=p_159;
        # 875 "05function4.c"
        info->sline=sline_160;
    }
    # 878 "05function4.c"
    parse_sharp_v5(info);
    # 905 "05function4.c"
    while(_while_condtional33=*info->p==42,    _while_condtional33) {
        # 880 "05function4.c"
        info->p++;
        # 881 "05function4.c"
        skip_spaces_and_lf(info);
        # 903 "05function4.c"
        {
            # 884 "05function4.c"
            p_162=info->p;
            # 885 "05function4.c"
            sline_163=info->sline;
            # 901 "05function4.c"
            # 887 "05function4.c"
            if(_if_conditional295=xisalpha(*info->p)||*info->p==95,            _if_conditional295) {
                # 888 "05function4.c"
                word_164=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 888, 7),__exception_result_var_b3=((char*)(right_value217=parse_word(info))), come_pop_stackframe(), __exception_result_var_b3));
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 896 "05function4.c"
                # 890 "05function4.c"
                if(_if_conditional296=string_operator_equals(word_164,"const")||string_operator_equals(word_164,"__restrict")||string_operator_equals(word_164,"restrict")||string_operator_equals(word_164,"__user")||string_operator_equals(word_164,"volatile")||string_operator_equals(word_164,"_Nonnull")||string_operator_equals(word_164,"_Nullable")||string_operator_equals(word_164,"_Null_unspecified")||string_operator_equals(word_164,"__user")||string_operator_equals(word_164,"_Addr"),                _if_conditional296) {
                }
                else {
                    # 893 "05function4.c"
                    info->p=p_162;
                    # 894 "05function4.c"
                    info->sline=sline_163;
                }
                word_164 = come_decrement_ref_count2(word_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 898 "05function4.c"
                info->p=p_162;
                # 899 "05function4.c"
                info->sline=sline_163;
            }
        }
        # 903 "05function4.c"
        result_type_153->mPointerNum++;
    }
    # 905 "05function4.c"
    parse_sharp_v5(info);
    # 912 "05function4.c"
    # 907 "05function4.c"
    if(_if_conditional297=between_brace_158&&*info->p==40,    _if_conditional297) {
        # 908 "05function4.c"
        info->p++;
        # 909 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 921 "05function4.c"
    # 912 "05function4.c"
    if(_if_conditional298=xisalnum(*info->p)||*info->p==95,    _if_conditional298) {
        # 913 "05function4.c"
        __dec_obj72=var_name_154;
        var_name_154=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 913, 8),__exception_result_var_b4=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b4));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 916 "05function4.c"
        # 917 "05function4.c"
        num_anonymous_var_name_165++;
        # 918 "05function4.c"
        __dec_obj73=var_name_154;
        var_name_154=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_165))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 926 "05function4.c"
    # 921 "05function4.c"
    if(_if_conditional299=between_brace_158&&*info->p==41,    _if_conditional299) {
        # 922 "05function4.c"
        info->p++;
        # 923 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 938 "05function4.c"
    # 926 "05function4.c"
    if(_if_conditional300=*info->p==58,    _if_conditional300) {
        # 927 "05function4.c"
        info->p++;
        # 928 "05function4.c"
        skip_spaces_and_lf(info);
        # 930 "05function4.c"
        no_comma_166=info->no_comma;
        # 931 "05function4.c"
        info->no_comma=(_Bool)1;
        # 932 "05function4.c"
        node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=expression_v13(info))));
        if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 933 "05function4.c"
        info->no_comma=no_comma_166;
        # 935 "05function4.c"
        __dec_obj74=result_type_153->mSizeNum;
        result_type_153->mSizeNum=(struct sNode*)come_increment_ref_count(node_167);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 979 "05function4.c"
    while(_while_condtional34=*info->p==91,    _while_condtional34) {
        # 939 "05function4.c"
        info->p++;
        # 940 "05function4.c"
        skip_spaces_and_lf(info);
        # 941 "05function4.c"
        parse_sharp_v5(info);
        # 963 "05function4.c"
        {
            # 944 "05function4.c"
            p_168=info->p;
            # 945 "05function4.c"
            sline_169=info->sline;
            # 961 "05function4.c"
            # 947 "05function4.c"
            if(_if_conditional301=xisalpha(*info->p)||*info->p==95,            _if_conditional301) {
                # 948 "05function4.c"
                word_170=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 948, 9),__exception_result_var_b5=((char*)(right_value221=parse_word(info))), come_pop_stackframe(), __exception_result_var_b5));
                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 956 "05function4.c"
                # 950 "05function4.c"
                if(_if_conditional302=string_operator_equals(word_170,"const")||string_operator_equals(word_170,"__restrict")||string_operator_equals(word_170,"restrict")||string_operator_equals(word_170,"__user")||string_operator_equals(word_170,"volatile")||string_operator_equals(word_170,"_Nonnull")||string_operator_equals(word_170,"_Nullable")||string_operator_equals(word_170,"_Null_unspecified")||string_operator_equals(word_170,"__user")||string_operator_equals(word_170,"_Addr"),                _if_conditional302) {
                }
                else {
                    # 953 "05function4.c"
                    info->p=p_168;
                    # 954 "05function4.c"
                    info->sline=sline_169;
                }
                word_170 = come_decrement_ref_count2(word_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 958 "05function4.c"
                info->p=p_168;
                # 959 "05function4.c"
                info->sline=sline_169;
            }
        }
        # 970 "05function4.c"
        # 963 "05function4.c"
        if(_if_conditional303=*info->p==93,        _if_conditional303) {
            # 964 "05function4.c"
            info->p++;
            # 965 "05function4.c"
            skip_spaces_and_lf(info);
            # 967 "05function4.c"
            result_type_153->mPointerNum++;
            # 968 "05function4.c"
            break;
        }
        # 970 "05function4.c"
        parse_sharp_v5(info);
        # 972 "05function4.c"
        node_171=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=expression_v13(info))));
        if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 973 "05function4.c"
        list$1sNodeph_push_back(result_type_153->mArrayNum,(struct sNode*)come_increment_ref_count(node_171));
        # 974 "05function4.c"
        parse_sharp_v5(info);
        # 976 "05function4.c"
        expected_next_character(93,info);
        if(node_171) { node_171 = come_decrement_ref_count2(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 979 "05function4.c"
    __result127__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value227=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value226=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 979, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_153),(char*)come_increment_ref_count(var_name_154))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_154 = come_decrement_ref_count2(var_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result127__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_154 = come_decrement_ref_count2(var_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional304;
void* right_value223;
struct list_item$1sNodeph* litem_172;
struct sNode* __dec_obj75;
_Bool _if_conditional305;
void* right_value224;
struct list_item$1sNodeph* litem_173;
struct sNode* __dec_obj76;
void* right_value225;
struct list_item$1sNodeph* litem_174;
struct sNode* __dec_obj77;
struct list$1sNodeph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1sNodeph*));
right_value224 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1sNodeph*));
right_value225 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1sNodeph*));
            # 256 "./neo-c.h"
            # 225 "./neo-c.h"
            if(_if_conditional304=self->len==0,            _if_conditional304) {
                # 226 "./neo-c.h"
                litem_172=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value223=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./neo-c.h"
                litem_172->prev=((void*)0);
                # 229 "./neo-c.h"
                litem_172->next=((void*)0);
                # 230 "./neo-c.h"
                __dec_obj75=litem_172->item;
                litem_172->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
                # 232 "./neo-c.h"
                self->tail=litem_172;
                # 233 "./neo-c.h"
                self->head=litem_172;
            }
            else {
                # 256 "./neo-c.h"
                # 235 "./neo-c.h"
                if(_if_conditional305=self->len==1,                _if_conditional305) {
                    # 236 "./neo-c.h"
                    litem_173=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value224=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./neo-c.h"
                    litem_173->prev=self->head;
                    # 239 "./neo-c.h"
                    litem_173->next=((void*)0);
                    # 240 "./neo-c.h"
                    __dec_obj76=litem_173->item;
                    litem_173->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                    # 242 "./neo-c.h"
                    self->tail=litem_173;
                    # 243 "./neo-c.h"
                    self->head->next=litem_173;
                }
                else {
                    # 246 "./neo-c.h"
                    litem_174=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value225=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./neo-c.h"
                    litem_174->prev=self->tail;
                    # 249 "./neo-c.h"
                    litem_174->next=((void*)0);
                    # 250 "./neo-c.h"
                    __dec_obj77=litem_174->item;
                    litem_174->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
                    # 252 "./neo-c.h"
                    self->tail->next=litem_174;
                    # 253 "./neo-c.h"
                    self->tail=litem_174;
                }
            }
            # 256 "./neo-c.h"
            self->len++;
            # 258 "./neo-c.h"
            __result125__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result125__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj78;
char* __dec_obj79;
struct tuple2$2sTypephcharph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1767 "./neo-c.h"
        __dec_obj78=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1768 "./neo-c.h"
        __dec_obj79=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1770 "./neo-c.h"
        __result126__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional306=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional306) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional307=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional307) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_175;
int sline_176;
_Bool _if_conditional308;
void* right_value228;
char* __exception_result_var_b6;
char* word_177;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_175, 0, sizeof(char*));
memset(&sline_176, 0, sizeof(int));
right_value228 = (void*)0;
memset(&word_177, 0, sizeof(char*));
    # 984 "05function4.c"
    p_175=info->p;
    # 985 "05function4.c"
    sline_176=info->sline;
    # 1001 "05function4.c"
    # 987 "05function4.c"
    if(_if_conditional308=xisalpha(*info->p)||*info->p==95,    _if_conditional308) {
        # 988 "05function4.c"
        word_177=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 988, 10),__exception_result_var_b6=((char*)(right_value228=parse_word(info))), come_pop_stackframe(), __exception_result_var_b6));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 996 "05function4.c"
        # 990 "05function4.c"
        if(_if_conditional309=string_operator_equals(word_177,"const")||string_operator_equals(word_177,"__restrict")||string_operator_equals(word_177,"restrict")||string_operator_equals(word_177,"__user")||string_operator_equals(word_177,"volatile")||string_operator_equals(word_177,"_Nonnull")||string_operator_equals(word_177,"_Nullable")||string_operator_equals(word_177,"_Null_unspecified")||string_operator_equals(word_177,"__user")||string_operator_equals(word_177,"_Addr"),        _if_conditional309) {
        }
        else {
            # 993 "05function4.c"
            info->p=p_175;
            # 994 "05function4.c"
            info->sline=sline_176;
        }
        word_177 = come_decrement_ref_count2(word_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 998 "05function4.c"
        info->p=p_175;
        # 999 "05function4.c"
        info->sline=sline_176;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_178;
int head_sline_179;
void* right_value229;
char* __exception_result_var_b7;
char* type_name_180;
_Bool _while_condtional35;
void* right_value230;
char* __exception_result_var_b8;
char* __dec_obj80;
_Bool record__181;
_Bool constant_182;
_Bool static__183;
_Bool volatile__184;
_Bool register__185;
_Bool unsigned__186;
_Bool long__187;
_Bool long_long_188;
_Bool short__189;
_Bool restrict__190;
_Bool struct__191;
_Bool union__192;
_Bool enum__193;
_Bool no_heap_194;
_Bool extern__195;
_Bool inline__196;
_Bool come_mem_core__197;
struct sNode* alignas__198;
_Bool anonymous_type_199;
_Bool anonymous_name_200;
_Bool _while_condtional36;
_Bool _if_conditional310;
_Bool _if_conditional311;
char* p_201;
int sline_202;
void* right_value231;
_Bool _if_conditional312;
void* right_value232;
char* __dec_obj81;
void* right_value233;
char* __dec_obj82;
_Bool _if_conditional313;
void* right_value234;
char* __exception_result_var_b9;
char* __dec_obj83;
_Bool _if_conditional314;
char* p_203;
int sline_204;
_Bool _while_condtional37;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value235;
void* right_value236;
struct tuple3$3sTypephcharphbool* __result129__;
_Bool _if_conditional318;
char* p_205;
int sline_206;
void* right_value237;
_Bool _if_conditional319;
void* right_value238;
void* right_value239;
struct tuple3$3sTypephcharphbool* __result130__;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* p_207;
int sline_208;
void* right_value240;
_Bool _if_conditional322;
void* right_value241;
char* __dec_obj86;
void* right_value242;
char* __dec_obj87;
void* right_value243;
char* __exception_result_var_b10;
char* __dec_obj88;
_Bool _if_conditional323;
char* p_209;
int sline_210;
void* right_value244;
_Bool _if_conditional324;
void* right_value245;
void* right_value246;
struct tuple3$3sTypephcharphbool* __result131__;
_Bool _if_conditional325;
_Bool _if_conditional326;
char* p_211;
int sline_212;
void* right_value247;
_Bool _if_conditional327;
void* right_value248;
void* right_value249;
struct tuple3$3sTypephcharphbool* __result132__;
void* right_value250;
char* __dec_obj89;
void* right_value251;
char* __exception_result_var_b11;
char* __dec_obj90;
_Bool _if_conditional328;
char* p_213;
int sline_214;
void* right_value252;
_Bool _if_conditional329;
void* right_value253;
void* right_value254;
struct tuple3$3sTypephcharphbool* __result133__;
_Bool _if_conditional330;
void* right_value255;
struct sNode* exp_215;
struct sNode* __dec_obj91;
void* right_value256;
char* __exception_result_var_b12;
char* __dec_obj92;
_Bool _if_conditional331;
void* right_value257;
char* __exception_result_var_b13;
char* __dec_obj93;
_Bool _if_conditional332;
void* right_value258;
char* __exception_result_var_b14;
char* __dec_obj94;
_Bool _if_conditional333;
void* right_value259;
char* __exception_result_var_b15;
char* __dec_obj95;
_Bool _if_conditional334;
void* right_value260;
char* __exception_result_var_b16;
char* __dec_obj96;
_Bool _if_conditional335;
void* right_value261;
char* __exception_result_var_b17;
char* __dec_obj97;
_Bool _if_conditional336;
void* right_value262;
char* __exception_result_var_b18;
char* __dec_obj98;
_Bool _if_conditional337;
void* right_value263;
char* __exception_result_var_b19;
char* __dec_obj99;
_Bool _if_conditional338;
void* right_value264;
char* __exception_result_var_b20;
char* __dec_obj100;
_Bool _if_conditional339;
char* p_216;
int sline_217;
_Bool _if_conditional340;
void* right_value265;
char* __dec_obj101;
void* right_value266;
char* __exception_result_var_b21;
char* __dec_obj102;
_Bool _if_conditional341;
void* right_value267;
char* __exception_result_var_b22;
char* __dec_obj103;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value268;
char* __exception_result_var_b23;
char* __dec_obj104;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value269;
char* __dec_obj105;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value270;
char* __dec_obj106;
_Bool _if_conditional349;
_Bool _if_conditional350;
char* p_218;
int sline_219;
void* right_value271;
char* __exception_result_var_b24;
char* __dec_obj107;
_Bool _if_conditional351;
_Bool _if_conditional352;
char* p_220;
int sline_221;
void* right_value272;
char* __exception_result_var_b25;
char* __dec_obj108;
_Bool _if_conditional353;
void* right_value273;
char* __dec_obj109;
void* right_value274;
char* __dec_obj110;
_Bool _if_conditional354;
_Bool _if_conditional355;
char* p_222;
int sline_223;
void* right_value275;
char* __exception_result_var_b26;
char* __dec_obj111;
_Bool _if_conditional356;
void* right_value276;
char* __dec_obj112;
void* right_value277;
char* __dec_obj113;
_Bool _if_conditional357;
void* right_value278;
char* __dec_obj114;
void* right_value279;
char* __dec_obj115;
_Bool _if_conditional358;
void* right_value280;
char* __exception_result_var_b27;
char* __dec_obj116;
_Bool _if_conditional359;
void* right_value281;
char* __exception_result_var_b28;
char* __dec_obj117;
_Bool _if_conditional360;
void* right_value282;
char* __exception_result_var_b29;
char* __dec_obj118;
_Bool _if_conditional361;
void* right_value283;
char* __exception_result_var_b30;
char* __dec_obj119;
_Bool _if_conditional362;
void* right_value284;
char* __exception_result_var_b31;
char* __dec_obj120;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
char* p_224;
int sline_225;
void* right_value285;
char* __exception_result_var_b32;
char* __dec_obj121;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value286;
char* __dec_obj122;
int pointer_num_226;
_Bool _while_condtional38;
_Bool heap_227;
_Bool _if_conditional369;
_Bool lambda_flag_228;
char* pX_229;
int slineX_230;
_Bool _if_conditional370;
void* right_value287;
char* __exception_result_var_b33;
_Bool _if_conditional371;
struct sType* type_231;
char* var_name_232;
_Bool function_pointer_flag_233;
char* p_234;
int sline_235;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value288;
char* __exception_result_var_b34;
char* word_236;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool var_name_between_brace_237;
char* p_238;
int sline_239;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value289;
char* __exception_result_var_b35;
char* word_240;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
static int anonymous_num_241=0;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value290;
char* __dec_obj123;
void* right_value291;
struct sNode* node_242;
_Bool _if_conditional385;
void* right_value292;
void* right_value293;
struct tuple3$3sTypephcharphbool* __result134__;
int pointer_num_243;
_Bool _while_condtional39;
void* right_value294;
void* right_value295;
struct sType* __dec_obj124;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value296;
char* __dec_obj125;
void* right_value297;
struct sNode* node_244;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value298;
void* right_value299;
struct tuple3$3sTypephcharphbool* __result135__;
void* right_value300;
void* right_value301;
struct sType* __dec_obj126;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value302;
char* __dec_obj127;
void* right_value303;
struct sNode* node_245;
_Bool _if_conditional392;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphbool* __result136__;
int pointer_num_246;
_Bool _while_condtional40;
void* right_value306;
void* right_value307;
struct sType* __dec_obj128;
void* right_value308;
void* right_value309;
struct tuple3$3sTypephcharphbool* __result137__;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value310;
char* __dec_obj129;
_Bool _if_conditional396;
static int num_anonymous_var_name_247=0;
void* right_value311;
char* __dec_obj130;
_Bool _if_conditional397;
void* right_value312;
char* __exception_result_var_b36;
char* __dec_obj131;
static int num_anonymous_var_name_248=0;
void* right_value313;
char* __dec_obj132;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool no_comma_249;
void* right_value314;
struct sNode* node_250;
struct sNode* __dec_obj133;
_Bool _if_conditional400;
struct sType* result_type_251;
_Bool _if_conditional405;
void* right_value315;
struct sType* __dec_obj134;
_Bool _if_conditional411;
int i_260;
_Bool _if_conditional415;
void* right_value316;
void* right_value317;
void* right_value318;
struct sType* __dec_obj135;
_Bool _if_conditional416;
int i_264;
_Bool _if_conditional417;
void* right_value319;
void* right_value320;
void* right_value321;
struct sType* __dec_obj136;
void* right_value322;
void* right_value323;
struct sType* __dec_obj137;
struct sNode* __dec_obj138;
void* right_value324;
char* __exception_result_var_b37;
char* __dec_obj139;
void* right_value325;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_265;
struct list$1charph* param_names_266;
struct list$1charph* param_default_parametors_267;
_Bool var_args_268;
void* right_value326;
void* right_value327;
struct sType* __dec_obj140;
void* right_value328;
void* right_value329;
struct tuple1$1sTypeph* __dec_obj142;
struct list$1sTypeph* __dec_obj143;
struct list$1charph* __dec_obj144;
_Bool _if_conditional418;
_Bool _if_conditional419;
struct sType* result_type_269;
_Bool _if_conditional420;
void* right_value330;
struct sType* __dec_obj145;
_Bool _if_conditional421;
int i_270;
_Bool _if_conditional422;
void* right_value331;
void* right_value332;
void* right_value333;
struct sType* __dec_obj146;
_Bool _if_conditional423;
int i_271;
_Bool _if_conditional424;
void* right_value334;
void* right_value335;
void* right_value336;
struct sType* __dec_obj147;
void* right_value337;
void* right_value338;
struct sType* __dec_obj148;
struct sNode* __dec_obj149;
_Bool _if_conditional425;
void* right_value339;
char* __exception_result_var_b38;
char* __dec_obj150;
_Bool _if_conditional426;
void* right_value340;
void* right_value341;
struct tuple3$3sTypephcharphbool* __result156__;
static int num_anonymous_var_name_272=0;
void* right_value342;
char* __dec_obj151;
void* right_value343;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_273;
struct list$1charph* param_names_274;
struct list$1charph* param_default_parametors_275;
_Bool var_args_276;
void* right_value344;
void* right_value345;
struct sType* __dec_obj152;
void* right_value346;
void* right_value347;
struct tuple1$1sTypeph* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct list$1charph* __dec_obj155;
_Bool _if_conditional427;
void* right_value348;
struct sNode* exp_277;
_Bool _if_conditional428;
void* right_value349;
void* right_value350;
struct tuple3$3sTypephcharphbool* __result158__;
void* right_value351;
struct CVALUE* come_value_278;
void* right_value352;
struct sType* __dec_obj157;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value353;
char* __dec_obj158;
_Bool _if_conditional435;
static int num_anonymous_var_name_279=0;
void* right_value354;
char* __dec_obj159;
_Bool _if_conditional436;
void* right_value355;
char* __exception_result_var_b39;
char* __dec_obj160;
static int num_anonymous_var_name_280=0;
void* right_value356;
char* __dec_obj161;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool no_comma_281;
void* right_value357;
struct sNode* node_282;
struct sNode* __dec_obj162;
_Bool _if_conditional439;
void* right_value358;
struct sType* __dec_obj163;
void* right_value359;
char* __dec_obj164;
struct sNode* __dec_obj165;
_Bool _if_conditional440;
int i_283;
_Bool _if_conditional441;
void* right_value360;
void* right_value361;
void* right_value362;
struct sType* __dec_obj166;
struct sNode* __dec_obj167;
_Bool _if_conditional442;
int i_284;
_Bool _if_conditional443;
void* right_value363;
void* right_value364;
void* right_value365;
struct sType* __dec_obj168;
struct sNode* __dec_obj169;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value366;
void* right_value367;
struct tuple3$3sTypephcharphbool* __result159__;
void* right_value368;
void* right_value369;
struct sType* __dec_obj170;
_Bool _while_condtional43;
void* right_value370;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_285;
char* var_name_286;
_Bool err_287;
_Bool _if_conditional446;
void* right_value371;
void* right_value372;
struct tuple3$3sTypephcharphbool* __result160__;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value373;
void* right_value374;
struct tuple3$3sTypephcharphbool* __result161__;
_Bool _if_conditional449;
void* right_value375;
struct sType* __dec_obj171;
_Bool _if_conditional450;
void* right_value376;
char* new_name_288;
struct sNode* __dec_obj172;
_Bool _if_conditional451;
struct sClass* klass_289;
_Bool _if_conditional452;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
struct sType* __dec_obj173;
struct sNode* __dec_obj174;
_Bool _while_condtional52;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _while_condtional53;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
void* right_value387;
void* right_value388;
struct list$1sTypeph* types_334;
void* right_value389;
_Bool _while_condtional54;
void* right_value390;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_335;
char* name_336;
_Bool err_337;
_Bool _if_conditional512;
void* right_value391;
void* right_value392;
struct tuple3$3sTypephcharphbool* __result186__;
void* right_value393;
int num_tuples_338;
void* right_value394;
void* right_value395;
void* right_value396;
struct sType* __dec_obj175;
struct list$1sTypeph* o2_saved_339;
struct sType* it_340;
void* right_value397;
_Bool _if_conditional513;
void* right_value398;
struct sType* __dec_obj176;
_Bool _if_conditional514;
void* right_value399;
char* new_name_341;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
void* right_value400;
char* __dec_obj177;
_Bool _if_conditional518;
static int num_anonymous_var_name_342=0;
void* right_value401;
char* __dec_obj178;
_Bool _if_conditional519;
void* right_value402;
char* __exception_result_var_b40;
char* __dec_obj179;
static int num_anonymous_var_name_343=0;
void* right_value403;
char* __dec_obj180;
_Bool _if_conditional520;
_Bool _if_conditional521;
_Bool no_comma_344;
void* right_value404;
struct sNode* node_345;
struct sNode* __dec_obj181;
_Bool _while_condtional55;
_Bool _if_conditional522;
void* right_value405;
struct sNode* node_346;
void* right_value406;
char* asm_name_347;
char* __dec_obj182;
void* right_value407;
void* right_value408;
struct tuple3$3sTypephcharphbool* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_178, 0, sizeof(char*));
memset(&head_sline_179, 0, sizeof(int));
right_value229 = (void*)0;
memset(&type_name_180, 0, sizeof(char*));
right_value230 = (void*)0;
memset(&record__181, 0, sizeof(_Bool));
memset(&constant_182, 0, sizeof(_Bool));
memset(&static__183, 0, sizeof(_Bool));
memset(&volatile__184, 0, sizeof(_Bool));
memset(&register__185, 0, sizeof(_Bool));
memset(&unsigned__186, 0, sizeof(_Bool));
memset(&long__187, 0, sizeof(_Bool));
memset(&long_long_188, 0, sizeof(_Bool));
memset(&short__189, 0, sizeof(_Bool));
memset(&restrict__190, 0, sizeof(_Bool));
memset(&struct__191, 0, sizeof(_Bool));
memset(&union__192, 0, sizeof(_Bool));
memset(&enum__193, 0, sizeof(_Bool));
memset(&no_heap_194, 0, sizeof(_Bool));
memset(&extern__195, 0, sizeof(_Bool));
memset(&inline__196, 0, sizeof(_Bool));
memset(&come_mem_core__197, 0, sizeof(_Bool));
memset(&alignas__198, 0, sizeof(struct sNode*));
memset(&anonymous_type_199, 0, sizeof(_Bool));
memset(&anonymous_name_200, 0, sizeof(_Bool));
memset(&p_201, 0, sizeof(char*));
memset(&sline_202, 0, sizeof(int));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&p_203, 0, sizeof(char*));
memset(&sline_204, 0, sizeof(int));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&p_207, 0, sizeof(char*));
memset(&sline_208, 0, sizeof(int));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&p_209, 0, sizeof(char*));
memset(&sline_210, 0, sizeof(int));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&p_211, 0, sizeof(char*));
memset(&sline_212, 0, sizeof(int));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&p_213, 0, sizeof(char*));
memset(&sline_214, 0, sizeof(int));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&exp_215, 0, sizeof(struct sNode*));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&p_216, 0, sizeof(char*));
memset(&sline_217, 0, sizeof(int));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&p_218, 0, sizeof(char*));
memset(&sline_219, 0, sizeof(int));
right_value271 = (void*)0;
memset(&p_220, 0, sizeof(char*));
memset(&sline_221, 0, sizeof(int));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&p_224, 0, sizeof(char*));
memset(&sline_225, 0, sizeof(int));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&pointer_num_226, 0, sizeof(int));
memset(&heap_227, 0, sizeof(_Bool));
memset(&lambda_flag_228, 0, sizeof(_Bool));
memset(&pX_229, 0, sizeof(char*));
memset(&slineX_230, 0, sizeof(int));
right_value287 = (void*)0;
memset(&type_231, 0, sizeof(struct sType*));
memset(&var_name_232, 0, sizeof(char*));
memset(&function_pointer_flag_233, 0, sizeof(_Bool));
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
right_value288 = (void*)0;
memset(&word_236, 0, sizeof(char*));
memset(&var_name_between_brace_237, 0, sizeof(_Bool));
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
right_value289 = (void*)0;
memset(&word_240, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&node_242, 0, sizeof(struct sNode*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&pointer_num_243, 0, sizeof(int));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&node_244, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&node_245, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&pointer_num_246, 0, sizeof(int));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&no_comma_249, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&node_250, 0, sizeof(struct sNode*));
memset(&result_type_251, 0, sizeof(struct sType*));
right_value315 = (void*)0;
memset(&i_260, 0, sizeof(int));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&i_264, 0, sizeof(int));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&param_types_265, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_266, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_267, 0, sizeof(struct list$1charph*));
memset(&var_args_268, 0, sizeof(_Bool));
memset(&param_types_265, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_266, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_267, 0, sizeof(struct list$1charph*));
memset(&var_args_268, 0, sizeof(_Bool));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value330 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&i_271, 0, sizeof(int));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&param_types_273, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_274, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_275, 0, sizeof(struct list$1charph*));
memset(&var_args_276, 0, sizeof(_Bool));
memset(&param_types_273, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_274, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_275, 0, sizeof(struct list$1charph*));
memset(&var_args_276, 0, sizeof(_Bool));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&exp_277, 0, sizeof(struct sNode*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&come_value_278, 0, sizeof(struct CVALUE*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&no_comma_281, 0, sizeof(_Bool));
right_value357 = (void*)0;
memset(&node_282, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&i_283, 0, sizeof(int));
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&i_284, 0, sizeof(int));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&generics_type_285, 0, sizeof(struct sType*));
memset(&var_name_286, 0, sizeof(char*));
memset(&err_287, 0, sizeof(_Bool));
memset(&generics_type_285, 0, sizeof(struct sType*));
memset(&var_name_286, 0, sizeof(char*));
memset(&err_287, 0, sizeof(_Bool));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&new_name_288, 0, sizeof(char*));
memset(&klass_289, 0, sizeof(struct sClass*));
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&types_334, 0, sizeof(struct list$1sTypeph*));
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&type2_335, 0, sizeof(struct sType*));
memset(&name_336, 0, sizeof(char*));
memset(&err_337, 0, sizeof(_Bool));
memset(&type2_335, 0, sizeof(struct sType*));
memset(&name_336, 0, sizeof(char*));
memset(&err_337, 0, sizeof(_Bool));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&num_tuples_338, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&o2_saved_339, 0, sizeof(struct list$1sTypeph*));
memset(&it_340, 0, sizeof(struct sType*));
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&new_name_341, 0, sizeof(char*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&no_comma_344, 0, sizeof(_Bool));
right_value404 = (void*)0;
memset(&node_345, 0, sizeof(struct sNode*));
right_value405 = (void*)0;
memset(&node_346, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
memset(&asm_name_347, 0, sizeof(char*));
right_value407 = (void*)0;
right_value408 = (void*)0;
    # 1005 "05function4.c"
    head_178=info->p;
    # 1006 "05function4.c"
    head_sline_179=info->sline;
    # 1007 "05function4.c"
    info->define_struct=(_Bool)0;
    # 1009 "05function4.c"
    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1009, 11),__exception_result_var_b7=((char*)(right_value229=parse_word(info))), come_pop_stackframe(), __exception_result_var_b7));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1014 "05function4.c"
    while(_while_condtional35=string_operator_equals(type_name_180,"__extension__"),    _while_condtional35) {
        # 1011 "05function4.c"
        __dec_obj80=type_name_180;
        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1011, 12),__exception_result_var_b8=((char*)(right_value230=parse_word(info))), come_pop_stackframe(), __exception_result_var_b8));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1014 "05function4.c"
    record__181=(_Bool)0;
    # 1015 "05function4.c"
    constant_182=(_Bool)0;
    # 1016 "05function4.c"
    static__183=(_Bool)0;
    # 1017 "05function4.c"
    volatile__184=(_Bool)0;
    # 1018 "05function4.c"
    register__185=(_Bool)0;
    # 1019 "05function4.c"
    unsigned__186=(_Bool)0;
    # 1020 "05function4.c"
    long__187=(_Bool)0;
    # 1021 "05function4.c"
    long_long_188=(_Bool)0;
    # 1022 "05function4.c"
    short__189=(_Bool)0;
    # 1023 "05function4.c"
    restrict__190=(_Bool)0;
    # 1024 "05function4.c"
    struct__191=(_Bool)0;
    # 1025 "05function4.c"
    union__192=(_Bool)0;
    # 1026 "05function4.c"
    enum__193=(_Bool)0;
    # 1027 "05function4.c"
    no_heap_194=(_Bool)0;
    # 1028 "05function4.c"
    extern__195=(_Bool)0;
    # 1029 "05function4.c"
    inline__196=(_Bool)0;
    # 1030 "05function4.c"
    come_mem_core__197=(_Bool)0;
    # 1032 "05function4.c"
    alignas__198=((void*)0);
    # 1034 "05function4.c"
    anonymous_type_199=(_Bool)0;
    # 1035 "05function4.c"
    anonymous_name_200=(_Bool)0;
    # 1476 "05function4.c"
    while(_while_condtional36=(_Bool)1,    _while_condtional36) {
        # 1474 "05function4.c"
        # 1038 "05function4.c"
        if(_if_conditional310=string_operator_equals(type_name_180,"struct"),        _if_conditional310) {
            # 1039 "05function4.c"
            struct__191=(_Bool)1;
            # 1064 "05function4.c"
            # 1041 "05function4.c"
            if(_if_conditional311=*info->p==123,            _if_conditional311) {
                # 1042 "05function4.c"
                p_201=info->p;
                # 1043 "05function4.c"
                sline_202=info->sline;
                # 1045 "05function4.c"
                ((char*)(right_value231=skip_block(info)));
                right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1062 "05function4.c"
                # 1047 "05function4.c"
                if(_if_conditional312=*info->p==59,                _if_conditional312) {
                    # 1048 "05function4.c"
                    anonymous_name_200=(_Bool)1;
                    # 1049 "05function4.c"
                    anonymous_type_199=(_Bool)1;
                    # 1050 "05function4.c"
                    __dec_obj81=type_name_180;
                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(""))));
                    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1051 "05function4.c"
                    info->p=p_201;
                    # 1052 "05function4.c"
                    info->sline=sline_202;
                    # 1053 "05function4.c"
                    break;
                }
                else {
                    # 1056 "05function4.c"
                    anonymous_type_199=(_Bool)1;
                    # 1057 "05function4.c"
                    __dec_obj82=type_name_180;
                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(""))));
                    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1058 "05function4.c"
                    info->p=p_201;
                    # 1059 "05function4.c"
                    info->sline=sline_202;
                    # 1060 "05function4.c"
                    break;
                }
            }
            # 1064 "05function4.c"
            parse_sharp_v5(info);
            # 1121 "05function4.c"
            # 1066 "05function4.c"
            if(_if_conditional313=*info->p!=62,            _if_conditional313) {
                # 1067 "05function4.c"
                __dec_obj83=type_name_180;
                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1067, 13),__exception_result_var_b9=((char*)(right_value234=parse_word(info))), come_pop_stackframe(), __exception_result_var_b9));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1069 "05function4.c"
                parse_sharp_v5(info);
                # 1101 "05function4.c"
                # 1071 "05function4.c"
                if(_if_conditional314=*info->p==60,                _if_conditional314) {
                    # 1072 "05function4.c"
                    p_203=info->p;
                    # 1073 "05function4.c"
                    sline_204=info->sline;
                    # 1075 "05function4.c"
                    info->p++;
                    # 1076 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1099 "05function4.c"
                    while(_while_condtional37=(_Bool)1,                    _while_condtional37) {
                        # 1098 "05function4.c"
                        # 1079 "05function4.c"
                        if(_if_conditional315=*info->p==62,                        _if_conditional315) {
                            # 1080 "05function4.c"
                            info->p++;
                            # 1081 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1089 "05function4.c"
                            # 1083 "05function4.c"
                            if(_if_conditional316=*info->p==123,                            _if_conditional316) {
                            }
                            else {
                                # 1086 "05function4.c"
                                info->p=p_203;
                                # 1087 "05function4.c"
                                info->sline=sline_204;
                            }
                            # 1089 "05function4.c"
                            break;
                        }
                        else {
                            # 1098 "05function4.c"
                            # 1091 "05function4.c"
                            if(_if_conditional317=*info->p==0,                            _if_conditional317) {
                                # 1092 "05function4.c"
                                err_msg(info,"invalid struct definition");
                                # 1093 "05function4.c"
                                __result129__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value236=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value235=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1093, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result129__;
                            }
                            else {
                                # 1096 "05function4.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1120 "05function4.c"
                # 1101 "05function4.c"
                if(_if_conditional318=*info->p==123,                _if_conditional318) {
                    # 1102 "05function4.c"
                    p_205=info->p;
                    # 1103 "05function4.c"
                    sline_206=info->sline;
                    # 1105 "05function4.c"
                    ((char*)(right_value237=skip_block(info)));
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1119 "05function4.c"
                    # 1107 "05function4.c"
                    if(_if_conditional319=*info->p==59,                    _if_conditional319) {
                        # 1108 "05function4.c"
                        info->p=head_178;
                        # 1109 "05function4.c"
                        info->sline=head_sline_179;
                        # 1110 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1111 "05function4.c"
                        __result130__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value239=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value238=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1111, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result130__;
                    }
                    else {
                        # 1114 "05function4.c"
                        anonymous_type_199=(_Bool)1;
                        # 1115 "05function4.c"
                        info->p=p_205;
                        # 1116 "05function4.c"
                        info->sline=sline_206;
                        # 1117 "05function4.c"
                        break;
                    }
                }
            }
        }
        else {
            # 1474 "05function4.c"
            # 1122 "05function4.c"
            if(_if_conditional320=string_operator_equals(type_name_180,"union"),            _if_conditional320) {
                # 1123 "05function4.c"
                union__192=(_Bool)1;
                # 1151 "05function4.c"
                # 1125 "05function4.c"
                if(_if_conditional321=*info->p==123,                _if_conditional321) {
                    # 1126 "05function4.c"
                    p_207=info->p;
                    # 1127 "05function4.c"
                    sline_208=info->sline;
                    # 1129 "05function4.c"
                    ((char*)(right_value240=skip_block(info)));
                    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1149 "05function4.c"
                    # 1131 "05function4.c"
                    if(_if_conditional322=*info->p==59,                    _if_conditional322) {
                        # 1132 "05function4.c"
                        info->p=head_178;
                        # 1133 "05function4.c"
                        info->sline=head_sline_179;
                        # 1135 "05function4.c"
                        info->define_struct=(_Bool)0;
                        # 1136 "05function4.c"
                        anonymous_type_199=(_Bool)1;
                        # 1137 "05function4.c"
                        __dec_obj86=type_name_180;
                        type_name_180=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(""))));
                        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1138 "05function4.c"
                        info->p=p_207;
                        # 1139 "05function4.c"
                        info->sline=sline_208;
                        # 1140 "05function4.c"
                        break;
                    }
                    else {
                        # 1143 "05function4.c"
                        anonymous_type_199=(_Bool)1;
                        # 1144 "05function4.c"
                        __dec_obj87=type_name_180;
                        type_name_180=(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(""))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1145 "05function4.c"
                        info->p=p_207;
                        # 1146 "05function4.c"
                        info->sline=sline_208;
                        # 1147 "05function4.c"
                        break;
                    }
                }
                # 1151 "05function4.c"
                parse_sharp_v5(info);
                # 1153 "05function4.c"
                __dec_obj88=type_name_180;
                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1153, 14),__exception_result_var_b10=((char*)(right_value243=parse_word(info))), come_pop_stackframe(), __exception_result_var_b10));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1155 "05function4.c"
                parse_sharp_v5(info);
                # 1176 "05function4.c"
                # 1157 "05function4.c"
                if(_if_conditional323=*info->p==123,                _if_conditional323) {
                    # 1158 "05function4.c"
                    p_209=info->p;
                    # 1159 "05function4.c"
                    sline_210=info->sline;
                    # 1161 "05function4.c"
                    ((char*)(right_value244=skip_block(info)));
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1175 "05function4.c"
                    # 1163 "05function4.c"
                    if(_if_conditional324=*info->p==59,                    _if_conditional324) {
                        # 1164 "05function4.c"
                        info->p=head_178;
                        # 1165 "05function4.c"
                        info->sline=head_sline_179;
                        # 1166 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1167 "05function4.c"
                        __result131__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value246=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value245=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1167, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result131__;
                    }
                    else {
                        # 1170 "05function4.c"
                        anonymous_type_199=(_Bool)1;
                        # 1171 "05function4.c"
                        info->p=p_209;
                        # 1172 "05function4.c"
                        info->sline=sline_210;
                        # 1173 "05function4.c"
                        break;
                    }
                }
            }
            else {
                # 1474 "05function4.c"
                # 1177 "05function4.c"
                if(_if_conditional325=string_operator_equals(type_name_180,"enum"),                _if_conditional325) {
                    # 1178 "05function4.c"
                    enum__193=(_Bool)1;
                    # 1180 "05function4.c"
                    parse_sharp_v5(info);
                    # 1203 "05function4.c"
                    # 1182 "05function4.c"
                    if(_if_conditional326=*info->p==123,                    _if_conditional326) {
                        # 1183 "05function4.c"
                        p_211=info->p;
                        # 1184 "05function4.c"
                        sline_212=info->sline;
                        # 1186 "05function4.c"
                        ((char*)(right_value247=skip_block(info)));
                        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1201 "05function4.c"
                        # 1188 "05function4.c"
                        if(_if_conditional327=*info->p==59,                        _if_conditional327) {
                            # 1189 "05function4.c"
                            info->p=head_178;
                            # 1190 "05function4.c"
                            info->sline=head_sline_179;
                            # 1191 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1192 "05function4.c"
                            __result132__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value249=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value248=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1192, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result132__;
                        }
                        else {
                            # 1195 "05function4.c"
                            anonymous_type_199=(_Bool)1;
                            # 1196 "05function4.c"
                            __dec_obj89=type_name_180;
                            type_name_180=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(""))));
                            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1197 "05function4.c"
                            info->p=p_211;
                            # 1198 "05function4.c"
                            info->sline=sline_212;
                            # 1199 "05function4.c"
                            break;
                        }
                    }
                    # 1203 "05function4.c"
                    parse_sharp_v5(info);
                    # 1205 "05function4.c"
                    __dec_obj90=type_name_180;
                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1205, 15),__exception_result_var_b11=((char*)(right_value251=parse_word(info))), come_pop_stackframe(), __exception_result_var_b11));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1207 "05function4.c"
                    parse_sharp_v5(info);
                    # 1228 "05function4.c"
                    # 1209 "05function4.c"
                    if(_if_conditional328=*info->p==123,                    _if_conditional328) {
                        # 1210 "05function4.c"
                        p_213=info->p;
                        # 1211 "05function4.c"
                        sline_214=info->sline;
                        # 1213 "05function4.c"
                        ((char*)(right_value252=skip_block(info)));
                        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1227 "05function4.c"
                        # 1215 "05function4.c"
                        if(_if_conditional329=*info->p==59,                        _if_conditional329) {
                            # 1216 "05function4.c"
                            info->p=head_178;
                            # 1217 "05function4.c"
                            info->sline=head_sline_179;
                            # 1218 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1219 "05function4.c"
                            __result133__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value254=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value253=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1219, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result133__;
                        }
                        else {
                            # 1222 "05function4.c"
                            anonymous_type_199=(_Bool)1;
                            # 1223 "05function4.c"
                            info->p=p_213;
                            # 1224 "05function4.c"
                            info->sline=sline_214;
                            # 1225 "05function4.c"
                            break;
                        }
                    }
                }
                else {
                    # 1474 "05function4.c"
                    # 1229 "05function4.c"
                    if(_if_conditional330=string_operator_equals(type_name_180,"_Alignas"),                    _if_conditional330) {
                        # 1230 "05function4.c"
                        expected_next_character(40,info);
                        # 1232 "05function4.c"
                        exp_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=expression_v13(info))));
                        if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1234 "05function4.c"
                        __dec_obj91=alignas__198;
                        alignas__198=(struct sNode*)come_increment_ref_count(exp_215);
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1236 "05function4.c"
                        expected_next_character(41,info);
                        # 1238 "05function4.c"
                        __dec_obj92=type_name_180;
                        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1238, 16),__exception_result_var_b12=((char*)(right_value256=parse_word(info))), come_pop_stackframe(), __exception_result_var_b12));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_215) { exp_215 = come_decrement_ref_count2(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1474 "05function4.c"
                        # 1240 "05function4.c"
                        if(_if_conditional331=string_operator_equals(type_name_180,"const"),                        _if_conditional331) {
                            # 1241 "05function4.c"
                            constant_182=(_Bool)1;
                            # 1243 "05function4.c"
                            __dec_obj93=type_name_180;
                            type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1243, 17),__exception_result_var_b13=((char*)(right_value257=parse_word(info))), come_pop_stackframe(), __exception_result_var_b13));
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1474 "05function4.c"
                            # 1245 "05function4.c"
                            if(_if_conditional332=string_operator_equals(type_name_180,"static"),                            _if_conditional332) {
                                # 1246 "05function4.c"
                                static__183=(_Bool)1;
                                # 1248 "05function4.c"
                                __dec_obj94=type_name_180;
                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1248, 18),__exception_result_var_b14=((char*)(right_value258=parse_word(info))), come_pop_stackframe(), __exception_result_var_b14));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1474 "05function4.c"
                                # 1250 "05function4.c"
                                if(_if_conditional333=string_operator_equals(type_name_180,"record"),                                _if_conditional333) {
                                    # 1251 "05function4.c"
                                    record__181=(_Bool)1;
                                    # 1253 "05function4.c"
                                    __dec_obj95=type_name_180;
                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1253, 19),__exception_result_var_b15=((char*)(right_value259=parse_word(info))), come_pop_stackframe(), __exception_result_var_b15));
                                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1474 "05function4.c"
                                    # 1255 "05function4.c"
                                    if(_if_conditional334=string_operator_equals(type_name_180,"come_mem_core"),                                    _if_conditional334) {
                                        # 1256 "05function4.c"
                                        come_mem_core__197=(_Bool)1;
                                        # 1258 "05function4.c"
                                        __dec_obj96=type_name_180;
                                        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1258, 20),__exception_result_var_b16=((char*)(right_value260=parse_word(info))), come_pop_stackframe(), __exception_result_var_b16));
                                        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1474 "05function4.c"
                                        # 1260 "05function4.c"
                                        if(_if_conditional335=string_operator_equals(type_name_180,"extern"),                                        _if_conditional335) {
                                            # 1261 "05function4.c"
                                            extern__195=(_Bool)1;
                                            # 1263 "05function4.c"
                                            __dec_obj97=type_name_180;
                                            type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1263, 21),__exception_result_var_b17=((char*)(right_value261=parse_word(info))), come_pop_stackframe(), __exception_result_var_b17));
                                            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1474 "05function4.c"
                                            # 1265 "05function4.c"
                                            if(_if_conditional336=string_operator_equals(type_name_180,"_Noreturn"),                                            _if_conditional336) {
                                                # 1266 "05function4.c"
                                                __dec_obj98=type_name_180;
                                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1266, 22),__exception_result_var_b18=((char*)(right_value262=parse_word(info))), come_pop_stackframe(), __exception_result_var_b18));
                                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1474 "05function4.c"
                                                # 1268 "05function4.c"
                                                if(_if_conditional337=string_operator_equals(type_name_180,"inline")||string_operator_equals(type_name_180,"__inline")||string_operator_equals(type_name_180,"__inline__")||string_operator_equals(type_name_180,"__always_inline"),                                                _if_conditional337) {
                                                    # 1269 "05function4.c"
                                                    inline__196=(_Bool)1;
                                                    # 1271 "05function4.c"
                                                    __dec_obj99=type_name_180;
                                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1271, 23),__exception_result_var_b19=((char*)(right_value263=parse_word(info))), come_pop_stackframe(), __exception_result_var_b19));
                                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1474 "05function4.c"
                                                    # 1273 "05function4.c"
                                                    if(_if_conditional338=string_operator_equals(type_name_180,"volatile"),                                                    _if_conditional338) {
                                                        # 1274 "05function4.c"
                                                        volatile__184=(_Bool)1;
                                                        # 1276 "05function4.c"
                                                        __dec_obj100=type_name_180;
                                                        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1276, 24),__exception_result_var_b20=((char*)(right_value264=parse_word(info))), come_pop_stackframe(), __exception_result_var_b20));
                                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        # 1474 "05function4.c"
                                                        # 1278 "05function4.c"
                                                        if(_if_conditional339=string_operator_equals(type_name_180,"long"),                                                        _if_conditional339) {
                                                            # 1345 "05function4.c"
                                                            {
                                                                # 1281 "05function4.c"
                                                                p_216=info->p;
                                                                # 1282 "05function4.c"
                                                                sline_217=info->sline;
                                                                # 1344 "05function4.c"
                                                                # 1284 "05function4.c"
                                                                if(_if_conditional340=!xisalpha(*info->p),                                                                _if_conditional340) {
                                                                    # 1285 "05function4.c"
                                                                    info->p=p_216;
                                                                    # 1286 "05function4.c"
                                                                    info->sline=sline_217;
                                                                    # 1288 "05function4.c"
                                                                    __dec_obj101=type_name_180;
                                                                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("long"))));
                                                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1289 "05function4.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 1292 "05function4.c"
                                                                    __dec_obj102=type_name_180;
                                                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1292, 25),__exception_result_var_b21=((char*)(right_value266=parse_word(info))), come_pop_stackframe(), __exception_result_var_b21));
                                                                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1343 "05function4.c"
                                                                    # 1294 "05function4.c"
                                                                    if(_if_conditional341=string_operator_equals(type_name_180,"unsigned"),                                                                    _if_conditional341) {
                                                                        # 1295 "05function4.c"
                                                                        __dec_obj103=type_name_180;
                                                                        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1295, 26),__exception_result_var_b22=((char*)(right_value267=parse_word(info))), come_pop_stackframe(), __exception_result_var_b22));
                                                                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1301 "05function4.c"
                                                                        # 1297 "05function4.c"
                                                                        if(_if_conditional342=string_operator_equals(type_name_180,"int"),                                                                        _if_conditional342) {
                                                                            # 1298 "05function4.c"
                                                                            long__187=(_Bool)1;
                                                                            # 1299 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1343 "05function4.c"
                                                                        # 1302 "05function4.c"
                                                                        if(_if_conditional343=string_operator_equals(type_name_180,"long"),                                                                        _if_conditional343) {
                                                                            # 1303 "05function4.c"
                                                                            p_216=info->p;
                                                                            # 1304 "05function4.c"
                                                                            sline_217=info->sline;
                                                                            # 1314 "05function4.c"
                                                                            # 1305 "05function4.c"
                                                                            if(_if_conditional344=xisalpha(*info->p),                                                                            _if_conditional344) {
                                                                                # 1306 "05function4.c"
                                                                                long_long_188=(_Bool)1;
                                                                                # 1307 "05function4.c"
                                                                                __dec_obj104=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1307, 27),__exception_result_var_b23=((char*)(right_value268=parse_word(info))), come_pop_stackframe(), __exception_result_var_b23));
                                                                                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1310 "05function4.c"
                                                                                long__187=(_Bool)1;
                                                                                # 1311 "05function4.c"
                                                                                break;
                                                                            }
                                                                            # 1325 "05function4.c"
                                                                            # 1314 "05function4.c"
                                                                            if(_if_conditional345=string_operator_equals(type_name_180,"int"),                                                                            _if_conditional345) {
                                                                                # 1315 "05function4.c"
                                                                                long_long_188=(_Bool)1;
                                                                                # 1316 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1325 "05function4.c"
                                                                                # 1318 "05function4.c"
                                                                                if(_if_conditional346=!is_type_name(type_name_180,info),                                                                                _if_conditional346) {
                                                                                    # 1319 "05function4.c"
                                                                                    __dec_obj105=type_name_180;
                                                                                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("long"))));
                                                                                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1320 "05function4.c"
                                                                                    long_long_188=(_Bool)1;
                                                                                    # 1321 "05function4.c"
                                                                                    info->p=p_216;
                                                                                    # 1322 "05function4.c"
                                                                                    info->sline=sline_217;
                                                                                    # 1323 "05function4.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1343 "05function4.c"
                                                                            # 1326 "05function4.c"
                                                                            if(_if_conditional347=is_type_name(type_name_180,info),                                                                            _if_conditional347) {
                                                                                # 1334 "05function4.c"
                                                                                # 1327 "05function4.c"
                                                                                if(long__187) {
                                                                                    # 1328 "05function4.c"
                                                                                    long_long_188=(_Bool)1;
                                                                                    # 1329 "05function4.c"
                                                                                    long__187=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 1332 "05function4.c"
                                                                                    long__187=(_Bool)1;
                                                                                }
                                                                                # 1334 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1337 "05function4.c"
                                                                                info->p=p_216;
                                                                                # 1338 "05function4.c"
                                                                                info->sline=sline_217;
                                                                                # 1340 "05function4.c"
                                                                                __dec_obj106=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("long"))));
                                                                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1341 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1474 "05function4.c"
                                                            # 1346 "05function4.c"
                                                            if(_if_conditional349=string_operator_equals(type_name_180,"unsigned"),                                                            _if_conditional349) {
                                                                # 1347 "05function4.c"
                                                                unsigned__186=(_Bool)1;
                                                                # 1414 "05function4.c"
                                                                # 1349 "05function4.c"
                                                                if(_if_conditional350=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional350) {
                                                                    # 1350 "05function4.c"
                                                                    p_218=info->p;
                                                                    # 1351 "05function4.c"
                                                                    sline_219=info->sline;
                                                                    # 1353 "05function4.c"
                                                                    __dec_obj107=type_name_180;
                                                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1353, 28),__exception_result_var_b24=((char*)(right_value271=parse_word(info))), come_pop_stackframe(), __exception_result_var_b24));
                                                                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1409 "05function4.c"
                                                                    # 1355 "05function4.c"
                                                                    if(_if_conditional351=string_operator_equals(type_name_180,"short"),                                                                    _if_conditional351) {
                                                                        # 1378 "05function4.c"
                                                                        # 1356 "05function4.c"
                                                                        if(_if_conditional352=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional352) {
                                                                            # 1357 "05function4.c"
                                                                            p_220=info->p;
                                                                            # 1358 "05function4.c"
                                                                            sline_221=info->sline;
                                                                            # 1360 "05function4.c"
                                                                            __dec_obj108=type_name_180;
                                                                            type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1360, 29),__exception_result_var_b25=((char*)(right_value272=parse_word(info))), come_pop_stackframe(), __exception_result_var_b25));
                                                                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1372 "05function4.c"
                                                                            # 1362 "05function4.c"
                                                                            if(_if_conditional353=is_type_name(type_name_180,info),                                                                            _if_conditional353) {
                                                                                # 1363 "05function4.c"
                                                                                short__189=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1366 "05function4.c"
                                                                                short__189=(_Bool)1;
                                                                                # 1367 "05function4.c"
                                                                                __dec_obj109=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("int"))));
                                                                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1369 "05function4.c"
                                                                                info->p=p_220;
                                                                                # 1370 "05function4.c"
                                                                                info->sline=sline_221;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1374 "05function4.c"
                                                                            short__189=(_Bool)1;
                                                                            # 1375 "05function4.c"
                                                                            __dec_obj110=type_name_180;
                                                                            type_name_180=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("int"))));
                                                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1376 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1409 "05function4.c"
                                                                        # 1379 "05function4.c"
                                                                        if(_if_conditional354=string_operator_equals(type_name_180,"long"),                                                                        _if_conditional354) {
                                                                            # 1402 "05function4.c"
                                                                            # 1380 "05function4.c"
                                                                            if(_if_conditional355=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional355) {
                                                                                # 1381 "05function4.c"
                                                                                p_222=info->p;
                                                                                # 1382 "05function4.c"
                                                                                sline_223=info->sline;
                                                                                # 1384 "05function4.c"
                                                                                __dec_obj111=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1384, 30),__exception_result_var_b26=((char*)(right_value275=parse_word(info))), come_pop_stackframe(), __exception_result_var_b26));
                                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1396 "05function4.c"
                                                                                # 1386 "05function4.c"
                                                                                if(_if_conditional356=is_type_name(type_name_180,info),                                                                                _if_conditional356) {
                                                                                    # 1387 "05function4.c"
                                                                                    long__187=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1390 "05function4.c"
                                                                                    long__187=(_Bool)1;
                                                                                    # 1391 "05function4.c"
                                                                                    __dec_obj112=type_name_180;
                                                                                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string("int"))));
                                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1393 "05function4.c"
                                                                                    info->p=p_222;
                                                                                    # 1394 "05function4.c"
                                                                                    info->sline=sline_223;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1398 "05function4.c"
                                                                                long__187=(_Bool)1;
                                                                                # 1399 "05function4.c"
                                                                                __dec_obj113=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("int"))));
                                                                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1400 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1409 "05function4.c"
                                                                            # 1403 "05function4.c"
                                                                            if(_if_conditional357=!is_type_name(type_name_180,info),                                                                            _if_conditional357) {
                                                                                # 1404 "05function4.c"
                                                                                __dec_obj114=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("int"))));
                                                                                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1405 "05function4.c"
                                                                                info->p=p_218;
                                                                                # 1406 "05function4.c"
                                                                                info->sline=sline_219;
                                                                                # 1407 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1411 "05function4.c"
                                                                    __dec_obj115=type_name_180;
                                                                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("int"))));
                                                                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1412 "05function4.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1474 "05function4.c"
                                                                # 1415 "05function4.c"
                                                                if(_if_conditional358=string_operator_equals(type_name_180,"signed")||string_operator_equals(type_name_180,"__signed__"),                                                                _if_conditional358) {
                                                                    # 1416 "05function4.c"
                                                                    unsigned__186=(_Bool)0;
                                                                    # 1418 "05function4.c"
                                                                    __dec_obj116=type_name_180;
                                                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1418, 31),__exception_result_var_b27=((char*)(right_value280=parse_word(info))), come_pop_stackframe(), __exception_result_var_b27));
                                                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1474 "05function4.c"
                                                                    # 1420 "05function4.c"
                                                                    if(_if_conditional359=string_operator_equals(type_name_180,"register"),                                                                    _if_conditional359) {
                                                                        # 1421 "05function4.c"
                                                                        register__185=(_Bool)1;
                                                                        # 1423 "05function4.c"
                                                                        __dec_obj117=type_name_180;
                                                                        type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1423, 32),__exception_result_var_b28=((char*)(right_value281=parse_word(info))), come_pop_stackframe(), __exception_result_var_b28));
                                                                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1474 "05function4.c"
                                                                        # 1425 "05function4.c"
                                                                        if(_if_conditional360=string_operator_equals(type_name_180,"restrict"),                                                                        _if_conditional360) {
                                                                            # 1426 "05function4.c"
                                                                            restrict__190=(_Bool)1;
                                                                            # 1428 "05function4.c"
                                                                            __dec_obj118=type_name_180;
                                                                            type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1428, 33),__exception_result_var_b29=((char*)(right_value282=parse_word(info))), come_pop_stackframe(), __exception_result_var_b29));
                                                                            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1474 "05function4.c"
                                                                            # 1430 "05function4.c"
                                                                            if(_if_conditional361=string_operator_equals(type_name_180,"_Addr"),                                                                            _if_conditional361) {
                                                                                # 1431 "05function4.c"
                                                                                __dec_obj119=type_name_180;
                                                                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1431, 34),__exception_result_var_b30=((char*)(right_value283=parse_word(info))), come_pop_stackframe(), __exception_result_var_b30));
                                                                                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1474 "05function4.c"
                                                                                # 1433 "05function4.c"
                                                                                if(_if_conditional362=string_operator_equals(type_name_180,"__restrict"),                                                                                _if_conditional362) {
                                                                                    # 1434 "05function4.c"
                                                                                    restrict__190=(_Bool)1;
                                                                                    # 1436 "05function4.c"
                                                                                    __dec_obj120=type_name_180;
                                                                                    type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1436, 35),__exception_result_var_b31=((char*)(right_value284=parse_word(info))), come_pop_stackframe(), __exception_result_var_b31));
                                                                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 1474 "05function4.c"
                                                                                    # 1438 "05function4.c"
                                                                                    if(_if_conditional363=string_operator_equals(type_name_180,"short"),                                                                                    _if_conditional363) {
                                                                                        # 1439 "05function4.c"
                                                                                        short__189=(_Bool)1;
                                                                                        # 1470 "05function4.c"
                                                                                        # 1441 "05function4.c"
                                                                                        if(_if_conditional364=*info->p==58,                                                                                        _if_conditional364) {
                                                                                            # 1442 "05function4.c"
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            # 1470 "05function4.c"
                                                                                            # 1444 "05function4.c"
                                                                                            if(_if_conditional365=xisalnum(*info->p),                                                                                            _if_conditional365) {
                                                                                                # 1445 "05function4.c"
                                                                                                p_224=info->p;
                                                                                                # 1446 "05function4.c"
                                                                                                sline_225=info->sline;
                                                                                                # 1447 "05function4.c"
                                                                                                __dec_obj121=type_name_180;
                                                                                                type_name_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1447, 36),__exception_result_var_b32=((char*)(right_value285=parse_word(info))), come_pop_stackframe(), __exception_result_var_b32));
                                                                                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1466 "05function4.c"
                                                                                                # 1449 "05function4.c"
                                                                                                if(_if_conditional366=string_operator_equals(type_name_180,"int"),                                                                                                _if_conditional366) {
                                                                                                    # 1450 "05function4.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1466 "05function4.c"
                                                                                                    # 1452 "05function4.c"
                                                                                                    if(_if_conditional367=string_operator_equals(type_name_180,"short"),                                                                                                    _if_conditional367) {
                                                                                                        # 1453 "05function4.c"
                                                                                                        short__189=(_Bool)0;
                                                                                                        # 1454 "05function4.c"
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1466 "05function4.c"
                                                                                                        # 1456 "05function4.c"
                                                                                                        if(_if_conditional368=is_type_name(type_name_180,info),                                                                                                        _if_conditional368) {
                                                                                                            # 1457 "05function4.c"
                                                                                                            info->p=p_224;
                                                                                                            # 1458 "05function4.c"
                                                                                                            info->sline=sline_225;
                                                                                                        }
                                                                                                        else {
                                                                                                            # 1461 "05function4.c"
                                                                                                            __dec_obj122=type_name_180;
                                                                                                            type_name_180=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("short"))));
                                                                                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            # 1462 "05function4.c"
                                                                                                            info->p=p_224;
                                                                                                            # 1463 "05function4.c"
                                                                                                            info->sline=sline_225;
                                                                                                            # 1464 "05function4.c"
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                # 1468 "05function4.c"
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 1472 "05function4.c"
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
    # 1476 "05function4.c"
    skip_pointer_attribute(info);
    # 1478 "05function4.c"
    pointer_num_226=0;
    # 1488 "05function4.c"
    while(_while_condtional38=*info->p==42,    _while_condtional38) {
        # 1480 "05function4.c"
        info->p++;
        # 1481 "05function4.c"
        skip_spaces_and_lf(info);
        # 1483 "05function4.c"
        skip_pointer_attribute(info);
        # 1485 "05function4.c"
        pointer_num_226++;
    }
    # 1488 "05function4.c"
    heap_227=(_Bool)0;
    # 1496 "05function4.c"
    # 1489 "05function4.c"
    if(_if_conditional369=*info->p==37,    _if_conditional369) {
        # 1490 "05function4.c"
        info->p++;
        # 1491 "05function4.c"
        skip_spaces_and_lf(info);
        # 1493 "05function4.c"
        heap_227=(_Bool)1;
    }
    # 1496 "05function4.c"
    lambda_flag_228=(_Bool)0;
    # 1513 "05function4.c"
    {
        # 1498 "05function4.c"
        pX_229=info->p;
        # 1499 "05function4.c"
        slineX_230=info->sline;
        # 1509 "05function4.c"
        # 1501 "05function4.c"
        if(_if_conditional370=xisalpha(*info->p)||*info->p==95,        _if_conditional370) {
            # 1502 "05function4.c"
            (void)(come_push_stackframe("05function4.c", 1502, 37),__exception_result_var_b33=((char*)(right_value287=parse_word(info))), come_pop_stackframe(), __exception_result_var_b33);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1507 "05function4.c"
            # 1504 "05function4.c"
            if(_if_conditional371=*info->p==40&&info->in_typedef,            _if_conditional371) {
                # 1505 "05function4.c"
                lambda_flag_228=(_Bool)1;
            }
        }
        # 1509 "05function4.c"
        info->p=pX_229;
        # 1510 "05function4.c"
        info->sline=slineX_230;
    }
    # 1513 "05function4.c"
    # 1514 "05function4.c"
    # 1516 "05function4.c"
    function_pointer_flag_233=(_Bool)0;
    # 1548 "05function4.c"
    {
        # 1518 "05function4.c"
        p_234=info->p;
        # 1519 "05function4.c"
        sline_235=info->sline;
        # 1544 "05function4.c"
        # 1521 "05function4.c"
        if(_if_conditional372=*info->p==40,        _if_conditional372) {
            # 1522 "05function4.c"
            info->p++;
            # 1523 "05function4.c"
            skip_spaces_and_lf(info);
            # 1525 "05function4.c"
            skip_pointer_attribute(info);
            # 1542 "05function4.c"
            # 1527 "05function4.c"
            if(_if_conditional373=*info->p==42||*info->p==94,            _if_conditional373) {
                # 1528 "05function4.c"
                function_pointer_flag_233=(_Bool)1;
            }
            else {
                # 1542 "05function4.c"
                # 1530 "05function4.c"
                if(_if_conditional374=xisalpha(*info->p)||*info->p==95,                _if_conditional374) {
                    # 1531 "05function4.c"
                    word_236=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1531, 38),__exception_result_var_b34=((char*)(right_value288=parse_word(info))), come_pop_stackframe(), __exception_result_var_b34));
                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1541 "05function4.c"
                    # 1533 "05function4.c"
                    if(_if_conditional375=*info->p==41,                    _if_conditional375) {
                        # 1534 "05function4.c"
                        info->p++;
                        # 1535 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1540 "05function4.c"
                        # 1537 "05function4.c"
                        if(_if_conditional376=*info->p==40,                        _if_conditional376) {
                            # 1538 "05function4.c"
                            function_pointer_flag_233=(_Bool)1;
                        }
                    }
                    word_236 = come_decrement_ref_count2(word_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1544 "05function4.c"
        info->p=p_234;
        # 1545 "05function4.c"
        info->sline=sline_235;
    }
    # 1548 "05function4.c"
    var_name_between_brace_237=(_Bool)0;
    # 1579 "05function4.c"
    {
        # 1550 "05function4.c"
        p_238=info->p;
        # 1551 "05function4.c"
        sline_239=info->sline;
        # 1575 "05function4.c"
        # 1553 "05function4.c"
        if(_if_conditional377=*info->p==40,        _if_conditional377) {
            # 1554 "05function4.c"
            info->p++;
            # 1555 "05function4.c"
            skip_spaces_and_lf(info);
            # 1557 "05function4.c"
            skip_pointer_attribute(info);
            # 1573 "05function4.c"
            # 1559 "05function4.c"
            if(_if_conditional378=xisalpha(*info->p)||*info->p==95,            _if_conditional378) {
                # 1560 "05function4.c"
                word_240=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1560, 39),__exception_result_var_b35=((char*)(right_value289=parse_word(info))), come_pop_stackframe(), __exception_result_var_b35));
                right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1572 "05function4.c"
                # 1562 "05function4.c"
                if(_if_conditional379=is_type_name(word_240,info),                _if_conditional379) {
                }
                else {
                    # 1572 "05function4.c"
                    # 1564 "05function4.c"
                    if(_if_conditional380=*info->p==41,                    _if_conditional380) {
                        # 1565 "05function4.c"
                        info->p++;
                        # 1566 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1571 "05function4.c"
                        # 1568 "05function4.c"
                        if(_if_conditional381=*info->p!=40,                        _if_conditional381) {
                            # 1569 "05function4.c"
                            var_name_between_brace_237=(_Bool)1;
                        }
                    }
                }
                word_240 = come_decrement_ref_count2(word_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1575 "05function4.c"
        info->p=p_238;
        # 1576 "05function4.c"
        info->sline=sline_239;
    }
    # 2261 "05function4.c"
    # 1579 "05function4.c"
    if(_if_conditional382=anonymous_type_199&&*info->p==123,    _if_conditional382) {
        # 1580 "05function4.c"
        # 1650 "05function4.c"
        # 1581 "05function4.c"
        if(struct__191) {
            # 1586 "05function4.c"
            # 1582 "05function4.c"
            if(_if_conditional384=string_operator_equals(type_name_180,""),            _if_conditional384) {
                # 1583 "05function4.c"
                __dec_obj123=type_name_180;
                type_name_180=(char*)come_increment_ref_count(((char*)(right_value290=xsprintf("anonymous_typeX%d",++anonymous_num_241))));
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1586 "05function4.c"
            node_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=parse_struct((char*)come_increment_ref_count(type_name_180),info))));
            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1593 "05function4.c"
            # 1588 "05function4.c"
            if(_if_conditional385=!node_compile(node_242,info),            _if_conditional385) {
                # 1589 "05function4.c"
                err_msg(info,"parse_struct is failed");
                # 1590 "05function4.c"
                __result134__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value293=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value292=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1590, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result134__;
            }
            # 1593 "05function4.c"
            pointer_num_243=0;
            # 1600 "05function4.c"
            while(_while_condtional39=*info->p==42,            _while_condtional39) {
                # 1596 "05function4.c"
                info->p++;
                # 1596 "05function4.c"
                skip_spaces_and_lf(info);
                # 1597 "05function4.c"
                pointer_num_243++;
            }
            # 1600 "05function4.c"
            __dec_obj124=type_231;
            type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1600, "sType")))),type_name_180,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1602 "05function4.c"
            type_231->mPointerNum=pointer_num_243;
            if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1650 "05function4.c"
            # 1604 "05function4.c"
            if(enum__193) {
                # 1609 "05function4.c"
                # 1605 "05function4.c"
                if(_if_conditional387=string_operator_equals(type_name_180,""),                _if_conditional387) {
                    # 1606 "05function4.c"
                    __dec_obj125=type_name_180;
                    type_name_180=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("anonymous_typeY%d",++anonymous_num_241))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1609 "05function4.c"
                node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=parse_enum((char*)come_increment_ref_count(type_name_180),info))));
                if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1618 "05function4.c"
                # 1611 "05function4.c"
                if(_if_conditional388=!info->no_output_err,                _if_conditional388) {
                    # 1616 "05function4.c"
                    # 1612 "05function4.c"
                    if(_if_conditional389=!node_compile(node_244,info),                    _if_conditional389) {
                        # 1613 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1614 "05function4.c"
                        __result135__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value299=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value298=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1614, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result135__;
                    }
                }
                # 1618 "05function4.c"
                __dec_obj126=type_231;
                type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1618, "sType")))),type_name_180,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1650 "05function4.c"
                # 1620 "05function4.c"
                if(union__192) {
                    # 1625 "05function4.c"
                    # 1621 "05function4.c"
                    if(_if_conditional391=string_operator_equals(type_name_180,""),                    _if_conditional391) {
                        # 1622 "05function4.c"
                        __dec_obj127=type_name_180;
                        type_name_180=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("anonymous_typeZ%d",++anonymous_num_241))));
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1625 "05function4.c"
                    node_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=parse_union((char*)come_increment_ref_count(type_name_180),info))));
                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1634 "05function4.c"
                    # 1628 "05function4.c"
                    if(_if_conditional392=!node_compile(node_245,info),                    _if_conditional392) {
                        # 1629 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1630 "05function4.c"
                        __result136__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value305=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value304=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1630, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_245) { node_245 = come_decrement_ref_count2(node_245, ((struct sNode*)node_245)->finalize, ((struct sNode*)node_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result136__;
                    }
                    # 1634 "05function4.c"
                    pointer_num_246=0;
                    # 1641 "05function4.c"
                    while(_while_condtional40=*info->p==42,                    _while_condtional40) {
                        # 1637 "05function4.c"
                        info->p++;
                        # 1637 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1638 "05function4.c"
                        pointer_num_246++;
                    }
                    # 1641 "05function4.c"
                    __dec_obj128=type_231;
                    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1641, "sType")))),type_name_180,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1643 "05function4.c"
                    type_231->mPointerNum=pointer_num_246;
                    if(node_245) { node_245 = come_decrement_ref_count2(node_245, ((struct sNode*)node_245)->finalize, ((struct sNode*)node_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1646 "05function4.c"
                    err_msg(info,"unexpected { character");
                    # 1647 "05function4.c"
                    __result137__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value309=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value308=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1647, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result137__;
                }
            }
        }
        # 1691 "05function4.c"
        # 1650 "05function4.c"
        if(parse_variable_name) {
            # 1651 "05function4.c"
            parse_sharp_v5(info);
            # 1657 "05function4.c"
            # 1652 "05function4.c"
            if(_if_conditional394=var_name_between_brace_237&&*info->p==40,            _if_conditional394) {
                # 1653 "05function4.c"
                info->p++;
                # 1654 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1674 "05function4.c"
            # 1657 "05function4.c"
            if(_if_conditional395=*info->p==58,            _if_conditional395) {
                # 1658 "05function4.c"
                __dec_obj129=var_name_232;
                var_name_232=(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(""))));
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1674 "05function4.c"
                # 1660 "05function4.c"
                if(anonymous_name_200) {
                    # 1661 "05function4.c"
                    # 1662 "05function4.c"
                    num_anonymous_var_name_247++;
                    # 1663 "05function4.c"
                    __dec_obj130=var_name_232;
                    var_name_232=(char*)come_increment_ref_count(((char*)(right_value311=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_247))));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1674 "05function4.c"
                    # 1665 "05function4.c"
                    if(_if_conditional397=xisalnum(*info->p)||*info->p==95,                    _if_conditional397) {
                        # 1666 "05function4.c"
                        __dec_obj131=var_name_232;
                        var_name_232=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1666, 40),__exception_result_var_b36=((char*)(right_value312=parse_word(info))), come_pop_stackframe(), __exception_result_var_b36));
                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1669 "05function4.c"
                        # 1670 "05function4.c"
                        num_anonymous_var_name_248++;
                        # 1671 "05function4.c"
                        __dec_obj132=var_name_232;
                        var_name_232=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_248))));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1679 "05function4.c"
            # 1674 "05function4.c"
            if(_if_conditional398=var_name_between_brace_237&&*info->p==41,            _if_conditional398) {
                # 1675 "05function4.c"
                info->p++;
                # 1676 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1690 "05function4.c"
            # 1679 "05function4.c"
            if(_if_conditional399=*info->p==58,            _if_conditional399) {
                # 1680 "05function4.c"
                info->p++;
                # 1681 "05function4.c"
                skip_spaces_and_lf(info);
                # 1683 "05function4.c"
                no_comma_249=info->no_comma;
                # 1684 "05function4.c"
                info->no_comma=(_Bool)1;
                # 1685 "05function4.c"
                node_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=expression_v13(info))));
                if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1686 "05function4.c"
                info->no_comma=no_comma_249;
                # 1688 "05function4.c"
                __dec_obj133=type_231->mSizeNum;
                type_231->mSizeNum=(struct sNode*)come_increment_ref_count(node_250);
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_250) { node_250 = come_decrement_ref_count2(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2261 "05function4.c"
        # 1692 "05function4.c"
        if(lambda_flag_228) {
            # 1693 "05function4.c"
            # 1716 "05function4.c"
            # 1694 "05function4.c"
            if(_if_conditional405=map$2charphsTypephp_operator_load_element(info->types,type_name_180),            _if_conditional405) {
                # 1695 "05function4.c"
                __dec_obj134=result_type_251;
                result_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_180)))));
                come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1696 "05function4.c"
                result_type_251->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_251->mClass->mName), "05function4.c", 1696, 41));
            }
            else {
                # 1716 "05function4.c"
                # 1698 "05function4.c"
                if(_if_conditional411=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_180)),                _if_conditional411) {
                    # 1704 "05function4.c"
                    for(                    i_260=0;                    i_260<list$1charph_length(info->generics_type_names);                    i_260++                    ){
                        # 1703 "05function4.c"
                        # 1700 "05function4.c"
                        if(_if_conditional415=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_260), "05function4.c", 1700, 42)),type_name_180),                        _if_conditional415) {
                            # 1701 "05function4.c"
                            __dec_obj135=result_type_251;
                            result_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value316=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1701, "sType")))),((char*)(right_value317=xsprintf("generics_type%d",i_260))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1716 "05function4.c"
                    # 1705 "05function4.c"
                    if(_if_conditional416=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_180)),                    _if_conditional416) {
                        # 1711 "05function4.c"
                        for(                        i_264=0;                        i_264<list$1charph_length(info->method_generics_type_names);                        i_264++                        ){
                            # 1710 "05function4.c"
                            # 1707 "05function4.c"
                            if(_if_conditional417=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_264), "05function4.c", 1707, 43)),type_name_180),                            _if_conditional417) {
                                # 1708 "05function4.c"
                                __dec_obj136=result_type_251;
                                result_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1708, "sType")))),((char*)(right_value320=xsprintf("mgenerics_type%d",i_264))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1713 "05function4.c"
                        __dec_obj137=result_type_251;
                        result_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1713, "sType")))),type_name_180,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1716 "05function4.c"
            result_type_251->mConstant=result_type_251->mConstant||constant_182;
            # 1717 "05function4.c"
            __dec_obj138=result_type_251->mAlignas;
            result_type_251->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
            # 1718 "05function4.c"
            result_type_251->mComeMemCore=result_type_251->mComeMemCore||come_mem_core__197;
            # 1719 "05function4.c"
            result_type_251->mRegister=register__185;
            # 1720 "05function4.c"
            result_type_251->mUnsigned=result_type_251->mUnsigned||unsigned__186;
            # 1721 "05function4.c"
            result_type_251->mVolatile=volatile__184;
            # 1722 "05function4.c"
            result_type_251->mRecord=result_type_251->mStatic||static__183;
            # 1723 "05function4.c"
            result_type_251->mStatic=result_type_251->mRecord||record__181;
            # 1724 "05function4.c"
            result_type_251->mExtern=result_type_251->mExtern||extern__195;
            # 1725 "05function4.c"
            result_type_251->mInline=result_type_251->mInline||inline__196;
            # 1726 "05function4.c"
            result_type_251->mRestrict=result_type_251->mRestrict||restrict__190;
            # 1727 "05function4.c"
            result_type_251->mLongLong=result_type_251->mLongLong||long_long_188;
            # 1728 "05function4.c"
            result_type_251->mLong=result_type_251->mLong||long__187;
            # 1729 "05function4.c"
            result_type_251->mShort=result_type_251->mShort||short__189;
            # 1730 "05function4.c"
            result_type_251->mPointerNum=pointer_num_226;
            # 1731 "05function4.c"
            result_type_251->mHeap=result_type_251->mHeap||heap_227;
            # 1733 "05function4.c"
            __dec_obj139=var_name_232;
            var_name_232=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1733, 44),__exception_result_var_b37=((char*)(right_value324=parse_word(info))), come_pop_stackframe(), __exception_result_var_b37));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1735 "05function4.c"
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value325=parse_params(info,(_Bool)0)));
            param_types_265=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_266=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_267=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_268=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1737 "05function4.c"
            __dec_obj140=type_231;
            type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value326=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1737, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1739 "05function4.c"
            __dec_obj142=type_231->mResultType;
            type_231->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value329=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value328=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1739, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_251)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1740 "05function4.c"
            __dec_obj143=type_231->mParamTypes;
            type_231->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_265);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1741 "05function4.c"
            __dec_obj144=type_231->mParamNames;
            type_231->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_266);
            come_call_finalizer2(list$1charph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1742 "05function4.c"
            type_231->mVarArgs=var_args_268;
            # 1743 "05function4.c"
            type_231->mExtern=extern__195;
            come_call_finalizer2(sType_finalize,result_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2261 "05function4.c"
            # 1745 "05function4.c"
            if(function_pointer_flag_233) {
                # 1746 "05function4.c"
                info->p++;
                # 1747 "05function4.c"
                skip_spaces_and_lf(info);
                # 1749 "05function4.c"
                skip_pointer_attribute(info);
                # 1756 "05function4.c"
                # 1751 "05function4.c"
                if(_if_conditional419=*info->p==42||*info->p==94,                _if_conditional419) {
                    # 1752 "05function4.c"
                    info->p++;
                    # 1753 "05function4.c"
                    skip_spaces_and_lf(info);
                }
                # 1756 "05function4.c"
                skip_pointer_attribute(info);
                # 1758 "05function4.c"
                # 1782 "05function4.c"
                # 1759 "05function4.c"
                if(_if_conditional420=map$2charphsTypephp_operator_load_element(info->types,type_name_180),                _if_conditional420) {
                    # 1760 "05function4.c"
                    __dec_obj145=result_type_269;
                    result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_180)))));
                    come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1761 "05function4.c"
                    result_type_269->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_269->mClass->mName), "05function4.c", 1761, 45));
                }
                else {
                    # 1782 "05function4.c"
                    # 1764 "05function4.c"
                    if(_if_conditional421=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_180)),                    _if_conditional421) {
                        # 1770 "05function4.c"
                        for(                        i_270=0;                        i_270<list$1charph_length(info->generics_type_names);                        i_270++                        ){
                            # 1769 "05function4.c"
                            # 1766 "05function4.c"
                            if(_if_conditional422=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_270), "05function4.c", 1766, 46)),type_name_180),                            _if_conditional422) {
                                # 1767 "05function4.c"
                                __dec_obj146=result_type_269;
                                result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1767, "sType")))),((char*)(right_value332=xsprintf("generics_type%d",i_270))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1782 "05function4.c"
                        # 1771 "05function4.c"
                        if(_if_conditional423=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_180)),                        _if_conditional423) {
                            # 1777 "05function4.c"
                            for(                            i_271=0;                            i_271<list$1charph_length(info->method_generics_type_names);                            i_271++                            ){
                                # 1776 "05function4.c"
                                # 1773 "05function4.c"
                                if(_if_conditional424=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_271), "05function4.c", 1773, 47)),type_name_180),                                _if_conditional424) {
                                    # 1774 "05function4.c"
                                    __dec_obj147=result_type_269;
                                    result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value334=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1774, "sType")))),((char*)(right_value335=xsprintf("mgenerics_type%d",i_271))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1779 "05function4.c"
                            __dec_obj148=result_type_269;
                            result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value337=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1779, "sType")))),type_name_180,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1782 "05function4.c"
                result_type_269->mConstant=result_type_269->mConstant||constant_182;
                # 1783 "05function4.c"
                __dec_obj149=result_type_269->mAlignas;
                result_type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                # 1784 "05function4.c"
                result_type_269->mComeMemCore=result_type_269->mComeMemCore||come_mem_core__197;
                # 1785 "05function4.c"
                result_type_269->mRegister=register__185;
                # 1786 "05function4.c"
                result_type_269->mUnsigned=result_type_269->mUnsigned||unsigned__186;
                # 1787 "05function4.c"
                result_type_269->mVolatile=volatile__184;
                # 1788 "05function4.c"
                result_type_269->mStatic=result_type_269->mStatic||static__183;
                # 1789 "05function4.c"
                result_type_269->mRecord=result_type_269->mRecord||record__181;
                # 1790 "05function4.c"
                result_type_269->mExtern=result_type_269->mExtern||extern__195;
                # 1791 "05function4.c"
                result_type_269->mInline=result_type_269->mInline||inline__196;
                # 1792 "05function4.c"
                result_type_269->mRestrict=result_type_269->mRestrict||restrict__190;
                # 1793 "05function4.c"
                result_type_269->mLongLong=result_type_269->mLongLong||long_long_188;
                # 1794 "05function4.c"
                result_type_269->mLong=result_type_269->mLong||long__187;
                # 1795 "05function4.c"
                result_type_269->mShort=result_type_269->mShort||short__189;
                # 1796 "05function4.c"
                result_type_269->mPointerNum+=pointer_num_226;
                # 1797 "05function4.c"
                result_type_269->mHeap=result_type_269->mHeap||heap_227;
                # 1810 "05function4.c"
                # 1799 "05function4.c"
                if(_if_conditional425=xisalnum(*info->p)||*info->p==95,                _if_conditional425) {
                    # 1800 "05function4.c"
                    __dec_obj150=var_name_232;
                    var_name_232=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1800, 48),__exception_result_var_b38=((char*)(right_value339=parse_word(info))), come_pop_stackframe(), __exception_result_var_b38));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1804 "05function4.c"
                    # 1801 "05function4.c"
                    if(_if_conditional426=*info->p==40,                    _if_conditional426) {
                        # 1802 "05function4.c"
                        __result156__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value341=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value340=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1802, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_269),(char*)come_increment_ref_count(var_name_232),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result156__;
                    }
                }
                else {
                    # 1806 "05function4.c"
                    # 1807 "05function4.c"
                    num_anonymous_var_name_272++;
                    # 1808 "05function4.c"
                    __dec_obj151=var_name_232;
                    var_name_232=(char*)come_increment_ref_count(((char*)(right_value342=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_272))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1810 "05function4.c"
                expected_next_character(41,info);
                # 1812 "05function4.c"
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value343=parse_params(info,(_Bool)0)));
                param_types_273=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_274=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_275=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_276=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1814 "05function4.c"
                __dec_obj152=type_231;
                type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value344=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1814, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1816 "05function4.c"
                __dec_obj153=type_231->mResultType;
                type_231->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value347=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value346=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1816, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_269)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1817 "05function4.c"
                __dec_obj154=type_231->mParamTypes;
                type_231->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_273);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1818 "05function4.c"
                __dec_obj155=type_231->mParamNames;
                type_231->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_274);
                come_call_finalizer2(list$1charph_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1819 "05function4.c"
                type_231->mVarArgs=var_args_276;
                # 1820 "05function4.c"
                type_231->mExtern=extern__195;
                come_call_finalizer2(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2261 "05function4.c"
                # 1822 "05function4.c"
                if(_if_conditional427=string_operator_equals(type_name_180,"__typeof__")&&*info->p==40,                _if_conditional427) {
                    # 1823 "05function4.c"
                    info->p++;
                    # 1824 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1826 "05function4.c"
                    exp_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1828 "05function4.c"
                    expected_next_character(41,info);
                    # 1835 "05function4.c"
                    # 1830 "05function4.c"
                    if(_if_conditional428=!node_compile(exp_277,info),                    _if_conditional428) {
                        # 1831 "05function4.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1832 "05function4.c"
                        __result158__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value350=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value349=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05function4.c", 1832, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result158__;
                    }
                    # 1835 "05function4.c"
                    come_value_278=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value351=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1836 "05function4.c"
                    dec_stack_ptr(1,info);
                    # 1838 "05function4.c"
                    __dec_obj157=type_231;
                    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(come_value_278->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1882 "05function4.c"
                    # 1840 "05function4.c"
                    if(parse_variable_name) {
                        # 1841 "05function4.c"
                        parse_sharp_v5(info);
                        # 1848 "05function4.c"
                        # 1843 "05function4.c"
                        if(_if_conditional433=var_name_between_brace_237&&*info->p==40,                        _if_conditional433) {
                            # 1844 "05function4.c"
                            info->p++;
                            # 1845 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1865 "05function4.c"
                        # 1848 "05function4.c"
                        if(_if_conditional434=*info->p==58,                        _if_conditional434) {
                            # 1849 "05function4.c"
                            __dec_obj158=var_name_232;
                            var_name_232=(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string(""))));
                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1865 "05function4.c"
                            # 1851 "05function4.c"
                            if(anonymous_name_200) {
                                # 1852 "05function4.c"
                                # 1853 "05function4.c"
                                num_anonymous_var_name_279++;
                                # 1854 "05function4.c"
                                __dec_obj159=var_name_232;
                                var_name_232=(char*)come_increment_ref_count(((char*)(right_value354=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_279))));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1865 "05function4.c"
                                # 1856 "05function4.c"
                                if(_if_conditional436=xisalnum(*info->p)||*info->p==95,                                _if_conditional436) {
                                    # 1857 "05function4.c"
                                    __dec_obj160=var_name_232;
                                    var_name_232=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1857, 49),__exception_result_var_b39=((char*)(right_value355=parse_word(info))), come_pop_stackframe(), __exception_result_var_b39));
                                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1860 "05function4.c"
                                    # 1861 "05function4.c"
                                    num_anonymous_var_name_280++;
                                    # 1862 "05function4.c"
                                    __dec_obj161=var_name_232;
                                    var_name_232=(char*)come_increment_ref_count(((char*)(right_value356=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_280))));
                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1870 "05function4.c"
                        # 1865 "05function4.c"
                        if(_if_conditional437=var_name_between_brace_237&&*info->p==41,                        _if_conditional437) {
                            # 1866 "05function4.c"
                            info->p++;
                            # 1867 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1881 "05function4.c"
                        # 1870 "05function4.c"
                        if(_if_conditional438=*info->p==58,                        _if_conditional438) {
                            # 1871 "05function4.c"
                            info->p++;
                            # 1872 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1874 "05function4.c"
                            no_comma_281=info->no_comma;
                            # 1875 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 1876 "05function4.c"
                            node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=expression_v13(info))));
                            if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1877 "05function4.c"
                            info->no_comma=no_comma_281;
                            # 1879 "05function4.c"
                            __dec_obj162=type_231->mSizeNum;
                            type_231->mSizeNum=(struct sNode*)come_increment_ref_count(node_282);
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 2049 "05function4.c"
                    # 1884 "05function4.c"
                    if(_if_conditional439=map$2charphsTypephp_operator_load_element(info->types,type_name_180),                    _if_conditional439) {
                        # 1885 "05function4.c"
                        __dec_obj163=type_231;
                        type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_180)))));
                        come_call_finalizer2(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1886 "05function4.c"
                        type_231->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_231->mClass->mName), "05function4.c", 1886, 50));
                        # 1887 "05function4.c"
                        __dec_obj164=type_231->mOriginalTypeName;
                        type_231->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(type_name_180))));
                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1888 "05function4.c"
                        type_231->mOriginalTypeNamePointerNum=pointer_num_226;
                        # 1890 "05function4.c"
                        type_231->mConstant=type_231->mConstant||constant_182;
                        # 1891 "05function4.c"
                        __dec_obj165=type_231->mAlignas;
                        type_231->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1892 "05function4.c"
                        type_231->mComeMemCore=type_231->mComeMemCore||come_mem_core__197;
                        # 1893 "05function4.c"
                        type_231->mRegister=register__185;
                        # 1894 "05function4.c"
                        type_231->mUnsigned=type_231->mUnsigned||unsigned__186;
                        # 1895 "05function4.c"
                        type_231->mVolatile=volatile__184;
                        # 1896 "05function4.c"
                        type_231->mStatic=type_231->mStatic||static__183;
                        # 1897 "05function4.c"
                        type_231->mRecord=type_231->mRecord||record__181;
                        # 1898 "05function4.c"
                        type_231->mExtern=type_231->mExtern||extern__195;
                        # 1899 "05function4.c"
                        type_231->mInline=type_231->mInline||inline__196;
                        # 1900 "05function4.c"
                        type_231->mRestrict=type_231->mRestrict||restrict__190;
                        # 1901 "05function4.c"
                        type_231->mLongLong=type_231->mLongLong||long_long_188;
                        # 1902 "05function4.c"
                        type_231->mLong=type_231->mLong||long__187;
                        # 1903 "05function4.c"
                        type_231->mShort=type_231->mShort||short__189;
                        # 1904 "05function4.c"
                        type_231->mPointerNum+=pointer_num_226;
                        # 1905 "05function4.c"
                        type_231->mHeap=type_231->mHeap||heap_227;
                    }
                    else {
                        # 2049 "05function4.c"
                        # 1907 "05function4.c"
                        if(_if_conditional440=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_180)),                        _if_conditional440) {
                            # 1914 "05function4.c"
                            for(                            i_283=0;                            i_283<list$1charph_length(info->generics_type_names);                            i_283++                            ){
                                # 1912 "05function4.c"
                                # 1909 "05function4.c"
                                if(_if_conditional441=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_283), "05function4.c", 1909, 51)),type_name_180),                                _if_conditional441) {
                                    # 1910 "05function4.c"
                                    __dec_obj166=type_231;
                                    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value360=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1910, "sType")))),((char*)(right_value361=xsprintf("generics_type%d",i_283))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1914 "05function4.c"
                            type_231->mConstant=type_231->mConstant||constant_182;
                            # 1915 "05function4.c"
                            __dec_obj167=type_231->mAlignas;
                            type_231->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1916 "05function4.c"
                            type_231->mComeMemCore=type_231->mComeMemCore||come_mem_core__197;
                            # 1917 "05function4.c"
                            type_231->mRegister=register__185;
                            # 1918 "05function4.c"
                            type_231->mUnsigned=type_231->mUnsigned||unsigned__186;
                            # 1919 "05function4.c"
                            type_231->mVolatile=volatile__184;
                            # 1920 "05function4.c"
                            type_231->mStatic=type_231->mStatic||static__183;
                            # 1921 "05function4.c"
                            type_231->mRecord=type_231->mRecord||record__181;
                            # 1922 "05function4.c"
                            type_231->mExtern=type_231->mExtern||extern__195;
                            # 1923 "05function4.c"
                            type_231->mInline=type_231->mInline||inline__196;
                            # 1924 "05function4.c"
                            type_231->mRestrict=type_231->mRestrict||restrict__190;
                            # 1925 "05function4.c"
                            type_231->mLongLong=type_231->mLongLong||long_long_188;
                            # 1926 "05function4.c"
                            type_231->mLong=type_231->mLong||long__187;
                            # 1927 "05function4.c"
                            type_231->mShort=type_231->mShort||short__189;
                            # 1928 "05function4.c"
                            type_231->mPointerNum+=pointer_num_226;
                            # 1929 "05function4.c"
                            type_231->mHeap=type_231->mHeap||heap_227;
                        }
                        else {
                            # 2049 "05function4.c"
                            # 1931 "05function4.c"
                            if(_if_conditional442=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_180)),                            _if_conditional442) {
                                # 1938 "05function4.c"
                                for(                                i_284=0;                                i_284<list$1charph_length(info->method_generics_type_names);                                i_284++                                ){
                                    # 1936 "05function4.c"
                                    # 1933 "05function4.c"
                                    if(_if_conditional443=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_284), "05function4.c", 1933, 52)),type_name_180),                                    _if_conditional443) {
                                        # 1934 "05function4.c"
                                        __dec_obj168=type_231;
                                        type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value365=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value363=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1934, "sType")))),((char*)(right_value364=xsprintf("mgenerics_type%d",i_284))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1938 "05function4.c"
                                type_231->mConstant=type_231->mConstant||constant_182;
                                # 1939 "05function4.c"
                                __dec_obj169=type_231->mAlignas;
                                type_231->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1940 "05function4.c"
                                type_231->mComeMemCore=type_231->mComeMemCore||come_mem_core__197;
                                # 1941 "05function4.c"
                                type_231->mRegister=register__185;
                                # 1942 "05function4.c"
                                type_231->mUnsigned=type_231->mUnsigned||unsigned__186;
                                # 1943 "05function4.c"
                                type_231->mVolatile=volatile__184;
                                # 1944 "05function4.c"
                                type_231->mStatic=type_231->mStatic||static__183;
                                # 1945 "05function4.c"
                                type_231->mRecord=type_231->mRecord||record__181;
                                # 1946 "05function4.c"
                                type_231->mExtern=type_231->mExtern||extern__195;
                                # 1947 "05function4.c"
                                type_231->mInline=type_231->mInline||inline__196;
                                # 1948 "05function4.c"
                                type_231->mRestrict=type_231->mRestrict||restrict__190;
                                # 1949 "05function4.c"
                                type_231->mLongLong=type_231->mLongLong||long_long_188;
                                # 1950 "05function4.c"
                                type_231->mLong=type_231->mLong||long__187;
                                # 1951 "05function4.c"
                                type_231->mShort=type_231->mShort||short__189;
                                # 1952 "05function4.c"
                                type_231->mPointerNum+=pointer_num_226;
                                # 1953 "05function4.c"
                                type_231->mHeap=type_231->mHeap||heap_227;
                            }
                            else {
                                # 2049 "05function4.c"
                                # 1955 "05function4.c"
                                if(_if_conditional444=*info->p==60,                                _if_conditional444) {
                                    # 1956 "05function4.c"
                                    info->p++;
                                    # 1957 "05function4.c"
                                    skip_spaces_and_lf(info);
                                    # 1964 "05function4.c"
                                    # 1959 "05function4.c"
                                    if(_if_conditional445=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_180)==((void*)0),                                    _if_conditional445) {
                                        # 1961 "05function4.c"
                                        __result159__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value367=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value366=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1961, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result159__;
                                    }
                                    # 1964 "05function4.c"
                                    __dec_obj170=type_231;
                                    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value368=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1964, "sType")))),type_name_180,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1991 "05function4.c"
                                    while(_while_condtional43=(_Bool)1,                                    _while_condtional43) {
                                        # 1969 "05function4.c"
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value370=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_285=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_286=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_287=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 1973 "05function4.c"
                                        # 1969 "05function4.c"
                                        if(_if_conditional446=!err_287,                                        _if_conditional446) {
                                            # 1970 "05function4.c"
                                            __result160__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value372=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value371=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1970, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_286 = come_decrement_ref_count2(var_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result160__;
                                        }
                                        # 1973 "05function4.c"
                                        list$1sTypeph_push_back(type_231->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_285));
                                        # 1989 "05function4.c"
                                        # 1975 "05function4.c"
                                        if(_if_conditional447=*info->p==44,                                        _if_conditional447) {
                                            # 1976 "05function4.c"
                                            info->p++;
                                            # 1977 "05function4.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 1989 "05function4.c"
                                            # 1979 "05function4.c"
                                            if(_if_conditional448=*info->p==62,                                            _if_conditional448) {
                                                # 1980 "05function4.c"
                                                info->p++;
                                                # 1981 "05function4.c"
                                                skip_spaces_and_lf(info);
                                                # 1983 "05function4.c"
                                                come_call_finalizer2(sType_finalize,generics_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_286 = come_decrement_ref_count2(var_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 1986 "05function4.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 1987 "05function4.c"
                                                __result161__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value374=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value373=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1987, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_286 = come_decrement_ref_count2(var_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result161__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_286 = come_decrement_ref_count2(var_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2003 "05function4.c"
                                    # 1991 "05function4.c"
                                    if(_if_conditional449=is_contained_generics_class(type_231,info),                                    _if_conditional449) {
                                        # 1992 "05function4.c"
                                        __dec_obj171=type_231;
                                        type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value375=solve_generics(type_231,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 2001 "05function4.c"
                                        # 1995 "05function4.c"
                                        if(_if_conditional450=!output_generics_struct(type_231,type_231,info),                                        _if_conditional450) {
                                            # 1997 "05function4.c"
                                            new_name_288=(char*)come_increment_ref_count(((char*)(right_value376=create_generics_name(type_231,info))));
                                            right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1998 "05function4.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_288);
                                            # 1999 "05function4.c"
                                            exit(7);
                                            new_name_288 = come_decrement_ref_count2(new_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 2003 "05function4.c"
                                    type_231->mConstant=type_231->mConstant||constant_182;
                                    # 2004 "05function4.c"
                                    __dec_obj172=type_231->mAlignas;
                                    type_231->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2005 "05function4.c"
                                    type_231->mComeMemCore=type_231->mComeMemCore||come_mem_core__197;
                                    # 2006 "05function4.c"
                                    type_231->mRegister=register__185;
                                    # 2007 "05function4.c"
                                    type_231->mUnsigned=type_231->mUnsigned||unsigned__186;
                                    # 2008 "05function4.c"
                                    type_231->mVolatile=volatile__184;
                                    # 2009 "05function4.c"
                                    type_231->mStatic=type_231->mStatic||static__183;
                                    # 2010 "05function4.c"
                                    type_231->mRecord=type_231->mRecord||record__181;
                                    # 2011 "05function4.c"
                                    type_231->mExtern=type_231->mExtern||extern__195;
                                    # 2012 "05function4.c"
                                    type_231->mInline=type_231->mInline||inline__196;
                                    # 2013 "05function4.c"
                                    type_231->mRestrict=type_231->mRestrict||restrict__190;
                                    # 2014 "05function4.c"
                                    type_231->mLongLong=type_231->mLongLong||long_long_188;
                                    # 2015 "05function4.c"
                                    type_231->mLong=type_231->mLong||long__187;
                                    # 2016 "05function4.c"
                                    type_231->mShort=type_231->mShort||short__189;
                                    # 2017 "05function4.c"
                                    type_231->mPointerNum+=pointer_num_226;
                                    # 2018 "05function4.c"
                                    type_231->mHeap=type_231->mHeap||heap_227;
                                }
                                else {
                                    # 2029 "05function4.c"
                                    # 2021 "05function4.c"
                                    if(struct__191) {
                                        # 2022 "05function4.c"
                                        klass_289=map$2charphsClassphp_operator_load_element(info->classes,type_name_180);
                                        # 2027 "05function4.c"
                                        # 2024 "05function4.c"
                                        if(_if_conditional452=klass_289==((void*)0)&&*info->p!=60,                                        _if_conditional452) {
                                            # 2025 "05function4.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_180),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value384=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value383=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 2025, "sClass")))),type_name_180,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 2029 "05function4.c"
                                    __dec_obj173=type_231;
                                    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value385=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2029, "sType")))),type_name_180,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 2031 "05function4.c"
                                    type_231->mConstant=type_231->mConstant||constant_182;
                                    # 2032 "05function4.c"
                                    __dec_obj174=type_231->mAlignas;
                                    type_231->mAlignas=(struct sNode*)come_increment_ref_count(alignas__198);
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2033 "05function4.c"
                                    type_231->mComeMemCore=type_231->mComeMemCore||come_mem_core__197;
                                    # 2034 "05function4.c"
                                    type_231->mRegister=register__185;
                                    # 2035 "05function4.c"
                                    type_231->mUnsigned=type_231->mUnsigned||unsigned__186;
                                    # 2036 "05function4.c"
                                    type_231->mVolatile=volatile__184;
                                    # 2037 "05function4.c"
                                    type_231->mStatic=type_231->mStatic||static__183;
                                    # 2038 "05function4.c"
                                    type_231->mRecord=type_231->mRecord||record__181;
                                    # 2039 "05function4.c"
                                    type_231->mExtern=type_231->mExtern||extern__195;
                                    # 2040 "05function4.c"
                                    type_231->mInline=type_231->mInline||inline__196;
                                    # 2041 "05function4.c"
                                    type_231->mRestrict=type_231->mRestrict||restrict__190;
                                    # 2042 "05function4.c"
                                    type_231->mLongLong=type_231->mLongLong||long_long_188;
                                    # 2043 "05function4.c"
                                    type_231->mLong=type_231->mLong||long__187;
                                    # 2044 "05function4.c"
                                    type_231->mShort=type_231->mShort||short__189;
                                    # 2045 "05function4.c"
                                    type_231->mPointerNum+=pointer_num_226;
                                    # 2046 "05function4.c"
                                    type_231->mHeap=type_231->mHeap||heap_227;
                                }
                            }
                        }
                    }
                    # 2049 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2063 "05function4.c"
                    while(_while_condtional52=*info->p==42,                    _while_condtional52) {
                        # 2052 "05function4.c"
                        info->p++;
                        # 2053 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2055 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2057 "05function4.c"
                        type_231->mPointerNum++;
                        # 2061 "05function4.c"
                        # 2058 "05function4.c"
                        if(type_231->mNoSolvedGenericsType->v1) {
                            # 2059 "05function4.c"
                            type_231->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2073 "05function4.c"
                    # 2063 "05function4.c"
                    if(_if_conditional501=*info->p==37,                    _if_conditional501) {
                        # 2064 "05function4.c"
                        info->p++;
                        # 2065 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2067 "05function4.c"
                        type_231->mHeap=(_Bool)1;
                        # 2071 "05function4.c"
                        # 2068 "05function4.c"
                        if(type_231->mNoSolvedGenericsType->v1) {
                            # 2069 "05function4.c"
                            type_231->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2084 "05function4.c"
                    # 2073 "05function4.c"
                    if(_if_conditional503=*info->p==38,                    _if_conditional503) {
                        # 2074 "05function4.c"
                        info->p++;
                        # 2075 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2077 "05function4.c"
                        type_231->mNoHeap=(_Bool)1;
                        # 2082 "05function4.c"
                        # 2079 "05function4.c"
                        if(type_231->mNoSolvedGenericsType->v1) {
                            # 2080 "05function4.c"
                            type_231->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2097 "05function4.c"
                    # 2084 "05function4.c"
                    if(_if_conditional505=*info->p==63,                    _if_conditional505) {
                        # 2085 "05function4.c"
                        info->p++;
                        # 2095 "05function4.c"
                        # 2087 "05function4.c"
                        if(_if_conditional506=*info->p==63,                        _if_conditional506) {
                            # 2088 "05function4.c"
                            info->p++;
                            # 2089 "05function4.c"
                            type_231->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2092 "05function4.c"
                            type_231->mNullValue=(_Bool)1;
                        }
                        # 2095 "05function4.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2104 "05function4.c"
                    # 2097 "05function4.c"
                    if(_if_conditional507=*info->p==96,                    _if_conditional507) {
                        # 2098 "05function4.c"
                        info->p++;
                        # 2099 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2101 "05function4.c"
                        type_231->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2104 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2119 "05function4.c"
                    while(_while_condtional53=*info->p==42,                    _while_condtional53) {
                        # 2107 "05function4.c"
                        info->p++;
                        # 2108 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2110 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2112 "05function4.c"
                        type_231->mPointerNum++;
                        # 2117 "05function4.c"
                        # 2114 "05function4.c"
                        if(type_231->mNoSolvedGenericsType->v1) {
                            # 2115 "05function4.c"
                            type_231->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2129 "05function4.c"
                    # 2119 "05function4.c"
                    if(_if_conditional509=*info->p==37,                    _if_conditional509) {
                        # 2120 "05function4.c"
                        info->p++;
                        # 2121 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2123 "05function4.c"
                        type_231->mHeap=(_Bool)1;
                        # 2127 "05function4.c"
                        # 2124 "05function4.c"
                        if(type_231->mNoSolvedGenericsType->v1) {
                            # 2125 "05function4.c"
                            type_231->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2169 "05function4.c"
                    # 2129 "05function4.c"
                    if(_if_conditional511=parse_multiple_type&&*info->p==44,                    _if_conditional511) {
                        # 2130 "05function4.c"
                        types_334=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value388=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value387=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2130, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2132 "05function4.c"
                        list$1sTypeph_push_back(types_334,(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(type_231)))));
                        come_call_finalizer2(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2147 "05function4.c"
                        while(_while_condtional54=*info->p==44,                        _while_condtional54) {
                            # 2135 "05function4.c"
                            info->p++;
                            # 2136 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2138 "05function4.c"
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value390=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_335=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_336=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_337=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 2144 "05function4.c"
                            # 2140 "05function4.c"
                            if(_if_conditional512=!err_337,                            _if_conditional512) {
                                # 2141 "05function4.c"
                                __result186__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value392=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value391=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2141, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result186__;
                            }
                            # 2144 "05function4.c"
                            list$1sTypeph_push_back(types_334,(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(type2_335)))));
                            come_call_finalizer2(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2147 "05function4.c"
                        num_tuples_338=list$1sTypeph_length(types_334);
                        # 2149 "05function4.c"
                        __dec_obj175=type_231;
                        type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value396=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value394=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2149, "sType")))),((char*)(right_value395=xsprintf("tuple%d",num_tuples_338))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2150 "05function4.c"
                        type_231->mPointerNum++;
                        # 2151 "05function4.c"
                        type_231->mHeap=(_Bool)1;
                        # 2157 "05function4.c"
                        for(                        o2_saved_339=(struct list$1sTypeph*)come_increment_ref_count((types_334)),it_340=list$1sTypeph_begin((o2_saved_339));                        !list$1sTypeph_end((o2_saved_339));                        it_340=list$1sTypeph_next((o2_saved_339))                        ){
                            # 2154 "05function4.c"
                            list$1sTypeph_push_back(type_231->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_clone(it_340)))));
                            come_call_finalizer2(sType_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 2168 "05function4.c"
                        # 2157 "05function4.c"
                        if(_if_conditional513=is_contained_generics_class(type_231,info),                        _if_conditional513) {
                            # 2158 "05function4.c"
                            __dec_obj176=type_231;
                            type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=solve_generics(type_231,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2167 "05function4.c"
                            # 2161 "05function4.c"
                            if(_if_conditional514=!output_generics_struct(type_231,type_231,info),                            _if_conditional514) {
                                # 2163 "05function4.c"
                                new_name_341=(char*)come_increment_ref_count(((char*)(right_value399=create_generics_name(type_231,info))));
                                right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2164 "05function4.c"
                                printf("output generics is failed(%s)\n",new_name_341);
                                # 2165 "05function4.c"
                                exit(9);
                                new_name_341 = come_decrement_ref_count2(new_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2260 "05function4.c"
                    # 2218 "05function4.c"
                    if(parse_variable_name) {
                        # 2219 "05function4.c"
                        parse_sharp_v5(info);
                        # 2226 "05function4.c"
                        # 2221 "05function4.c"
                        if(_if_conditional516=var_name_between_brace_237&&*info->p==40,                        _if_conditional516) {
                            # 2222 "05function4.c"
                            info->p++;
                            # 2223 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2243 "05function4.c"
                        # 2226 "05function4.c"
                        if(_if_conditional517=*info->p==58,                        _if_conditional517) {
                            # 2227 "05function4.c"
                            __dec_obj177=var_name_232;
                            var_name_232=(char*)come_increment_ref_count(((char*)(right_value400=__builtin_string(""))));
                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2243 "05function4.c"
                            # 2229 "05function4.c"
                            if(anonymous_name_200) {
                                # 2230 "05function4.c"
                                # 2231 "05function4.c"
                                num_anonymous_var_name_342++;
                                # 2232 "05function4.c"
                                __dec_obj178=var_name_232;
                                var_name_232=(char*)come_increment_ref_count(((char*)(right_value401=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_342))));
                                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2243 "05function4.c"
                                # 2234 "05function4.c"
                                if(_if_conditional519=xisalnum(*info->p)||*info->p==95,                                _if_conditional519) {
                                    # 2235 "05function4.c"
                                    __dec_obj179=var_name_232;
                                    var_name_232=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 2235, 53),__exception_result_var_b40=((char*)(right_value402=parse_word(info))), come_pop_stackframe(), __exception_result_var_b40));
                                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2238 "05function4.c"
                                    # 2239 "05function4.c"
                                    num_anonymous_var_name_343++;
                                    # 2240 "05function4.c"
                                    __dec_obj180=var_name_232;
                                    var_name_232=(char*)come_increment_ref_count(((char*)(right_value403=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_343))));
                                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2248 "05function4.c"
                        # 2243 "05function4.c"
                        if(_if_conditional520=var_name_between_brace_237&&*info->p==41,                        _if_conditional520) {
                            # 2244 "05function4.c"
                            info->p++;
                            # 2245 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2259 "05function4.c"
                        # 2248 "05function4.c"
                        if(_if_conditional521=*info->p==58,                        _if_conditional521) {
                            # 2249 "05function4.c"
                            info->p++;
                            # 2250 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2252 "05function4.c"
                            no_comma_344=info->no_comma;
                            # 2253 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 2254 "05function4.c"
                            node_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=expression_v13(info))));
                            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2255 "05function4.c"
                            info->no_comma=no_comma_344;
                            # 2257 "05function4.c"
                            __dec_obj181=type_231->mSizeNum;
                            type_231->mSizeNum=(struct sNode*)come_increment_ref_count(node_345);
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_345) { node_345 = come_decrement_ref_count2(node_345, ((struct sNode*)node_345)->finalize, ((struct sNode*)node_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2261 "05function4.c"
    parse_sharp_v5(info);
    # 2286 "05function4.c"
    while(_while_condtional55=*info->p==91,    _while_condtional55) {
        # 2264 "05function4.c"
        info->p++;
        # 2265 "05function4.c"
        skip_spaces_and_lf(info);
        # 2266 "05function4.c"
        parse_sharp_v5(info);
        # 2268 "05function4.c"
        skip_pointer_attribute(info);
        # 2278 "05function4.c"
        # 2270 "05function4.c"
        if(_if_conditional522=*info->p==93,        _if_conditional522) {
            # 2271 "05function4.c"
            info->p++;
            # 2272 "05function4.c"
            skip_spaces_and_lf(info);
            # 2274 "05function4.c"
            type_231->mArrayPointerType=(_Bool)1;
            # 2275 "05function4.c"
            type_231->mPointerNum++;
            # 2276 "05function4.c"
            break;
        }
        # 2278 "05function4.c"
        parse_sharp_v5(info);
        # 2280 "05function4.c"
        node_346=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=expression_v13(info))));
        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2281 "05function4.c"
        list$1sNodeph_push_back(type_231->mArrayNum,(struct sNode*)come_increment_ref_count(node_346));
        # 2282 "05function4.c"
        parse_sharp_v5(info);
        # 2284 "05function4.c"
        expected_next_character(93,info);
        if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2286 "05function4.c"
    asm_name_347=(char*)come_increment_ref_count(((char*)(right_value406=parse_attribute(info))));
    right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2288 "05function4.c"
    __dec_obj182=type_231->mAsmName;
    type_231->mAsmName=(char*)come_increment_ref_count(asm_name_347);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2290 "05function4.c"
    parse_sharp_v5(info);
    # 2292 "05function4.c"
    __result187__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value408=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value407=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2292, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_231),(char*)come_increment_ref_count(var_name_232),(_Bool)1)));
    type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_347 = come_decrement_ref_count2(asm_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result187__;
    type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__198) { alignas__198 = come_decrement_ref_count2(alignas__198, ((struct sNode*)alignas__198)->finalize, ((struct sNode*)alignas__198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_232 = come_decrement_ref_count2(var_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_347 = come_decrement_ref_count2(asm_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj84;
char* __dec_obj85;
struct tuple3$3sTypephcharphbool* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1804 "./neo-c.h"
                                    __dec_obj84=self->v1;
                                    self->v1=(struct sType*)come_increment_ref_count(v1);
                                    come_call_finalizer2(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 1805 "./neo-c.h"
                                    __dec_obj85=self->v2;
                                    self->v2=(char*)come_increment_ref_count(v2);
                                    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 1806 "./neo-c.h"
                                    self->v3=v3;
                                    # 1808 "./neo-c.h"
                                    __result128__ = __result_obj__ = self;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result128__;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_252;
unsigned int hash_253;
unsigned int it_254;
_Bool _while_condtional41;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sType* __result138__;
_Bool _if_conditional403;
_Bool _if_conditional404;
struct sType* __result139__;
struct sType* __result140__;
struct sType* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_252, 0, sizeof(struct sType*));
memset(&hash_253, 0, sizeof(unsigned int));
memset(&it_254, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_252,0,sizeof(struct sType*));
                # 1547 "./neo-c.h"
                hash_253=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_254=hash_253;
                # 1572 "./neo-c.h"
                while(_while_condtional41=(_Bool)1,                _while_condtional41) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional401=self->item_existance[it_254],                    _if_conditional401) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional402=string_equals(self->keys[it_254],key),                        _if_conditional402) {
                            # 1555 "./neo-c.h"
                            __result138__ = __result_obj__ = self->items[it_254];
                            come_call_finalizer2(sType_finalize,default_value_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result138__;
                        }
                        # 1558 "./neo-c.h"
                        it_254++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional403=it_254>=self->size,                        _if_conditional403) {
                            # 1561 "./neo-c.h"
                            it_254=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional404=it_254==hash_253,                            _if_conditional404) {
                                # 1564 "./neo-c.h"
                                __result139__ = __result_obj__ = default_value_252;
                                come_call_finalizer2(sType_finalize,default_value_252, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result139__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result140__ = __result_obj__ = default_value_252;
                        come_call_finalizer2(sType_finalize,default_value_252, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result140__;
                    }
                }
                # 1572 "./neo-c.h"
                __result141__ = __result_obj__ = default_value_252;
                come_call_finalizer2(sType_finalize,default_value_252, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result141__;
                come_call_finalizer2(sType_finalize,default_value_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_257;
_Bool _if_conditional410;
_Bool __result149__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_257, 0, sizeof(char*));
                    # 746 "./neo-c.h"
                    for(                    it_257=list$1charph_begin(self);                    !list$1charph_end(self);                    it_257=list$1charph_next(self)                    ){
                        # 744 "./neo-c.h"
                        # 741 "./neo-c.h"
                        if(_if_conditional410=string_operator_equals(it_257,item),                        _if_conditional410) {
                            # 742 "./neo-c.h"
                            __result149__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result149__;
                        }
                    }
                    # 746 "./neo-c.h"
                    __result150__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result150__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional406;
char* result_255;
char* __result142__;
_Bool _if_conditional407;
char* __result143__;
char* result_256;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_255, 0, sizeof(char*));
memset(&result_256, 0, sizeof(char*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional406=self==((void*)0),                        _if_conditional406) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_255,0,sizeof(char*));
                            # 288 "./neo-c.h"
                            __result142__ = __result_obj__ = result_255;
                            return __result142__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result143__ = __result_obj__ = self->it->item;
                            return __result143__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_256,0,sizeof(char*));
                        # 298 "./neo-c.h"
                        __result144__ = __result_obj__ = result_256;
                        return __result144__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result145__ = self==((void*)0)||self->it==((void*)0);
                        return __result145__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional408;
char* result_258;
char* __result146__;
_Bool _if_conditional409;
char* __result147__;
char* result_259;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_258, 0, sizeof(char*));
memset(&result_259, 0, sizeof(char*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional408=self==((void*)0)||self->it==((void*)0),                        _if_conditional408) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_258,0,sizeof(char*));
                            # 305 "./neo-c.h"
                            __result146__ = __result_obj__ = result_258;
                            return __result146__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result147__ = __result_obj__ = self->it->item;
                            return __result147__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_259,0,sizeof(char*));
                        # 316 "./neo-c.h"
                        __result148__ = __result_obj__ = result_259;
                        return __result148__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional412;
int __result151__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 367 "./neo-c.h"
                        # 364 "./neo-c.h"
                        if(_if_conditional412=self==((void*)0),                        _if_conditional412) {
                            # 365 "./neo-c.h"
                            __result151__ = 0;
                            return __result151__;
                        }
                        # 367 "./neo-c.h"
                        __result152__ = self->len;
                        return __result152__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional413;
struct list_item$1charph* it_261;
int i_262;
_Bool _while_condtional42;
_Bool _if_conditional414;
char* __result153__;
char* default_value_263;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_261, 0, sizeof(struct list_item$1charph*));
memset(&i_262, 0, sizeof(int));
memset(&default_value_263, 0, sizeof(char*));
                            # 686 "./neo-c.h"
                            # 682 "./neo-c.h"
                            if(_if_conditional413=position<0,                            _if_conditional413) {
                                # 683 "./neo-c.h"
                                position+=self->len;
                            }
                            # 686 "./neo-c.h"
                            it_261=self->head;
                            # 687 "./neo-c.h"
                            i_262=0;
                            # 694 "./neo-c.h"
                            while(_while_condtional42=it_261!=((void*)0),                            _while_condtional42) {
                                # 692 "./neo-c.h"
                                # 689 "./neo-c.h"
                                if(_if_conditional414=position==i_262,                                _if_conditional414) {
                                    # 690 "./neo-c.h"
                                    __result153__ = __result_obj__ = it_261->item;
                                    return __result153__;
                                }
                                # 692 "./neo-c.h"
                                it_261=it_261->next;
                                # 693 "./neo-c.h"
                                i_262++;
                            }
                            # 696 "./neo-c.h"
                            # 697 "./neo-c.h"
                            memset(&default_value_263,0,sizeof(char*));
                            # 698 "./neo-c.h"
                            __result154__ = __result_obj__ = default_value_263;
                            default_value_263 = come_decrement_ref_count2(default_value_263, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result154__;
                            default_value_263 = come_decrement_ref_count2(default_value_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj141;
struct tuple1$1sTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1735 "./neo-c.h"
                __dec_obj141=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1737 "./neo-c.h"
                __result155__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result155__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj156;
struct tuple3$3sTypepcharphbool* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1804 "./neo-c.h"
                            self->v1=v1;
                            # 1805 "./neo-c.h"
                            __dec_obj156=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1806 "./neo-c.h"
                            self->v3=v3;
                            # 1808 "./neo-c.h"
                            __result157__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result157__;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional429=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional429) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional430=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional430) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional431=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional431) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional453;
unsigned int hash_307;
unsigned int it_308;
_Bool _while_condtional46;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional487;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
_Bool same_key_exist_325;
char* it2_328;
_Bool _if_conditional496;
_Bool _if_conditional497;
struct map$2charphsClassph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_307, 0, sizeof(unsigned int));
memset(&it_308, 0, sizeof(unsigned int));
memset(&same_key_exist_325, 0, sizeof(_Bool));
memset(&it2_328, 0, sizeof(char*));
                                                # 1393 "./neo-c.h"
                                                # 1390 "./neo-c.h"
                                                if(_if_conditional453=self->len*10>=self->size,                                                _if_conditional453) {
                                                    # 1391 "./neo-c.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1393 "./neo-c.h"
                                                hash_307=string_get_hash_key(key)%self->size;
                                                # 1394 "./neo-c.h"
                                                it_308=hash_307;
                                                # 1452 "./neo-c.h"
                                                while(_while_condtional46=(_Bool)1,                                                _while_condtional46) {
                                                    # 1450 "./neo-c.h"
                                                    # 1397 "./neo-c.h"
                                                    if(_if_conditional465=self->item_existance[it_308],                                                    _if_conditional465) {
                                                        # 1420 "./neo-c.h"
                                                        # 1399 "./neo-c.h"
                                                        if(_if_conditional466=string_equals(self->keys[it_308],key),                                                        _if_conditional466) {
                                                            # 1410 "./neo-c.h"
                                                            # 1401 "./neo-c.h"
                                                            if(_if_conditional467=1,                                                            _if_conditional467) {
                                                                # 1402 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_308]);
                                                                # 1403 "./neo-c.h"
                                                                self->keys[it_308] = come_decrement_ref_count2(self->keys[it_308], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1404 "./neo-c.h"
                                                                self->keys[it_308]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1407 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_308]);
                                                                # 1408 "./neo-c.h"
                                                                self->keys[it_308]=key;
                                                            }
                                                            # 1417 "./neo-c.h"
                                                            # 1410 "./neo-c.h"
                                                            if(_if_conditional487=1,                                                            _if_conditional487) {
                                                                # 1411 "./neo-c.h"
                                                                come_call_finalizer2(sClass_finalize,self->items[it_308], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 1412 "./neo-c.h"
                                                                self->items[it_308]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1415 "./neo-c.h"
                                                                self->items[it_308]=item;
                                                            }
                                                            # 1417 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 1420 "./neo-c.h"
                                                        it_308++;
                                                        # 1430 "./neo-c.h"
                                                        # 1422 "./neo-c.h"
                                                        if(_if_conditional488=it_308>=self->size,                                                        _if_conditional488) {
                                                            # 1423 "./neo-c.h"
                                                            it_308=0;
                                                        }
                                                        else {
                                                            # 1430 "./neo-c.h"
                                                            # 1425 "./neo-c.h"
                                                            if(_if_conditional489=it_308==hash_307,                                                            _if_conditional489) {
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
                                                        self->item_existance[it_308]=(_Bool)1;
                                                        # 1439 "./neo-c.h"
                                                        # 1433 "./neo-c.h"
                                                        if(_if_conditional490=1,                                                        _if_conditional490) {
                                                            # 1434 "./neo-c.h"
                                                            self->keys[it_308]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1437 "./neo-c.h"
                                                            self->keys[it_308]=key;
                                                        }
                                                        # 1446 "./neo-c.h"
                                                        # 1439 "./neo-c.h"
                                                        if(_if_conditional491=1,                                                        _if_conditional491) {
                                                            # 1440 "./neo-c.h"
                                                            self->items[it_308]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1443 "./neo-c.h"
                                                            self->items[it_308]=item;
                                                        }
                                                        # 1446 "./neo-c.h"
                                                        self->len++;
                                                        # 1448 "./neo-c.h"
                                                        break;
                                                    }
                                                }
                                                # 1452 "./neo-c.h"
                                                same_key_exist_325=(_Bool)0;
                                                # 1460 "./neo-c.h"
                                                for(                                                it2_328=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_328=list$1charp_next(self->key_list)                                                ){
                                                    # 1458 "./neo-c.h"
                                                    # 1455 "./neo-c.h"
                                                    if(_if_conditional496=string_equals(it2_328,key),                                                    _if_conditional496) {
                                                        # 1456 "./neo-c.h"
                                                        same_key_exist_325=(_Bool)1;
                                                    }
                                                }
                                                # 1464 "./neo-c.h"
                                                # 1460 "./neo-c.h"
                                                if(_if_conditional497=!same_key_exist_325,                                                _if_conditional497) {
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
int size_290;
void* right_value377;
char** keys_291;
void* right_value378;
struct sClass** items_292;
void* right_value379;
_Bool* item_existance_293;
int len_294;
char* it_297;
struct sClass* default_value_300;
struct sClass* it2_303;
unsigned int hash_304;
int n_305;
_Bool _while_condtional45;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
struct sClass* default_value_306;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_290, 0, sizeof(int));
right_value377 = (void*)0;
memset(&keys_291, 0, sizeof(char**));
right_value378 = (void*)0;
memset(&items_292, 0, sizeof(struct sClass**));
right_value379 = (void*)0;
memset(&item_existance_293, 0, sizeof(_Bool*));
memset(&len_294, 0, sizeof(int));
memset(&it_297, 0, sizeof(char*));
memset(&default_value_300, 0, sizeof(struct sClass*));
memset(&it2_303, 0, sizeof(struct sClass*));
memset(&hash_304, 0, sizeof(unsigned int));
memset(&n_305, 0, sizeof(int));
memset(&default_value_306, 0, sizeof(struct sClass*));
                                                        # 1337 "./neo-c.h"
                                                        size_290=self->size*10;
                                                        # 1338 "./neo-c.h"
                                                        keys_291=(char**)come_increment_ref_count(((char**)(right_value377=(char**)come_calloc(1, sizeof(char*)*(1*(size_290)), "./neo-c.h", 1338, "char*%"))));
                                                        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1339 "./neo-c.h"
                                                        items_292=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value378=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_290)), "./neo-c.h", 1339, "sClass*%"))));
                                                        come_call_finalizer2(sClass_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 1340 "./neo-c.h"
                                                        item_existance_293=(_Bool*)come_increment_ref_count(((_Bool*)(right_value379=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_290)), "./neo-c.h", 1340, "bool"))));
                                                        right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1342 "./neo-c.h"
                                                        len_294=0;
                                                        # 1377 "./neo-c.h"
                                                        for(                                                        it_297=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_297=map$2charphsClassph_next(self)                                                        ){
                                                            # 1345 "./neo-c.h"
                                                            # 1346 "./neo-c.h"
                                                            memset(&default_value_300,0,sizeof(struct sClass*));
                                                            # 1347 "./neo-c.h"
                                                            it2_303=map$2charphsClassph_at(self,it_297,default_value_300);
                                                            # 1348 "./neo-c.h"
                                                            hash_304=string_get_hash_key(it_297)%size_290;
                                                            # 1349 "./neo-c.h"
                                                            n_305=hash_304;
                                                            # 1375 "./neo-c.h"
                                                            while(_while_condtional45=(_Bool)1,                                                            _while_condtional45) {
                                                                # 1374 "./neo-c.h"
                                                                # 1352 "./neo-c.h"
                                                                if(_if_conditional462=item_existance_293[n_305],                                                                _if_conditional462) {
                                                                    # 1354 "./neo-c.h"
                                                                    n_305++;
                                                                    # 1364 "./neo-c.h"
                                                                    # 1356 "./neo-c.h"
                                                                    if(_if_conditional463=n_305>=size_290,                                                                    _if_conditional463) {
                                                                        # 1357 "./neo-c.h"
                                                                        n_305=0;
                                                                    }
                                                                    else {
                                                                        # 1364 "./neo-c.h"
                                                                        # 1359 "./neo-c.h"
                                                                        if(_if_conditional464=n_305==hash_304,                                                                        _if_conditional464) {
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
                                                                    item_existance_293[n_305]=(_Bool)1;
                                                                    # 1367 "./neo-c.h"
                                                                    keys_291[n_305]=it_297;
                                                                    # 1368 "./neo-c.h"
                                                                    # 1369 "./neo-c.h"
                                                                    items_292[n_305]=map$2charphsClassph_at(self,it_297,default_value_306);
                                                                    # 1371 "./neo-c.h"
                                                                    len_294++;
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
                                                        self->keys=keys_291;
                                                        # 1382 "./neo-c.h"
                                                        self->items=items_292;
                                                        # 1383 "./neo-c.h"
                                                        self->item_existance=item_existance_293;
                                                        # 1385 "./neo-c.h"
                                                        self->size=size_290;
                                                        # 1386 "./neo-c.h"
                                                        self->len=len_294;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional454;
char* result_295;
char* __result162__;
_Bool _if_conditional455;
char* __result163__;
char* result_296;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_295, 0, sizeof(char*));
memset(&result_296, 0, sizeof(char*));
                                                            # 1304 "./neo-c.h"
                                                            # 1299 "./neo-c.h"
                                                            if(_if_conditional454=self==((void*)0),                                                            _if_conditional454) {
                                                                # 1300 "./neo-c.h"
                                                                # 1301 "./neo-c.h"
                                                                memset(&result_295,0,sizeof(char*));
                                                                # 1302 "./neo-c.h"
                                                                __result162__ = __result_obj__ = result_295;
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
                                                            memset(&result_296,0,sizeof(char*));
                                                            # 1312 "./neo-c.h"
                                                            __result164__ = __result_obj__ = result_296;
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
_Bool _if_conditional456;
char* result_298;
char* __result166__;
_Bool _if_conditional457;
char* __result167__;
char* result_299;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_298, 0, sizeof(char*));
memset(&result_299, 0, sizeof(char*));
                                                            # 1321 "./neo-c.h"
                                                            # 1316 "./neo-c.h"
                                                            if(_if_conditional456=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional456) {
                                                                # 1317 "./neo-c.h"
                                                                # 1318 "./neo-c.h"
                                                                memset(&result_298,0,sizeof(char*));
                                                                # 1319 "./neo-c.h"
                                                                __result166__ = __result_obj__ = result_298;
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
                                                            memset(&result_299,0,sizeof(char*));
                                                            # 1329 "./neo-c.h"
                                                            __result168__ = __result_obj__ = result_299;
                                                            return __result168__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_301;
unsigned int it_302;
_Bool _while_condtional44;
_Bool _if_conditional458;
_Bool _if_conditional459;
struct sClass* __result169__;
_Bool _if_conditional460;
_Bool _if_conditional461;
struct sClass* __result170__;
struct sClass* __result171__;
struct sClass* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_301, 0, sizeof(unsigned int));
memset(&it_302, 0, sizeof(unsigned int));
                                                                # 1226 "./neo-c.h"
                                                                hash_301=string_get_hash_key(((char*)key))%self->size;
                                                                # 1227 "./neo-c.h"
                                                                it_302=hash_301;
                                                                # 1251 "./neo-c.h"
                                                                while(_while_condtional44=(_Bool)1,                                                                _while_condtional44) {
                                                                    # 1249 "./neo-c.h"
                                                                    # 1230 "./neo-c.h"
                                                                    if(_if_conditional458=self->item_existance[it_302],                                                                    _if_conditional458) {
                                                                        # 1237 "./neo-c.h"
                                                                        # 1232 "./neo-c.h"
                                                                        if(_if_conditional459=string_equals(self->keys[it_302],key),                                                                        _if_conditional459) {
                                                                            # 1234 "./neo-c.h"
                                                                            __result169__ = __result_obj__ = self->items[it_302];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result169__;
                                                                        }
                                                                        # 1237 "./neo-c.h"
                                                                        it_302++;
                                                                        # 1245 "./neo-c.h"
                                                                        # 1239 "./neo-c.h"
                                                                        if(_if_conditional460=it_302>=self->size,                                                                        _if_conditional460) {
                                                                            # 1240 "./neo-c.h"
                                                                            it_302=0;
                                                                        }
                                                                        else {
                                                                            # 1245 "./neo-c.h"
                                                                            # 1242 "./neo-c.h"
                                                                            if(_if_conditional461=it_302==hash_301,                                                                            _if_conditional461) {
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
int it2_309;
struct list_item$1charp* it_310;
_Bool _while_condtional47;
_Bool _if_conditional468;
struct list$1charp* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_309, 0, sizeof(int));
memset(&it_310, 0, sizeof(struct list_item$1charp*));
                                                                    # 448 "./neo-c.h"
                                                                    it2_309=0;
                                                                    # 449 "./neo-c.h"
                                                                    it_310=self->head;
                                                                    # 460 "./neo-c.h"
                                                                    while(_while_condtional47=it_310!=((void*)0),                                                                    _while_condtional47) {
                                                                        # 455 "./neo-c.h"
                                                                        # 451 "./neo-c.h"
                                                                        if(_if_conditional468=string_equals(it_310->item,item),                                                                        _if_conditional468) {
                                                                            # 452 "./neo-c.h"
                                                                            list$1charp_delete(self,it2_309,it2_309+1);
                                                                            # 453 "./neo-c.h"
                                                                            break;
                                                                        }
                                                                        # 455 "./neo-c.h"
                                                                        it2_309++;
                                                                        # 457 "./neo-c.h"
                                                                        it_310=it_310->next;
                                                                    }
                                                                    # 460 "./neo-c.h"
                                                                    __result176__ = __result_obj__ = self;
                                                                    return __result176__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
int tmp_311;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
struct list$1charp* __result173__;
_Bool _if_conditional475;
_Bool _if_conditional476;
struct list_item$1charp* it_314;
int i_315;
_Bool _while_condtional49;
_Bool _if_conditional477;
struct list_item$1charp* prev_it_316;
_Bool _if_conditional478;
_Bool _if_conditional479;
struct list_item$1charp* it_317;
int i_318;
_Bool _while_condtional50;
_Bool _if_conditional480;
_Bool _if_conditional481;
struct list_item$1charp* prev_it_319;
struct list_item$1charp* it_320;
struct list_item$1charp* head_prev_it_321;
struct list_item$1charp* tail_it_322;
int i_323;
_Bool _while_condtional51;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
struct list_item$1charp* prev_it_324;
_Bool _if_conditional485;
_Bool _if_conditional486;
struct list$1charp* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_311, 0, sizeof(int));
memset(&it_314, 0, sizeof(struct list_item$1charp*));
memset(&i_315, 0, sizeof(int));
memset(&prev_it_316, 0, sizeof(struct list_item$1charp*));
memset(&it_317, 0, sizeof(struct list_item$1charp*));
memset(&i_318, 0, sizeof(int));
memset(&prev_it_319, 0, sizeof(struct list_item$1charp*));
memset(&it_320, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_321, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_322, 0, sizeof(struct list_item$1charp*));
memset(&i_323, 0, sizeof(int));
memset(&prev_it_324, 0, sizeof(struct list_item$1charp*));
                                                                                # 467 "./neo-c.h"
                                                                                # 464 "./neo-c.h"
                                                                                if(_if_conditional469=head<0,                                                                                _if_conditional469) {
                                                                                    # 465 "./neo-c.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 471 "./neo-c.h"
                                                                                # 467 "./neo-c.h"
                                                                                if(_if_conditional470=tail<0,                                                                                _if_conditional470) {
                                                                                    # 468 "./neo-c.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 477 "./neo-c.h"
                                                                                # 471 "./neo-c.h"
                                                                                if(_if_conditional471=head>tail,                                                                                _if_conditional471) {
                                                                                    # 472 "./neo-c.h"
                                                                                    tmp_311=tail;
                                                                                    # 473 "./neo-c.h"
                                                                                    tail=head;
                                                                                    # 474 "./neo-c.h"
                                                                                    head=tmp_311;
                                                                                }
                                                                                # 481 "./neo-c.h"
                                                                                # 477 "./neo-c.h"
                                                                                if(_if_conditional472=head<0,                                                                                _if_conditional472) {
                                                                                    # 478 "./neo-c.h"
                                                                                    head=0;
                                                                                }
                                                                                # 485 "./neo-c.h"
                                                                                # 481 "./neo-c.h"
                                                                                if(_if_conditional473=tail>self->len,                                                                                _if_conditional473) {
                                                                                    # 482 "./neo-c.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 489 "./neo-c.h"
                                                                                # 485 "./neo-c.h"
                                                                                if(_if_conditional474=head==tail,                                                                                _if_conditional474) {
                                                                                    # 486 "./neo-c.h"
                                                                                    __result173__ = __result_obj__ = self;
                                                                                    return __result173__;
                                                                                }
                                                                                # 584 "./neo-c.h"
                                                                                # 489 "./neo-c.h"
                                                                                if(_if_conditional475=head==0&&tail==self->len,                                                                                _if_conditional475) {
                                                                                    # 491 "./neo-c.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 584 "./neo-c.h"
                                                                                    # 493 "./neo-c.h"
                                                                                    if(_if_conditional476=head==0,                                                                                    _if_conditional476) {
                                                                                        # 494 "./neo-c.h"
                                                                                        it_314=self->head;
                                                                                        # 495 "./neo-c.h"
                                                                                        i_315=0;
                                                                                        # 517 "./neo-c.h"
                                                                                        while(_while_condtional49=it_314!=((void*)0),                                                                                        _while_condtional49) {
                                                                                            # 516 "./neo-c.h"
                                                                                            # 497 "./neo-c.h"
                                                                                            if(_if_conditional477=i_315<tail,                                                                                            _if_conditional477) {
                                                                                                # 498 "./neo-c.h"
                                                                                                prev_it_316=it_314;
                                                                                                # 500 "./neo-c.h"
                                                                                                it_314=it_314->next;
                                                                                                # 501 "./neo-c.h"
                                                                                                i_315++;
                                                                                                # 503 "./neo-c.h"
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                # 505 "./neo-c.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 516 "./neo-c.h"
                                                                                                # 507 "./neo-c.h"
                                                                                                if(_if_conditional478=i_315==tail,                                                                                                _if_conditional478) {
                                                                                                    # 508 "./neo-c.h"
                                                                                                    self->head=it_314;
                                                                                                    # 509 "./neo-c.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 510 "./neo-c.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 513 "./neo-c.h"
                                                                                                    it_314=it_314->next;
                                                                                                    # 514 "./neo-c.h"
                                                                                                    i_315++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 584 "./neo-c.h"
                                                                                        # 518 "./neo-c.h"
                                                                                        if(_if_conditional479=tail==self->len,                                                                                        _if_conditional479) {
                                                                                            # 519 "./neo-c.h"
                                                                                            it_317=self->head;
                                                                                            # 520 "./neo-c.h"
                                                                                            i_318=0;
                                                                                            # 542 "./neo-c.h"
                                                                                            while(_while_condtional50=it_317!=((void*)0),                                                                                            _while_condtional50) {
                                                                                                # 527 "./neo-c.h"
                                                                                                # 522 "./neo-c.h"
                                                                                                if(_if_conditional480=i_318==head,                                                                                                _if_conditional480) {
                                                                                                    # 523 "./neo-c.h"
                                                                                                    self->tail=it_317->prev;
                                                                                                    # 524 "./neo-c.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 541 "./neo-c.h"
                                                                                                # 527 "./neo-c.h"
                                                                                                if(_if_conditional481=i_318>=head,                                                                                                _if_conditional481) {
                                                                                                    # 528 "./neo-c.h"
                                                                                                    prev_it_319=it_317;
                                                                                                    # 530 "./neo-c.h"
                                                                                                    it_317=it_317->next;
                                                                                                    # 531 "./neo-c.h"
                                                                                                    i_318++;
                                                                                                    # 533 "./neo-c.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 535 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 538 "./neo-c.h"
                                                                                                    it_317=it_317->next;
                                                                                                    # 539 "./neo-c.h"
                                                                                                    i_318++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 544 "./neo-c.h"
                                                                                            it_320=self->head;
                                                                                            # 546 "./neo-c.h"
                                                                                            head_prev_it_321=((void*)0);
                                                                                            # 547 "./neo-c.h"
                                                                                            tail_it_322=((void*)0);
                                                                                            # 550 "./neo-c.h"
                                                                                            i_323=0;
                                                                                            # 576 "./neo-c.h"
                                                                                            while(_while_condtional51=it_320!=((void*)0),                                                                                            _while_condtional51) {
                                                                                                # 555 "./neo-c.h"
                                                                                                # 552 "./neo-c.h"
                                                                                                if(_if_conditional482=i_323==head,                                                                                                _if_conditional482) {
                                                                                                    # 553 "./neo-c.h"
                                                                                                    head_prev_it_321=it_320->prev;
                                                                                                }
                                                                                                # 559 "./neo-c.h"
                                                                                                # 555 "./neo-c.h"
                                                                                                if(_if_conditional483=i_323==tail,                                                                                                _if_conditional483) {
                                                                                                    # 556 "./neo-c.h"
                                                                                                    tail_it_322=it_320;
                                                                                                }
                                                                                                # 574 "./neo-c.h"
                                                                                                # 559 "./neo-c.h"
                                                                                                if(_if_conditional484=i_323>=head&&i_323<tail,                                                                                                _if_conditional484) {
                                                                                                    # 561 "./neo-c.h"
                                                                                                    prev_it_324=it_320;
                                                                                                    # 563 "./neo-c.h"
                                                                                                    it_320=it_320->next;
                                                                                                    # 564 "./neo-c.h"
                                                                                                    i_323++;
                                                                                                    # 566 "./neo-c.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_324, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 568 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 571 "./neo-c.h"
                                                                                                    it_320=it_320->next;
                                                                                                    # 572 "./neo-c.h"
                                                                                                    i_323++;
                                                                                                }
                                                                                            }
                                                                                            # 579 "./neo-c.h"
                                                                                            # 576 "./neo-c.h"
                                                                                            if(_if_conditional485=head_prev_it_321!=((void*)0),                                                                                            _if_conditional485) {
                                                                                                # 577 "./neo-c.h"
                                                                                                head_prev_it_321->next=tail_it_322;
                                                                                            }
                                                                                            # 582 "./neo-c.h"
                                                                                            # 579 "./neo-c.h"
                                                                                            if(_if_conditional486=tail_it_322!=((void*)0),                                                                                            _if_conditional486) {
                                                                                                # 580 "./neo-c.h"
                                                                                                tail_it_322->prev=head_prev_it_321;
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
struct list_item$1charp* it_312;
_Bool _while_condtional48;
struct list_item$1charp* prev_it_313;
struct list$1charp* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_312, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_313, 0, sizeof(struct list_item$1charp*));
                                                                                        # 433 "./neo-c.h"
                                                                                        it_312=self->head;
                                                                                        # 440 "./neo-c.h"
                                                                                        while(_while_condtional48=it_312!=((void*)0),                                                                                        _while_condtional48) {
                                                                                            # 435 "./neo-c.h"
                                                                                            prev_it_313=it_312;
                                                                                            # 436 "./neo-c.h"
                                                                                            it_312=it_312->next;
                                                                                            # 437 "./neo-c.h"
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_313, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional492;
char* result_326;
char* __result177__;
_Bool _if_conditional493;
char* __result178__;
char* result_327;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_326, 0, sizeof(char*));
memset(&result_327, 0, sizeof(char*));
                                                    # 290 "./neo-c.h"
                                                    # 285 "./neo-c.h"
                                                    if(_if_conditional492=self==((void*)0),                                                    _if_conditional492) {
                                                        # 286 "./neo-c.h"
                                                        # 287 "./neo-c.h"
                                                        memset(&result_326,0,sizeof(char*));
                                                        # 288 "./neo-c.h"
                                                        __result177__ = __result_obj__ = result_326;
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
                                                    memset(&result_327,0,sizeof(char*));
                                                    # 298 "./neo-c.h"
                                                    __result179__ = __result_obj__ = result_327;
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
_Bool _if_conditional494;
char* result_329;
char* __result181__;
_Bool _if_conditional495;
char* __result182__;
char* result_330;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_329, 0, sizeof(char*));
memset(&result_330, 0, sizeof(char*));
                                                    # 308 "./neo-c.h"
                                                    # 302 "./neo-c.h"
                                                    if(_if_conditional494=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional494) {
                                                        # 303 "./neo-c.h"
                                                        # 304 "./neo-c.h"
                                                        memset(&result_329,0,sizeof(char*));
                                                        # 305 "./neo-c.h"
                                                        __result181__ = __result_obj__ = result_329;
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
                                                    memset(&result_330,0,sizeof(char*));
                                                    # 316 "./neo-c.h"
                                                    __result183__ = __result_obj__ = result_330;
                                                    return __result183__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional498;
void* right_value380;
struct list_item$1charp* litem_331;
_Bool _if_conditional499;
void* right_value381;
struct list_item$1charp* litem_332;
void* right_value382;
struct list_item$1charp* litem_333;
struct list$1charp* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
memset(&litem_331, 0, sizeof(struct list_item$1charp*));
right_value381 = (void*)0;
memset(&litem_332, 0, sizeof(struct list_item$1charp*));
right_value382 = (void*)0;
memset(&litem_333, 0, sizeof(struct list_item$1charp*));
                                                        # 256 "./neo-c.h"
                                                        # 225 "./neo-c.h"
                                                        if(_if_conditional498=self->len==0,                                                        _if_conditional498) {
                                                            # 226 "./neo-c.h"
                                                            litem_331=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value380=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 228 "./neo-c.h"
                                                            litem_331->prev=((void*)0);
                                                            # 229 "./neo-c.h"
                                                            litem_331->next=((void*)0);
                                                            # 230 "./neo-c.h"
                                                            litem_331->item=item;
                                                            # 232 "./neo-c.h"
                                                            self->tail=litem_331;
                                                            # 233 "./neo-c.h"
                                                            self->head=litem_331;
                                                        }
                                                        else {
                                                            # 256 "./neo-c.h"
                                                            # 235 "./neo-c.h"
                                                            if(_if_conditional499=self->len==1,                                                            _if_conditional499) {
                                                                # 236 "./neo-c.h"
                                                                litem_332=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value381=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 238 "./neo-c.h"
                                                                litem_332->prev=self->head;
                                                                # 239 "./neo-c.h"
                                                                litem_332->next=((void*)0);
                                                                # 240 "./neo-c.h"
                                                                litem_332->item=item;
                                                                # 242 "./neo-c.h"
                                                                self->tail=litem_332;
                                                                # 243 "./neo-c.h"
                                                                self->head->next=litem_332;
                                                            }
                                                            else {
                                                                # 246 "./neo-c.h"
                                                                litem_333=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value382=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 248 "./neo-c.h"
                                                                litem_333->prev=self->tail;
                                                                # 249 "./neo-c.h"
                                                                litem_333->next=((void*)0);
                                                                # 250 "./neo-c.h"
                                                                litem_333->item=item;
                                                                # 252 "./neo-c.h"
                                                                self->tail->next=litem_333;
                                                                # 253 "./neo-c.h"
                                                                self->tail=litem_333;
                                                            }
                                                        }
                                                        # 256 "./neo-c.h"
                                                        self->len++;
                                                        # 258 "./neo-c.h"
                                                        __result184__ = __result_obj__ = self;
                                                        return __result184__;
}

